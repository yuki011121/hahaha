#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a,sn,b;	
	scanf("%d",&n);
	a=0;
	sn=0;

	for(i=1;i<=n;i++){
		b=pow(10,i-1);
		a=b*2+a;
		sn=sn+a;
	}
	printf("%d",sn);
	return 0;
	
}
