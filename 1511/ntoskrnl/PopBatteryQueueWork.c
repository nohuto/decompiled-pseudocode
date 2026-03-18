/*
 * XREFs of PopBatteryQueueWork @ 0x14011B90C
 * Callers:
 *     PopBatteryWakeDpc @ 0x140117A3C (PopBatteryWakeDpc.c)
 *     PopBatteryRefreshStatus @ 0x140117AD4 (PopBatteryRefreshStatus.c)
 *     PopBatteryIrpComplete @ 0x1401ECEEC (PopBatteryIrpComplete.c)
 *     PopSpoilBatteryEstimate @ 0x1404F5600 (PopSpoilBatteryEstimate.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x1404FA018 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryRemove @ 0x140636F3C (PopBatteryRemove.c)
 * Callees:
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
