/*
 * XREFs of ExFreePoolWithTag @ 0x140254000
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140002184 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140002EE8 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003174 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003B38 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x140003F2C (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004130 (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400041D8 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x140004408 (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x1400044B8 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1400044F4 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     SmHpChunkHeapCleanup @ 0x140004668 (SmHpChunkHeapCleanup.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140004844 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     StEtaCleanup @ 0x140004878 (StEtaCleanup.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400056CC (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     PfTFreeTraceDump @ 0x140006860 (PfTFreeTraceDump.c)
 *     MmFreeAccessPfnBuffer @ 0x140006874 (MmFreeAccessPfnBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x1400068B4 (PfFbBufferListInsertInFree.c)
 *     ExFreeCacheAwareRundownProtection @ 0x140007A98 (ExFreeCacheAwareRundownProtection.c)
 *     PnpGetRelatedTargetDevice @ 0x140007D58 (PnpGetRelatedTargetDevice.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x140008460 (PnpDeviceCompletionRequestDestroy.c)
 *     EmpEvaluateTargetRule @ 0x140008910 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140008ACC (EmpEvaluateNodeLink.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000DF60 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x14000EC10 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x14000EC70 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     SepDeleteAccessState @ 0x14000F260 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x14000F6F0 (SeSetLearningModeObjectInformation.c)
 *     ExpAddTagForBigPages @ 0x140012050 (ExpAddTagForBigPages.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     NtResetWriteWatch @ 0x140013270 (NtResetWriteWatch.c)
 *     MiRemoveSecureEntry @ 0x140013F10 (MiRemoveSecureEntry.c)
 *     NtGetWriteWatch @ 0x140014A70 (NtGetWriteWatch.c)
 *     MiReleaseSystemCacheView @ 0x140017EF4 (MiReleaseSystemCacheView.c)
 *     MiTrimSharedPageFromViews @ 0x1400189D0 (MiTrimSharedPageFromViews.c)
 *     IoDiskIoAttributionDereference @ 0x14001EF2C (IoDiskIoAttributionDereference.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140022050 (MmWaitForCacheManagerPrefetch.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiFinishVadDeletion @ 0x140029160 (MiFinishVadDeletion.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     MiUnlockAndDereferenceVad @ 0x14002B920 (MiUnlockAndDereferenceVad.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002CD98 (CmpFreeTransientPoolWithTag.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     IopAllocateIrpPrivate @ 0x14002DDD0 (IopAllocateIrpPrivate.c)
 *     PfSnNameRemove @ 0x140034610 (PfSnNameRemove.c)
 *     PfSnGetFileInformation @ 0x1400371B0 (PfSnGetFileInformation.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     IopfCompleteRequest @ 0x1400530F0 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140055960 (IopFreeIrp.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x140060ACC (SeCaptureObjectTypeList.c)
 *     SeLogAccessFailure @ 0x140061150 (SeLogAccessFailure.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     SeAccessCheckWithHint @ 0x140062700 (SeAccessCheckWithHint.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     CcExtendVacbArray @ 0x14006CA98 (CcExtendVacbArray.c)
 *     CcCompleteAsyncReadWorker @ 0x14006D314 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncCopyRead @ 0x14006D6EC (CcAsyncCopyRead.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     CcUninitializeCacheMap @ 0x140070140 (CcUninitializeCacheMap.c)
 *     CcWriteBehind @ 0x14007119C (CcWriteBehind.c)
 *     IoFreeMdl @ 0x140071DB0 (IoFreeMdl.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     ExFreeSvmAsid @ 0x140075618 (ExFreeSvmAsid.c)
 *     FsRtlpRequestExclusiveOplock @ 0x14007704C (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x140077824 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x140077A14 (FsRtlpRequestShareableOplock.c)
 *     IopSetLockOperationProcess @ 0x140078558 (IopSetLockOperationProcess.c)
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x14007AAF4 (FsRtlpOplockCleanup.c)
 *     IopGetSetSpecificExtension @ 0x14007AF10 (IopGetSetSpecificExtension.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14007B0F0 (FsRtlInsertPerFileObjectContext.c)
 *     SepMandatorySubProcessToken @ 0x14007C0DC (SepMandatorySubProcessToken.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14007C854 (AuthzBasepDeleteSecurityAttribute.c)
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     SepSetTokenLowboxHandles @ 0x14007F600 (SepSetTokenLowboxHandles.c)
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     SepCaptureTokenSecurityOperations @ 0x1400806CC (SepCaptureTokenSecurityOperations.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140080840 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x1400809F0 (SepCaptureHandles.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400815C0 (RtlpIsNameInExpressionPrivate.c)
 *     VfTargetDriversAdd @ 0x1400824FC (VfTargetDriversAdd.c)
 *     KeFreeXStateContext @ 0x140083A74 (KeFreeXStateContext.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140084674 (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnicodeStringToAnsiString @ 0x140084708 (DbgUnicodeStringToAnsiString.c)
 *     PpDevNodeRemoveFromTree @ 0x140084FB0 (PpDevNodeRemoveFromTree.c)
 *     PnpRemoveLockedDeviceNode @ 0x140085A68 (PnpRemoveLockedDeviceNode.c)
 *     PnpDeviceActionWorker @ 0x1400865A0 (PnpDeviceActionWorker.c)
 *     EtwpAdjustTraceBuffers @ 0x140086D7C (EtwpAdjustTraceBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x140086F48 (EtwpAllocateFreeBuffers.c)
 *     EtwpFreeCompression @ 0x1400875AC (EtwpFreeCompression.c)
 *     EtwpFreePlaceholderList @ 0x1400876B8 (EtwpFreePlaceholderList.c)
 *     ExGetSessionPoolTagInfo @ 0x14008801C (ExGetSessionPoolTagInfo.c)
 *     ExUnlockUserBuffer @ 0x140088288 (ExUnlockUserBuffer.c)
 *     MiEmptyAccessLogs @ 0x140088410 (MiEmptyAccessLogs.c)
 *     MiGetLargePageToZero @ 0x140089D80 (MiGetLargePageToZero.c)
 *     MiZeroLargePage @ 0x14008A8C0 (MiZeroLargePage.c)
 *     FsRtlTruncateBaseMcb @ 0x14008BE84 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x14008CA14 (FsRtlAddEntry.c)
 *     SepFreeResourceInfo @ 0x14008D00C (SepFreeResourceInfo.c)
 *     IoMakeAssociatedIrpPriv @ 0x14008D7D8 (IoMakeAssociatedIrpPriv.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x14008E6C8 (MiFreeModWriterEntry.c)
 *     MiViewMayContainPage @ 0x14008EEB4 (MiViewMayContainPage.c)
 *     MiCreatePrototypePtes @ 0x14008F5E4 (MiCreatePrototypePtes.c)
 *     MiDeleteEmptySubsections @ 0x14008FAE0 (MiDeleteEmptySubsections.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140091690 (SepCleanupMarkedForDeletionEntries.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     IopDereferenceVpbAndFree @ 0x140095FB0 (IopDereferenceVpbAndFree.c)
 *     ExpExpandResourceOwnerTable @ 0x1400969CC (ExpExpandResourceOwnerTable.c)
 *     RtlContractHashTable @ 0x140097040 (RtlContractHashTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x140097DC0 (RtlInsertDynamicFunctionTable.c)
 *     IopDeleteFileObjectExtension @ 0x1400990A0 (IopDeleteFileObjectExtension.c)
 *     MmProbeAndLockSelectedPages @ 0x140099DD4 (MmProbeAndLockSelectedPages.c)
 *     MmFreeContiguousMemory @ 0x14009A3B8 (MmFreeContiguousMemory.c)
 *     MiDereferenceIoPages @ 0x14009B770 (MiDereferenceIoPages.c)
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009E524 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepResetOperands @ 0x14009EAE4 (AuthzBasepResetOperands.c)
 *     CcInitializeVolumeCacheMap @ 0x14009F728 (CcInitializeVolumeCacheMap.c)
 *     FsRtlUninitializeOplock @ 0x14009F944 (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x1400A0A1C (FsRtlCancelNotify.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A0FEC (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     MiExpandSystemCache @ 0x1400A1428 (MiExpandSystemCache.c)
 *     MiDeleteControlArea @ 0x1400A34C8 (MiDeleteControlArea.c)
 *     FsRtlUninitializeBaseMcb @ 0x1400A38B4 (FsRtlUninitializeBaseMcb.c)
 *     IoFreeWorkItem @ 0x1400A6AFC (IoFreeWorkItem.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400A7D6C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     IopCreateSecurityCheck @ 0x1400A9158 (IopCreateSecurityCheck.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400AACBC (FsRtlpOplockSendModernAppTermination.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AAE9C (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     MiDeprioritizeVad @ 0x1400AB4C8 (MiDeprioritizeVad.c)
 *     IopUnloadSafeCompletion @ 0x1400AC7E0 (IopUnloadSafeCompletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AD040 (MiAllocatePfnRepurposeLogDispatch.c)
 *     DestroyEventEntry @ 0x1400AD780 (DestroyEventEntry.c)
 *     WmipReceiveNotifications @ 0x1400AD93C (WmipReceiveNotifications.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400ADCD4 (RtlpAllowsLowBoxAccess.c)
 *     SepDeleteSessionLowboxEntries @ 0x1400AE144 (SepDeleteSessionLowboxEntries.c)
 *     PfpMemoryRangesQuery @ 0x1400AE2E8 (PfpMemoryRangesQuery.c)
 *     MiStoreEvictPageFile @ 0x1400AE60C (MiStoreEvictPageFile.c)
 *     PspRemoveProperty @ 0x1400AF0AC (PspRemoveProperty.c)
 *     PspInsertProperty @ 0x1400AF15C (PspInsertProperty.c)
 *     SepRmCallLsa @ 0x1400AF870 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1400AFB40 (SepRmDispatchDataToLsa.c)
 *     IopFreeIrpExtension @ 0x1400B1764 (IopFreeIrpExtension.c)
 *     MiFreeClonePool @ 0x1400B2674 (MiFreeClonePool.c)
 *     IoAllocateDriverObjectExtension @ 0x1400B27D8 (IoAllocateDriverObjectExtension.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B2988 (CmpLogTransactionAbortedWithChildName.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B2AB4 (HvSynchronizeAndDropTemporaryBins.c)
 *     RtlDeleteHashTable @ 0x1400B30C8 (RtlDeleteHashTable.c)
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1400B337C (PfSnEnablePrefetcherTimerRoutine.c)
 *     PnpRemoveDeviceActionRequests @ 0x1400B37D8 (PnpRemoveDeviceActionRequests.c)
 *     MiInitializeNumaRanges @ 0x1400B3A90 (MiInitializeNumaRanges.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MmOutSwapWorkingSet @ 0x1400B7638 (MmOutSwapWorkingSet.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     MiDeleteStaleCacheMaps @ 0x1400BC55C (MiDeleteStaleCacheMaps.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C1740 (PiControlFreeUserModeCallersBuffer.c)
 *     FsRtlEmptyFreePoolList @ 0x1400C24D0 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1400C2534 (FsRtlFreeTunnelNode.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     PspReaper @ 0x1400C910C (PspReaper.c)
 *     CcScanLogHandleList @ 0x1400CA8AC (CcScanLogHandleList.c)
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeVolumeCacheMap @ 0x1400CAE80 (CcUninitializeVolumeCacheMap.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E7620 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateFileObjectExtension @ 0x1400E9400 (IopAllocateFileObjectExtension.c)
 *     PfSnTraceGetLogEntry @ 0x1400ED550 (PfSnTraceGetLogEntry.c)
 *     IopDropIrp @ 0x1400F56CC (IopDropIrp.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400F6500 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x1400F6540 (ExpDeleteWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400F6740 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400F8D4C (IopAttachDeviceToDeviceStackSafe.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400F9088 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoDestroyReasonContext @ 0x1400F9654 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400F9E3C (PoCaptureReasonContext.c)
 *     PopCaptureReasonContext @ 0x1400FA054 (PopCaptureReasonContext.c)
 *     RtlIsUntrustedObject @ 0x1400FA600 (RtlIsUntrustedObject.c)
 *     MiCreateMdl @ 0x1400FA8C0 (MiCreateMdl.c)
 *     MiRemoveFromSystemSpace @ 0x1400FDE10 (MiRemoveFromSystemSpace.c)
 *     MiAllocateModWriterEntry @ 0x1401007D0 (MiAllocateModWriterEntry.c)
 *     MiObtainMdlCharges @ 0x140101B28 (MiObtainMdlCharges.c)
 *     MiInitializeMdlPages @ 0x14010480C (MiInitializeMdlPages.c)
 *     MiDereferencePageRuns @ 0x140104DD8 (MiDereferencePageRuns.c)
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiCreateCloneChain @ 0x14010AA80 (MiCreateCloneChain.c)
 *     KsepPoolFreePaged @ 0x14010B35C (KsepPoolFreePaged.c)
 *     KsepPoolFreeNonPaged @ 0x14010B608 (KsepPoolFreeNonPaged.c)
 *     CmpDeleteHive @ 0x14010C288 (CmpDeleteHive.c)
 *     CcDeleteMbcb @ 0x14010C600 (CcDeleteMbcb.c)
 *     CcDeallocateBcb @ 0x14010C768 (CcDeallocateBcb.c)
 *     ExDeleteResourceLite @ 0x14010C7A0 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x14010C930 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x14010C9B0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     SepFreeTokenCapabilities @ 0x14010CA60 (SepFreeTokenCapabilities.c)
 *     PspJobDelete @ 0x14010CAAC (PspJobDelete.c)
 *     MiDereferenceExtendInfo @ 0x14010F008 (MiDereferenceExtendInfo.c)
 *     RtlExpandHashTable @ 0x14010F0E4 (RtlExpandHashTable.c)
 *     ExFreeCacheAwarePushLock @ 0x14010F520 (ExFreeCacheAwarePushLock.c)
 *     MiGetWorkingSetInfo @ 0x14010F8A4 (MiGetWorkingSetInfo.c)
 *     ExAllocateCacheAwarePushLock @ 0x140111768 (ExAllocateCacheAwarePushLock.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140111FA4 (PnpUnregisterPlugPlayNotification.c)
 *     PopUnregisterPowerSettingCallback @ 0x1401123E4 (PopUnregisterPowerSettingCallback.c)
 *     SepExpandSingletonArrays @ 0x14011258C (SepExpandSingletonArrays.c)
 *     PfpServiceMainThreadUnboost @ 0x140114B20 (PfpServiceMainThreadUnboost.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140115008 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x14011518C (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     SmHpBufferAlloc @ 0x140115ECC (SmHpBufferAlloc.c)
 *     MiBuildReservationCluster @ 0x1401165AC (MiBuildReservationCluster.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140117FAC (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14011A2B8 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14011AFE4 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14011B2E0 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     MiStoreFreeWriteSupport @ 0x14011B40C (MiStoreFreeWriteSupport.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1401206F0 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     KeDisconnectInterrupt @ 0x1401243CC (KeDisconnectInterrupt.c)
 *     KiIntSteerDisable @ 0x1401244B8 (KiIntSteerDisable.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140124A40 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     SmKmFreeMdlForLock @ 0x140124EA0 (SmKmFreeMdlForLock.c)
 *     PopDereferenceWakeInfos @ 0x140125D14 (PopDereferenceWakeInfos.c)
 *     MiFindPageFileWriteCluster @ 0x140125FB0 (MiFindPageFileWriteCluster.c)
 *     MiPfCompleteCoalescedIo @ 0x140126130 (MiPfCompleteCoalescedIo.c)
 *     SmArrayGrow @ 0x14012665C (SmArrayGrow.c)
 *     PfpPowerActionDpcRoutine @ 0x140126AB4 (PfpPowerActionDpcRoutine.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140129BFC (BgpFwFreeMemory.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14012D210 (MiFreePrivateFixupEntryForSystemImage.c)
 *     KiIntSteerConnect @ 0x14012D8EC (KiIntSteerConnect.c)
 *     BiWasFirmwareModified @ 0x14012E534 (BiWasFirmwareModified.c)
 *     VfTargetDriversRemove @ 0x14012F358 (VfTargetDriversRemove.c)
 *     VfPoolDelayFreeIfPossible @ 0x14012F484 (VfPoolDelayFreeIfPossible.c)
 *     SmKmAllocateMdlForLock @ 0x14012F67C (SmKmAllocateMdlForLock.c)
 *     MiSessionInsertImage @ 0x1401300DC (MiSessionInsertImage.c)
 *     ExRegisterCallback @ 0x1401302A4 (ExRegisterCallback.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x1401306FC (DbgUnLoadImageSymbolsUnicode.c)
 *     IopCleanupNotifications @ 0x140130814 (IopCleanupNotifications.c)
 *     MiSessionRemoveImage @ 0x1401309B0 (MiSessionRemoveImage.c)
 *     ExpFinalizeTimerDeletion @ 0x140130F90 (ExpFinalizeTimerDeletion.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140131114 (LdrUnloadAlternateResourceModuleEx.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401313D4 (MiAddPrivateFixupEntryForSystemImage.c)
 *     IoWriteErrorLogEntry @ 0x140131668 (IoWriteErrorLogEntry.c)
 *     IopSessionChangeWorker @ 0x140131A14 (IopSessionChangeWorker.c)
 *     ExUnregisterCallback @ 0x140131CC8 (ExUnregisterCallback.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140132EB4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140133E38 (ExpSaPageGroupDescriptorAllocate.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14013493C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140135454 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaBinaryArrayRemove @ 0x140135540 (ExpSaBinaryArrayRemove.c)
 *     ExFreeAutoExpandPushLock @ 0x140135BB0 (ExFreeAutoExpandPushLock.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x14013ADA0 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14013B070 (MiCreateZeroThreadContext.c)
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 *     PnpBootDeviceWait @ 0x14013C3F0 (PnpBootDeviceWait.c)
 *     SepInitProcessAuditSd @ 0x14013CB7C (SepInitProcessAuditSd.c)
 *     BvgaReleaseResources @ 0x14013CC44 (BvgaReleaseResources.c)
 *     BapdpProcessEtwEvents @ 0x14013D3D4 (BapdpProcessEtwEvents.c)
 *     IopInitializeOfflineCrashDump @ 0x14013D92C (IopInitializeOfflineCrashDump.c)
 *     CcAsyncReadWorker @ 0x14013DE8C (CcAsyncReadWorker.c)
 *     MiZeroLargePageThread @ 0x14013F700 (MiZeroLargePageThread.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401406C0 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140140894 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140140B0C (RtlpMuiRegLoadLicInformation.c)
 *     MiDecrementHugeContext @ 0x1401413EC (MiDecrementHugeContext.c)
 *     CmpCreateHiveRootCell @ 0x140141494 (CmpCreateHiveRootCell.c)
 *     PopFxCreateDeviceCommon @ 0x140142760 (PopFxCreateDeviceCommon.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140143590 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x1401435C8 (IopReadDumpRegistry.c)
 *     MiStoreEvictThread @ 0x14014398C (MiStoreEvictThread.c)
 *     PpmParkRegisterParking @ 0x140143D88 (PpmParkRegisterParking.c)
 *     AdtpCleanupParameterAllocations @ 0x140144900 (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x1401449C0 (AdtpPackageParameters.c)
 *     SepBuildCapPolicyTable @ 0x140145460 (SepBuildCapPolicyTable.c)
 *     PopGetDope @ 0x1401455C4 (PopGetDope.c)
 *     PnpFreeUnicodeStringList @ 0x14014584C (PnpFreeUnicodeStringList.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     PpmInstallNewIdleStates @ 0x140145C68 (PpmInstallNewIdleStates.c)
 *     EmpRuleUpdateWorkerThread @ 0x140146C30 (EmpRuleUpdateWorkerThread.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x140147550 (EmpEvaluateUpdateRuleEvalState.c)
 *     SmFpPreAllocate @ 0x140148E48 (SmFpPreAllocate.c)
 *     FsFilterInit @ 0x1401490B4 (FsFilterInit.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014978C (LdrpSetAlternateResourceModuleHandle.c)
 *     TlgRegisterAggregateProviderEx @ 0x140149B64 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x140149D30 (CreateTlgAggregateSession.c)
 *     IopGetPhysicalMemoryBlock @ 0x14014A114 (IopGetPhysicalMemoryBlock.c)
 *     PopNotifyBrightnessChangesWorker @ 0x14014A990 (PopNotifyBrightnessChangesWorker.c)
 *     IopIsBitlockerOn @ 0x14014BE4C (IopIsBitlockerOn.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14014C94C (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     CcUnregisterExternalCache @ 0x1401B1808 (CcUnregisterExternalCache.c)
 *     CcPostDeferredWrites @ 0x1401B19E8 (CcPostDeferredWrites.c)
 *     CcMmLogLostDelayedWriteError @ 0x1401B1AE0 (CcMmLogLostDelayedWriteError.c)
 *     CmpCaptureKeyValueArray @ 0x1401B2B70 (CmpCaptureKeyValueArray.c)
 *     CmpFreeCallbackContext @ 0x1401B30B0 (CmpFreeCallbackContext.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 *     CmQueryLayeredKey @ 0x1401B3CC8 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4118 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401B4DC4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmLogMcUpdateStatus @ 0x1401B52DC (CmLogMcUpdateStatus.c)
 *     EmpProviderDeregisterEntry @ 0x1401B7F74 (EmpProviderDeregisterEntry.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9874 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsFilterFreeCompletionStack @ 0x1401B9C88 (FsFilterFreeCompletionStack.c)
 *     FsRtlInsertPerFileContext @ 0x1401B9F28 (FsRtlInsertPerFileContext.c)
 *     FsRtlStackOverflowRead @ 0x1401BA61C (FsRtlStackOverflowRead.c)
 *     HvlpDepositPages @ 0x1401BB508 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x1401C252C (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1401C291C (VslFreePoolTransferObject.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C34B4 (VslpUnlockPagesForTransfer.c)
 *     BgkDisplayString @ 0x1401C3B90 (BgkDisplayString.c)
 *     IoFillDumpHeader @ 0x1401C5444 (IoFillDumpHeader.c)
 *     IoFreeErrorLogEntry @ 0x1401C8948 (IoFreeErrorLogEntry.c)
 *     IoFreeSfioStreamIdentifier @ 0x1401C8998 (IoFreeSfioStreamIdentifier.c)
 *     IoRaiseInformationalHardError @ 0x1401C8DE4 (IoRaiseInformationalHardError.c)
 *     IopReplaceCompletionPort @ 0x1401C960C (IopReplaceCompletionPort.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401C9AE0 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x1401C9DB8 (IopKeepAliveWorker.c)
 *     IopAllowRemoteDASD @ 0x1401CA20C (IopAllowRemoteDASD.c)
 *     IopErrorLogDpc @ 0x1401CB390 (IopErrorLogDpc.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB45C (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Init @ 0x1401CB980 (SecureDump_Init.c)
 *     SecureDump_PrepareForInit @ 0x1401CBB40 (SecureDump_PrepareForInit.c)
 *     SecureDump_ReadRegistry @ 0x1401CBD34 (SecureDump_ReadRegistry.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBE30 (SecureDump_SymmetricEncryptionSetup.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401CCC38 (IoReleaseRemoveLockAndWaitEx.c)
 *     PipCreateNewDependencyEdge @ 0x1401CCFC8 (PipCreateNewDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401CD0E0 (PipFreeDependencyEdge.c)
 *     IoTranslateBusAddress @ 0x1401CD4C0 (IoTranslateBusAddress.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1401CD848 (IopDereferencePassiveInterruptBlock.c)
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1401CDF28 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PiDevCfgPopCopyKeyEntry @ 0x1401CEE30 (PiDevCfgPopCopyKeyEntry.c)
 *     PiDevCfgPopDriverNodeEntry @ 0x1401CEE88 (PiDevCfgPopDriverNodeEntry.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1401CEED8 (PiDevCfgPushCopyKeyEntry.c)
 *     PiDevCfgQueryResolveValue @ 0x1401CF080 (PiDevCfgQueryResolveValue.c)
 *     KdDeregisterPowerHandler @ 0x1401D11AC (KdDeregisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x1401D1778 (KdSetDbgPrintBufferSize.c)
 *     KeDeregisterNmiCallback @ 0x1401D2644 (KeDeregisterNmiCallback.c)
 *     KeProcessorProfileControlArea @ 0x1401D2760 (KeProcessorProfileControlArea.c)
 *     KeDisableProfiling @ 0x1401D6ADC (KeDisableProfiling.c)
 *     KeStartProfile @ 0x1401D6B70 (KeStartProfile.c)
 *     KeStopProfile @ 0x1401D6C80 (KeStopProfile.c)
 *     MiDeleteCachedSubsection @ 0x1401DE3FC (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E045C (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E09C4 (MiReleaseOutSwappedProcessCommit.c)
 *     MiZeroPageFile @ 0x1401E1730 (MiZeroPageFile.c)
 *     MiMakeIoRangePermanent @ 0x1401E6844 (MiMakeIoRangePermanent.c)
 *     MiFreeVadEvents @ 0x1401E90AC (MiFreeVadEvents.c)
 *     MiFlushComplete @ 0x1401EAB6C (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAC74 (MiFreeOverlappedFlushEntry.c)
 *     MiExtendPagingFileMaximum @ 0x1401EE15C (MiExtendPagingFileMaximum.c)
 *     MiAddRangeToPartitionTree @ 0x1401F0BB8 (MiAddRangeToPartitionTree.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0E04 (MiAllocatePartitionPhysicalPages.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiDereferencePartitionFinal @ 0x1401F1798 (MiDereferencePartitionFinal.c)
 *     MiFreePartitionTree @ 0x1401F18AC (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1401F19A0 (MiInsertPartitionPages.c)
 *     MmOutSwapVirtualAddresses @ 0x1401F76C4 (MmOutSwapVirtualAddresses.c)
 *     MiAllocateCombineProto @ 0x1401F7974 (MiAllocateCombineProto.c)
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiFreeCombinePool @ 0x1401F9BE8 (MiFreeCombinePool.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiInsertPteTracker @ 0x1401FC618 (MiInsertPteTracker.c)
 *     MmEnumerateBadPages @ 0x1401FE774 (MmEnumerateBadPages.c)
 *     PpmQueryPlatformStateResidency @ 0x140200B3C (PpmQueryPlatformStateResidency.c)
 *     PpmRemoveIdleStates @ 0x140200C38 (PpmRemoveIdleStates.c)
 *     PpmUpdateIdleVeto @ 0x1402015C0 (PpmUpdateIdleVeto.c)
 *     PopFxDestroyDeviceCommon @ 0x140202634 (PopFxDestroyDeviceCommon.c)
 *     PopFxDestroyDeviceDpm @ 0x140202660 (PopFxDestroyDeviceDpm.c)
 *     PopFxRegisterPluginEx @ 0x140203328 (PopFxRegisterPluginEx.c)
 *     PpmClearSimulatedLoad @ 0x140204C68 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x140205068 (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x140205744 (PopUpdateWakeSource.c)
 *     PopUpdateWakeSourceWorker @ 0x140205844 (PopUpdateWakeSourceWorker.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140209A80 (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmFireWmiEvent @ 0x14020B15C (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x14020B1DC (PpmWmiFireIdleAccountingEvent.c)
 *     PopSetWatchdog @ 0x14020B2F8 (PopSetWatchdog.c)
 *     PpmEventTracePreVetoAccounting @ 0x14020CD58 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14020CF0C (PpmEventTraceProcessorIdleAccounting.c)
 *     PspReadDfssConfigurationValues @ 0x14020E9FC (PspReadDfssConfigurationValues.c)
 *     PsSetCpuQuotaInformation @ 0x14020EBA4 (PsSetCpuQuotaInformation.c)
 *     PsDispatchIumService @ 0x14020FA50 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x14020FF24 (PspIumAllocatePhysicalPages.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x140210748 (RtlGetAppContainerNamedObjectPath.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402112DC (DbgpRemoveDebugPrintCallback.c)
 *     RtlTraceDatabaseDestroy @ 0x140215B14 (RtlTraceDatabaseDestroy.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402197D4 (SeFreeCapturedObjectTypeList.c)
 *     SepVerifyDesktopAppxImage @ 0x140219AD8 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219C8C (SepVerifyDesktopAppxPackageName.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x140219F5C (SepCheckAndCopySelfRelativeSD.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AA48 (SepValidateAndCopyGlobalEntry.c)
 *     SepGetLearningModeObjectInformation @ 0x14021ACB0 (SepGetLearningModeObjectInformation.c)
 *     SepRmCapPoolExpand @ 0x14021B3AC (SepRmCapPoolExpand.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x14021C064 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14021C828 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CAC8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14021D0BC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14021D850 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DC44 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE38 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14021E8C4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14021F04C (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021FB54 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpBufferCleanup @ 0x14021FB90 (SmHpBufferCleanup.c)
 *     SmKmStoreTerminateWorker @ 0x140220B74 (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140221A74 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140221B70 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalPageError @ 0x140221F94 (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x14022285C (VfAllocateDomainCommonBuffer.c)
 *     VmpRemoveMemoryRange @ 0x1402243CC (VmpRemoveMemoryRange.c)
 *     WdipAccessCheck @ 0x14022450C (WdipAccessCheck.c)
 *     EtwpCrimsonStackWalkApc @ 0x140224AA8 (EtwpCrimsonStackWalkApc.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140227D40 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwTiLogQueueApcThread @ 0x14022873C (EtwTiLogQueueApcThread.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140229694 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x140229810 (EtwpApplyEventNameFilter.c)
 *     EtwpCCSwapDeleteProcessor @ 0x140229E64 (EtwpCCSwapDeleteProcessor.c)
 *     NtDrawText @ 0x14022C560 (NtDrawText.c)
 *     ExDeleteWakeTimerInfo @ 0x14022DFA0 (ExDeleteWakeTimerInfo.c)
 *     ExGetWakeTimerList @ 0x14022E018 (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14022E994 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14022EDCC (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14022EFE8 (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14022F21C (ExpSvmDereferenceDevice.c)
 *     WheapFreeErrorRecord @ 0x1402306B0 (WheapFreeErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x1402307D0 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140231900 (WheapSqmCollectWheaOscTelemetry.c)
 *     ApiSetReleaseSchema @ 0x140231C84 (ApiSetReleaseSchema.c)
 *     sub_140232740 @ 0x140232740 (sub_140232740.c)
 *     sub_140232D04 @ 0x140232D04 (sub_140232D04.c)
 *     sub_140233260 @ 0x140233260 (sub_140233260.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140233FEC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140234198 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140234484 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14023495C (AuthzBasepCompareUnicodeStringOperands.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140237BE8 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402380B0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140238B20 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     NtReplacePartitionUnit @ 0x14023DF64 (NtReplacePartitionUnit.c)
 *     _SafeReallocBlob @ 0x14023E9A8 (_SafeReallocBlob.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExFreePool @ 0x140255B30 (ExFreePool.c)
 *     IopFreePoDeviceNotifyListHead @ 0x1403D0960 (IopFreePoDeviceNotifyListHead.c)
 *     PopGetBitlockerKeyLocation @ 0x1403D2030 (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x1403D21C4 (PopGetHwConfigurationSignature.c)
 *     PfpScenCtxScenarioSet @ 0x1403D2AF4 (PfpScenCtxScenarioSet.c)
 *     BapdRecordFirmwareBootStats @ 0x1403D316C (BapdRecordFirmwareBootStats.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     IoUnregisterShutdownNotification @ 0x1403DA0D4 (IoUnregisterShutdownNotification.c)
 *     PnprQuiesceWorker @ 0x1403DCD24 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1403DF66C (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x1403DFDD0 (ExGetNextWakeTime.c)
 *     ExpWorkerHotAddProcessor @ 0x1403DFF80 (ExpWorkerHotAddProcessor.c)
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x1403E07FC (WheapCreateTriageDumpFromPreviousSession.c)
 *     CmpVEExecuteRealStoreParseLogic @ 0x1403E1228 (CmpVEExecuteRealStoreParseLogic.c)
 *     SepCheckCapabilities @ 0x1403E1D20 (SepCheckCapabilities.c)
 *     NtSetCachedSigningLevel2 @ 0x1403E21EC (NtSetCachedSigningLevel2.c)
 *     SepReleaseUnicodeStringArray @ 0x1403E2468 (SepReleaseUnicodeStringArray.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x1403E247C (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     NtDeleteObjectAuditAlarm @ 0x1403E30B4 (NtDeleteObjectAuditAlarm.c)
 *     CmpFreePostBlock @ 0x1403E38A8 (CmpFreePostBlock.c)
 *     CmpFlushNotify @ 0x1403E435C (CmpFlushNotify.c)
 *     SmStoreSetProcessVaRanges @ 0x1403E4AD4 (SmStoreSetProcessVaRanges.c)
 *     PfpRpCHashDeleteEntries @ 0x1403E6240 (PfpRpCHashDeleteEntries.c)
 *     PfSnPrefetchScenario @ 0x1403E66C0 (PfSnPrefetchScenario.c)
 *     PspQueueApcSpecialApc @ 0x1403E6870 (PspQueueApcSpecialApc.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E6878 (PfSnGetPrefetchInstructions.c)
 *     PfpRpCHashAddEntries @ 0x1403E6B30 (PfpRpCHashAddEntries.c)
 *     PfTCreateTraceDump @ 0x1403E7070 (PfTCreateTraceDump.c)
 *     PfProcessCreateNotification @ 0x1403E7A40 (PfProcessCreateNotification.c)
 *     PfSnBeginAppLaunch @ 0x1403E7AD0 (PfSnBeginAppLaunch.c)
 *     PfCalculateProcessHash @ 0x1403E7E20 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x1403E8500 (PfSnBeginScenario.c)
 *     PfSnEndTrace @ 0x1403EA594 (PfSnEndTrace.c)
 *     PfSnCleanupTrace @ 0x1403EA7EC (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x1403EA8F4 (PfSnBuildDumpFromTrace.c)
 *     PfSnBeginTrace @ 0x1403EACC8 (PfSnBeginTrace.c)
 *     NtSetTimerResolution @ 0x1403EB304 (NtSetTimerResolution.c)
 *     PfSetSuperfetchInformation @ 0x1403EBF18 (PfSetSuperfetchInformation.c)
 *     PfpRpControlRequest @ 0x1403ED51C (PfpRpControlRequest.c)
 *     PfpRpControlRequestCopy @ 0x1403ED644 (PfpRpControlRequestCopy.c)
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 *     PfpPrefetchRequest @ 0x1403EE3C8 (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1403EE5B4 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x1403EEF00 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchSharedDeref @ 0x1403EF270 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchVolumesCleanup @ 0x1403EF29C (PfpPrefetchVolumesCleanup.c)
 *     RawCleanupVcb @ 0x1403EFAA4 (RawCleanupVcb.c)
 *     PnpProcessAssignResources @ 0x1403F0F18 (PnpProcessAssignResources.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1403F1348 (IopBuildGlobalSymbolicLinkString.c)
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     IopDeleteDevice @ 0x1403F1B3C (IopDeleteDevice.c)
 *     IopDestroyDeviceNode @ 0x1403F1B98 (IopDestroyDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1403F1FB0 (PipEnumerateCompleted.c)
 *     PopLogDisabledSleepReason @ 0x1403F2AC8 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1403F2BB8 (PopFilterCapabilities.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1403F2D30 (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x1403F2D94 (IoGetLegacyVetoList.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F3760 (PiControlGetSetDeviceStatus.c)
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1403F4410 (PnpCallDriverQueryServiceHelper.c)
 *     HvWriteLogFile @ 0x1403F4934 (HvWriteLogFile.c)
 *     PopUnreferencePowerSetting @ 0x1403F4B18 (PopUnreferencePowerSetting.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1403F4EB0 (PopDispatchPowerSettingCallbacks.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403F5028 (CmpQueryFileSecurityDescriptor.c)
 *     ExpWnfLookupPermanentName @ 0x1403F50D0 (ExpWnfLookupPermanentName.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 *     CmpDoFileWrite @ 0x1403F7EE8 (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     CmpInitHiveFromFile @ 0x1403F89AC (CmpInitHiveFromFile.c)
 *     NtDeleteValueKey @ 0x1403F9878 (NtDeleteValueKey.c)
 *     CmDeleteValueKey @ 0x1403F9CF4 (CmDeleteValueKey.c)
 *     CmpAddSecurityCellToCache @ 0x1403FA268 (CmpAddSecurityCellToCache.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     CmpLockIXLockIntent @ 0x1403FBBB4 (CmpLockIXLockIntent.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FBC58 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FC4D4 (CmpTransMgrFreeVolatileData.c)
 *     CmpRundownUnitOfWork @ 0x1403FC77C (CmpRundownUnitOfWork.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1403FC998 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FCAE8 (CmpCleanUpSubKeyInfo.c)
 *     CmpCreateChild @ 0x1403FCF48 (CmpCreateChild.c)
 *     CmpTransSearchAddTrans @ 0x1403FE004 (CmpTransSearchAddTrans.c)
 *     CmDeleteKey @ 0x1403FE238 (CmDeleteKey.c)
 *     CmpAllocatePostBlock @ 0x1403FFFF8 (CmpAllocatePostBlock.c)
 *     CmQueryMultipleValueKey @ 0x140401114 (CmQueryMultipleValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140401D18 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     NtSetValueKey @ 0x140401F58 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x140402670 (CmSetValueKey.c)
 *     IopGetLegacyVetoListDrivers @ 0x140404424 (IopGetLegacyVetoListDrivers.c)
 *     ObpFreeObjectNameBuffer @ 0x140404C80 (ObpFreeObjectNameBuffer.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x140405BA0 (ObpGetObjectSecurity.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x140406DCC (EtwpGetGuidSecurityDescriptor.c)
 *     EtwpFreeSecurityDescriptor @ 0x140406F58 (EtwpFreeSecurityDescriptor.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404087F4 (EtwpSetProviderTraitsCommon.c)
 *     AlpcAddHandleTableEntry @ 0x14040AD10 (AlpcAddHandleTableEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14040C914 (EtwpReleaseProviderTraitsReference.c)
 *     NtTraceControl @ 0x14040CC00 (NtTraceControl.c)
 *     EtwpDeleteRegistrationObject @ 0x14040D8A0 (EtwpDeleteRegistrationObject.c)
 *     NtQuerySecurityAttributesToken @ 0x14040E2E0 (NtQuerySecurityAttributesToken.c)
 *     SepCaptureUnicodeStringArray @ 0x140410BD0 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x140410DD0 (SeCaptureUnicodeStringStructures.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     NtOpenThreadTokenEx @ 0x140412440 (NtOpenThreadTokenEx.c)
 *     SepSetTokenTrust @ 0x140412DBC (SepSetTokenTrust.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140413A18 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140413ACC (SepAdtPrivilegedServiceAuditAlarm.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140413E58 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpCleanupEcps @ 0x140413ED0 (FsRtlpCleanupEcps.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140413F90 (FsRtlFreeExtraCreateParameter.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     ObOpenObjectByNameEx @ 0x140417F30 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1404188B0 (ObpCaptureObjectName.c)
 *     ObpCreateHandle @ 0x140418AE0 (ObpCreateHandle.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14041A0E0 (PfpCopyUserPfnPrioRequest.c)
 *     PfpPfnPrioRequest @ 0x14041A310 (PfpPfnPrioRequest.c)
 *     ObpFreeObject @ 0x14041A6C0 (ObpFreeObject.c)
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x14041D100 (RtlpCombineAcls.c)
 *     ObInsertObjectEx @ 0x14041DDC0 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x14041E8D0 (ObpAssignSecurity.c)
 *     SeDefaultObjectMethod @ 0x14041EAA0 (SeDefaultObjectMethod.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x14041EF90 (ObDereferenceSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x14041F568 (ObReleaseObjectSecurity.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     ObfDereferenceDeviceMap @ 0x140421318 (ObfDereferenceDeviceMap.c)
 *     NtQueryInformationProcess @ 0x140421450 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     EtwpEnumerateAddressSpace @ 0x140429D0C (EtwpEnumerateAddressSpace.c)
 *     MmPrefetchPagesEx @ 0x14042AFAC (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x14042B4AC (MmPrefetchForCacheManager.c)
 *     MiReleaseReadListResources @ 0x14042B620 (MiReleaseReadListResources.c)
 *     MiRemoveSharedCommitNode @ 0x14042D940 (MiRemoveSharedCommitNode.c)
 *     MiCopyToCfgBitMap @ 0x14042E0B0 (MiCopyToCfgBitMap.c)
 *     MiRemoveVadCharges @ 0x14042E9F0 (MiRemoveVadCharges.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     CmpCreateKeyControlBlock @ 0x1404334E0 (CmpCreateKeyControlBlock.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140435C00 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404361A8 (CmpCleanUpKcbValueCache.c)
 *     CmpFreeKeyControlBlock @ 0x140436470 (CmpFreeKeyControlBlock.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     NtQueryValueKey @ 0x14043A750 (NtQueryValueKey.c)
 *     CmpCheckRegistry2 @ 0x14043DE40 (CmpCheckRegistry2.c)
 *     CmpVEExecuteOpenLogic @ 0x14043F180 (CmpVEExecuteOpenLogic.c)
 *     CmpQueryKeyValueData @ 0x14043F230 (CmpQueryKeyValueData.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140446E10 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcMessageDestroyProcedure @ 0x140447850 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x140447A30 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404483A0 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14044B480 (AlpcpCaptureMessageDataSafe.c)
 *     SeReleaseSecurityDescriptor @ 0x14044CA54 (SeReleaseSecurityDescriptor.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     PspDeleteCreateProcessContext @ 0x140457A6C (PspDeleteCreateProcessContext.c)
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 *     EtwTraceProcess @ 0x14045C3DC (EtwTraceProcess.c)
 *     EtwpQueryProcessCommandLine @ 0x14045CB04 (EtwpQueryProcessCommandLine.c)
 *     PspRundownSingleProcess @ 0x14045CF90 (PspRundownSingleProcess.c)
 *     ExpFreeHandleTable @ 0x14045DFE8 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x14045E0EC (ExpFreeTablePagedPool.c)
 *     ObCheckRefTraceProcess @ 0x14045E6E8 (ObCheckRefTraceProcess.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14045F228 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14045F304 (SeReleaseLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x14045F320 (SepAdtTokenRightAdjusted.c)
 *     MmDeleteProcessAddressSpace @ 0x14045F548 (MmDeleteProcessAddressSpace.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     EtwExitProcess @ 0x14045FF54 (EtwExitProcess.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140460820 (ExpWnfSubscribeWnfStateChange.c)
 *     NtUpdateWnfStateData @ 0x140460B94 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140460F60 (NtQueryWnfStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140461464 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfWriteStateData @ 0x140462258 (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404625B4 (ExpWnfSubscribeNameInstance.c)
 *     CmCreateKey @ 0x140462FD0 (CmCreateKey.c)
 *     RegistryCallback @ 0x1404635D0 (RegistryCallback.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140465EA0 (NtQueryInformationJobObject.c)
 *     PspQueryRateControlHistory @ 0x14046804C (PspQueryRateControlHistory.c)
 *     FsRtlpAllocateOplock @ 0x1404695E8 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x14046A554 (FsRtlPTeardownPerFileObjectContexts.c)
 *     NtQueryEaFile @ 0x14046A59C (NtQueryEaFile.c)
 *     MiResolveImageReferences @ 0x14046B54C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14046BA04 (MiSnapThunk.c)
 *     MiAllocateVad @ 0x14046BFD8 (MiAllocateVad.c)
 *     SepAddLuidToIndexEntry @ 0x14046D1AC (SepAddLuidToIndexEntry.c)
 *     NtCreateWorkerFactory @ 0x14046FD64 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140470730 (AlpcpAllocateCompletionPacketLookaside.c)
 *     RtlQueryImageFileKeyOption @ 0x140472194 (RtlQueryImageFileKeyOption.c)
 *     IoCreateDevice @ 0x140472390 (IoCreateDevice.c)
 *     WmipCreateGuidObject @ 0x140472E18 (WmipCreateGuidObject.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140472FF0 (WmipGetGuidSecurityDescriptor.c)
 *     WmipAddProviderIdToPIList @ 0x140473790 (WmipAddProviderIdToPIList.c)
 *     PnpFreeInterruptInformation @ 0x140473FC0 (PnpFreeInterruptInformation.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047400C (SepValidateReferencedLowBoxHandles.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     SepGetLowBoxHandlesEntry @ 0x140474800 (SepGetLowBoxHandlesEntry.c)
 *     ObpParseSymbolicLinkEx @ 0x140475040 (ObpParseSymbolicLinkEx.c)
 *     SepSetTokenPackage @ 0x140475884 (SepSetTokenPackage.c)
 *     SepGetLowBoxNumberEntry @ 0x140475ACC (SepGetLowBoxNumberEntry.c)
 *     NtCreatePrivateNamespace @ 0x1404765A4 (NtCreatePrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140476830 (ObpVerifyCreatorAccessCheck.c)
 *     NtOpenPrivateNamespace @ 0x1404773A8 (NtOpenPrivateNamespace.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140477664 (ObpCaptureBoundaryDescriptor.c)
 *     SepSetTokenCapabilities @ 0x14047791C (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x140477A64 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140478424 (SeReleaseSid.c)
 *     SepCreateClaimAttributes @ 0x1404784D8 (SepCreateClaimAttributes.c)
 *     SeReleaseAcl @ 0x140478688 (SeReleaseAcl.c)
 *     NtSetInformationToken @ 0x1404786A0 (NtSetInformationToken.c)
 *     SeCaptureAcl @ 0x140479ABC (SeCaptureAcl.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x140479C84 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepExpandDynamic @ 0x140479DE4 (SepExpandDynamic.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14047AAA8 (NtCreateLowBoxToken.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x14047B0EC (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14047B1E0 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14047B324 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x14047B78C (SepCaptureInt64Array.c)
 *     HvpMapHiveImageFromFile @ 0x14047DE28 (HvpMapHiveImageFromFile.c)
 *     CmCheckRegistry @ 0x14047F0C8 (CmCheckRegistry.c)
 *     HvStoreModifiedData @ 0x14047FC40 (HvStoreModifiedData.c)
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140482DBC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     MiDriverLoadSucceeded @ 0x140482EC8 (MiDriverLoadSucceeded.c)
 *     PipRemoveDevicesInRelationList @ 0x1404835BC (PipRemoveDevicesInRelationList.c)
 *     PnpDisableDeviceInterfaces @ 0x14048367C (PnpDisableDeviceInterfaces.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x140483938 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwProcessRemove @ 0x140483A18 (PiSwProcessRemove.c)
 *     PiSwPdoAssociationFree @ 0x140483CEC (PiSwPdoAssociationFree.c)
 *     PiSwBusRelationRemove @ 0x140483D54 (PiSwBusRelationRemove.c)
 *     PiSwDeviceFree @ 0x140483DD0 (PiSwDeviceFree.c)
 *     PiSwPnPInfoFree @ 0x140483E58 (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x140483EC8 (PiSwInstanceInfoFree.c)
 *     IopUncacheInterfaceInformation @ 0x140484758 (IopUncacheInterfaceInformation.c)
 *     PoFxAbandonDevice @ 0x1404849B4 (PoFxAbandonDevice.c)
 *     PiSwStopDestroy @ 0x140484A6C (PiSwStopDestroy.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x14048545C (PnpQueuePendingSurpriseRemoval.c)
 *     IopFreeRelationList @ 0x140485DE0 (IopFreeRelationList.c)
 *     PipFreeDeviceObjectList @ 0x140485E14 (PipFreeDeviceObjectList.c)
 *     PnpProcessRelation @ 0x1404861B0 (PnpProcessRelation.c)
 *     PiSwDeviceDereference @ 0x1404869A8 (PiSwDeviceDereference.c)
 *     PiPnpFreePdoDeviceList @ 0x140486BA4 (PiPnpFreePdoDeviceList.c)
 *     PiSwDeviceInterfaceSetState @ 0x140486F20 (PiSwDeviceInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x140487098 (PiSwIrpInterfaceRegister.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1404874F8 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     PnpCopyDevPropertyArray @ 0x140487E24 (PnpCopyDevPropertyArray.c)
 *     PiSwBusRelationAdd @ 0x140487F84 (PiSwBusRelationAdd.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiSwIrpStartCreate @ 0x140488374 (PiSwIrpStartCreate.c)
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PnpDereferenceNotify @ 0x140489340 (PnpDereferenceNotify.c)
 *     PiUEventProcessEventWorker @ 0x140489744 (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x140489874 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventFreeEventEntry @ 0x140489920 (PiUEventFreeEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140489978 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140489DA4 (PiUEventFreeClientRegistrationContext.c)
 *     ConstraintEval @ 0x140489ED0 (ConstraintEval.c)
 *     PiUEventCacheObjectProperties @ 0x14048A27C (PiUEventCacheObjectProperties.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14048A778 (PiUEventNotifyTargetDeviceChange.c)
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048BBB8 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQuerySerializeActionQueue @ 0x14048BEF8 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14048C268 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x14048C44C (PiDqActionDataFree.c)
 *     PiDqQueryRelease @ 0x14048CAEC (PiDqQueryRelease.c)
 *     PnpProcessDeferredRegistrations @ 0x14048CB60 (PnpProcessDeferredRegistrations.c)
 *     PiDqTraceQueryCreate @ 0x14048D044 (PiDqTraceQueryCreate.c)
 *     PnpCompleteDeviceEvent @ 0x14048D49C (PnpCompleteDeviceEvent.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048D918 (PiUEventInitClientRegistrationContext.c)
 *     EtwpAllocGuidEntry @ 0x14048E200 (EtwpAllocGuidEntry.c)
 *     EtwpEnableTrace @ 0x14048E2B8 (EtwpEnableTrace.c)
 *     EtwpCaptureString @ 0x14048E410 (EtwpCaptureString.c)
 *     EtwpReleaseQueueEntry @ 0x14048EDEC (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14048EE4C (EtwpUnreferenceDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x14048F784 (EtwpFreeFilterInfo.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x140490D9C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1404910B8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpAddDataSource @ 0x140491900 (EtwpAddDataSource.c)
 *     EtwpUpdateFilterData @ 0x140492728 (EtwpUpdateFilterData.c)
 *     EtwpRegisterProvider @ 0x140492AB4 (EtwpRegisterProvider.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140492EF4 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x140493C40 (EtwpInitLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x14049413C (EtwpFreeTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x1404942D4 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x14049553C (EtwpDelayCreate.c)
 *     EtwpCreateNtFileName @ 0x14049574C (EtwpCreateNtFileName.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     EtwpProcessThreadImageRundown @ 0x140499274 (EtwpProcessThreadImageRundown.c)
 *     EtwpTraceProcessRundown @ 0x140499740 (EtwpTraceProcessRundown.c)
 *     ExLockUserBuffer @ 0x140499EB0 (ExLockUserBuffer.c)
 *     NtQueryDirectoryObject @ 0x14049A960 (NtQueryDirectoryObject.c)
 *     PspCaptureUserProcessParameters @ 0x14049B8E4 (PspCaptureUserProcessParameters.c)
 *     EtwQueryProcessTelemetryInfo @ 0x14049BF90 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpCaptureMessageData @ 0x1404A01B8 (AlpcpCaptureMessageData.c)
 *     AlpcpAllocateMessageFunction @ 0x1404A06AC (AlpcpAllocateMessageFunction.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404A084C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404A0ABC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x1404A2118 (SepProbeAndCaptureString_U.c)
 *     MiSegmentDelete @ 0x1404A25C4 (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 *     CmLoadDifferencingKey @ 0x1404A37E0 (CmLoadDifferencingKey.c)
 *     CmpNameFromAttributes @ 0x1404A4444 (CmpNameFromAttributes.c)
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 *     MiCreateVadEventBitmap @ 0x1404A66FC (MiCreateVadEventBitmap.c)
 *     ObpInsertHandleCount @ 0x1404A6DC4 (ObpInsertHandleCount.c)
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404A9848 (NtReadFileScatter.c)
 *     IoWMISystemControl @ 0x1404A9E3C (IoWMISystemControl.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1404AA364 (ExpGetSystemFirmwareTableInformation.c)
 *     WmipGetRegistryHideMachine @ 0x1404AA5F4 (WmipGetRegistryHideMachine.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404AA788 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1404AAAE8 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404AAB74 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1404AAEB8 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404ABA5C (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404ABF64 (FsRtlNotifyCompleteIrp.c)
 *     WmipFreeTraceDeviceList @ 0x1404AC918 (WmipFreeTraceDeviceList.c)
 *     SeAppendPrivileges @ 0x1404ACCCC (SeAppendPrivileges.c)
 *     ExpAllocateHandleTable @ 0x1404AD0A8 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404AD330 (ExpAllocateTablePagedPoolNoZero.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1404AD4D0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExpWnfDeleteProcessContext @ 0x1404AD754 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1404ADB5C (ExpWnfDeleteSubscription.c)
 *     ExpWnfFreeScopeInstance @ 0x1404ADED0 (ExpWnfFreeScopeInstance.c)
 *     NtDeleteWnfStateName @ 0x1404ADFA4 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteNameInstance @ 0x1404AE36C (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1404AE6B4 (ExpWnfDeleteStateData.c)
 *     NtFlushBuffersFileEx @ 0x1404AF1B0 (NtFlushBuffersFileEx.c)
 *     IopSynchronousApiServiceTail @ 0x1404AF418 (IopSynchronousApiServiceTail.c)
 *     ExGetPoolTagInfo @ 0x1404AF594 (ExGetPoolTagInfo.c)
 *     NtUnlockFile @ 0x1404AF9D8 (NtUnlockFile.c)
 *     PfSnArrayGrow @ 0x1404AFDC0 (PfSnArrayGrow.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1404AFEB8 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcConnectionDestroyProcedure @ 0x1404B0404 (AlpcConnectionDestroyProcedure.c)
 *     IopTrackLink @ 0x1404B0AB8 (IopTrackLink.c)
 *     WmipDeleteMethod @ 0x1404B1DAC (WmipDeleteMethod.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     FsRtlTeardownPerFileContexts @ 0x1404B31FC (FsRtlTeardownPerFileContexts.c)
 *     ObpDeleteDirectoryEntry @ 0x1404B3390 (ObpDeleteDirectoryEntry.c)
 *     ExHandleSPCall2 @ 0x1404B35D4 (ExHandleSPCall2.c)
 *     NtGetMUIRegistryInfo @ 0x1404B3868 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     MUIInitializeResourceLock @ 0x1404B42FC (MUIInitializeResourceLock.c)
 *     PoDiagFreeUsermodeStack @ 0x1404B4388 (PoDiagFreeUsermodeStack.c)
 *     EtwpProviderArrivalCallback @ 0x1404B47FC (EtwpProviderArrivalCallback.c)
 *     PspFreeRateControl @ 0x1404B57B4 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1404B57F8 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404B58A0 (PspAddSchedulingGroupToJobChain.c)
 *     PspInitializeFullProcessImageName @ 0x1404B5B34 (PspInitializeFullProcessImageName.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404B6D6C (RtlpProcessIFEOKeyFilter.c)
 *     SeTokenIsElevated @ 0x1404B6E88 (SeTokenIsElevated.c)
 *     NtCloseObjectAuditAlarm @ 0x1404B6EF4 (NtCloseObjectAuditAlarm.c)
 *     EtwpReceiveReplyDataBlock @ 0x1404B7390 (EtwpReceiveReplyDataBlock.c)
 *     NtRemoveIoCompletionEx @ 0x1404B77E4 (NtRemoveIoCompletionEx.c)
 *     PiNormalizeDeviceText @ 0x1404B7EB8 (PiNormalizeDeviceText.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404B8F1C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     CmpMarkIndexDirty @ 0x1404B9C38 (CmpMarkIndexDirty.c)
 *     SddlpFree @ 0x1404BA0C0 (SddlpFree.c)
 *     SeDeassignSecurity @ 0x1404BBEA8 (SeDeassignSecurity.c)
 *     PfSnGetCompletedTrace @ 0x1404BC148 (PfSnGetCompletedTrace.c)
 *     CmpVEExecuteCreateLogic @ 0x1404BC7F8 (CmpVEExecuteCreateLogic.c)
 *     CmpRemoveFromSecurityCache @ 0x1404BCDEC (CmpRemoveFromSecurityCache.c)
 *     CmpCleanupTransactionState @ 0x1404BD7CC (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1404BD8D8 (CmpLogCheckpoint.c)
 *     CmpStartRMLog @ 0x1404BE0E4 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x1404BE47C (CmpStartCLFSLog.c)
 *     ExpHwidProcessInterface @ 0x1404BE6E8 (ExpHwidProcessInterface.c)
 *     RtlAcquirePrivilege @ 0x1404BF554 (RtlAcquirePrivilege.c)
 *     NtQueryWnfStateNameInformation @ 0x1404C015C (NtQueryWnfStateNameInformation.c)
 *     PiCMGetDeviceIdList @ 0x1404C0670 (PiCMGetDeviceIdList.c)
 *     NtQueryMultipleValueKey @ 0x1404C0BFC (NtQueryMultipleValueKey.c)
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1404C1CB4 (PiDmGetReferencedObjectFromProperty.c)
 *     NtSystemDebugControl @ 0x1404C1E48 (NtSystemDebugControl.c)
 *     _RegRtlEnumValue @ 0x1404C26F0 (_RegRtlEnumValue.c)
 *     EtwpFreeGuidEntry @ 0x1404C281C (EtwpFreeGuidEntry.c)
 *     PerfDiagpProxyWorker @ 0x1404C3114 (PerfDiagpProxyWorker.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     PiDqSerializationAlloc @ 0x1404C40B0 (PiDqSerializationAlloc.c)
 *     WmipSecurityMethod @ 0x1404C53C0 (WmipSecurityMethod.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1404C5464 (ObAssignObjectSecurityDescriptor.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1404C5578 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404C5784 (PiPnpRtlGetFilteredDeviceList.c)
 *     HvFreeUnreconciledData @ 0x1404C5F3C (HvFreeUnreconciledData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404C6884 (ExpWnfCheckCrossScopeAccess.c)
 *     SepDeReferenceLogonSession @ 0x1404C7CF8 (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x1404C7EC0 (SepInformLsaOfDeletedLogon.c)
 *     RtlReleasePrivilege @ 0x1404C801C (RtlReleasePrivilege.c)
 *     SepUpdateLogonSessionTrack @ 0x1404C8C18 (SepUpdateLogonSessionTrack.c)
 *     NtLoadDriver @ 0x1404C8DFC (NtLoadDriver.c)
 *     IopCallDriverReinitializationRoutines @ 0x1404C903C (IopCallDriverReinitializationRoutines.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404C913C (IopSetDeviceSecurityDescriptor.c)
 *     SepCreateLogonSessionTrack @ 0x1404C935C (SepCreateLogonSessionTrack.c)
 *     IopPnPDispatch @ 0x1404C9D24 (IopPnPDispatch.c)
 *     PiDmCacheDataFree @ 0x1404CBCD0 (PiDmCacheDataFree.c)
 *     ObpSetDeviceMap @ 0x1404CBF4C (ObpSetDeviceMap.c)
 *     CmpQueryNameString @ 0x1404CC8A8 (CmpQueryNameString.c)
 *     CmpCheckSecurityCellAccess @ 0x1404CC9B8 (CmpCheckSecurityCellAccess.c)
 *     CmSnapshotRMTxArray @ 0x1404CD238 (CmSnapshotRMTxArray.c)
 *     CmpAdjustSecurityCacheSize @ 0x1404CD300 (CmpAdjustSecurityCacheSize.c)
 *     CmpDelayFreeRMWorker @ 0x1404CD388 (CmpDelayFreeRMWorker.c)
 *     MiCompressImportList @ 0x1404CDDAC (MiCompressImportList.c)
 *     CmRmFinalizeRecovery @ 0x1404CE378 (CmRmFinalizeRecovery.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404CEFD8 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PiDeferSetInterfaceState @ 0x1404CF084 (PiDeferSetInterfaceState.c)
 *     PiDqGrowPropertyArray @ 0x1404CF868 (PiDqGrowPropertyArray.c)
 *     ExpCheckPortableOperatingSystem @ 0x1404CF8F8 (ExpCheckPortableOperatingSystem.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x1404CFD80 (ExpHwidEnsurePropertyBufferLength.c)
 *     IopQueryLegacyBusInformation @ 0x1404CFF90 (IopQueryLegacyBusInformation.c)
 *     CmpRecordUnloadEventForHive @ 0x1404D009C (CmpRecordUnloadEventForHive.c)
 *     NtNotifyChangeSession @ 0x1404D04B0 (NtNotifyChangeSession.c)
 *     ObpDeleteSymbolicLink @ 0x1404D0950 (ObpDeleteSymbolicLink.c)
 *     ExpGenuinePolicyPostProcess @ 0x1404D0D28 (ExpGenuinePolicyPostProcess.c)
 *     SepImageVerificationCallbackWorker @ 0x1404D10DC (SepImageVerificationCallbackWorker.c)
 *     ExpWnfRegisterPermanentName @ 0x1404D1140 (ExpWnfRegisterPermanentName.c)
 *     MiCreateRotateView @ 0x1404D151C (MiCreateRotateView.c)
 *     sub_1404D15FC @ 0x1404D15FC (sub_1404D15FC.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1404D16B8 (ExpHwidBiosIfGetFirmwareTable.c)
 *     PopPowerRequestFree @ 0x1404D17F8 (PopPowerRequestFree.c)
 *     EtwpCreateUmReplyObject @ 0x1404D182C (EtwpCreateUmReplyObject.c)
 *     ExpWnfPopulateStateData @ 0x1404D19FC (ExpWnfPopulateStateData.c)
 *     AlpcpFreeCompletionList @ 0x1404D2128 (AlpcpFreeCompletionList.c)
 *     PfSnOperationProcess @ 0x1404D2240 (PfSnOperationProcess.c)
 *     PiDqFreeGenericTableEntry @ 0x1404D2568 (PiDqFreeGenericTableEntry.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404D26F4 (PoDiagCaptureUsermodeStack.c)
 *     EtwpGenerateFileName @ 0x1404D29BC (EtwpGenerateFileName.c)
 *     sub_1404D2B3C @ 0x1404D2B3C (sub_1404D2B3C.c)
 *     CmpDeleteLightWeightTransaction @ 0x1404D3260 (CmpDeleteLightWeightTransaction.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1404D350C (PfSnTracingStateExWorkerRoutine.c)
 *     PiSwFreeGenericTableEntry @ 0x1404D3628 (PiSwFreeGenericTableEntry.c)
 *     CMFFreeFn @ 0x1404D3638 (CMFFreeFn.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404D37C0 (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStoreContextDereference @ 0x1404D3A28 (MiInSwapStoreContextDereference.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404D3B60 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404D3FA4 (PipGetRegistrySecurityWithFallback.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x1404D6388 (MmLinkJobProcess.c)
 *     NtSetInformationVirtualMemory @ 0x1404D6C9C (NtSetInformationVirtualMemory.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404D7A84 (PfSnAsyncPrefetchWorker.c)
 *     PfSnAsyncContextCleanup @ 0x1404D7DCC (PfSnAsyncContextCleanup.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404D7E18 (PfSnOpenVolumesForPrefetch.c)
 *     sub_1404D8808 @ 0x1404D8808 (sub_1404D8808.c)
 *     ExpHwidProcessDevice @ 0x1404D8978 (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404D8AA8 (ExpHwidAppendDeviceInfoBlock.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404D8EBC (PiCMGetDeviceInterfaceList.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DAB74 (_CmOpenCommonClassRegKeyWorker.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1404DB3C4 (RtlpAllocDeallocQueryBuffer.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404DBB94 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiCMGetObjectList @ 0x1404DBFC8 (PiCMGetObjectList.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1404DC820 (PiGetDeviceRegProperty.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1404DCCE0 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x1404DD0E8 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     DrvDbLoadDatabaseNode @ 0x1404DD3F0 (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404DD804 (_RegRtlCreateTreeTransacted.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404DE090 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404DE698 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PnpGetObjectProperty @ 0x1404DEBF4 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1404DF92C (PiCMGetObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404E0410 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x1404E09F0 (_RegRtlQueryValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404E0C54 (_PnpCtxGetCachedContextBaseKey.c)
 *     PiPnpRtlObjectActionCallback @ 0x1404E18C0 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectRelease @ 0x1404E1F50 (PiDmObjectRelease.c)
 *     _PnpRegQueryValueIndirect @ 0x1404E2E64 (_PnpRegQueryValueIndirect.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404E3368 (PiControlMakeUserModeCallersCopy.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1404E3A48 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1404E3C7C (PiPnpRtlInterfaceFilterCallback.c)
 *     PnpUnicodeStringToWstrFree @ 0x1404E3F10 (PnpUnicodeStringToWstrFree.c)
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiDqPnPGetObjectProperty @ 0x1404E4B74 (PiDqPnPGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 *     PiPnpRtlObjectEventRelease @ 0x1404E4DC8 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x1404E4ED0 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     PnpFreeDevPropertyArray @ 0x1404E56C0 (PnpFreeDevPropertyArray.c)
 *     PnpFreeDevProperty @ 0x1404E5718 (PnpFreeDevProperty.c)
 *     PiCMGetRegistryProperty @ 0x1404E5D50 (PiCMGetRegistryProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E64C8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 *     WmipQueryAllData @ 0x1404E7C28 (WmipQueryAllData.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E832C (PiDmObjectProcessPropertyChange.c)
 *     IoQueryFileDosDeviceName @ 0x1404EB03C (IoQueryFileDosDeviceName.c)
 *     IoVolumeDeviceToDosName @ 0x1404EB0DC (IoVolumeDeviceToDosName.c)
 *     PfpReadSupportCleanup @ 0x1404EC1AC (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x1404EC2A0 (PfpFileBuildReadSupport.c)
 *     IopQueryNameInternal @ 0x1404ECAA0 (IopQueryNameInternal.c)
 *     PfSnCleanupPrefetchHeader @ 0x1404ED470 (PfSnCleanupPrefetchHeader.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x1404ED640 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x1404ED700 (PfSnPopulateReadList.c)
 *     KeRundownApcQueues @ 0x1404EE9DC (KeRundownApcQueues.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 *     CcUnpinData @ 0x1404EF690 (CcUnpinData.c)
 *     BuildQueryDirectoryIrp @ 0x1404F0410 (BuildQueryDirectoryIrp.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     AlpcpDestroyBlob @ 0x1404F2C54 (AlpcpDestroyBlob.c)
 *     NtQueryVolumeInformationFile @ 0x1404F4F20 (NtQueryVolumeInformationFile.c)
 *     PfpRpFileKeyUpdate @ 0x1404F61C0 (PfpRpFileKeyUpdate.c)
 *     CmpFree @ 0x1404F7940 (CmpFree.c)
 *     CmpDelayedDerefKeys @ 0x1404F7F1C (CmpDelayedDerefKeys.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     IopFreeMiniCompletionPacket @ 0x1404FEE60 (IopFreeMiniCompletionPacket.c)
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140500954 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     sub_140500B48 @ 0x140500B48 (sub_140500B48.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140500B70 (ExpHwidSysVolIfGetDiskInfo.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopDiagTracePowerRequestCreate @ 0x140503074 (PopDiagTracePowerRequestCreate.c)
 *     NtSetSecurityObject @ 0x140503BA4 (NtSetSecurityObject.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140503F10 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140504198 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x1405056C4 (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x1405065E4 (MiBuildImageControlArea.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiCompressRelocations @ 0x1405082F0 (MiCompressRelocations.c)
 *     MiParseImageCfgBits @ 0x140508740 (MiParseImageCfgBits.c)
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 *     SeValidateImageHeader @ 0x14050A5A4 (SeValidateImageHeader.c)
 *     MiPrefetchControlArea @ 0x14050A6B4 (MiPrefetchControlArea.c)
 *     MiBuildNewCloneDescriptor @ 0x14050A7A4 (MiBuildNewCloneDescriptor.c)
 *     SeReleaseImageValidationContext @ 0x14050A940 (SeReleaseImageValidationContext.c)
 *     MiCloneProcessAddressSpace @ 0x14050A958 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 *     PnpBusTypeGuidGetIndex @ 0x14050B60C (PnpBusTypeGuidGetIndex.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14050D06C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14050D31C (PiBuildDeviceNodeInstancePath.c)
 *     PnpFreeDeviceInstancePath @ 0x14050D434 (PnpFreeDeviceInstancePath.c)
 *     IopDoDeferredSetInterfaceState @ 0x14050D724 (IopDoDeferredSetInterfaceState.c)
 *     PiQueryRemovableDeviceOverride @ 0x14050D9CC (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x14050DC78 (PipFindDeviceOverrideEntry.c)
 *     PnpGetDeviceLocationStrings @ 0x14050DE68 (PnpGetDeviceLocationStrings.c)
 *     PnpQueryBusInformation @ 0x14050E634 (PnpQueryBusInformation.c)
 *     PiQueryResourceRequirements @ 0x14050E808 (PiQueryResourceRequirements.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x14050EB84 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     PiQueryAndAllocateBootResources @ 0x14050EC10 (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x14050EDDC (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14050F164 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiDeviceRegistration @ 0x14050F534 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x14050F6D0 (PpForEachDeviceInstanceDriver.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PiProcessNewDeviceNode @ 0x140510338 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x140511600 (PnpQueryID.c)
 *     PnpCheckDeviceIdsChanged @ 0x140511D78 (PnpCheckDeviceIdsChanged.c)
 *     PnpQueryDeviceText @ 0x140512360 (PnpQueryDeviceText.c)
 *     PipCheckForDenyExecute @ 0x140512538 (PipCheckForDenyExecute.c)
 *     PnpConcatPWSTR @ 0x140512884 (PnpConcatPWSTR.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1405135B4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     AslFree @ 0x140514714 (AslFree.c)
 *     PiUpdateDriverDBCache @ 0x140515734 (PiUpdateDriverDBCache.c)
 *     PnpPrepareDriverLoading @ 0x140515AD8 (PnpPrepareDriverLoading.c)
 *     PpCheckInDriverDatabase @ 0x140515BB0 (PpCheckInDriverDatabase.c)
 *     IopBuildFullDriverPath @ 0x140515EA8 (IopBuildFullDriverPath.c)
 *     IopGetRootDevices @ 0x14051604C (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     CmpWorkerEngineWorker @ 0x1405179C8 (CmpWorkerEngineWorker.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x140518034 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpDestroySecurityCache @ 0x1405181E0 (CmpDestroySecurityCache.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x140519F94 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x14051A0B0 (CmpDoTransWriteLogRecord.c)
 *     HvFreeDirtyData @ 0x14051A35C (HvFreeDirtyData.c)
 *     CmpDeleteKcbCache @ 0x14051A3AC (CmpDeleteKcbCache.c)
 *     PspJobIoRateControlDisable @ 0x14051A458 (PspJobIoRateControlDisable.c)
 *     SepTokenDeleteMethod @ 0x14051A9E0 (SepTokenDeleteMethod.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x14051AB98 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x14051AD98 (SepDereferenceLowBoxHandlesEntry.c)
 *     EtwTraceAppStateChange @ 0x14051B448 (EtwTraceAppStateChange.c)
 *     AlpcpFreeMessageFunction @ 0x14051BB18 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x14051BBB8 (PspThreadDelete.c)
 *     RtlpFreeAtom @ 0x14051C1D8 (RtlpFreeAtom.c)
 *     NtQueryLicenseValue @ 0x14051C200 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x14051C4C0 (ExQueryLicenseValueInternal.c)
 *     RtlpAllocateAtom @ 0x14051CF10 (RtlpAllocateAtom.c)
 *     ObSetSecurityDescriptorInfo @ 0x14051D648 (ObSetSecurityDescriptorInfo.c)
 *     RtlpSetSecurityObject @ 0x14051DAA0 (RtlpSetSecurityObject.c)
 *     PspDereferenceQuotaBlock @ 0x14051E418 (PspDereferenceQuotaBlock.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     PiUEventBroadcastEventWorker @ 0x140528570 (PiUEventBroadcastEventWorker.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528B40 (MiMapLockedPagesInUserSpace.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140528EE0 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x140529090 (IoGetDeviceInterfaceAlias.c)
 *     PiUEventHandleVetoEvent @ 0x1405296AC (PiUEventHandleVetoEvent.c)
 *     NtSetVolumeInformationFile @ 0x140529AB4 (NtSetVolumeInformationFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14052A1F8 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14052A408 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14052A55C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     FsRtlDeleteTunnelCache @ 0x14052A73C (FsRtlDeleteTunnelCache.c)
 *     IoRegisterPlugPlayNotification @ 0x14052A9FC (IoRegisterPlugPlayNotification.c)
 *     WmipQuerySetExecuteSI @ 0x14052B10C (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     PopDiagTraceControlCallback @ 0x14052BF20 (PopDiagTraceControlCallback.c)
 *     PopFxTraceDeviceRegistration @ 0x14052C510 (PopFxTraceDeviceRegistration.c)
 *     MmFreeMappingAddress @ 0x14052C764 (MmFreeMappingAddress.c)
 *     MmAllocateMappingAddress @ 0x14052C83C (MmAllocateMappingAddress.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C9A8 (PiCMGetRelatedDeviceInstance.c)
 *     MiFreeRelocations @ 0x14052D194 (MiFreeRelocations.c)
 *     IoVolumeDeviceToGuid @ 0x14052D50C (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D6D4 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052DA3C (EtwpUpdateDisallowedGuids.c)
 *     FsRtlNotifyUninitializeSync @ 0x14052E214 (FsRtlNotifyUninitializeSync.c)
 *     PopDiagTraceThermalRequest @ 0x14052E238 (PopDiagTraceThermalRequest.c)
 *     PopFreeHiberContext @ 0x14052EF94 (PopFreeHiberContext.c)
 *     PopHiberInitializeResources @ 0x14052F804 (PopHiberInitializeResources.c)
 *     NtInitiatePowerAction @ 0x140531044 (NtInitiatePowerAction.c)
 *     PoClearBroadcast @ 0x140531E44 (PoClearBroadcast.c)
 *     MiCheckSessionPoolAllocations @ 0x140532308 (MiCheckSessionPoolAllocations.c)
 *     WmipDSCleanup @ 0x140532730 (WmipDSCleanup.c)
 *     IoDisconnectInterruptEx @ 0x1405329BC (IoDisconnectInterruptEx.c)
 *     IoDisconnectInterrupt @ 0x140532A34 (IoDisconnectInterrupt.c)
 *     WmipISCleanup @ 0x140532D28 (WmipISCleanup.c)
 *     WmipGECleanup @ 0x140532D50 (WmipGECleanup.c)
 *     BiGetObjectIdentifier @ 0x140532DC8 (BiGetObjectIdentifier.c)
 *     BiGetKeyName @ 0x140532E14 (BiGetKeyName.c)
 *     BiDeleteKey @ 0x140532F8C (BiDeleteKey.c)
 *     KeFreeCalloutStack @ 0x140533370 (KeFreeCalloutStack.c)
 *     PopFinalizeWakeInfo @ 0x140533570 (PopFinalizeWakeInfo.c)
 *     SepDeleteLogonSessionTrack @ 0x1405335D4 (SepDeleteLogonSessionTrack.c)
 *     PfpPrefetchPrivatePages @ 0x14053392C (PfpPrefetchPrivatePages.c)
 *     PfpSourceBuildVaArray @ 0x140533CE8 (PfpSourceBuildVaArray.c)
 *     PopFreeRegistration @ 0x140533F70 (PopFreeRegistration.c)
 *     BiUnloadHiveByHandle @ 0x140534168 (BiUnloadHiveByHandle.c)
 *     BiUnloadHiveByName @ 0x1405341F4 (BiUnloadHiveByName.c)
 *     PopLoadResumeContext @ 0x140534390 (PopLoadResumeContext.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1405345D4 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     MiSessionObjectDelete @ 0x140534E8C (MiSessionObjectDelete.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x140535FE4 (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     WmipEventNotification @ 0x1405372F8 (WmipEventNotification.c)
 *     WmipRegisterOrUpdateDS @ 0x140537360 (WmipRegisterOrUpdateDS.c)
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipBuildInstanceSet @ 0x1405378A0 (WmipBuildInstanceSet.c)
 *     WmipGenerateRegistrationNotification @ 0x140537C90 (WmipGenerateRegistrationNotification.c)
 *     WmipCachePtrs @ 0x140537D68 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x140537F5C (WmipSendGuidUpdateNotifications.c)
 *     WmipProcessEvent @ 0x140538080 (WmipProcessEvent.c)
 *     WmipAllocGuidEntry @ 0x140538314 (WmipAllocGuidEntry.c)
 *     WmipQueueNotification @ 0x1405385DC (WmipQueueNotification.c)
 *     RtlQueryModuleInformation @ 0x1405386E4 (RtlQueryModuleInformation.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405388F0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140538B38 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PiProcessDriverInstance @ 0x140538D04 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x14053951C (PiFindDevInstMatch.c)
 *     IopConnectLineBasedInterrupt @ 0x140539828 (IopConnectLineBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x140539A98 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x140539D14 (IopConnectMessageBasedInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14053A04C (IopGetInterruptConnectionData.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 *     CmpCleanupLightWeightUoWData @ 0x14053AF14 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14053B470 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14053B590 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053BA28 (CmpLightWeightCreateSetValueData.c)
 *     BiLoadSystemStore @ 0x14053BB20 (BiLoadSystemStore.c)
 *     BiGetSystemStorePath @ 0x14053BCA4 (BiGetSystemStorePath.c)
 *     BiGetSystemPartition @ 0x14053BD8C (BiGetSystemPartition.c)
 *     SiQuerySystemPartitionInformation @ 0x14053BE54 (SiQuerySystemPartitionInformation.c)
 *     BiMarkTreatAsSystemStore @ 0x14053C01C (BiMarkTreatAsSystemStore.c)
 *     BiOpenSystemStore @ 0x14053C49C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C6A0 (BiCleanupLoadedStores.c)
 *     BiEnumerateSubKeys @ 0x14053C7E0 (BiEnumerateSubKeys.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053CE68 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14053CFD0 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x14053D230 (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14053D398 (BiGetDriveLayoutBlock.c)
 *     BiIsWinPEBoot @ 0x14053D460 (BiIsWinPEBoot.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053D4D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiIsSystemStore @ 0x14053D918 (BiIsSystemStore.c)
 *     PopBcdReadElement @ 0x14053D9D8 (PopBcdReadElement.c)
 *     BiCreateKey @ 0x14053DBE0 (BiCreateKey.c)
 *     BiGetObjectDescription @ 0x14053DD94 (BiGetObjectDescription.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14053E01C (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053E1DC (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x14053E38C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053E50C (BiCloseKey.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E558 (BiCreateKeySecurityDescriptor.c)
 *     BiConvertElementToRegistryData @ 0x14053E864 (BiConvertElementToRegistryData.c)
 *     BiConvertRegistryDataToElement @ 0x14053EA70 (BiConvertRegistryDataToElement.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053EC9C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14053ED4C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14053F0F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x14053F2C8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x14053F474 (BiVerifyBootPartition.c)
 *     PopBcdSetupResumeObject @ 0x14053F610 (PopBcdSetupResumeObject.c)
 *     pIoQueryDeviceDescription @ 0x14053FC00 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x140540064 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140540170 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x1405404C4 (IopGetRegistryKeyInformation.c)
 *     IoRegisterDeviceInterface @ 0x140540DA8 (IoRegisterDeviceInterface.c)
 *     IopSymlinkRememberJunction @ 0x140541010 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140541110 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x14054124C (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopGraftName @ 0x140541568 (IopGraftName.c)
 *     KeAllocateCalloutStackEx @ 0x140541C24 (KeAllocateCalloutStackEx.c)
 *     IoQuerySystemDeviceName @ 0x14054235C (IoQuerySystemDeviceName.c)
 *     SiGetSystemDeviceName @ 0x140542478 (SiGetSystemDeviceName.c)
 *     SiGetSystemPartition @ 0x140542570 (SiGetSystemPartition.c)
 *     SiGetFirmwareBootDeviceName @ 0x1405425BC (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x140542818 (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x1405429F8 (SiIsWinPEBoot.c)
 *     SiGetRegistryValue @ 0x140542A5C (SiGetRegistryValue.c)
 *     IopErrorLogThread @ 0x140542C34 (IopErrorLogThread.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14054328C (NtPrivilegeObjectAuditAlarm.c)
 *     WmipRegistrationWorker @ 0x1405435C8 (WmipRegistrationWorker.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140543730 (IopDeviceObjectFromSymbolicName.c)
 *     PiSwIrpPropertySet @ 0x140543C44 (PiSwIrpPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x140543E10 (PiSwUpdateArrayProperties.c)
 *     WmipCopyFromEventQueues @ 0x140543F24 (WmipCopyFromEventQueues.c)
 *     MmCallDllInitialize @ 0x1405447E0 (MmCallDllInitialize.c)
 *     MiFormFullImageName @ 0x140544B88 (MiFormFullImageName.c)
 *     MiReleaseDriverPtes @ 0x140544E78 (MiReleaseDriverPtes.c)
 *     PnpUnloadAttachedDriver @ 0x1405452B8 (PnpUnloadAttachedDriver.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 *     IopDeleteDriver @ 0x1405461D4 (IopDeleteDriver.c)
 *     MiDeleteSessionDriverProtos @ 0x140546890 (MiDeleteSessionDriverProtos.c)
 *     WmipGetFilePDO @ 0x140546C44 (WmipGetFilePDO.c)
 *     EtwpCCSwapStart @ 0x140546E24 (EtwpCCSwapStart.c)
 *     TtmNotifyDeviceArrival @ 0x140546F5C (TtmNotifyDeviceArrival.c)
 *     IoWMIQuerySingleInstance @ 0x140547554 (IoWMIQuerySingleInstance.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140548380 (NtQuerySystemEnvironmentValueEx.c)
 *     PopSetHiberFileMcb @ 0x140548934 (PopSetHiberFileMcb.c)
 *     EtwUnregister @ 0x140548DF0 (EtwUnregister.c)
 *     WmipSendEnableDisableRequest @ 0x140549D74 (WmipSendEnableDisableRequest.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepNotifyFileSystems @ 0x14054AA90 (SepNotifyFileSystems.c)
 *     EtwpPsProvTraceProcess @ 0x14054BA48 (EtwpPsProvTraceProcess.c)
 *     ExpQueryNumaAvailableMemory @ 0x14054C624 (ExpQueryNumaAvailableMemory.c)
 *     ExpOsProductCacheProviderHelper @ 0x14054CA7C (ExpOsProductCacheProviderHelper.c)
 *     EtwpUpdateKernelGroupsWork @ 0x14054CF20 (EtwpUpdateKernelGroupsWork.c)
 *     IoCreateSystemThread @ 0x14054D0A0 (IoCreateSystemThread.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14054D184 (PspSetCreateThreadNotifyRoutine.c)
 *     IopThreadStart @ 0x14054D254 (IopThreadStart.c)
 *     PiDmListInitEnumCallback @ 0x14054D4C0 (PiDmListInitEnumCallback.c)
 *     PnpSetInterruptInformation @ 0x14054D8C8 (PnpSetInterruptInformation.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     MmFreeBootRegistry @ 0x14054E4B0 (MmFreeBootRegistry.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EE80 (PpmIdleRegisterDefaultStates.c)
 *     MiCreateNodeLists @ 0x14054F9A0 (MiCreateNodeLists.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FF60 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopCreateArcName @ 0x1405501C4 (IopCreateArcName.c)
 *     RtlGenerateClass5Guid @ 0x1405506EC (RtlGenerateClass5Guid.c)
 *     WmipInsertMofResource @ 0x140551338 (WmipInsertMofResource.c)
 *     CmpRegisterCallbackInternal @ 0x14055163C (CmpRegisterCallbackInternal.c)
 *     PiDrvDbRegisterNode @ 0x140552028 (PiDrvDbRegisterNode.c)
 *     PsRegisterSiloMonitor @ 0x1405523D8 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 *     ObpInitObjectTypeSD @ 0x140552BD4 (ObpInitObjectTypeSD.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140552C6C (ObpCreateDefaultObjectTypeSD.c)
 *     SepInitializationPhase1 @ 0x140553520 (SepInitializationPhase1.c)
 *     EmpProviderRegister @ 0x14055474C (EmpProviderRegister.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x140555054 (IopReleaseResources.c)
 *     IopCreateCmResourceList @ 0x1405550E0 (IopCreateCmResourceList.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1405556E8 (IopIsReportedAlready.c)
 *     IopDuplicateDetection @ 0x140555998 (IopDuplicateDetection.c)
 *     ArbInitializeArbiterInstance @ 0x140555B88 (ArbInitializeArbiterInstance.c)
 *     PnpBuildCmResourceLists @ 0x140556118 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x140556624 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x140556700 (IopAllocateBootResourcesInternal.c)
 *     IopFreeReqList @ 0x14055684C (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x14055689C (IopFreeReqAlternative.c)
 *     PnpBuildCmResourceList @ 0x14055690C (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x140556D90 (IopChildToRootTranslation.c)
 *     IopQueryResourceHandlerInterface @ 0x140557A7C (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x140558158 (IopTranslateAndAdjustReqDesc.c)
 *     PnpFilterResourceRequirementsList @ 0x140558924 (PnpFilterResourceRequirementsList.c)
 *     ArbBuildAssignmentOrdering @ 0x140558F8C (ArbBuildAssignmentOrdering.c)
 *     ArbAddOrdering @ 0x140559540 (ArbAddOrdering.c)
 *     ArbAllocateEntry @ 0x1405598D0 (ArbAllocateEntry.c)
 *     ArbpBuildAllocationStack @ 0x140559CCC (ArbpBuildAllocationStack.c)
 *     ArbBootAllocation @ 0x140559E0C (ArbBootAllocation.c)
 *     ArbpGetRegistryValue @ 0x14055ABBC (ArbpGetRegistryValue.c)
 *     RtlpFreeRangeListEntry @ 0x14055AED8 (RtlpFreeRangeListEntry.c)
 *     ArbFreeOrderingList @ 0x14055AF58 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x14055AFB8 (ArbPruneOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14055B1C4 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14055B3D0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     IopReleaseFilteredBootResources @ 0x14055B87C (IopReleaseFilteredBootResources.c)
 *     CmSetAcpiHwProfile @ 0x14055BF28 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x14055C5D8 (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x14055D330 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x14055DEE8 (CmpSetVersionData.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055EA88 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055EC7C (CmpHiveRootSecurityDescriptor.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140560264 (RtlpLoadInstallLanguageFallback.c)
 *     CmpValueToData @ 0x1405606E0 (CmpValueToData.c)
 *     RtlpLoadLanguageConfigList @ 0x140560878 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x140560990 (RtlpMuiRegFreeRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x140561174 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x1405612B0 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140561934 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpGetWindowsPolicy @ 0x140561DC4 (RtlpGetWindowsPolicy.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140561FD8 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405622A8 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x14056260C (_RegRtlDeleteTreeInternal.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1405628B0 (_CmGetMatchingCommonClassListWorker.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1405629F4 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlEnumKey @ 0x140562BA4 (_RegRtlEnumKey.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562D74 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405631D8 (_CmEnumSubkeyCallback.c)
 *     EtwInitializeSiloState @ 0x140563728 (EtwInitializeSiloState.c)
 *     EtwpInitializeAutoLoggers @ 0x140563968 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140563BAC (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140563D20 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x14056413C (EtwpGetAutoLoggerProviderFilter.c)
 *     PiDmListInit @ 0x140564594 (PiDmListInit.c)
 *     PiDmObjectManagerPopulate @ 0x1405645E8 (PiDmObjectManagerPopulate.c)
 *     WdipSemCleanupGroupPolicy @ 0x140564D34 (WdipSemCleanupGroupPolicy.c)
 *     PoFxRegisterCoreDevice @ 0x140566E7C (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterDevice @ 0x140566F90 (PoFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140567268 (PopFxRegisterDeviceWorker.c)
 *     PopPepRegisterDevice @ 0x1405679BC (PopPepRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140567D48 (PopFxConvertV1Components.c)
 *     MmStoreRegister @ 0x140568500 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmPerfResizeHistoryAll @ 0x14056B1B4 (PpmPerfResizeHistoryAll.c)
 *     AdtpBuildMessageString @ 0x14056B690 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14056B904 (SepGetLogonSessionAccountInfo.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14056BBA8 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x14056BC30 (SepRmFetchGlobalSacl.c)
 *     PopRequestShutdownWait @ 0x14056C1C0 (PopRequestShutdownWait.c)
 *     SepReadAndPopulateCapes @ 0x14056C24C (SepReadAndPopulateCapes.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 *     PopConnectToPolicyDevice @ 0x14056C618 (PopConnectToPolicyDevice.c)
 *     PoCreateThermalRequest @ 0x14056CA08 (PoCreateThermalRequest.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14056D238 (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x14056D474 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056EA90 (PopCreateHiberFileSecurityDescriptor.c)
 *     PpReleaseBootDDB @ 0x14056ECF4 (PpReleaseBootDDB.c)
 *     SeAuditProcessCreation @ 0x14056F30C (SeAuditProcessCreation.c)
 *     CmpCmdInit @ 0x14056F72C (CmpCmdInit.c)
 *     PoRegisterCoalescingCallback @ 0x14056F8D0 (PoRegisterCoalescingCallback.c)
 *     PipMakeGloballyUniqueId @ 0x14056FB04 (PipMakeGloballyUniqueId.c)
 *     AdtpObjsInitialize @ 0x140570130 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405705F8 (AdtpInitializeDriveLetters.c)
 *     PnpReadDeviceConfiguration @ 0x140570E5C (PnpReadDeviceConfiguration.c)
 *     PiQueryPowerRelations @ 0x140570F88 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140571314 (PiQueryPowerDependencyRelations.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140571390 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x140571DBC (PiAuAllocateAndInitializeSid.c)
 *     PfpCreateEvent @ 0x140572DA0 (PfpCreateEvent.c)
 *     PnpCheckPossibleBootStartDriver @ 0x14057312C (PnpCheckPossibleBootStartDriver.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 *     PipApplyFunctionToServiceInstances @ 0x140574C5C (PipApplyFunctionToServiceInstances.c)
 *     CmLockKeyForWrite @ 0x140575108 (CmLockKeyForWrite.c)
 *     IoReadDiskSignature @ 0x1405751DC (IoReadDiskSignature.c)
 *     WmipLegacyEtwWorker @ 0x140575384 (WmipLegacyEtwWorker.c)
 *     ExAllocatePrivateWorkerPool @ 0x140575A48 (ExAllocatePrivateWorkerPool.c)
 *     EtwpAcquireTokenAccessInformation @ 0x140575BE4 (EtwpAcquireTokenAccessInformation.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575E94 (PspSetCreateProcessNotifyRoutine.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576D70 (PiSwIrpInterfacePropertySet.c)
 *     WmipGenerateMofResourceNotification @ 0x140577218 (WmipGenerateMofResourceNotification.c)
 *     FsRtlGetTunnelParameterValue @ 0x14057737C (FsRtlGetTunnelParameterValue.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140577474 (ExpQueryMemoryTopologyInformation.c)
 *     NtSetUuidSeed @ 0x1405778D8 (NtSetUuidSeed.c)
 *     PiDcInitUpdateProperties @ 0x140577CF8 (PiDcInitUpdateProperties.c)
 *     PfpRpCHashEmpty @ 0x140577FD8 (PfpRpCHashEmpty.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140578884 (FsRtlpRegisterProviderWithMUP.c)
 *     DrvDbOpenContext @ 0x140578EA0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405790F0 (DrvDbCreateDatabaseNode.c)
 *     ObRegisterCallbacks @ 0x140579658 (ObRegisterCallbacks.c)
 *     _PnpCtxOpenMachine @ 0x140579A88 (_PnpCtxOpenMachine.c)
 *     _SysCtxOpenMachine @ 0x140579C44 (_SysCtxOpenMachine.c)
 *     ObpInitializeRootNamespace @ 0x140579EB4 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x14057A128 (ObpCreateDosDevicesDirectory.c)
 *     SepSetSystemPaths @ 0x14057A5A8 (SepSetSystemPaths.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14057B01C (ExpRegisterFirmwareTableInformationHandler.c)
 *     WheapLogInitEvent @ 0x14057B148 (WheapLogInitEvent.c)
 *     SepBuildDefaultCap @ 0x14057B560 (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B5F8 (_PnpGetEnumSecurityDescriptor.c)
 *     DbgkRegisterErrorPort @ 0x14057BE30 (DbgkRegisterErrorPort.c)
 *     AlpcpInitializeMessageLog @ 0x14057C480 (AlpcpInitializeMessageLog.c)
 *     IoRegisterContainerNotification @ 0x14057C5D0 (IoRegisterContainerNotification.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C9E8 (ExpGetSystemPlatformBinary.c)
 *     NtDeleteWnfStateData @ 0x14057CF64 (NtDeleteWnfStateData.c)
 *     DbgkLkmdRegisterCallback @ 0x14057D260 (DbgkLkmdRegisterCallback.c)
 *     PsSetLoadImageNotifyRoutine @ 0x14057DC24 (PsSetLoadImageNotifyRoutine.c)
 *     PiSwIrpInterfaceSetState @ 0x14057EA2C (PiSwIrpInterfaceSetState.c)
 *     ExGetSystemFirmwareTable @ 0x14057EE4C (ExGetSystemFirmwareTable.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x14057F138 (ExNotifyPlatformBinaryExecuted.c)
 *     CmpAddStringToMapping @ 0x14057F61C (CmpAddStringToMapping.c)
 *     PnpDriverLoadingFailed @ 0x14057FD04 (PnpDriverLoadingFailed.c)
 *     PopExtendConnectionState @ 0x14057FE48 (PopExtendConnectionState.c)
 *     SepAuditAssignPrimaryToken @ 0x1405804E4 (SepAuditAssignPrimaryToken.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x140581580 (ExGetFirmwareEnvironmentVariable.c)
 *     WheaCrashDumpInitializationComplete @ 0x140581758 (WheaCrashDumpInitializationComplete.c)
 *     PsEstablishWin32Callouts @ 0x140581884 (PsEstablishWin32Callouts.c)
 *     IopCopyBootLogRegistryToFile @ 0x140581A08 (IopCopyBootLogRegistryToFile.c)
 *     CcUnpinDataForThread @ 0x1405F90A4 (CcUnpinDataForThread.c)
 *     CcFreeVacbArray @ 0x1405F9110 (CcFreeVacbArray.c)
 *     CmpSaveBootControlSet @ 0x1405F9148 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1405F94B4 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9BC0 (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1405F9EA4 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405FA3C0 (NtReplaceKey.c)
 *     CmUnRegisterCallback @ 0x1405FB1F0 (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405FB5CC (CmpFreeCallbackObjectContexts.c)
 *     CmpQuotaWarningWorker @ 0x1405FC6A0 (CmpQuotaWarningWorker.c)
 *     CmpSystemHiveHysteresisWorker @ 0x1405FC6D4 (CmpSystemHiveHysteresisWorker.c)
 *     CmpFreeAllMemory @ 0x1405FCB30 (CmpFreeAllMemory.c)
 *     CmRenameKey @ 0x1405FD59C (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE410 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE8A8 (CmSetLastWriteTimeKey.c)
 *     CmpTerminateServerSiloCallback @ 0x1405FF4A4 (CmpTerminateServerSiloCallback.c)
 *     CmpBuildAdminInformation @ 0x140600550 (CmpBuildAdminInformation.c)
 *     CmpBuildVirtualReplicationStack @ 0x1406008BC (CmpBuildVirtualReplicationStack.c)
 *     CmpCheckAdminAccess @ 0x140600A48 (CmpCheckAdminAccess.c)
 *     CmpReplicateKeyToVirtual @ 0x14060184C (CmpReplicateKeyToVirtual.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140601B14 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601D18 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCheckExeOwnerForPca @ 0x140601EA4 (CmpCheckExeOwnerForPca.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140602518 (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602934 (CmpReportAuditVirtualizationEvent.c)
 *     CmpCmdRenameHive @ 0x140603608 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarningWorker @ 0x140603738 (CmpDiskFullWarningWorker.c)
 *     CmpClearKeyAccessBits @ 0x140603828 (CmpClearKeyAccessBits.c)
 *     CmInitializeProcessor @ 0x14060397C (CmInitializeProcessor.c)
 *     CmpFreeOffsetArray @ 0x14060489C (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1406048E8 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpRollbackTransactionArray @ 0x1406051FC (CmpRollbackTransactionArray.c)
 *     CmpRmAnalysisPhase @ 0x140605680 (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x140605A30 (CmpRmUnDoPhase.c)
 *     HvWriteExternal @ 0x1406065A8 (HvWriteExternal.c)
 *     CmDeleteKeyRecursive @ 0x140606EA4 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 *     CmpCopySyncTree @ 0x140608258 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 *     CmpCopyValue @ 0x140608A14 (CmpCopyValue.c)
 *     CmpMergeKeyValues @ 0x14060903C (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x140609204 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x14060B408 (CmpGetValueForAudit.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 *     CmpSaveKeyByFileCopy @ 0x14060DB48 (CmpSaveKeyByFileCopy.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DE14 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpFreeUnitOfWork @ 0x14060E384 (CmpFreeUnitOfWork.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E390 (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14060E6E4 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14060EA24 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F140 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F6D8 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     HvpViewMapPrefetchFile @ 0x140610128 (HvpViewMapPrefetchFile.c)
 *     HvpGetLogHeader @ 0x140610B28 (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x14061136C (HvpRecoverData.c)
 *     HvpRecoverDataReadRoutine @ 0x1406115C8 (HvpRecoverDataReadRoutine.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406116F4 (CmpAddRemoveContainerToCLFSLog.c)
 *     VrpCleanupNamespace @ 0x140612ED4 (VrpCleanupNamespace.c)
 *     VrpCleanupBufferParameter @ 0x140612F4C (VrpCleanupBufferParameter.c)
 *     VrpFreeCallbackContext @ 0x140612F78 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x140612FBC (VrpFreeKeyContext.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14061318C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetComRootKey @ 0x140613638 (VrpHandleIoctlGetComRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613808 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140613D24 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140614030 (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpAddNamespaceNodeToList @ 0x1406143E4 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1406146FC (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x140614A2C (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x140614CB4 (VrpDestroyNamespaceNodeList.c)
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14061563C (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x140616498 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x140616A6C (VrpTranslatePath.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x1406170DC (VrpDereferenceDiffHiveEntryWithLock.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x14061736C (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     DbgkpFreeDebugEvent @ 0x140618494 (DbgkpFreeDebugEvent.c)
 *     DbgkpPostModuleMessages @ 0x140618BD4 (DbgkpPostModuleMessages.c)
 *     DbgkpQueueMessage @ 0x140619050 (DbgkpQueueMessage.c)
 *     DbgkpDeleteErrorPort @ 0x14061A2A0 (DbgkpDeleteErrorPort.c)
 *     DbgkpSectionToFileHandle @ 0x14061AD68 (DbgkpSectionToFileHandle.c)
 *     DbgkCaptureLiveDump @ 0x14061AEA0 (DbgkCaptureLiveDump.c)
 *     DbgkLkmdUnregisterCallback @ 0x14061B2A4 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14061B484 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14061B6EC (DbgkpLkmdSnapThreadApc.c)
 *     DbgkpWerCleanupContext @ 0x14061C0D0 (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x14061C368 (DbgkpWerFreePool.c)
 *     EmClientRuleDeregisterNotification @ 0x14061CB40 (EmClientRuleDeregisterNotification.c)
 *     EmpClientRuleRegisterNotification @ 0x14061CC50 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x14061CEC4 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x14061D118 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x14061EE30 (FsRtlIsDbcsInExpression.c)
 *     FsRtlHeatInit @ 0x14061F6FC (FsRtlHeatInit.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14061FAFC (FsRtlpHeatUnregisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x14061FB84 (FsRtlpQueryValueKey.c)
 *     FsRtlNotifyCleanupAll @ 0x14061FD9C (FsRtlNotifyCleanupAll.c)
 *     IoReadPartitionTable @ 0x14061FFD8 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x140620188 (IoWritePartitionTable.c)
 *     IopApcHardError @ 0x140620ED0 (IopApcHardError.c)
 *     IopCleanupFileObjectIosbRange @ 0x140621240 (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     IopFreeGenericTableEntry @ 0x140621540 (IopFreeGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140621550 (IopGetRelatedFileName.c)
 *     IopHardErrorThread @ 0x140621894 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x14062212C (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x1406223C8 (IopRaiseInformationalHardError.c)
 *     IopSafebootDriverLoad @ 0x140622440 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1406225A0 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406228A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     IopStartApcHardError @ 0x1406232AC (IopStartApcHardError.c)
 *     IoReplaceFileObjectName @ 0x1406239E0 (IoReplaceFileObjectName.c)
 *     IoUnregisterFsRegistrationChange @ 0x140623CFC (IoUnregisterFsRegistrationChange.c)
 *     IoUnregisterContainerNotification @ 0x140624538 (IoUnregisterContainerNotification.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406246A4 (IoIsValidNameGraftingBuffer.c)
 *     IopCopyOverNewPathSecure @ 0x140624A48 (IopCopyOverNewPathSecure.c)
 *     IopReplaceSymlinkPath @ 0x140624B4C (IopReplaceSymlinkPath.c)
 *     IopSymlinkApplyToOpenedName @ 0x140624E60 (IopSymlinkApplyToOpenedName.c)
 *     IoUnregisterIoTracking @ 0x140625124 (IoUnregisterIoTracking.c)
 *     IoVolumeDeviceNameToGuid @ 0x140625210 (IoVolumeDeviceNameToGuid.c)
 *     NtSetEaFile @ 0x140625290 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x140625FE4 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406265D0 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140626760 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x14062708C (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x14062711C (IopLiveDumpFreeMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x14062739C (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x1406276C4 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406278E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140628630 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x140628A50 (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140628B9C (IopGetEnvironmentVariableTrEE.c)
 *     IopOpenSystemVariableDevice @ 0x140628E70 (IopOpenSystemVariableDevice.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x14062915C (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140629260 (IopSetEnvironmentVariableTrEE.c)
 *     IopFindSystemDevice @ 0x140629394 (IopFindSystemDevice.c)
 *     PnpShutdownDevices @ 0x140629AD4 (PnpShutdownDevices.c)
 *     IopAppendLegacyVeto @ 0x14062A54C (IopAppendLegacyVeto.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A61C (PiGetDeviceRegistryProperty.c)
 *     PnpRequestDeviceEjectExWorker @ 0x14062A8E0 (PnpRequestDeviceEjectExWorker.c)
 *     PpCreateLegacyDeviceIds @ 0x14062A964 (PpCreateLegacyDeviceIds.c)
 *     PipDeleteDependencyNode @ 0x14062B2D0 (PipDeleteDependencyNode.c)
 *     PipFreeBindingId @ 0x14062B390 (PipFreeBindingId.c)
 *     PipFreeBindingRequestEntry @ 0x14062B3B4 (PipFreeBindingRequestEntry.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B9BC (PnpDeleteDeviceInterfaces.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x14062BE10 (PnpReportTargetDeviceChangeAsyncWorker.c)
 *     IoReportResourceUsageInternal @ 0x14062C348 (IoReportResourceUsageInternal.c)
 *     IopDeviceRemovalForResetComplete @ 0x14062C74C (IopDeviceRemovalForResetComplete.c)
 *     IopFreeResetRemovalContext @ 0x14062C880 (IopFreeResetRemovalContext.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14062D0F8 (IopAllocatePassiveInterruptBlock.c)
 *     PnpRestartDeviceNode @ 0x14062DD3C (PnpRestartDeviceNode.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DE34 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x14062E050 (PnpProcessCompletedEject.c)
 *     IopIsPciRootBus @ 0x14062E824 (IopIsPciRootBus.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x14062EC28 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x14062EC64 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14062EC7C (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14062ECD8 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14062F06C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14062F344 (PiPnpRtlServiceFilterCallback.c)
 *     PiDmFreeGenericTableEntry @ 0x14062F970 (PiDmFreeGenericTableEntry.c)
 *     PiDmFreeMem @ 0x14062F980 (PiDmFreeMem.c)
 *     PnpRebalance @ 0x140630484 (PnpRebalance.c)
 *     PiDcFreeGenericTableEntry @ 0x140630948 (PiDcFreeGenericTableEntry.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140630964 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140630BAC (PiDcResetChildDeviceContainers.c)
 *     PiAuCheckClientInteractive @ 0x140630D6C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140630E2C (PiAuCheckTokenMembership.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x14063104C (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x1406312D0 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqDeleteUserObject @ 0x140631648 (PiDqDeleteUserObject.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140631854 (PiDqGetRelativeObjectRegPath.c)
 *     PiDqIrpPropertySet @ 0x140631994 (PiDqIrpPropertySet.c)
 *     PiDqOpenUserObjectRegKey @ 0x140631E3C (PiDqOpenUserObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140632150 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x140632278 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgBuildIndirectString @ 0x140632930 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140635480 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406359A8 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140635EF8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1406360BC (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140637050 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1406373D4 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140638D48 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgFreeDriverNode @ 0x140638DD0 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFreeResolveContext @ 0x140638FA8 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140639240 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A6FC (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateDevice @ 0x14063A918 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14063AE00 (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CD90 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14063D224 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D290 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063E0AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableConstant @ 0x14063E7E4 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E8AC (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EC90 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14063FE10 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140640424 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140640500 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140640CAC (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140640E80 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140641134 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgVerifyService @ 0x140641240 (PiDevCfgVerifyService.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140642160 (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1406421A4 (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x1406424D0 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140642618 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpAddVetoInformation @ 0x140642844 (PnpAddVetoInformation.c)
 *     PnpFreeVetoInformation @ 0x140642B2C (PnpFreeVetoInformation.c)
 *     PnpLogVetoInformation @ 0x140642BC4 (PnpLogVetoInformation.c)
 *     PnpRemoveEventFromQueue @ 0x140642D34 (PnpRemoveEventFromQueue.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x140643D40 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140643F24 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x140644040 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1406441F8 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x1406445C0 (PnprGetPluginDriverImagePath.c)
 *     PnprIsMemoryDevice @ 0x140644A5C (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x140644B08 (PnprIsProcessorDevice.c)
 *     PnprLegacyDeviceDriversPresent @ 0x140644C18 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x140644C64 (PnprLoadPluginDriver.c)
 *     PnprMmFree @ 0x1406454EC (PnprMmFree.c)
 *     PiSwInterfaceFree @ 0x1406457FC (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406459FC (PiSwQueuedCreateInfoFree.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140647748 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x1406478D0 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140647CD0 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14064810C (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140648504 (PiCMRegisterDeviceInterface.c)
 *     PiProcessSetDeviceProblem @ 0x140649ADC (PiProcessSetDeviceProblem.c)
 *     IopQueryDockRemovalInterface @ 0x14064A004 (IopQueryDockRemovalInterface.c)
 *     PiControlGetDeviceStack @ 0x14064A520 (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14064B190 (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B4B0 (PnpQueueQueryAndRemoveEvent.c)
 *     PiRearrangeDeviceInstances @ 0x14064B824 (PiRearrangeDeviceInstances.c)
 *     PnpRestoreResourcesInternal @ 0x14064BF2C (PnpRestoreResourcesInternal.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14064C174 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C398 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiAuditDeviceOperation @ 0x14064C804 (PiAuditDeviceOperation.c)
 *     PiDrvDbDestroyNode @ 0x14064CE68 (PiDrvDbDestroyNode.c)
 *     IopExecuteHardwareProfileChange @ 0x14064CEC0 (IopExecuteHardwareProfileChange.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     IopQueryConflictListInternal @ 0x14064E6DC (IopQueryConflictListInternal.c)
 *     KiStartDynamicProcessor @ 0x14064F124 (KiStartDynamicProcessor.c)
 *     KeInitializeUmsThread @ 0x1406505D4 (KeInitializeUmsThread.c)
 *     KeUnInitializeUmsThread @ 0x1406507C8 (KeUnInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406551D8 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x140655F60 (AlpcpGetPortNameInformation.c)
 *     AlpcpPortQueryServerInfo @ 0x140656014 (AlpcpPortQueryServerInfo.c)
 *     AlpcRegisterLogRoutine @ 0x14065655C (AlpcRegisterLogRoutine.c)
 *     AlpcUnregisterLogRoutine @ 0x140656680 (AlpcUnregisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x140656AA0 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x140656BF4 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140656CFC (MmGetFileNameForSection.c)
 *     MiReturnProcessVads @ 0x140657004 (MiReturnProcessVads.c)
 *     MiAddPhysicalMemory @ 0x1406576C0 (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406582A4 (MiRemovePhysicalMemory.c)
 *     MmAllocateNonCachedMemory @ 0x1406588A8 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x140658A2C (MmFreeNonCachedMemory.c)
 *     MiRemoveMdlPages @ 0x140658ACC (MiRemoveMdlPages.c)
 *     MiLdwPopupWorker @ 0x140659440 (MiLdwPopupWorker.c)
 *     MmSetPermanentCacheAttribute @ 0x1406598E4 (MmSetPermanentCacheAttribute.c)
 *     MiFreeRotateView @ 0x140659D18 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x140659E10 (MiFreeVadEventBitmap.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 *     MiCopyDirectMapHeader @ 0x14065A9C4 (MiCopyDirectMapHeader.c)
 *     MiDeletePagefile @ 0x14065AEEC (MiDeletePagefile.c)
 *     MiAweViewRemover @ 0x14065C234 (MiAweViewRemover.c)
 *     MiDeletePhysicalProcessPages @ 0x14065C570 (MiDeletePhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x14065C910 (MiResizeAweBitMap.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CB7C (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x14065D810 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DC8C (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x14065E164 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateEnclaveVad @ 0x14065E5A8 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x14065F9DC (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14065FDAC (NtInitializeEnclave.c)
 *     MiCreatePartition @ 0x14066028C (MiCreatePartition.c)
 *     MiExpandPartitionIds @ 0x140660498 (MiExpandPartitionIds.c)
 *     MiHotAddPartitionMemory @ 0x1406606BC (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1406608E0 (MiMakePartitionMemoryBlock.c)
 *     MiManagePartition @ 0x140660A88 (MiManagePartition.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x140662180 (MiFreeSubsectionProtos.c)
 *     MiAllocateLargeZeroPages @ 0x1406621D4 (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x1406625E0 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x1406627C8 (MiFindLargePageMemory.c)
 *     MiFreeLargePageView @ 0x14066295C (MiFreeLargePageView.c)
 *     MiDeletePartialCloneVad @ 0x140663220 (MiDeletePartialCloneVad.c)
 *     MiFreeCloneDescriptor @ 0x140663320 (MiFreeCloneDescriptor.c)
 *     MmInSwapVirtualAddresses @ 0x140663634 (MmInSwapVirtualAddresses.c)
 *     MiCombineAllPhysicalMemory @ 0x1406637FC (MiCombineAllPhysicalMemory.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 *     MiReleaseScrubPacket @ 0x140664E68 (MiReleaseScrubPacket.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 *     MmScrubMemory @ 0x140665370 (MmScrubMemory.c)
 *     ObShutdownSystem @ 0x1406656C0 (ObShutdownSystem.c)
 *     ObpSetObjectAuditInfo @ 0x140666460 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x1406666B0 (ObGetObjectInformation.c)
 *     ObpDestroyTypeArray @ 0x140666E5C (ObpDestroyTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x140666EB0 (ObUnRegisterCallbacks.c)
 *     ObpCallPostOperationCallbacks @ 0x140666FEC (ObpCallPostOperationCallbacks.c)
 *     ObpDeregisterObject @ 0x14066782C (ObpDeregisterObject.c)
 *     ObpDestroyStackAndObjectTables @ 0x1406679AC (ObpDestroyStackAndObjectTables.c)
 *     ObpFreeWorkItemBlock @ 0x140667A8C (ObpFreeWorkItemBlock.c)
 *     ObpGetObjectRefInfo @ 0x140667B6C (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x140667E80 (ObpInitStackAndObjectTables.c)
 *     ObpStartRuntimeStackTrace @ 0x1406684E8 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x140668948 (ObpStopRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x140668D84 (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x1406691FC (PfpQueryFileExtentsRequest.c)
 *     PfTCleanupBuffers @ 0x140669A00 (PfTCleanupBuffers.c)
 *     PfpRpShutdown @ 0x140669A8C (PfpRpShutdown.c)
 *     PfFbBufferListCleanup @ 0x14066A184 (PfFbBufferListCleanup.c)
 *     PopUnicodeStringDeepCopy @ 0x14066A870 (PopUnicodeStringDeepCopy.c)
 *     PoDeleteThermalRequest @ 0x14066B86C (PoDeleteThermalRequest.c)
 *     PopCleanCoolingExtension @ 0x14066B9D4 (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14066BDF0 (PopRegisterCoolingExtensionProtection.c)
 *     PoReenableSleepStates @ 0x14066C00C (PoReenableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x14066C138 (PopGetPowerRequestListInfo.c)
 *     PoFxRegisterPrimaryDevice @ 0x14066C53C (PoFxRegisterPrimaryDevice.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C680 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14066CB58 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoFree @ 0x14066CF60 (PopFxPepPerfInfoFree.c)
 *     PopFxVerifyDependencies @ 0x14066D870 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14066DC78 (PopPluginQuerySocSubsystemMetadata.c)
 *     PoUnregisterCoalescingCallback @ 0x14066DFF0 (PoUnregisterCoalescingCallback.c)
 *     PopFreeWakeInfo @ 0x14066E284 (PopFreeWakeInfo.c)
 *     PopFreeWakeSource @ 0x14066E2A4 (PopFreeWakeSource.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14066E51C (PopWakeSourceGetDeviceProperty.c)
 *     PopPepUnregisterDevice @ 0x14066F9A4 (PopPepUnregisterDevice.c)
 *     PopPdcCsDeviceNotification @ 0x14066FFD0 (PopPdcCsDeviceNotification.c)
 *     PopThermalZoneRemove @ 0x140670634 (PopThermalZoneRemove.c)
 *     PopDiagReadLastLogOffEndTime @ 0x140670A94 (PopDiagReadLastLogOffEndTime.c)
 *     PopFxTracePerfRegistration @ 0x1406724D4 (PopFxTracePerfRegistration.c)
 *     PopPolicyDeviceTargetChange @ 0x140672F60 (PopPolicyDeviceTargetChange.c)
 *     PpmWmiIdleAccountingWork @ 0x1406736D0 (PpmWmiIdleAccountingWork.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140673D60 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1406740A8 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x140674384 (PpmEventTraceProcessorIdle.c)
 *     PopBcdRegenerateResumeObject @ 0x1406758B4 (PopBcdRegenerateResumeObject.c)
 *     PpmRegisterSpmSettings @ 0x140675F94 (PpmRegisterSpmSettings.c)
 *     TtmiSessionDeviceListWorker @ 0x1406771AC (TtmiSessionDeviceListWorker.c)
 *     TtmInitCurrentSession @ 0x14067879C (TtmInitCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x14067907C (TtmpDereferenceSessionMaybeLast.c)
 *     TtmDispatchApi @ 0x140679460 (TtmDispatchApi.c)
 *     TtmiCloseEventQueue @ 0x140679EFC (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x14067A0C0 (TtmiRetrieveEventFromQueue.c)
 *     TtmpDeleteQueue @ 0x14067A3B0 (TtmpDeleteQueue.c)
 *     PspDeleteServerSiloGlobals @ 0x14067E868 (PspDeleteServerSiloGlobals.c)
 *     PspCreateSecureThread @ 0x14067F50C (PspCreateSecureThread.c)
 *     PspApplyWorkingSetLimits @ 0x140680338 (PspApplyWorkingSetLimits.c)
 *     PspSetJobIoRateControlForVolume @ 0x1406809FC (PspSetJobIoRateControlForVolume.c)
 *     PsUnregisterSiloMonitor @ 0x140681148 (PsUnregisterSiloMonitor.c)
 *     PspSetMinimalProcessName @ 0x140681BD0 (PspSetMinimalProcessName.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140681CB0 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140681DA8 (PsRemoveLoadImageNotifyRoutine.c)
 *     PspIumVerifyParentSd @ 0x1406823CC (PspIumVerifyParentSd.c)
 *     PspFreeStorage @ 0x1406829B4 (PspFreeStorage.c)
 *     PspLazyInitializeStorageExpansion @ 0x140682A1C (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x140683588 (RawQueryFileSystemInformation.c)
 *     RtlGetAppContainerParent @ 0x140683A6C (RtlGetAppContainerParent.c)
 *     RtlpComputeMergedAcl @ 0x140683FDC (RtlpComputeMergedAcl.c)
 *     RtlAddResourceAttributeAce @ 0x1406847E4 (RtlAddResourceAttributeAce.c)
 *     RtlIdnToUnicode @ 0x1406893D8 (RtlIdnToUnicode.c)
 *     RtlpGetNormalization @ 0x14068C680 (RtlpGetNormalization.c)
 *     NtQuerySecurityPolicy @ 0x14068C778 (NtQuerySecurityPolicy.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D5EC (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14068DBB8 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14068E478 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14068E5F0 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14068E798 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14068E9CC (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068ECE0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EEDC (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14068F110 (SepAdtGenerateDiscardAudit.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14068F3E8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406900F0 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14069037C (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x140690880 (SepQueryTypeString.c)
 *     SeReleaseUnicodeStringStructures @ 0x140690C48 (SeReleaseUnicodeStringStructures.c)
 *     SepCaptureAuditPolicy @ 0x140690C64 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x140690D1C (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x140690F60 (SepCaptureOctetStringArray.c)
 *     SepReleaseAuditPolicy @ 0x140691160 (SepReleaseAuditPolicy.c)
 *     SeExamineSacl @ 0x140691504 (SeExamineSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406918F0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepExamineSaclEx @ 0x140691E34 (SepExamineSaclEx.c)
 *     SepDeleteTokenUserAndGroups @ 0x140692FC4 (SepDeleteTokenUserAndGroups.c)
 *     SepDereferenceSidValuesBlock @ 0x140693044 (SepDereferenceSidValuesBlock.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x140693590 (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140693658 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepRemoveTokenLogonSession @ 0x140693AF8 (SepRemoveTokenLogonSession.c)
 *     NtFilterBootOption @ 0x140693C88 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1406940D0 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406944E0 (SepSecureBootUpdateBcdDataForRule.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x140694880 (SeAdjustObjectAppContainerSecurity.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x140694A10 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140694BB4 (SepBuildObjectSecurityDescriptor.c)
 *     SepLogTokenSidManagement @ 0x140695010 (SepLogTokenSidManagement.c)
 *     SepDeReferenceSharedSidEntries @ 0x1406959D8 (SepDeReferenceSharedSidEntries.c)
 *     SepDeleteClaimAttributes @ 0x140695AE4 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140695B64 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140695E5C (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x14069621C (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x140696574 (SepReadSingleCap.c)
 *     SepRmDestroyCapTable @ 0x14069687C (SepRmDestroyCapTable.c)
 *     SmKmStoreFileCreateForIoType @ 0x14069904C (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileGetExtents @ 0x140699358 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406995DC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     SmKmStoreFileWriteHeader @ 0x1406999B0 (SmKmStoreFileWriteHeader.c)
 *     VmCreateMemoryRange @ 0x14069B3C8 (VmCreateMemoryRange.c)
 *     WdipSemFreePool @ 0x14069BEE0 (WdipSemFreePool.c)
 *     IoWMIExecuteMethod @ 0x14069CAD0 (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x14069CDD4 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x14069CEDC (IoWMISetSingleItem.c)
 *     IoWMISuggestInstanceName @ 0x14069CFF8 (IoWMISuggestInstanceName.c)
 *     WmipGetSysIds @ 0x14069D774 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14069DEEC (WmipDereferenceEvent.c)
 *     WmipQueryAllDataMultiple @ 0x14069E570 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x14069E90C (WmipQuerySingleMultiple.c)
 *     WmipMRCleanup @ 0x14069EE2C (WmipMRCleanup.c)
 *     WmipGenerateBinaryMofNotification @ 0x14069F174 (WmipGenerateBinaryMofNotification.c)
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x14069F7F8 (WmipUpdateModifyGuid.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A089C (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTraceDeniedTokenCreation @ 0x1406A1474 (EtwTraceDeniedTokenCreation.c)
 *     EtwpLogMemInfoWs @ 0x1406A2134 (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406A26C4 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpPerfMemInfoWork @ 0x1406A2980 (EtwpPerfMemInfoWork.c)
 *     EtwpSetPmcProfileSource @ 0x1406A2BB0 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1406A2CC0 (EtwpTraceHandle.c)
 *     EtwDeleteSiloState @ 0x1406A3248 (EtwDeleteSiloState.c)
 *     EtwpCapturePreviousRegistryData @ 0x1406A485C (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1406A495C (EtwpCaptureRegistryData.c)
 *     EtwpRegTraceCallback @ 0x1406A49F4 (EtwpRegTraceCallback.c)
 *     EtwpSendDbgId @ 0x1406A5588 (EtwpSendDbgId.c)
 *     EtwpTiQueryVad @ 0x1406A6514 (EtwpTiQueryVad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406A6654 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpEnumerateWorkingSet @ 0x1406A6F28 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406A72B4 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1406A7548 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1406A76A0 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1406A7BF8 (EtwpProcessorRundown.c)
 *     EtwpFreeEventNameFilter @ 0x1406A9370 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1406A93B8 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1406A9454 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1406A9514 (EtwpUpdateStringFilterData.c)
 *     EtwpAddWinRtProviderToSession @ 0x1406A97F4 (EtwpAddWinRtProviderToSession.c)
 *     EtwpFreeStackCache @ 0x1406A9C7C (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x1406A9D74 (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1406A9FC4 (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1406AA1E4 (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1406AA2CC (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLogger @ 0x1406AA39C (EtwpSavePersistedLogger.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1406AA744 (EtwpSavePersistedLoggersWorker.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1406AB088 (ExEnumerateSystemFirmwareTables.c)
 *     ExpGetDeviceDataInformation @ 0x1406AB380 (ExpGetDeviceDataInformation.c)
 *     ExpQueryChannelInformation @ 0x1406AB888 (ExpQueryChannelInformation.c)
 *     ExpQueryElamCertInfo @ 0x1406ABB78 (ExpQueryElamCertInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1406ABE5C (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406AC090 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1406AC6A8 (ExpStringCapture.c)
 *     ExpStringFree @ 0x1406AC790 (ExpStringFree.c)
 *     ExpWatchLicenseInfoWork @ 0x1406ACB24 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1406ACF94 (NtDisplayString.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406AD484 (ExDereferenceHandleDebugInfo.c)
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AEE8C (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     sub_1406AF170 @ 0x1406AF170 (sub_1406AF170.c)
 *     ExpParseFastCacheHelper @ 0x1406AF734 (ExpParseFastCacheHelper.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1406AFFFC (ExSetFirmwareEnvironmentVariable.c)
 *     ExpConvertArcName @ 0x1406B0088 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1406B023C (ExpConvertSignatureName.c)
 *     ExpCreateOutputARC @ 0x1406B044C (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406B07DC (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1406B0998 (ExpFindArcName.c)
 *     ExpFindDiskSignature @ 0x1406B0C5C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1406B0E3C (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1406B104C (ExpGetPartitionTableInfo.c)
 *     ExpParseEfiPath @ 0x1406B12AC (ExpParseEfiPath.c)
 *     ExpParseSignatureName @ 0x1406B14D4 (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x1406B17F4 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1FAC (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1406B28C4 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1406B2F14 (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x1406B31E0 (ExpTranslateSymbolicLink.c)
 *     NtEnumerateBootEntries @ 0x1406B38C4 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3E64 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4E60 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1406B5188 (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1406B557C (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1406B577C (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406B5AA8 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1406B5D14 (NtTranslateFilePath.c)
 *     ExpDereferenceHost @ 0x1406B6AE8 (ExpDereferenceHost.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x1406B6F30 (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406B7084 (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1406B72F0 (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1406B79F0 (ExpCovReadRequestBuffer.c)
 *     ExpProfileDelete @ 0x1406B81F0 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1406B8374 (NtStartProfile.c)
 *     NtStopProfile @ 0x1406B85CC (NtStopProfile.c)
 *     CMFCheckAccess @ 0x1406B87B8 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B89D4 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1406B8FD8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B96D8 (CMFSystemThreadRoutine.c)
 *     CMFUnmapModules @ 0x1406B9D4C (CMFUnmapModules.c)
 *     sub_1406B9E20 @ 0x1406B9E20 (sub_1406B9E20.c)
 *     WheaAddErrorSource @ 0x1406BA4DC (WheaAddErrorSource.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1406BA890 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1406BB0E0 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1406BB330 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1406BB5FC (WheapPfaMemoryCheck.c)
 *     WheapPfaReset @ 0x1406BB888 (WheapPfaReset.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1406BB950 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapIsSqmLoggerRunning @ 0x1406BBBCC (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406BBE5C (WheapSqmCollectPshedPluginTelemetry.c)
 *     sub_1406BCFBC @ 0x1406BCFBC (sub_1406BCFBC.c)
 *     sub_1406BD5D4 @ 0x1406BD5D4 (sub_1406BD5D4.c)
 *     sub_1406BDC4C @ 0x1406BDC4C (sub_1406BDC4C.c)
 *     sub_1406BE068 @ 0x1406BE068 (sub_1406BE068.c)
 *     sub_1406BEA18 @ 0x1406BEA18 (sub_1406BEA18.c)
 *     sub_1406BF57C @ 0x1406BF57C (sub_1406BF57C.c)
 *     sub_1406BFBA8 @ 0x1406BFBA8 (sub_1406BFBA8.c)
 *     sub_1406C0AE4 @ 0x1406C0AE4 (sub_1406C0AE4.c)
 *     SdbpFreePackageAttributes @ 0x1406C3340 (SdbpFreePackageAttributes.c)
 *     SddlpFreeUuidString @ 0x1406CC510 (SddlpFreeUuidString.c)
 *     SddlpReAlloc @ 0x1406CC528 (SddlpReAlloc.c)
 *     AdtpBuildGuidString @ 0x1406D03E0 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1406D0508 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1406D05C4 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1406D0718 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x1406D086C (AdtpBuildMacStrings.c)
 *     AdtpBuildRegistryValueString @ 0x1406D0B04 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x1406D0DD4 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1406D0E98 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1406D1090 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x1406D15D4 (AdtpAppendString.c)
 *     AdtpBuildObjectTypeStrings @ 0x1406D1C48 (AdtpBuildObjectTypeStrings.c)
 *     BcdEnumerateObjects @ 0x1406D21C0 (BcdEnumerateObjects.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1406D2870 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1406D2944 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x1406D2A04 (BiResolveLocateDevice.c)
 *     BiIsPortableWorkspaceBoot @ 0x1406D2C70 (BiIsPortableWorkspaceBoot.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1406D2CFC (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1406D2E90 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1406D2F88 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1406D3130 (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1406D3270 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x1406D335C (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1406D3518 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1406D365C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1406D373C (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1406D3A0C (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1406D3B60 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x1406D40EC (BiCreateBootEntry.c)
 *     BiCreateEfiEntry @ 0x1406D4448 (BiCreateEfiEntry.c)
 *     BiCreateMergedBootEntry @ 0x1406D45D0 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x1406D4A18 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1406D4BB8 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1406D4F58 (BiFreeIdentifierList.c)
 *     BiGetDeviceFromEfiPath @ 0x1406D4FD4 (BiGetDeviceFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D52C4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x1406D544C (BiGetSavedBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1406D54D0 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1406D5704 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1406D57B4 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x1406D5A34 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1406D5B50 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1406D5E28 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5F9C (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetSystemDisk @ 0x1406D60EC (SiGetSystemDisk.c)
 *     SiGetDriveLayoutInformation @ 0x1406D62C0 (SiGetDriveLayoutInformation.c)
 *     SiDisambiguateSystemDevice @ 0x1406D6500 (SiDisambiguateSystemDevice.c)
 *     SiGetEfiSystemDevice @ 0x1406D65A4 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1406D6900 (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x1406D6BDC (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x1406D6D00 (SiGetBiosSystemPartition.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x1406D6E38 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     _PnpCtxCloseMachine @ 0x1406D6FDC (_PnpCtxCloseMachine.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7C44 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D815C (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1406D8330 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D86D8 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8A6C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x1406D90AC (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1406D9468 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9D7C (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x1406D9F40 (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406DA23C (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1406DA694 (_CmGetDevicesInBaseContainerList.c)
 *     _CmMoveBaseContainer @ 0x1406DA8E8 (_CmMoveBaseContainer.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x1406DBA58 (_CmGetMatchingFilteredDeviceListWorker.c)
 *     _CmServiceFilterCallback @ 0x1406DBBF8 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceSiblings @ 0x1406DD964 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406DDDA0 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _SysCtxCloseMachine @ 0x1406DFA24 (_SysCtxCloseMachine.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DFAD0 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFDA4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _PnpMultiSzDeleteString @ 0x1406E0168 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0260 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x1406E0808 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0D84 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1C00 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E2108 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2E0C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x1406E3704 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3790 (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x1406E4D54 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x1406E5088 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1406E53F4 (ArbRetestAllocation.c)
 *     MIDL_user_free @ 0x1406E55E8 (MIDL_user_free.c)
 *     VhdiVerifyBootDisk @ 0x1406E55F4 (VhdiVerifyBootDisk.c)
 *     NtEnableLastKnownGood @ 0x1406E5864 (NtEnableLastKnownGood.c)
 *     ObpGetSilosRootDirectory @ 0x1406E64D8 (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1406E669C (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1406E69C4 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1406E7230 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegResizeStringPool @ 0x1406E7500 (RtlpMuiRegResizeStringPool.c)
 *     KdPullRemoteFile @ 0x1406F2000 (KdPullRemoteFile.c)
 *     ViThunkFreeSharedThunksArray @ 0x1406FE100 (ViThunkFreeSharedThunksArray.c)
 *     VfDriverUnloadImage @ 0x1406FE170 (VfDriverUnloadImage.c)
 *     IovUnloadDrivers @ 0x140701070 (IovUnloadDrivers.c)
 *     IovpBuildDriverObjectList @ 0x140701188 (IovpBuildDriverObjectList.c)
 *     VerifierExFreePool @ 0x140702400 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140702420 (VerifierExFreePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x140702898 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140702A38 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407030E0 (ViInitializeLocalSystemDescriptor.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C74 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoDisconnectInterrupt @ 0x1407055BC (VerifierIoDisconnectInterrupt.c)
 *     VerifierIoDisconnectInterruptEx @ 0x1407055F0 (VerifierIoDisconnectInterruptEx.c)
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 *     ViHalFreeDomainCommonBuffer @ 0x140709A4C (ViHalFreeDomainCommonBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14070A27C (ViReleaseDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14070A40C (ViSpecialAllocateCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14070A554 (ViSpecialFreeCommonBuffer.c)
 *     VfIoFreeIrp @ 0x14070BC98 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x14070C14C (ViIrpAllocateLockedPacket.c)
 *     ViPendingCompleteAfterWait @ 0x14070D2B4 (ViPendingCompleteAfterWait.c)
 *     ViPendingDelayCompletion @ 0x14070D3E0 (ViPendingDelayCompletion.c)
 *     VfInitializeBranchTracing @ 0x14070ED1C (VfInitializeBranchTracing.c)
 *     VfThunkApplyDriverAddedThunks @ 0x14070F3E8 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkRemoveImportEntry @ 0x14070FAA0 (ViThunkRemoveImportEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x14070FB94 (ViThunkReplaceAllThunkedImports.c)
 *     VfTargetDriversEnableVerifier @ 0x14070FEB0 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x14071005C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140710144 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140710660 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x140710A0C (VfPoolCheckForLeaks.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140710B60 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViCreateProcessCallbackInternal @ 0x140711044 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140711268 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140711364 (ViFaultsAddTagNoDuplicates.c)
 *     ViFaultsRemoveAllApps @ 0x1407116C0 (ViFaultsRemoveAllApps.c)
 *     ViFaultsRemoveAllTags @ 0x140711730 (ViFaultsRemoveAllTags.c)
 *     VfKeCheckForChanges @ 0x140712BB0 (VfKeCheckForChanges.c)
 *     VfDeadlockInitialize @ 0x140713DF4 (VfDeadlockInitialize.c)
 *     VfSuspectDriversRemove @ 0x140716490 (VfSuspectDriversRemove.c)
 *     ViPacketNotificationCallback @ 0x140717A78 (ViPacketNotificationCallback.c)
 *     VfPnpTestStartedPdoStack @ 0x1407186C0 (VfPnpTestStartedPdoStack.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x140719390 (VfIrpLogDeleteDeviceLogs.c)
 *     VfIrpLogRetrieveWmiData @ 0x140719644 (VfIrpLogRetrieveWmiData.c)
 *     VfIrpLogUnlockDatabase @ 0x140719924 (VfIrpLogUnlockDatabase.c)
 *     ViIrpLogExposeWmiCallback @ 0x140719A08 (ViIrpLogExposeWmiCallback.c)
 *     VfCtxHookAndConnectInterrupt @ 0x140719A74 (VfCtxHookAndConnectInterrupt.c)
 *     VfCtxHookAndConnectInterruptEx @ 0x140719B50 (VfCtxHookAndConnectInterruptEx.c)
 *     ViRtlReplaceStringBuffer @ 0x14071B59C (ViRtlReplaceStringBuffer.c)
 *     VerifierIoWMIWriteEvent @ 0x14071D0D8 (VerifierIoWMIWriteEvent.c)
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 *     VfGetVerifierInformation @ 0x140720F40 (VfGetVerifierInformation.c)
 *     HdlspAddLogEntry @ 0x140722ADC (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x140723F74 (HdlspSetBlueScreenInformation.c)
 *     ResFwFreeContext @ 0x140725050 (ResFwFreeContext.c)
 *     ResFwBackgroundTransition @ 0x140725ACC (ResFwBackgroundTransition.c)
 *     ResFwpPageOutBackground @ 0x140727A6C (ResFwpPageOutBackground.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x14079232C (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x140795FD0 (PopNetInitialize.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x1407985F0 (IopCreateArcNamesDisk.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x14079890C (PipInitializeEarlyLaunchDrivers.c)
 *     PipInitDeviceOverrideCache @ 0x1407990C4 (PipInitDeviceOverrideCache.c)
 *     PipHardwareConfigInit @ 0x14079930C (PipHardwareConfigInit.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x14079A240 (PipCreateComputerId.c)
 *     PnpLoadBootFilterDriver @ 0x14079A54C (PnpLoadBootFilterDriver.c)
 *     IopStoreArcInformation @ 0x14079A6CC (IopStoreArcInformation.c)
 *     PipCheckSystemFirmwareUpdated @ 0x14079A898 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitializeCoreDriversByGroup @ 0x14079AB28 (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x14079AE5C (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x14079B090 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x14079C094 (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x14079C1A4 (PipCheckDependencies.c)
 *     WmipInitializeSecurity @ 0x14079C7B4 (WmipInitializeSecurity.c)
 *     IopInitializePlugPlayServices @ 0x14079CCD4 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x14079DA0C (PpInitializeBootDDB.c)
 *     CcInitializeCacheManager @ 0x14079FAB0 (CcInitializeCacheManager.c)
 *     MiSystemPartitionObjectCreate @ 0x1407A13BC (MiSystemPartitionObjectCreate.c)
 *     MiSectionInitialization @ 0x1407A1524 (MiSectionInitialization.c)
 *     DbgkpCreateNotificationEvent @ 0x1407A1950 (DbgkpCreateNotificationEvent.c)
 *     ExpKeyedEventInitialization @ 0x1407A1B44 (ExpKeyedEventInitialization.c)
 *     StartFirstUserProcess @ 0x1407A263C (StartFirstUserProcess.c)
 *     QueryRegistryHideMachine @ 0x1407A2A78 (QueryRegistryHideMachine.c)
 *     SeMakeSystemToken @ 0x1407A2B10 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407A3058 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407A328C (SeMakeAnonymousLogonToken.c)
 *     BuildKnownDlls @ 0x1407A34E0 (BuildKnownDlls.c)
 *     MmInitSystem @ 0x1407A39F8 (MmInitSystem.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407A40B4 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiCreateMemoryEvent @ 0x1407A45F0 (MiCreateMemoryEvent.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 *     EmpParseInfDatabase @ 0x1407A7384 (EmpParseInfDatabase.c)
 *     CmpFreeSectionList @ 0x1407A7478 (CmpFreeSectionList.c)
 *     CmpFreeLineList @ 0x1407A74CC (CmpFreeLineList.c)
 *     EmpParseEntryTypes @ 0x1407A771C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1407A7874 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x1407A7A90 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x1407A7BE4 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1407A8094 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1407A83F0 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1407A8604 (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1407A8814 (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPop @ 0x1407A8DC0 (EmpRuleParserStackPop.c)
 *     BootApplicationPersistentDataProcess @ 0x1407A92C0 (BootApplicationPersistentDataProcess.c)
 *     BapdpProcessEDrvHintInfo @ 0x1407A9388 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1407A9410 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x1407A9498 (BapdpProcessHSTIResults.c)
 *     BapdpProcessWmdResults @ 0x1407A9520 (BapdpProcessWmdResults.c)
 *     BapdpProcessResumeInformation @ 0x1407A9604 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1407A96D0 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSiData @ 0x1407A979C (BapdpProcessSiData.c)
 *     ExpWatchProductTypeInitialization @ 0x1407A9F80 (ExpWatchProductTypeInitialization.c)
 *     IopAllocateLegacyBootResources @ 0x1407AB328 (IopAllocateLegacyBootResources.c)
 *     MmInitializeMemoryLimits @ 0x1407AB404 (MmInitializeMemoryLimits.c)
 *     IoReportHalResourceUsage @ 0x1407AB540 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x1407AB6F0 (IopInitializeResourceMap.c)
 *     IopReportBootResources @ 0x1407ABA34 (IopReportBootResources.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407AC64C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407AD088 (CmpSetVideoBiosInformation.c)
 *     CmpGetRegistryValue @ 0x1407AD7C0 (CmpGetRegistryValue.c)
 *     CmpInitializeSystemHive @ 0x1407AD830 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     CmpInitializePreloadedHives @ 0x1407AE130 (CmpInitializePreloadedHives.c)
 *     CmpInitializePreloadedHive @ 0x1407AE20C (CmpInitializePreloadedHive.c)
 *     CmpCreateRegistryRoot @ 0x1407AE4D4 (CmpCreateRegistryRoot.c)
 *     CmpParseInfBuffer @ 0x1407AEC04 (CmpParseInfBuffer.c)
 *     CmpFindTagIndex @ 0x1407AFCE0 (CmpFindTagIndex.c)
 *     MiBuildImportsForBootDrivers @ 0x1407B132C (MiBuildImportsForBootDrivers.c)
 *     PoFxRegisterDebugger @ 0x1407B21AC (PoFxRegisterDebugger.c)
 *     PiInitCacheGroupInformation @ 0x1407B25EC (PiInitCacheGroupInformation.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1407B2E80 (SepInitializeSingletonAttributesStructures.c)
 *     PiAuFreeUserSids @ 0x1407B3374 (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407B33F4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407B375C (PiAuCreateStandardSecurityObject.c)
 *     WheapInitializeErrorSourceTable @ 0x1407B4128 (WheapInitializeErrorSourceTable.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1407B6BB0 (FsRtlGetCompatibilityModeValue.c)
 *     BootApplicationPersistentDataInitialize @ 0x1407B7218 (BootApplicationPersistentDataInitialize.c)
 *     PipFreeGroupTree @ 0x1407B7D14 (PipFreeGroupTree.c)
 *     SepLoadNgenLocations @ 0x1407B7D5C (SepLoadNgenLocations.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1407B8F80 (IopCallBootDriverReinitializationRoutines.c)
 *     PiLastGoodCopyKeyContents @ 0x1407B90B4 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x1407B9164 (IopFileUtilRename.c)
 *     PopUmpoInitializeChannel @ 0x1407B93C4 (PopUmpoInitializeChannel.c)
 *     SeSecureBootRegisterPolicy @ 0x1407B9CA8 (SeSecureBootRegisterPolicy.c)
 *     PopInitPlatformSettings @ 0x1407BAB80 (PopInitPlatformSettings.c)
 *     ObpInitStackTrace @ 0x1407BAD00 (ObpInitStackTrace.c)
 *     SaveNodeDistanceInformation @ 0x1407BC5F4 (SaveNodeDistanceInformation.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1407BCD18 (IopQueryDeviceResetRegistrySettings.c)
 *     HeadlessInit @ 0x1407BD2D8 (HeadlessInit.c)
 *     CreateMiniNtBootKey @ 0x1407CCE70 (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x1407CD76C (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407CE99C (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x1407CEE78 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407CEF34 (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x1407CF6C0 (PipProcessPendingObjects.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x1407CF920 (IopFileUtilWalkDirectoryTreeTopDown.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 *     VhdiInitializeBootDisk @ 0x1407D2AF4 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1407D32D0 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x1407D36AC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407D3884 (SbpStartLanman.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiFreePoolPages @ 0x1400180D8 (MiFreePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     ObpDeferObjectDeletion @ 0x1400A652C (ObpDeferObjectDeletion.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400AC874 (ExpRemovePoolTrackerExpansion.c)
 *     PspReturnResourceQuota @ 0x1400C46E0 (PspReturnResourceQuota.c)
 *     MmIsSpecialPoolAddress @ 0x1400E90BC (MmIsSpecialPoolAddress.c)
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x1401673B0 (RtlpInterlockedPushEntrySList.c)
 *     KeCheckForTimer @ 0x1401D346C (KeCheckForTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MmFreeSpecialPool @ 0x1401EBED0 (MmFreeSpecialPool.c)
 *     MmQuerySpecialPoolBlockSize @ 0x1401EC464 (MmQuerySpecialPoolBlockSize.c)
 *     MmQuerySpecialPoolBlockType @ 0x1401EC48C (MmQuerySpecialPoolBlockType.c)
 *     VerifierFreeTrackedPool @ 0x1401EEC54 (VerifierFreeTrackedPool.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     ObpPushStackInfo @ 0x1401FEBEC (ObpPushStackInfo.c)
 *     ExpFreePoolChecks @ 0x14022CEAC (ExpFreePoolChecks.c)
 *     ExpCheckForResource @ 0x14022D9F4 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14022E358 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14022E6D0 (ExpCheckForWorker.c)
 *     ExDeferredFreePool @ 0x1402557B0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14041ADE0 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x140710998 (VfFreePoolNotification.c)
 */

void __stdcall ExFreePoolWithTag(PVOID P, ULONG Tag)
{
  __int64 v2; // r8
  __int64 v3; // r9
  unsigned __int64 BugCheckParameter4; // r14
  __int64 v5; // rcx
  unsigned int v6; // esi
  __int16 v7; // bp
  ULONG_PTR v8; // rdi
  int v9; // r15d
  unsigned int v10; // r13d
  char v11; // al
  __int64 v12; // rbx
  _WORD *v13; // rdx
  __int64 v14; // r8
  ULONG_PTR v15; // r10
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  unsigned __int64 v18; // r12
  __int64 v19; // rax
  int v20; // r14d
  int v21; // r8d
  __int64 v22; // r10
  unsigned int v23; // eax
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // esi
  unsigned __int8 CurrentIrql; // al
  _QWORD *v28; // rdx
  unsigned __int64 v29; // rax
  _DWORD *v30; // r9
  unsigned __int64 v31; // r8
  unsigned int v32; // ecx
  __int64 v33; // rax
  int v34; // edx
  unsigned __int64 v35; // rax
  _DWORD *v36; // rbp
  int v37; // r8d
  _GENERAL_LOOKASIDE_POOL *PPPagedLookasideList; // rcx
  __int64 v39; // rax
  char *v40; // rcx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // r9
  struct _KPRCB *CurrentPrcb; // rdx
  _DWORD *v45; // rbx
  unsigned int v46; // eax
  signed __int64 v47; // rax
  signed __int64 v48; // rcx
  char v49; // cl
  struct _KPROCESS *v50; // rbx
  ULONG_PTR v51; // rbp
  char *v52; // r11
  ULONG_PTR v53; // r10
  ULONG_PTR v54; // r12
  ULONG_PTR v55; // r13
  char v56; // r9
  unsigned __int64 *v57; // r15
  unsigned __int64 v58; // r14
  unsigned __int64 v59; // r8
  char *v60; // rdx
  unsigned __int64 v61; // r9
  ULONG_PTR v62; // rcx
  unsigned __int64 v63; // r8
  signed __int64 v64; // rdx
  bool v65; // zf
  signed __int64 v66; // rax
  signed __int64 v67; // rax
  bool v68; // cc
  signed __int64 v69; // rax
  unsigned int *v70; // r8
  unsigned int v71; // r10d
  int v72; // r11d
  __int64 v73; // rcx
  __int64 v74; // rdx
  __int64 v75; // r8
  struct _FAST_MUTEX *v76; // rcx
  _WORD *v77; // r8
  __int64 v78; // rdx
  _QWORD *v79; // rcx
  ULONG_PTR v80; // rcx
  int v81; // ecx
  _BYTE *v82; // rax
  _QWORD *v83; // rdi
  _DWORD *v84; // rcx
  __int64 v85; // rax
  __int16 SpecialPoolBlockType; // si
  unsigned __int64 SpecialPoolBlockSize; // rax
  __int64 v88; // r8
  __int64 v89; // rdi
  __int64 v90; // rbx
  int v91; // r9d
  __int64 v92; // r10
  unsigned int v93; // edx
  __int64 v94; // r11
  int v95; // eax
  int v96; // ecx
  unsigned __int64 v97; // rbx
  __int64 v98; // rax
  int v99; // edx
  __int64 v100; // r8
  __int64 v101; // rdx
  unsigned __int64 v102; // rax
  __int64 v103; // r8
  _QWORD *v104; // rdx
  char v105; // al
  signed __int32 v106[8]; // [rsp+0h] [rbp-D8h] BYREF
  _DWORD *v107; // [rsp+30h] [rbp-A8h]
  int v108; // [rsp+38h] [rbp-A0h]
  int v109; // [rsp+3Ch] [rbp-9Ch]
  int v110; // [rsp+40h] [rbp-98h] BYREF
  __int64 v111; // [rsp+48h] [rbp-90h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-88h] BYREF
  char *v113; // [rsp+68h] [rbp-70h]
  _WORD *v114; // [rsp+70h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE v115; // [rsp+80h] [rbp-58h] BYREF
  _SLIST_ENTRY *ListEntry; // [rsp+E0h] [rbp+8h]
  char v117; // [rsp+F0h] [rbp+18h]
  unsigned int v118; // [rsp+F8h] [rbp+20h]

  ListEntry = (_SLIST_ENTRY *)P;
  BugCheckParameter4 = (unsigned __int64)P;
  if ( !ExpSpecialAllocations || (unsigned int)MmIsSpecialPoolAddress((unsigned __int64)P) != 1 )
  {
    v5 = 1LL;
    v6 = 1;
    if ( (BugCheckParameter4 & 0xFFF) != 0 )
    {
      v7 = *(unsigned __int8 *)(BugCheckParameter4 - 13);
      v8 = BugCheckParameter4 - 16;
      v9 = v7 & 1;
      v10 = (unsigned __int8)*(_WORD *)(BugCheckParameter4 - 16 + 2);
      v118 = v10;
      v108 = v9;
      if ( (v7 & 2) == 0 )
        KeBugCheckEx(0xC2u, 7uLL, *(unsigned int *)(v8 + 4), *(unsigned int *)v8, BugCheckParameter4);
      v11 = ExpPoolFlags;
      if ( (ExpPoolFlags & 0x217) != 0 )
      {
        if ( (ExpPoolFlags & 0x200) != 0 && (v7 & 1) == 0 )
        {
          ExpCheckForLookaside(BugCheckParameter4 - 16, 16LL * v10);
          v11 = ExpPoolFlags;
        }
        if ( (v11 & 1) != 0 )
        {
          KeCheckForTimer(BugCheckParameter4 - 16, 16LL * v10);
          v11 = ExpPoolFlags;
        }
        if ( (v11 & 4) != 0 )
        {
          ExpCheckForResource((__int64 *)(BugCheckParameter4 - 16), 16LL * v10);
          v11 = ExpPoolFlags;
        }
        if ( (v11 & 2) != 0 )
        {
          ExpCheckForWorker(BugCheckParameter4 - 16, 16LL * v10);
          v11 = ExpPoolFlags;
        }
        if ( (v11 & 0x10) != 0 )
          VfFreePoolNotification(BugCheckParameter4 - 16, 16LL * v10, v2, v3);
      }
      if ( (v7 & 0x40) != 0 )
        VerifierFreeTrackedPool(BugCheckParameter4, 16 * v10);
      if ( (v7 & 4) != 0 )
      {
        v70 = (unsigned int *)(v8 - 16LL * (unsigned __int8)*(_WORD *)v8);
        if ( (*((_BYTE *)v70 + 3) & 2) == 0 )
          KeBugCheckEx(0xC2u, 0xBuLL, (ULONG_PTR)v70, *v70, BugCheckParameter4);
        v71 = (ExpCacheLineSize - 1) & (-16 - (_DWORD)v70);
        if ( !v71
          || (unsigned int *)((char *)v70 + v71) != (unsigned int *)v8
          || (v10 = (unsigned __int8)*((_WORD *)v70 + 1),
              v5 = (unsigned __int8)*(_WORD *)(v8 + 2),
              v118 = v10,
              v10 != (_DWORD)v5 + (unsigned __int8)*(_WORD *)v8) )
        {
          KeBugCheckEx(0xC2u, 0x10uLL, (ULONG_PTR)v70, *v70, (ULONG_PTR)v70 + v71);
        }
        if ( (unsigned __int8)*(_WORD *)v8 > 1u )
        {
          v5 = v8 ^ ExpPoolQuotaCookie;
          if ( (v8 ^ ExpPoolQuotaCookie) != *((_QWORD *)v70 + 2) )
            KeBugCheckEx(0xC2u, 0x11uLL, (ULONG_PTR)v70, *v70, v8 ^ ExpPoolQuotaCookie);
        }
        BugCheckParameter4 = (unsigned __int64)(v70 + 4);
        v8 -= 16LL * (unsigned __int8)*(_WORD *)v8;
        ListEntry = (_SLIST_ENTRY *)(v70 + 4);
      }
      *(_BYTE *)(v8 + 3) |= 4u;
      _InterlockedOr(v106, 0);
      *(_BYTE *)(v8 + 3) &= ~2u;
      v12 = *(unsigned int *)(v8 + 4);
      v13 = (_WORD *)(v8 + 16LL * v10);
      v110 = *(_DWORD *)(v8 + 4);
      v14 = v10;
      v114 = v13;
      if ( ((unsigned __int16)v13 & 0xFFF) != 0 )
      {
        v5 = (unsigned __int8)*v13;
        if ( v10 != (_DWORD)v5 )
          KeBugCheckEx(0x19u, 0x20uLL, v8, v8 + 16LL * v10, *(unsigned int *)v8);
      }
      v15 = *(unsigned __int8 *)(v8 + 1);
      v16 = 0x140000000uLL;
      v107 = (_DWORD *)PoolVector[v7 & 1];
      if ( (v7 & 1) != 0 )
      {
        if ( (v7 & 0x20) != 0 )
        {
          v17 = MiSessionPoolVector(v5, 0x140000000uLL);
        }
        else
        {
          v17 = ExpPagedPoolDescriptor[v15];
          v6 = ExpNumberOfPagedPools + 1;
        }
        v107 = (_DWORD *)v17;
      }
      else
      {
        if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
        {
          v6 = ExpNumberOfNonPagedPools;
          v107 = (_DWORD *)ExpNonPagedPoolDescriptor[v15];
        }
        v42 = MI_READ_PTE_LOCK_FREE(((v8 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
        if ( (v42 & 0x80u) == 0LL )
          v42 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v14 = v10;
        v16 = 0x140000000uLL;
        if ( v42 >= 0 )
          v107 = (_DWORD *)(v43 + 4416);
      }
      if ( (unsigned int)v15 >= v6 )
        KeBugCheckEx(0x19u, 0x25uLL, v15, v6, v8);
      v18 = 16 * v14;
      v111 = 16 * v14;
      if ( (_DWORD)v12 == PoolHitTag )
        __debugbreak();
      v19 = DWORD1(PerfGlobalGroupMask);
      if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      {
        EtwTracePool(0xE22u, v7, v12, BugCheckParameter4, 16 * v14);
        v16 = 0x140000000uLL;
      }
      v20 = v7 & 0x20;
      v109 = v20;
      if ( (v7 & 0x20) != 0 )
      {
        v22 = ExpSessionPoolTrackTable;
        v21 = ExpSessionPoolTrackTableMask;
      }
      else
      {
        LODWORD(v19) = KeGetPcr()->Prcb.Number;
        v21 = PoolTrackTableMask;
        v22 = *(_QWORD *)(v16 + 8 * v19 + 3127040);
      }
      v23 = v21 & (((unsigned __int64)(40543 * v12) >> 32) ^ (40543 * v12));
      do
      {
        while ( 1 )
        {
          v24 = 40LL * v23;
          v25 = *(_DWORD *)(v24 + v22);
          if ( v25 == (_DWORD)v12 )
          {
            v35 = -(__int64)v18;
            if ( (v7 & 1) != 0 )
            {
              _InterlockedIncrement((volatile signed __int32 *)(v24 + v22 + 28));
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + v22 + 32), v35);
            }
            else
            {
              _InterlockedIncrement((volatile signed __int32 *)(v24 + v22 + 8));
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v24 + v22 + 16), v35);
            }
            v26 = 0;
            goto LABEL_39;
          }
          if ( v25 )
            break;
          if ( (v7 & 0x20) != 0 )
            break;
          v72 = *(_DWORD *)(v24 + PoolTrackTable);
          if ( !v72 )
            break;
          *(_DWORD *)(v24 + v22) = v72;
        }
        v23 = v21 & (v23 + 1);
      }
      while ( v23 != (v21 & (((unsigned __int64)(40543 * v12) >> 32) ^ (unsigned int)(40543 * v12))) );
      v26 = 0;
      LockHandle.LockQueue.Lock = &ExpTaggedPoolLock;
      LockHandle.LockQueue.Next = 0LL;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      LockHandle.OldIrql = CurrentIrql;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)&ExpTaggedPoolLock);
      }
      else
      {
        v28 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&ExpTaggedPoolLock, (__int64)&LockHandle);
        if ( v28 )
          KxWaitForLockOwnerShip((__int64)&LockHandle, v28);
      }
      if ( (v7 & 0x20) != 0 )
      {
        v29 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2];
        v30 = *(_DWORD **)(v29 + 8056);
        v31 = *(_QWORD *)(v29 + 8064);
      }
      else
      {
        v31 = PoolTrackTableExpansionSize;
        v30 = PoolTrackTableExpansion;
      }
      v32 = 0;
      if ( v31 )
      {
        v33 = 0LL;
        while ( 1 )
        {
          v34 = v30[10 * v33];
          if ( v34 == (_DWORD)v12 )
            break;
          if ( v34 )
          {
            v33 = ++v32;
            if ( v32 < v31 )
              continue;
          }
          goto LABEL_194;
        }
        v73 = 5LL * v32;
        if ( (v7 & 1) != 0 )
        {
          ++v30[2 * v73 + 7];
          *(_QWORD *)&v30[2 * v73 + 8] -= v18;
        }
        else
        {
          ++v30[2 * v73 + 2];
          *(_QWORD *)&v30[2 * v73 + 4] -= v18;
        }
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      else
      {
LABEL_194:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        if ( (v7 & 0x20) != 0 )
        {
          v100 = ExpSessionPoolTrackTable;
          v99 = ExpSessionPoolTrackTableSize;
        }
        else
        {
          LODWORD(v98) = KeGetPcr()->Prcb.Number;
          v99 = PoolTrackTableSize;
          v100 = (__int64)*(&ExPoolTagTables + v98);
        }
        v101 = (unsigned int)(v99 - 1);
        v102 = -(__int64)v18;
        if ( (v7 & 1) != 0 )
        {
          _InterlockedIncrement((volatile signed __int32 *)(v100 + 40 * v101 + 28));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v100 + 40 * v101 + 32), v102);
        }
        else
        {
          _InterlockedIncrement((volatile signed __int32 *)(v100 + 40 * v101 + 8));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v100 + 40 * v101 + 16), v102);
        }
      }
LABEL_39:
      if ( (v7 & 8) != 0 )
      {
        v49 = *(_BYTE *)(v8 + 3);
        if ( (v49 & 8) != 0 )
        {
          v50 = (struct _KPROCESS *)(v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8));
          if ( v50 )
          {
            if ( (unsigned __int64)v50 < 0xFFFF800000000000uLL || (v50->Header.Type & 0x7F) != 3 )
              KeBugCheckEx(
                0xC2u,
                0xDuLL,
                v8 + 16,
                *(unsigned int *)(v8 + 4),
                v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8));
            v51 = 16LL * (unsigned __int8)*(_WORD *)(v8 + 2);
            if ( v50 != PsInitialSystemProcess )
            {
              v52 = *(char **)((v8 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v8 + 8)) + 0x410);
              v113 = v52;
              v53 = (v49 & 1) == 1;
              v54 = v53;
              v55 = v53 << 7;
              v56 = PspResourceFlags[8 * v53];
              v117 = v56;
              v57 = (unsigned __int64 *)&v52[128 * v53];
              _m_prefetchw(v57);
              v58 = *v57;
              v59 = v57[8];
              if ( v57[10] )
              {
                v60 = (char *)&PspQuotaExpansionDescriptors + 56 * (int)v53;
                if ( v59 > v58 )
                {
                  v61 = *((_QWORD *)v60 + 1);
                  if ( v59 - v58 > v61 )
                  {
                    if ( v61 > v51 )
                      v61 = v51;
                    if ( v59 == _InterlockedCompareExchange64((volatile signed __int64 *)v57 + 8, v59 - v61, v59)
                      && _InterlockedExchangeAdd64((volatile signed __int64 *)v57 + 9, v61) + v61 > *((_QWORD *)v60 + 1) )
                    {
                      v75 = _InterlockedExchange64((volatile __int64 *)v57 + 9, 0LL);
                      if ( v75 )
                      {
                        PspReturnResourceQuota(v53, (__int64)&v52[v55], v75, 0);
                        v52 = v113;
                      }
                    }
                  }
                  v56 = v117;
                }
              }
              v62 = v51;
              while ( 1 )
              {
                do
                {
                  if ( v62 >= v58 )
                  {
                    v63 = v58;
                    v64 = 0LL;
                  }
                  else
                  {
                    v63 = v62;
                    v64 = v58 - v62;
                  }
                  v66 = _InterlockedCompareExchange64((volatile signed __int64 *)v57, v64, v58);
                  v65 = v58 == v66;
                  v58 = v66;
                }
                while ( !v65 );
                v62 -= v63;
                if ( !v62 )
                  break;
                if ( v52 == (char *)&PspSystemQuotaBlock )
                  KeBugCheckEx(0x21u, (ULONG_PTR)v50, v54, v51, v62);
                v52 = (char *)&PspSystemQuotaBlock;
                v57 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v55);
                _m_prefetchw((char *)&PspSystemQuotaBlock + v55);
                v58 = *(_QWORD *)((char *)&PspSystemQuotaBlock + v55);
              }
              v9 = v108;
              v10 = v118;
              v20 = v109;
              if ( (v56 & 4) != 0 )
                _InterlockedExchangeAdd64((volatile signed __int64 *)&v50[1].ThreadListHead.Blink + v54, -(__int64)v51);
              v18 = v111;
            }
            if ( ObpTraceFlags )
              ObpPushStackInfo((__int64)&v50[-1].Spare2[52], 0, 1u, *(_DWORD *)(v8 + 4));
            v67 = _InterlockedExchangeAdd64((volatile signed __int64 *)&v50[-1].Spare2[52], 0xFFFFFFFFFFFFFFFFuLL);
            v68 = v67 <= 1;
            v69 = v67 - 1;
            if ( v68 )
            {
              if ( *(_QWORD *)&v50[-1].Spare2[60] )
                KeBugCheckEx(
                  0x18u,
                  ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ LOBYTE(v50[-1].UserDirectoryTableBase) ^ (unsigned __int64)(unsigned __int8)((unsigned __int16)((_WORD)v50 - 48) >> 8)],
                  (ULONG_PTR)v50,
                  3uLL,
                  *(_QWORD *)&v50[-1].Spare2[60]);
              if ( v69 < 0 )
                KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v50, 4uLL, v69);
              ObpDeferObjectDeletion((signed __int64)&v50[-1].Spare2[52]);
            }
          }
        }
      }
      if ( v20 && v9 == 1 )
      {
        v36 = v107;
        if ( v10 > ExpSessionPoolSmallLists )
          goto LABEL_60;
        PPPagedLookasideList = (_GENERAL_LOOKASIDE_POOL *)((unsigned __int64)v10 << 7);
        v39 = ExpSessionPoolLookaside - 128;
      }
      else
      {
        v36 = v107;
        if ( v10 > 0x20 )
          goto LABEL_60;
        if ( v9 == 1 )
        {
          v37 = v107[48];
          if ( !v37
            || (unsigned __int16)KeNumberNodes > 1u && KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] != v37 - 1 )
          {
            goto LABEL_60;
          }
          PPPagedLookasideList = KeGetCurrentPrcb()->PPPagedLookasideList;
        }
        else
        {
          if ( (unsigned __int16)KeNumberNodes > 1u && KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] != v107[48] )
            goto LABEL_60;
          CurrentPrcb = KeGetCurrentPrcb();
          if ( v107[49] == 512 )
            PPPagedLookasideList = CurrentPrcb->PPNxPagedLookasideList;
          else
            PPPagedLookasideList = CurrentPrcb->PPNPagedLookasideList;
        }
        v39 = 96LL * (v10 - 1);
      }
      v40 = (char *)PPPagedLookasideList + v39;
      if ( v40 )
      {
        ++*((_DWORD *)v40 + 7);
        if ( *(_WORD *)v40 < *((_WORD *)v40 + 8) )
        {
          v41 = ExpPoolQuotaCookie;
          ++*((_DWORD *)v40 + 8);
          *(_QWORD *)(v8 + 8) = v8 ^ v41;
          RtlpInterlockedPushEntrySList((PSLIST_HEADER)v40, ListEntry);
          return;
        }
      }
LABEL_60:
      if ( (ExpPoolFlags & 0x100) == 0 )
      {
        _InterlockedIncrement(v36 + 32);
        _InterlockedExchangeAdd64((volatile signed __int64 *)v36 + 19, v18);
        v76 = (struct _FAST_MUTEX *)(v36 + 2);
        if ( v9 )
        {
          ExAcquireFastMutex(v76);
          PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v76, &v115);
        }
        v77 = v114;
        if ( ((unsigned __int16)v114 & 0xFFF) != 0 && !*((_BYTE *)v114 + 3) )
        {
          v26 = 1;
          if ( *((_BYTE *)v114 + 2) != 1 )
          {
            v78 = *((_QWORD *)v114 + 2);
            v79 = (_QWORD *)*((_QWORD *)v114 + 3);
            if ( *(_WORD **)(v78 + 8) != v114 + 8 || (_WORD *)*v79 != v114 + 8 )
              __fastfail(3u);
            *v79 = v78;
            *(_QWORD *)(v78 + 8) = v79;
          }
          *(_BYTE *)(v8 + 2) += *((_BYTE *)v77 + 2);
        }
        if ( (unsigned __int8)*(_WORD *)v8 )
        {
          v80 = v8 - 16LL * (unsigned __int8)*(_WORD *)v8;
          if ( !*(_BYTE *)(v80 + 3) )
          {
            v26 = 1;
            if ( *(_BYTE *)(v80 + 2) != 1 )
            {
              v103 = *(_QWORD *)(v80 + 16);
              v104 = *(_QWORD **)(v80 + 24);
              if ( *(_QWORD *)(v103 + 8) != v80 + 16 || *v104 != v80 + 16 )
                __fastfail(3u);
              *v104 = v103;
              *(_QWORD *)(v103 + 8) = v104;
            }
            v105 = *(_BYTE *)(v8 + 2);
            v8 = v80;
            *(_BYTE *)(v80 + 2) += v105;
          }
        }
        if ( (v8 & 0xFFF) != 0 || (((_WORD)v8 + 16 * (unsigned __int8)*(_WORD *)(v8 + 2)) & 0xFFF) != 0 )
        {
          *(_BYTE *)(v8 + 3) = 0;
          v81 = (unsigned __int8)*(_WORD *)(v8 + 2);
          if ( v26 )
          {
            v82 = (_BYTE *)(v8 + 16LL * (unsigned __int8)*(_WORD *)(v8 + 2));
            if ( ((unsigned __int16)v82 & 0xFFF) != 0 )
              *v82 = v81;
          }
          v83 = (_QWORD *)(v8 + 16);
          v84 = &v36[4 * (v81 - 1) + 80];
          v85 = *(_QWORD *)v84;
          if ( *(_DWORD **)(*(_QWORD *)v84 + 8LL) != v84 )
            __fastfail(3u);
          *v83 = v85;
          v83[1] = v84;
          *(_QWORD *)(v85 + 8) = v83;
          *(_QWORD *)v84 = v83;
          if ( v9 )
          {
            PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
            KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v36 + 2));
          }
          else
          {
            KeReleaseInStackQueuedSpinLock(&v115);
          }
        }
        else
        {
          if ( v9 )
          {
            PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
            KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v36 + 2));
          }
          else
          {
            KeReleaseInStackQueuedSpinLock(&v115);
          }
          _InterlockedIncrement64((volatile signed __int64 *)v36 + 17);
          MiFreePoolPages((unsigned __int64 *)v8, 0x1000uLL);
        }
        return;
      }
      v45 = v107;
      v46 = v107[67];
      if ( v46 >= 0x20 )
      {
        if ( v46 >= 0x100 )
        {
          v74 = 1LL;
        }
        else
        {
          if ( v107[66] )
            goto LABEL_62;
          v74 = 0LL;
        }
        ExDeferredFreePool(v107, v74);
      }
LABEL_62:
      *(_QWORD *)(v8 + 8) = v8 ^ ExpPoolQuotaCookie;
      _m_prefetchw(v45 + 64);
      v47 = *((_QWORD *)v45 + 32);
      do
      {
        ListEntry->Next = (_SLIST_ENTRY *)v47;
        v48 = v47;
        v47 = _InterlockedCompareExchange64((volatile signed __int64 *)v45 + 32, (signed __int64)ListEntry, v47);
      }
      while ( v47 != v48 );
      _InterlockedIncrement(v45 + 67);
      return;
    }
    if ( BugCheckParameter4 < qword_140327F70 || BugCheckParameter4 >= qword_140327F70 + 0xF8000000000LL )
    {
      if ( !qword_140326C70
        || BugCheckParameter4 < qword_140326C70
        || BugCheckParameter4 >= qword_140326C70 + (qword_140326C50 << 21)
        || (*(_BYTE *)(48
                     * ((*(_QWORD *)(((BugCheckParameter4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) != 0x70 )
      {
        if ( BugCheckParameter4 >= qword_140326950 && BugCheckParameter4 < qword_140326950 + 0x8000000000LL )
        {
          LODWORD(v5) = 33;
          goto LABEL_74;
        }
        v6 = 0;
      }
      LODWORD(v5) = v6;
    }
LABEL_74:
    ExFreeLargePool(BugCheckParameter4, &v110, 0LL, v5);
    return;
  }
  _InterlockedDecrement(&ExpSpecialAllocations);
  ExpFreePoolChecks(BugCheckParameter4, 4096 - (unsigned int)(BugCheckParameter4 & 0xFFF), 0LL, v3);
  SpecialPoolBlockType = MmQuerySpecialPoolBlockType(BugCheckParameter4);
  SpecialPoolBlockSize = MmQuerySpecialPoolBlockSize(BugCheckParameter4);
  v89 = *(unsigned int *)(v88 + 4);
  v90 = SpecialPoolBlockSize;
  if ( (_DWORD)v89 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, SpecialPoolBlockType, v89, BugCheckParameter4, SpecialPoolBlockSize);
  if ( (SpecialPoolBlockType & 0x20) != 0 )
  {
    v92 = ExpSessionPoolTrackTable;
    v91 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v91 = PoolTrackTableMask;
    v92 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v93 = v91 & ((40543 * v89) ^ ((unsigned __int64)(40543 * v89) >> 32));
  while ( 1 )
  {
    v94 = 40LL * v93;
    v95 = *(_DWORD *)(v94 + v92);
    if ( v95 == (_DWORD)v89 )
      break;
    if ( v95 || (SpecialPoolBlockType & 0x20) != 0 || (v96 = *(_DWORD *)(v94 + PoolTrackTable)) == 0 )
    {
      v93 = v91 & (v93 + 1);
      if ( v93 == (v91 & ((40543 * (int)v89) ^ ((unsigned __int64)(40543 * v89) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v89, v90, SpecialPoolBlockType);
        goto LABEL_172;
      }
    }
    else
    {
      *(_DWORD *)(v94 + v92) = v96;
    }
  }
  v97 = -v90;
  if ( (SpecialPoolBlockType & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v94 + v92 + 28));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v94 + v92 + 32), v97);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v94 + v92 + 8));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v94 + v92 + 16), v97);
  }
LABEL_172:
  MmFreeSpecialPool(BugCheckParameter4);
}
