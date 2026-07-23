/*
 * XREFs of PopBatteryRefreshStatus @ 0x140127210
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14066FAA0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     <none>
 */

__int64 PopBatteryRefreshStatus()
{
  return PopBatteryQueueWork(1LL);
}
