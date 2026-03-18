/*
 * XREFs of PopBatteryRefreshStatus @ 0x140126CA0
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x14066F9BC (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     <none>
 */

__int64 PopBatteryRefreshStatus()
{
  return PopBatteryQueueWork(1LL);
}
