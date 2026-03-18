/*
 * XREFs of PpmConvertTimeTo @ 0x14020A734
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14066F9BC (PdcPoCurrentPdcPhase.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406754AC (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PpmConvertTimeTo(unsigned __int64 a1, unsigned __int64 a2)
{
  return PpmConvertTime(a1, PopQpcFrequency, a2);
}
