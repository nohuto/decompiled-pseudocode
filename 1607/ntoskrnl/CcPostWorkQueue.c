/*
 * XREFs of CcPostWorkQueue @ 0x140071028
 * Callers:
 *     CcNotifyOfMappedWrite @ 0x14002030C (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadEx @ 0x14006E990 (CcScheduleReadAheadEx.c)
 *     CcLazyWriteScan @ 0x140070820 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x14014031C (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14005F9DC (ExQueueWorkItem.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14006B3C8 (CcPerfLogWorkItemEnqueue.c)
 *     KeAcquireQueuedSpinLock @ 0x1400E6BD0 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400E6C40 (KeReleaseQueuedSpinLock.c)
 */

void __fastcall CcPostWorkQueue(__int64 a1, __int64 *a2)
{
  PWORK_QUEUE_ITEM v2; // rbx
  KIRQL v5; // r8
  unsigned int v6; // ecx
  __int64 *v7; // rax
  bool v8; // zf
  struct _LIST_ENTRY *Flink; // rax

  v2 = 0LL;
  if ( (xmmword_1403AA2D0 & 0x20000) != 0 )
    CcPerfLogWorkItemEnqueue(a2, a1, 0, ((*(_BYTE *)(a1 + 120) - 2) & 0xFD) == 0);
  v5 = KeAcquireQueuedSpinLock(8uLL);
  if ( *(_BYTE *)(a1 + 120) != 3
    || (__int64 *)CcRegularWorkQueue == &CcRegularWorkQueue
    || CcGlobalDirtyPageStatistics < (unsigned __int64)CcGlobalDirtyPageThresholds >> 2
    && (unsigned __int64)CcGlobalDirtyPageStatistics <= *(_QWORD *)(*(_QWORD *)qword_140327038 + 6464LL) >> 1 )
  {
    v6 = CcMaxNumberOfWriteBehindThreads;
  }
  else
  {
    v6 = CcMaxNumberOfWriteBehindThreads;
    if ( CcMaxNumberOfWriteBehindThreads >= (unsigned int)CcNumberWorkerThreads )
      CcAddExtraWriteBehindThreads = 1;
  }
  v7 = (__int64 *)a2[1];
  if ( (__int64 *)*v7 != a2 )
    __fastfail(3u);
  v8 = CcQueueThrottle == 0;
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v7;
  *v7 = a1;
  a2[1] = a1;
  if ( v8
    && CcIdleWorkerThreadList != (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList
    && (*(_BYTE *)(a1 + 120) != 2 || CcExecutingWriteBehindWorkItems + 1 <= v6) )
  {
    v2 = CcIdleWorkerThreadList;
    Flink = CcIdleWorkerThreadList->List.Flink;
    if ( (PWORK_QUEUE_ITEM *)CcIdleWorkerThreadList->List.Blink != &CcIdleWorkerThreadList
      || (PWORK_QUEUE_ITEM)Flink->Blink != CcIdleWorkerThreadList )
    {
      __fastfail(3u);
    }
    ++CcNumberActiveWorkerThreads;
    CcIdleWorkerThreadList = (PWORK_QUEUE_ITEM)Flink;
    Flink->Blink = (struct _LIST_ENTRY *)&CcIdleWorkerThreadList;
  }
  KeReleaseQueuedSpinLock(8uLL, v5);
  if ( v2 )
  {
    v2->List.Flink = 0LL;
    ExQueueWorkItem(v2, CriticalWorkQueue);
  }
}
