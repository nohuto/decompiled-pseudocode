/*
 * XREFs of PopBatteryRefreshStatus @ 0x140117AD4
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406376E0 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     <none>
 */

__int64 PopBatteryRefreshStatus()
{
  return PopBatteryQueueWork(1LL);
}
