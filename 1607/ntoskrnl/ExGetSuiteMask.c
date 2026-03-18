/*
 * XREFs of ExGetSuiteMask @ 0x140575AF4
 * Callers:
 *     PspSiloInitializeSuiteMask @ 0x14067ED58 (PspSiloInitializeSuiteMask.c)
 *     ExpInitSystemPhase0 @ 0x1407B58A0 (ExpInitSystemPhase0.c)
 * Callees:
 *     RtlGetProductInfo @ 0x1401480D0 (RtlGetProductInfo.c)
 *     ExpGetProductInfoSuiteTypeMap @ 0x140575B68 (ExpGetProductInfoSuiteTypeMap.c)
 *     ExpParseSuiteMask @ 0x140575BA8 (ExpParseSuiteMask.c)
 *     ExpGetNonMatchingSuiteMask @ 0x1406AC9CC (ExpGetNonMatchingSuiteMask.c)
 */

__int64 __fastcall ExGetSuiteMask(__int64 a1, char a2)
{
  int v3; // ebx
  __int64 v4; // rcx
  unsigned int v5; // ebx
  _BYTE v7[4]; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+34h] [rbp-14h]
  ULONG ReturnedProductType; // [rsp+58h] [rbp+10h] BYREF

  v3 = ExpParseSuiteMask();
  if ( RtlGetProductInfo(6u, 0, 0, 0, &ReturnedProductType) )
  {
    if ( ReturnedProductType != -1412584499 )
    {
      v3 &= ~(unsigned int)ExpGetNonMatchingSuiteMask();
      if ( (unsigned __int8)ExpGetProductInfoSuiteTypeMap(v4, v7) )
        v3 |= v8;
    }
  }
  v5 = v3 | 0x10;
  if ( !a2 )
    v5 |= 0x100u;
  return v5;
}
