/*
 * XREFs of KeAbPostReleaseEx @ 0x1400C66BC
 * Callers:
 *     PfLockSharedTryAcquire @ 0x1400063BC (PfLockSharedTryAcquire.c)
 *     MiReferenceControlArea @ 0x140026064 (MiReferenceControlArea.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     ExTryToAcquireFastMutex @ 0x140099E78 (ExTryToAcquireFastMutex.c)
 *     MiTryLockVad @ 0x1400AD0B4 (MiTryLockVad.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C61A4 (MiWaitForCollidedFaultComplete.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1400C6460 (ExTryAcquirePushLockExclusiveEx.c)
 *     MiLockAddressSpaceToo @ 0x1400C65CC (MiLockAddressSpaceToo.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400C78E0 (ExTryAcquirePushLockSharedEx.c)
 *     MiStealPage @ 0x140107E84 (MiStealPage.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140133D1C (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x1401355C8 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     TlgAggregateInternalProviderCallback @ 0x14014C904 (TlgAggregateInternalProviderCallback.c)
 *     IopProcessIoTracking @ 0x1401CAC80 (IopProcessIoTracking.c)
 *     MiTryAcquirePushLockUnordered @ 0x1401E68A8 (MiTryAcquirePushLockUnordered.c)
 *     MiLeapPrefetch @ 0x1401E8460 (MiLeapPrefetch.c)
 *     MiChangingSubsectionProtos @ 0x1401ED268 (MiChangingSubsectionProtos.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x14022D6CC (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14022D798 (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     AlpcpReceiveMessagePort @ 0x14044CD70 (AlpcpReceiveMessagePort.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1404E1174 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockHashEntryExclusive @ 0x1404E6920 (CmpTryToLockHashEntryExclusive.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x140603C84 (CmpTryToLockHashEntryByIndexExclusive.c)
 *     CmpTryToLockKcbExclusive @ 0x140603D34 (CmpTryToLockKcbExclusive.c)
 *     TryLockShutdownShared @ 0x140603F00 (TryLockShutdownShared.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140617A28 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140669018 (PfpPrefetchSharedConflictNotifyEnd.c)
 *     KiForceSymbolReferences @ 0x1407CFAC0 (KiForceSymbolReferences.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     KeAbEntryFree @ 0x14002C430 (KeAbEntryFree.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
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
