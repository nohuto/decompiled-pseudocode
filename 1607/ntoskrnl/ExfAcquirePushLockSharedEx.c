/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x1400C8280
 * Callers:
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140001F14 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     PfLockSharedAcquire @ 0x1400064A4 (PfLockSharedAcquire.c)
 *     PoFxSystemLatencyNotify @ 0x14000A398 (PoFxSystemLatencyNotify.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140013010 (SeComputeAutoInheritByObjectTypeEx.c)
 *     CcGetVirtualAddressIfMapped @ 0x140016E7C (CcGetVirtualAddressIfMapped.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BED0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiObtainReferencedSecureVad @ 0x14002C4F0 (MiObtainReferencedSecureVad.c)
 *     CcGetVirtualAddress @ 0x1400333C0 (CcGetVirtualAddress.c)
 *     MiObtainReferencedVad @ 0x14003E320 (MiObtainReferencedVad.c)
 *     MiWalkEntireImage @ 0x14004C570 (MiWalkEntireImage.c)
 *     PspLockThreadSecurityShared @ 0x1400870A0 (PspLockThreadSecurityShared.c)
 *     FsRtlLookupPerFileObjectContext @ 0x14008BBF0 (FsRtlLookupPerFileObjectContext.c)
 *     MiLockControlAreaFileObjectShared @ 0x14008FA60 (MiLockControlAreaFileObjectShared.c)
 *     PspLockProcessThreadListShared @ 0x140095CDC (PspLockProcessThreadListShared.c)
 *     InsertEventEntryInLookUpTable @ 0x14009EF40 (InsertEventEntryInLookUpTable.c)
 *     PspLockQuotaListShared @ 0x1400AA60C (PspLockQuotaListShared.c)
 *     RtlpLookupUserFunctionTable @ 0x1400AD988 (RtlpLookupUserFunctionTable.c)
 *     PoFxPrepareDevice @ 0x1400AED24 (PoFxPrepareDevice.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400C0F9C (PopFxResidentTimeoutRoutine.c)
 *     PopPepWork @ 0x1400C1DA4 (PopPepWork.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C7740 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400C7A90 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400C7ED0 (ExAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockShared @ 0x1400C8268 (ExfAcquirePushLockShared.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C92BC (SmpKeyedStoreEntryGet.c)
 *     PspLockProcessListShared @ 0x1400C97AC (PspLockProcessListShared.c)
 *     PspLockProcessShared @ 0x1400C9C88 (PspLockProcessShared.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400CFD78 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObpLockDirectoryShared @ 0x1400EE448 (ObpLockDirectoryShared.c)
 *     PopDiagTraceFxRundown @ 0x140110808 (PopDiagTraceFxRundown.c)
 *     SmpKeyedStoreReference @ 0x14011C808 (SmpKeyedStoreReference.c)
 *     PopFxIdleDevicesFromSx @ 0x140124E84 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x140124F70 (PopFxActivateDevicesForSx.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x1401330E4 (ExpAcquireFannedOutPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x14013365C (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x140134CBC (ExpSaAllocatorFree.c)
 *     PoFxStartDevicePowerManagement @ 0x140141B30 (PoFxStartDevicePowerManagement.c)
 *     PopFxRegisterDeviceWithPep @ 0x140141F18 (PopFxRegisterDeviceWithPep.c)
 *     PopPepInsertDevice @ 0x14014201C (PopPepInsertDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140142420 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxLowPowerEpochCallback @ 0x14014A880 (PopFxLowPowerEpochCallback.c)
 *     HvpViewMapAcquireLockShared @ 0x1401B67C0 (HvpViewMapAcquireLockShared.c)
 *     FsRtlAcquirePushLockShared @ 0x1401B9FE4 (FsRtlAcquirePushLockShared.c)
 *     MiCoalesceFreeLargePages @ 0x1401FCC90 (MiCoalesceFreeLargePages.c)
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
 *     PspAcquirePushLockShared @ 0x14020FB54 (PspAcquirePushLockShared.c)
 *     PspStorageGetObject @ 0x1402103E8 (PspStorageGetObject.c)
 *     SepRmReferenceCapTable @ 0x14021B5AC (SepRmReferenceCapTable.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140221228 (SmKmVirtualLockCtxLockMemory.c)
 *     EtwpGetCompressionSettings @ 0x14022AA2C (EtwpGetCompressionSettings.c)
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     WheaConfigureErrorSource @ 0x1403D68B8 (WheaConfigureErrorSource.c)
 *     CmpGetNextActiveHive @ 0x1403FB6D0 (CmpGetNextActiveHive.c)
 *     NtDeleteKey @ 0x1403FBA58 (NtDeleteKey.c)
 *     CmpGetNextHive @ 0x1403FC878 (CmpGetNextHive.c)
 *     CmpCheckNotifyAccess @ 0x1403FDD14 (CmpCheckNotifyAccess.c)
 *     CmpAssignSecurityToKcb @ 0x1403FDE38 (CmpAssignSecurityToKcb.c)
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
 *     ObpReferenceDeviceMap @ 0x140421DE0 (ObpReferenceDeviceMap.c)
 *     CmpGetCallbackObjectContext @ 0x1404220D0 (CmpGetCallbackObjectContext.c)
 *     ObQueryDeviceMapInformation @ 0x140422220 (ObQueryDeviceMapInformation.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     CmpLockKcbStackShared @ 0x140432F60 (CmpLockKcbStackShared.c)
 *     MiProtectVirtualMemory @ 0x140433470 (MiProtectVirtualMemory.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     ObQueryNameStringMode @ 0x140434B90 (ObQueryNameStringMode.c)
 *     CmpLockKcbShared @ 0x140435440 (CmpLockKcbShared.c)
 *     CmEnumerateValueKey @ 0x140437F70 (CmEnumerateValueKey.c)
 *     CmpLockTwoKcbsShared @ 0x140438C20 (CmpLockTwoKcbsShared.c)
 *     CmQueryKey @ 0x14043A810 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x14043F420 (CmQueryValueKey.c)
 *     MiRelocateImagePfn @ 0x140447780 (MiRelocateImagePfn.c)
 *     AlpcpReceiveSynchronousReply @ 0x140447C40 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140447F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x140448450 (AlpcpDispatchReplyToPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140448B60 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404494D0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x14044A880 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14044B560 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14044CD70 (AlpcpReceiveMessagePort.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044D650 (AlpcpCaptureSecurityAttribute.c)
 *     PsQueryStatisticsProcess @ 0x14044EBC0 (PsQueryStatisticsProcess.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     CmpCallbackFillObjectContext @ 0x1404533D0 (CmpCallbackFillObjectContext.c)
 *     CmpDoParseKey @ 0x140453D10 (CmpDoParseKey.c)
 *     PspExitProcess @ 0x140460564 (PspExitProcess.c)
 *     ExpWnfDeliverThreadNotifications @ 0x140461304 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1404615B4 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x1404628C8 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140462FA0 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404630B4 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404636E4 (ExpWnfSubscribeNameInstance.c)
 *     PspGetNextJob @ 0x140468500 (PspGetNextJob.c)
 *     PspLockJobMemoryLimitsShared @ 0x140469570 (PspLockJobMemoryLimitsShared.c)
 *     PspReferenceSystemDll @ 0x14046C06C (PspReferenceSystemDll.c)
 *     AlpcpCreateSection @ 0x140472868 (AlpcpCreateSection.c)
 *     NtAlpcSetInformation @ 0x140472CD8 (NtAlpcSetInformation.c)
 *     SepSetTokenLowboxNumber @ 0x140476A64 (SepSetTokenLowboxNumber.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140476FE8 (AlpcpPortQueryConnectedSidInfo.c)
 *     CmpLockHiveListShared @ 0x14047D484 (CmpLockHiveListShared.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x14049028C (EtwpReferenceLoggerSecurityDescriptor.c)
 *     EtwpIsGuidAllowed @ 0x140491F64 (EtwpIsGuidAllowed.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     ExpGenuinePolicyCacheProvider @ 0x140497450 (ExpGenuinePolicyCacheProvider.c)
 *     ExpGetKernelDataProtection @ 0x14049779C (ExpGetKernelDataProtection.c)
 *     MmAcquireSessionPoolRundown @ 0x140499358 (MmAcquireSessionPoolRundown.c)
 *     CmpLockHashEntryShared @ 0x1404A0480 (CmpLockHashEntryShared.c)
 *     LockShutdownShared @ 0x1404A1EFC (LockShutdownShared.c)
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
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404C2F88 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     NtAlpcDeleteSectionView @ 0x1404D1410 (NtAlpcDeleteSectionView.c)
 *     ExpWnfNotifySubscription @ 0x1404D5E70 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1404D5FFC (ExpWnfDispatchKernelSubscription.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404DB9C8 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     CmpGetLastHive @ 0x1404DC9D8 (CmpGetLastHive.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404E13B8 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     WdipSemDisableScenario @ 0x1404E3DA4 (WdipSemDisableScenario.c)
 *     SepIsParentOfChildAppContainer @ 0x1404E71CC (SepIsParentOfChildAppContainer.c)
 *     ExQueryFastCacheDevLicense @ 0x1404E827C (ExQueryFastCacheDevLicense.c)
 *     ExpWatchProductTypeWork @ 0x1404E84F4 (ExpWatchProductTypeWork.c)
 *     ExUpdateLicenseRegistry @ 0x1404E8BF0 (ExUpdateLicenseRegistry.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404EC098 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     ExpGetNextCallback @ 0x1404EC350 (ExpGetNextCallback.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404EFCCC (ExpPutLicenseDataIntoRegistry.c)
 *     PiDmObjectAcquireSharedLock @ 0x1404FFB50 (PiDmObjectAcquireSharedLock.c)
 *     CmpLockHashEntrySharedByKcb @ 0x140506BA0 (CmpLockHashEntrySharedByKcb.c)
 *     AlpcpReferenceConnectedPort @ 0x14050C900 (AlpcpReferenceConnectedPort.c)
 *     PsGetNextProcessThread @ 0x140510350 (PsGetNextProcessThread.c)
 *     ObpCallPreOperationCallbacks @ 0x140511820 (ObpCallPreOperationCallbacks.c)
 *     WdipTimeoutCheckRoutine @ 0x14051C244 (WdipTimeoutCheckRoutine.c)
 *     PopAcquireUmpoPushLock @ 0x1405204E8 (PopAcquireUmpoPushLock.c)
 *     WdipSemEnableScenario @ 0x1405417D8 (WdipSemEnableScenario.c)
 *     MmGetChannelInformation @ 0x14054C23C (MmGetChannelInformation.c)
 *     CmpLockCallbackListShared @ 0x14054C4E8 (CmpLockCallbackListShared.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14054C7D4 (PspSetProcessAffinityUpdateMode.c)
 *     ExRegisterExtension @ 0x140553240 (ExRegisterExtension.c)
 *     PspStorageInsertObject @ 0x14055FA90 (PspStorageInsertObject.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140579040 (ObIsDosDeviceLocallyMapped.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C53C (ExpGetSystemPlatformBinary.c)
 *     CmpLockContextListShared @ 0x140603C1C (CmpLockContextListShared.c)
 *     VrpLockJobContextShared @ 0x140612F80 (VrpLockJobContextShared.c)
 *     VrpLockDiffHiveTableShared @ 0x1406177D8 (VrpLockDiffHiveTableShared.c)
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140655C0C (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     AlpcpPortQueryServerInfo @ 0x140655F30 (AlpcpPortQueryServerInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x140656338 (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpInvokeLogCallbacks @ 0x140656688 (AlpcpInvokeLogCallbacks.c)
 *     ObpGetShadowDirectory @ 0x140665428 (ObpGetShadowDirectory.c)
 *     PspUpdateSingleProcessAffinity @ 0x14067DD8C (PspUpdateSingleProcessAffinity.c)
 *     PspLockJobListShared @ 0x140680548 (PspLockJobListShared.c)
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
 *     KeAbPreAcquire @ 0x14002C1B0 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1400C8450 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1400C8490 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1400C84FC (ExpOptimizePushLockList.c)
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
      a2 = KeAbPreAcquire(a3, a2, 0);
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
