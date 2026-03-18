/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x140581790
 * Callers:
 *     PfSnBeginBootPhase @ 0x1403D3020 (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x140669ED4 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_1403283A0 = 0LL;
}
