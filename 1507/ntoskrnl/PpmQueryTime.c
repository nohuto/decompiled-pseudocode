/*
 * XREFs of PpmQueryTime @ 0x140017D30
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x1405B0720 (PpmIdleInitializeConcurrency.c)
 *     PdcPoCurrentPdcPhase @ 0x1406B7540 (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x1406B76EC (PdcPoResiliencyClient.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
