/*
 * XREFs of KiCheckForKernelApcDelivery @ 0x1400C5C80
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140012B90 (SeComputeAutoInheritByObjectTypeEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockVad @ 0x140014020 (MiUnlockVad.c)
 *     MiDeleteVad @ 0x140028450 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x140029160 (MiFinishVadDeletion.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x1400298C0 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CB50 (UNLOCK_ADDRESS_SPACE.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     MiGetWsAndInsertVad @ 0x140030660 (MiGetWsAndInsertVad.c)
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140067C80 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     CcSetDirtyPinnedData @ 0x14006EDF0 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F1E0 (CcSetDirtyInMask.c)
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     FsRtlLookupPerFileObjectContext @ 0x14008B350 (FsRtlLookupPerFileObjectContext.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140092770 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1400C4300 (ExTryAcquirePushLockExclusiveEx.c)
 *     PspLockQuotaExpansion @ 0x1400C486C (PspLockQuotaExpansion.c)
 *     FsRtlAcquireEofLock @ 0x1400C4AD0 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x1400C4CE0 (FsRtlReleaseEofLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C55E0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400C5780 (ExTryAcquirePushLockSharedEx.c)
 *     KeLeaveGuardedRegion @ 0x1400C58F0 (KeLeaveGuardedRegion.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400C5930 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400C5AF0 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400C5D70 (ExAcquirePushLockSharedEx.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     EtwpTraceMessageVa @ 0x1400D3C30 (EtwpTraceMessageVa.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     EtwpLockBufferList @ 0x1400E9530 (EtwpLockBufferList.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400EE420 (ExAcquireFastMutexUnsafe.c)
 *     PspLockQuotaListExclusive @ 0x14014CD74 (PspLockQuotaListExclusive.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     EtwpDisableCompression @ 0x14022A660 (EtwpDisableCompression.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1403EFB18 (FsRtlTeardownPerStreamContexts.c)
 *     NtQuerySecurityAttributesToken @ 0x14040E2E0 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14040E6D0 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x140417B50 (CmOpenKey.c)
 *     PsLookupProcessByProcessId @ 0x14041F5C0 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x14041F6B0 (PsLookupThreadByThreadId.c)
 *     CmpGetCallbackObjectContext @ 0x140420F90 (CmpGetCallbackObjectContext.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 *     MmQueryVirtualMemory @ 0x140431100 (MmQueryVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     CmpConstructNameWithStatus @ 0x1404365E0 (CmpConstructNameWithStatus.c)
 *     NtEnumerateKey @ 0x140438A40 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043A170 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x14043ADD0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     ObReferenceFileObjectForWrite @ 0x140445D20 (ObReferenceFileObjectForWrite.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmpCallbackFillObjectContext @ 0x1404522A0 (CmpCallbackFillObjectContext.c)
 *     PspUnlockJob @ 0x140467D80 (PspUnlockJob.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     NtSetInformationObject @ 0x14049A550 (NtSetInformationObject.c)
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 *     FsRtlTeardownPerFileContexts @ 0x1404B31FC (FsRtlTeardownPerFileContexts.c)
 *     CmKtmNotification @ 0x1404BD168 (CmKtmNotification.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1404E22E4 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E832C (PiDmObjectProcessPropertyChange.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x1404EA6E0 (PspChangeJobMemoryUsageByProcess.c)
 *     PsImpersonateClient @ 0x1404F2350 (PsImpersonateClient.c)
 *     EtwpWriteUserEvent @ 0x1404F38B0 (EtwpWriteUserEvent.c)
 *     ObpCallPreOperationCallbacks @ 0x1404F4C10 (ObpCallPreOperationCallbacks.c)
 *     PiPnpRtlSetObjectProperty @ 0x140510FE4 (PiPnpRtlSetObjectProperty.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x14051AD98 (SepDereferenceLowBoxHandlesEntry.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     TtmCleanupCurrentSession @ 0x1406785E0 (TtmCleanupCurrentSession.c)
 *     TtmpDispatchCreateEventQueue @ 0x140679890 (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 */

__int64 __fastcall KiCheckForKernelApcDelivery(__int64 a1)
{
  __int64 result; // rax

  if ( KeGetCurrentIrql() )
  {
    LOBYTE(a1) = 1;
    KeGetCurrentThread()->ApcState.KernelApcPending = 1;
    return HalRequestSoftwareInterrupt(a1);
  }
  else
  {
    __writecr8(1uLL);
    KiDeliverApc(0, 0, 0LL);
    result = 0LL;
    __writecr8(0LL);
  }
  return result;
}
