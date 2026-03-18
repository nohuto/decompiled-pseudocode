/*
 * XREFs of PspGetRateControlHeaderPtr @ 0x140506F24
 * Callers:
 *     PspQueryRateControlHistory @ 0x140506D2C (PspQueryRateControlHistory.c)
 *     PspRemoveRateControl @ 0x1406C4960 (PspRemoveRateControl.c)
 *     PspSetJobRateControl @ 0x1406C4C78 (PspSetJobRateControl.c)
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
