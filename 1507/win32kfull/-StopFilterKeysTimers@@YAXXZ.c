/*
 * XREFs of ?StopFilterKeysTimers@@YAXXZ @ 0x1C01EDC58
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 * Callees:
 *     FindTimer @ 0x1C0079B7C (FindTimer.c)
 */

void StopFilterKeysTimers(void)
{
  if ( gtmridFKResponse )
  {
    FindTimer(0LL, gtmridFKResponse, 4u, 1, 0LL);
    gtmridFKResponse = 0LL;
  }
  if ( gtmridFKAcceptanceDelay )
  {
    FindTimer(0LL, gtmridFKAcceptanceDelay, 4u, 1, 0LL);
    gtmridFKAcceptanceDelay = 0LL;
  }
  gLastVkDown = 0;
  gBounceVk = 0;
}
