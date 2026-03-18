/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x1405C2CF4
 * Callers:
 *     PfSnBeginBootPhase @ 0x1403F6FE8 (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x1406B0294 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_140353310 = 0LL;
}
