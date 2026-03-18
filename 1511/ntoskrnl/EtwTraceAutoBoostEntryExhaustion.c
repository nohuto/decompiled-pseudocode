/*
 * XREFs of EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8
 * Callers:
 *     MiTrimSharedPageFromViews @ 0x140008834 (MiTrimSharedPageFromViews.c)
 *     MiRemoveFromSystemSpace @ 0x14000B73C (MiRemoveFromSystemSpace.c)
 *     PspLockQuotaExpansion @ 0x140012F88 (PspLockQuotaExpansion.c)
 *     MiExpandPtes @ 0x140016404 (MiExpandPtes.c)
 *     FsRtlReleaseEofLock @ 0x14001FAA0 (FsRtlReleaseEofLock.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x14001FE20 (ExTryAcquirePushLockExclusiveEx.c)
 *     CcSetDirtyPinnedData @ 0x14001FFA0 (CcSetDirtyPinnedData.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140020390 (ExAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400206A0 (ExTryAcquirePushLockSharedEx.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140020820 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     PspLockProcessExclusive @ 0x14002DCFC (PspLockProcessExclusive.c)
 *     ExAcquireFastMutexUnsafe @ 0x140037A60 (ExAcquireFastMutexUnsafe.c)
 *     MiObtainReferencedSecureVad @ 0x140038070 (MiObtainReferencedSecureVad.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     MmResourcesAvailable @ 0x140041CA0 (MmResourcesAvailable.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400424A0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x140042B70 (ExAcquirePushLockSharedEx.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     LOCK_PAGE_TABLE_COMMITMENT @ 0x140061118 (LOCK_PAGE_TABLE_COMMITMENT.c)
 *     LOCK_ADDRESS_SPACE @ 0x1400622C0 (LOCK_ADDRESS_SPACE.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiLockVad @ 0x140063AC0 (MiLockVad.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiChargeControlAreaPartition @ 0x14006DBF0 (MiChargeControlAreaPartition.c)
 *     MiReleaseControlAreaPartition @ 0x14006DC60 (MiReleaseControlAreaPartition.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14007E0B0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 *     ExpLockHandleTableExclusive @ 0x14009646C (ExpLockHandleTableExclusive.c)
 *     PopAcquireRwLockExclusive @ 0x140098DC8 (PopAcquireRwLockExclusive.c)
 *     EtwpLockBufferList @ 0x14009D480 (EtwpLockBufferList.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x1400A39E0 (CcGetVirtualAddress.c)
 *     MiManageSubsectionView @ 0x1400B12D0 (MiManageSubsectionView.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1400C7FB0 (FsRtlLookupPerFileObjectContext.c)
 *     ObpLockDirectoryExclusive @ 0x1400CF104 (ObpLockDirectoryExclusive.c)
 *     SepDeleteSessionLowboxEntries @ 0x1400D52A0 (SepDeleteSessionLowboxEntries.c)
 *     MiLockAddressSpaceToo @ 0x1400D5E5C (MiLockAddressSpaceToo.c)
 *     MiLockDriverMappings @ 0x1400E2808 (MiLockDriverMappings.c)
 *     MiObtainSessionVa @ 0x1400EDA74 (MiObtainSessionVa.c)
 *     MiReleaseSessionVa @ 0x1400EF034 (MiReleaseSessionVa.c)
 *     MiLockWsSwapExclusive @ 0x1400F5E60 (MiLockWsSwapExclusive.c)
 *     SmpKeyedStoreSetVaRanges @ 0x1400F6008 (SmpKeyedStoreSetVaRanges.c)
 *     ?StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z @ 0x1400F7898 (-StLockAcquireExclusive@@YAKPEAUVLOCK@@@Z.c)
 *     ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400F8004 (-SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z.c)
 *     FsRtlAcquireEofLock @ 0x1400FFD60 (FsRtlAcquireEofLock.c)
 *     MiDereferenceExtendInfo @ 0x14010384C (MiDereferenceExtendInfo.c)
 *     MiLockDynamicMemoryExclusive @ 0x140127060 (MiLockDynamicMemoryExclusive.c)
 *     ExpSaAllocatorAllocate @ 0x14012CE14 (ExpSaAllocatorAllocate.c)
 *     ExpSaPageGroupAllocateMemory @ 0x14012CFA4 (ExpSaPageGroupAllocateMemory.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14012D1DC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14012E754 (ExpSaAllocatorFree.c)
 *     ExpSaPageGroupFreeMemory @ 0x14012E86C (ExpSaPageGroupFreeMemory.c)
 *     ExpSaPageGroupDescriptorFree @ 0x14012EAF4 (ExpSaPageGroupDescriptorFree.c)
 *     SmKmVirtualLockContextIncreaseWsMin @ 0x140208CDC (SmKmVirtualLockContextIncreaseWsMin.c)
 *     SmKmVirtualLockCtxMemoryUnlocked @ 0x1402090B0 (SmKmVirtualLockCtxMemoryUnlocked.c)
 *     ExpSvmDereferenceDevice @ 0x1402151DC (ExpSvmDereferenceDevice.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140037C30 (EtwTraceKernelEvent.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

__int64 __fastcall EtwTraceAutoBoostEntryExhaustion(__int64 a1, __int64 a2)
{
  int v2; // eax
  __int64 v4; // [rsp+30h] [rbp-38h] BYREF
  int v5; // [rsp+38h] [rbp-30h]
  __int64 *v6; // [rsp+40h] [rbp-28h] BYREF
  int v7; // [rsp+48h] [rbp-20h]
  int v8; // [rsp+4Ch] [rbp-1Ch]

  v2 = *(_DWORD *)(a1 + 1584);
  v4 = a2;
  v5 = v2;
  v6 = &v4;
  v8 = 0;
  v7 = 16;
  return EtwTraceKernelEvent((int)&v6, 1, 0x20000200u, 0x544u, 5249538);
}
