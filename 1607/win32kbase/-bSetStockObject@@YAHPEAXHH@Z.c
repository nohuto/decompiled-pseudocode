/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005C1A0
 * Callers:
 *     bInitBrush @ 0x1C0155DCC (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0155E74 (bInitBRUSHOBJ.c)
 *     bInitPALOBJ @ 0x1C0156360 (bInitPALOBJ.c)
 *     bInitICM @ 0x1C0156614 (bInitICM.c)
 *     bInitBMOBJ @ 0x1C0156878 (bInitBMOBJ.c)
 * Callees:
 *     HmgModifyHandleType @ 0x1C005C300 (HmgModifyHandleType.c)
 */

__int64 __fastcall bSetStockObject(unsigned __int64 a1, int a2, int a3)
{
  __int64 result; // rax
  void *v4; // r9

  result = 0LL;
  if ( a1 )
  {
    v4 = (void *)(a1 | 0x800000);
    if ( a3 )
      gahStockObjects96[a2] = v4;
    else
      gahStockObjects[a2] = v4;
    HmgModifyHandleType(v4);
    return 1LL;
  }
  return result;
}
