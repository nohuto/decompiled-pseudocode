/*
 * XREFs of KeAbPostReleaseEx @ 0x1400F49CC
 * Callers:
 *     MiStealPage @ 0x140055CB0 (MiStealPage.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     MiReferenceControlArea @ 0x140089080 (MiReferenceControlArea.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiLockAddressSpaceToo @ 0x1400F13C4 (MiLockAddressSpaceToo.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400F7760 (ExTryAcquirePushLockSharedEx.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x140101060 (ExTryAcquirePushLockExclusiveEx.c)
 *     KeTryToAcquireGuardedMutex @ 0x14010B7B0 (KeTryToAcquireGuardedMutex.c)
 *     MiTryLockVad @ 0x140126B04 (MiTryLockVad.c)
 *     FsRtlTryToAcquireHeaderMutex @ 0x14012BF10 (FsRtlTryToAcquireHeaderMutex.c)
 *     MiLeapPrefetch @ 0x14015C0CC (MiLeapPrefetch.c)
 *     IopProcessIoTracking @ 0x1401F85A0 (IopProcessIoTracking.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140263428 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExTryAcquireAutoExpandPushLockShared @ 0x140263500 (ExTryAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquireCacheAwarePushLockExclusiveEx @ 0x140263850 (ExTryAcquireCacheAwarePushLockExclusiveEx.c)
 *     ExTryAcquireCacheAwarePushLockSharedEx @ 0x14026391C (ExTryAcquireCacheAwarePushLockSharedEx.c)
 *     ExTryToAcquireFastMutex @ 0x140263A28 (ExTryToAcquireFastMutex.c)
 *     RawScanDeletedList @ 0x14040E17C (RawScanDeletedList.c)
 *     PfCheckDeprioritizeFile @ 0x140443ABC (PfCheckDeprioritizeFile.c)
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpCancelMessagesByRequestor @ 0x1404A41F0 (AlpcpCancelMessagesByRequestor.c)
 *     CmpTryToLockHashEntryByIndexExclusive @ 0x14065D9C4 (CmpTryToLockHashEntryByIndexExclusive.c)
 *     TryLockShutdownShared @ 0x14065DB70 (TryLockShutdownShared.c)
 *     CreateMiniNtBootKey @ 0x1407F7DAC (CreateMiniNtBootKey.c)
 *     KiForceSymbolReferences @ 0x1407FA9CC (KiForceSymbolReferences.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     KeAbEntryFree @ 0x1400F4C90 (KeAbEntryFree.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __fastcall KeAbPostReleaseEx(ULONG_PTR BugCheckParameter2, ULONG_PTR a2)
{
  ULONG_PTR v2; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  int v4; // r14d
  __int64 v5; // rdx
  __int16 v6; // ax

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
  v5 = (__int64)(v2 - (_QWORD)CurrentThread - 800) / 96;
  if ( v4 )
  {
    CurrentThread->AbEntrySummary |= 1 << v5;
    v6 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v6;
    if ( !v6 && ($CD287064E7C9F7953DE243E927CFCB99 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
      KiCheckForKernelApcDelivery();
  }
  else
  {
    _InterlockedOr8((volatile signed __int8 *)&CurrentThread->AbOrphanedEntrySummary, 1 << v5);
  }
}
