/*
 * XREFs of StorpLogPerUnitStatistics @ 0x1C003D150
 * Callers:
 *     StorpLogStatistics @ 0x1C003D964 (StorpLogStatistics.c)
 * Callees:
 *     RaUnitReleaseRemoveLock @ 0x1C0002064 (RaUnitReleaseRemoveLock.c)
 *     RaUnitAcquireRemoveLock @ 0x1C000207C (RaUnitAcquireRemoveLock.c)
 *     StorpTelemetrySendAdaptiveIdleCounters @ 0x1C004005C (StorpTelemetrySendAdaptiveIdleCounters.c)
 *     StorpTelemetrySendUnitErrorData @ 0x1C0040640 (StorpTelemetrySendUnitErrorData.c)
 *     StorpTelemetrySendUnitPauseRequestCounters @ 0x1C0040DE4 (StorpTelemetrySendUnitPauseRequestCounters.c)
 *     StorpTelemetrySendUnitPerfData @ 0x1C0040FC0 (StorpTelemetrySendUnitPerfData.c)
 *     StorpTelemetrySendUnitQos @ 0x1C004144C (StorpTelemetrySendUnitQos.c)
 */

void __fastcall StorpLogPerUnitStatistics(__int64 a1, char a2)
{
  __int64 v4; // rcx
  _BYTE *v5; // rax
  unsigned int v6; // eax
  int v7; // ecx
  struct _IO_WORKITEM *WorkItem; // rax

  if ( (a2 & 4) != 0 )
    StorpTelemetrySendUnitPerfData();
  if ( (a2 & 0x10) != 0 )
    StorpTelemetrySendUnitErrorData(a1);
  if ( (a2 & 0x20) != 0 && *(_BYTE *)(a1 + 2552) == 1 )
    StorpTelemetrySendUnitQos(a1);
  if ( (a2 & 8) != 0 )
  {
    StorpTelemetrySendAdaptiveIdleCounters(a1);
    v4 = *(_QWORD *)(a1 + 24);
    if ( !*(_BYTE *)(v4 + 5452) )
    {
      v5 = *(_BYTE **)(a1 + 96);
      if ( v5 )
      {
        if ( (*v5 & 0x1F) == 0 )
        {
          v6 = *(_DWORD *)(v4 + 4356);
          if ( v6 <= 0x11 )
          {
            v7 = 133384;
            if ( _bittest(&v7, v6) )
            {
              if ( (int)RaUnitAcquireRemoveLock(a1) >= 0 )
              {
                WorkItem = IoAllocateWorkItem(*(PDEVICE_OBJECT *)(a1 + 8));
                if ( WorkItem )
                  IoQueueWorkItem(
                    WorkItem,
                    (PIO_WORKITEM_ROUTINE)StorpDeviceHealthWorkItemRoutine,
                    NormalWorkQueue,
                    WorkItem);
                else
                  RaUnitReleaseRemoveLock((struct _KEVENT *)a1);
              }
            }
          }
        }
      }
    }
  }
  if ( (a2 & 0x40) != 0 )
    StorpTelemetrySendUnitPauseRequestCounters(a1);
  if ( (a2 & 0x30) != 0 )
    *(_DWORD *)(a1 + 1824) = 0;
}
