/*
 * XREFs of PpmConvertTimeTo @ 0x14023FA4C
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406B7540 (PdcPoCurrentPdcPhase.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406BD240 (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
