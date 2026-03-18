/*
 * XREFs of PpmQueryTime @ 0x1400D6ADC
 * Callers:
 *     PpmIdleInitializeConcurrency @ 0x14056A4B0 (PpmIdleInitializeConcurrency.c)
 *     PdcPoCurrentPdcPhase @ 0x14066F9BC (PdcPoCurrentPdcPhase.c)
 *     PdcPoResiliencyClient @ 0x14066FC04 (PdcPoResiliencyClient.c)
 * Callees:
 *     <none>
 */

LARGE_INTEGER PpmQueryTime()
{
  return KeQueryPerformanceCounter(0LL);
}
