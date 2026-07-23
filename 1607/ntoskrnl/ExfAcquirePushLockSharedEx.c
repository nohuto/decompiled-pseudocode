/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x1400C6120
 * Callers:
 *     ?StLockAcquireShared@@YAKPEAUVLOCK@@@Z @ 0x140002088 (-StLockAcquireShared@@YAKPEAUVLOCK@@@Z.c)
 *     PfLockSharedAcquire @ 0x140006614 (PfLockSharedAcquire.c)
 *     PoFxSystemLatencyNotify @ 0x140009F18 (PoFxSystemLatencyNotify.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140012B90 (SeComputeAutoInheritByObjectTypeEx.c)
 *     CcGetVirtualAddressIfMapped @ 0x1400169FC (CcGetVirtualAddressIfMapped.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x14002BA50 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiObtainReferencedSecureVad @ 0x14002C070 (MiObtainReferencedSecureVad.c)
 *     CcGetVirtualAddress @ 0x140032F40 (CcGetVirtualAddress.c)
 *     MiObtainReferencedVad @ 0x14003DEA0 (MiObtainReferencedVad.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     InsertEventEntryInLookUpTable @ 0x140085234 (InsertEventEntryInLookUpTable.c)
 *     FsRtlLookupPerFileObjectContext @ 0x14008B350 (FsRtlLookupPerFileObjectContext.c)
 *     MiLockControlAreaFileObjectShared @ 0x14008F1C0 (MiLockControlAreaFileObjectShared.c)
 *     PspLockThreadSecurityShared @ 0x140092110 (PspLockThreadSecurityShared.c)
 *     PspLockProcessThreadListShared @ 0x1400954DC (PspLockProcessThreadListShared.c)
 *     PspLockQuotaListShared @ 0x1400A8B8C (PspLockQuotaListShared.c)
 *     RtlpLookupUserFunctionTable @ 0x1400ABEF0 (RtlpLookupUserFunctionTable.c)
 *     PoFxPrepareDevice @ 0x1400AD28C (PoFxPrepareDevice.c)
 *     PopFxResidentTimeoutRoutine @ 0x1400BEE2C (PopFxResidentTimeoutRoutine.c)
 *     PopPepWork @ 0x1400BFC34 (PopPepWork.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400C55E0 (ExAcquireAutoExpandPushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400C5930 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     ExAcquirePushLockSharedEx @ 0x1400C5D70 (ExAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockShared @ 0x1400C6108 (ExfAcquirePushLockShared.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C715C (SmpKeyedStoreEntryGet.c)
 *     PspLockProcessListShared @ 0x1400C764C (PspLockProcessListShared.c)
 *     PspLockProcessShared @ 0x1400C7B28 (PspLockProcessShared.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400CDC18 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     ObpLockDirectoryShared @ 0x1400EC2BC (ObpLockDirectoryShared.c)
 *     PopDiagTraceFxRundown @ 0x140110D6C (PopDiagTraceFxRundown.c)
 *     SmpKeyedStoreReference @ 0x14011CD78 (SmpKeyedStoreReference.c)
 *     PopFxIdleDevicesFromSx @ 0x1401253F4 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x1401254E0 (PopFxActivateDevicesForSx.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x140133654 (ExpAcquireFannedOutPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x140133BCC (ExpSaAllocatorAllocate.c)
 *     ExpSaAllocatorFree @ 0x14013522C (ExpSaAllocatorFree.c)
 *     PoFxStartDevicePowerManagement @ 0x1401420A0 (PoFxStartDevicePowerManagement.c)
 *     PopFxRegisterDeviceWithPep @ 0x140142488 (PopFxRegisterDeviceWithPep.c)
 *     PopPepInsertDevice @ 0x14014258C (PopPepInsertDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x140142990 (PopFxFindAcpiDeviceByUniqueId.c)
 *     PopFxLowPowerEpochCallback @ 0x14014ADF0 (PopFxLowPowerEpochCallback.c)
 *     HvpViewMapAcquireLockShared @ 0x1401B66A4 (HvpViewMapAcquireLockShared.c)
 *     FsRtlAcquirePushLockShared @ 0x1401B9EC8 (FsRtlAcquirePushLockShared.c)
 *     MiCoalesceFreeLargePages @ 0x1401FCABC (MiCoalesceFreeLargePages.c)
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
 *     PspAcquirePushLockShared @ 0x14020F980 (PspAcquirePushLockShared.c)
 *     PspStorageGetObject @ 0x140210214 (PspStorageGetObject.c)
 *     SepRmReferenceCapTable @ 0x14021B3D8 (SepRmReferenceCapTable.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140221054 (SmKmVirtualLockCtxLockMemory.c)
 *     EtwpGetCompressionSettings @ 0x14022A858 (EtwpGetCompressionSettings.c)
 *     ExpTimeRefreshWork @ 0x1403C9110 (ExpTimeRefreshWork.c)
 *     WheaConfigureErrorSource @ 0x1403D68B8 (WheaConfigureErrorSource.c)
 *     CmpGetNextActiveHive @ 0x1403FA590 (CmpGetNextActiveHive.c)
 *     NtDeleteKey @ 0x1403FA918 (NtDeleteKey.c)
 *     CmpGetNextHive @ 0x1403FB738 (CmpGetNextHive.c)
 *     CmpCheckNotifyAccess @ 0x1403FCBD4 (CmpCheckNotifyAccess.c)
 *     CmpAssignSecurityToKcb @ 0x1403FCCF8 (CmpAssignSecurityToKcb.c)
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
 *     ObpReferenceDeviceMap @ 0x140420CA0 (ObpReferenceDeviceMap.c)
 *     CmpGetCallbackObjectContext @ 0x140420F90 (CmpGetCallbackObjectContext.c)
 *     ObQueryDeviceMapInformation @ 0x1404210E0 (ObQueryDeviceMapInformation.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     CmpLockKcbStackShared @ 0x140431E30 (CmpLockKcbStackShared.c)
 *     MiProtectVirtualMemory @ 0x140432340 (MiProtectVirtualMemory.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     ObQueryNameStringMode @ 0x140433A60 (ObQueryNameStringMode.c)
 *     CmpLockKcbShared @ 0x140434310 (CmpLockKcbShared.c)
 *     CmEnumerateValueKey @ 0x140436E40 (CmEnumerateValueKey.c)
 *     CmpLockTwoKcbsShared @ 0x140437AF0 (CmpLockTwoKcbsShared.c)
 *     CmQueryKey @ 0x1404396E0 (CmQueryKey.c)
 *     CmQueryValueKey @ 0x14043E2F0 (CmQueryValueKey.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     AlpcpReceiveSynchronousReply @ 0x140446B10 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140446E10 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcpDispatchReplyToPort @ 0x140447320 (AlpcpDispatchReplyToPort.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x140449750 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14044A430 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14044BC40 (AlpcpReceiveMessagePort.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14044C520 (AlpcpCaptureSecurityAttribute.c)
 *     PsQueryStatisticsProcess @ 0x14044DA90 (PsQueryStatisticsProcess.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     CmpCallbackFillObjectContext @ 0x1404522A0 (CmpCallbackFillObjectContext.c)
 *     CmpDoParseKey @ 0x140452BE0 (CmpDoParseKey.c)
 *     PspExitProcess @ 0x14045F434 (PspExitProcess.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1404601D4 (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x140460484 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x140461798 (ExpWnfLookupNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfReadStateData @ 0x140461E70 (ExpWnfReadStateData.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140461F84 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404625B4 (ExpWnfSubscribeNameInstance.c)
 *     PspGetNextJob @ 0x1404673D0 (PspGetNextJob.c)
 *     PspLockJobMemoryLimitsShared @ 0x140468440 (PspLockJobMemoryLimitsShared.c)
 *     PspReferenceSystemDll @ 0x14046AF3C (PspReferenceSystemDll.c)
 *     AlpcpCreateSection @ 0x140471738 (AlpcpCreateSection.c)
 *     NtAlpcSetInformation @ 0x140471BA8 (NtAlpcSetInformation.c)
 *     SepSetTokenLowboxNumber @ 0x140475934 (SepSetTokenLowboxNumber.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x140475EB8 (AlpcpPortQueryConnectedSidInfo.c)
 *     CmpLockHiveListShared @ 0x14047C1D8 (CmpLockHiveListShared.c)
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
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404AEC9C (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     NtAlpcDeleteSectionView @ 0x1404B4EB0 (NtAlpcDeleteSectionView.c)
 *     ExpWnfNotifySubscription @ 0x1404B9474 (ExpWnfNotifySubscription.c)
 *     ExpWnfDispatchKernelSubscription @ 0x1404B9600 (ExpWnfDispatchKernelSubscription.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x1404BEFCC (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     CmpGetLastHive @ 0x1404BFFDC (CmpGetLastHive.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x1404C49BC (ExpWnfAcquireSubscriptionNameInstance.c)
 *     WdipSemDisableScenario @ 0x1404C6A5C (WdipSemDisableScenario.c)
 *     SepIsParentOfChildAppContainer @ 0x1404C9740 (SepIsParentOfChildAppContainer.c)
 *     ExQueryFastCacheDevLicense @ 0x1404CA608 (ExQueryFastCacheDevLicense.c)
 *     ExpWatchProductTypeWork @ 0x1404CA880 (ExpWatchProductTypeWork.c)
 *     ExUpdateLicenseRegistry @ 0x1404CAF7C (ExUpdateLicenseRegistry.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404CE120 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     ExpGetNextCallback @ 0x1404CE3D8 (ExpGetNextCallback.c)
 *     ExpPutLicenseDataIntoRegistry @ 0x1404D1CE8 (ExpPutLicenseDataIntoRegistry.c)
 *     PiDmObjectAcquireSharedLock @ 0x1404E2AE0 (PiDmObjectAcquireSharedLock.c)
 *     CmpLockHashEntrySharedByKcb @ 0x1404E9B30 (CmpLockHashEntrySharedByKcb.c)
 *     AlpcpReferenceConnectedPort @ 0x1404EF890 (AlpcpReferenceConnectedPort.c)
 *     PsGetNextProcessThread @ 0x1404F32E0 (PsGetNextProcessThread.c)
 *     ObpCallPreOperationCallbacks @ 0x1404F4C10 (ObpCallPreOperationCallbacks.c)
 *     WdipTimeoutCheckRoutine @ 0x1404FF634 (WdipTimeoutCheckRoutine.c)
 *     PopAcquireUmpoPushLock @ 0x140503550 (PopAcquireUmpoPushLock.c)
 *     CmpLockHashEntryShared @ 0x14051888C (CmpLockHashEntryShared.c)
 *     LockShutdownShared @ 0x14051A308 (LockShutdownShared.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14051AB98 (SepDereferenceLowBoxNumberEntry.c)
 *     ExQueryLicenseValueInternal @ 0x14051C4C0 (ExQueryLicenseValueInternal.c)
 *     ExpLoadAndSortLicensingCacheDescriptors @ 0x14051CB5C (ExpLoadAndSortLicensingCacheDescriptors.c)
 *     NtQueryObject @ 0x14051CF90 (NtQueryObject.c)
 *     WdipSemEnableScenario @ 0x140541D18 (WdipSemEnableScenario.c)
 *     MmGetChannelInformation @ 0x14054C77C (MmGetChannelInformation.c)
 *     CmpLockCallbackListShared @ 0x14054CA28 (CmpLockCallbackListShared.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14054CD14 (PspSetProcessAffinityUpdateMode.c)
 *     ExRegisterExtension @ 0x140553780 (ExRegisterExtension.c)
 *     PspStorageInsertObject @ 0x14055FFD0 (PspStorageInsertObject.c)
 *     ObIsDosDeviceLocallyMapped @ 0x140579580 (ObIsDosDeviceLocallyMapped.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C9E8 (ExpGetSystemPlatformBinary.c)
 *     CmpLockContextListShared @ 0x140603CD0 (CmpLockContextListShared.c)
 *     VrpLockJobContextShared @ 0x140613034 (VrpLockJobContextShared.c)
 *     VrpLockDiffHiveTableShared @ 0x14061788C (VrpLockDiffHiveTableShared.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140655CF0 (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     AlpcpPortQueryServerInfo @ 0x140656014 (AlpcpPortQueryServerInfo.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14065641C (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpInvokeLogCallbacks @ 0x14065676C (AlpcpInvokeLogCallbacks.c)
 *     ObpGetShadowDirectory @ 0x14066550C (ObpGetShadowDirectory.c)
 *     PspUpdateSingleProcessAffinity @ 0x14067DE70 (PspUpdateSingleProcessAffinity.c)
 *     PspLockJobListShared @ 0x14068062C (PspLockJobListShared.c)
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
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1400C62F0 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1400C6330 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1400C639C (ExpOptimizePushLockList.c)
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
