/*
 * XREFs of CcIncrementWriteBehindPriority @ 0x1401DC810
 * Callers:
 *     CcLazyWriteScan @ 0x140067780 (CcLazyWriteScan.c)
 * Callees:
 *     ExQueueWorkItem @ 0x14000D2F0 (ExQueueWorkItem.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KeAcquireQueuedSpinLockAtDpcLevel @ 0x1400D6F58 (KeAcquireQueuedSpinLockAtDpcLevel.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

void __fastcall CcIncrementWriteBehindPriority(__int64 a1)
{
  __int64 v1; // rax
  PWORK_QUEUE_ITEM v3; // rdi
  __int64 v4; // rcx
  volatile signed __int64 **v5; // rbx
  __int64 v6; // rax
  __int64 v7; // rdx
  _QWORD *v8; // rax
  __int64 **v9; // rax
  bool v10; // zf
  struct _LIST_ENTRY *Flink; // rax
  volatile signed __int64 **v12; // rbx
  __int64 v13; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  v1 = *(_QWORD *)(a1 + 496);
  v3 = 0LL;
  if ( !v1 || (v1 & 1) != 0 )
    return;
  KeAcquireQueuedSpinLockAtDpcLevel((__int64)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
  v4 = *(_QWORD *)(a1 + 496);
  if ( v4 )
  {
    *(_QWORD *)(a1 + 496) = v4 | 1;
    v7 = *(_QWORD *)v4;
    v8 = *(_QWORD **)(v4 + 8);
    if ( *(_QWORD *)(*(_QWORD *)v4 + 8LL) != v4 || *v8 != v4 )
      __fastfail(3u);
    *v8 = v7;
    *(_QWORD *)(v7 + 8) = v8;
    *(_QWORD *)(v4 + 8) = 0LL;
    *(_QWORD *)v4 = 0LL;
    v9 = (__int64 **)qword_14034DF08;
    *(_QWORD *)v4 = &CcFastTeardownWorkQueue;
    *(_QWORD *)(v4 + 8) = v9;
    if ( *v9 != &CcFastTeardownWorkQueue )
      __fastfail(3u);
    v10 = CcQueueThrottle == 0;
    *v9 = (__int64 *)v4;
    qword_14034DF08 = v4;
    if ( v10 && CcIdleWorkerThreadList != (PWORK_QUEUE_ITEM)&CcIdleWorkerThreadList )
    {
      v3 = CcIdleWorkerThreadList;
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
    v12 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      KiReleaseQueuedSpinLockInstrumented(v12, retaddr);
      goto LABEL_27;
    }
    _m_prefetchw(v12);
    v13 = (__int64)*v12;
    if ( !*v12 )
    {
      if ( v12 == (volatile signed __int64 **)_InterlockedCompareExchange64(v12[1], 0LL, (signed __int64)v12) )
        goto LABEL_27;
      v13 = KxWaitForLockChainValid((__int64 *)v12);
    }
    *v12 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v13 + 8), 1uLL);
LABEL_27:
    if ( v3 )
    {
      v3->List.Flink = 0LL;
      ExQueueWorkItem(v3, CriticalWorkQueue);
    }
    return;
  }
  v5 = (volatile signed __int64 **)((char *)KeGetPcr()->NtTib.ArbitraryUserPointer + 128);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
  {
    KiReleaseQueuedSpinLockInstrumented(v5, retaddr);
    return;
  }
  _m_prefetchw(v5);
  v6 = (__int64)*v5;
  if ( *v5 )
  {
LABEL_10:
    *v5 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v6 + 8), 1uLL);
    return;
  }
  if ( v5 != (volatile signed __int64 **)_InterlockedCompareExchange64(v5[1], 0LL, (signed __int64)v5) )
  {
    v6 = KxWaitForLockChainValid((__int64 *)v5);
    goto LABEL_10;
  }
}
