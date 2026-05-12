/*
 * XREFs of StorpLogPerUnitStatistics @ 0x1C0037550
 * Callers:
 *     StorpLogStatistics @ 0x1C0037D0C (StorpLogStatistics.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0003980 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C0003998 (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C0038368 (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C0038584 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C003896C (StorpTelemetrySendUnitPerfData.c)
 */

void __fastcall StorpLogPerUnitStatistics(__int64 a1, char a2)
{
  struct _IO_WORKITEM *WorkItem; // rax

  if ( (a2 & 4) != 0 )
    StorpTelemetrySendUnitPerfData();
  if ( (a2 & 0x10) != 0 )
    StorpTelemetrySendUnitErrorData(a1);
  if ( (a2 & 8) != 0 )
  {
    StorpTelemetrySendAdaptiveIdleCounters(a1);
    if ( (int)RaUnitAcquireRemoveLock(a1) >= 0 )
    {
      WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
      if ( WorkItem )
        IoQueueWorkItem(WorkItem, StorpSmartAttributesWorkItemRoutine, NormalWorkQueue, WorkItem);
      else
        RaUnitReleaseRemoveLock(a1);
    }
  }
}
