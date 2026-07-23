/*
 * XREFs of ExFreePoolWithTag @ 0x140288010
 * Callers:
 *     MiCreateCloneChain @ 0x140001300 (MiCreateCloneChain.c)
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     MiFreeClonePool @ 0x14000568C (MiFreeClonePool.c)
 *     sub_1400059D8 @ 0x1400059D8 (sub_1400059D8.c)
 *     sub_140005E80 @ 0x140005E80 (sub_140005E80.c)
 *     IopBuildDeviceIoControlRequest @ 0x140006F40 (IopBuildDeviceIoControlRequest.c)
 *     IoDeleteDevice @ 0x140007508 (IoDeleteDevice.c)
 *     ExFreeCacheAwareRundownProtection @ 0x14000781C (ExFreeCacheAwareRundownProtection.c)
 *     SepCaptureHandles @ 0x1400078F0 (SepCaptureHandles.c)
 *     SepSetTokenLowboxHandles @ 0x140007984 (SepSetTokenLowboxHandles.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140007EA4 (SepAppendAceToTokenDefaultDacl.c)
 *     PnpGetRelatedTargetDevice @ 0x1400080C4 (PnpGetRelatedTargetDevice.c)
 *     RtlInsertDynamicFunctionTable @ 0x14000AE00 (RtlInsertDynamicFunctionTable.c)
 *     MiDeleteStaleCacheMaps @ 0x140011D2C (MiDeleteStaleCacheMaps.c)
 *     SepDereferenceLuidToIndexEntry @ 0x1400152A0 (SepDereferenceLuidToIndexEntry.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x140015A10 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x140015A70 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     EtwpAdjustTraceBuffers @ 0x140016700 (EtwpAdjustTraceBuffers.c)
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     PfSnTraceGetLogEntry @ 0x14001A3A8 (PfSnTraceGetLogEntry.c)
 *     PspReaper @ 0x140021168 (PspReaper.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x140025574 (DbgUnLoadImageSymbolsUnicode.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400255E0 (DbgUnicodeStringToAnsiString.c)
 *     VfTargetDriversRemove @ 0x140025684 (VfTargetDriversRemove.c)
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140025AE4 (LdrUnloadAlternateResourceModuleEx.c)
 *     PnpDeviceActionWorker @ 0x14002604C (PnpDeviceActionWorker.c)
 *     SepMandatorySubProcessToken @ 0x14002B81C (SepMandatorySubProcessToken.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14002BBBC (AuthzBasepDeleteSecurityAttribute.c)
 *     EmpEvaluateTargetRule @ 0x14002C14C (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x14002C6C8 (EmpEvaluateNodeLink.c)
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     IoFreeMdl @ 0x140031620 (IoFreeMdl.c)
 *     CcWriteBehind @ 0x1400326B0 (CcWriteBehind.c)
 *     FsRtlUninitializeBaseMcb @ 0x1400330E8 (FsRtlUninitializeBaseMcb.c)
 *     IopDeleteFileObjectExtension @ 0x140033110 (IopDeleteFileObjectExtension.c)
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     MmProbeAndLockSelectedPages @ 0x140033EA4 (MmProbeAndLockSelectedPages.c)
 *     MiPfPutPagesInTransition @ 0x1400356F0 (MiPfPutPagesInTransition.c)
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x140044E10 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     ExpAddTagForBigPages @ 0x140046960 (ExpAddTagForBigPages.c)
 *     IopAllocateIrpPrivate @ 0x1400480F0 (IopAllocateIrpPrivate.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x14004BC80 (IopFreeIrp.c)
 *     SepDeleteAccessState @ 0x14004E240 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E530 (SeSetLearningModeObjectInformation.c)
 *     MiFindFreePageFileSpace @ 0x140062B48 (MiFindFreePageFileSpace.c)
 *     CcScanLogHandleList @ 0x140067FF4 (CcScanLogHandleList.c)
 *     MiExpandSystemCache @ 0x14006B790 (MiExpandSystemCache.c)
 *     MiReleaseSystemCacheView @ 0x14006B8A0 (MiReleaseSystemCacheView.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x14006BD28 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x14006BD68 (ExpDeleteWorkerFactory.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14006D784 (FsRtlpOplockSendModernAppTermination.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x14006D8EC (FsRtlpRemoveAndBreakRHIrp.c)
 *     IopSetLockOperationProcess @ 0x14006DB64 (IopSetLockOperationProcess.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x140070B48 (FsRtlpOplockCleanup.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1400714D0 (FsRtlInsertPerFileObjectContext.c)
 *     IopAllocateFileObjectExtension @ 0x140071760 (IopAllocateFileObjectExtension.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140072918 (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRequestShareableOplock @ 0x140073144 (FsRtlpRequestShareableOplock.c)
 *     FsRtlCancelNotify @ 0x140074054 (FsRtlCancelNotify.c)
 *     WmipReceiveNotifications @ 0x140074DAC (WmipReceiveNotifications.c)
 *     EtwpAllocateFreeBuffers @ 0x140075268 (EtwpAllocateFreeBuffers.c)
 *     MiInitializeMdlPages @ 0x140076FA8 (MiInitializeMdlPages.c)
 *     MiObtainMdlCharges @ 0x140077BF0 (MiObtainMdlCharges.c)
 *     CcExtendVacbArray @ 0x140078038 (CcExtendVacbArray.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     MiDeleteEmptySubsections @ 0x140081CCC (MiDeleteEmptySubsections.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x140082AAC (MiFreeModWriterEntry.c)
 *     MmWaitForCacheManagerPrefetch @ 0x140083854 (MmWaitForCacheManagerPrefetch.c)
 *     MiDeleteControlArea @ 0x140083920 (MiDeleteControlArea.c)
 *     MiDeleteSegmentPages @ 0x1400839A0 (MiDeleteSegmentPages.c)
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeVolumeCacheMap @ 0x14008652C (CcUninitializeVolumeCacheMap.c)
 *     MiRemoveSecureEntry @ 0x1400899A0 (MiRemoveSecureEntry.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiUnlockAndDereferenceVad @ 0x14008E5C0 (MiUnlockAndDereferenceVad.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x14009C480 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     PfSnGetFileInformation @ 0x1400B7EF0 (PfSnGetFileInformation.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     SeAccessCheckWithHint @ 0x1400CABF0 (SeAccessCheckWithHint.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x1400CE500 (SeCaptureObjectTypeList.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1400CFF6C (PnpDeviceCompletionRequestDestroy.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400D0A84 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoDestroyReasonContext @ 0x1400D10E8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400D1330 (PoCaptureReasonContext.c)
 *     PopCaptureReasonContext @ 0x1400D156C (PopCaptureReasonContext.c)
 *     CmpDeleteHive @ 0x1400D2458 (CmpDeleteHive.c)
 *     ExpExpandResourceOwnerTable @ 0x1400D6868 (ExpExpandResourceOwnerTable.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     MiEmptyAccessLogs @ 0x1400D6F7C (MiEmptyAccessLogs.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     PfTFreeTraceDump @ 0x1400D79B4 (PfTFreeTraceDump.c)
 *     MmFreeAccessPfnBuffer @ 0x1400D79C8 (MmFreeAccessPfnBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x1400D7A08 (PfFbBufferListInsertInFree.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400D8F80 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400DA028 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400DA0AC (-SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x1400DAA84 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DB5BC (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x1400DB664 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x1400DB838 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DBB4C (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     StEtaCleanup @ 0x1400DBB80 (StEtaCleanup.c)
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MiCreateMdl @ 0x1400DFC50 (MiCreateMdl.c)
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     CcDeleteMbcb @ 0x1400F1CB4 (CcDeleteMbcb.c)
 *     CcDeallocateBcb @ 0x1400F29AC (CcDeallocateBcb.c)
 *     ExDeleteResourceLite @ 0x1400F29E0 (ExDeleteResourceLite.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400F8170 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400F8690 (RtlpUpcaseUnicodeStringPrivate.c)
 *     MiRemoveFromSystemSpace @ 0x1400FA0D0 (MiRemoveFromSystemSpace.c)
 *     MiViewMayContainPage @ 0x1400FA970 (MiViewMayContainPage.c)
 *     MiTrimSharedPageFromViews @ 0x1400FAC3C (MiTrimSharedPageFromViews.c)
 *     MiDeleteZeroThreadContext @ 0x1400FC244 (MiDeleteZeroThreadContext.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     ExGetSessionPoolTagInfo @ 0x1400FEAA8 (ExGetSessionPoolTagInfo.c)
 *     ExUnlockUserBuffer @ 0x1400FED14 (ExUnlockUserBuffer.c)
 *     PfpMemoryRangesQuery @ 0x1400FF74C (PfpMemoryRangesQuery.c)
 *     MiDereferencePageRuns @ 0x140100004 (MiDereferencePageRuns.c)
 *     MiDereferencePartition @ 0x140100E94 (MiDereferencePartition.c)
 *     FsRtlEmptyFreePoolList @ 0x140105744 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x140105794 (FsRtlFreeTunnelNode.c)
 *     FsRtlTruncateBaseMcb @ 0x140106844 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x140107328 (FsRtlAddEntry.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140109210 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x140109290 (AuthzBasepFreeSecurityAttributeValues.c)
 *     IopDereferenceVpbAndFree @ 0x14010C250 (IopDereferenceVpbAndFree.c)
 *     PspInsertProperty @ 0x14010D534 (PspInsertProperty.c)
 *     PspRemoveProperty @ 0x14010D630 (PspRemoveProperty.c)
 *     RtlContractHashTable @ 0x14010DE30 (RtlContractHashTable.c)
 *     IopDropIrp @ 0x140112D18 (IopDropIrp.c)
 *     PfSnNameRemove @ 0x140112FB8 (PfSnNameRemove.c)
 *     MmFreeContiguousMemory @ 0x140114978 (MmFreeContiguousMemory.c)
 *     MiDereferenceIoPages @ 0x140116398 (MiDereferenceIoPages.c)
 *     SepDeleteSessionLowboxEntries @ 0x140117340 (SepDeleteSessionLowboxEntries.c)
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x140117760 (SepRmDispatchDataToLsa.c)
 *     IoReleaseRemoveLockEx @ 0x140117C68 (IoReleaseRemoveLockEx.c)
 *     CcInitializeVolumeCacheMap @ 0x140117D58 (CcInitializeVolumeCacheMap.c)
 *     IoMakeAssociatedIrpPriv @ 0x140118234 (IoMakeAssociatedIrpPriv.c)
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     PpDevNodeRemoveFromTree @ 0x14011C260 (PpDevNodeRemoveFromTree.c)
 *     IopCleanupNotifications @ 0x14011C4BC (IopCleanupNotifications.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14011C690 (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepResetOperands @ 0x14011CBEC (AuthzBasepResetOperands.c)
 *     CcCompleteAsyncReadWorker @ 0x14011CED4 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncReadWorker @ 0x14011D044 (CcAsyncReadWorker.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14011D5E4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcAsyncCopyRead @ 0x14011DCB4 (CcAsyncCopyRead.c)
 *     MiAllocateModWriterEntry @ 0x14011E6B8 (MiAllocateModWriterEntry.c)
 *     PspJobDelete @ 0x140120A58 (PspJobDelete.c)
 *     FsRtlUninitializeOplock @ 0x140122A5C (FsRtlUninitializeOplock.c)
 *     ExFreePoolEx @ 0x140123144 (ExFreePoolEx.c)
 *     MiCreateZeroThreadContext @ 0x140123730 (MiCreateZeroThreadContext.c)
 *     SepFreeTokenCapabilities @ 0x1401238D4 (SepFreeTokenCapabilities.c)
 *     SeLogAccessFailure @ 0x140124240 (SeLogAccessFailure.c)
 *     IoFreeWorkItem @ 0x140126028 (IoFreeWorkItem.c)
 *     KeFreeXStateContext @ 0x14012675C (KeFreeXStateContext.c)
 *     MiDeprioritizeVad @ 0x14012697C (MiDeprioritizeVad.c)
 *     MiDereferenceTebVad @ 0x1401273DC (MiDereferenceTebVad.c)
 *     SepCleanSingletonEntry @ 0x1401277C4 (SepCleanSingletonEntry.c)
 *     MiStoreEvictPageFile @ 0x140127CA4 (MiStoreEvictPageFile.c)
 *     SepCaptureTokenSecurityOperations @ 0x140128A58 (SepCaptureTokenSecurityOperations.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x14012A2E4 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     ExFreeSvmAsid @ 0x14012A494 (ExFreeSvmAsid.c)
 *     RtlIsUntrustedObject @ 0x14012AE2C (RtlIsUntrustedObject.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14012C120 (MiAllocatePfnRepurposeLogDispatch.c)
 *     MiDeleteSubsection @ 0x14012DB70 (MiDeleteSubsection.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012F0C8 (RtlpAllowsLowBoxAccess.c)
 *     PfSnEnablePrefetcherTimerRoutine @ 0x14013075C (PfSnEnablePrefetcherTimerRoutine.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130874 (HvSynchronizeAndDropTemporaryBins.c)
 *     SepExpandSingletonArrays @ 0x1401309EC (SepExpandSingletonArrays.c)
 *     RtlpSecondLevelDirFreeUsingFreeList @ 0x140130D38 (RtlpSecondLevelDirFreeUsingFreeList.c)
 *     SepBuildCapPolicyTable @ 0x140130FF8 (SepBuildCapPolicyTable.c)
 *     ExUnregisterCallback @ 0x14013169C (ExUnregisterCallback.c)
 *     PnpRemoveDeviceActionRequests @ 0x14013175C (PnpRemoveDeviceActionRequests.c)
 *     RtlDeleteHashTable @ 0x140131B40 (RtlDeleteHashTable.c)
 *     ?SmStInSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140131DDC (-SmStInSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     MiDereferenceExtendInfo @ 0x140133614 (MiDereferenceExtendInfo.c)
 *     PopUnregisterPowerSettingCallback @ 0x140133B64 (PopUnregisterPowerSettingCallback.c)
 *     ExFreeCacheAwarePushLock @ 0x140133CF4 (ExFreeCacheAwarePushLock.c)
 *     RtlExpandHashTable @ 0x140135DE8 (RtlExpandHashTable.c)
 *     ExAllocateCacheAwarePushLock @ 0x140138820 (ExAllocateCacheAwarePushLock.c)
 *     HalExamineMBR @ 0x1401389D8 (HalExamineMBR.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140138BC0 (PnpUnregisterPlugPlayNotification.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x14013A310 (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     MiFindPageFileWriteCluster @ 0x14013A5CC (MiFindPageFileWriteCluster.c)
 *     MiBuildReservationCluster @ 0x14013ACF4 (MiBuildReservationCluster.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14013CFB0 (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14013E454 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14013ED50 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14013F004 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     MiStoreFreeWriteSupport @ 0x14013F1A4 (MiStoreFreeWriteSupport.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140144264 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140144674 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     SmArrayGrow @ 0x140144D5C (SmArrayGrow.c)
 *     PfpServiceMainThreadUnboost @ 0x140148AD0 (PfpServiceMainThreadUnboost.c)
 *     PopDereferenceWakeInfos @ 0x140148FB8 (PopDereferenceWakeInfos.c)
 *     KeDisconnectInterrupt @ 0x14014AF94 (KeDisconnectInterrupt.c)
 *     KiIntSteerDisable @ 0x14014B080 (KiIntSteerDisable.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x14014B638 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     SmKmFreeMdlForLock @ 0x14014B838 (SmKmFreeMdlForLock.c)
 *     PfpPowerActionDpcRoutine @ 0x14014C4D8 (PfpPowerActionDpcRoutine.c)
 *     MiGetWorkingSetInfo @ 0x14014ED08 (MiGetWorkingSetInfo.c)
 *     SmKmAllocateMdlForLock @ 0x14014F364 (SmKmAllocateMdlForLock.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x140152748 (BgpFwFreeMemory.c)
 *     DbgLoadImageSymbolsUnicode @ 0x140153CBC (DbgLoadImageSymbolsUnicode.c)
 *     KsepPoolFreePaged @ 0x140153D50 (KsepPoolFreePaged.c)
 *     KsepPoolFreeNonPaged @ 0x140153EE0 (KsepPoolFreeNonPaged.c)
 *     VfTargetDriversAdd @ 0x140153EF4 (VfTargetDriversAdd.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401540CC (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 *     KiIntSteerConnect @ 0x1401558E8 (KiIntSteerConnect.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x140156304 (MiFreePrivateFixupEntryForSystemImage.c)
 *     IopUnloadSafeCompletion @ 0x1401579EC (IopUnloadSafeCompletion.c)
 *     ExRegisterCallback @ 0x140158AE8 (ExRegisterCallback.c)
 *     IoAllocateDriverObjectExtension @ 0x1401593BC (IoAllocateDriverObjectExtension.c)
 *     ExpFinalizeTimerDeletion @ 0x14015948C (ExpFinalizeTimerDeletion.c)
 *     IoWriteErrorLogEntry @ 0x1401595B8 (IoWriteErrorLogEntry.c)
 *     MiSessionRemoveImage @ 0x1401596A0 (MiSessionRemoveImage.c)
 *     IopSessionChangeWorker @ 0x14015A178 (IopSessionChangeWorker.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14015AEB8 (AdtpBuildAccessReasonAuditString.c)
 *     SeFreeCapturedObjectTypeList @ 0x14015B31C (SeFreeCapturedObjectTypeList.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14015BCDC (ExpSaPageGroupDescriptorAllocate.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PspReadDfssConfigurationValues @ 0x14015D3D4 (PspReadDfssConfigurationValues.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14015D52C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     PnpBootDeviceWait @ 0x14015DD04 (PnpBootDeviceWait.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14015E210 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14015E3E4 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x14015E65C (RtlpMuiRegLoadLicInformation.c)
 *     SepInitProcessAuditSd @ 0x14015EE30 (SepInitProcessAuditSd.c)
 *     BvgaReleaseResources @ 0x14015EEF8 (BvgaReleaseResources.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     MiInitializeNumaRanges @ 0x1401639AC (MiInitializeNumaRanges.c)
 *     IopInitializeOfflineCrashDump @ 0x140163F28 (IopInitializeOfflineCrashDump.c)
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x140164074 (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     AdtpCleanupParameterAllocations @ 0x1401642C4 (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x1401643D0 (AdtpPackageParameters.c)
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     PopFxCreateDeviceCommon @ 0x140166F8C (PopFxCreateDeviceCommon.c)
 *     PpmInstallNewIdleStates @ 0x1401685F8 (PpmInstallNewIdleStates.c)
 *     PnpFreeUnicodeStringList @ 0x140169B04 (PnpFreeUnicodeStringList.c)
 *     IopRemoveDumpCapsuleSupport @ 0x14016C07C (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x14016C0B4 (IopReadDumpRegistry.c)
 *     BapdpProcessEtwEvents @ 0x14016C1C0 (BapdpProcessEtwEvents.c)
 *     EmpRuleUpdateWorkerThread @ 0x14016C58C (EmpRuleUpdateWorkerThread.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14016C714 (EmpEvaluateUpdateRuleEvalState.c)
 *     PopGetDope @ 0x14016C9C0 (PopGetDope.c)
 *     FsFilterInit @ 0x14016D484 (FsFilterInit.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016D60C (LdrpSetAlternateResourceModuleHandle.c)
 *     PopNotifyBrightnessChangesWorker @ 0x14016DA60 (PopNotifyBrightnessChangesWorker.c)
 *     IopGetPhysicalMemoryBlock @ 0x14016EB88 (IopGetPhysicalMemoryBlock.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x14016F33C (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     IopIsBitlockerOn @ 0x140170058 (IopIsBitlockerOn.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x1401704AC (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     MiStoreEvictThread @ 0x140170980 (MiStoreEvictThread.c)
 *     SmFpPreAllocate @ 0x140170E0C (SmFpPreAllocate.c)
 *     sub_1401BF710 @ 0x1401BF710 (sub_1401BF710.c)
 *     CcUnregisterExternalCache @ 0x1401DCE10 (CcUnregisterExternalCache.c)
 *     CcPostDeferredWrites @ 0x1401DD050 (CcPostDeferredWrites.c)
 *     CcMmLogLostDelayedWriteError @ 0x1401DD19C (CcMmLogLostDelayedWriteError.c)
 *     CmLoadKeyHelper @ 0x1401DE79C (CmLoadKeyHelper.c)
 *     CmpCaptureKeyValueArray @ 0x1401DF5AC (CmpCaptureKeyValueArray.c)
 *     CmLogMcUpdateStatus @ 0x1401E0138 (CmLogMcUpdateStatus.c)
 *     EmpProviderDeregisterEntry @ 0x1401E1D24 (EmpProviderDeregisterEntry.c)
 *     FsFilterFreeCompletionStack @ 0x1401E38FC (FsFilterFreeCompletionStack.c)
 *     FsRtlInsertPerFileContextInternal @ 0x1401E3B44 (FsRtlInsertPerFileContextInternal.c)
 *     FsRtlStackOverflowRead @ 0x1401E464C (FsRtlStackOverflowRead.c)
 *     FstubReadTableEFI @ 0x1401E498C (FstubReadTableEFI.c)
 *     HvlpDepositPages @ 0x1401E5ED8 (HvlpDepositPages.c)
 *     HvlpLockPagesForTransfer @ 0x1401EE400 (HvlpLockPagesForTransfer.c)
 *     HvlpUnlockPagesForTransfer @ 0x1401EE618 (HvlpUnlockPagesForTransfer.c)
 *     BgkDisplayString @ 0x1401F10DC (BgkDisplayString.c)
 *     IoFillDumpHeader @ 0x1401F2BD0 (IoFillDumpHeader.c)
 *     IoFreeErrorLogEntry @ 0x1401F5E3C (IoFreeErrorLogEntry.c)
 *     IoFreeSfioStreamIdentifier @ 0x1401F5E8C (IoFreeSfioStreamIdentifier.c)
 *     IoRaiseInformationalHardError @ 0x1401F6358 (IoRaiseInformationalHardError.c)
 *     IopReplaceCompletionPort @ 0x1401F6D60 (IopReplaceCompletionPort.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F737C (IopAdjustFileObjectKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x1401F76B8 (IopKeepAliveWorker.c)
 *     IopAllowRemoteDASD @ 0x1401F7B88 (IopAllowRemoteDASD.c)
 *     IopFreeIrpExtension @ 0x1401F7D7C (IopFreeIrpExtension.c)
 *     IopErrorLogDpc @ 0x1401F8D60 (IopErrorLogDpc.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401FA0BC (IoReleaseRemoveLockAndWaitEx.c)
 *     PipCreateNewDependencyEdge @ 0x1401FA44C (PipCreateNewDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401FA5B0 (PipFreeDependencyEdge.c)
 *     IoTranslateBusAddress @ 0x1401FA940 (IoTranslateBusAddress.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1401FACF4 (IopDereferencePassiveInterruptBlock.c)
 *     PiDevCfgQueryResolveValue @ 0x1401FBF38 (PiDevCfgQueryResolveValue.c)
 *     KdDeregisterPowerHandler @ 0x1401FD8D8 (KdDeregisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x1401FE2C8 (KdSetDbgPrintBufferSize.c)
 *     KeDeregisterNmiCallback @ 0x1401FFD34 (KeDeregisterNmiCallback.c)
 *     KeProcessorProfileControlArea @ 0x1401FFEC8 (KeProcessorProfileControlArea.c)
 *     KeDisableProfiling @ 0x140204BBC (KeDisableProfiling.c)
 *     KeStartProfile @ 0x140204D70 (KeStartProfile.c)
 *     KeStopProfile @ 0x140204E84 (KeStopProfile.c)
 *     MiZeroPageFile @ 0x14020DB5C (MiZeroPageFile.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020FF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 *     MiDeleteCachedSubsection @ 0x140210AF8 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MiAddPhysicalMemory @ 0x1402123C8 (MiAddPhysicalMemory.c)
 *     MiPfCompleteCoalescedIo @ 0x140218FB0 (MiPfCompleteCoalescedIo.c)
 *     MiFreeVadEvents @ 0x14021A2EC (MiFreeVadEvents.c)
 *     MiDereferencePerSessionProtos @ 0x14021BF98 (MiDereferencePerSessionProtos.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiInsertPartitionPages @ 0x14021D494 (MiInsertPartitionPages.c)
 *     MiSortPartitionMdls @ 0x14021E170 (MiSortPartitionMdls.c)
 *     MiFlushComplete @ 0x14021E5B8 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14021E6C0 (MiFreeOverlappedFlushEntry.c)
 *     MiExtendPagingFileMaximum @ 0x140221290 (MiExtendPagingFileMaximum.c)
 *     MiInsertPteTracker @ 0x140226BDC (MiInsertPteTracker.c)
 *     MiAllocateCombineProto @ 0x140226FF8 (MiAllocateCombineProto.c)
 *     MiCombineAllPhysicalMemory @ 0x1402273C8 (MiCombineAllPhysicalMemory.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 *     MiFreeCombinePool @ 0x14022A95C (MiFreeCombinePool.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MmOutSwapVirtualAddresses @ 0x14022CC40 (MmOutSwapVirtualAddresses.c)
 *     MiMapUserLargePages @ 0x14022F2A8 (MiMapUserLargePages.c)
 *     MiReturnLargePages @ 0x14022FA34 (MiReturnLargePages.c)
 *     MiDeleteFileExtents @ 0x140230578 (MiDeleteFileExtents.c)
 *     MmEnumerateBadPages @ 0x140232E1C (MmEnumerateBadPages.c)
 *     PpmQueryPlatformStateResidency @ 0x140235488 (PpmQueryPlatformStateResidency.c)
 *     PpmRemoveIdleStates @ 0x140235650 (PpmRemoveIdleStates.c)
 *     PpmUpdateIdleVeto @ 0x1402362BC (PpmUpdateIdleVeto.c)
 *     PopFxDestroyDeviceCommon @ 0x1402379C8 (PopFxDestroyDeviceCommon.c)
 *     PopFxDestroyDeviceDpm @ 0x1402379F4 (PopFxDestroyDeviceDpm.c)
 *     PopFxRegisterPluginEx @ 0x14023891C (PopFxRegisterPluginEx.c)
 *     PpmClearSimulatedLoad @ 0x14023A680 (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14023A99C (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x14023AD90 (PopUpdateWakeSource.c)
 *     PopUpdateWakeSourceWorker @ 0x14023AE8C (PopUpdateWakeSourceWorker.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14023F0BC (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmFireWmiEvent @ 0x140240638 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x1402406B8 (PpmWmiFireIdleAccountingEvent.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402418E8 (PpmEventTraceProcessorIdleAccounting.c)
 *     PsSetCpuQuotaInformation @ 0x140243470 (PsSetCpuQuotaInformation.c)
 *     PspIumAllocatePhysicalPages @ 0x140244BC0 (PspIumAllocatePhysicalPages.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x1402453EC (RtlGetAppContainerNamedObjectPath.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402467D0 (DbgpRemoveDebugPrintCallback.c)
 *     RtlTraceDatabaseDestroy @ 0x14024A7D4 (RtlTraceDatabaseDestroy.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14024F73C (SepCheckAndCopySelfRelativeSD.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14025004C (SepValidateAndCopyGlobalEntry.c)
 *     SepGetLearningModeObjectInformation @ 0x140250318 (SepGetLearningModeObjectInformation.c)
 *     SepRmCapPoolExpand @ 0x140250A0C (SepRmCapPoolExpand.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x1402511A8 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140251F38 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402521D8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1402530B8 (-StCompactionPerformFile@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14025354C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253990 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140253B64 (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140254AD4 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x140255918 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStagingRegionMap@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z @ 0x140256650 (-StStagingRegionMap@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAPEAD@Z.c)
 *     ?StStagingRegionStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x140256858 (-StStagingRegionStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x140256934 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmKmStoreTerminateWorker @ 0x140257BBC (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140259768 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14025987C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     VfAllocateDomainCommonBuffer @ 0x14025A4E8 (VfAllocateDomainCommonBuffer.c)
 *     VmpRemoveMemoryRange @ 0x14025BC74 (VmpRemoveMemoryRange.c)
 *     WdipAccessCheck @ 0x14025BE34 (WdipAccessCheck.c)
 *     EtwpCrimsonStackWalkApc @ 0x14025C418 (EtwpCrimsonStackWalkApc.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x14025F478 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140260650 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpCCSwapDeleteProcessor @ 0x140260884 (EtwpCCSwapDeleteProcessor.c)
 *     NtDrawText @ 0x140262F7C (NtDrawText.c)
 *     ExFreeAutoExpandPushLock @ 0x1402633F0 (ExFreeAutoExpandPushLock.c)
 *     ExDeleteWakeTimerInfo @ 0x1402644E8 (ExDeleteWakeTimerInfo.c)
 *     ExGetWakeTimerList @ 0x140264560 (ExGetWakeTimerList.c)
 *     ExpAllocateAsid @ 0x140265030 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14026524C (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x140265480 (ExpSvmDereferenceDevice.c)
 *     ExpSaBinaryArrayRemove @ 0x1402662C4 (ExpSaBinaryArrayRemove.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140266300 (ExpSaPageGroupDescriptorFree.c)
 *     WheapFreeErrorRecord @ 0x140266D5C (WheapFreeErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x140266E7C (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140268010 (WheapSqmCollectWheaOscTelemetry.c)
 *     sub_140268E8C @ 0x140268E8C (sub_140268E8C.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x140269BEC (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x140269D98 (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140269EE8 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x14026A3C0 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14026DA4C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     NtReplacePartitionUnit @ 0x1402724C4 (NtReplacePartitionUnit.c)
 *     sub_140272EFC @ 0x140272EFC (sub_140272EFC.c)
 *     ExFreePool @ 0x140288000 (ExFreePool.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopFreePoDeviceNotifyListHead @ 0x1403ED114 (IopFreePoDeviceNotifyListHead.c)
 *     PopGetHwConfigurationSignature @ 0x1403F0020 (PopGetHwConfigurationSignature.c)
 *     PopGetBitlockerKeyLocation @ 0x1403F0168 (PopGetBitlockerKeyLocation.c)
 *     BapdRecordFirmwareBootStats @ 0x1403F66C8 (BapdRecordFirmwareBootStats.c)
 *     PfpScenCtxScenarioSet @ 0x1403F69DC (PfpScenCtxScenarioSet.c)
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 *     IoUnregisterShutdownNotification @ 0x1403FE474 (IoUnregisterShutdownNotification.c)
 *     PnprQuiesceWorker @ 0x1404012DC (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140403C20 (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x1404043CC (ExGetNextWakeTime.c)
 *     ExpWorkerHotAddProcessor @ 0x1404045E4 (ExpWorkerHotAddProcessor.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x140404E68 (WheapCreateTriageDumpFromPreviousSession.c)
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiCloneProcessAddressSpace @ 0x140406774 (MiCloneProcessAddressSpace.c)
 *     MiBuildNewCloneDescriptor @ 0x1404069E0 (MiBuildNewCloneDescriptor.c)
 *     AlpcpPortQueryServerInfo @ 0x140406B0C (AlpcpPortQueryServerInfo.c)
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
 *     SepCheckCapabilities @ 0x140408A80 (SepCheckCapabilities.c)
 *     WmipGECleanup @ 0x14040A558 (WmipGECleanup.c)
 *     NtDeleteObjectAuditAlarm @ 0x14040A600 (NtDeleteObjectAuditAlarm.c)
 *     sub_14040A6E0 @ 0x14040A6E0 (sub_14040A6E0.c)
 *     sub_14040A8D4 @ 0x14040A8D4 (sub_14040A8D4.c)
 *     PiPnpFreePdoDeviceList @ 0x14040AA28 (PiPnpFreePdoDeviceList.c)
 *     sub_14040ABD4 @ 0x14040ABD4 (sub_14040ABD4.c)
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 *     sub_14040C414 @ 0x14040C414 (sub_14040C414.c)
 *     IopTrackLink @ 0x14040C918 (IopTrackLink.c)
 *     IoVolumeDeviceToDosName @ 0x14040D36C (IoVolumeDeviceToDosName.c)
 *     PnpGetDeviceLocationStrings @ 0x14040D898 (PnpGetDeviceLocationStrings.c)
 *     PnpFreeInterruptInformation @ 0x14040E07C (PnpFreeInterruptInformation.c)
 *     RawCleanupVcb @ 0x14040E0A0 (RawCleanupVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14040E2E8 (ExAllocateCacheAwareRundownProtection.c)
 *     EtwpCaptureString @ 0x14040EEBC (EtwpCaptureString.c)
 *     SepGetLowBoxHandlesEntry @ 0x1404106F0 (SepGetLowBoxHandlesEntry.c)
 *     ObpParseSymbolicLink @ 0x140410E40 (ObpParseSymbolicLink.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     SepExpandDynamic @ 0x140411B54 (SepExpandDynamic.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x140412A24 (NtCreateLowBoxToken.c)
 *     IoCreateDevice @ 0x1404132C4 (IoCreateDevice.c)
 *     NtQueryInformationJobObject @ 0x1404139BC (NtQueryInformationJobObject.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PiDqOpenUserObjectRegKey @ 0x140415D2C (PiDqOpenUserObjectRegKey.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140416040 (PiDqGetRelativeObjectRegPath.c)
 *     RtlpAllocateAtom @ 0x140416BA8 (RtlpAllocateAtom.c)
 *     PnpConcatPWSTR @ 0x140416C20 (PnpConcatPWSTR.c)
 *     PiUEventInitClientRegistrationContext @ 0x140416D38 (PiUEventInitClientRegistrationContext.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140417154 (PiUEventFreeClientRegistrationContext.c)
 *     PipCheckForDenyExecute @ 0x140417394 (PipCheckForDenyExecute.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x14041BBF8 (MmLinkJobProcess.c)
 *     EtwpTraceProcessRundown @ 0x14041C47C (EtwpTraceProcessRundown.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     KeRundownApcQueues @ 0x140421134 (KeRundownApcQueues.c)
 *     MiCreatePebOrTeb @ 0x140421270 (MiCreatePebOrTeb.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     EtwpEnumerateAddressSpace @ 0x140425680 (EtwpEnumerateAddressSpace.c)
 *     IopQueryNameInternal @ 0x140426C40 (IopQueryNameInternal.c)
 *     CmpQueryKeyName @ 0x140427100 (CmpQueryKeyName.c)
 *     CmpQueryKeyValueData @ 0x140427AD0 (CmpQueryKeyValueData.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 *     NtSetValueKey @ 0x140428350 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x140428B40 (CmSetValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140429488 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     CmQueryMultipleValueKey @ 0x140429678 (CmQueryMultipleValueKey.c)
 *     CmpDelayedDerefKeys @ 0x14042A334 (CmpDelayedDerefKeys.c)
 *     CmpAddInfoAfterParseFailure @ 0x14042A390 (CmpAddInfoAfterParseFailure.c)
 *     CmpSecurityMethod @ 0x14042ABB4 (CmpSecurityMethod.c)
 *     CmpAllocatePostBlock @ 0x14042C258 (CmpAllocatePostBlock.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14042D0F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     PfSnCleanupPrefetchHeader @ 0x14042D1C0 (PfSnCleanupPrefetchHeader.c)
 *     PfpFileBuildReadSupport @ 0x14042D618 (PfpFileBuildReadSupport.c)
 *     PfpReadSupportCleanup @ 0x14042DB04 (PfpReadSupportCleanup.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140432E10 (SepAdtPrivilegedServiceAuditAlarm.c)
 *     NtOpenThreadTokenEx @ 0x140433000 (NtOpenThreadTokenEx.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x1404358A0 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SepSetTokenTrust @ 0x14043666C (SepSetTokenTrust.c)
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404370F0 (SepSetTokenPackage.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     PnpGetObjectProperty @ 0x140437764 (PnpGetObjectProperty.c)
 *     NtPlugPlayControl @ 0x14043789C (NtPlugPlayControl.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1404379BC (PiControlMakeUserModeCallersCopy.c)
 *     PiControlGetDeviceInterfaceEnabled @ 0x140438C9C (PiControlGetDeviceInterfaceEnabled.c)
 *     PnpUnicodeStringToWstrFree @ 0x140438E10 (PnpUnicodeStringToWstrFree.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140438E44 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x140439150 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectRelease @ 0x140439810 (PiDmObjectRelease.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14043AE64 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiDqPnPGetObjectProperty @ 0x14043B1A0 (PiDqPnPGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x14043BFF8 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     PiPnpRtlObjectEventRelease @ 0x14043C01C (PiPnpRtlObjectEventRelease.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14043C0E0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043CBC8 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x14043D1B0 (_PnpCtxGetCachedContextBaseKey.c)
 *     _PnpRegQueryValueIndirect @ 0x14043DFF4 (_PnpRegQueryValueIndirect.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     PnpFreeDevPropertyArray @ 0x14043E844 (PnpFreeDevPropertyArray.c)
 *     PnpFreeDevProperty @ 0x14043E89C (PnpFreeDevProperty.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x14043EA34 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x14043EE34 (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14043EF34 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14043FBF0 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140440170 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiCMGetRegistryProperty @ 0x140440870 (PiCMGetRegistryProperty.c)
 *     PiCMReleaseRegistryPropertyInputData @ 0x140440A1C (PiCMReleaseRegistryPropertyInputData.c)
 *     PiCMGetObjectProperty @ 0x140440E88 (PiCMGetObjectProperty.c)
 *     PiCMReleasePropertyInputData @ 0x1404410D0 (PiCMReleasePropertyInputData.c)
 *     PiCMCapturePropertyInputData @ 0x140441214 (PiCMCapturePropertyInputData.c)
 *     PiCMCaptureRegistryPropertyInputData @ 0x140441620 (PiCMCaptureRegistryPropertyInputData.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140441C48 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQuerySerializeActionQueue @ 0x1404420E4 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x140442488 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x14044266C (PiDqActionDataFree.c)
 *     PiCMReleaseObjectInputData @ 0x140442B00 (PiCMReleaseObjectInputData.c)
 *     MiParseImageCfgBits @ 0x140442CC0 (MiParseImageCfgBits.c)
 *     PiCMCaptureRegistryInputData @ 0x14044361C (PiCMCaptureRegistryInputData.c)
 *     PfCalculateProcessHash @ 0x140443818 (PfCalculateProcessHash.c)
 *     PfProcessCreateNotification @ 0x140443FBC (PfProcessCreateNotification.c)
 *     PfSnBeginAppLaunch @ 0x14044404C (PfSnBeginAppLaunch.c)
 *     CmpNameFromAttributes @ 0x14044565C (CmpNameFromAttributes.c)
 *     CmDeleteKey @ 0x1404468EC (CmDeleteKey.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmpAddSecurityCellToCache @ 0x140447E14 (CmpAddSecurityCellToCache.c)
 *     CmpLockIXLockIntent @ 0x140448044 (CmpLockIXLockIntent.c)
 *     CmpTransMgrFreeVolatileData @ 0x1404480CC (CmpTransMgrFreeVolatileData.c)
 *     CmpRundownUnitOfWork @ 0x1404482CC (CmpRundownUnitOfWork.c)
 *     CmpDoCreate @ 0x1404485BC (CmpDoCreate.c)
 *     CmpCleanUpSubKeyInfo @ 0x140448E64 (CmpCleanUpSubKeyInfo.c)
 *     CmpDoCreateChild @ 0x140448EE0 (CmpDoCreateChild.c)
 *     ObAssignObjectSecurityDescriptor @ 0x140449D7C (ObAssignObjectSecurityDescriptor.c)
 *     CmpInitHiveFromFile @ 0x14044A738 (CmpInitHiveFromFile.c)
 *     CmpDoFileWrite @ 0x14044ACA4 (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14044B65C (CmpQueryFileSecurityDescriptor.c)
 *     CmpSetSecurityDescriptorInfo @ 0x14044B704 (CmpSetSecurityDescriptorInfo.c)
 *     HvWriteLogFile @ 0x14044C3A0 (HvWriteLogFile.c)
 *     HvFreeDirtyData @ 0x14044C574 (HvFreeDirtyData.c)
 *     HvStoreModifiedData @ 0x14044D040 (HvStoreModifiedData.c)
 *     PspDeleteCreateProcessContext @ 0x140450BA4 (PspDeleteCreateProcessContext.c)
 *     sub_140452868 @ 0x140452868 (sub_140452868.c)
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     PfpRpCHashDeleteEntries @ 0x140453A14 (PfpRpCHashDeleteEntries.c)
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 *     PfpRpControlRequest @ 0x140455108 (PfpRpControlRequest.c)
 *     PfpRpControlRequestCopy @ 0x140455248 (PfpRpControlRequestCopy.c)
 *     PfpRpCHashAddEntries @ 0x1404555D0 (PfpRpCHashAddEntries.c)
 *     PfpPrefetchRequest @ 0x1404558A8 (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x140456460 (PfpVolumeOpenAndVerify.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404567D0 (PfSnAsyncPrefetchWorker.c)
 *     PfSnAsyncContextCleanup @ 0x140456AA8 (PfSnAsyncContextCleanup.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140456B84 (PfSnOpenVolumesForPrefetch.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     IopSynchronousApiServiceTail @ 0x140457B28 (IopSynchronousApiServiceTail.c)
 *     PiCMGetDeviceInterfaceList @ 0x140457DA8 (PiCMGetDeviceInterfaceList.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     PiCMCaptureInterfaceListInputData @ 0x140458914 (PiCMCaptureInterfaceListInputData.c)
 *     PfpPrefetchVolumesCleanup @ 0x14045905C (PfpPrefetchVolumesCleanup.c)
 *     NtFlushBuffersFileEx @ 0x140459AD0 (NtFlushBuffersFileEx.c)
 *     sub_140459D74 @ 0x140459D74 (sub_140459D74.c)
 *     PiSwDeviceInterfaceSetState @ 0x14045A1AC (PiSwDeviceInterfaceSetState.c)
 *     PiSwIrpInterfaceRegister @ 0x14045A410 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpStartCreate @ 0x14045A93C (PiSwIrpStartCreate.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x14045B774 (PiSwDeviceInterfacesUpdateState.c)
 *     PnpCopyDevPropertyArray @ 0x14045B858 (PnpCopyDevPropertyArray.c)
 *     PiSwBusRelationAdd @ 0x14045BB44 (PiSwBusRelationAdd.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14045BFC8 (IopDeviceObjectFromSymbolicName.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x14045C248 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14045C80C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x14045CAAC (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x14045CCC0 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14045D048 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x14045D384 (PiQueryResourceRequirements.c)
 *     PiUEventProcessEventWorker @ 0x14045D8BC (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x14045DAB4 (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventFreeEventEntry @ 0x14045DBFC (PiUEventFreeEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14045DC54 (PiUEventProcessBroadcastNotifications.c)
 *     PnpProcessAssignResources @ 0x14045E340 (PnpProcessAssignResources.c)
 *     IopUncacheInterfaceInformation @ 0x14045E660 (IopUncacheInterfaceInformation.c)
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14045F46C (PiUEventNotifyTargetDeviceChange.c)
 *     PnpDeviceEventWorker @ 0x14045FC1C (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x14045FFE0 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x140460174 (PnpCompleteDeviceEvent.c)
 *     PiUEventCacheObjectProperties @ 0x140460C1C (PiUEventCacheObjectProperties.c)
 *     PnpDereferenceNotify @ 0x14046120C (PnpDereferenceNotify.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404612A4 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x140461BC4 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     ObSetDirectoryDeviceMap @ 0x14046213C (ObSetDirectoryDeviceMap.c)
 *     EtwpProviderArrivalCallback @ 0x1404660B8 (EtwpProviderArrivalCallback.c)
 *     PsInitializeFullProcessImageName @ 0x140466C64 (PsInitializeFullProcessImageName.c)
 *     CmpCheckWrpKeyAccess @ 0x140466E0C (CmpCheckWrpKeyAccess.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     MiAllocateVad @ 0x140468608 (MiAllocateVad.c)
 *     ObCheckRefTraceProcess @ 0x14046AC74 (ObCheckRefTraceProcess.c)
 *     SepAddLuidToIndexEntry @ 0x14046AD50 (SepAddLuidToIndexEntry.c)
 *     MiCompressRelocations @ 0x14046B180 (MiCompressRelocations.c)
 *     SeCaptureAcl @ 0x14046BDC8 (SeCaptureAcl.c)
 *     SeReleaseAcl @ 0x14046BEE0 (SeReleaseAcl.c)
 *     NtSetInformationToken @ 0x14046BEF8 (NtSetInformationToken.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14046E008 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x14046E0D8 (SeReleaseLuidAndAttributesArray.c)
 *     SepAdtUserRightAdjusted @ 0x14046E0F4 (SepAdtUserRightAdjusted.c)
 *     SepCreateClaimAttributes @ 0x14046E408 (SepCreateClaimAttributes.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     NtOpenPrivateNamespace @ 0x14046F864 (NtOpenPrivateNamespace.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14046FBA0 (ObpCaptureBoundaryDescriptor.c)
 *     NtCreateWorkerFactory @ 0x14046FE54 (NtCreateWorkerFactory.c)
 *     MiCreateDataFileMap @ 0x1404706C4 (MiCreateDataFileMap.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140470E00 (SeReleaseSid.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14047329C (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x1404733A0 (PfSnPopulateReadList.c)
 *     AlpcpCreateView @ 0x140475280 (AlpcpCreateView.c)
 *     AlpcAddHandleTableEntry @ 0x140475C64 (AlpcAddHandleTableEntry.c)
 *     AlpcpReceiveLegacyMessage @ 0x1404760D0 (AlpcpReceiveLegacyMessage.c)
 *     AlpcpDestroyBlob @ 0x140476564 (AlpcpDestroyBlob.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x1404765E4 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlFreeExtraCreateParameter @ 0x140476654 (FsRtlFreeExtraCreateParameter.c)
 *     MmPrefetchForCacheManager @ 0x140477744 (MmPrefetchForCacheManager.c)
 *     AlpcMessageDestroyProcedure @ 0x14047A9E0 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x14047AD50 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x14047B8A0 (AlpcpReceiveMessage.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140480E50 (AlpcpDispatchReplyToWaitingThread.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     ObReleaseObjectSecurity @ 0x140482AA4 (ObReleaseObjectSecurity.c)
 *     NtQuerySecurityAttributesToken @ 0x140482AD0 (NtQuerySecurityAttributesToken.c)
 *     SepCaptureUnicodeStringArray @ 0x140485B70 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x140485DA0 (SeCaptureUnicodeStringStructures.c)
 *     ObDereferenceSecurityDescriptor @ 0x140486190 (ObDereferenceSecurityDescriptor.c)
 *     SeDefaultObjectMethod @ 0x140486370 (SeDefaultObjectMethod.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     ObpAssignSecurity @ 0x140486910 (ObpAssignSecurity.c)
 *     RtlpCombineAcls @ 0x140487120 (RtlpCombineAcls.c)
 *     ObInsertObjectEx @ 0x140487BC0 (ObInsertObjectEx.c)
 *     SepTokenDeleteMethod @ 0x1404883A0 (SepTokenDeleteMethod.c)
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14048AB10 (PfpCopyUserPfnPrioRequest.c)
 *     ObpFreeObject @ 0x14048AE10 (ObpFreeObject.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     ObpCaptureObjectName @ 0x1404900F0 (ObpCaptureObjectName.c)
 *     ObOpenObjectByName @ 0x1404902E0 (ObOpenObjectByName.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObpCreateHandle @ 0x140492D10 (ObpCreateHandle.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     CmpKcbCacheLookup @ 0x1404993B0 (CmpKcbCacheLookup.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14049CC90 (AlpcpCaptureMessageDataSafe.c)
 *     MiReleaseReadListResources @ 0x14049D640 (MiReleaseReadListResources.c)
 *     MmPrefetchPagesEx @ 0x14049D750 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 *     CmpFree @ 0x1404A08B0 (CmpFree.c)
 *     EtwpRealtimeCreateLogfile @ 0x1404A13F4 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1404A264C (EtwpRealtimeFlushSavedBuffers.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1404A586C (FsRtlPTeardownPerFileObjectContexts.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404A6118 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlpAllocateOplock @ 0x1404A64EC (FsRtlpAllocateOplock.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404A65B4 (FsRtlNotifyCompleteIrp.c)
 *     FsRtlNotifyCleanup @ 0x1404A67BC (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1404A68A4 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404A6B90 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404A70C4 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
 *     sub_1404A8518 @ 0x1404A8518 (sub_1404A8518.c)
 *     WmipEventNotification @ 0x1404A8814 (WmipEventNotification.c)
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     WmipGenerateRegistrationNotification @ 0x1404A97C0 (WmipGenerateRegistrationNotification.c)
 *     WmipCachePtrs @ 0x1404A9898 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x1404A9958 (WmipSendGuidUpdateNotifications.c)
 *     WmipProcessEvent @ 0x1404A9A7C (WmipProcessEvent.c)
 *     WmipSendEnableDisableRequest @ 0x1404A9BE0 (WmipSendEnableDisableRequest.c)
 *     WmipAddProviderIdToPIList @ 0x1404A9F84 (WmipAddProviderIdToPIList.c)
 *     WmipCreateGuidObject @ 0x1404AA098 (WmipCreateGuidObject.c)
 *     WmipGetGuidSecurityDescriptor @ 0x1404AA270 (WmipGetGuidSecurityDescriptor.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1404AA860 (RtlpAllocDeallocQueryBuffer.c)
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404AC4DC (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x1404AC7C0 (EtwpDelayCreate.c)
 *     EtwpCreateNtFileName @ 0x1404AC9D0 (EtwpCreateNtFileName.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1404ACABC (EtwpRealtimeNotifyConsumers.c)
 *     CmCheckRegistry @ 0x1404ADFB0 (CmCheckRegistry.c)
 *     CmpCheckRegistry2 @ 0x1404AE1C0 (CmpCheckRegistry2.c)
 *     HvpMapHiveImageFromFile @ 0x1404AF8C8 (HvpMapHiveImageFromFile.c)
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404AFEC4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 *     MiCreatePagingFileMap @ 0x1404B258C (MiCreatePagingFileMap.c)
 *     MiSegmentDelete @ 0x1404B2AE4 (MiSegmentDelete.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiRemoveSharedCommitNode @ 0x1404B7A60 (MiRemoveSharedCommitNode.c)
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 *     MiRemoveVadCharges @ 0x1404B9120 (MiRemoveVadCharges.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 *     IopFreeMiniCompletionPacket @ 0x1404BE310 (IopFreeMiniCompletionPacket.c)
 *     PfpPfnPrioRequest @ 0x1404BEB40 (PfpPfnPrioRequest.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     NtQueryValueKey @ 0x1404C0BB0 (NtQueryValueKey.c)
 *     CmQueryKey @ 0x1404C3F30 (CmQueryKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     CmpDoOpen @ 0x1404C78D0 (CmpDoOpen.c)
 *     CmpFreeKeyControlBlock @ 0x1404C8DB0 (CmpFreeKeyControlBlock.c)
 *     SeReleaseSecurityDescriptor @ 0x1404C8F88 (SeReleaseSecurityDescriptor.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x1404CB304 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpDereferenceNameControlBlockWithLock @ 0x1404CB3D0 (CmpDereferenceNameControlBlockWithLock.c)
 *     CmpCreateKeyControlBlock @ 0x1404CB480 (CmpCreateKeyControlBlock.c)
 *     PfpRpFileKeyUpdate @ 0x1404CC0A0 (PfpRpFileKeyUpdate.c)
 *     CmpCleanUpKcbValueCache @ 0x1404CC8C0 (CmpCleanUpKcbValueCache.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     RtlpSetSecurityObject @ 0x1404CD280 (RtlpSetSecurityObject.c)
 *     EtwpDeleteRegistrationObject @ 0x1404CDFEC (EtwpDeleteRegistrationObject.c)
 *     NtTraceControl @ 0x1404CE420 (NtTraceControl.c)
 *     EtwpReleaseProviderTraitsReference @ 0x1404CED94 (EtwpReleaseProviderTraitsReference.c)
 *     ObpFreeObjectNameBuffer @ 0x1404CF30C (ObpFreeObjectNameBuffer.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404CF3B0 (ObSetSecurityDescriptorInfo.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x1404CFBCC (ObpGetObjectSecurity.c)
 *     PspDereferenceQuotaBlock @ 0x1404D0058 (PspDereferenceQuotaBlock.c)
 *     SepLengthSidAndAttributesArray @ 0x1404D009C (SepLengthSidAndAttributesArray.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404D0148 (IopGetLegacyVetoListDrivers.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     WmipQueryAllData @ 0x1404D1CC0 (WmipQueryAllData.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1404D2818 (EtwpGetGuidSecurityDescriptor.c)
 *     NtSetSecurityObject @ 0x1404D2930 (NtSetSecurityObject.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404D2F6C (EtwpSetProviderTraitsCommon.c)
 *     EtwpFreeSecurityDescriptor @ 0x1404D3424 (EtwpFreeSecurityDescriptor.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpAllocGuidEntry @ 0x1404D4290 (EtwpAllocGuidEntry.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x1404D4748 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1404D49E4 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     EtwpAddDataSource @ 0x1404D5690 (EtwpAddDataSource.c)
 *     EtwpReleaseQueueEntry @ 0x1404D5B54 (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x1404D5C00 (EtwpUnreferenceDataBlock.c)
 *     EtwpUpdateFilterData @ 0x1404D6208 (EtwpUpdateFilterData.c)
 *     PnpQueryID @ 0x1404D6380 (PnpQueryID.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpEnableTrace @ 0x1404D720C (EtwpEnableTrace.c)
 *     PiProcessNewDeviceNode @ 0x1404D7558 (PiProcessNewDeviceNode.c)
 *     PnpQueryDeviceText @ 0x1404D92F0 (PnpQueryDeviceText.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404D93C4 (PnpCheckDeviceIdsChanged.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     sub_1404DABD0 @ 0x1404DABD0 (sub_1404DABD0.c)
 *     sub_1404DAD40 @ 0x1404DAD40 (sub_1404DAD40.c)
 *     sub_1404DAE70 @ 0x1404DAE70 (sub_1404DAE70.c)
 *     PiCMGetObjectList @ 0x1404DBAE4 (PiCMGetObjectList.c)
 *     PiCMCaptureObjectInputData @ 0x1404DCF48 (PiCMCaptureObjectInputData.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404DD708 (DrvDbGetDriverPackageMappedProperty.c)
 *     DrvDbLoadDatabaseNode @ 0x1404DDF80 (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404DE5F8 (_RegRtlCreateTreeTransacted.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E0000 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataFree @ 0x1404E0850 (PiDmCacheDataFree.c)
 *     PipEnumerateCompleted @ 0x1404E09B8 (PipEnumerateCompleted.c)
 *     PiControlGetDeviceDepth @ 0x1404E0CB0 (PiControlGetDeviceDepth.c)
 *     PopLogDisabledSleepReason @ 0x1404E0DAC (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1404E0F04 (PopFilterCapabilities.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1404E1074 (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x1404E10D8 (IoGetLegacyVetoList.c)
 *     PiControlGetRelatedDevice @ 0x1404E11FC (PiControlGetRelatedDevice.c)
 *     PiControlGetPropertyData @ 0x1404E1474 (PiControlGetPropertyData.c)
 *     PiControlGetSetDeviceStatus @ 0x1404E1D68 (PiControlGetSetDeviceStatus.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E2B34 (PnpCallDriverQueryServiceHelper.c)
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1404E3234 (PiGetDeviceRegProperty.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E3A00 (IopBuildGlobalSymbolicLinkString.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404E4560 (PpForEachDeviceInstanceDriver.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E47C4 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1404E5148 (PopDispatchPowerSettingCallbacks.c)
 *     PopUnreferencePowerSetting @ 0x1404E55B0 (PopUnreferencePowerSetting.c)
 *     PopDiagTracePowerRequestCreate @ 0x1404E5984 (PopDiagTracePowerRequestCreate.c)
 *     PiDeviceRegistration @ 0x1404E6474 (PiDeviceRegistration.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404E6788 (PipGetRegistrySecurityWithFallback.c)
 *     PiProcessDriverInstance @ 0x1404E6AB0 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x1404E6E58 (PiFindDevInstMatch.c)
 *     IopGetRootDevices @ 0x1404E7140 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1404E73A8 (IopInitializeDeviceInstanceKey.c)
 *     IopGetDriverNameFromKeyNode @ 0x1404E76EC (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1404E79C8 (IopGetRegistryValue.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     CmpParseCacheAddHive @ 0x1404EA29C (CmpParseCacheAddHive.c)
 *     CmpDeleteKcbCache @ 0x1404EAB90 (CmpDeleteKcbCache.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x1404EBEEC (CmpAddToHiveFileList.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     CmpQueryNameString @ 0x1404EC478 (CmpQueryNameString.c)
 *     CmRmFinalizeRecovery @ 0x1404EC588 (CmRmFinalizeRecovery.c)
 *     CmpFlushNotify @ 0x1404ECD18 (CmpFlushNotify.c)
 *     CmpFreePostBlock @ 0x1404ECFB0 (CmpFreePostBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x1404ED934 (CmpRecordUnloadEventForHive.c)
 *     CmpWorkerEngineWorker @ 0x1404EDFFC (CmpWorkerEngineWorker.c)
 *     CmUnloadKey @ 0x1404EE348 (CmUnloadKey.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1404EE670 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpDestroySecurityCache @ 0x1404EE838 (CmpDestroySecurityCache.c)
 *     CmpParseCacheRemoveHive @ 0x1404EE97C (CmpParseCacheRemoveHive.c)
 *     CmpLogCheckpoint @ 0x1404EEB78 (CmpLogCheckpoint.c)
 *     CmSnapshotRMTxArray @ 0x1404EF218 (CmSnapshotRMTxArray.c)
 *     NtDeleteValueKey @ 0x1404EF910 (NtDeleteValueKey.c)
 *     CmDeleteValueKey @ 0x1404EFE30 (CmDeleteValueKey.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1404F0898 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404F19C4 (CmpCommitSetValueKeyUoW.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x1404F2550 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1404F266C (CmpDoTransWriteLogRecord.c)
 *     CmpCleanupTransactionState @ 0x1404F28B8 (CmpCleanupTransactionState.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404F34A0 (EtwQueryProcessTelemetryInfo.c)
 *     IopDeleteDriver @ 0x1404F380C (IopDeleteDriver.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404F449C (PoDiagCaptureUsermodeStack.c)
 *     ExGetPoolTagInfo @ 0x1404F44F4 (ExGetPoolTagInfo.c)
 *     CmCreateKey @ 0x1404F4850 (CmCreateKey.c)
 *     NtSetTimerResolution @ 0x1404F4E2C (NtSetTimerResolution.c)
 *     PfSnPrefetchScenario @ 0x1404F502C (PfSnPrefetchScenario.c)
 *     PfSnGetPrefetchInstructions @ 0x1404F61EC (PfSnGetPrefetchInstructions.c)
 *     PfSnEndTrace @ 0x1404F6D18 (PfSnEndTrace.c)
 *     PfSnCleanupTrace @ 0x1404F6FD4 (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x1404F70F4 (PfSnBuildDumpFromTrace.c)
 *     PfTCreateTraceDump @ 0x1404F87C0 (PfTCreateTraceDump.c)
 *     PspQueueApcSpecialApc @ 0x1404F9234 (PspQueueApcSpecialApc.c)
 *     SmStoreSetProcessVaRanges @ 0x1404FAF38 (SmStoreSetProcessVaRanges.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404FB0F8 (MiFreeWorkingSetSwapContext.c)
 *     NtSetInformationVirtualMemory @ 0x1404FB5E8 (NtSetInformationVirtualMemory.c)
 *     MiBuildImageControlArea @ 0x1404FC19C (MiBuildImageControlArea.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     PfSnBeginScenario @ 0x1404FD948 (PfSnBeginScenario.c)
 *     ExpWnfLookupPermanentName @ 0x1404FE56C (ExpWnfLookupPermanentName.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     NtUpdateWnfStateData @ 0x140501A48 (NtUpdateWnfStateData.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140501F5C (ExpWnfSubscribeWnfStateChange.c)
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     NtQueryWnfStateData @ 0x1405026FC (NtQueryWnfStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x140503024 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x14050395C (ExpWnfWriteStateData.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     EtwExitProcess @ 0x140504694 (EtwExitProcess.c)
 *     RtlpFreeAtom @ 0x140504D9C (RtlpFreeAtom.c)
 *     AlpcpFreeMessageFunction @ 0x140504E5C (AlpcpFreeMessageFunction.c)
 *     MmDeleteProcessAddressSpace @ 0x1405053D4 (MmDeleteProcessAddressSpace.c)
 *     ExpWnfDeleteProcessContext @ 0x140505720 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1405059CC (ExpWnfDeleteSubscription.c)
 *     PspQueryRateControlHistory @ 0x140506D2C (PspQueryRateControlHistory.c)
 *     PspCaptureUserProcessParameters @ 0x140507D64 (PspCaptureUserProcessParameters.c)
 *     PspRundownSingleProcess @ 0x140508838 (PspRundownSingleProcess.c)
 *     ExpFreeHandleTable @ 0x140508CCC (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x140508DD0 (ExpFreeTablePagedPool.c)
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
 *     EtwpPsProvTraceProcess @ 0x14050BCA8 (EtwpPsProvTraceProcess.c)
 *     EtwTraceProcess @ 0x14050C208 (EtwTraceProcess.c)
 *     EtwpQueryProcessCommandLine @ 0x14050C998 (EtwpQueryProcessCommandLine.c)
 *     NtQueryInformationProcess @ 0x14050D9A0 (NtQueryInformationProcess.c)
 *     ObfDereferenceDeviceMap @ 0x140510A14 (ObfDereferenceDeviceMap.c)
 *     CcUnpinData @ 0x140511420 (CcUnpinData.c)
 *     sub_140511984 @ 0x140511984 (sub_140511984.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     SeReleaseImageValidationContext @ 0x14051ABE4 (SeReleaseImageValidationContext.c)
 *     MiPrefetchControlArea @ 0x14051B0F4 (MiPrefetchControlArea.c)
 *     SeValidateImageHeader @ 0x14051B2B0 (SeValidateImageHeader.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     MiCreateVadEventBitmap @ 0x14051C46C (MiCreateVadEventBitmap.c)
 *     ExLockUserBuffer @ 0x14051CAD0 (ExLockUserBuffer.c)
 *     PiUEventBroadcastEventWorker @ 0x14051CD24 (PiUEventBroadcastEventWorker.c)
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     NtQueryLicenseValue @ 0x14051D354 (NtQueryLicenseValue.c)
 *     ExpGenuinePolicyPostProcess @ 0x14051DEEC (ExpGenuinePolicyPostProcess.c)
 *     sub_14051F670 @ 0x14051F670 (sub_14051F670.c)
 *     NtQueryDirectoryObject @ 0x140520F80 (NtQueryDirectoryObject.c)
 *     MiReleaseDriverPtes @ 0x140521ACC (MiReleaseDriverPtes.c)
 *     AlpcpCaptureMessageData @ 0x140523318 (AlpcpCaptureMessageData.c)
 *     ExpAllocateHandleTable @ 0x140523D44 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140523FC0 (ExpAllocateTablePagedPoolNoZero.c)
 *     EtwpFreeLoggerContext @ 0x140524388 (EtwpFreeLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x140524604 (EtwpFreeTraceBufferPool.c)
 *     ObpInsertHandleCount @ 0x140524B64 (ObpInsertHandleCount.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140524EA0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140525110 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x140526A90 (SepProbeAndCaptureString_U.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x140527FE0 (SepDereferenceLowBoxHandlesEntry.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x140528180 (SepDereferenceLowBoxNumberEntry.c)
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 *     AlpcpFreeCompletionList @ 0x14052D2E8 (AlpcpFreeCompletionList.c)
 *     SeAppendPrivileges @ 0x14052D500 (SeAppendPrivileges.c)
 *     IoWMISystemControl @ 0x14052D8A8 (IoWMISystemControl.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x14052DF08 (ExpGetSystemFirmwareTableInformation.c)
 *     SepDeReferenceLogonSession @ 0x14052E368 (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x14052E598 (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     _RegRtlQueryValue @ 0x140530770 (_RegRtlQueryValue.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140532058 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     AlpcConnectionDestroyProcedure @ 0x140533124 (AlpcConnectionDestroyProcedure.c)
 *     WmipFreeTraceDeviceList @ 0x140533358 (WmipFreeTraceDeviceList.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     PipRemoveDevicesInRelationList @ 0x1405349D8 (PipRemoveDevicesInRelationList.c)
 *     IopDeleteDevice @ 0x140534BEC (IopDeleteDevice.c)
 *     IopDestroyDeviceNode @ 0x140534C48 (IopDestroyDeviceNode.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140534E10 (PiBuildDeviceNodeInstancePath.c)
 *     PnpFreeDeviceInstancePath @ 0x140534F5C (PnpFreeDeviceInstancePath.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x140535188 (PnpQueuePendingSurpriseRemoval.c)
 *     PnpProcessRelation @ 0x140535938 (PnpProcessRelation.c)
 *     IopFreeRelationList @ 0x140535FC0 (IopFreeRelationList.c)
 *     PipFreeDeviceObjectList @ 0x140535FF4 (PipFreeDeviceObjectList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140537FFC (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PoFxAbandonDevice @ 0x140538568 (PoFxAbandonDevice.c)
 *     PiSwStopDestroy @ 0x1405388DC (PiSwStopDestroy.c)
 *     PnpDisableDeviceInterfaces @ 0x140538D8C (PnpDisableDeviceInterfaces.c)
 *     PnpUnloadAttachedDriver @ 0x1405395A8 (PnpUnloadAttachedDriver.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     PiSwProcessRemove @ 0x140539C30 (PiSwProcessRemove.c)
 *     PiSwBusRelationRemove @ 0x140539D58 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x140539DD0 (PiSwDeviceDereference.c)
 *     PiSwDeviceFree @ 0x140539E04 (PiSwDeviceFree.c)
 *     PiSwPnPInfoFree @ 0x140539EAC (PiSwPnPInfoFree.c)
 *     PiSwInstanceInfoFree @ 0x140539F10 (PiSwInstanceInfoFree.c)
 *     PiSwPdoAssociationFree @ 0x140539F9C (PiSwPdoAssociationFree.c)
 *     NtGetMUIRegistryInfo @ 0x14053A748 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     MUIInitializeResourceLock @ 0x14053B410 (MUIInitializeResourceLock.c)
 *     ObpDeleteDirectoryEntry @ 0x14053BE00 (ObpDeleteDirectoryEntry.c)
 *     SepCreateLogonSessionTrack @ 0x14053C348 (SepCreateLogonSessionTrack.c)
 *     NtCloseObjectAuditAlarm @ 0x14053C610 (NtCloseObjectAuditAlarm.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 *     PspFreeRateControl @ 0x14053CDC8 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x14053CE10 (PspAllocateRateControl.c)
 *     PiDqQueryRelease @ 0x14053D4E0 (PiDqQueryRelease.c)
 *     SepUpdateLogonSessionTrack @ 0x14053D66C (SepUpdateLogonSessionTrack.c)
 *     SeTokenIsElevated @ 0x14053E684 (SeTokenIsElevated.c)
 *     ExpWnfFreeScopeInstance @ 0x14053EDF0 (ExpWnfFreeScopeInstance.c)
 *     NtDeleteWnfStateName @ 0x14053EEF0 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteNameInstance @ 0x14053F340 (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x14053F6E0 (ExpWnfDeleteStateData.c)
 *     FsRtlTeardownPerFileContexts @ 0x14053F90C (FsRtlTeardownPerFileContexts.c)
 *     RtlpProcessIFEOKeyFilter @ 0x140540030 (RtlpProcessIFEOKeyFilter.c)
 *     AlpcpAllocateMessageFunction @ 0x1405402B8 (AlpcpAllocateMessageFunction.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     PiQueryRemovableDeviceOverride @ 0x140540D3C (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x140540FE4 (PipFindDeviceOverrideEntry.c)
 *     SeDeassignSecurity @ 0x1405411DC (SeDeassignSecurity.c)
 *     NtQueryMultipleValueKey @ 0x140542CE4 (NtQueryMultipleValueKey.c)
 *     NtRemoveIoCompletionEx @ 0x1405432F8 (NtRemoveIoCompletionEx.c)
 *     PfSnBeginTrace @ 0x140543FC8 (PfSnBeginTrace.c)
 *     NtCreatePrivateNamespace @ 0x14054422C (NtCreatePrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x14054467C (ObpVerifyCreatorAccessCheck.c)
 *     PfSnGetCompletedTrace @ 0x140544D6C (PfSnGetCompletedTrace.c)
 *     CmpMarkIndexDirty @ 0x1405451A8 (CmpMarkIndexDirty.c)
 *     RtlQueryImageFileKeyOption @ 0x140545DF4 (RtlQueryImageFileKeyOption.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1405471E8 (PiDmGetReferencedObjectFromProperty.c)
 *     ConstraintEval @ 0x140547464 (ConstraintEval.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140547B70 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140547CC4 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x140548108 (SepCaptureInt64Array.c)
 *     PiDqSerializationAlloc @ 0x14054836C (PiDqSerializationAlloc.c)
 *     RtlAcquirePrivilege @ 0x1405484C0 (RtlAcquirePrivilege.c)
 *     CmCallbackReleaseKeyObjectIDEx @ 0x140548844 (CmCallbackReleaseKeyObjectIDEx.c)
 *     IopSymlinkRememberJunction @ 0x14054891C (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x140548C04 (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 *     IoQueryFileDosDeviceName @ 0x140549C1C (IoQueryFileDosDeviceName.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     EtwpUpdateKernelGroupsWork @ 0x14054A34C (EtwpUpdateKernelGroupsWork.c)
 *     EtwpProcessThreadImageRundown @ 0x14054B004 (EtwpProcessThreadImageRundown.c)
 *     NtQueryWnfStateNameInformation @ 0x14054BE40 (NtQueryWnfStateNameInformation.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 *     RtlGetNtProductType @ 0x14054E0B0 (RtlGetNtProductType.c)
 *     CmpRemoveFromSecurityCache @ 0x14054E720 (CmpRemoveFromSecurityCache.c)
 *     PnpQueryBusInformation @ 0x14054E8A4 (PnpQueryBusInformation.c)
 *     PnpBusTypeGuidGetIndex @ 0x14054E968 (PnpBusTypeGuidGetIndex.c)
 *     PiNormalizeDeviceText @ 0x14054F2C8 (PiNormalizeDeviceText.c)
 *     EtwpFreeGuidEntry @ 0x14054F670 (EtwpFreeGuidEntry.c)
 *     IopDoDeferredSetInterfaceState @ 0x140550270 (IopDoDeferredSetInterfaceState.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1405504A8 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopSetDeviceSecurityDescriptor @ 0x140550548 (IopSetDeviceSecurityDescriptor.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405506E4 (PiCMGetRelatedDeviceInstance.c)
 *     PfSnArrayGrow @ 0x140550980 (PfSnArrayGrow.c)
 *     PiCMGetDeviceIdList @ 0x140550A70 (PiCMGetDeviceIdList.c)
 *     PiCMCaptureDeviceListInputData @ 0x140550E44 (PiCMCaptureDeviceListInputData.c)
 *     HvFreeUnreconciledData @ 0x140551154 (HvFreeUnreconciledData.c)
 *     EtwpUpdateDisallowedGuids @ 0x14055146C (EtwpUpdateDisallowedGuids.c)
 *     RtlReleasePrivilege @ 0x1405538A8 (RtlReleasePrivilege.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x140553FE0 (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     PiDqTraceQueryCreate @ 0x140554728 (PiDqTraceQueryCreate.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x140554F94 (ExpWnfCheckCrossScopeAccess.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140555D3C (PiPnpRtlGetFilteredDeviceList.c)
 *     MiCreateRotateView @ 0x1405563AC (MiCreateRotateView.c)
 *     WmipDSCleanup @ 0x14055653C (WmipDSCleanup.c)
 *     PiDeferSetInterfaceState @ 0x140556B68 (PiDeferSetInterfaceState.c)
 *     WmipDeleteMethod @ 0x140556C0C (WmipDeleteMethod.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x1405574D0 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     PiDqGrowPropertyArray @ 0x1405577CC (PiDqGrowPropertyArray.c)
 *     WmipSecurityMethod @ 0x140557AFC (WmipSecurityMethod.c)
 *     IopQueryLegacyBusInformation @ 0x140557F10 (IopQueryLegacyBusInformation.c)
 *     EtwpReceiveReplyDataBlock @ 0x140558144 (EtwpReceiveReplyDataBlock.c)
 *     PiDqFreeGenericTableEntry @ 0x1405582F8 (PiDqFreeGenericTableEntry.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 *     PerfDiagpProxyWorker @ 0x140558690 (PerfDiagpProxyWorker.c)
 *     ObpDeleteSymbolicLink @ 0x140558BFC (ObpDeleteSymbolicLink.c)
 *     SepNotifyFileSystems @ 0x140558C4C (SepNotifyFileSystems.c)
 *     CmpAdjustSecurityCacheSize @ 0x140558D7C (CmpAdjustSecurityCacheSize.c)
 *     CmpDelayFreeRMWorker @ 0x140559334 (CmpDelayFreeRMWorker.c)
 *     NtNotifyChangeSession @ 0x140559524 (NtNotifyChangeSession.c)
 *     CmpCheckSecurityCellAccess @ 0x1405598A8 (CmpCheckSecurityCellAccess.c)
 *     PopPowerRequestFree @ 0x1405599E8 (PopPowerRequestFree.c)
 *     sub_140559BD8 @ 0x140559BD8 (sub_140559BD8.c)
 *     PoDiagFreeUsermodeStack @ 0x140559DE0 (PoDiagFreeUsermodeStack.c)
 *     ExpWnfRegisterPermanentName @ 0x14055A4A8 (ExpWnfRegisterPermanentName.c)
 *     EtwpAcquireTokenAccessInformation @ 0x14055A838 (EtwpAcquireTokenAccessInformation.c)
 *     sub_14055AA50 @ 0x14055AA50 (sub_14055AA50.c)
 *     sub_14055AB0C @ 0x14055AB0C (sub_14055AB0C.c)
 *     WmipLegacyEtwWorker @ 0x14055AC9C (WmipLegacyEtwWorker.c)
 *     FsRtlNotifyUninitializeSync @ 0x14055B258 (FsRtlNotifyUninitializeSync.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14055B534 (PfSnTracingStateExWorkerRoutine.c)
 *     WmipISCleanup @ 0x14055B6EC (WmipISCleanup.c)
 *     EtwpCreateUmReplyObject @ 0x14055B78C (EtwpCreateUmReplyObject.c)
 *     EtwpGenerateFileName @ 0x14055BC88 (EtwpGenerateFileName.c)
 *     WmipQueueNotification @ 0x14055BE88 (WmipQueueNotification.c)
 *     SepReadAndPopulateCapes @ 0x14055C3A8 (SepReadAndPopulateCapes.c)
 *     PfpPrefetchPrivatePages @ 0x14055C5B0 (PfpPrefetchPrivatePages.c)
 *     PfpSourceBuildVaArray @ 0x14055C9AC (PfpSourceBuildVaArray.c)
 *     PopPowerInformationInternal @ 0x14055CB5C (PopPowerInformationInternal.c)
 *     KeFreeCalloutStack @ 0x14055CCCC (KeFreeCalloutStack.c)
 *     CMFFreeFn @ 0x14055D258 (CMFFreeFn.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     PiSwFreeGenericTableEntry @ 0x14055D328 (PiSwFreeGenericTableEntry.c)
 *     MiInSwapStoreContextDereference @ 0x14055D4E4 (MiInSwapStoreContextDereference.c)
 *     IopPnPDispatch @ 0x14055D5D4 (IopPnPDispatch.c)
 *     PiUEventHandleVetoEvent @ 0x14055E55C (PiUEventHandleVetoEvent.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14055E6C0 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 *     PiCMCaptureInterfaceAliasInputData @ 0x14055ED48 (PiCMCaptureInterfaceAliasInputData.c)
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     IoSetPartitionInformation @ 0x14055FBF8 (IoSetPartitionInformation.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14055FFC8 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1405601D8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056032C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     FsRtlDeleteTunnelCache @ 0x14056050C (FsRtlDeleteTunnelCache.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     IoRegisterPlugPlayNotification @ 0x140561348 (IoRegisterPlugPlayNotification.c)
 *     IoVolumeDeviceToGuid @ 0x1405624CC (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceToGuidPath @ 0x14056254C (IoVolumeDeviceToGuidPath.c)
 *     FstubFreeDiskInformation @ 0x14056298C (FstubFreeDiskInformation.c)
 *     FstubReadPartitionTableMBR @ 0x1405629C4 (FstubReadPartitionTableMBR.c)
 *     IoReadPartitionTable @ 0x140562AE0 (IoReadPartitionTable.c)
 *     HalpGetFullGeometry @ 0x1405630A4 (HalpGetFullGeometry.c)
 *     FstubAllocateDiskInformation @ 0x140563328 (FstubAllocateDiskInformation.c)
 *     FstubGetDiskGeometry @ 0x1405633DC (FstubGetDiskGeometry.c)
 *     PopFreeHiberContext @ 0x140564AB8 (PopFreeHiberContext.c)
 *     NtInitiatePowerAction @ 0x140565308 (NtInitiatePowerAction.c)
 *     PoClearBroadcast @ 0x140565E40 (PoClearBroadcast.c)
 *     PopFinalizeWakeInfo @ 0x140567934 (PopFinalizeWakeInfo.c)
 *     MiCheckSessionPoolAllocations @ 0x140567CD4 (MiCheckSessionPoolAllocations.c)
 *     IoDisconnectInterruptEx @ 0x140568260 (IoDisconnectInterruptEx.c)
 *     IoDisconnectInterrupt @ 0x1405682D8 (IoDisconnectInterrupt.c)
 *     SepDeleteLogonSessionTrack @ 0x14056899C (SepDeleteLogonSessionTrack.c)
 *     PopFreeRegistration @ 0x140568E5C (PopFreeRegistration.c)
 *     BiUnloadHiveByHandle @ 0x1405690B8 (BiUnloadHiveByHandle.c)
 *     BiUnloadHiveByName @ 0x140569140 (BiUnloadHiveByName.c)
 *     PopLoadResumeContext @ 0x140569238 (PopLoadResumeContext.c)
 *     BiGetObjectIdentifier @ 0x1405693A0 (BiGetObjectIdentifier.c)
 *     BiGetKeyName @ 0x1405693EC (BiGetKeyName.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14056950C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     BiDeleteKey @ 0x140569810 (BiDeleteKey.c)
 *     MiSessionObjectDelete @ 0x140569CC8 (MiSessionObjectDelete.c)
 *     PopHiberInitializeResources @ 0x140569E78 (PopHiberInitializeResources.c)
 *     PiSwIrpPropertySet @ 0x14056A754 (PiSwIrpPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x14056A96C (PiSwUpdateArrayProperties.c)
 *     EtwpCCSwapStart @ 0x14056BADC (EtwpCCSwapStart.c)
 *     CmpPublishEventForPcaResolver @ 0x14056BEA0 (CmpPublishEventForPcaResolver.c)
 *     PopSetHiberFileMcb @ 0x14056C280 (PopSetHiberFileMcb.c)
 *     BiLoadSystemStore @ 0x14056D274 (BiLoadSystemStore.c)
 *     BiGetSystemStorePath @ 0x14056D3D0 (BiGetSystemStorePath.c)
 *     BiGetSystemPartition @ 0x14056D4B4 (BiGetSystemPartition.c)
 *     SiQuerySystemPartitionInformation @ 0x14056D57C (SiQuerySystemPartitionInformation.c)
 *     BiMarkTreatAsSystemStore @ 0x14056D744 (BiMarkTreatAsSystemStore.c)
 *     BiGetObjectDescription @ 0x14056D7EC (BiGetObjectDescription.c)
 *     BiOpenSystemStore @ 0x14056DC80 (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14056DE7C (BiCleanupLoadedStores.c)
 *     BiEnumerateSubKeys @ 0x14056DFB8 (BiEnumerateSubKeys.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14056E654 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14056EC30 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x14056EE8C (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14056EFF4 (BiGetDriveLayoutBlock.c)
 *     BiIsWinPEBoot @ 0x14056F0BC (BiIsWinPEBoot.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14056F2D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiIsSystemStore @ 0x14056F55C (BiIsSystemStore.c)
 *     PopBcdReadElement @ 0x14056F618 (PopBcdReadElement.c)
 *     BiCreateKey @ 0x14056F820 (BiCreateKey.c)
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14056FB78 (BcdSetElementDataWithFlags.c)
 *     BiCloseKey @ 0x14056FD14 (BiCloseKey.c)
 *     BiCreateKeySecurityDescriptor @ 0x14056FD5C (BiCreateKeySecurityDescriptor.c)
 *     BcdGetElementDataWithFlags @ 0x14056FEE4 (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x140570094 (BiOpenKey.c)
 *     BiConvertElementToRegistryData @ 0x140570370 (BiConvertElementToRegistryData.c)
 *     BiConvertRegistryDataToElement @ 0x140570730 (BiConvertRegistryDataToElement.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14057093C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1405709EC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140570E08 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140571020 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x14057129C (BiVerifyBootPartition.c)
 *     PopBcdSetupResumeObject @ 0x14057143C (PopBcdSetupResumeObject.c)
 *     NtLoadDriver @ 0x14057157C (NtLoadDriver.c)
 *     MmCallDllInitialize @ 0x140571780 (MmCallDllInitialize.c)
 *     IopCallDriverReinitializationRoutines @ 0x140571B94 (IopCallDriverReinitializationRoutines.c)
 *     PipServiceInstanceToDeviceInstance @ 0x140571C48 (PipServiceInstanceToDeviceInstance.c)
 *     PnpIsAnyDeviceInstanceEnabled @ 0x140571E34 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PnpPrepareDriverLoading @ 0x1405729F0 (PnpPrepareDriverLoading.c)
 *     PpCheckInDriverDatabase @ 0x140572AC8 (PpCheckInDriverDatabase.c)
 *     IopBuildFullDriverPath @ 0x140572CFC (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1405758EC (MiSnapThunk.c)
 *     MiConstructLoaderEntry @ 0x140576044 (MiConstructLoaderEntry.c)
 *     MiCompressImportList @ 0x140576CA0 (MiCompressImportList.c)
 *     AslFree @ 0x1405783C4 (AslFree.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     IoWMIQuerySingleInstance @ 0x14057AC60 (IoWMIQuerySingleInstance.c)
 *     WmipQuerySetExecuteSI @ 0x14057AD90 (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 *     WmipRegisterOrUpdateDS @ 0x14057B564 (WmipRegisterOrUpdateDS.c)
 *     WmipAddDataSource @ 0x14057B770 (WmipAddDataSource.c)
 *     WmipBuildInstanceSet @ 0x14057BA68 (WmipBuildInstanceSet.c)
 *     IopConnectLineBasedInterrupt @ 0x14057C66C (IopConnectLineBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x14057C8D8 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x14057CB44 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14057D528 (IopGetInterruptConnectionData.c)
 *     RtlQueryModuleInformation @ 0x14057D670 (RtlQueryModuleInformation.c)
 *     pIoQueryDeviceDescription @ 0x14057D9B0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14057DE14 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14057DF20 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x14057E268 (IopGetRegistryKeyInformation.c)
 *     WmipRegistrationWorker @ 0x14057E3C4 (WmipRegistrationWorker.c)
 *     IoRegisterDeviceInterface @ 0x14057EEA0 (IoRegisterDeviceInterface.c)
 *     KeAllocateCalloutStackEx @ 0x14057F020 (KeAllocateCalloutStackEx.c)
 *     IoQuerySystemDeviceName @ 0x14057F754 (IoQuerySystemDeviceName.c)
 *     SiGetSystemDeviceName @ 0x14057F8C8 (SiGetSystemDeviceName.c)
 *     SiGetSystemPartition @ 0x14057F9C0 (SiGetSystemPartition.c)
 *     SiGetFirmwareBootDeviceName @ 0x14057FA0C (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14057FC04 (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x14057FF3C (SiIsWinPEBoot.c)
 *     SiGetRegistryValue @ 0x14057FFA0 (SiGetRegistryValue.c)
 *     MiFreeRelocations @ 0x1405804F8 (MiFreeRelocations.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140580598 (NtPrivilegeObjectAuditAlarm.c)
 *     SepImageVerificationCallbackWorker @ 0x1405811C0 (SepImageVerificationCallbackWorker.c)
 *     WmipCopyFromEventQueues @ 0x140581224 (WmipCopyFromEventQueues.c)
 *     MiFormFullImageName @ 0x14058298C (MiFormFullImageName.c)
 *     WmipGetFilePDO @ 0x140582DB8 (WmipGetFilePDO.c)
 *     MiDeleteSessionDriverProtos @ 0x1405833BC (MiDeleteSessionDriverProtos.c)
 *     MiInitializeMirroring @ 0x140583560 (MiInitializeMirroring.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14058417C (NtQuerySystemEnvironmentValueEx.c)
 *     SepExamineSaclEx @ 0x140584948 (SepExamineSaclEx.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     CmpCopySyncTree @ 0x140585040 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x1405850E0 (CmpCopySyncTree2.c)
 *     CmpCopyValue @ 0x140585A20 (CmpCopyValue.c)
 *     AdtpBuildObjectTypeStrings @ 0x140585F2C (AdtpBuildObjectTypeStrings.c)
 *     AdtpAppendString @ 0x14058615C (AdtpAppendString.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     sub_1405870FC @ 0x1405870FC (sub_1405870FC.c)
 *     AdtpBuildGuidString @ 0x140587638 (AdtpBuildGuidString.c)
 *     PiDevCfgProcessDevice @ 0x14058793C (PiDevCfgProcessDevice.c)
 *     PiDevCfgFreeDriverNode @ 0x140587BE8 (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x140588230 (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140588A84 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDevCfgMigrateDevice @ 0x140589F68 (PiDevCfgMigrateDevice.c)
 *     ExpQueryNumaAvailableMemory @ 0x14058A3D4 (ExpQueryNumaAvailableMemory.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14058AA90 (PnpQueueQueryAndRemoveEvent.c)
 *     _RegRtlEnumValue @ 0x14058B9D0 (_RegRtlEnumValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14058BBD8 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     PnpRestartDeviceNode @ 0x14058C398 (PnpRestartDeviceNode.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14058CBA8 (CmpAddRemoveContainerToCLFSLog.c)
 *     NtSetCachedSigningLevel @ 0x14058CEF8 (NtSetCachedSigningLevel.c)
 *     WheaAddErrorSource @ 0x14058D00C (WheaAddErrorSource.c)
 *     NtEnableLastKnownGood @ 0x14058D138 (NtEnableLastKnownGood.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14058D3C4 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14058D558 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     IoWMIExecuteMethod @ 0x14058DB5C (IoWMIExecuteMethod.c)
 *     PfFbBufferListCleanup @ 0x14058E1EC (PfFbBufferListCleanup.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14058E624 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     SiGetSystemDisk @ 0x14058E810 (SiGetSystemDisk.c)
 *     PnpLogVetoInformation @ 0x14058EADC (PnpLogVetoInformation.c)
 *     PfTCleanupBuffers @ 0x14058EB58 (PfTCleanupBuffers.c)
 *     CmpClearKeyAccessBits @ 0x14058ECA8 (CmpClearKeyAccessBits.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14058F2E0 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     RtlGenerateClass5Guid @ 0x14058F544 (RtlGenerateClass5Guid.c)
 *     WmipInsertMofResource @ 0x140590794 (WmipInsertMofResource.c)
 *     RtlpLoadInstallLanguageFallback @ 0x140590CB0 (RtlpLoadInstallLanguageFallback.c)
 *     CmpValueToData @ 0x14059110C (CmpValueToData.c)
 *     RtlpLoadLanguageConfigList @ 0x1405912A8 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x1405913C0 (RtlpMuiRegFreeRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x140591BAC (LdrpQueryValueKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140591CE8 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x140592378 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpGetWindowsPolicy @ 0x14059274C (RtlpGetWindowsPolicy.c)
 *     AdtpObjsInitialize @ 0x140592B28 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x140592FEC (AdtpInitializeDriveLetters.c)
 *     SepInitializationPhase1 @ 0x1405931F0 (SepInitializationPhase1.c)
 *     PsAllocateMonitorContextServerSilo @ 0x140593528 (PsAllocateMonitorContextServerSilo.c)
 *     PsRegisterMonitorServerSilo @ 0x1405936B8 (PsRegisterMonitorServerSilo.c)
 *     EtwpInitializeAutoLoggers @ 0x140593DC4 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x140594050 (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405941CC (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x1405945D0 (EtwpGetAutoLoggerProviderFilter.c)
 *     PiDmListInitEnumCallback @ 0x140595210 (PiDmListInitEnumCallback.c)
 *     PiDrvDbRegisterNode @ 0x1405955BC (PiDrvDbRegisterNode.c)
 *     ObCreateObjectTypeEx @ 0x140595F64 (ObCreateObjectTypeEx.c)
 *     MiCreateNodeLists @ 0x140596AF8 (MiCreateNodeLists.c)
 *     PnpSetInterruptInformation @ 0x140597B2C (PnpSetInterruptInformation.c)
 *     EmpProviderRegister @ 0x140597C74 (EmpProviderRegister.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     MmFreeBootRegistry @ 0x140598AF8 (MmFreeBootRegistry.c)
 *     PopExtendConnectionState @ 0x140599D40 (PopExtendConnectionState.c)
 *     PpmIdleRegisterDefaultStates @ 0x14059A25C (PpmIdleRegisterDefaultStates.c)
 *     IopCreateCmResourceList @ 0x14059B160 (IopCreateCmResourceList.c)
 *     IopReleaseFilteredBootResources @ 0x14059B274 (IopReleaseFilteredBootResources.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x14059BAAC (IopIsReportedAlready.c)
 *     IopDuplicateDetection @ 0x14059BD58 (IopDuplicateDetection.c)
 *     ArbInitializeArbiterInstance @ 0x14059BE90 (ArbInitializeArbiterInstance.c)
 *     PnpBuildCmResourceLists @ 0x14059C214 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x14059C7B4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x14059C8BC (IopAllocateBootResourcesInternal.c)
 *     IopFreeReqList @ 0x14059C9E8 (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x14059CA38 (IopFreeReqAlternative.c)
 *     PnpBuildCmResourceList @ 0x14059CAA8 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x14059CF2C (IopChildToRootTranslation.c)
 *     IopQueryResourceHandlerInterface @ 0x14059DC48 (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x14059E330 (IopTranslateAndAdjustReqDesc.c)
 *     ArbBuildAssignmentOrdering @ 0x14059E96C (ArbBuildAssignmentOrdering.c)
 *     ArbAddOrdering @ 0x14059EF44 (ArbAddOrdering.c)
 *     PnpFilterResourceRequirementsList @ 0x14059F0BC (PnpFilterResourceRequirementsList.c)
 *     ArbAllocateEntry @ 0x14059F850 (ArbAllocateEntry.c)
 *     ArbpBuildAllocationStack @ 0x14059FC54 (ArbpBuildAllocationStack.c)
 *     ArbBootAllocation @ 0x14059FD8C (ArbBootAllocation.c)
 *     ArbpGetRegistryValue @ 0x1405A0B44 (ArbpGetRegistryValue.c)
 *     RtlpFreeRangeListEntry @ 0x1405A0E48 (RtlpFreeRangeListEntry.c)
 *     ArbFreeOrderingList @ 0x1405A0EC8 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x1405A0F28 (ArbPruneOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x1405A114C (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405A134C (ArbAddMmConfigRangeAsBootReserved.c)
 *     SepGetLogonSessionAccountInfo @ 0x1405A1C10 (SepGetLogonSessionAccountInfo.c)
 *     AdtpBuildMessageString @ 0x1405A1DB0 (AdtpBuildMessageString.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 *     CmSetAcpiHwProfile @ 0x1405A2B5C (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x1405A3214 (CmpGetAcpiProfileInformation.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x1405A42BC (CmpSetVersionData.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A4EAC (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A50A0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeRegistryNode @ 0x1405A5A9C (CmpInitializeRegistryNode.c)
 *     CmpCmdInit @ 0x1405A6AF4 (CmpCmdInit.c)
 *     DbgkLkmdRegisterCallback @ 0x1405A6C94 (DbgkLkmdRegisterCallback.c)
 *     PsEstablishWin32Callouts @ 0x1405A6D60 (PsEstablishWin32Callouts.c)
 *     ObRegisterCallbacks @ 0x1405A6D9C (ObRegisterCallbacks.c)
 *     PsSetLoadImageNotifyRoutine @ 0x1405A6F6C (PsSetLoadImageNotifyRoutine.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x1405A7070 (PspSetCreateThreadNotifyRoutine.c)
 *     PoRegisterCoalescingCallback @ 0x1405A7100 (PoRegisterCoalescingCallback.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x1405A71BC (PspSetCreateProcessNotifyRoutine.c)
 *     SepRmGlobalSaclSetWrkr @ 0x1405A774C (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x1405A77D8 (SepRmFetchGlobalSacl.c)
 *     PopRequestShutdownWait @ 0x1405A7C70 (PopRequestShutdownWait.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x1405A7F40 (_CmGetMatchingDeviceListForSubkey.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405A8114 (_RegRtlDeleteTreeInternal.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405A84A0 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x1405A8908 (_CmGetMatchingCommonClassListWorker.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1405A8A4C (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlEnumKey @ 0x1405A8C6C (_RegRtlEnumKey.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x1405A8E28 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x1405A9344 (_CmEnumSubkeyCallback.c)
 *     ExpParseFastCacheHelper @ 0x1405A9894 (ExpParseFastCacheHelper.c)
 *     PiUpdateDriverDBCache @ 0x1405AA750 (PiUpdateDriverDBCache.c)
 *     PiDmListInit @ 0x1405ABF60 (PiDmListInit.c)
 *     PiDmObjectManagerPopulate @ 0x1405ABFB4 (PiDmObjectManagerPopulate.c)
 *     PoFxRegisterCoreDevice @ 0x1405AC5B0 (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterDevice @ 0x1405AC6C4 (PoFxRegisterDevice.c)
 *     PopFxTraceDeviceRegistration @ 0x1405AC94C (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 *     PopPepRegisterDevice @ 0x1405AD2D0 (PopPepRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x1405AD664 (PopFxConvertV1Components.c)
 *     WdipSemCleanupGroupPolicy @ 0x1405ADDA0 (WdipSemCleanupGroupPolicy.c)
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 *     PpmParkRegisterParking @ 0x1405B0118 (PpmParkRegisterParking.c)
 *     PpmPerfResizeHistoryAll @ 0x1405B1208 (PpmPerfResizeHistoryAll.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     PpReleaseBootDDB @ 0x1405B2758 (PpReleaseBootDDB.c)
 *     WmipAllocGuidEntry @ 0x1405B2AE8 (WmipAllocGuidEntry.c)
 *     IoCreateSystemThread @ 0x1405B2B7C (IoCreateSystemThread.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 *     PiDqIrpPropertySet @ 0x1405B2FC8 (PiDqIrpPropertySet.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PnpReadDeviceConfiguration @ 0x1405B3828 (PnpReadDeviceConfiguration.c)
 *     PiQueryPowerRelations @ 0x1405B3954 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x1405B3CE0 (PiQueryPowerDependencyRelations.c)
 *     PnpCheckPossibleBootStartDriver @ 0x1405B3D78 (PnpCheckPossibleBootStartDriver.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     PiAuAllocateAndInitializeSid @ 0x1405B5958 (PiAuAllocateAndInitializeSid.c)
 *     PfpCreateEvent @ 0x1405B7260 (PfpCreateEvent.c)
 *     IopThreadStart @ 0x1405B7440 (IopThreadStart.c)
 *     IoReadDiskSignature @ 0x1405B748C (IoReadDiskSignature.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405B7858 (PipApplyFunctionToServiceInstances.c)
 *     CmpStartRMLog @ 0x1405B8B98 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x1405B9014 (CmpStartCLFSLog.c)
 *     FsRtlGetTunnelParameterValue @ 0x1405B945C (FsRtlGetTunnelParameterValue.c)
 *     NtSetUuidSeed @ 0x1405B9554 (NtSetUuidSeed.c)
 *     PiDcInitUpdateProperties @ 0x1405B9CB8 (PiDcInitUpdateProperties.c)
 *     WheapLogInitEvent @ 0x1405BA4F8 (WheapLogInitEvent.c)
 *     WmipGenerateMofResourceNotification @ 0x1405BA69C (WmipGenerateMofResourceNotification.c)
 *     DrvDbOpenContext @ 0x1405BAEA0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405BB0F0 (DrvDbCreateDatabaseNode.c)
 *     ExpQueryMemoryTopologyInformation @ 0x1405BB274 (ExpQueryMemoryTopologyInformation.c)
 *     CmpParseCacheAddSymbolicLink @ 0x1405BB434 (CmpParseCacheAddSymbolicLink.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405BB80C (FsRtlpRegisterProviderWithMUP.c)
 *     _PnpCtxOpenMachine @ 0x1405BBB38 (_PnpCtxOpenMachine.c)
 *     _SysCtxOpenMachine @ 0x1405BBCB8 (_SysCtxOpenMachine.c)
 *     ObSetDeviceMap @ 0x1405BBFDC (ObSetDeviceMap.c)
 *     WmipGenerateBinaryMofNotification @ 0x1405BC498 (WmipGenerateBinaryMofNotification.c)
 *     SepSetSystemPaths @ 0x1405BC640 (SepSetSystemPaths.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405BCA4C (ExpRegisterFirmwareTableInformationHandler.c)
 *     IoRegisterContainerNotification @ 0x1405BD318 (IoRegisterContainerNotification.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     ExpWnfPopulateStateData @ 0x1405BDB94 (ExpWnfPopulateStateData.c)
 *     CmpRegisterCallbackInternal @ 0x1405BDDDC (CmpRegisterCallbackInternal.c)
 *     SepBuildDefaultCap @ 0x1405BE024 (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 *     DbgkRegisterErrorPort @ 0x1405BE8F4 (DbgkRegisterErrorPort.c)
 *     AlpcpInitializeMessageLog @ 0x1405BEF50 (AlpcpInitializeMessageLog.c)
 *     ExpGetSystemPlatformBinary @ 0x1405BF130 (ExpGetSystemPlatformBinary.c)
 *     NtDeleteWnfStateData @ 0x1405BF43C (NtDeleteWnfStateData.c)
 *     CmpAddStringToMapping @ 0x1405BFB4C (CmpAddStringToMapping.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405C0314 (PopCreateHiberFileSecurityDescriptor.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x1405C0FE8 (ExNotifyPlatformBinaryExecuted.c)
 *     WheaCrashDumpInitializationComplete @ 0x1405C10BC (WheaCrashDumpInitializationComplete.c)
 *     PnpDriverLoadingFailed @ 0x1405C1A3C (PnpDriverLoadingFailed.c)
 *     SepAuditAssignPrimaryToken @ 0x1405C1B90 (SepAuditAssignPrimaryToken.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405C2A9C (ExGetFirmwareEnvironmentVariable.c)
 *     IopCopyBootLogRegistryToFile @ 0x1405C2B88 (IopCopyBootLogRegistryToFile.c)
 *     PiSwIrpInterfacePropertySet @ 0x1405C2F68 (PiSwIrpInterfacePropertySet.c)
 *     PopConnectToPolicyDevice @ 0x1405C32C0 (PopConnectToPolicyDevice.c)
 *     PoCreateThermalRequest @ 0x1405C364C (PoCreateThermalRequest.c)
 *     PiSwIrpInterfaceSetState @ 0x1405C44E0 (PiSwIrpInterfaceSetState.c)
 *     PfpRpCHashEmpty @ 0x1405C46D4 (PfpRpCHashEmpty.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     MmStoreRegister @ 0x1405C5F98 (MmStoreRegister.c)
 *     PopPreallocateHibernateMemory @ 0x1405C61D8 (PopPreallocateHibernateMemory.c)
 *     PopDiagTraceThermalRequest @ 0x1405C6424 (PopDiagTraceThermalRequest.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405C660C (ExAllocatePrivateWorkerPool.c)
 *     CcUnpinDataForThread @ 0x14064FCC4 (CcUnpinDataForThread.c)
 *     CcFreeVacbArray @ 0x14064FD30 (CcFreeVacbArray.c)
 *     NtCompactKeys @ 0x14064FE10 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1406505EC (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x140650A88 (NtRenameKey.c)
 *     NtReplaceKey @ 0x140651088 (NtReplaceKey.c)
 *     CmCallbackGetKeyObjectID @ 0x140652544 (CmCallbackGetKeyObjectID.c)
 *     CmUnRegisterCallback @ 0x1406527EC (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x140652BC8 (CmpFreeCallbackObjectContexts.c)
 *     CmEtwRunDown @ 0x140652CF0 (CmEtwRunDown.c)
 *     CmpEtwDumpKcb @ 0x140652FB0 (CmpEtwDumpKcb.c)
 *     CmpTraceHiveSaveStart @ 0x140653730 (CmpTraceHiveSaveStart.c)
 *     CmpQuotaWarningWorker @ 0x140653C70 (CmpQuotaWarningWorker.c)
 *     CmpSystemHiveHysteresisWorker @ 0x140653CA4 (CmpSystemHiveHysteresisWorker.c)
 *     CmpFreeAllMemory @ 0x1406541E4 (CmpFreeAllMemory.c)
 *     CmRenameKey @ 0x140654994 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x140655BB8 (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x140656248 (CmSetLastWriteTimeKey.c)
 *     CmpDumpKeyBodyList @ 0x140656AC4 (CmpDumpKeyBodyList.c)
 *     CmVirtualKCBToRealPath @ 0x140657A00 (CmVirtualKCBToRealPath.c)
 *     CmpBuildAdminInformation @ 0x140657B40 (CmpBuildAdminInformation.c)
 *     CmpBuildVirtualReplicationStack @ 0x140657EBC (CmpBuildVirtualReplicationStack.c)
 *     CmpCheckAdminAccess @ 0x140658050 (CmpCheckAdminAccess.c)
 *     CmpRemoveHiveFromMapping @ 0x140658DD0 (CmpRemoveHiveFromMapping.c)
 *     CmpReplicateKeyToVirtual @ 0x140658F4C (CmpReplicateKeyToVirtual.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140659598 (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1406599C0 (CmpReportAuditVirtualizationEvent.c)
 *     CmpCmdRenameHive @ 0x14065AD80 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarningWorker @ 0x14065AEB0 (CmpDiskFullWarningWorker.c)
 *     CmpParseCacheClose @ 0x14065B5A4 (CmpParseCacheClose.c)
 *     CmInitializeProcessor @ 0x14065B694 (CmInitializeProcessor.c)
 *     CmpFreeOffsetArray @ 0x14065C1A4 (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14065C1F0 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpRollbackTransactionArray @ 0x14065CCEC (CmpRollbackTransactionArray.c)
 *     CmpDoReadTxRBigLogRecord @ 0x14065CEE8 (CmpDoReadTxRBigLogRecord.c)
 *     CmpRmAnalysisPhase @ 0x14065D144 (CmpRmAnalysisPhase.c)
 *     CmpRmReDoPhase @ 0x14065D354 (CmpRmReDoPhase.c)
 *     CmpRmUnDoPhase @ 0x14065D500 (CmpRmUnDoPhase.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 *     CmDeleteKeyRecursive @ 0x14065EBF8 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     CmpMergeKeyValues @ 0x14065FFA8 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x140660170 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x140660968 (CmpGetValueForAudit.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     CmpSaveKeyByFileCopy @ 0x140662794 (CmpSaveKeyByFileCopy.c)
 *     HvpViewMapPrefetchFile @ 0x140663578 (HvpViewMapPrefetchFile.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 *     HvpGetLogHeader @ 0x140664AE4 (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1406650F0 (HvpRecoverData.c)
 *     HvpRecoverDataReadRoutine @ 0x14066534C (HvpRecoverDataReadRoutine.c)
 *     DbgkpFreeDebugEvent @ 0x140666E48 (DbgkpFreeDebugEvent.c)
 *     DbgkpPostModuleMessages @ 0x140667690 (DbgkpPostModuleMessages.c)
 *     DbgkpQueueMessage @ 0x140667B2C (DbgkpQueueMessage.c)
 *     DbgkpDeleteErrorPort @ 0x1406691C4 (DbgkpDeleteErrorPort.c)
 *     DbgkpSectionToFileHandle @ 0x140669708 (DbgkpSectionToFileHandle.c)
 *     DbgkCaptureLiveDump @ 0x14066980C (DbgkCaptureLiveDump.c)
 *     DbgkLkmdUnregisterCallback @ 0x140669C18 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140669E08 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14066A070 (DbgkpLkmdSnapThreadApc.c)
 *     DbgkpWerCleanupContext @ 0x14066AABC (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x14066AD80 (DbgkpWerFreePool.c)
 *     EmClientRuleDeregisterNotification @ 0x14066B558 (EmClientRuleDeregisterNotification.c)
 *     EmpClientRuleRegisterNotification @ 0x14066B668 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x14066B8DC (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x14066BB30 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x14066DAB4 (FsRtlIsDbcsInExpression.c)
 *     FsRtlHeatInit @ 0x14066E33C (FsRtlHeatInit.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14066E73C (FsRtlpHeatUnregisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x14066E7C4 (FsRtlpQueryValueKey.c)
 *     FsRtlNotifyCleanupAll @ 0x14066E9DC (FsRtlNotifyCleanupAll.c)
 *     IoWritePartitionTable @ 0x14066ED20 (IoWritePartitionTable.c)
 *     FstubReadPartitionTableEFI @ 0x14066F604 (FstubReadPartitionTableEFI.c)
 *     FstubSetPartitionInformationEFI @ 0x14066F8AC (FstubSetPartitionInformationEFI.c)
 *     FstubVerifyPartitionTableEFI @ 0x14066F990 (FstubVerifyPartitionTableEFI.c)
 *     FstubWritePartitionTableMBR @ 0x1406700C0 (FstubWritePartitionTableMBR.c)
 *     IopApcHardError @ 0x140670ED8 (IopApcHardError.c)
 *     IopCleanupFileObjectIosbRange @ 0x14067127C (IopCleanupFileObjectIosbRange.c)
 *     IopFreeGenericTableEntry @ 0x140671554 (IopFreeGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140671564 (IopGetRelatedFileName.c)
 *     IopHardErrorThread @ 0x1406718A8 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x140672188 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x140672424 (IopRaiseInformationalHardError.c)
 *     IopSafebootDriverLoad @ 0x14067249C (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1406725FC (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     IopStartApcHardError @ 0x1406734AC (IopStartApcHardError.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 *     IoReplaceFileObjectName @ 0x140674240 (IoReplaceFileObjectName.c)
 *     IoUnregisterFsRegistrationChange @ 0x1406745A4 (IoUnregisterFsRegistrationChange.c)
 *     IoUnregisterContainerNotification @ 0x140674E14 (IoUnregisterContainerNotification.c)
 *     IoIsValidNameGraftingBuffer @ 0x140674FB0 (IoIsValidNameGraftingBuffer.c)
 *     IopCopyOverNewPathSecure @ 0x140675354 (IopCopyOverNewPathSecure.c)
 *     IopReplaceSymlinkPath @ 0x140675458 (IopReplaceSymlinkPath.c)
 *     IopSymlinkApplyToOpenedName @ 0x140675754 (IopSymlinkApplyToOpenedName.c)
 *     IoUnregisterIoTracking @ 0x140675A3C (IoUnregisterIoTracking.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x1406771E4 (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140677378 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140677CBC (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x140677D3C (IopLiveDumpFreeMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x140677FBC (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140678288 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x1406783E0 (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140678EC0 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x1406793EC (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140679594 (IopGetEnvironmentVariableTrEE.c)
 *     IopOpenSystemVariableDevice @ 0x1406798D0 (IopOpenSystemVariableDevice.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140679BBC (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140679CEC (IopSetEnvironmentVariableTrEE.c)
 *     IopFindSystemDevice @ 0x140679E48 (IopFindSystemDevice.c)
 *     PnpShutdownDevices @ 0x14067A594 (PnpShutdownDevices.c)
 *     IopAppendLegacyVeto @ 0x14067B028 (IopAppendLegacyVeto.c)
 *     PiGetDeviceRegistryProperty @ 0x14067B0F8 (PiGetDeviceRegistryProperty.c)
 *     PnpRequestDeviceEjectExWorker @ 0x14067B3F0 (PnpRequestDeviceEjectExWorker.c)
 *     PpCreateLegacyDeviceIds @ 0x14067B474 (PpCreateLegacyDeviceIds.c)
 *     PipDeleteDependencyNode @ 0x14067BDE0 (PipDeleteDependencyNode.c)
 *     PipFreeBindingId @ 0x14067BEA0 (PipFreeBindingId.c)
 *     PipFreeBindingRequestEntry @ 0x14067BEC4 (PipFreeBindingRequestEntry.c)
 *     PnpDeleteDeviceInterfaces @ 0x14067C4CC (PnpDeleteDeviceInterfaces.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x14067CBB8 (PnpReportTargetDeviceChangeAsyncWorker.c)
 *     IoReportResourceUsageInternal @ 0x14067D0F0 (IoReportResourceUsageInternal.c)
 *     IoRequestDeviceRemovalForReset @ 0x14067D338 (IoRequestDeviceRemovalForReset.c)
 *     IopDeviceRemovalForResetComplete @ 0x14067D47C (IopDeviceRemovalForResetComplete.c)
 *     IopRetryDeviceRemovalForReset @ 0x14067D5BC (IopRetryDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14067DB34 (IopAllocatePassiveInterruptBlock.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14067E6F8 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x14067E910 (PnpProcessCompletedEject.c)
 *     IopReleaseResources @ 0x14067EA80 (IopReleaseResources.c)
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 *     IopIsPciRootBus @ 0x14067F6D4 (IopIsPciRootBus.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x14067FB38 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x14067FB74 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14067FB8C (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14067FDA4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140680078 (PiPnpRtlServiceFilterCallback.c)
 *     PiDmFreeGenericTableEntry @ 0x1406804AC (PiDmFreeGenericTableEntry.c)
 *     PnpRebalance @ 0x140680EDC (PnpRebalance.c)
 *     PiDcFreeGenericTableEntry @ 0x140681228 (PiDcFreeGenericTableEntry.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140681244 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140681488 (PiDcResetChildDeviceContainers.c)
 *     PiAuCheckClientInteractive @ 0x140681644 (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140681708 (PiAuCheckTokenMembership.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140681894 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x140681B20 (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqDeleteUserObject @ 0x140681EA0 (PiDqDeleteUserObject.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x1406821AC (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x1406822D4 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgBuildIndirectString @ 0x140682918 (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406835F4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x140683C20 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140683E18 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140683FDC (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1406852B8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x140685538 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x1406858BC (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140686C6C (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgFreeResolveContext @ 0x140686CF4 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140686DE0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgMakeServiceBootStart @ 0x140687EE8 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x140688EAC (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140688F1C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140689694 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableConstant @ 0x140689ED0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14068A004 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x14068A41C (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14068B800 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x14068BE74 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14068C788 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x14068C9D8 (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x14068CC44 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgVerifyService @ 0x14068CD54 (PiDevCfgVerifyService.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14068D6AC (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14068D6F0 (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x14068DC08 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14068DDE8 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpAddVetoInformation @ 0x14068E1DC (PnpAddVetoInformation.c)
 *     PnpRemoveEventFromQueue @ 0x14068E4C4 (PnpRemoveEventFromQueue.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x14068F5A4 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x14068F788 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x14068F8C4 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x14068FA7C (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x14068FE44 (PnprGetPluginDriverImagePath.c)
 *     PnprIsMemoryDevice @ 0x1406902E0 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x14069038C (PnprIsProcessorDevice.c)
 *     PnprLegacyDeviceDriversPresent @ 0x14069049C (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x1406904E8 (PnprLoadPluginDriver.c)
 *     PnprMmFree @ 0x140690D70 (PnprMmFree.c)
 *     PiSwInterfaceFree @ 0x140691080 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x1406912C0 (PiSwQueuedCreateInfoFree.c)
 *     PiCMCaptureCreateDeviceInputData @ 0x140691420 (PiCMCaptureCreateDeviceInputData.c)
 *     PiCMCaptureRegisterInterfaceInputData @ 0x140691880 (PiCMCaptureRegisterInterfaceInputData.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140692C44 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406930A8 (PiCMGetObjectPropertyKeys.c)
 *     PiCMRegisterDeviceInterface @ 0x1406934E4 (PiCMRegisterDeviceInterface.c)
 *     PiProcessSetDeviceProblem @ 0x140693E04 (PiProcessSetDeviceProblem.c)
 *     IopQueryDockRemovalInterface @ 0x140694240 (IopQueryDockRemovalInterface.c)
 *     PiControlGetDeviceStack @ 0x140694628 (PiControlGetDeviceStack.c)
 *     PiControlQueryAndRemoveDevice @ 0x140694958 (PiControlQueryAndRemoveDevice.c)
 *     PiControlQueryConflictList @ 0x140694AD8 (PiControlQueryConflictList.c)
 *     PiControlQueryDeviceRelations @ 0x140694D0C (PiControlQueryDeviceRelations.c)
 *     PiControlStartDevice @ 0x140694E7C (PiControlStartDevice.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x140695374 (PiQueryDeviceRelations.c)
 *     PiRearrangeDeviceInstances @ 0x1406955BC (PiRearrangeDeviceInstances.c)
 *     PnpRestoreResourcesInternal @ 0x140695F48 (PnpRestoreResourcesInternal.c)
 *     PiDrvDbDestroyNode @ 0x140696258 (PiDrvDbDestroyNode.c)
 *     IopExecuteHardwareProfileChange @ 0x1406962B0 (IopExecuteHardwareProfileChange.c)
 *     PiAuditStartedDevice @ 0x1406964A4 (PiAuditStartedDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     IopQueryConflictListInternal @ 0x140697A64 (IopQueryConflictListInternal.c)
 *     KiStartDynamicProcessor @ 0x14069849C (KiStartDynamicProcessor.c)
 *     KeInitializeUmsThread @ 0x140699CF0 (KeInitializeUmsThread.c)
 *     KeUnInitializeUmsThread @ 0x140699F10 (KeUnInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14069ECA0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x14069FC58 (AlpcpGetPortNameInformation.c)
 *     AlpcRegisterLogRoutine @ 0x14069FE4C (AlpcRegisterLogRoutine.c)
 *     AlpcUnregisterLogRoutine @ 0x14069FF70 (AlpcUnregisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406A0390 (AlpcpLogWaitForNewMessage.c)
 *     MiReturnProcessVads @ 0x1406A16E8 (MiReturnProcessVads.c)
 *     MmGetFileNameForAddress @ 0x1406A172C (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406A1834 (MmGetFileNameForSection.c)
 *     MiRemovePhysicalMemory @ 0x1406A1FE8 (MiRemovePhysicalMemory.c)
 *     MmAllocateNonCachedMemory @ 0x1406A2544 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x1406A27D0 (MmFreeNonCachedMemory.c)
 *     MiRemoveMdlPages @ 0x1406A28CC (MiRemoveMdlPages.c)
 *     MiLdwPopupWorker @ 0x1406A2F40 (MiLdwPopupWorker.c)
 *     MiFreeRotateView @ 0x1406A2FC0 (MiFreeRotateView.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 *     MiCreatePerSessionProtos @ 0x1406A3478 (MiCreatePerSessionProtos.c)
 *     MiAllocatePartitionId @ 0x1406A3690 (MiAllocatePartitionId.c)
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 *     MiHotAddPartitionMemory @ 0x1406A3DD4 (MiHotAddPartitionMemory.c)
 *     MiDeletePagefile @ 0x1406A4FBC (MiDeletePagefile.c)
 *     MiAweViewRemover @ 0x1406A5CE0 (MiAweViewRemover.c)
 *     MiDeletePhysicalProcessPages @ 0x1406A60B8 (MiDeletePhysicalProcessPages.c)
 *     MiFreeAweInfo @ 0x1406A6124 (MiFreeAweInfo.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1406A703C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406A75B4 (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406A7C70 (MmLogSystemShareablePfnInfo.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 *     MmInSwapVirtualAddresses @ 0x1406A94C8 (MmInSwapVirtualAddresses.c)
 *     MiAllocateLargeZeroPages @ 0x1406A9A90 (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x1406A9E00 (MiFindLargePageMemory.c)
 *     MiFreeLargePageView @ 0x1406AA134 (MiFreeLargePageView.c)
 *     MiAllocateFileExtents @ 0x1406AA2A0 (MiAllocateFileExtents.c)
 *     MiDeletePartialCloneVad @ 0x1406AA6A8 (MiDeletePartialCloneVad.c)
 *     MiFreeCloneDescriptor @ 0x1406AA7EC (MiFreeCloneDescriptor.c)
 *     MiReleaseScrubPacket @ 0x1406AA918 (MiReleaseScrubPacket.c)
 *     MmScrubMemory @ 0x1406AACD4 (MmScrubMemory.c)
 *     ObShutdownSystem @ 0x1406AAF80 (ObShutdownSystem.c)
 *     ObpSetObjectAuditInfo @ 0x1406AC044 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x1406AC304 (ObGetObjectInformation.c)
 *     ObpDestroyTypeArray @ 0x1406ACB04 (ObpDestroyTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x1406ACB58 (ObUnRegisterCallbacks.c)
 *     ObpCallPostOperationCallbacks @ 0x1406ACCD4 (ObpCallPostOperationCallbacks.c)
 *     ObpDeregisterObject @ 0x1406AD5D0 (ObpDeregisterObject.c)
 *     ObpDestroyStackAndObjectTables @ 0x1406AD7DC (ObpDestroyStackAndObjectTables.c)
 *     ObpFreeWorkItemBlock @ 0x1406AD8BC (ObpFreeWorkItemBlock.c)
 *     ObpGetObjectRefInfo @ 0x1406AD9C8 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x1406ADCDC (ObpInitStackAndObjectTables.c)
 *     ObpStartRuntimeStackTrace @ 0x1406AE3B8 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x1406AE860 (ObpStopRuntimeStackTrace.c)
 *     ObGetRootDirectoryNameByPointer @ 0x1406AEB94 (ObGetRootDirectoryNameByPointer.c)
 *     ObSetSiloRootDirectoryByPointer @ 0x1406AECC4 (ObSetSiloRootDirectoryByPointer.c)
 *     PfpPrefetchFiles @ 0x1406AF06C (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
 *     PfpRpShutdown @ 0x1406AFA78 (PfpRpShutdown.c)
 *     PfSnOperationProcess @ 0x1406AFE3C (PfSnOperationProcess.c)
 *     PopUnicodeStringDeepCopy @ 0x1406B0914 (PopUnicodeStringDeepCopy.c)
 *     PoDeleteThermalRequest @ 0x1406B1D44 (PoDeleteThermalRequest.c)
 *     PopCleanCoolingExtension @ 0x1406B202C (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406B2BE4 (PopRegisterCoolingExtensionProtection.c)
 *     PoReenableSleepStates @ 0x1406B2F98 (PoReenableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x1406B326C (PopGetPowerRequestListInfo.c)
 *     PoFxRegisterPrimaryDevice @ 0x1406B36D4 (PoFxRegisterPrimaryDevice.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406B3808 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406B3D58 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoFree @ 0x1406B4160 (PopFxPepPerfInfoFree.c)
 *     PopFxVerifyDependencies @ 0x1406B4A70 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406B4E78 (PopPluginQuerySocSubsystemMetadata.c)
 *     PoUnregisterCoalescingCallback @ 0x1406B51D0 (PoUnregisterCoalescingCallback.c)
 *     PopIssueCoalescingNotification @ 0x1406B5498 (PopIssueCoalescingNotification.c)
 *     PopFreeWakeInfo @ 0x1406B56DC (PopFreeWakeInfo.c)
 *     PopFreeWakeSource @ 0x1406B56FC (PopFreeWakeSource.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1406B5974 (PopWakeSourceGetDeviceProperty.c)
 *     PopPepUnregisterDevice @ 0x1406B72FC (PopPepUnregisterDevice.c)
 *     PopPdcCsDeviceNotification @ 0x1406B787C (PopPdcCsDeviceNotification.c)
 *     PopFxTracePerfRegistration @ 0x1406BA510 (PopFxTracePerfRegistration.c)
 *     PopPolicyDeviceTargetChange @ 0x1406BAE04 (PopPolicyDeviceTargetChange.c)
 *     PpmWmiIdleAccountingWork @ 0x1406BBA54 (PpmWmiIdleAccountingWork.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x1406BBDEC (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1406BC134 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x1406BC410 (PpmEventTraceProcessorIdle.c)
 *     PopBcdRegenerateResumeObject @ 0x1406BD5E4 (PopBcdRegenerateResumeObject.c)
 *     PpmRegisterSpmSettings @ 0x1406BDFB8 (PpmRegisterSpmSettings.c)
 *     PsInsertSiloObject @ 0x1406C0CC0 (PsInsertSiloObject.c)
 *     PsInsertSiloObjectByPointer @ 0x1406C0E40 (PsInsertSiloObjectByPointer.c)
 *     PsRemoveSiloObjectByPointer @ 0x1406C115C (PsRemoveSiloObjectByPointer.c)
 *     PspFreeMonitorContextServerSilo @ 0x1406C1D2C (PspFreeMonitorContextServerSilo.c)
 *     PspPointerDereferenceMonitorServerSilo @ 0x1406C2640 (PspPointerDereferenceMonitorServerSilo.c)
 *     PspServerSiloDelete @ 0x1406C2868 (PspServerSiloDelete.c)
 *     PspSiloDelete @ 0x1406C2AE8 (PspSiloDelete.c)
 *     PspCreateSecureThread @ 0x1406C35B4 (PspCreateSecureThread.c)
 *     PspApplyWorkingSetLimits @ 0x1406C43B8 (PspApplyWorkingSetLimits.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x1406C60A4 (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x1406C6210 (PsRemoveLoadImageNotifyRoutine.c)
 *     RawQueryFileSystemInformation @ 0x1406C6C80 (RawQueryFileSystemInformation.c)
 *     RtlAddResourceAttributeAce @ 0x1406C7E58 (RtlAddResourceAttributeAce.c)
 *     RtlGetAppContainerParent @ 0x1406C9AC4 (RtlGetAppContainerParent.c)
 *     RtlpComputeMergedAcl @ 0x1406CA01C (RtlpComputeMergedAcl.c)
 *     RtlIdnToUnicode @ 0x1406CCBA8 (RtlIdnToUnicode.c)
 *     RtlpGetNormalization @ 0x1406D0328 (RtlpGetNormalization.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x1406D143C (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditProcessExit @ 0x1406D1F2C (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x1406D20A0 (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x1406D2250 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x1406D2494 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x1406D27C0 (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x1406D29D0 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x1406D2C1C (SepAdtGenerateDiscardAudit.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x1406D2EF8 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x1406D3374 (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x1406D3618 (SepAdtStagingEvent.c)
 *     SepQueryNameString @ 0x1406D3B24 (SepQueryNameString.c)
 *     SepQueryTypeString @ 0x1406D3C14 (SepQueryTypeString.c)
 *     SeReleaseUnicodeStringStructures @ 0x1406D3FDC (SeReleaseUnicodeStringStructures.c)
 *     SepCaptureAuditPolicy @ 0x1406D3FF8 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x1406D40A0 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1406D42D0 (SepCaptureOctetStringArray.c)
 *     SepReleaseAuditPolicy @ 0x1406D44B8 (SepReleaseAuditPolicy.c)
 *     SeExamineSacl @ 0x1406D47F0 (SeExamineSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406D4BDC (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepDeleteTokenUserAndGroups @ 0x1406D5A08 (SepDeleteTokenUserAndGroups.c)
 *     SepDereferenceSidValuesBlock @ 0x1406D5A88 (SepDereferenceSidValuesBlock.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1406D5F6C (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x1406D6110 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     NtFilterBootOption @ 0x1406D6460 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1406D68C4 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406D6CC0 (SepSecureBootUpdateBcdDataForRule.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x1406D7010 (SeAdjustObjectAppContainerSecurity.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406D71A0 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SepBuildObjectSecurityDescriptor @ 0x1406D7344 (SepBuildObjectSecurityDescriptor.c)
 *     SepLogTokenSidManagement @ 0x1406D7694 (SepLogTokenSidManagement.c)
 *     SepDeReferenceSharedSidEntries @ 0x1406D8068 (SepDeReferenceSharedSidEntries.c)
 *     SepDeleteClaimAttributes @ 0x1406D81A8 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x1406D8228 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406D8520 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepValidateReferencedLowBoxHandles @ 0x1406D8790 (SepValidateReferencedLowBoxHandles.c)
 *     SepReadAndInsertCaps @ 0x1406D8C80 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x1406D8FD8 (SepReadSingleCap.c)
 *     SepRmDestroyCapTable @ 0x1406D92E0 (SepRmDestroyCapTable.c)
 *     SmKmStoreFileCreateForIoType @ 0x1406DDB90 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileGetExtents @ 0x1406DDE9C (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406DE120 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     SmKmStoreFileWriteHeader @ 0x1406DE4F8 (SmKmStoreFileWriteHeader.c)
 *     VmCreateMemoryRange @ 0x1406DE920 (VmCreateMemoryRange.c)
 *     WdipSemFreePool @ 0x1406DF538 (WdipSemFreePool.c)
 *     IoWMISetSingleInstance @ 0x1406DFF5C (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x1406E0064 (IoWMISetSingleItem.c)
 *     IoWMISuggestInstanceName @ 0x1406E0180 (IoWMISuggestInstanceName.c)
 *     WmipDereferenceEvent @ 0x1406E0434 (WmipDereferenceEvent.c)
 *     WmipQueryAllDataMultiple @ 0x1406E0ABC (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1406E0D78 (WmipQuerySingleMultiple.c)
 *     WmipMRCleanup @ 0x1406E14E8 (WmipMRCleanup.c)
 *     WmipGetSysIds @ 0x1406E18D4 (WmipGetSysIds.c)
 *     WmipUpdateDataSource @ 0x1406E1F18 (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x1406E226C (WmipUpdateModifyGuid.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406E2BC0 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwpLogMemInfoWs @ 0x1406E4310 (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406E4820 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpPerfMemInfoWork @ 0x1406E4ACC (EtwpPerfMemInfoWork.c)
 *     EtwpSetPmcProfileSource @ 0x1406E51EC (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1406E52FC (EtwpTraceHandle.c)
 *     EtwpCapturePreviousRegistryData @ 0x1406E6FE4 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1406E70E4 (EtwpCaptureRegistryData.c)
 *     EtwpRegTraceCallback @ 0x1406E717C (EtwpRegTraceCallback.c)
 *     EtwpSendDbgId @ 0x1406E7CE8 (EtwpSendDbgId.c)
 *     EtwpEnumerateWorkingSet @ 0x1406E84F4 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406E8870 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1406E8B94 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1406E8CE0 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1406E9204 (EtwpProcessorRundown.c)
 *     EtwpUpdatePidFilterData @ 0x1406EA5D0 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1406EA66C (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1406EA72C (EtwpUpdateStringFilterData.c)
 *     EtwpAddWinRtProviderToSession @ 0x1406EAB2C (EtwpAddWinRtProviderToSession.c)
 *     EtwpFreeStackCache @ 0x1406EAFB0 (EtwpFreeStackCache.c)
 *     ExQueryFastCacheAppOrigin @ 0x1406EBA8C (ExQueryFastCacheAppOrigin.c)
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406ECC64 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     sub_1406ECEC4 @ 0x1406ECEC4 (sub_1406ECEC4.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406ED418 (ExpOsProductCacheProviderHelper.c)
 *     ExpGetDeviceDataInformation @ 0x1406EE204 (ExpGetDeviceDataInformation.c)
 *     ExpQueryChannelInformation @ 0x1406EE700 (ExpQueryChannelInformation.c)
 *     ExpQueryElamCertInfo @ 0x1406EE818 (ExpQueryElamCertInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1406EEAF4 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406EED28 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1406EF374 (ExpStringCapture.c)
 *     ExpStringFree @ 0x1406EF44C (ExpStringFree.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 *     NtDisplayString @ 0x1406EFD70 (NtDisplayString.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406EFF48 (ExDereferenceHandleDebugInfo.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1406F0AB4 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpConvertArcName @ 0x1406F0B40 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1406F0CF4 (ExpConvertSignatureName.c)
 *     ExpCreateOutputARC @ 0x1406F0F04 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406F1298 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1406F1454 (ExpFindArcName.c)
 *     ExpFindDiskSignature @ 0x1406F1718 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1406F18F8 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1406F1BB4 (ExpGetPartitionTableInfo.c)
 *     ExpParseEfiPath @ 0x1406F1E14 (ExpParseEfiPath.c)
 *     ExpParseSignatureName @ 0x1406F203C (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x1406F235C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406F2BC8 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1406F3630 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1406F3C98 (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x1406F3F64 (ExpTranslateSymbolicLink.c)
 *     NtEnumerateBootEntries @ 0x1406F4780 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406F4DB4 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406F61FC (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1406F65CC (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1406F6AEC (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1406F6D78 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406F7144 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1406F73B0 (NtTranslateFilePath.c)
 *     ExpDereferenceHost @ 0x1406F824C (ExpDereferenceHost.c)
 *     ExShareAddressSpaceWithDevice @ 0x1406F826C (ExShareAddressSpaceWithDevice.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x1406F8B30 (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406F8C84 (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1406F8EF0 (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1406F96A8 (ExpCovReadRequestBuffer.c)
 *     ExpProfileDelete @ 0x1406F9F24 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1406FA0A8 (NtStartProfile.c)
 *     NtStopProfile @ 0x1406FA30C (NtStopProfile.c)
 *     CMFCheckAccess @ 0x1406FA4F4 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1406FA710 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1406FAC30 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     CMFUnmapModules @ 0x1406FB9A4 (CMFUnmapModules.c)
 *     NtSystemDebugControl @ 0x1406FBA78 (NtSystemDebugControl.c)
 *     sub_1406FC0FC @ 0x1406FC0FC (sub_1406FC0FC.c)
 *     ExpWnfTerminateServerSiloCallback @ 0x1406FC558 (ExpWnfTerminateServerSiloCallback.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1406FC83C (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1406FD08C (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1406FD2E4 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1406FD5B0 (WheapPfaMemoryCheck.c)
 *     WheapPfaReset @ 0x1406FD83C (WheapPfaReset.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1406FD904 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapIsSqmLoggerRunning @ 0x1406FDB80 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406FDE14 (WheapSqmCollectPshedPluginTelemetry.c)
 *     sub_1406FE610 @ 0x1406FE610 (sub_1406FE610.c)
 *     sub_1406FEC28 @ 0x1406FEC28 (sub_1406FEC28.c)
 *     sub_1406FF044 @ 0x1406FF044 (sub_1406FF044.c)
 *     sub_1406FF424 @ 0x1406FF424 (sub_1406FF424.c)
 *     sub_140700570 @ 0x140700570 (sub_140700570.c)
 *     sub_140700DB4 @ 0x140700DB4 (sub_140700DB4.c)
 *     SdbpFreePackageAttributes @ 0x14070350C (SdbpFreePackageAttributes.c)
 *     SddlpFree @ 0x14070A4E0 (SddlpFree.c)
 *     SddlpFreeUuidString @ 0x14070A4F8 (SddlpFreeUuidString.c)
 *     SddlpReAlloc @ 0x14070A510 (SddlpReAlloc.c)
 *     AdtpBuildHexInt64String @ 0x14070BF10 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x14070BFCC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x14070C120 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x14070C274 (AdtpBuildMacStrings.c)
 *     AdtpBuildRegistryValueString @ 0x14070C50C (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x14070C7E0 (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14070C8A4 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x14070CA9C (AdtpBuildSidListString.c)
 *     BcdEnumerateObjects @ 0x14070D344 (BcdEnumerateObjects.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x14070D9F0 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x14070DAC4 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x14070DB84 (BiResolveLocateDevice.c)
 *     BiIsPortableWorkspaceBoot @ 0x14070DE6C (BiIsPortableWorkspaceBoot.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x14070DEF4 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x14070E088 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x14070E17C (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x14070E32C (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14070E460 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x14070E5D8 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14070E78C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14070E8C8 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14070E9A4 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x14070EC6C (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x14070EDBC (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x14070F33C (BiCreateBootEntry.c)
 *     BiCreateEfiEntry @ 0x14070F68C (BiCreateEfiEntry.c)
 *     BiCreateMergedBootEntry @ 0x14070F814 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x14070FC58 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x14070FDF4 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x140710180 (BiFreeIdentifierList.c)
 *     BiGetDeviceFromEfiPath @ 0x1407101F8 (BiGetDeviceFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1407104E4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x140710668 (BiGetSavedBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1407106EC (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x14071091C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407109CC (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x140710C48 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x140710D60 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x140711014 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140711178 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetDriveLayoutInformation @ 0x140711480 (SiGetDriveLayoutInformation.c)
 *     SiDisambiguateSystemDevice @ 0x1407117BC (SiDisambiguateSystemDevice.c)
 *     SiGetEfiSystemDevice @ 0x140711860 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140711B48 (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x140711E24 (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x140711F48 (SiGetBiosSystemPartition.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140712080 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     _PnpCtxCloseMachine @ 0x14071221C (_PnpCtxCloseMachine.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140712778 (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x140712C94 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x140712E68 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140713210 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1407135A8 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x140713BE4 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140713FA0 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1407148B4 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140714A78 (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x140714D74 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1407151CC (_CmGetDevicesInBaseContainerList.c)
 *     _CmMoveBaseContainer @ 0x140715420 (_CmMoveBaseContainer.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x14071652C (_CmGetMatchingFilteredDeviceListWorker.c)
 *     _CmServiceFilterCallback @ 0x1407166D4 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceSiblings @ 0x1407182CC (_CmGetDeviceSiblings.c)
 *     _SysCtxCloseMachine @ 0x1407197D4 (_SysCtxCloseMachine.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140719880 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x140719D30 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x14071A3E4 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14071B63C (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14071BB44 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071C8E8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x14071D040 (DrvDbDestroyDatabaseNode.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x14071E6BC (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x14071E9EC (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x14071ED58 (ArbRetestAllocation.c)
 *     MIDL_user_free @ 0x14071EF4C (MIDL_user_free.c)
 *     VhdiVerifyBootDisk @ 0x14071EF58 (VhdiVerifyBootDisk.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14071F328 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x14071F650 (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x14071FED4 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegResizeStringPool @ 0x1407201A4 (RtlpMuiRegResizeStringPool.c)
 *     KdPullRemoteFile @ 0x14072E134 (KdPullRemoteFile.c)
 *     VfDriverUnloadImage @ 0x140732000 (VfDriverUnloadImage.c)
 *     ViThunkFreeSharedThunksArray @ 0x1407320A4 (ViThunkFreeSharedThunksArray.c)
 *     IovUnloadDrivers @ 0x140735398 (IovUnloadDrivers.c)
 *     IovpBuildDriverObjectList @ 0x1407354B0 (IovpBuildDriverObjectList.c)
 *     VerifierExFreePool @ 0x140736860 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x140736880 (VerifierExFreePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x1407373E8 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140737588 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140737BD4 (ViInitializeLocalSystemDescriptor.c)
 *     VfDriverEnableVerifierForAll @ 0x1407390F8 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoConnectInterrupt @ 0x140739A0C (VerifierIoConnectInterrupt.c)
 *     VerifierIoDisconnectInterrupt @ 0x140739AF0 (VerifierIoDisconnectInterrupt.c)
 *     VerifierIoDisconnectInterruptEx @ 0x140739B24 (VerifierIoDisconnectInterruptEx.c)
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14073DFEC (ViFreeMapRegisterFile.c)
 *     ViHalFreeDomainCommonBuffer @ 0x14073E6DC (ViHalFreeDomainCommonBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14073F00C (ViReleaseDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14073F1E0 (ViSpecialAllocateCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14073F328 (ViSpecialFreeCommonBuffer.c)
 *     VfIoFreeIrp @ 0x140741298 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x1407418B8 (ViIrpAllocateLockedPacket.c)
 *     ViPendingCompleteAfterWait @ 0x140742978 (ViPendingCompleteAfterWait.c)
 *     ViPendingDelayCompletion @ 0x140742AC8 (ViPendingDelayCompletion.c)
 *     VfInitializeBranchTracing @ 0x1407444FC (VfInitializeBranchTracing.c)
 *     VfThunkApplyDriverAddedThunks @ 0x140744BC8 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkRemoveImportEntry @ 0x140745280 (ViThunkRemoveImportEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x140745374 (ViThunkReplaceAllThunkedImports.c)
 *     VfTargetDriversEnableVerifier @ 0x140745688 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x140745840 (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140745928 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140745E48 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x14074620C (VfPoolCheckForLeaks.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x14074636C (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViCreateProcessCallbackInternal @ 0x1407467D0 (ViCreateProcessCallbackInternal.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140746A44 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140746BA4 (ViFaultsAddTagNoDuplicates.c)
 *     ViFaultsRemoveAllApps @ 0x14074721C (ViFaultsRemoveAllApps.c)
 *     ViFaultsRemoveAllTags @ 0x1407472F0 (ViFaultsRemoveAllTags.c)
 *     VfKeCheckForChanges @ 0x140749A04 (VfKeCheckForChanges.c)
 *     VfSuspectDriversRemove @ 0x14074A4F0 (VfSuspectDriversRemove.c)
 *     ViPacketNotificationCallback @ 0x14074BCAC (ViPacketNotificationCallback.c)
 *     VfPnpTestStartedPdoStack @ 0x14074C944 (VfPnpTestStartedPdoStack.c)
 *     VfIrpLogDeleteDeviceLogs @ 0x14074DFB8 (VfIrpLogDeleteDeviceLogs.c)
 *     VfIrpLogRetrieveWmiData @ 0x14074E35C (VfIrpLogRetrieveWmiData.c)
 *     VfIrpLogUnlockDatabase @ 0x14074E63C (VfIrpLogUnlockDatabase.c)
 *     ViIrpLogExposeWmiCallback @ 0x14074E768 (ViIrpLogExposeWmiCallback.c)
 *     VfCtxHookAndConnectInterruptEx @ 0x14074E7D4 (VfCtxHookAndConnectInterruptEx.c)
 *     VfDeadlockInitialize @ 0x14074F8A4 (VfDeadlockInitialize.c)
 *     ViRtlReplaceStringBuffer @ 0x140752FB0 (ViRtlReplaceStringBuffer.c)
 *     VerifierIoWMIWriteEvent @ 0x140754AF8 (VerifierIoWMIWriteEvent.c)
 *     VfAddVerifierEntry @ 0x14075886C (VfAddVerifierEntry.c)
 *     VfGetVerifierInformation @ 0x140758934 (VfGetVerifierInformation.c)
 *     HdlspAddLogEntry @ 0x140759ADC (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x14075B158 (HdlspSetBlueScreenInformation.c)
 *     ResFwFreeContext @ 0x14075C040 (ResFwFreeContext.c)
 *     ResFwBackgroundTransition @ 0x14075CC74 (ResFwBackgroundTransition.c)
 *     ResFwpPageOutBackground @ 0x14075E9F4 (ResFwpPageOutBackground.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopCreateArcNamesDisk @ 0x1407B6124 (IopCreateArcNamesDisk.c)
 *     PipInitDeviceOverrideCache @ 0x1407B67F8 (PipInitDeviceOverrideCache.c)
 *     PipHardwareConfigInit @ 0x1407B6A40 (PipHardwareConfigInit.c)
 *     PipInitComputerIds @ 0x1407B6E78 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x1407B7980 (PipCreateComputerId.c)
 *     PipCheckSystemFirmwareUpdated @ 0x1407B7C88 (PipCheckSystemFirmwareUpdated.c)
 *     PipInitializeCoreDriversByGroup @ 0x1407B7FBC (PipInitializeCoreDriversByGroup.c)
 *     IopInitializeSystemDrivers @ 0x1407B82F0 (IopInitializeSystemDrivers.c)
 *     PipGetDriverTagPriority @ 0x1407B8580 (PipGetDriverTagPriority.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     PpInitGetGroupOrderIndex @ 0x1407B97AC (PpInitGetGroupOrderIndex.c)
 *     PipCheckDependencies @ 0x1407B98BC (PipCheckDependencies.c)
 *     WmipInitializeSecurity @ 0x1407B9F00 (WmipInitializeSecurity.c)
 *     PiInitCacheGroupInformation @ 0x1407BA388 (PiInitCacheGroupInformation.c)
 *     PipInitializeEarlyLaunchDrivers @ 0x1407BA5D4 (PipInitializeEarlyLaunchDrivers.c)
 *     PipFreeGroupTree @ 0x1407BA724 (PipFreeGroupTree.c)
 *     CmpFindTagIndex @ 0x1407BAD70 (CmpFindTagIndex.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1407BC278 (SepInitializeSingletonAttributesStructures.c)
 *     StartFirstUserProcess @ 0x1407BC5B4 (StartFirstUserProcess.c)
 *     SeMakeSystemToken @ 0x1407BC9E0 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407BCF14 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407BD148 (SeMakeAnonymousLogonToken.c)
 *     BuildKnownDlls @ 0x1407BD39C (BuildKnownDlls.c)
 *     IopInitializePlugPlayServices @ 0x1407BF6F0 (IopInitializePlugPlayServices.c)
 *     PpInitializeBootDDB @ 0x1407C03F8 (PpInitializeBootDDB.c)
 *     CcInitializeCacheManager @ 0x1407C1E24 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     MiSystemPartitionObjectCreate @ 0x1407C4068 (MiSystemPartitionObjectCreate.c)
 *     MiSectionInitialization @ 0x1407C41D0 (MiSectionInitialization.c)
 *     MiInitializeCacheFlushing @ 0x1407C8714 (MiInitializeCacheFlushing.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407C9518 (MiFlushStrongCodeDriverLoadFailures.c)
 *     MiCreateZeroContext @ 0x1407C9940 (MiCreateZeroContext.c)
 *     MiCreateMemoryEvent @ 0x1407CAF9C (MiCreateMemoryEvent.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 *     EmpParseInfDatabase @ 0x1407CD974 (EmpParseInfDatabase.c)
 *     CmpFreeSectionList @ 0x1407CDA68 (CmpFreeSectionList.c)
 *     CmpFreeLineList @ 0x1407CDABC (CmpFreeLineList.c)
 *     EmpParseEntryTypes @ 0x1407CDB50 (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1407CDE68 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x1407CE084 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x1407CE1D8 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1407CE640 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1407CE96C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1407CEB80 (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1407CED90 (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPop @ 0x1407CF34C (EmpRuleParserStackPop.c)
 *     sub_1407CF6FC @ 0x1407CF6FC (sub_1407CF6FC.c)
 *     MmFreeLoaderBlock @ 0x1407CFF0C (MmFreeLoaderBlock.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     KiInitializeMTRR @ 0x1407D292C (KiInitializeMTRR.c)
 *     IopAllocateLegacyBootResources @ 0x1407D5598 (IopAllocateLegacyBootResources.c)
 *     MmInitializeMemoryLimits @ 0x1407D5674 (MmInitializeMemoryLimits.c)
 *     IoReportHalResourceUsage @ 0x1407D57B0 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x1407D5960 (IopInitializeResourceMap.c)
 *     IopReportBootResources @ 0x1407D5CA4 (IopReportBootResources.c)
 *     CmpInitializeSystemHive @ 0x1407D6AC0 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 *     CmpInitializePreloadedHives @ 0x1407D73CC (CmpInitializePreloadedHives.c)
 *     CmpInitializePreloadedHive @ 0x1407D74A8 (CmpInitializePreloadedHive.c)
 *     CmpCreateRegistryRoot @ 0x1407D7838 (CmpCreateRegistryRoot.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407D7D8C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemBiosInformation @ 0x1407D84CC (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407D87DC (CmpSetVideoBiosInformation.c)
 *     CmpGetRegistryValue @ 0x1407D8E8C (CmpGetRegistryValue.c)
 *     CmpParseInfBuffer @ 0x1407D9018 (CmpParseInfBuffer.c)
 *     MiBuildImportsForBootDrivers @ 0x1407D9908 (MiBuildImportsForBootDrivers.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 *     PopInitPlatformSettings @ 0x1407DBA38 (PopInitPlatformSettings.c)
 *     KiComputeNumaCosts @ 0x1407DBBB8 (KiComputeNumaCosts.c)
 *     WheapInitializeErrorSourceTable @ 0x1407DC5C4 (WheapInitializeErrorSourceTable.c)
 *     BootApplicationPersistentDataProcess @ 0x1407DC974 (BootApplicationPersistentDataProcess.c)
 *     BapdpProcessEDrvHintInfo @ 0x1407DCA40 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1407DCAC8 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x1407DCB50 (BapdpProcessHSTIResults.c)
 *     BapdpProcessSystemIntegrityPolicy @ 0x1407DCBD8 (BapdpProcessSystemIntegrityPolicy.c)
 *     BapdpProcessWmdResults @ 0x1407DCC6C (BapdpProcessWmdResults.c)
 *     BapdpProcessResumeInformation @ 0x1407DCD50 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1407DCE1C (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSecureBootPolicy @ 0x1407DCEE8 (BapdpProcessSecureBootPolicy.c)
 *     BapdpProcessSiData @ 0x1407DCFB4 (BapdpProcessSiData.c)
 *     SeSecureBootRegisterPolicy @ 0x1407DD14C (SeSecureBootRegisterPolicy.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 *     PiAuFreeUserSids @ 0x1407DDDF4 (PiAuFreeUserSids.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407DDE74 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407DE1E4 (PiAuCreateStandardSecurityObject.c)
 *     DbgkpCreateNotificationEvent @ 0x1407DE814 (DbgkpCreateNotificationEvent.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1407E1578 (FsRtlGetCompatibilityModeValue.c)
 *     IopStoreArcInformation @ 0x1407E19C0 (IopStoreArcInformation.c)
 *     BootApplicationPersistentDataInitialize @ 0x1407E1BB4 (BootApplicationPersistentDataInitialize.c)
 *     ObpCreateDosDevicesDirectory @ 0x1407E2610 (ObpCreateDosDevicesDirectory.c)
 *     SepLoadNgenLocations @ 0x1407E3034 (SepLoadNgenLocations.c)
 *     IopCallBootDriverReinitializationRoutines @ 0x1407E3BCC (IopCallBootDriverReinitializationRoutines.c)
 *     ExpKeyedEventInitialization @ 0x1407E4030 (ExpKeyedEventInitialization.c)
 *     PiLastGoodCopyKeyContents @ 0x1407E43B4 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x1407E4464 (IopFileUtilRename.c)
 *     PopUmpoInitializeChannel @ 0x1407E46C0 (PopUmpoInitializeChannel.c)
 *     SeCodeIntegrityInitializePolicy @ 0x1407E5E08 (SeCodeIntegrityInitializePolicy.c)
 *     ObpInitStackTrace @ 0x1407E7A5C (ObpInitStackTrace.c)
 *     IopQueryDeviceResetRegistrySettings @ 0x1407E8904 (IopQueryDeviceResetRegistrySettings.c)
 *     PoFxRegisterDebugger @ 0x1407E8DD4 (PoFxRegisterDebugger.c)
 *     MiComputeNumaCosts @ 0x1407E8E94 (MiComputeNumaCosts.c)
 *     HeadlessInit @ 0x1407E9094 (HeadlessInit.c)
 *     PnpLoadBootFilterDriver @ 0x1407E91B4 (PnpLoadBootFilterDriver.c)
 *     CreateMiniNtBootKey @ 0x1407F7DAC (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x1407F8518 (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x1407F9DD8 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407F9E94 (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x1407FA624 (PipProcessPendingObjects.c)
 *     IopFileUtilWalkDirectoryTreeTopDown @ 0x1407FA884 (IopFileUtilWalkDirectoryTreeTopDown.c)
 *     VhdiInitializeBootDisk @ 0x1407FCB20 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1407FD2E8 (VhdiQueryVolumeVhdFilePath.c)
 * Callees:
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400456B0 (ExpRemovePoolTrackerExpansion.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExFreeLargePool @ 0x140046E10 (ExFreeLargePool.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmIsSpecialPoolAddress @ 0x14005ED6C (MmIsSpecialPoolAddress.c)
 *     MiFreePoolPages @ 0x1400630BC (MiFreePoolPages.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     PspReturnResourceQuota @ 0x140125584 (PspReturnResourceQuota.c)
 *     ObpPushStackInfo @ 0x14017E550 (ObpPushStackInfo.c)
 *     EtwTracePool @ 0x14017E810 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x14018B480 (RtlpInterlockedPushEntrySList.c)
 *     KeCheckForTimer @ 0x1401FF398 (KeCheckForTimer.c)
 *     MmFreeSpecialPool @ 0x14021FC4C (MmFreeSpecialPool.c)
 *     MmQuerySpecialPoolBlockSize @ 0x1402203D0 (MmQuerySpecialPoolBlockSize.c)
 *     MmQuerySpecialPoolBlockType @ 0x1402203F8 (MmQuerySpecialPoolBlockType.c)
 *     VerifierFreeTrackedPool @ 0x1402227B0 (VerifierFreeTrackedPool.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     ExpCheckForResource @ 0x140263DEC (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x140264A98 (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x140264D7C (ExpCheckForWorker.c)
 *     ExDeferredFreePool @ 0x14028A240 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14048B620 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x140746198 (VfFreePoolNotification.c)
 */

void __stdcall ExFreePoolWithTag(PVOID P, ULONG Tag)
{
  unsigned __int64 BugCheckParameter4; // rdi
  char v3; // al
  __int16 SpecialPoolBlockType; // r14
  unsigned __int64 SpecialPoolBlockSize; // rax
  __int64 v6; // r8
  __int64 v7; // rbx
  unsigned int v8; // esi
  int v9; // r11d
  __int64 v10; // rbp
  unsigned __int64 v11; // rdx
  __int64 v12; // r8
  int v13; // eax
  __int64 j; // rcx
  int v15; // r9d
  unsigned __int64 v16; // rbx
  unsigned int v17; // r15d
  int v18; // r12d
  __int16 v19; // r14
  ULONG_PTR v20; // rbx
  int v21; // r13d
  unsigned int v22; // r12d
  char v23; // al
  unsigned int *v24; // r8
  unsigned int v25; // r9d
  int v26; // ebp
  _WORD *v27; // rdx
  __int64 v28; // r8
  ULONG_PTR v29; // r10
  unsigned __int64 v30; // r9
  __int64 v31; // rsi
  __int64 v32; // r11
  __int64 *v33; // rcx
  __int64 PteShadow; // rax
  __int64 *v35; // rcx
  unsigned int v36; // ebp
  __int64 v37; // r15
  unsigned __int64 v38; // rax
  __int64 v39; // r10
  int v40; // r9d
  unsigned __int64 v41; // rdx
  __int64 v42; // r8
  int v43; // eax
  __int64 i; // rcx
  int v45; // r8d
  unsigned __int64 v46; // rax
  char v47; // cl
  struct _KPROCESS *v48; // r15
  ULONG_PTR v49; // r13
  char *v50; // r9
  ULONG_PTR v51; // r10
  ULONG_PTR v52; // r11
  unsigned __int64 *v53; // r14
  unsigned __int64 v54; // rbp
  unsigned __int64 v55; // rax
  char *v56; // r8
  unsigned __int64 v57; // rdx
  __int64 v58; // rtt
  __int64 v59; // r8
  ULONG_PTR v60; // rcx
  ULONG_PTR v61; // r8
  signed __int64 v62; // rdx
  bool v63; // zf
  signed __int64 v64; // rax
  unsigned __int8 *v65; // rbp
  signed __int64 v66; // rax
  bool v67; // cc
  signed __int64 v68; // rax
  __int64 v69; // r9
  _GENERAL_LOOKASIDE_POOL *PPPagedLookasideList; // rcx
  __int64 v71; // rax
  __int16 v72; // ax
  int v73; // r8d
  struct _KPRCB *CurrentPrcb; // rdx
  char *v75; // rcx
  __int64 v76; // rax
  unsigned int v77; // eax
  __int64 v78; // rdx
  signed __int64 v79; // rax
  signed __int64 v80; // rcx
  int v81; // r14d
  volatile signed __int32 *v82; // rdi
  KSPIN_LOCK *v83; // rcx
  __int64 v84; // rbp
  unsigned __int8 CurrentIrql; // r15
  _WORD *v86; // r8
  __int64 v87; // rdx
  _QWORD *v88; // rcx
  ULONG_PTR v89; // rcx
  __int64 v90; // r8
  _QWORD *v91; // rdx
  char v92; // al
  unsigned __int8 v93; // bp
  signed __int32 v94; // eax
  int v95; // ecx
  _BYTE *v96; // rax
  __int64 *v97; // rbx
  __int64 *v98; // rcx
  __int64 v99; // rax
  unsigned __int8 v100; // bl
  signed __int32 v101; // eax
  signed __int32 v102[8]; // [rsp+0h] [rbp-C8h] BYREF
  int v103; // [rsp+30h] [rbp-98h] BYREF
  int v104; // [rsp+34h] [rbp-94h]
  int v105; // [rsp+38h] [rbp-90h]
  __int64 v106; // [rsp+40h] [rbp-88h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-80h]
  _WORD *v108; // [rsp+50h] [rbp-78h]
  char *v109; // [rsp+58h] [rbp-70h]
  ULONG_PTR v110; // [rsp+60h] [rbp-68h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-58h] BYREF
  char v112; // [rsp+E0h] [rbp+18h]
  unsigned int v113; // [rsp+E8h] [rbp+20h]

  BugCheckParameter4 = (unsigned __int64)P;
  if ( !ExpSpecialAllocations || (unsigned int)MmIsSpecialPoolAddress((unsigned __int64)P) != 1 )
  {
    v17 = 1;
    if ( (BugCheckParameter4 & 0xFFF) == 0 )
    {
      if ( BugCheckParameter4 + 0x400000000000LL <= 0xF7FFFFFFFFFLL
        || qword_14034EDB0
        && BugCheckParameter4 >= qword_14034EDB0
        && BugCheckParameter4 < qword_14034EDB0 + (qword_14034ED90 << 21)
        && (*(_BYTE *)(48
                     * ((*(_QWORD *)(((BugCheckParameter4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
      {
        v18 = 1;
      }
      else
      {
        v18 = 0;
        if ( BugCheckParameter4 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
          v18 = 33;
      }
      ExFreeLargePool(BugCheckParameter4, &v103, 0LL, v18);
      return;
    }
    v19 = *(unsigned __int8 *)(BugCheckParameter4 - 13);
    v20 = BugCheckParameter4 - 16;
    v21 = v19 & 1;
    v22 = (unsigned __int8)*(_WORD *)(BugCheckParameter4 - 16 + 2);
    v113 = v22;
    v104 = v21;
    if ( (v19 & 2) == 0 )
      KeBugCheckEx(0xC2u, 7uLL, 0x1254uLL, *(unsigned int *)v20, BugCheckParameter4);
    v23 = ExpPoolFlags;
    if ( (ExpPoolFlags & 0x417) != 0 )
    {
      if ( (ExpPoolFlags & 0x400) != 0 && (v19 & 1) == 0 )
      {
        ExpCheckForLookaside(BugCheckParameter4 - 16, 16LL * v22);
        v23 = ExpPoolFlags;
      }
      if ( (v23 & 1) != 0 )
      {
        KeCheckForTimer(BugCheckParameter4 - 16, 16LL * v22);
        v23 = ExpPoolFlags;
      }
      if ( (v23 & 4) != 0 )
      {
        ExpCheckForResource((__int64 *)(BugCheckParameter4 - 16), 16LL * v22);
        v23 = ExpPoolFlags;
      }
      if ( (v23 & 2) != 0 )
      {
        ExpCheckForWorker(BugCheckParameter4 - 16, 16LL * v22);
        v23 = ExpPoolFlags;
      }
      if ( (v23 & 0x10) != 0 )
        VfFreePoolNotification(BugCheckParameter4 - 16, 16LL * v22);
    }
    if ( (v19 & 0x40) != 0 )
      VerifierFreeTrackedPool(BugCheckParameter4, 16 * v22);
    if ( (v19 & 4) != 0 )
    {
      v24 = (unsigned int *)(v20 - 16LL * (unsigned __int8)*(_WORD *)v20);
      if ( (*((_BYTE *)v24 + 3) & 2) == 0 )
        KeBugCheckEx(0xC2u, 0xBuLL, (ULONG_PTR)v24, *v24, BugCheckParameter4);
      v25 = (ExpCacheLineSize - 1) & (-16 - (_DWORD)v24);
      if ( !v25
        || (unsigned int *)((char *)v24 + v25) != (unsigned int *)v20
        || (v22 = (unsigned __int8)*((_WORD *)v24 + 1),
            P = (PVOID)(unsigned __int8)*(_WORD *)(v20 + 2),
            v113 = v22,
            v22 != (_DWORD)P + (unsigned __int8)*(_WORD *)v20) )
      {
        KeBugCheckEx(0xC2u, 0x10uLL, (ULONG_PTR)v24, *v24, (ULONG_PTR)v24 + v25);
      }
      if ( (unsigned __int8)*(_WORD *)v20 > 1u )
      {
        P = (PVOID)(v20 ^ ExpPoolQuotaCookie);
        if ( (v20 ^ ExpPoolQuotaCookie) != *((_QWORD *)v24 + 2) )
          KeBugCheckEx(0xC2u, 0x11uLL, (ULONG_PTR)v24, *v24, v20 ^ ExpPoolQuotaCookie);
      }
      v20 -= 16LL * (unsigned __int8)*(_WORD *)v20;
      BugCheckParameter4 = (unsigned __int64)(v24 + 4);
    }
    *(_BYTE *)(v20 + 3) |= 4u;
    _InterlockedOr(v102, 0);
    v26 = *(_DWORD *)(v20 + 4);
    *(_BYTE *)(v20 + 3) &= ~2u;
    v103 = v26;
    if ( v26 < 0 )
    {
      v26 &= ~0x80000000;
      v103 = v26;
    }
    v27 = (_WORD *)(v20 + 16LL * v22);
    v28 = v22;
    v108 = v27;
    if ( ((unsigned __int16)v27 & 0xFFF) != 0 )
    {
      P = (PVOID)(unsigned __int8)*v27;
      if ( v22 != (_DWORD)P )
        KeBugCheckEx(0x19u, 0x20uLL, v20, v20 + 16LL * v22, *(unsigned int *)v20);
    }
    v29 = *(unsigned __int8 *)(v20 + 1);
    v30 = 0x140000000uLL;
    v31 = PoolVector[v19 & 1];
    if ( (v19 & 1) != 0 )
    {
      if ( (v19 & 0x20) != 0 )
      {
        v31 = MiSessionPoolVector(P, v27);
      }
      else
      {
        v31 = ExpPagedPoolDescriptor[v29];
        v17 = ExpNumberOfPagedPools + 1;
      }
    }
    else
    {
      if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
      {
        v31 = ExpNonPagedPoolDescriptor[v29];
        v17 = ExpNumberOfNonPagedPools;
      }
      v32 = 0x12090482600LL;
      v33 = (__int64 *)(((v20 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
      PteShadow = *v33;
      if ( (unsigned __int64)(v33 + 0x12090482600LL) <= 0x7F8 )
        PteShadow = MiReadPteShadow((__int64)v33, *v33);
      if ( (PteShadow & 0x80u) == 0LL )
      {
        v35 = (__int64 *)(((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        PteShadow = *v35;
        if ( (unsigned __int64)&v35[v32] <= 0x7F8 )
          PteShadow = MiReadPteShadow((__int64)v35, *v35);
      }
      v28 = v22;
      if ( PteShadow >= 0 )
        v31 += 4416LL;
    }
    if ( (unsigned int)v29 >= v17 )
      KeBugCheckEx(0x19u, 0x25uLL, v29, v17, v20);
    v36 = v26 & 0x7FFFFFFF;
    v37 = 16 * v28;
    v106 = 16 * v28;
    if ( v36 == PoolHitTag )
      __debugbreak();
    v38 = DWORD1(PerfGlobalGroupMask);
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    {
      v38 = EtwTracePool(0xE22u, v19, v36, BugCheckParameter4, 16 * v28);
      v30 = 0x140000000uLL;
    }
    v105 = v19 & 0x20;
    if ( (v19 & 0x20) != 0 )
    {
      v39 = ExpSessionPoolTrackTable;
      v40 = ExpSessionPoolTrackTableMask;
    }
    else
    {
      LODWORD(v38) = KeGetPcr()->Prcb.Number;
      v39 = *(_QWORD *)(v30 + 8 * v38 + 3299712);
      v40 = PoolTrackTableMask;
    }
    v41 = v40 & (((40543 * (unsigned __int64)v36) >> 32) ^ (40543 * v36));
    v42 = 40 * v41;
    v43 = *(_DWORD *)(40 * v41 + v39);
    for ( i = 40 * v41 + v39; v43 != v36; i = v42 + v39 )
    {
      if ( v43 || (v19 & 0x20) != 0 || (v45 = *(_DWORD *)(v42 + PoolTrackTable)) == 0 )
      {
        LODWORD(v41) = v40 & (v41 + 1);
        if ( (_DWORD)v41 == (v40 & (((40543 * (unsigned __int64)v36) >> 32) ^ (40543 * v36))) )
        {
          ExpRemovePoolTrackerExpansion(v36, v37, v19);
          goto LABEL_103;
        }
      }
      else
      {
        *(_DWORD *)i = v45;
      }
      v42 = 40LL * (unsigned int)v41;
      v43 = *(_DWORD *)(v42 + v39);
    }
    v46 = -v37;
    if ( (v19 & 1) != 0 )
    {
      _InterlockedIncrement((volatile signed __int32 *)(i + 28));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(i + 32), v46);
    }
    else
    {
      _InterlockedIncrement((volatile signed __int32 *)(i + 8));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(i + 16), v46);
    }
LABEL_103:
    if ( (v19 & 8) != 0 )
    {
      v47 = *(_BYTE *)(v20 + 3);
      if ( (v47 & 8) != 0 )
      {
        v48 = (struct _KPROCESS *)(v20 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v20 + 8));
        if ( v48 )
        {
          if ( v48 < MmSystemRangeStart || (v48->Header.Type & 0x7F) != 3 )
            KeBugCheckEx(
              0xC2u,
              0xDuLL,
              v20 + 16,
              *(unsigned int *)(v20 + 4),
              v20 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v20 + 8));
          v49 = 16LL * (unsigned __int8)*(_WORD *)(v20 + 2);
          if ( v48 != PsInitialSystemProcess )
          {
            v50 = *(char **)((v20 ^ ExpPoolQuotaCookie ^ *(_QWORD *)(v20 + 8)) + 0x410);
            v109 = v50;
            v51 = (v47 & 1) == 1;
            BugCheckParameter2 = v51;
            v52 = v51 << 7;
            v110 = v51 << 7;
            v112 = PspResourceFlags[8 * v51];
            v53 = (unsigned __int64 *)&v50[128 * v51];
            _m_prefetchw(v53);
            v54 = *v53;
            v55 = v53[8];
            if ( v53[10] )
            {
              v56 = (char *)&PspQuotaExpansionDescriptors + 56 * (int)v51;
              if ( v55 > v54 )
              {
                v57 = *((_QWORD *)v56 + 1);
                if ( v55 - v54 > v57 )
                {
                  if ( v57 > v49 )
                    v57 = v49;
                  v58 = *(_QWORD *)&v50[v52 + 64];
                  if ( v58 == _InterlockedCompareExchange64((volatile signed __int64 *)v53 + 8, v55 - v57, v55)
                    && _InterlockedExchangeAdd64((volatile signed __int64 *)v53 + 9, v57) + v57 > *((_QWORD *)v56 + 1) )
                  {
                    v59 = _InterlockedExchange64((volatile __int64 *)v53 + 9, 0LL);
                    if ( v59 )
                    {
                      PspReturnResourceQuota(v51, (__int64)v53, v59, 0);
                      v50 = v109;
                      v52 = v110;
                    }
                  }
                }
              }
            }
            v60 = v49;
            while ( 1 )
            {
              do
              {
                if ( v60 < v54 )
                {
                  v61 = v60;
                  v62 = v54 - v60;
                }
                else
                {
                  v61 = v54;
                  v62 = 0LL;
                }
                v64 = _InterlockedCompareExchange64((volatile signed __int64 *)v53, v62, v54);
                v63 = v54 == v64;
                v54 = v64;
              }
              while ( !v63 );
              v60 -= v61;
              if ( !v60 )
                break;
              if ( v50 == (char *)&PspSystemQuotaBlock )
                KeBugCheckEx(0x21u, (ULONG_PTR)v48, BugCheckParameter2, v49, v60);
              v50 = (char *)&PspSystemQuotaBlock;
              v53 = (unsigned __int64 *)((char *)&PspSystemQuotaBlock + v52);
              _m_prefetchw((char *)&PspSystemQuotaBlock + v52);
              v54 = *(_QWORD *)((char *)&PspSystemQuotaBlock + v52);
            }
            if ( (v112 & 4) != 0 )
              _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&v48[1].ThreadListHead.Blink + BugCheckParameter2,
                -(__int64)v49);
          }
          v65 = &v48[-1].Spare2[39];
          if ( ObpTraceFlags )
            ObpPushStackInfo((__int64)&v48[-1].Spare2[39], 0, 1u, *(_DWORD *)(v20 + 4));
          v66 = _InterlockedExchangeAdd64((volatile signed __int64 *)v65, 0xFFFFFFFFFFFFFFFFuLL);
          v67 = v66 <= 1;
          v68 = v66 - 1;
          if ( v67 )
          {
            if ( *((_QWORD *)v65 + 1) )
              KeBugCheckEx(
                0x18u,
                ObTypeIndexTable[(unsigned __int8)ObHeaderCookie ^ v65[24] ^ (unsigned __int64)BYTE1(v65)],
                (ULONG_PTR)v48,
                3uLL,
                *((_QWORD *)v65 + 1));
            if ( v68 < 0 )
              KeBugCheckEx(0x18u, 0LL, (ULONG_PTR)v48, 4uLL, v68);
            ObpDeferObjectDeletion((signed __int64)&v48[-1].Spare2[39]);
          }
          v21 = v104;
        }
        v37 = v106;
      }
    }
    if ( v105 && v21 == 1 )
    {
      v69 = v113;
      if ( v113 <= ExpSessionPoolSmallLists )
      {
        PPPagedLookasideList = (_GENERAL_LOOKASIDE_POOL *)((unsigned __int64)v113 << 7);
        v71 = ExpSessionPoolLookaside - 128;
LABEL_152:
        v75 = (char *)PPPagedLookasideList + v71;
        if ( v75 )
        {
          ++*((_DWORD *)v75 + 7);
          if ( *(_WORD *)v75 < *((_WORD *)v75 + 8) )
          {
            v76 = ExpPoolQuotaCookie;
            ++*((_DWORD *)v75 + 8);
            *(_QWORD *)(v20 + 8) = v20 ^ v76;
            RtlpInterlockedPushEntrySList((PSLIST_HEADER)v75, (PSLIST_ENTRY)BugCheckParameter4);
            return;
          }
        }
      }
LABEL_155:
      v72 = ExpPoolFlags;
LABEL_156:
      if ( (v72 & 0x200) == 0 )
      {
        v81 = 0;
        _InterlockedIncrement((volatile signed __int32 *)(v31 + 68));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v31 + 80), -v37);
        v82 = (volatile signed __int32 *)(v31 + 8);
        v83 = (KSPIN_LOCK *)(v31 + 8);
        if ( v21 )
        {
          v84 = KeAbPreAcquire((ULONG_PTR)v83, 0LL, 0LL, v69);
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset(v82, 0) )
            ExpAcquireFastMutexContended(v31 + 8, v84);
          if ( v84 )
            *(_BYTE *)(v84 + 26) |= 1u;
          *(_QWORD *)(v31 + 16) = KeGetCurrentThread();
          *(_DWORD *)(v31 + 56) = CurrentIrql;
          PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(v83, &LockHandle);
        }
        v86 = v108;
        if ( ((unsigned __int16)v108 & 0xFFF) != 0 && !*((_BYTE *)v108 + 3) )
        {
          v81 = 1;
          if ( *((_BYTE *)v108 + 2) != 1 )
          {
            v87 = *((_QWORD *)v108 + 2);
            v88 = (_QWORD *)*((_QWORD *)v108 + 3);
            if ( *(_WORD **)(v87 + 8) != v108 + 8 || (_WORD *)*v88 != v108 + 8 )
              __fastfail(3u);
            *v88 = v87;
            *(_QWORD *)(v87 + 8) = v88;
          }
          *(_BYTE *)(v20 + 2) += *((_BYTE *)v86 + 2);
        }
        if ( (unsigned __int8)*(_WORD *)v20 )
        {
          v89 = v20 - 16LL * (unsigned __int8)*(_WORD *)v20;
          if ( !*(_BYTE *)(v89 + 3) )
          {
            v81 = 1;
            if ( *(_BYTE *)(v89 + 2) != 1 )
            {
              v90 = *(_QWORD *)(v89 + 16);
              v91 = *(_QWORD **)(v89 + 24);
              if ( *(_QWORD *)(v90 + 8) != v89 + 16 || *v91 != v89 + 16 )
                __fastfail(3u);
              *v91 = v90;
              *(_QWORD *)(v90 + 8) = v91;
            }
            v92 = *(_BYTE *)(v20 + 2);
            v20 = v89;
            *(_BYTE *)(v89 + 2) += v92;
          }
        }
        if ( (v20 & 0xFFF) != 0 || (((_WORD)v20 + 16 * (unsigned __int8)*(_WORD *)(v20 + 2)) & 0xFFF) != 0 )
        {
          *(_BYTE *)(v20 + 3) = 0;
          v95 = (unsigned __int8)*(_WORD *)(v20 + 2);
          if ( v81 )
          {
            v96 = (_BYTE *)(v20 + 16LL * (unsigned __int8)*(_WORD *)(v20 + 2));
            if ( ((unsigned __int16)v96 & 0xFFF) != 0 )
              *v96 = v95;
          }
          v97 = (__int64 *)(v20 + 16);
          v98 = (__int64 *)(v31 + 16 * ((unsigned int)(v95 - 1) + 20LL));
          v99 = *v98;
          *v97 = *v98;
          v97[1] = (__int64)v98;
          if ( *(__int64 **)(v99 + 8) != v98 )
            __fastfail(3u);
          *(_QWORD *)(v99 + 8) = v97;
          *v98 = (__int64)v97;
          if ( v21 )
          {
            PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
            v100 = *(_BYTE *)(v31 + 56);
            *(_QWORD *)(v31 + 16) = 0LL;
            v101 = _InterlockedCompareExchange(v82, 1, 0);
            if ( v101 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)(v31 + 8), v101);
            __writecr8(v100);
            KeAbPostRelease(v31 + 8);
          }
          else
          {
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
        }
        else
        {
          if ( v21 )
          {
            PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
            v93 = *(_BYTE *)(v31 + 56);
            *(_QWORD *)(v31 + 16) = 0LL;
            v94 = _InterlockedCompareExchange(v82, 1, 0);
            if ( v94 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)(v31 + 8), v94);
            __writecr8(v93);
            KeAbPostRelease(v31 + 8);
          }
          else
          {
            KeReleaseInStackQueuedSpinLock(&LockHandle);
          }
          _InterlockedDecrement((volatile signed __int32 *)(v31 + 192));
          MiFreePoolPages((_SLIST_ENTRY *)v20, 0x1000uLL, v103);
        }
        return;
      }
      v77 = *(_DWORD *)(v31 + 264);
      if ( v77 >= 0x20 )
      {
        if ( v77 < 0x100 )
        {
          if ( *(_DWORD *)(v31 + 76) )
            goto LABEL_163;
          v78 = 0LL;
        }
        else
        {
          v78 = 1LL;
        }
        ExDeferredFreePool(v31, v78);
      }
LABEL_163:
      *(_QWORD *)(v20 + 8) = v20 ^ ExpPoolQuotaCookie;
      _m_prefetchw((const void *)(v31 + 256));
      v79 = *(_QWORD *)(v31 + 256);
      do
      {
        *(_QWORD *)BugCheckParameter4 = v79;
        v80 = v79;
        v79 = _InterlockedCompareExchange64((volatile signed __int64 *)(v31 + 256), BugCheckParameter4, v79);
      }
      while ( v79 != v80 );
      _InterlockedIncrement((volatile signed __int32 *)(v31 + 264));
      return;
    }
    v69 = v113;
    if ( v113 > 0x20 )
      goto LABEL_155;
    v72 = ExpPoolFlags;
    if ( (ExpPoolFlags & 0x100) != 0 )
      goto LABEL_156;
    if ( v21 == 1 )
    {
      v73 = *(_DWORD *)(v31 + 128);
      if ( !v73 )
        goto LABEL_156;
      if ( (unsigned __int16)KeNumberNodes > 1u && KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] != v73 - 1 )
        goto LABEL_155;
      PPPagedLookasideList = KeGetCurrentPrcb()->PPPagedLookasideList;
    }
    else
    {
      if ( (unsigned __int16)KeNumberNodes > 1u
        && KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0] != *(_DWORD *)(v31 + 128) )
      {
        goto LABEL_155;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      PPPagedLookasideList = CurrentPrcb->PPNxPagedLookasideList;
      if ( *(_DWORD *)v31 != 512 )
        PPPagedLookasideList = CurrentPrcb->PPNPagedLookasideList;
    }
    v71 = 96LL * (v113 - 1);
    goto LABEL_152;
  }
  _InterlockedDecrement(&ExpSpecialAllocations);
  v3 = ExpPoolFlags;
  if ( (ExpPoolFlags & 0x417) != 0 )
  {
    if ( (ExpPoolFlags & 0x400) != 0 )
    {
      ExpCheckForLookaside(BugCheckParameter4, 4096 - (unsigned int)(BugCheckParameter4 & 0xFFF));
      v3 = ExpPoolFlags;
    }
    if ( (v3 & 1) != 0 )
    {
      KeCheckForTimer(BugCheckParameter4, 4096 - (unsigned int)(BugCheckParameter4 & 0xFFF));
      v3 = ExpPoolFlags;
    }
    if ( (v3 & 4) != 0 )
    {
      ExpCheckForResource((__int64 *)BugCheckParameter4, 4096 - (unsigned int)(BugCheckParameter4 & 0xFFF));
      v3 = ExpPoolFlags;
    }
    if ( (v3 & 2) != 0 )
    {
      ExpCheckForWorker(BugCheckParameter4, 4096 - (unsigned int)(BugCheckParameter4 & 0xFFF));
      v3 = ExpPoolFlags;
    }
    if ( (v3 & 0x10) != 0 )
      VfFreePoolNotification(BugCheckParameter4, 4096 - (unsigned int)(BugCheckParameter4 & 0xFFF));
  }
  SpecialPoolBlockType = MmQuerySpecialPoolBlockType(BugCheckParameter4);
  SpecialPoolBlockSize = MmQuerySpecialPoolBlockSize(BugCheckParameter4);
  v7 = SpecialPoolBlockSize;
  v8 = *(_DWORD *)(v6 + 4) & 0x7FFFFFFF;
  if ( v8 == PoolHitTag )
    __debugbreak();
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE22u, SpecialPoolBlockType, v8, BugCheckParameter4, SpecialPoolBlockSize);
  if ( (SpecialPoolBlockType & 0x20) != 0 )
  {
    v10 = ExpSessionPoolTrackTable;
    v9 = ExpSessionPoolTrackTableMask;
  }
  else
  {
    v9 = PoolTrackTableMask;
    v10 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
  }
  v11 = v9 & ((40543 * v8) ^ ((40543 * (unsigned __int64)v8) >> 32));
  v12 = 40 * v11;
  v13 = *(_DWORD *)(40 * v11 + v10);
  for ( j = 40 * v11 + v10; v13 != v8; j = v12 + v10 )
  {
    if ( v13 || (SpecialPoolBlockType & 0x20) != 0 || (v15 = *(_DWORD *)(v12 + PoolTrackTable)) == 0 )
    {
      LODWORD(v11) = v9 & (v11 + 1);
      if ( (_DWORD)v11 == (v9 & ((40543 * v8) ^ ((40543 * (unsigned __int64)v8) >> 32))) )
      {
        ExpRemovePoolTrackerExpansion(v8, v7, SpecialPoolBlockType);
        MmFreeSpecialPool(BugCheckParameter4);
        return;
      }
    }
    else
    {
      *(_DWORD *)j = v15;
    }
    v12 = 40LL * (unsigned int)v11;
    v13 = *(_DWORD *)(v12 + v10);
  }
  v16 = -v7;
  if ( (SpecialPoolBlockType & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(j + 28));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(j + 32), v16);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(j + 8));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(j + 16), v16);
  }
  MmFreeSpecialPool(BugCheckParameter4);
}
