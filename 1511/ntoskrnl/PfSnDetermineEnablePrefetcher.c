/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x14054B930
 * Callers:
 *     PfSnBeginBootPhase @ 0x1403A6AC8 (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x140631D64 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_1403055A0 = 0LL;
}
