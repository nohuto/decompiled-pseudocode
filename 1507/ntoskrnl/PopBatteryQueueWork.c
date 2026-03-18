/*
 * XREFs of PopBatteryQueueWork @ 0x14014FB80
 * Callers:
 *     PopBatteryWakeDpc @ 0x14014C99C (PopBatteryWakeDpc.c)
 *     PopBatteryIrpComplete @ 0x14023B200 (PopBatteryIrpComplete.c)
 *     PopBatteryRefreshStatus @ 0x14023B278 (PopBatteryRefreshStatus.c)
 *     PopSpoilBatteryEstimate @ 0x140569B58 (PopSpoilBatteryEstimate.c)
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x14056C220 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryRemove @ 0x1406B6CA8 (PopBatteryRemove.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
