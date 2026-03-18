/*
 * XREFs of PpmQueryTime @ 0x14009FE18
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x140537030 (PpmIdleInitializeConcurrency.c)
 *     PdcPoCurrentPdcPhase @ 0x1406376E0 (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x14063795C (PdcPoResiliencyClient.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
