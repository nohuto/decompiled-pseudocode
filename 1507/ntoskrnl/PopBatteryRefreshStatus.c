/*
 * XREFs of PopBatteryRefreshStatus @ 0x14023B278
 * Callers:
 *     PdcPoCurrentPdcPhase @ 0x1406B7540 (PdcPoCurrentPdcPhase.c)
 * Callees:
 *     <none>
 */

void PopBatteryRefreshStatus()
{
  PopBatteryQueueWork(1u);
}
