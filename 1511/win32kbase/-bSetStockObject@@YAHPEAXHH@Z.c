/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C005DAB0
 * Callers:
 *     bInitICM @ 0x1C013A470 (bInitICM.c)
 *     bInitPALOBJ @ 0x1C013A6D4 (bInitPALOBJ.c)
 *     bInitBrush @ 0x1C013A910 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C013A9B0 (bInitBRUSHOBJ.c)
 *     bInitBMOBJ @ 0x1C013AE60 (bInitBMOBJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetStockObject(unsigned __int64 a1, int a2, int a3)
{
  __int64 result; // rax
  void **v4; // r9
  _QWORD **SystemArgument2; // rcx

  result = 0LL;
  if ( a1 )
  {
    v4 = (void **)(a1 | 0x800000);
    if ( a3 )
      (&gahStockObjects96)[a2] = v4;
    else
      (&gahStockObjects)[a2] = v4;
    SystemArgument2 = (_QWORD **)WPP_MAIN_CB.Dpc.SystemArgument2;
    *((_WORD *)WPP_MAIN_CB.Dpc.SystemArgument2 + 12 * (unsigned __int16)v4 + 6) = WORD1(v4);
    *SystemArgument2[3 * (unsigned __int16)v4] = v4;
    return 1LL;
  }
  return result;
}
