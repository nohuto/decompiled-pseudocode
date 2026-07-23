/*
 * XREFs of PfSnDetermineEnablePrefetcher @ 0x140581C3C
 * Callers:
 *     PfSnBeginBootPhase @ 0x1403D3020 (PfSnBeginBootPhase.c)
 *     PfpParametersWatcher @ 0x140669FB8 (PfpParametersWatcher.c)
 * Callees:
 *     <none>
 */

void PfSnDetermineEnablePrefetcher()
{
  if ( InitSafeBootMode )
    qword_1403283E0 = 0LL;
}
