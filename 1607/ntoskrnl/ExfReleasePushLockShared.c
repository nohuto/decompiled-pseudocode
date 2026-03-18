/*
 * XREFs of ExfReleasePushLockShared @ 0x1400C8640
 * Callers:
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x140001E00 (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140002010 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     PoFxSystemLatencyNotify @ 0x14000A398 (PoFxSystemLatencyNotify.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140013010 (SeComputeAutoInheritByObjectTypeEx.c)
 *     ExReleaseCacheAwarePushLockSharedEx @ 0x1400139A0 (ExReleaseCacheAwarePushLockSharedEx.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED @ 0x14002BE60 (UNLOCK_ADDRESS_SPACE_SHARED.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     AlpcpSignalAndWait @ 0x14005E020 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005E350 (AlpcpSignal.c)
 *     MiCoalesceFreePages @ 0x140067870 (MiCoalesceFreePages.c)
 *     PspUnlockThreadSecurityShared @ 0x140087058 (PspUnlockThreadSecurityShared.c)
 *     ExReleaseAutoExpandPushLockShared @ 0x14008BE60 (ExReleaseAutoExpandPushLockShared.c)
 *     MiUnlockControlAreaFileObjectShared @ 0x14008FA18 (MiUnlockControlAreaFileObjectShared.c)
 *     PspUnlockProcessThreadListShared @ 0x140095C98 (PspUnlockProcessThreadListShared.c)
 *     InsertEventEntryInLookUpTable @ 0x14009EF40 (InsertEventEntryInLookUpTable.c)
 *     AlpcpQueueIoCompletionPort @ 0x1400A5470 (AlpcpQueueIoCompletionPort.c)
 *     PspUnlockQuotaListShared @ 0x1400AA5D0 (PspUnlockQuotaListShared.c)
 *     RtlpLookupUserFunctionTable @ 0x1400AD988 (RtlpLookupUserFunctionTable.c)
 *     PoFxPrepareDevice @ 0x1400AED24 (PoFxPrepareDevice.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400C0F9C (PopFxResidentTimeoutRoutine.c)
 *     PopPepWork @ 0x1400C1DA4 (PopPepWork.c)
 *     ExReleasePushLockSharedEx @ 0x1400C85D0 (ExReleasePushLockSharedEx.c)
 *     ExfReleasePushLock @ 0x1400C8620 (ExfReleasePushLock.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C92BC (SmpKeyedStoreEntryGet.c)
 *     PspUnlockProcessListShared @ 0x1400C976C (PspUnlockProcessListShared.c)
 *     PspUnlockProcessShared @ 0x1400C9C44 (PspUnlockProcessShared.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400CFD78 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     PopDiagTraceFxRundown @ 0x140110808 (PopDiagTraceFxRundown.c)
 *     SmpKeyedStoreReference @ 0x14011C808 (SmpKeyedStoreReference.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14011CC0C (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14011DE28 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x14011E070 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     PopFxIdleDevicesFromSx @ 0x140124E84 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x140124F70 (PopFxActivateDevicesForSx.c)
 *     ExpSaAllocatorAllocate @ 0x14013365C (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140134CBC (ExpSaAllocatorFree.c)
 *     PoFxStartDevicePowerManagement @ 0x140141B30 (PoFxStartDevicePowerManagement.c)
 *     PopFxRegisterDeviceWithPep @ 0x140141F18 (PopFxRegisterDeviceWithPep.c)
 *     PopPepInsertDevice @ 0x14014201C (PopPepInsertDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140142420 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxLowPowerEpochCallback @ 0x14014A880 (PopFxLowPowerEpochCallback.c)
 *     HvpViewMapReleaseLockShared @ 0x1401B6AF8 (HvpViewMapReleaseLockShared.c)
 *     IopProcessIoTracking @ 0x1401CAC80 (IopProcessIoTracking.c)
 *     MiUnlockDynamicMemoryShared @ 0x1401E2268 (MiUnlockDynamicMemoryShared.c)
 *     MiReleasePushLockUnordered @ 0x1401E6858 (MiReleasePushLockUnordered.c)
 *     UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED @ 0x1401F53F0 (UNLOCK_ADDRESS_SPACE_SHARED_UNORDERED.c)
 *     PopFxCaptureDeviceAccounting @ 0x140202314 (PopFxCaptureDeviceAccounting.c)
 *     PopFxChildDeviceActive @ 0x140202518 (PopFxChildDeviceActive.c)
 *     PopFxDeviceAccountingWatchdog @ 0x14020294C (PopFxDeviceAccountingWatchdog.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x140202BD4 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPauseDeviceAccounting @ 0x140202FB4 (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140203A40 (PopFxResumeDeviceAccounting.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x140203BC0 (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopFxStartDeviceAccounting @ 0x140203DCC (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140203F50 (PopFxStopDeviceAccounting.c)
 *     PopPepIdleTimeoutRoutine @ 0x1402062B4 (PopPepIdleTimeoutRoutine.c)
 *     PopPepPlatformStateRegistered @ 0x1402069C8 (PopPepPlatformStateRegistered.c)
 *     PopPepRemoveDevice @ 0x140206CBC (PopPepRemoveDevice.c)
 *     PopPepResetDeviceAccountingLevel @ 0x140206E00 (PopPepResetDeviceAccountingLevel.c)
 *     PopFxAcpiPrepareDevice @ 0x14020E608 (PopFxAcpiPrepareDevice.c)
 *     PspStorageGetObject @ 0x1402103E8 (PspStorageGetObject.c)
 *     SepRmReferenceCapTable @ 0x14021B5AC (SepRmReferenceCapTable.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CC9C (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z @ 0x14021CF94 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@_K@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14021D290 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140221228 (SmKmVirtualLockCtxLockMemory.c)
 *     EtwpGetCompressionSettings @ 0x14022AA2C (EtwpGetCompressionSettings.c)
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     WheaConfigureErrorSource @ 0x1403D68B8 (WheaConfigureErrorSource.c)
 *     PfpRpCHashDeleteEntries @ 0x1403E4C14 (PfpRpCHashDeleteEntries.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E524C (PfSnGetPrefetchInstructions.c)
 *     PfCheckDeprioritizeFile @ 0x1403E5730 (PfCheckDeprioritizeFile.c)
 *     PfSnIsHostingApplication @ 0x1403E6324 (PfSnIsHostingApplication.c)
 *     PfCheckDeprioritizeImage @ 0x1403E6698 (PfCheckDeprioritizeImage.c)
 *     ObpReferenceSecurityDescriptor @ 0x140406EB0 (ObpReferenceSecurityDescriptor.c)
 *     AlpcpCreateClientPort @ 0x14040849C (AlpcpCreateClientPort.c)
 *     AlpcpCancelMessage @ 0x140408B94 (AlpcpCancelMessage.c)
 *     AlpcpDisconnectPort @ 0x140409FEC (AlpcpDisconnectPort.c)
 *     AlpcpFlushMessagesPort @ 0x14040A5E8 (AlpcpFlushMessagesPort.c)
 *     AlpcpLocateSectionView @ 0x14040BA70 (AlpcpLocateSectionView.c)
 *     AlpcpEnumerateResourcesPort @ 0x14040BB50 (AlpcpEnumerateResourcesPort.c)
 *     AlpcReferenceBlobByHandle @ 0x14040BC58 (AlpcReferenceBlobByHandle.c)
 *     EtwpGetNextGuidEntry @ 0x14040C2A4 (EtwpGetNextGuidEntry.c)
 *     MiIsRangeFullyCommitted @ 0x14040C55C (MiIsRangeFullyCommitted.c)
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 *     AlpcpCreateView @ 0x14040D220 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x14040D720 (AlpcpCreateSecurityContext.c)
 *     EtwpFindGuidEntryByGuid @ 0x14040E490 (EtwpFindGuidEntryByGuid.c)
 *     PsReferenceImpersonationTokenEx @ 0x140412120 (PsReferenceImpersonationTokenEx.c)
 *     PsReferenceEffectiveToken @ 0x1404124C0 (PsReferenceEffectiveToken.c)
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 *     PfQuerySuperfetchInformation @ 0x140418550 (PfQuerySuperfetchInformation.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     SeCaptureSubjectContextEx @ 0x14041F830 (SeCaptureSubjectContextEx.c)
 *     ObLogSecurityDescriptor @ 0x14041FCF0 (ObLogSecurityDescriptor.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     MiProtectVirtualMemory @ 0x140433470 (MiProtectVirtualMemory.c)
 *     ObQueryNameStringMode @ 0x140434B90 (ObQueryNameStringMode.c)
 *     MiRelocateImagePfn @ 0x140447780 (MiRelocateImagePfn.c)
 *     AlpcpReceiveSynchronousReply @ 0x140447C40 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140447F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x140448450 (AlpcpDispatchReplyToPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140448B60 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404494D0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14044B560 (AlpcpDispatchNewMessage.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044B990 (AlpcpCompleteDispatchMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14044CD70 (AlpcpReceiveMessagePort.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044D650 (AlpcpCaptureSecurityAttribute.c)
 *     PsQueryStatisticsProcess @ 0x14044EBC0 (PsQueryStatisticsProcess.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     PspExitProcess @ 0x140460564 (PspExitProcess.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140461304 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404615B4 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x1404628C8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140462FA0 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404630B4 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404636E4 (ExpWnfSubscribeNameInstance.c)
 *     PspGetNextJob @ 0x140468500 (PspGetNextJob.c)
 *     PspUnlockJobMemoryLimitsShared @ 0x1404694D0 (PspUnlockJobMemoryLimitsShared.c)
 *     PspReferenceSystemDll @ 0x14046C06C (PspReferenceSystemDll.c)
 *     AlpcpCreateSection @ 0x140472868 (AlpcpCreateSection.c)
 *     NtAlpcSetInformation @ 0x140472CD8 (NtAlpcSetInformation.c)
 *     SepSetTokenLowboxNumber @ 0x140476A64 (SepSetTokenLowboxNumber.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140476FE8 (AlpcpPortQueryConnectedSidInfo.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14049028C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpIsGuidAllowed @ 0x140491F64 (EtwpIsGuidAllowed.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497450 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGetKernelDataProtection @ 0x14049779C (ExpGetKernelDataProtection.c)
 *     MmAcquireSessionPoolRundown @ 0x140499358 (MmAcquireSessionPoolRundown.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1404A2798 (SepDereferenceLowBoxNumberEntry.c)
 *     ExQueryLicenseValueInternal @ 0x1404A40C0 (ExQueryLicenseValueInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x1404A475C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     NtQueryObject @ 0x1404A4B90 (NtQueryObject.c)
 *     AlpcpDispatchConnectionRequest @ 0x1404B2B84 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404B3100 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpQueryRemoteView @ 0x1404B350C (AlpcpQueryRemoteView.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x1404B3C60 (AlpcpReplyLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x1404B40CC (NtAlpcOpenSenderProcess.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1404B436C (AlpcpSendLegacySynchronousRequest.c)
 *     AlpcpAcceptConnectPort @ 0x1404B4A28 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateReserve @ 0x1404B5F8C (AlpcpCreateReserve.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x1404C1D4C (ExpWnfAcquireSubscriptionByName.c)
 *     ExpWnfEnumerateScopeInstances @ 0x1404C2A0C (ExpWnfEnumerateScopeInstances.c)
 *     AlpcpDispatchCloseMessage @ 0x1404C2E00 (AlpcpDispatchCloseMessage.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404C2F88 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo @ 0x1404C3158 (AlpcpUnlockAndDereferenceTargetPortsAndCommunicationInfo.c)
 *     AlpcpSignalPortAndUnlock @ 0x1404D0C84 (AlpcpSignalPortAndUnlock.c)
 *     NtAlpcDeleteSectionView @ 0x1404D1410 (NtAlpcDeleteSectionView.c)
 *     ExpWnfNotifySubscription @ 0x1404D5E70 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1404D5FFC (ExpWnfDispatchKernelSubscription.c)
 *     PfSnQueryPrefetcherInformation @ 0x1404D8920 (PfSnQueryPrefetcherInformation.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404DB9C8 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404E13B8 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     SepIsParentOfChildAppContainer @ 0x1404E71CC (SepIsParentOfChildAppContainer.c)
 *     ExQueryFastCacheDevLicense @ 0x1404E827C (ExQueryFastCacheDevLicense.c)
 *     ExUpdateLicenseRegistry @ 0x1404E8BF0 (ExUpdateLicenseRegistry.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404EFCCC (ExpPutLicenseDataIntoRegistry.c)
 *     AlpcpReferenceConnectedPort @ 0x14050C900 (AlpcpReferenceConnectedPort.c)
 *     PsGetNextProcessThread @ 0x140510350 (PsGetNextProcessThread.c)
 *     MmGetChannelInformation @ 0x14054C23C (MmGetChannelInformation.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14054C7D4 (PspSetProcessAffinityUpdateMode.c)
 *     ExRegisterExtension @ 0x140553240 (ExRegisterExtension.c)
 *     PspStorageInsertObject @ 0x14055FA90 (PspStorageInsertObject.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C53C (ExpGetSystemPlatformBinary.c)
 *     VrpUnlockJobContextShared @ 0x14061309C (VrpUnlockJobContextShared.c)
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140655C0C (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     AlpcpPortQueryServerInfo @ 0x140655F30 (AlpcpPortQueryServerInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x140656338 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpInvokeLogCallbacks @ 0x140656688 (AlpcpInvokeLogCallbacks.c)
 *     PsSwapProcessWorkingSet @ 0x14067D48C (PsSwapProcessWorkingSet.c)
 *     PspUpdateSingleProcessAffinity @ 0x14067DD8C (PspUpdateSingleProcessAffinity.c)
 *     PspBeginServerSiloShutdown @ 0x14067E268 (PspBeginServerSiloShutdown.c)
 *     PspUnlockJobListShared @ 0x140680FA0 (PspUnlockJobListShared.c)
 *     PspNotifyServerSiloCreation @ 0x140681200 (PspNotifyServerSiloCreation.c)
 *     PspNotifyServerSiloTermination @ 0x1406812DC (PspNotifyServerSiloTermination.c)
 *     SepIsValidProcUniqueLuid @ 0x140694694 (SepIsValidProcUniqueLuid.c)
 *     SmKmKeyGenGenerate @ 0x140698200 (SmKmKeyGenGenerate.c)
 *     SmcGetCacheStats @ 0x14069A3EC (SmcGetCacheStats.c)
 *     EtwpGetDisallowList @ 0x1406A0088 (EtwpGetDisallowList.c)
 *     EtwDeleteSiloState @ 0x1406A3110 (EtwDeleteSiloState.c)
 *     ExpSnapShotHandleTables @ 0x1406AD648 (ExpSnapShotHandleTables.c)
 *     ExFetchLicenseData @ 0x1406ADAB8 (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x1406ADC34 (ExGetLicenseTamperState.c)
 *     sub_1406ADEF4 @ 0x1406ADEF4 (sub_1406ADEF4.c)
 *     ExUpdateOsPfnInRegistry @ 0x1406AEA38 (ExUpdateOsPfnInRegistry.c)
 *     sub_1406AF038 @ 0x1406AF038 (sub_1406AF038.c)
 * Callees:
 *     ExpWakePushLock @ 0x1400C8760 (ExpWakePushLock.c)
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
