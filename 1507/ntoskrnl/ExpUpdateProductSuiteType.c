/*
 * XREFs of ExpUpdateProductSuiteType @ 0x1407DFE10
 * Callers:
 *     ExpInitSystemPhase1 @ 0x1407C3074 (ExpInitSystemPhase1.c)
 *     ExpInitSystemPhase0 @ 0x1407DF914 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlGetProductInfo @ 0x14016CA9C (RtlGetProductInfo.c)
 */

void __fastcall ExpUpdateProductSuiteType(int a1)
{
  int v1; // ebx
  int v2; // ecx
  int *v3; // rdx
  __int64 v4; // r9
  int v5; // eax
  ULONG ReturnedProductType; // [rsp+40h] [rbp+8h] BYREF

  v1 = 0;
  ReturnedProductType = 0;
  if ( a1 )
  {
    if ( a1 == 1 && ExpProductInfoMappedType )
    {
      if ( MEMORY[0xFFFFF78000000264] == 2 && ExpProductInfoMappedType == 3 )
        ExpProductInfoMappedType = 2;
      else
        MEMORY[0xFFFFF78000000264] = ExpProductInfoMappedType;
    }
  }
  else
  {
    ExpProductInfoMappedType = 0;
    if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType) && ReturnedProductType != -1412584499 )
    {
      v2 = dword_140356908;
      v3 = &dword_1407FF624;
      v4 = 51LL;
      do
      {
        if ( *(v3 - 1) == ReturnedProductType )
        {
          v1 = *v3;
          ExpProductInfoMappedType = v3[1];
        }
        v5 = *v3;
        v3 += 3;
        v2 &= ~v5;
        --v4;
      }
      while ( v4 );
      dword_140356908 = v1 | v2;
    }
  }
}
