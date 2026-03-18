/*
 * XREFs of ?StopFilterKeysTimers@@YAXXZ @ 0x1C01E4558
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 * Callees:
 *     FindTimer @ 0x1C00ECDEC (FindTimer.c)
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
