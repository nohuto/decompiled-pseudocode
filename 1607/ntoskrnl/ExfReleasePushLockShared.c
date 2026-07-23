/*
 * XREFs of ExfReleasePushLockShared @ 0x1400C64E0
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140001F74 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140002184 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     PoFxSystemLatencyNotify @ 0x140009F18 (PoFxSystemLatencyNotify.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140012B90 (SeComputeAutoInheritByObjectTypeEx.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x140013520 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002B9E0 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005DED0 (AlpcpSignal.c)
 *     MiCoalesceFreePages @ 0x1400673F0 (MiCoalesceFreePages.c)
 *     InsertEventEntryInLookUpTable @ 0x140085234 (InsertEventEntryInLookUpTable.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14008B5C0 (ExReleaseAutoExpandPushLockShared.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x14008F178 (MiUnlockControlAreaFileObjectShared.c)
 *     PspUnlockThreadSecurityShared @ 0x1400920C8 (PspUnlockThreadSecurityShared.c)
 *     PspUnlockProcessThreadListShared @ 0x140095498 (PspUnlockProcessThreadListShared.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400A39E8 (AlpcpQueueIoCompletionPort.c)
 *     PspUnlockQuotaListShared @ 0x1400A8B50 (PspUnlockQuotaListShared.c)
 *     RtlpLookupUserFunctionTable @ 0x1400ABEF0 (RtlpLookupUserFunctionTable.c)
 *     PoFxPrepareDevice @ 0x1400AD28C (PoFxPrepareDevice.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400BEE2C (PopFxResidentTimeoutRoutine.c)
 *     PopPepWork @ 0x1400BFC34 (PopPepWork.c)
 *     ExReleasePushLockSharedEx @ 0x1400C6470 (ExReleasePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C64C0 (ExfReleasePushLock.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C715C (SmpKeyedStoreEntryGet.c)
 *     PspUnlockProcessListShared @ 0x1400C760C (PspUnlockProcessListShared.c)
 *     PspUnlockProcessShared @ 0x1400C7AE4 (PspUnlockProcessShared.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400CDC18 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     PopDiagTraceFxRundown @ 0x140110D6C (PopDiagTraceFxRundown.c)
 *     SmpKeyedStoreReference @ 0x14011CD78 (SmpKeyedStoreReference.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14011D17C (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14011E398 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14011E5E0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     PopFxIdleDevicesFromSx @ 0x1401253F4 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x1401254E0 (PopFxActivateDevicesForSx.c)
 *     ExpSaAllocatorAllocate @ 0x140133BCC (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14013522C (ExpSaAllocatorFree.c)
 *     PoFxStartDevicePowerManagement @ 0x1401420A0 (PoFxStartDevicePowerManagement.c)
 *     PopFxRegisterDeviceWithPep @ 0x140142488 (PopFxRegisterDeviceWithPep.c)
 *     PopPepInsertDevice @ 0x14014258C (PopPepInsertDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140142990 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxLowPowerEpochCallback @ 0x14014ADF0 (PopFxLowPowerEpochCallback.c)
 *     HvpViewMapReleaseLockShared @ 0x1401B69DC (HvpViewMapReleaseLockShared.c)
 *     IopProcessIoTracking @ 0x1401CAB20 (IopProcessIoTracking.c)
 *     MiUnlockDynamicMemoryShared @ 0x1401E2094 (MiUnlockDynamicMemoryShared.c)
 *     MiReleasePushLockUnordered @ 0x1401E6684 (MiReleasePushLockUnordered.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1401F521C (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     PopFxCaptureDeviceAccounting @ 0x140202140 (PopFxCaptureDeviceAccounting.c)
 *     PopFxChildDeviceActive @ 0x140202344 (PopFxChildDeviceActive.c)
 *     PopFxDeviceAccountingWatchdog @ 0x140202778 (PopFxDeviceAccountingWatchdog.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x140202A00 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPauseDeviceAccounting @ 0x140202DE0 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x14020386C (PopFxResumeDeviceAccounting.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x1402039EC (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopFxStartDeviceAccounting @ 0x140203BF8 (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140203D7C (PopFxStopDeviceAccounting.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402060E0 (PopPepIdleTimeoutRoutine.c)
 *     PopPepPlatformStateRegistered @ 0x1402067F4 (PopPepPlatformStateRegistered.c)
 *     PopPepRemoveDevice @ 0x140206AE8 (PopPepRemoveDevice.c)
 *     PopPepResetDeviceAccountingLevel @ 0x140206C2C (PopPepResetDeviceAccountingLevel.c)
 *     PopFxAcpiPrepareDevice @ 0x14020E434 (PopFxAcpiPrepareDevice.c)
 *     PspStorageGetObject @ 0x140210214 (PspStorageGetObject.c)
 *     SepRmReferenceCapTable @ 0x14021B3D8 (SepRmReferenceCapTable.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CAC8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14021CDC0 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14021D0BC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140221054 (SmKmVirtualLockCtxLockMemory.c)
 *     EtwpGetCompressionSettings @ 0x14022A858 (EtwpGetCompressionSettings.c)
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     WheaConfigureErrorSource @ 0x1403D68B8 (WheaConfigureErrorSource.c)
 *     PfpRpCHashDeleteEntries @ 0x1403E6240 (PfpRpCHashDeleteEntries.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E6878 (PfSnGetPrefetchInstructions.c)
 *     PfCheckDeprioritizeFile @ 0x1403E6D5C (PfCheckDeprioritizeFile.c)
 *     PfSnIsHostingApplication @ 0x1403E7954 (PfSnIsHostingApplication.c)
 *     PfCheckDeprioritizeImage @ 0x1403E7CC8 (PfCheckDeprioritizeImage.c)
 *     ObpReferenceSecurityDescriptor @ 0x140405D70 (ObpReferenceSecurityDescriptor.c)
 *     AlpcpCreateClientPort @ 0x14040735C (AlpcpCreateClientPort.c)
 *     AlpcpCancelMessage @ 0x140407A54 (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x140408EAC (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x1404094A8 (AlpcpFlushMessagesPort.c)
 *     AlpcpLocateSectionView @ 0x14040A930 (AlpcpLocateSectionView.c)
 *     AlpcpEnumerateResourcesPort @ 0x14040AA10 (AlpcpEnumerateResourcesPort.c)
 *     AlpcReferenceBlobByHandle @ 0x14040AB18 (AlpcReferenceBlobByHandle.c)
 *     EtwpGetNextGuidEntry @ 0x14040B164 (EtwpGetNextGuidEntry.c)
 *     MiIsRangeFullyCommitted @ 0x14040B41C (MiIsRangeFullyCommitted.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     AlpcpCreateView @ 0x14040C0E0 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14040C5E0 (AlpcpCreateSecurityContext.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040D350 (EtwpFindGuidEntryByGuid.c)
 *     PsReferenceImpersonationTokenEx @ 0x140410FE0 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x140411380 (PsReferenceEffectiveToken.c)
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 *     PfQuerySuperfetchInformation @ 0x140417410 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     SeCaptureSubjectContextEx @ 0x14041E6F0 (SeCaptureSubjectContextEx.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     AlpcpReceiveSynchronousReply @ 0x140446B10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140446E10 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x140447320 (AlpcpDispatchReplyToPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14044A430 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044C520 (AlpcpCaptureSecurityAttribute.c)
 *     PsQueryStatisticsProcess @ 0x14044DA90 (PsQueryStatisticsProcess.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     PspExitProcess @ 0x14045F434 (PspExitProcess.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1404601D4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140460484 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x140461798 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140461E70 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140461F84 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404625B4 (ExpWnfSubscribeNameInstance.c)
 *     PspGetNextJob @ 0x1404673D0 (PspGetNextJob.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1404683A0 (PspUnlockJobMemoryLimitsShared.c)
 *     PspReferenceSystemDll @ 0x14046AF3C (PspReferenceSystemDll.c)
 *     AlpcpCreateSection @ 0x140471738 (AlpcpCreateSection.c)
 *     NtAlpcSetInformation @ 0x140471BA8 (NtAlpcSetInformation.c)
 *     SepSetTokenLowboxNumber @ 0x140475934 (SepSetTokenLowboxNumber.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140475EB8 (AlpcpPortQueryConnectedSidInfo.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x140490D1C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpIsGuidAllowed @ 0x1404929F4 (EtwpIsGuidAllowed.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497EE0 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGetKernelDataProtection @ 0x14049822C (ExpGetKernelDataProtection.c)
 *     MmAcquireSessionPoolRundown @ 0x140499DE8 (MmAcquireSessionPoolRundown.c)
 *     AlpcpDispatchConnectionRequest @ 0x14049CF64 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x14049D4E0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpQueryRemoteView @ 0x14049D8EC (AlpcpQueryRemoteView.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14049E040 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x14049E4AC (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x14049E74C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x14049EE08 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateReserve @ 0x1404A036C (AlpcpCreateReserve.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1404ADA7C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404AE73C (ExpWnfEnumerateScopeInstances.c)
 *     AlpcpDispatchCloseMessage @ 0x1404AEB14 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404AEC9C (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1404AEE6C (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404B4724 (AlpcpSignalPortAndUnlock.c)
 *     NtAlpcDeleteSectionView @ 0x1404B4EB0 (NtAlpcDeleteSectionView.c)
 *     ExpWnfNotifySubscription @ 0x1404B9474 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1404B9600 (ExpWnfDispatchKernelSubscription.c)
 *     PfSnQueryPrefetcherInformation @ 0x1404BBF24 (PfSnQueryPrefetcherInformation.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404BEFCC (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404C49BC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     SepIsParentOfChildAppContainer @ 0x1404C9740 (SepIsParentOfChildAppContainer.c)
 *     ExQueryFastCacheDevLicense @ 0x1404CA608 (ExQueryFastCacheDevLicense.c)
 *     ExUpdateLicenseRegistry @ 0x1404CAF7C (ExUpdateLicenseRegistry.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404D1CE8 (ExpPutLicenseDataIntoRegistry.c)
 *     AlpcpReferenceConnectedPort @ 0x1404EF890 (AlpcpReferenceConnectedPort.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14051AB98 (SepDereferenceLowBoxNumberEntry.c)
 *     ExQueryLicenseValueInternal @ 0x14051C4C0 (ExQueryLicenseValueInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14051CB5C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     NtQueryObject @ 0x14051CF90 (NtQueryObject.c)
 *     MmGetChannelInformation @ 0x14054C77C (MmGetChannelInformation.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14054CD14 (PspSetProcessAffinityUpdateMode.c)
 *     ExRegisterExtension @ 0x140553780 (ExRegisterExtension.c)
 *     PspStorageInsertObject @ 0x14055FFD0 (PspStorageInsertObject.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C9E8 (ExpGetSystemPlatformBinary.c)
 *     VrpUnlockJobContextShared @ 0x140613150 (VrpUnlockJobContextShared.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140655CF0 (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     AlpcpPortQueryServerInfo @ 0x140656014 (AlpcpPortQueryServerInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14065641C (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpInvokeLogCallbacks @ 0x14065676C (AlpcpInvokeLogCallbacks.c)
 *     PsSwapProcessWorkingSet @ 0x14067D570 (PsSwapProcessWorkingSet.c)
 *     PspUpdateSingleProcessAffinity @ 0x14067DE70 (PspUpdateSingleProcessAffinity.c)
 *     PspBeginServerSiloShutdown @ 0x14067E34C (PspBeginServerSiloShutdown.c)
 *     PspUnlockJobListShared @ 0x140681084 (PspUnlockJobListShared.c)
 *     PspNotifyServerSiloCreation @ 0x1406812E4 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1406813C0 (PspNotifyServerSiloTermination.c)
 *     SepIsValidProcUniqueLuid @ 0x140694778 (SepIsValidProcUniqueLuid.c)
 *     SmKmKeyGenGenerate @ 0x1406982E4 (SmKmKeyGenGenerate.c)
 *     SmcGetCacheStats @ 0x14069A4D0 (SmcGetCacheStats.c)
 *     EtwpGetDisallowList @ 0x1406A01C0 (EtwpGetDisallowList.c)
 *     EtwDeleteSiloState @ 0x1406A3248 (EtwDeleteSiloState.c)
 *     ExpSnapShotHandleTables @ 0x1406AD780 (ExpSnapShotHandleTables.c)
 *     ExFetchLicenseData @ 0x1406ADBF0 (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x1406ADD6C (ExGetLicenseTamperState.c)
 *     sub_1406AE02C @ 0x1406AE02C (sub_1406AE02C.c)
 *     ExUpdateOsPfnInRegistry @ 0x1406AEB70 (ExUpdateOsPfnInRegistry.c)
 *     sub_1406AF170 @ 0x1406AF170 (sub_1406AF170.c)
 * Callees:
 *     ExpWakePushLock @ 0x1400C6600 (ExpWakePushLock.c)
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
