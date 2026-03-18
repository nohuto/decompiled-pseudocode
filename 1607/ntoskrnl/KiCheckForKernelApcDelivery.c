/*
 * XREFs of KiCheckForKernelApcDelivery @ 0x1400C7DE0
 * Callers:
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140013010 (SeComputeAutoInheritByObjectTypeEx.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x140013B70 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockVad @ 0x1400144A0 (MiUnlockVad.c)
 *     MiDeleteVad @ 0x1400288D0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x1400295E0 (MiFinishVadDeletion.c)
 *     UNLOCK_PAGE_TABLE_COMMITMENT @ 0x140029D40 (UNLOCK_PAGE_TABLE_COMMITMENT.c)
 *     MiCommitExistingVad @ 0x14002AC20 (MiCommitExistingVad.c)
 *     MiUnlockAndDereferenceVad @ 0x14002BDA0 (MiUnlockAndDereferenceVad.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002BE60 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     UNLOCK_ADDRESS_SPACE @ 0x14002CFD0 (UNLOCK_ADDRESS_SPACE.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     MiGetWsAndInsertVad @ 0x140030AE0 (MiGetWsAndInsertVad.c)
 *     CcPinFileData @ 0x140031DE0 (CcPinFileData.c)
 *     CcGetVirtualAddress @ 0x1400333C0 (CcGetVirtualAddress.c)
 *     MiObtainReferencedVad @ 0x14003E320 (MiObtainReferencedVad.c)
 *     MiFreePagedPoolPages @ 0x14004BBA0 (MiFreePagedPoolPages.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x140068100 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegion @ 0x140069D00 (KeLeaveCriticalRegion.c)
 *     KeLeaveCriticalRegionThread @ 0x14006A0A0 (KeLeaveCriticalRegionThread.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     CcSetDirtyPinnedData @ 0x14006F270 (CcSetDirtyPinnedData.c)
 *     CcSetDirtyInMask @ 0x14006F660 (CcSetDirtyInMask.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     FsRtlLookupPerFileObjectContext @ 0x14008BBF0 (FsRtlLookupPerFileObjectContext.c)
 *     ExReleaseFastMutexUnsafeAndLeaveCriticalRegion @ 0x140092F70 (ExReleaseFastMutexUnsafeAndLeaveCriticalRegion.c)
 *     ExTryAcquirePushLockExclusiveEx @ 0x1400C6460 (ExTryAcquirePushLockExclusiveEx.c)
 *     PspLockQuotaExpansion @ 0x1400C69CC (PspLockQuotaExpansion.c)
 *     FsRtlAcquireEofLock @ 0x1400C6C30 (FsRtlAcquireEofLock.c)
 *     FsRtlReleaseEofLock @ 0x1400C6E40 (FsRtlReleaseEofLock.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C7740 (ExAcquireAutoExpandPushLockShared.c)
 *     ExTryAcquirePushLockSharedEx @ 0x1400C78E0 (ExTryAcquirePushLockSharedEx.c)
 *     KeLeaveGuardedRegion @ 0x1400C7A50 (KeLeaveGuardedRegion.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400C7A90 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockExclusiveEx @ 0x1400C7C50 (ExAcquirePushLockExclusiveEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400C7ED0 (ExAcquirePushLockSharedEx.c)
 *     CcUnpinFileDataEx @ 0x1400CF860 (CcUnpinFileDataEx.c)
 *     EtwpTraceMessageVa @ 0x1400D5D90 (EtwpTraceMessageVa.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     EtwpLockBufferList @ 0x1400EB6C0 (EtwpLockBufferList.c)
 *     ExAcquireFastMutexUnsafe @ 0x1400F05A0 (ExAcquireFastMutexUnsafe.c)
 *     PspLockQuotaListExclusive @ 0x14014C804 (PspLockQuotaListExclusive.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     EtwpDisableCompression @ 0x14022A834 (EtwpDisableCompression.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1403EE4E8 (FsRtlTeardownPerStreamContexts.c)
 *     NtQuerySecurityAttributesToken @ 0x14040F420 (NtQuerySecurityAttributesToken.c)
 *     NtQueryInformationToken @ 0x14040F810 (NtQueryInformationToken.c)
 *     CmOpenKey @ 0x140418C90 (CmOpenKey.c)
 *     PsLookupProcessByProcessId @ 0x140420700 (PsLookupProcessByProcessId.c)
 *     PsLookupThreadByThreadId @ 0x1404207F0 (PsLookupThreadByThreadId.c)
 *     CmpGetCallbackObjectContext @ 0x1404220D0 (CmpGetCallbackObjectContext.c)
 *     MiInsertSharedCommitNode @ 0x14042E680 (MiInsertSharedCommitNode.c)
 *     MiRemoveSharedCommitNode @ 0x14042EA70 (MiRemoveSharedCommitNode.c)
 *     MmQueryVirtualMemory @ 0x140432230 (MmQueryVirtualMemory.c)
 *     MiProtectVirtualMemory @ 0x140433470 (MiProtectVirtualMemory.c)
 *     CmpConstructNameWithStatus @ 0x140437710 (CmpConstructNameWithStatus.c)
 *     NtEnumerateKey @ 0x140439B70 (NtEnumerateKey.c)
 *     NtQueryKey @ 0x14043B2A0 (NtQueryKey.c)
 *     NtQueryValueKey @ 0x14043B880 (NtQueryValueKey.c)
 *     CmpParseKey @ 0x14043BF00 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 *     ObReferenceFileObjectForWrite @ 0x140446E50 (ObReferenceFileObjectForWrite.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     CmpCallbackFillObjectContext @ 0x1404533D0 (CmpCallbackFillObjectContext.c)
 *     PspUnlockJob @ 0x140468EB0 (PspUnlockJob.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     PiPnpRtlSetObjectProperty @ 0x140488870 (PiPnpRtlSetObjectProperty.c)
 *     CmLoadKey @ 0x14049C9B4 (CmLoadKey.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x1404A2998 (SepDereferenceLowBoxHandlesEntry.c)
 *     NtSetInformationObject @ 0x1404B0170 (NtSetInformationObject.c)
 *     FsRtlTeardownPerFileContexts @ 0x1404CDF9C (FsRtlTeardownPerFileContexts.c)
 *     CmKtmNotification @ 0x1404D9B64 (CmKtmNotification.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x1404FF354 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectProcessPropertyChange @ 0x14050539C (PiDmObjectProcessPropertyChange.c)
 *     PspChangeJobMemoryUsageByProcess @ 0x140507750 (PspChangeJobMemoryUsageByProcess.c)
 *     PsImpersonateClient @ 0x14050F3C0 (PsImpersonateClient.c)
 *     EtwpWriteUserEvent @ 0x140510920 (EtwpWriteUserEvent.c)
 *     ObpCallPreOperationCallbacks @ 0x140511820 (ObpCallPreOperationCallbacks.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     TtmCleanupCurrentSession @ 0x1406784FC (TtmCleanupCurrentSession.c)
 *     TtmpDispatchCreateEventQueue @ 0x1406797AC (TtmpDispatchCreateEventQueue.c)
 * Callees:
 *     KiDeliverApc @ 0x14005DBD0 (KiDeliverApc.c)
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
