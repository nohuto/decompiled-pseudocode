/*
 * XREFs of PopBatteryQueueWork @ 0x140131898
 * Callers:
 *     PopBatteryWakeDpc @ 0x140126BD4 (PopBatteryWakeDpc.c)
 *     PopBatteryRefreshStatus @ 0x140126CA0 (PopBatteryRefreshStatus.c)
 *     PopBatteryIrpComplete @ 0x140205D38 (PopBatteryIrpComplete.c)
 *     PopSpoilBatteryEstimate @ 0x140534684 (PopSpoilBatteryEstimate.c)
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x140547C48 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryRemove @ 0x14066F320 (PopBatteryRemove.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005FE5C (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
