/*
 * XREFs of CcIncrementWriteBehindPriority @ 0x1401A8AD8
 * Callers:
 *     CcLazyWriteScan @ 0x140100810 (CcLazyWriteScan.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x140102D74 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 */

void __fastcall CcIncrementWriteBehindPriority(__int64 a1)
{
  __int64 v1; // rax
  PWORK_QUEUE_ITEM v2; // rbx
  __int64 v4; // rcx
  __int64 v5; // rdx
  _QWORD *v6; // rax
  __int64 **v7; // rax
  bool v8; // zf
  struct _LIST_ENTRY *Flink; // rax

  v1 = *(_QWORD *)(a1 + 496);
  v2 = 0LL;
  if ( v1 && (v1 & 1) == 0 )
  {
    KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
    v4 = *(_QWORD *)(a1 + 496);
    if ( v4 )
    {
      *(_QWORD *)(a1 + 496) = v4 | 1;
      v5 = *(_QWORD *)v4;
      v6 = *(_QWORD **)(v4 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v6 != v4 )
        __fastfail(3u);
      *v6 = v5;
      *(_QWORD *)(v5 + 8) = v6;
      *(_QWORD *)(v4 + 8) = 0LL;
      *(_QWORD *)v4 = 0LL;
      v7 = (__int64 **)qword_1402FDA68;
      *(_QWORD *)v4 = &CcFastTeardownWorkQueue;
      *(_QWORD *)(v4 + 8) = v7;
      if ( *v7 != &CcFastTeardownWorkQueue )
        __fastfail(3u);
      v8 = CcQueueThrottle == 0;
      *v7 = (__int64 *)v4;
      qword_1402FDA68 = v4;
      if ( v8 && CcIdleWorkerThreadList != (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList )
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
      KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 16);
      if ( v2 )
      {
        v2->List.Flink = 0LL;
        ExQueueWorkItem(v2, CriticalWorkQueue);
      }
    }
    else
    {
      KxReleaseQueuedSpinLock((volatile signed __int64 **)KeGetPcr()->NtTib.ArbitraryUserPointer + 16);
    }
  }
}
