/*
 * XREFs of PspGetRateControlHeaderPtr @ 0x1403EBDB4
 * Callers:
 *     PspQueryRateControlHistory @ 0x1403EBB78 (PspQueryRateControlHistory.c)
 *     PspRemoveRateControl @ 0x1406423B4 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x140642730 (PspSetJobRateControl.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspGetRateControlHeaderPtr(__int64 a1, int a2)
{
  if ( !a2 )
    return a1 + 1280;
  if ( a2 == 1 )
    return a1 + 1288;
  return a1 + 1000;
}
