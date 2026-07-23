/*
 * XREFs of PpmQueryTime @ 0x1400D497C
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x14056A9F0 (PpmIdleInitializeConcurrency.c)
 *     PdcPoCurrentPdcPhase @ 0x14066FAA0 (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x14066FCE8 (PdcPoResiliencyClient.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
