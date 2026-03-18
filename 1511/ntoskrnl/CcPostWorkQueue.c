/*
 * XREFs of CcPostWorkQueue @ 0x140100FF0
 * Callers:
 *     CcScheduleReadAheadEx @ 0x14002E96C (CcScheduleReadAheadEx.c)
 *     CcNotifyOfMappedWrite @ 0x14002F2E8 (CcNotifyOfMappedWrite.c)
 *     CcLazyWriteScan @ 0x140100810 (CcLazyWriteScan.c)
 *     CcQueueLazyWriteScanThread @ 0x1401379A0 (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     KeAcquireQueuedSpinLock @ 0x1400B0A70 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x1400B0AE0 (KeReleaseQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     CcPerfLogWorkItemEnqueue @ 0x140123444 (CcPerfLogWorkItemEnqueue.c)
 */

void __fastcall CcPostWorkQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PWORK_QUEUE_ITEM v4; // rbx
  KIRQL v7; // r8
  unsigned int v8; // ecx
  _QWORD *v9; // rax
  bool v10; // zf
  struct _LIST_ENTRY *Flink; // rax

  v4 = 0LL;
  if ( (xmmword_140382290 & 0x20000) != 0 )
  {
    if ( ((*(_BYTE *)(a1 + 104) - 2) & 0xFD) != 0 )
      a4 = 0LL;
    else
      LOBYTE(a4) = 1;
    CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4);
  }
  v7 = KeAcquireQueuedSpinLock(8uLL);
  if ( *(_BYTE *)(a1 + 104) != 3
    || (__int64 *)CcRegularWorkQueue == &CcRegularWorkQueue
    || CcGlobalDirtyPageStatistics < (unsigned __int64)CcGlobalDirtyPageThresholds >> 2
    && (unsigned __int64)CcGlobalDirtyPageStatistics <= *(_QWORD *)(*(_QWORD *)qword_1402FEC28 + 5888LL) >> 1 )
  {
    v8 = CcMaxNumberOfWriteBehindThreads;
  }
  else
  {
    v8 = CcMaxNumberOfWriteBehindThreads;
    if ( CcMaxNumberOfWriteBehindThreads >= (unsigned int)CcNumberWorkerThreads )
      CcAddExtraWriteBehindThreads = 1;
  }
  v9 = *(_QWORD **)(a2 + 8);
  *(_QWORD *)a1 = a2;
  *(_QWORD *)(a1 + 8) = v9;
  if ( *v9 != a2 )
    __fastfail(3u);
  v10 = CcQueueThrottle == 0;
  *v9 = a1;
  *(_QWORD *)(a2 + 8) = a1;
  if ( v10
    && CcIdleWorkerThreadList != (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList
    && (*(_BYTE *)(a1 + 104) != 2 || CcExecutingWriteBehindWorkItems + 1 <= v8) )
  {
    v4 = CcIdleWorkerThreadList;
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
  KeReleaseQueuedSpinLock(8uLL, v7);
  if ( v4 )
  {
    v4->List.Flink = 0LL;
    ExQueueWorkItem(v4, CriticalWorkQueue);
  }
}
