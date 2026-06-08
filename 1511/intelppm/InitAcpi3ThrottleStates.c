/*
 * XREFs of InitAcpi3ThrottleStates @ 0x1C0013470
 * Callers:
 *     InitAcpiThrottleStates @ 0x1C00132DC (InitAcpiThrottleStates.c)
 * Callees:
 *     AcpiEval_TSS @ 0x1C0013EA4 (AcpiEval_TSS.c)
 *     AcpiEval_PCT_PTC @ 0x1C0014634 (AcpiEval_PCT_PTC.c)
 */

__int64 __fastcall InitAcpi3ThrottleStates(__int64 a1)
{
  int v2; // eax
  unsigned int v3; // ebx
  int v4; // eax

  v2 = AcpiEval_PCT_PTC(a1, 1129599071LL, a1 + 416);
  v3 = 0;
  if ( v2 < 0 )
    v3 = v2;
  v4 = AcpiEval_TSS(a1, a1 + 440);
  if ( v4 < 0 )
    return (unsigned int)v4;
  return v3;
}
