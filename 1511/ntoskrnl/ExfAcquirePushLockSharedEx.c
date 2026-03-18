/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x140020AB0
 * Callers:
 *     PspLockQuotaListShared @ 0x1400031B8 (PspLockQuotaListShared.c)
 *     MiLockControlAreaFileObjectShared @ 0x14000A440 (MiLockControlAreaFileObjectShared.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14000D50C (CcSlowReferenceSharedCacheMapFileObject.c)
 *     PspLockProcessThreadListShared @ 0x1400143A8 (PspLockProcessThreadListShared.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x140020390 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x140020820 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExfAcquirePushLockShared @ 0x140020A98 (ExfAcquirePushLockShared.c)
 *     PspLockProcessShared @ 0x14002E384 (PspLockProcessShared.c)
 *     MiObtainReferencedSecureVad @ 0x140038070 (MiObtainReferencedSecureVad.c)
 *     ObpLockDirectoryShared @ 0x1400429F0 (ObpLockDirectoryShared.c)
 *     ExAcquirePushLockSharedEx @ 0x140042B70 (ExAcquirePushLockSharedEx.c)
 *     MiObtainReferencedVad @ 0x14004B200 (MiObtainReferencedVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400627F0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14007E0B0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     PspLockProcessListShared @ 0x14009257C (PspLockProcessListShared.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 *     PoFxSystemLatencyNotify @ 0x1400971C4 (PoFxSystemLatencyNotify.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     CcGetVirtualAddress @ 0x1400A39E0 (CcGetVirtualAddress.c)
 *     FsRtlLookupPerFileObjectContext @ 0x1400C7FB0 (FsRtlLookupPerFileObjectContext.c)
 *     PspLockThreadSecurityShared @ 0x1400D19C0 (PspLockThreadSecurityShared.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400DA934 (PopFxResidentTimeoutRoutine.c)
 *     PopPepWork @ 0x1400DAB48 (PopPepWork.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400E15A8 (CcGetVirtualAddressIfMapped.c)
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x1400E7A9C (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     RtlpLookupUserFunctionTable @ 0x1400ED2CC (RtlpLookupUserFunctionTable.c)
 *     PfLockSharedAcquire @ 0x1400FAF50 (PfLockSharedAcquire.c)
 *     PoFxPrepareDevice @ 0x14010786C (PoFxPrepareDevice.c)
 *     SmpKeyedStoreReference @ 0x14010F104 (SmpKeyedStoreReference.c)
 *     PopFxIdleDevicesFromSx @ 0x14011A82C (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x14011A918 (PopFxActivateDevicesForSx.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x14012BC30 (ExpAcquireFannedOutPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x14012CE14 (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14012E754 (ExpSaAllocatorFree.c)
 *     PopFxRegisterDeviceWithPep @ 0x14012FE54 (PopFxRegisterDeviceWithPep.c)
 *     PopPepInsertDevice @ 0x14012FF58 (PopPepInsertDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1401302E0 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PoFxStartDevicePowerManagement @ 0x14013D034 (PoFxStartDevicePowerManagement.c)
 *     PopFxLowPowerEpochCallback @ 0x1401411A0 (PopFxLowPowerEpochCallback.c)
 *     HvpViewMapAcquireLockShared @ 0x1401AACD4 (HvpViewMapAcquireLockShared.c)
 *     FsRtlAcquirePushLockShared @ 0x1401AD8F0 (FsRtlAcquirePushLockShared.c)
 *     PopDiagTraceFxRundown @ 0x1401E97C0 (PopDiagTraceFxRundown.c)
 *     PopFxCaptureDeviceAccounting @ 0x1401E993C (PopFxCaptureDeviceAccounting.c)
 *     PopFxChildDeviceActive @ 0x1401E9B40 (PopFxChildDeviceActive.c)
 *     PopFxDeviceAccountingWatchdog @ 0x1401E9F74 (PopFxDeviceAccountingWatchdog.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x1401EA1FC (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPauseDeviceAccounting @ 0x1401EA5DC (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x1401EB06C (PopFxResumeDeviceAccounting.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1401EB1EC (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopFxStartDeviceAccounting @ 0x1401EB408 (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x1401EB58C (PopFxStopDeviceAccounting.c)
 *     PopPepIdleTimeoutRoutine @ 0x1401ED734 (PopPepIdleTimeoutRoutine.c)
 *     PopPepPlatformStateRegistered @ 0x1401EDE44 (PopPepPlatformStateRegistered.c)
 *     PopPepRemoveDevice @ 0x1401EE138 (PopPepRemoveDevice.c)
 *     PopPepResetDeviceAccountingLevel @ 0x1401EE27C (PopPepResetDeviceAccountingLevel.c)
 *     PopFxAcpiPrepareDevice @ 0x1401F4B44 (PopFxAcpiPrepareDevice.c)
 *     SepRmReferenceCapTable @ 0x140201A60 (SepRmReferenceCapTable.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140208F68 (SmKmVirtualLockCtxLockMemory.c)
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     WheaConfigureErrorSource @ 0x1403AA850 (WheaConfigureErrorSource.c)
 *     SepIsParentOfChildAppContainer @ 0x1403B4520 (SepIsParentOfChildAppContainer.c)
 *     CmpParseCacheLookup @ 0x1403BB324 (CmpParseCacheLookup.c)
 *     LockShutdownShared @ 0x1403BDB38 (LockShutdownShared.c)
 *     SepSetTokenLowboxNumber @ 0x1403BED94 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1403C91FC (SepDereferenceLowBoxNumberEntry.c)
 *     NtDeleteKey @ 0x1403DA844 (NtDeleteKey.c)
 *     CmpGetLastHive @ 0x1403DB2F4 (CmpGetLastHive.c)
 *     CmpGetNextHive @ 0x1403DC94C (CmpGetNextHive.c)
 *     CmpGetNextActiveHive @ 0x1403DE2DC (CmpGetNextActiveHive.c)
 *     CmpLockHashEntryShared @ 0x1403DEB28 (CmpLockHashEntryShared.c)
 *     CmpOKToFollowLink @ 0x1403DF0B0 (CmpOKToFollowLink.c)
 *     CmpAssignSecurityToKcb @ 0x1403DFE54 (CmpAssignSecurityToKcb.c)
 *     ExpWnfNotifySubscription @ 0x1403E23AC (ExpWnfNotifySubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1403E254C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1403E3FEC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1403E429C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x1403E55A8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x1403E5CF4 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1403E6008 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 *     DbgkFlushErrorPort @ 0x1403E7698 (DbgkFlushErrorPort.c)
 *     CmpGetCallbackObjectContext @ 0x1403E7C40 (CmpGetCallbackObjectContext.c)
 *     PspLockJobListShared @ 0x1403E9B3C (PspLockJobListShared.c)
 *     PsQueryStatisticsProcess @ 0x1403EC180 (PsQueryStatisticsProcess.c)
 *     PspLockJobMemoryLimitsShared @ 0x1403EC81C (PspLockJobMemoryLimitsShared.c)
 *     CmpCreateKeyControlBlock @ 0x1403FA0D0 (CmpCreateKeyControlBlock.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpLockTwoKcbsShared @ 0x1403FD8E0 (CmpLockTwoKcbsShared.c)
 *     CmpDoOpen @ 0x1403FEFA0 (CmpDoOpen.c)
 *     CmQueryKey @ 0x1403FF980 (CmQueryKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1404033B0 (CmpCheckKeyBodyAccess.c)
 *     CmQueryValueKey @ 0x140405E20 (CmQueryValueKey.c)
 *     CmpKcbCacheLookup @ 0x140407660 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x140408290 (CmpBuildHashStackAndLookupCache.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     CmpCallbackFillObjectContext @ 0x140409770 (CmpCallbackFillObjectContext.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     ObpGetShadowDirectory @ 0x14041CE20 (ObpGetShadowDirectory.c)
 *     ObpReferenceDeviceMap @ 0x14041CF70 (ObpReferenceDeviceMap.c)
 *     ObQueryDeviceMapInformation @ 0x14041D1A0 (ObQueryDeviceMapInformation.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     NtQueryObject @ 0x14041F7E0 (NtQueryObject.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 *     ObpReferenceSecurityDescriptor @ 0x140421050 (ObpReferenceSecurityDescriptor.c)
 *     AlpcpReceiveLegacyMessage @ 0x140423610 (AlpcpReceiveLegacyMessage.c)
 *     CmpLockKcbShared @ 0x140423B90 (CmpLockKcbShared.c)
 *     PsGetNextProcessThread @ 0x140424290 (PsGetNextProcessThread.c)
 *     AlpcpReferenceConnectedPort @ 0x140425270 (AlpcpReferenceConnectedPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x1404271A0 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404280D0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x140429460 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14042A040 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14042A910 (AlpcpReceiveMessagePort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x14042B610 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14042BCD0 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpDispatchReplyToPort @ 0x14042C0B0 (AlpcpDispatchReplyToPort.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     AlpcpReceiveSynchronousReply @ 0x14042EF50 (AlpcpReceiveSynchronousReply.c)
 *     PsReferenceImpersonationTokenEx @ 0x140433F70 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x1404340D0 (PsReferenceEffectiveToken.c)
 *     EtwpFindGuidEntryByGuid @ 0x140435E90 (EtwpFindGuidEntryByGuid.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043E03C (PiDmObjectAcquireSharedLock.c)
 *     AlpcpCreateSection @ 0x14044E0D4 (AlpcpCreateSection.c)
 *     NtAlpcSetInformation @ 0x14044FF74 (NtAlpcSetInformation.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     PopAcquireUmpoPushLock @ 0x140455C48 (PopAcquireUmpoPushLock.c)
 *     PspReferenceSystemDll @ 0x140464590 (PspReferenceSystemDll.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14046D3B0 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpIsGuidAllowed @ 0x14046D428 (EtwpIsGuidAllowed.c)
 *     AlpcpCreateClientPort @ 0x14046D9C8 (AlpcpCreateClientPort.c)
 *     PfQuerySuperfetchInformation @ 0x140475A70 (PfQuerySuperfetchInformation.c)
 *     NtOpenThreadTokenEx @ 0x1404772C0 (NtOpenThreadTokenEx.c)
 *     MiIsRangeFullyCommitted @ 0x14047B9EC (MiIsRangeFullyCommitted.c)
 *     AlpcpLocateSectionView @ 0x14047BECC (AlpcpLocateSectionView.c)
 *     AlpcpEnumerateResourcesPort @ 0x14047BF9C (AlpcpEnumerateResourcesPort.c)
 *     AlpcpCreateView @ 0x14047C210 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14047C700 (AlpcpCreateSecurityContext.c)
 *     AlpcReferenceBlobByHandle @ 0x14047CC20 (AlpcReferenceBlobByHandle.c)
 *     AlpcpFlushMessagesPort @ 0x14047EE8C (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x14047F358 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14047FBB0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpDispatchConnectionRequest @ 0x14047FE08 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x140480FF8 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpQueryRemoteView @ 0x1404825F0 (AlpcpQueryRemoteView.c)
 *     ObpCallPreOperationCallbacks @ 0x140482B10 (ObpCallPreOperationCallbacks.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140482D7C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     sub_1404885A8 @ 0x1404885A8 (sub_1404885A8.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     sub_140489CE0 @ 0x140489CE0 (sub_140489CE0.c)
 *     sub_14048A234 @ 0x14048A234 (sub_14048A234.c)
 *     sub_14048A7D0 @ 0x14048A7D0 (sub_14048A7D0.c)
 *     sub_14048AB98 @ 0x14048AB98 (sub_14048AB98.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14048C178 (AlpcpPortQueryConnectedSidInfo.c)
 *     sub_140498054 @ 0x140498054 (sub_140498054.c)
 *     ExUpdateLicenseRegistry @ 0x14049B478 (ExUpdateLicenseRegistry.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 *     NtAlpcDeleteSectionView @ 0x1404ABD1C (NtAlpcDeleteSectionView.c)
 *     MmAcquireSessionPoolRundown @ 0x1404AC470 (MmAcquireSessionPoolRundown.c)
 *     CmpCheckNotifyAccess @ 0x1404AFC7C (CmpCheckNotifyAccess.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404B3F04 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     WdipTimeoutCheckRoutine @ 0x1404B691C (WdipTimeoutCheckRoutine.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1404B7968 (ExpWnfDispatchKernelSubscription.c)
 *     ExQueryFastCacheDevLicense @ 0x1404B8DC0 (ExQueryFastCacheDevLicense.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404BB694 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpGetNextCallback @ 0x1404BF63C (ExpGetNextCallback.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404C094C (ExpWnfEnumerateScopeInstances.c)
 *     CmpLockHiveListShared @ 0x1404C2A40 (CmpLockHiveListShared.c)
 *     CmpLockCallbackListShared @ 0x1404C4FFC (CmpLockCallbackListShared.c)
 *     EtwpGetNextGuidEntry @ 0x1404CCE6C (EtwpGetNextGuidEntry.c)
 *     WdipSemDisableScenario @ 0x140505648 (WdipSemDisableScenario.c)
 *     WdipSemEnableScenario @ 0x140505934 (WdipSemEnableScenario.c)
 *     AlpcpPortQueryServerInfo @ 0x14050FEAC (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x1405101A8 (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140517F80 (PspSetProcessAffinityUpdateMode.c)
 *     MmGetChannelInformation @ 0x140518364 (MmGetChannelInformation.c)
 *     ExRegisterExtension @ 0x1405278B0 (ExRegisterExtension.c)
 *     SmpCacheStatsCopy @ 0x140540650 (SmpCacheStatsCopy.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140542750 (ObIsDosDeviceLocallyMapped.c)
 *     ExpGetSystemPlatformBinary @ 0x1405482D8 (ExpGetSystemPlatformBinary.c)
 *     CmpLockContextListShared @ 0x1405E64BC (CmpLockContextListShared.c)
 *     CmpLockHashEntryByIndexShared @ 0x1405E6524 (CmpLockHashEntryByIndexShared.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406209E0 (AlpcpInvokeLogCallbacks.c)
 *     PspUpdateSingleProcessAffinity @ 0x14063F640 (PspUpdateSingleProcessAffinity.c)
 *     PspBeginServerSiloShutdown @ 0x14063FDC0 (PspBeginServerSiloShutdown.c)
 *     PspInitializeServerSiloDeferred @ 0x140640594 (PspInitializeServerSiloDeferred.c)
 *     PspNotifyServerSiloTermination @ 0x1406406EC (PspNotifyServerSiloTermination.c)
 *     SmcGetCacheStats @ 0x1406590D0 (SmcGetCacheStats.c)
 *     SmKmKeyGenGenerate @ 0x14065A5D4 (SmKmKeyGenGenerate.c)
 *     EtwpGetDisallowList @ 0x1406601A0 (EtwpGetDisallowList.c)
 *     ExFetchLicenseData @ 0x14066820C (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x140668388 (ExGetLicenseTamperState.c)
 *     ExUpdateOsPfnInRegistry @ 0x1406693DC (ExUpdateOsPfnInRegistry.c)
 *     sub_14066994C @ 0x14066994C (sub_14066994C.c)
 *     ExpSnapShotHandleTables @ 0x14066CAC8 (ExpSnapShotHandleTables.c)
 * Callees:
 *     KeAbPreWait @ 0x140020C90 (KeAbPreWait.c)
 *     RtlBackoff @ 0x140020EE0 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x140020F4C (ExpOptimizePushLockList.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3)
{
  unsigned __int64 v6; // rbx
  signed __int64 v7; // rcx
  signed __int64 result; // rax
  bool v9; // cl
  _BYTE *v10; // rdx
  bool v11; // zf
  signed __int64 v12; // rax
  int i; // eax
  __int16 Object; // [rsp+30h] [rbp-40h] BYREF
  char v16; // [rsp+32h] [rbp-3Eh]
  _BYTE v17[5]; // [rsp+33h] [rbp-3Dh] BYREF
  _QWORD v18[3]; // [rsp+38h] [rbp-38h] BYREF
  __int16 *p_Object; // [rsp+50h] [rbp-20h]
  __int64 v20; // [rsp+58h] [rbp-18h]
  int v21; // [rsp+60h] [rbp-10h]
  signed __int32 v22; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v23; // [rsp+68h] [rbp-8h]
  int v24; // [rsp+B0h] [rbp+40h] BYREF

  v24 = 0;
  _m_prefetchw(a1);
  v6 = *a1;
  while ( (v6 & 1) != 0 && (((v6 >> 1) & 1) != 0 || (v6 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    if ( a2 )
      KeAbPreWait(a2);
    v9 = 0;
    v23 = a2;
    v22 = 2;
    v20 = 0LL;
    if ( ((v6 >> 1) & 1) != 0 )
    {
      p_Object = 0LL;
      v21 = -1;
      v18[2] = v6 & 0xFFFFFFFFFFFFFFF0uLL;
      v10 = (_BYTE *)((unsigned __int64)&Object | v6 & 8 | 7);
      v9 = (v6 & 4) == 0;
    }
    else
    {
      v21 = -2;
      p_Object = &Object;
      v10 = v17;
    }
    v12 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)v10, v6);
    v11 = v6 == v12;
    v6 = v12;
    if ( !v11 )
      goto LABEL_14;
    if ( v9 )
      ExpOptimizePushLockList(a1);
    Object = 1;
    v18[1] = v18;
    v18[0] = v18;
    v16 = 6;
    *(_DWORD *)&v17[1] = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      for ( i = ExpSpinCount; i; --i )
      {
        if ( (v22 & 2) == 0 )
          break;
        _mm_pause();
      }
    }
    if ( _interlockedbittestandreset(&v22, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_15:
    if ( a2 )
      a2 = KeAbPreAcquire(a3);
  }
  v7 = v6 | 1;
  if ( (v6 & 2) == 0 )
    v7 += 16LL;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v7, v6);
  if ( v6 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_14:
    RtlBackoff(&v24);
    v6 = *a1;
    _m_prefetchw(a1);
    goto LABEL_15;
  }
  return result;
}
