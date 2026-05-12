/*
 * XREFs of StorpLogPerUnitStatistics @ 0x1C00393B0
 * Callers:
 *     StorpLogStatistics @ 0x1C0039B90 (StorpLogStatistics.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C00047F4 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000480C (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C003A5BC (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C003A7D8 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C003AC14 (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendUnitQos @ 0x1C003B2E0 (StorpTelemetrySendUnitQos.c)
 */

void __fastcall StorpLogPerUnitStatistics(__int64 a1, char a2)
{
  struct _IO_WORKITEM *WorkItem; // rax

  if ( (a2 & 4) != 0 )
    StorpTelemetrySendUnitPerfData();
  if ( (a2 & 0x10) != 0 )
    StorpTelemetrySendUnitErrorData(a1);
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 2528) == 1 )
    StorpTelemetrySendUnitQos(a1);
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
  if ( (a2 & 0x30) != 0 )
    *(_DWORD *)(a1 + 1816) = 0;
}
