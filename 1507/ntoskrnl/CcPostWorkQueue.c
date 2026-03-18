/*
 * XREFs of CcPostWorkQueue @ 0x14003F5E0
 * Callers:
 *     CcLazyWriteScan @ 0x140067780 (CcLazyWriteScan.c)
 *     CcNotifyOfMappedWrite @ 0x1400E3EC4 (CcNotifyOfMappedWrite.c)
 *     CcScheduleReadAheadEx @ 0x1400E4230 (CcScheduleReadAheadEx.c)
 *     CcQueueLazyWriteScanThread @ 0x140165CEC (CcQueueLazyWriteScanThread.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     CcPerfLogWorkItemEnqueue @ 0x14011E480 (CcPerfLogWorkItemEnqueue.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall CcPostWorkQueue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  PWORK_QUEUE_ITEM v6; // rsi
  KIRQL v7; // bp
  unsigned int v8; // edx
  _QWORD *v9; // rax
  bool v10; // zf
  volatile signed __int64 **v11; // rbx
  __int64 v12; // rax
  struct _LIST_ENTRY *Flink; // rax
  void *retaddr; // [rsp+28h] [rbp+0h]

  v6 = 0LL;
  if ( (xmmword_1403D1290 & 0x20000) != 0 )
  {
    if ( ((*(_BYTE *)(a1 + 104) - 2) & 0xFD) != 0 )
    {
      CcPerfLogWorkItemEnqueue(a2, a1, 0LL, 0LL);
    }
    else
    {
      LOBYTE(a4) = 1;
      CcPerfLogWorkItemEnqueue(a2, a1, 0LL, a4);
    }
  }
  v7 = KeAcquireQueuedSpinLock(8uLL);
  if ( *(_BYTE *)(a1 + 104) != 3
    || (__int64 *)CcRegularWorkQueue == &CcRegularWorkQueue
    || CcGlobalDirtyPageStatistics < (unsigned __int64)CcGlobalDirtyPageThresholds >> 2
    && (unsigned __int64)CcGlobalDirtyPageStatistics <= *(_QWORD *)(*(_QWORD *)qword_14034F0E8 + 5504LL) >> 1 )
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
    v6 = CcIdleWorkerThreadList;
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
  v11 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v11, retaddr);
  }
  else
  {
    _m_prefetchw(v11);
    v12 = (__int64)*v11;
    if ( !*v11 )
    {
      if ( v11 == (volatile signed __int64 **)_InterlockedCompareExchange64(v11[1], 0LL, (signed __int64)v11) )
        goto LABEL_10;
      v12 = KxWaitForLockChainValid(v11);
    }
    *v11 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
  }
LABEL_10:
  __writecr8(v7);
  if ( v6 )
  {
    v6->List.Flink = 0LL;
    ExQueueWorkItem(v6, CriticalWorkQueue);
  }
}
