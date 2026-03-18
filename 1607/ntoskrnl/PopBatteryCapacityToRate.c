/*
 * XREFs of PopBatteryCapacityToRate @ 0x1402075C4
 * Callers:
 *     PopCalculateCsSummary @ 0x1402075E0 (PopCalculateCsSummary.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406754AC (PopDripsWatchdogWorkerRoutine.c)
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
