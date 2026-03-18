/*
 * XREFs of SepDereferenceLuidToIndexEntry @ 0x1400152A0
 * Callers:
 *     SepRefDerefLuidToIndexEntryIfNecessary @ 0x1404366E0 (SepRefDerefLuidToIndexEntryIfNecessary.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     RtlRemoveEntryHashTable @ 0x14010E610 (RtlRemoveEntryHashTable.c)
 *     SepCleanSingletonEntry @ 0x1401277C4 (SepCleanSingletonEntry.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     SepFindMatchingLuidEntry @ 0x1404367C0 (SepFindMatchingLuidEntry.c)
 */

__int64 SepDereferenceLuidToIndexEntry()
{
  struct _KTHREAD *CurrentThread; // rax
  volatile signed __int64 *v1; // rdi
  __int64 v2; // rbx
  ULONG_PTR v3; // rdi
  __int64 v4; // rdx
  __int64 v5; // r8
  struct _KTHREAD *v6; // rcx
  __int16 v7; // ax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v1 = (volatile signed __int64 *)SeLuidToIndexMapping;
  v2 = KeAbPreAcquire(SeLuidToIndexMapping);
  if ( _InterlockedCompareExchange64(v1, 17LL, 0LL) )
    ExfAcquirePushLockSharedEx(v1, v2, v1);
  if ( v2 )
    *(_BYTE *)(v2 + 26) |= 1u;
  SepFindMatchingLuidEntry(*(PRTL_DYNAMIC_HASH_TABLE *)(SeLuidToIndexMapping + 8));
  v3 = SeLuidToIndexMapping;
  if ( _InterlockedCompareExchange64((volatile signed __int64 *)SeLuidToIndexMapping, 0LL, 17LL) != 17 )
    ExfReleasePushLockShared(v3);
  KeAbPostRelease(v3);
  v6 = KeGetCurrentThread();
  v7 = v6->KernelApcDisable + 1;
  v6->KernelApcDisable = v7;
  if ( !v7
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v6->ApcState.ApcListHead[0].Flink != &v6->152
    && !v6->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery(v6, v4, v5);
  }
  return 3221226021LL;
}
