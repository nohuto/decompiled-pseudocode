/*
 * XREFs of PopBatteryCapacityToRate @ 0x1402073F0
 * Callers:
 *     PopCalculateCsSummary @ 0x14020740C (PopCalculateCsSummary.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140675590 (PopDripsWatchdogWorkerRoutine.c)
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
