/*
 * XREFs of ExfAcquirePushLockSharedEx @ 0x1400F2F00
 * Callers:
 *     PoGetIdleTimes @ 0x140014610 (PoGetIdleTimes.c)
 *     SepDereferenceLuidToIndexEntry @ 0x1400152A0 (SepDereferenceLuidToIndexEntry.c)
 *     SepReferenceLuidToIndexEntry @ 0x140015D60 (SepReferenceLuidToIndexEntry.c)
 *     PsEqualCurrentServerSilo @ 0x140017D40 (PsEqualCurrentServerSilo.c)
 *     PoFxPrepareDevice @ 0x1400271E8 (PoFxPrepareDevice.c)
 *     PopPepWork @ 0x140028D6C (PopPepWork.c)
 *     SeComputeAutoInheritByObjectTypeEx @ 0x140045360 (SeComputeAutoInheritByObjectTypeEx.c)
 *     ExAcquirePushLockSharedEx @ 0x14004E6D0 (ExAcquirePushLockSharedEx.c)
 *     CcGetVirtualAddress @ 0x1400501E0 (CcGetVirtualAddress.c)
 *     CcSlowReferenceSharedCacheMapFileObject @ 0x1400854E0 (CcSlowReferenceSharedCacheMapFileObject.c)
 *     MiObtainReferencedSecureVad @ 0x140089350 (MiObtainReferencedSecureVad.c)
 *     LOCK_ADDRESS_SPACE_SHARED @ 0x1400895D0 (LOCK_ADDRESS_SPACE_SHARED.c)
 *     MiValidateImagePages @ 0x1400B57B0 (MiValidateImagePages.c)
 *     MiObtainReferencedVad @ 0x1400BF400 (MiObtainReferencedVad.c)
 *     PspGetThreadServerSilo @ 0x1400CE9B0 (PspGetThreadServerSilo.c)
 *     PsGetMonitorContextServerSilo @ 0x1400CEAC0 (PsGetMonitorContextServerSilo.c)
 *     PpmIdleUsingStateSelection @ 0x1400ED2D0 (PpmIdleUsingStateSelection.c)
 *     PoFxSystemLatencyNotify @ 0x1400ED3F0 (PoFxSystemLatencyNotify.c)
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 *     ExfAcquirePushLockShared @ 0x1400F2EF0 (ExfAcquirePushLockShared.c)
 *     ExAcquireCacheAwarePushLockSharedEx @ 0x1400F7580 (ExAcquireCacheAwarePushLockSharedEx.c)
 *     MiTrimSection @ 0x1400FA79C (MiTrimSection.c)
 *     ExAcquireAutoExpandPushLockShared @ 0x1400FF100 (ExAcquireAutoExpandPushLockShared.c)
 *     FsRtlLookupPerFileObjectContext @ 0x140101DA0 (FsRtlLookupPerFileObjectContext.c)
 *     CcGetVirtualAddressIfMapped @ 0x140113B48 (CcGetVirtualAddressIfMapped.c)
 *     ?SmStPrioritizeRegionsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z @ 0x1401286CC (-SmStPrioritizeRegionsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@K@Z.c)
 *     PspNotifyProcessBackgroundTransition @ 0x140129860 (PspNotifyProcessBackgroundTransition.c)
 *     PopFxResidentTimeoutRoutine @ 0x14012A5F8 (PopFxResidentTimeoutRoutine.c)
 *     RtlpLookupUserFunctionTable @ 0x14012BCFC (RtlpLookupUserFunctionTable.c)
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140131DDC (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     PopPepIdleTimeoutRoutine @ 0x140135FA0 (PopPepIdleTimeoutRoutine.c)
 *     ?SmFeReadInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z @ 0x14013C960 (-SmFeReadInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU1@PEAT_SM_PAGE_KEY@@PEAKPEA_K2@Z.c)
 *     SmpKeyedStoreReference @ 0x14013FF18 (SmpKeyedStoreReference.c)
 *     ?SmStDirectReadIssue@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@?$ST_STORE@USM_TRAITS@@@@PEAX@Z @ 0x1401402C0 (-SmStDirectReadIssue@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_WORK_ITEM@-$ST_STORE@USM_TRAITS.c)
 *     ?StDmSinglePageCopy@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATION@1@PEAU_STDM_READ_CONTEXT@1@@Z @ 0x14014118C (-StDmSinglePageCopy@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAXPEAD2PEAU_ST_PAGE_LOCATIO.c)
 *     PopThermalSxEntry @ 0x14014822C (PopThermalSxEntry.c)
 *     PopThermalSxExit @ 0x1401486FC (PopThermalSxExit.c)
 *     PopFxIdleDevicesFromSx @ 0x140149210 (PopFxIdleDevicesFromSx.c)
 *     PopFxActivateDevicesForSx @ 0x140149310 (PopFxActivateDevicesForSx.c)
 *     ExpAcquireFannedOutPushLockShared @ 0x14015ADEC (ExpAcquireFannedOutPushLockShared.c)
 *     ExpSaAllocatorAllocate @ 0x14015BAD0 (ExpSaAllocatorAllocate.c)
 *     PopFxRegisterDeviceWithPep @ 0x140166CE8 (PopFxRegisterDeviceWithPep.c)
 *     PopPepInsertDevice @ 0x140166E10 (PopPepInsertDevice.c)
 *     PopFxFindAcpiDeviceByUniqueId @ 0x1401671BC (PopFxFindAcpiDeviceByUniqueId.c)
 *     PoFxStartDevicePowerManagement @ 0x140169748 (PoFxStartDevicePowerManagement.c)
 *     PopPepDeviceStarted @ 0x14016991C (PopPepDeviceStarted.c)
 *     PopFxLowPowerEpochCallback @ 0x14016EDF8 (PopFxLowPowerEpochCallback.c)
 *     HvViewMapCopyFromFileOffset @ 0x1401E06F4 (HvViewMapCopyFromFileOffset.c)
 *     FsRtlLookupPerFileContext @ 0x1401E3EB4 (FsRtlLookupPerFileContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401E4010 (FsRtlLookupPerStreamContextInternal.c)
 *     PpmQueryPlatformStateResidency @ 0x140235488 (PpmQueryPlatformStateResidency.c)
 *     PopDiagTraceFxRundown @ 0x140237234 (PopDiagTraceFxRundown.c)
 *     PopFxCaptureDeviceAccounting @ 0x1402373D8 (PopFxCaptureDeviceAccounting.c)
 *     PopFxChildDeviceActive @ 0x1402376A0 (PopFxChildDeviceActive.c)
 *     PopFxDeviceAccountingWatchdog @ 0x140237B18 (PopFxDeviceAccountingWatchdog.c)
 *     PopFxFindAndReferenceAcpiDevice @ 0x140237F18 (PopFxFindAndReferenceAcpiDevice.c)
 *     PopFxPauseDeviceAccounting @ 0x14023835C (PopFxPauseDeviceAccounting.c)
 *     PopFxResumeDeviceAccounting @ 0x140238F20 (PopFxResumeDeviceAccounting.c)
 *     PopFxSetDeviceAccountingCsPlatformState @ 0x14023914C (PopFxSetDeviceAccountingCsPlatformState.c)
 *     PopFxStartDeviceAccounting @ 0x14023942C (PopFxStartDeviceAccounting.c)
 *     PopFxStopDeviceAccounting @ 0x140239668 (PopFxStopDeviceAccounting.c)
 *     PopPepPlatformStateRegistered @ 0x14023BFE0 (PopPepPlatformStateRegistered.c)
 *     PopPepRemoveDevice @ 0x14023C408 (PopPepRemoveDevice.c)
 *     PopPepResetDeviceAccountingLevel @ 0x14023C580 (PopPepResetDeviceAccountingLevel.c)
 *     PopThermalTelemetryWorker @ 0x14023CB00 (PopThermalTelemetryWorker.c)
 *     PopThermalTraceRundownEvents @ 0x14023CD24 (PopThermalTraceRundownEvents.c)
 *     PopFxAcpiPrepareDevice @ 0x140242EA8 (PopFxAcpiPrepareDevice.c)
 *     PsEqualCurrentSilo @ 0x140243D78 (PsEqualCurrentSilo.c)
 *     SepRmReferenceCapTable @ 0x140250A38 (SepRmReferenceCapTable.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402521D8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252598 (-SmStTrimWsStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKK@Z @ 0x140252898 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKK@Z.c)
 *     SmKmVirtualLockCtxLockMemory @ 0x140258134 (SmKmVirtualLockCtxLockMemory.c)
 *     ExpSaAllocatorFree @ 0x140266070 (ExpSaAllocatorFree.c)
 *     ExpTimeRefreshWork @ 0x1403F7188 (ExpTimeRefreshWork.c)
 *     WheaConfigureErrorSource @ 0x1403FAEE8 (WheaConfigureErrorSource.c)
 *     AlpcpPortQueryServerInfo @ 0x140406B0C (AlpcpPortQueryServerInfo.c)
 *     AlpcpReferenceMessageByWaitingThreadPort @ 0x140406E24 (AlpcpReferenceMessageByWaitingThreadPort.c)
 *     SepIsParentOfChildAppContainer @ 0x1404082B8 (SepIsParentOfChildAppContainer.c)
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     SepSetTokenLowboxNumber @ 0x140411728 (SepSetTokenLowboxNumber.c)
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     PspApplyJobLimitsToProcess @ 0x14041B6A4 (PspApplyJobLimitsToProcess.c)
 *     PspGetPreviousProcessThread @ 0x14041CE2C (PspGetPreviousProcessThread.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     PsGetNextProcessThread @ 0x140420350 (PsGetNextProcessThread.c)
 *     PsCaptureExceptionPort @ 0x140420D34 (PsCaptureExceptionPort.c)
 *     NtQueryObject @ 0x1404259B0 (NtQueryObject.c)
 *     ObQueryNameStringMode @ 0x140426100 (ObQueryNameStringMode.c)
 *     CmpLockKcbShared @ 0x140427A50 (CmpLockKcbShared.c)
 *     PsQueryRuntimeProcess @ 0x14042E5E8 (PsQueryRuntimeProcess.c)
 *     PfQuerySuperfetchInformation @ 0x140431980 (PfQuerySuperfetchInformation.c)
 *     PsOpenThread @ 0x140432090 (PsOpenThread.c)
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     PsOpenProcess @ 0x140433500 (PsOpenProcess.c)
 *     ObOpenObjectByPointer @ 0x140434390 (ObOpenObjectByPointer.c)
 *     PsOpenTokenOfProcess @ 0x140434A10 (PsOpenTokenOfProcess.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     PiDmObjectGetCachedObjectPropertyData @ 0x140439BE0 (PiDmObjectGetCachedObjectPropertyData.c)
 *     PiDmObjectAcquireSharedLock @ 0x14043ABF4 (PiDmObjectAcquireSharedLock.c)
 *     PfCheckDeprioritizeImage @ 0x140444244 (PfCheckDeprioritizeImage.c)
 *     PfSnIsHostingApplication @ 0x140444A10 (PfSnIsHostingApplication.c)
 *     CmpGetNextActiveHive @ 0x140445EE8 (CmpGetNextActiveHive.c)
 *     NtDeleteKey @ 0x1404462E0 (NtDeleteKey.c)
 *     CmpGetNextHive @ 0x140447A6C (CmpGetNextHive.c)
 *     CmpOKToFollowLink @ 0x140448C8C (CmpOKToFollowLink.c)
 *     CmpAssignSecurityToKcb @ 0x140449C5C (CmpAssignSecurityToKcb.c)
 *     CmpParseCacheLookup @ 0x14044BDF8 (CmpParseCacheLookup.c)
 *     DbgkCreateThread @ 0x14044FA8C (DbgkCreateThread.c)
 *     PfpRpCHashDeleteEntries @ 0x140453A14 (PfpRpCHashDeleteEntries.c)
 *     PspMapSystemDll @ 0x140466740 (PspMapSystemDll.c)
 *     AlpcpAcceptConnectPort @ 0x140471474 (AlpcpAcceptConnectPort.c)
 *     AlpcpCreateClientPort @ 0x140472CA0 (AlpcpCreateClientPort.c)
 *     MiIsRangeFullyCommitted @ 0x140474834 (MiIsRangeFullyCommitted.c)
 *     AlpcpCreateView @ 0x140475280 (AlpcpCreateView.c)
 *     AlpcpCreateSecurityContext @ 0x140475880 (AlpcpCreateSecurityContext.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404760D0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcReferenceBlobByHandle @ 0x140476C20 (AlpcReferenceBlobByHandle.c)
 *     AlpcpLocateSectionView @ 0x14047721C (AlpcpLocateSectionView.c)
 *     AlpcpEnumerateResourcesPort @ 0x140477330 (AlpcpEnumerateResourcesPort.c)
 *     NtSetInformationThread @ 0x140478220 (NtSetInformationThread.c)
 *     PsImpersonateClient @ 0x1404792B0 (PsImpersonateClient.c)
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpSendMessage @ 0x14047CF50 (AlpcpSendMessage.c)
 *     AlpcpDispatchNewMessage @ 0x14047E410 (AlpcpDispatchNewMessage.c)
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 *     AlpcpCaptureSecurityAttribute @ 0x14047FE50 (AlpcpCaptureSecurityAttribute.c)
 *     AlpcpDispatchReplyToPort @ 0x1404807F0 (AlpcpDispatchReplyToPort.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140480E50 (AlpcpDispatchReplyToWaitingThread.c)
 *     SeCreateClientSecurityEx @ 0x140481510 (SeCreateClientSecurityEx.c)
 *     PsReferenceEffectiveToken @ 0x140481AE0 (PsReferenceEffectiveToken.c)
 *     SeCaptureSubjectContext @ 0x140485EB0 (SeCaptureSubjectContext.c)
 *     PsReferenceImpersonationTokenEx @ 0x140486000 (PsReferenceImpersonationTokenEx.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     PsGetSiloObject @ 0x140490B30 (PsGetSiloObject.c)
 *     ObpLookupDirectoryUsingHash @ 0x140491B20 (ObpLookupDirectoryUsingHash.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     ExpCopyProcessInfo @ 0x1404967A0 (ExpCopyProcessInfo.c)
 *     ExpGetProcessInformation @ 0x140497410 (ExpGetProcessInformation.c)
 *     CmpCallbackFillObjectContext @ 0x140498B70 (CmpCallbackFillObjectContext.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     CmpBuildHashStackAndLookupCache @ 0x14049A140 (CmpBuildHashStackAndLookupCache.c)
 *     AlpcpFlushMessagesPort @ 0x1404A3834 (AlpcpFlushMessagesPort.c)
 *     AlpcpDisconnectPort @ 0x1404A3D10 (AlpcpDisconnectPort.c)
 *     AlpcpReferenceAndLockTargetPortsAndCommunicationInfo @ 0x1404A4A40 (AlpcpReferenceAndLockTargetPortsAndCommunicationInfo.c)
 *     MiProtectVirtualMemory @ 0x1404B9700 (MiProtectVirtualMemory.c)
 *     MiRelocateImagePfn @ 0x1404BE420 (MiRelocateImagePfn.c)
 *     ObpCallPreOperationCallbacks @ 0x1404BE7F0 (ObpCallPreOperationCallbacks.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpCheckKeyBodyAccess @ 0x1404C17F0 (CmpCheckKeyBodyAccess.c)
 *     CmQueryValueKey @ 0x1404C21A0 (CmQueryValueKey.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpLockTwoKcbsShared @ 0x1404C6EF0 (CmpLockTwoKcbsShared.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     SeCaptureSubjectContextEx @ 0x1404CA2C0 (SeCaptureSubjectContextEx.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     EtwpFindGuidEntryByGuid @ 0x1404CE270 (EtwpFindGuidEntryByGuid.c)
 *     ObpReferenceSecurityDescriptor @ 0x1404CFD70 (ObpReferenceSecurityDescriptor.c)
 *     EtwpGetNextGuidEntry @ 0x1404D0D3C (EtwpGetNextGuidEntry.c)
 *     EtwpReferenceLoggerSecurityDescriptor @ 0x1404D32E0 (EtwpReferenceLoggerSecurityDescriptor.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     PopAcquirePowerRequestPushLock @ 0x1404E6210 (PopAcquirePowerRequestPushLock.c)
 *     PopAcquireUmpoPushLock @ 0x1404E6394 (PopAcquireUmpoPushLock.c)
 *     PopCurrentPowerState @ 0x1404E965C (PopCurrentPowerState.c)
 *     LockShutdownShared @ 0x1404EA8B0 (LockShutdownShared.c)
 *     CmpLockHiveListShared @ 0x1404EB500 (CmpLockHiveListShared.c)
 *     CmpCheckNotifyAccess @ 0x1404EC768 (CmpCheckNotifyAccess.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x1404F300C (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     ExUpdateLicenseRegistry @ 0x1404F3AA8 (ExUpdateLicenseRegistry.c)
 *     sub_1404F4090 @ 0x1404F4090 (sub_1404F4090.c)
 *     PfSnGetPrefetchInstructions @ 0x1404F61EC (PfSnGetPrefetchInstructions.c)
 *     ExpWnfNotifySubscription @ 0x140500BFC (ExpWnfNotifySubscription.c)
 *     ExpWnfDeliverThreadNotifications @ 0x1405013FC (ExpWnfDeliverThreadNotifications.c)
 *     ExpWnfCompleteThreadSubscriptions @ 0x1405016E8 (ExpWnfCompleteThreadSubscriptions.c)
 *     ExpWnfLookupNameInstance @ 0x140502BEC (ExpWnfLookupNameInstance.c)
 *     ExpWnfReadStateData @ 0x140502F10 (ExpWnfReadStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140503024 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 *     ExpWnfAcquireSubscriptionByName @ 0x140503D98 (ExpWnfAcquireSubscriptionByName.c)
 *     PspGetNextJob @ 0x140506758 (PspGetNextJob.c)
 *     PspEnforceLimitsJobPostCallback @ 0x140506F48 (PspEnforceLimitsJobPostCallback.c)
 *     PsQueryStatisticsProcess @ 0x140508494 (PsQueryStatisticsProcess.c)
 *     PsGetProcessServerSilo @ 0x14050C11C (PsGetProcessServerSilo.c)
 *     PsGetProcessDeepFreezeStats @ 0x14050CE38 (PsGetProcessDeepFreezeStats.c)
 *     PsGetNextProcess @ 0x14050D584 (PsGetNextProcess.c)
 *     PsReferencePrimaryToken @ 0x14050D730 (PsReferencePrimaryToken.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     ObQueryDeviceMapInformation @ 0x1405107C0 (ObQueryDeviceMapInformation.c)
 *     ObpReferenceDeviceMap @ 0x140510B90 (ObpReferenceDeviceMap.c)
 *     ObpGetShadowDirectory @ 0x140510DC0 (ObpGetShadowDirectory.c)
 *     PsQueryTotalCycleTimeProcess @ 0x140511240 (PsQueryTotalCycleTimeProcess.c)
 *     PsGetCurrentSilo @ 0x140511880 (PsGetCurrentSilo.c)
 *     MmAcquireSessionPoolRundown @ 0x14051C9E0 (MmAcquireSessionPoolRundown.c)
 *     sub_14051D560 @ 0x14051D560 (sub_14051D560.c)
 *     sub_14051DAF8 @ 0x14051DAF8 (sub_14051DAF8.c)
 *     sub_14051DFA0 @ 0x14051DFA0 (sub_14051DFA0.c)
 *     sub_14051E368 @ 0x14051E368 (sub_14051E368.c)
 *     AlpcpPortQueryConnectedSidInfo @ 0x14051FAF8 (AlpcpPortQueryConnectedSidInfo.c)
 *     AlpcpReferenceConnectedPort @ 0x14051FCC0 (AlpcpReferenceConnectedPort.c)
 *     CmpGetCallbackObjectContext @ 0x140520E30 (CmpGetCallbackObjectContext.c)
 *     NtQueryDirectoryObject @ 0x140520F80 (NtQueryDirectoryObject.c)
 *     PsReferenceImpersonationToken @ 0x1405217F0 (PsReferenceImpersonationToken.c)
 *     AlpcpCreateReserve @ 0x140522DD0 (AlpcpCreateReserve.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 *     AlpcpDispatchConnectionRequest @ 0x14052A624 (AlpcpDispatchConnectionRequest.c)
 *     AlpcpQueryRemoteView @ 0x14052AA30 (AlpcpQueryRemoteView.c)
 *     AlpcpCreateSection @ 0x14052B184 (AlpcpCreateSection.c)
 *     AlpcpCancelMessage @ 0x14052BBC4 (AlpcpCancelMessage.c)
 *     NtAlpcSetInformation @ 0x14052C6F0 (NtAlpcSetInformation.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 *     AlpcpReplyLegacySynchronousRequest @ 0x14052EE8C (AlpcpReplyLegacySynchronousRequest.c)
 *     PspWow64ReadOrWriteThreadCpuArea @ 0x1405315F4 (PspWow64ReadOrWriteThreadCpuArea.c)
 *     AlpcpSendLegacySynchronousRequest @ 0x1405327A0 (AlpcpSendLegacySynchronousRequest.c)
 *     NtAlpcOpenSenderProcess @ 0x14053B9A8 (NtAlpcOpenSenderProcess.c)
 *     NtAlpcDeleteSectionView @ 0x14053BE80 (NtAlpcDeleteSectionView.c)
 *     ExpWnfEnumerateScopeInstances @ 0x14053F768 (ExpWnfEnumerateScopeInstances.c)
 *     CmpLockHashEntryShared @ 0x140541620 (CmpLockHashEntryShared.c)
 *     PspAssignProcessQuotaBlock @ 0x140543A18 (PspAssignProcessQuotaBlock.c)
 *     PspLookupProcessQuotaBlock @ 0x140543C70 (PspLookupProcessQuotaBlock.c)
 *     PfSnQueryPrefetcherInformation @ 0x140544AD4 (PfSnQueryPrefetcherInformation.c)
 *     CmpGetLastHive @ 0x140548294 (CmpGetLastHive.c)
 *     WdipTimeoutCheckRoutine @ 0x14054CD10 (WdipTimeoutCheckRoutine.c)
 *     AlpcpReturnMessageOnInsufficientBuffer @ 0x14054F010 (AlpcpReturnMessageOnInsufficientBuffer.c)
 *     WdipSemDisableScenario @ 0x140551F04 (WdipSemDisableScenario.c)
 *     DbgkFlushErrorPort @ 0x140553854 (DbgkFlushErrorPort.c)
 *     PopProcessorInformation @ 0x1405541D8 (PopProcessorInformation.c)
 *     ExQueryFastCacheDevLicense @ 0x1405594C8 (ExQueryFastCacheDevLicense.c)
 *     sub_14055A6D8 @ 0x14055A6D8 (sub_14055A6D8.c)
 *     ExpWnfDispatchKernelSubscription @ 0x140561FF0 (ExpWnfDispatchKernelSubscription.c)
 *     ExpWnfAcquireSubscriptionNameInstance @ 0x140563650 (ExpWnfAcquireSubscriptionNameInstance.c)
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 *     PsChangeQuantumTable @ 0x140581874 (PsChangeQuantumTable.c)
 *     WdipSemEnableScenario @ 0x140581A0C (WdipSemEnableScenario.c)
 *     sub_1405874F8 @ 0x1405874F8 (sub_1405874F8.c)
 *     ExpGetNextCallback @ 0x14058A288 (ExpGetNextCallback.c)
 *     MmGetChannelInformation @ 0x14058A52C (MmGetChannelInformation.c)
 *     PspSetProcessAffinityUpdateMode @ 0x14058B36C (PspSetProcessAffinityUpdateMode.c)
 *     CmpLockCallbackListShared @ 0x14058E39C (CmpLockCallbackListShared.c)
 *     CmpLockHashEntryByIndexShared @ 0x14058EA5C (CmpLockHashEntryByIndexShared.c)
 *     ExRegisterExtension @ 0x140594750 (ExRegisterExtension.c)
 *     SmpCacheStatsCopy @ 0x1405B5C4C (SmpCacheStatsCopy.c)
 *     ObIsDosDeviceLocallyMapped @ 0x1405BA3D8 (ObIsDosDeviceLocallyMapped.c)
 *     ExpGetSystemPlatformBinary @ 0x1405BF130 (ExpGetSystemPlatformBinary.c)
 *     PpmEventTraceControlCallback @ 0x1405C2C9C (PpmEventTraceControlCallback.c)
 *     CmpLockContextListShared @ 0x14065D94C (CmpLockContextListShared.c)
 *     HvViewMapAddressForFileOffset @ 0x1406629CC (HvViewMapAddressForFileOffset.c)
 *     HvViewMapContiguousBytesAfterFileOffset @ 0x140662BE8 (HvViewMapContiguousBytesAfterFileOffset.c)
 *     HvViewMapFlush @ 0x140662CF0 (HvViewMapFlush.c)
 *     HvViewMapIsRangePinned @ 0x140662F1C (HvViewMapIsRangePinned.c)
 *     AlpcpPortQueryServerSessionInfo @ 0x14069FD0C (AlpcpPortQueryServerSessionInfo.c)
 *     AlpcpInvokeLogCallbacks @ 0x1406A005C (AlpcpInvokeLogCallbacks.c)
 *     ObpLookupDirectoryEntryEx @ 0x1406AB994 (ObpLookupDirectoryEntryEx.c)
 *     PopBatteryDeviceState @ 0x1406B62F4 (PopBatteryDeviceState.c)
 *     PopBatteryEtwCallback @ 0x1406B669C (PopBatteryEtwCallback.c)
 *     PoThermalCounterSetCallback @ 0x1406B7B48 (PoThermalCounterSetCallback.c)
 *     PopThermalZoneUpdateCoolingPolicy @ 0x1406B8174 (PopThermalZoneUpdateCoolingPolicy.c)
 *     PpmWmiGetAllData @ 0x1406BB620 (PpmWmiGetAllData.c)
 *     PsQueryProcessEnergyValues @ 0x1406BFAB8 (PsQueryProcessEnergyValues.c)
 *     PsSwapProcessWorkingSet @ 0x1406BFCFC (PsSwapProcessWorkingSet.c)
 *     PspAdjustKeepAliveCountProcess @ 0x1406C00C8 (PspAdjustKeepAliveCountProcess.c)
 *     PspUpdateSingleProcessAffinity @ 0x1406C085C (PspUpdateSingleProcessAffinity.c)
 *     PsIsProcessInAppSilo @ 0x1406C0FEC (PsIsProcessInAppSilo.c)
 *     PspCreateSilo @ 0x1406C18E8 (PspCreateSilo.c)
 *     PspNotifySeverSiloDeletion @ 0x1406C2388 (PspNotifySeverSiloDeletion.c)
 *     PspAssignPrimaryToken @ 0x1406C3208 (PspAssignPrimaryToken.c)
 *     PsReportProcessMemoryLimitViolation @ 0x1406C41C8 (PsReportProcessMemoryLimitViolation.c)
 *     SmcGetCacheStats @ 0x1406DB60C (SmcGetCacheStats.c)
 *     SmKmKeyGenGenerate @ 0x1406DCD18 (SmKmKeyGenGenerate.c)
 *     ExFetchLicenseData @ 0x1406EB574 (ExFetchLicenseData.c)
 *     ExGetLicenseTamperState @ 0x1406EB74C (ExGetLicenseTamperState.c)
 *     ExUpdateOsPfnInRegistry @ 0x1406ECA08 (ExUpdateOsPfnInRegistry.c)
 *     sub_1406ECEC4 @ 0x1406ECEC4 (sub_1406ECEC4.c)
 *     ExpSnapShotHandleTables @ 0x1406F02E4 (ExpSnapShotHandleTables.c)
 *     MmInitSystemDll @ 0x1407CFE98 (MmInitSystemDll.c)
 *     PopFanReportBootStartDevices @ 0x1407E5C5C (PopFanReportBootStartDevices.c)
 *     PspInitPhase3 @ 0x1407E8FD8 (PspInitPhase3.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KeAbPreWait @ 0x1400F32B0 (KeAbPreWait.c)
 *     RtlBackoff @ 0x1400F32F0 (RtlBackoff.c)
 *     ExpOptimizePushLockList @ 0x1400F335C (ExpOptimizePushLockList.c)
 */

signed __int64 __fastcall ExfAcquirePushLockSharedEx(unsigned __int64 *a1, __int64 a2, ULONG_PTR a3, __int64 a4)
{
  unsigned __int64 v7; // rbx
  signed __int64 v8; // rcx
  signed __int64 result; // rax
  bool v10; // cl
  _BYTE *v11; // rdx
  bool v12; // zf
  signed __int64 v13; // rax
  int i; // eax
  __int16 Object; // [rsp+30h] [rbp-40h] BYREF
  char v17; // [rsp+32h] [rbp-3Eh]
  _BYTE v18[5]; // [rsp+33h] [rbp-3Dh] BYREF
  _QWORD v19[3]; // [rsp+38h] [rbp-38h] BYREF
  __int16 *p_Object; // [rsp+50h] [rbp-20h]
  __int64 v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  signed __int32 v23; // [rsp+64h] [rbp-Ch] BYREF
  __int64 v24; // [rsp+68h] [rbp-8h]
  int v25; // [rsp+B0h] [rbp+40h] BYREF

  v25 = 0;
  _m_prefetchw(a1);
  v7 = *a1;
  while ( (v7 & 1) != 0 && (((v7 >> 1) & 1) != 0 || (v7 & 0xFFFFFFFFFFFFFFF0uLL) == 0) )
  {
    if ( a2 )
      KeAbPreWait(a2);
    v10 = 0;
    v24 = a2;
    v23 = 2;
    v21 = 0LL;
    if ( ((v7 >> 1) & 1) != 0 )
    {
      p_Object = 0LL;
      v22 = -1;
      v19[2] = v7 & 0xFFFFFFFFFFFFFFF0uLL;
      v11 = (_BYTE *)((unsigned __int64)&Object | v7 & 8 | 7);
      v10 = (v7 & 4) == 0;
    }
    else
    {
      v22 = -2;
      p_Object = &Object;
      v11 = v18;
    }
    v13 = _InterlockedCompareExchange64((volatile signed __int64 *)a1, (signed __int64)v11, v7);
    v12 = v7 == v13;
    v7 = v13;
    if ( !v12 )
      goto LABEL_14;
    if ( v10 )
      ExpOptimizePushLockList(a1);
    Object = 1;
    v19[1] = v19;
    v19[0] = v19;
    v17 = 6;
    *(_DWORD *)&v18[1] = 0;
    if ( MEMORY[0xFFFFF7800000036A] > 1u )
    {
      for ( i = ExpSpinCount; i; --i )
      {
        if ( (v23 & 2) == 0 )
          break;
        _mm_pause();
      }
    }
    if ( _interlockedbittestandreset(&v23, 1u) )
      KeWaitForSingleObject(&Object, WrPushLock, 0, 0, 0LL);
LABEL_15:
    if ( a2 )
      a2 = KeAbPreAcquire(a3, a2, 0LL, a4);
  }
  v8 = v7 | 1;
  if ( (v7 & 2) == 0 )
    v8 += 16LL;
  result = _InterlockedCompareExchange64((volatile signed __int64 *)a1, v8, v7);
  if ( v7 != result )
  {
    if ( a2 )
      KeAbPreWait(a2);
LABEL_14:
    RtlBackoff(&v25);
    v7 = *a1;
    _m_prefetchw(a1);
    goto LABEL_15;
  }
  return result;
}
