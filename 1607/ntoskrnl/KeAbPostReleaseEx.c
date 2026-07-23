/*
 * XREFs of KeAbPostReleaseEx @ 0x1400C455C
 * Callers:
 *     PfLockSharedTryAcquire @ 0x14000652C (PfLockSharedTryAcquire.c)
 *     MiReferenceControlArea @ 0x140025BE4 (MiReferenceControlArea.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     ExTryToAcquireFastMutex @ 0x140099678 (ExTryToAcquireFastMutex.c)
 *     MiTryLockVad @ 0x1400AB61C (MiTryLockVad.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1400C4300 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiLockAddressSpaceToo @ 0x1400C446C (MiLockAddressSpaceToo.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400C5780 (ExTryAcquirePushLockSharedEx.c)
 *     MiStealPage @ 0x140105C04 (MiStealPage.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14013428C (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140135B38 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     TlgAggregateInternalProviderCallback @ 0x14014CE74 (TlgAggregateInternalProviderCallback.c)
 *     IopProcessIoTracking @ 0x1401CAB20 (IopProcessIoTracking.c)
 *     MiTryAcquirePushLockUnordered @ 0x1401E66D4 (MiTryAcquirePushLockUnordered.c)
 *     MiLeapPrefetch @ 0x1401E828C (MiLeapPrefetch.c)
 *     MiChangingSubsectionProtos @ 0x1401ED094 (MiChangingSubsectionProtos.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14022D4F8 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14022D5C4 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1404C4778 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1404C9290 (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x140603D38 (CmpTryToLockHashEntryByIndexExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x140603DE8 (CmpTryToLockKcbExclusive.c)
 *     TryLockShutdownShared @ 0x140603FB4 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140617ADC (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x1406690FC (PfpPrefetchSharedConflictNotifyEnd.c)
 *     KiForceSymbolReferences @ 0x1407CFAC0 (KiForceSymbolReferences.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbEntryFree @ 0x14002BFB0 (KeAbEntryFree.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, unsigned __int64 a2)
{
  __int64 v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  int v4; // ebp
  __int64 v5; // rdi
  unsigned __int64 result; // rax
  __int64 v7; // rdx

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = (__int64)&CurrentThread->LockEntries[(unsigned __int8)(a2 >> 1)];
    if ( (*(_QWORD *)(v2 + 32) & 0x7FFFFFFFFFFFFFFCLL | 0x8000000000000000uLL) != BugCheckParameter2 )
      KeBugCheckEx(0x162u, (ULONG_PTR)CurrentThread, BugCheckParameter2, v2, 0LL);
  }
  else
  {
    CurrentThread = (struct _KTHREAD *)(a2 - (unsigned __int16)(16 * *(unsigned __int8 *)(a2 + 24)));
  }
  v4 = 0;
  if ( KeGetCurrentIrql() <= 1u )
  {
    v4 = 1;
    --CurrentThread->SpecialApcDisable;
  }
  *(_BYTE *)(v2 + 26) &= ~1u;
  KeAbEntryFree(v2, (ULONG_PTR)CurrentThread);
  v5 = v2 - (_QWORD)CurrentThread - 800;
  result = (unsigned __int64)((unsigned __int128)(v5 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v7 = v5 / 96;
  if ( v4 )
  {
    CurrentThread->AbEntrySummary |= 1 << v7;
    return KiLeaveGuardedRegionUnsafe((__int64)CurrentThread);
  }
  else
  {
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v7);
  }
  return result;
}
