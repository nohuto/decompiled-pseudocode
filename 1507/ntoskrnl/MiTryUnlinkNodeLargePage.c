/*
 * XREFs of MiTryUnlinkNodeLargePage @ 0x140159228
 * Callers:
 *     MiDemoteLargeFreePage @ 0x1401591E0 (MiDemoteLargeFreePage.c)
 *     MiMoveLargeFreePage @ 0x14022D110 (MiMoveLargeFreePage.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiUnlinkNodeLargePageHelper @ 0x1401025F8 (MiUnlinkNodeLargePageHelper.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 */

__int64 __fastcall MiTryUnlinkNodeLargePage(unsigned __int64 a1)
{
  __int64 v2; // rsi
  __int64 v3; // rbx
  unsigned __int8 CurrentIrql; // r14
  unsigned int v5; // edi
  __int64 v6; // rsi
  unsigned int v7; // edi
  unsigned __int64 v8; // rax
  __int64 v9; // rdx
  __int64 Next; // rax
  __int64 v12; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+20h] [rbp-20h] BYREF
  void *retaddr; // [rsp+68h] [rbp+28h]

  v2 = (unsigned int)MiPageToNode(a1, 0);
  v3 = 48 * a1 - 0x58000000000LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v5 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v3 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v5);
    }
    while ( (*(_QWORD *)(v3 + 24) & 0x8000000000000000uLL) != 0 );
  }
  v6 = *((_QWORD *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v3 + 40)) >> 8) & 0x3FF) + 5) + 1336 * v2;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v6 + 1328), &LockHandle);
  v7 = *(_BYTE *)(v3 + 34) & 7;
  if ( (*(_QWORD *)(v3 + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFELL && (*(_BYTE *)(v3 + 34) & 7u) <= 1 )
  {
    v8 = *(_QWORD *)(v3 + 8);
    if ( (v8 & 0x8000000000000000uLL) != 0 )
    {
      v9 = *(_QWORD *)v3;
      if ( *(_QWORD *)(*(_QWORD *)v3 + 8LL) != v3 || *(_QWORD *)v8 != v3 )
        __fastfail(3u);
      *(_QWORD *)v8 = v9;
      *(_QWORD *)(v9 + 8) = v8;
      MiUnlinkNodeLargePageHelper(v6, v3);
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
        goto LABEL_11;
      }
      _m_prefetchw(&LockHandle);
      Next = (__int64)LockHandle.LockQueue.Next;
      if ( !LockHandle.LockQueue.Next )
      {
        if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                             (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                             0LL,
                                             (signed __int64)&LockHandle) == &LockHandle )
        {
LABEL_11:
          _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(CurrentIrql);
          return v7;
        }
        Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
      }
      LockHandle.LockQueue.Next = 0LL;
      _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
      goto LABEL_11;
    }
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) == 0 )
  {
    _m_prefetchw(&LockHandle);
    v12 = (__int64)LockHandle.LockQueue.Next;
    if ( !LockHandle.LockQueue.Next )
    {
      if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                           (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                           0LL,
                                           (signed __int64)&LockHandle) == &LockHandle )
        goto LABEL_28;
      v12 = KxWaitForLockChainValid((__int64 *)&LockHandle);
    }
    LockHandle.LockQueue.Next = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(v12 + 8), 1uLL);
    goto LABEL_28;
  }
  KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
LABEL_28:
  _InterlockedAnd64((volatile signed __int64 *)(v3 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(CurrentIrql);
  return 5LL;
}
