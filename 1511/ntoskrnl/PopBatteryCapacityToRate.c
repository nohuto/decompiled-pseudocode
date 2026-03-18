/*
 * XREFs of PopBatteryCapacityToRate @ 0x1401EEAB8
 * Callers:
 *     PopCalculateCsSummary @ 0x1401EEAD4 (PopCalculateCsSummary.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14063CD1C (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall PopBatteryCapacityToRate(unsigned int a1, unsigned __int64 a2)
{
  if ( a2 )
    return 3600000000u * (unsigned __int64)a1 / a2;
  else
    return 0LL;
}
