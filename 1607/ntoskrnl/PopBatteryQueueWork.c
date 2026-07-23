/*
 * XREFs of PopBatteryQueueWork @ 0x140131E08
 * Callers:
 *     PopBatteryWakeDpc @ 0x140127144 (PopBatteryWakeDpc.c)
 *     PopBatteryRefreshStatus @ 0x140127210 (PopBatteryRefreshStatus.c)
 *     PopBatteryIrpComplete @ 0x140205B64 (PopBatteryIrpComplete.c)
 *     PopSpoilBatteryEstimate @ 0x140534BC4 (PopSpoilBatteryEstimate.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     PopBatteryUpdateCurrentState @ 0x140548188 (PopBatteryUpdateCurrentState.c)
 *     PopBatteryRemove @ 0x14066F404 (PopBatteryRemove.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 */

void __fastcall PopBatteryQueueWork(unsigned int a1)
{
  _m_prefetchw(&PopBatteryWorkRequests);
  if ( !_InterlockedOr(&PopBatteryWorkRequests, a1) )
    ExQueueWorkItem(&PopBatteryWorkItem, DelayedWorkQueue);
}
