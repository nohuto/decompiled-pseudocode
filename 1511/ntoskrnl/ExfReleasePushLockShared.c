/*
 * XREFs of ExfReleasePushLockShared @ 0x1400309E0
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140001F48 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     PspUnlockQuotaListShared @ 0x140003178 (PspUnlockQuotaListShared.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x140009694 (MiUnlockControlAreaFileObjectShared.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x14000D50C (CcSlowReferenceSharedCacheMapFileObject.c)
 *     PspUnlockProcessThreadListShared @ 0x140014364 (PspUnlockProcessThreadListShared.c)
 *     PspUnlockProcessShared @ 0x14002E340 (PspUnlockProcessShared.c)
 *     ExfReleasePushLock @ 0x1400309C0 (ExfReleasePushLock.c)
 *     ExReleasePushLockSharedEx @ 0x140041F10 (ExReleasePushLockSharedEx.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140042F70 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14004AD10 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     AlpcpSignal @ 0x14007A0C0 (AlpcpSignal.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x14007E0B0 (SeComputeAutoInheritByObjectTypeEx.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     PspUnlockProcessListShared @ 0x14009253C (PspUnlockProcessListShared.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 *     PoFxSystemLatencyNotify @ 0x1400971C4 (PoFxSystemLatencyNotify.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400BC0D4 (AlpcpQueueIoCompletionPort.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x1400C8A30 (ExReleaseAutoExpandPushLockShared.c)
 *     PspUnlockThreadSecurityShared @ 0x1400D1980 (PspUnlockThreadSecurityShared.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400DA934 (PopFxResidentTimeoutRoutine.c)
 *     PopPepWork @ 0x1400DAB48 (PopPepWork.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1400E7988 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     RtlpLookupUserFunctionTable @ 0x1400ED2CC (RtlpLookupUserFunctionTable.c)
 *     PoFxPrepareDevice @ 0x14010786C (PoFxPrepareDevice.c)
 *     SmpKeyedStoreReference @ 0x14010F104 (SmpKeyedStoreReference.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14010F414 (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14011015C (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401104A0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     PopFxIdleDevicesFromSx @ 0x14011A82C (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x14011A918 (PopFxActivateDevicesForSx.c)
 *     ExpSaAllocatorAllocate @ 0x14012CE14 (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14012E754 (ExpSaAllocatorFree.c)
 *     PopFxRegisterDeviceWithPep @ 0x14012FE54 (PopFxRegisterDeviceWithPep.c)
 *     PopPepInsertDevice @ 0x14012FF58 (PopPepInsertDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1401302E0 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PoFxStartDevicePowerManagement @ 0x14013D034 (PoFxStartDevicePowerManagement.c)
 *     PopFxLowPowerEpochCallback @ 0x1401411A0 (PopFxLowPowerEpochCallback.c)
 *     HvpViewMapReleaseLockShared @ 0x1401AB00C (HvpViewMapReleaseLockShared.c)
 *     IopProcessIoTracking @ 0x1401BCC68 (IopProcessIoTracking.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1401E1E5C (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
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
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140202F74 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14020326C (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140203568 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140208F68 (SmKmVirtualLockCtxLockMemory.c)
 *     ExpTimeRefreshWork @ 0x1403A6F68 (ExpTimeRefreshWork.c)
 *     WheaConfigureErrorSource @ 0x1403AA850 (WheaConfigureErrorSource.c)
 *     SepIsParentOfChildAppContainer @ 0x1403B4520 (SepIsParentOfChildAppContainer.c)
 *     SepSetTokenLowboxNumber @ 0x1403BED94 (SepSetTokenLowboxNumber.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1403C91FC (SepDereferenceLowBoxNumberEntry.c)
 *     ExpWnfNotifySubscription @ 0x1403E23AC (ExpWnfNotifySubscription.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1403E254C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1403E3FEC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1403E429C (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x1403E55A8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x1403E5CF4 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1403E6008 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 *     PfCheckDeprioritizeFile @ 0x1403E7394 (PfCheckDeprioritizeFile.c)
 *     DbgkFlushErrorPort @ 0x1403E7698 (DbgkFlushErrorPort.c)
 *     PspUnlockJobListShared @ 0x1403E9B04 (PspUnlockJobListShared.c)
 *     PsQueryStatisticsProcess @ 0x1403EC180 (PsQueryStatisticsProcess.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1403EC7C8 (PspUnlockJobMemoryLimitsShared.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ObOpenObjectByNameEx @ 0x14040FFF0 (ObOpenObjectByNameEx.c)
 *     MiProtectVirtualMemory @ 0x140418F80 (MiProtectVirtualMemory.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     NtQueryInformationProcess @ 0x14041D530 (NtQueryInformationProcess.c)
 *     NtQueryObject @ 0x14041F7E0 (NtQueryObject.c)
 *     ObQueryNameStringMode @ 0x14041FE90 (ObQueryNameStringMode.c)
 *     ObpReferenceSecurityDescriptor @ 0x140421050 (ObpReferenceSecurityDescriptor.c)
 *     AlpcpReceiveLegacyMessage @ 0x140423610 (AlpcpReceiveLegacyMessage.c)
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
 *     AlpcpCreateSection @ 0x14044E0D4 (AlpcpCreateSection.c)
 *     NtAlpcSetInformation @ 0x14044FF74 (NtAlpcSetInformation.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
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
 *     AlpcpDispatchCloseMessage @ 0x14047FA24 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x14047FBB0 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x140480230 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x140480FF8 (NtAlpcOpenSenderProcess.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404812A0 (AlpcpReplyLegacySynchronousRequest.c)
 *     AlpcpCancelMessage @ 0x1404815E0 (AlpcpCancelMessage.c)
 *     AlpcpQueryRemoteView @ 0x1404825F0 (AlpcpQueryRemoteView.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1404826FC (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x140482D7C (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404832E0 (AlpcpSignalPortAndUnlock.c)
 *     sub_1404885A8 @ 0x1404885A8 (sub_1404885A8.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     sub_140489CE0 @ 0x140489CE0 (sub_140489CE0.c)
 *     sub_14048A234 @ 0x14048A234 (sub_14048A234.c)
 *     sub_14048A7D0 @ 0x14048A7D0 (sub_14048A7D0.c)
 *     sub_14048AB98 @ 0x14048AB98 (sub_14048AB98.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14048C178 (AlpcpPortQueryConnectedSidInfo.c)
 *     ExUpdateLicenseRegistry @ 0x14049B478 (ExUpdateLicenseRegistry.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     AlpcpCreateReserve @ 0x1404A723C (AlpcpCreateReserve.c)
 *     NtAlpcDeleteSectionView @ 0x1404ABD1C (NtAlpcDeleteSectionView.c)
 *     MmAcquireSessionPoolRundown @ 0x1404AC470 (MmAcquireSessionPoolRundown.c)
 *     PfpRpCHashDeleteEntries @ 0x1404AC980 (PfpRpCHashDeleteEntries.c)
 *     PfSnQueryPrefetcherInformation @ 0x1404B3698 (PfSnQueryPrefetcherInformation.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1404B7968 (ExpWnfDispatchKernelSubscription.c)
 *     ExQueryFastCacheDevLicense @ 0x1404B8DC0 (ExQueryFastCacheDevLicense.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404BB694 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404C094C (ExpWnfEnumerateScopeInstances.c)
 *     EtwpGetNextGuidEntry @ 0x1404CCE6C (EtwpGetNextGuidEntry.c)
 *     PfSnGetPrefetchInstructions @ 0x1404D439C (PfSnGetPrefetchInstructions.c)
 *     PfSnIsHostingApplication @ 0x1404D6338 (PfSnIsHostingApplication.c)
 *     PfCheckDeprioritizeImage @ 0x1404D66AC (PfCheckDeprioritizeImage.c)
 *     AlpcpPortQueryServerInfo @ 0x14050FEAC (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x1405101A8 (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     sub_140517000 @ 0x140517000 (sub_140517000.c)
 *     PspSetProcessAffinityUpdateMode @ 0x140517F80 (PspSetProcessAffinityUpdateMode.c)
 *     MmGetChannelInformation @ 0x140518364 (MmGetChannelInformation.c)
 *     ExRegisterExtension @ 0x1405278B0 (ExRegisterExtension.c)
 *     SmpCacheStatsCopy @ 0x140540650 (SmpCacheStatsCopy.c)
 *     ExpGetSystemPlatformBinary @ 0x1405482D8 (ExpGetSystemPlatformBinary.c)
 *     AlpcpUnlockCommunicationInfoShared @ 0x1406201F8 (AlpcpUnlockCommunicationInfoShared.c)
 *     AlpcpUnlockPortShared @ 0x140620224 (AlpcpUnlockPortShared.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406209E0 (AlpcpInvokeLogCallbacks.c)
 *     PsSwapProcessWorkingSet @ 0x14063EE24 (PsSwapProcessWorkingSet.c)
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
 *     VerifierExfReleasePushLockShared @ 0x1406CE35C (VerifierExfReleasePushLockShared.c)
 * Callees:
 *     ExpWakePushLock @ 0x140030B00 (ExpWakePushLock.c)
 */

unsigned __int64 __fastcall ExfReleasePushLockShared(signed __int64 *a1)
{
  signed __int64 v1; // r8
  signed __int64 v2; // rdx
  bool v3; // zf
  unsigned __int64 result; // rax
  __int64 v5; // r9
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 i; // rdx

  _m_prefetchw(a1);
  v1 = *a1;
  if ( (*a1 & 2) != 0 )
  {
LABEL_6:
    if ( (v1 & 8) != 0 )
    {
      result = v1 & 0xFFFFFFFFFFFFFFF0uLL;
      for ( i = *(_QWORD *)((v1 & 0xFFFFFFFFFFFFFFF0uLL) + 0x20); !i; i = *(_QWORD *)(result + 32) )
        result = *(_QWORD *)(result + 24);
      if ( _InterlockedExchangeAdd((volatile signed __int32 *)(i + 48), 0xFFFFFFFF) > 1 )
        return result;
      v5 = -9LL;
    }
    else
    {
      v5 = -1LL;
    }
    while ( 1 )
    {
      v6 = (v1 & 6) == 2 ? v5 + 4 : v5;
      v7 = v6 + v1;
      result = _InterlockedCompareExchange64(a1, v6 + v1, v1);
      if ( v1 == result )
        break;
      v1 = result;
    }
    if ( (v1 & 6) == 2 )
      return ExpWakePushLock(a1, v7);
    return result;
  }
  while ( 1 )
  {
    v2 = v1 - 16;
    if ( (v1 & 0xFFFFFFFFFFFFFFF0uLL) == 0x10 )
      v2 = 0LL;
    result = _InterlockedCompareExchange64(a1, v2, v1);
    v3 = v1 == result;
    v1 = result;
    if ( v3 )
      return result;
    if ( (result & 2) != 0 )
      goto LABEL_6;
  }
}
