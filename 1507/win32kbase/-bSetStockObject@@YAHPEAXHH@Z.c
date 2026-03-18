/*
 * XREFs of ?bSetStockObject@@YAHPEAXHH@Z @ 0x1C007BBE0
 * Callers:
 *     bInitBMOBJ @ 0x1C0137ECC (bInitBMOBJ.c)
 *     bInitICM @ 0x1C0137F6C (bInitICM.c)
 *     bInitPALOBJ @ 0x1C01381D0 (bInitPALOBJ.c)
 *     bInitBrush @ 0x1C0138488 (bInitBrush.c)
 *     bInitBRUSHOBJ @ 0x1C0138530 (bInitBRUSHOBJ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSetStockObject(unsigned __int64 a1, int a2, int a3)
{
  __int64 result; // rax
  void **v4; // r9
  __int64 v5; // rcx

  result = 0LL;
  if ( a1 )
  {
    v4 = (void **)(a1 | 0x800000);
    if ( a3 )
      (&gahStockObjects96)[a2] = v4;
    else
      *((_QWORD *)&WPP_MAIN_CB.DeviceQueue.Busy + a2) = v4;
    v5 = *(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement;
    *(_WORD *)(*(_QWORD *)&WPP_MAIN_CB.AlignmentRequirement + 24LL * (unsigned __int16)v4 + 12) = WORD1(v4);
    **(_QWORD **)(v5 + 24LL * (unsigned __int16)v4) = v4;
    return 1LL;
  }
  return result;
}
