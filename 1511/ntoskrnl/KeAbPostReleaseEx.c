/*
 * XREFs of KeAbPostReleaseEx @ 0x1400317E4
 * Callers:
 *     PfLockSharedTryAcquire @ 0x14001B9CC (PfLockSharedTryAcquire.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14001FE20 (ExTryAcquirePushLockExclusiveEx.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400206A0 (ExTryAcquirePushLockSharedEx.c)
 *     MiReferenceControlArea @ 0x14003AD80 (MiReferenceControlArea.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiLockAddressSpaceToo @ 0x1400D5E5C (MiLockAddressSpaceToo.c)
 *     ExTryToAcquireFastMutex @ 0x1400DFFC4 (ExTryToAcquireFastMutex.c)
 *     MiTryLockVad @ 0x1400ED7E0 (MiTryLockVad.c)
 *     MiLeapPrefetch @ 0x1401161B8 (MiLeapPrefetch.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x14012BFF0 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14012DB9C (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     IopProcessIoTracking @ 0x1401BCC68 (IopProcessIoTracking.c)
 *     MiProceedToCreateSubsectionProtos @ 0x1401E39B0 (MiProceedToCreateSubsectionProtos.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140213BA0 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x140213C6C (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     AlpcpReceiveMessagePort @ 0x14042A910 (AlpcpReceiveMessagePort.c)
 *     AlpcpTryLockForCachedReferenceBlob @ 0x1404829D8 (AlpcpTryLockForCachedReferenceBlob.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x1405E65C4 (CmpTryToLockHashEntryByIndexExclusive.c)
 *     TryLockShutdownShared @ 0x1405E6734 (TryLockShutdownShared.c)
 *     PfpPrefetchSharedConflictNotifyEnd @ 0x140630DFC (PfpPrefetchSharedConflictNotifyEnd.c)
 *     KiForceSymbolReferences @ 0x140784248 (KiForceSymbolReferences.c)
 * Callees:
 *     KeAbEntryFree @ 0x140033200 (KeAbEntryFree.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

unsigned __int64 __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  int v4; // ebp
  __int64 v5; // rdi
  unsigned __int64 result; // rax
  __int64 v7; // rdx

  v2 = a2;
  if ( (a2 & 1) != 0 )
  {
    CurrentThread = KeGetCurrentThread();
    v2 = (ULONG_PTR)&CurrentThread->LockEntries[(unsigned __int8)(a2 >> 1)];
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
  KeAbEntryFree(v2, CurrentThread);
  v5 = v2 - (_QWORD)CurrentThread - 800;
  result = (unsigned __int64)((unsigned __int128)(v5 * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64) >> 63;
  v7 = v5 / 96;
  if ( v4 )
  {
    CurrentThread->AbEntrySummary |= 1 << v7;
    return KiLeaveGuardedRegionUnsafe(CurrentThread);
  }
  else
  {
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v7);
  }
  return result;
}
