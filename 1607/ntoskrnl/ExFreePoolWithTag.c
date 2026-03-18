/*
 * XREFs of ExFreePoolWithTag @ 0x140254000
 * Callers:
 *     ?SmStSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z @ 0x140002010 (-SmStSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@W4_SM_STORE_SWAP_OPERATION@@@Z.c)
 *     ?SmStoreMgrCallback@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x140002D74 (-SmStoreMgrCallback@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003000 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039C4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmFpCleanup @ 0x140003DB8 (SmFpCleanup.c)
 *     ?StCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003FBC (-StCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     ?StDmCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140004064 (-StDmCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z @ 0x140004294 (-NpCleanup@NP_CONTEXT@@SAXPEAU1@K@Z.c)
 *     ?BTreeSearchResultCleanup@?$B_TREE@KU_ST_REGION_ENTRY@?$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEXT@@UST_REGION_ENTRY_COMPARATOR@2@@@SAXPEAU1@PEAUSEARCH_RESULT@1@K@Z @ 0x140004344 (-BTreeSearchResultCleanup@-$B_TREE@KU_ST_REGION_ENTRY@-$ST_STORE@USM_TRAITS@@@@$0BAAA@UNP_CONTEX.c)
 *     ?StReleaseReadContext@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z @ 0x140004380 (-StReleaseReadContext@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAX@Z.c)
 *     SmHpChunkHeapCleanup @ 0x1400044F4 (SmHpChunkHeapCleanup.c)
 *     ?StDrainReadContextList@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400046D0 (-StDrainReadContextList@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     StEtaCleanup @ 0x140004704 (StEtaCleanup.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x140005558 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     PfTFreeTraceDump @ 0x1400066F0 (PfTFreeTraceDump.c)
 *     MmFreeAccessPfnBuffer @ 0x140006704 (MmFreeAccessPfnBuffer.c)
 *     PfFbBufferListInsertInFree @ 0x140006744 (PfFbBufferListInsertInFree.c)
 *     ExFreeCacheAwareRundownProtection @ 0x140007928 (ExFreeCacheAwareRundownProtection.c)
 *     PnpGetRelatedTargetDevice @ 0x1400081E4 (PnpGetRelatedTargetDevice.c)
 *     PnpDeviceCompletionRequestDestroy @ 0x1400088EC (PnpDeviceCompletionRequestDestroy.c)
 *     EmpEvaluateTargetRule @ 0x140008D9C (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140008F58 (EmpEvaluateNodeLink.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     SepInternalQuerySecurityAttributesTokenEx @ 0x14000E3E0 (SepInternalQuerySecurityAttributesTokenEx.c)
 *     AuthzBasepFinaliseSecurityAttributesList @ 0x14000F090 (AuthzBasepFinaliseSecurityAttributesList.c)
 *     AuthzBasepCommitSecurityAttributeChanges @ 0x14000F0F0 (AuthzBasepCommitSecurityAttributeChanges.c)
 *     SepDeleteAccessState @ 0x14000F6E0 (SepDeleteAccessState.c)
 *     SeSetLearningModeObjectInformation @ 0x14000FB70 (SeSetLearningModeObjectInformation.c)
 *     ExpAddTagForBigPages @ 0x1400124D0 (ExpAddTagForBigPages.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     NtResetWriteWatch @ 0x1400136F0 (NtResetWriteWatch.c)
 *     MiRemoveSecureEntry @ 0x140014390 (MiRemoveSecureEntry.c)
 *     NtGetWriteWatch @ 0x140014EF0 (NtGetWriteWatch.c)
 *     MiReleaseSystemCacheView @ 0x140018374 (MiReleaseSystemCacheView.c)
 *     MiTrimSharedPageFromViews @ 0x140018E50 (MiTrimSharedPageFromViews.c)
 *     IoDiskIoAttributionDereference @ 0x14001F3AC (IoDiskIoAttributionDereference.c)
 *     MmWaitForCacheManagerPrefetch @ 0x1400224D0 (MmWaitForCacheManagerPrefetch.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiFinishVadDeletion @ 0x1400295E0 (MiFinishVadDeletion.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     MiUnlockAndDereferenceVad @ 0x14002BDA0 (MiUnlockAndDereferenceVad.c)
 *     CmpFreeTransientPoolWithTag @ 0x14002D218 (CmpFreeTransientPoolWithTag.c)
 *     PsBoostThreadIoEx @ 0x14002D440 (PsBoostThreadIoEx.c)
 *     IopAllocateIrpPrivate @ 0x14002E250 (IopAllocateIrpPrivate.c)
 *     PfSnNameRemove @ 0x140034A90 (PfSnNameRemove.c)
 *     PfSnGetFileInformation @ 0x140037630 (PfSnGetFileInformation.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiAgeWorkingSet @ 0x140047090 (MiAgeWorkingSet.c)
 *     IopfCompleteRequest @ 0x140053570 (IopfCompleteRequest.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     IopFreeIrp @ 0x140055DE0 (IopFreeIrp.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x140060F4C (SeCaptureObjectTypeList.c)
 *     SeLogAccessFailure @ 0x1400615D0 (SeLogAccessFailure.c)
 *     MiDeleteSubsectionPages @ 0x140061C70 (MiDeleteSubsectionPages.c)
 *     SeAccessCheckWithHint @ 0x140062B80 (SeAccessCheckWithHint.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     CcExtendVacbArray @ 0x14006CF18 (CcExtendVacbArray.c)
 *     CcCompleteAsyncReadWorker @ 0x14006D794 (CcCompleteAsyncReadWorker.c)
 *     CcAsyncCopyRead @ 0x14006DB6C (CcAsyncCopyRead.c)
 *     IoBoostThreadIoPriority @ 0x14006E244 (IoBoostThreadIoPriority.c)
 *     CcUninitializeCacheMap @ 0x1400705C0 (CcUninitializeCacheMap.c)
 *     CcWriteBehind @ 0x14007161C (CcWriteBehind.c)
 *     IoFreeMdl @ 0x140072230 (IoFreeMdl.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     ExFreeSvmAsid @ 0x140075598 (ExFreeSvmAsid.c)
 *     FsRtlpRequestExclusiveOplock @ 0x140076FCC (FsRtlpRequestExclusiveOplock.c)
 *     FsRtlpRemoveAndBreakRHIrp @ 0x1400777A4 (FsRtlpRemoveAndBreakRHIrp.c)
 *     FsRtlpRequestShareableOplock @ 0x140077994 (FsRtlpRequestShareableOplock.c)
 *     IopSetLockOperationProcess @ 0x1400784D8 (IopSetLockOperationProcess.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     FsRtlCheckOplockEx @ 0x14007A080 (FsRtlCheckOplockEx.c)
 *     FsRtlpOplockCleanup @ 0x14007AA74 (FsRtlpOplockCleanup.c)
 *     IopGetSetSpecificExtension @ 0x14007AE90 (IopGetSetSpecificExtension.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14007B070 (FsRtlInsertPerFileObjectContext.c)
 *     SepMandatorySubProcessToken @ 0x14007C05C (SepMandatorySubProcessToken.c)
 *     AuthzBasepDeleteSecurityAttribute @ 0x14007C7D4 (AuthzBasepDeleteSecurityAttribute.c)
 *     IoDeleteDevice @ 0x14007F30C (IoDeleteDevice.c)
 *     SepSetTokenLowboxHandles @ 0x14007F580 (SepSetTokenLowboxHandles.c)
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     SepCaptureTokenSecurityOperations @ 0x14008064C (SepCaptureTokenSecurityOperations.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1400807C0 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x140080970 (SepCaptureHandles.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140081540 (RtlpIsNameInExpressionPrivate.c)
 *     KeFreeXStateContext @ 0x140082DF4 (KeFreeXStateContext.c)
 *     VfTargetDriversAdd @ 0x14008439C (VfTargetDriversAdd.c)
 *     KsepPoolFreePaged @ 0x140084D54 (KsepPoolFreePaged.c)
 *     EtwpAdjustTraceBuffers @ 0x140085490 (EtwpAdjustTraceBuffers.c)
 *     EtwpAllocateFreeBuffers @ 0x14008565C (EtwpAllocateFreeBuffers.c)
 *     EtwpFreeCompression @ 0x140085CBC (EtwpFreeCompression.c)
 *     EtwpFreePlaceholderList @ 0x140085DC8 (EtwpFreePlaceholderList.c)
 *     ExGetSessionPoolTagInfo @ 0x14008672C (ExGetSessionPoolTagInfo.c)
 *     ExUnlockUserBuffer @ 0x140086998 (ExUnlockUserBuffer.c)
 *     MiEmptyAccessLogs @ 0x140086B20 (MiEmptyAccessLogs.c)
 *     MiDeleteSubsection @ 0x140087410 (MiDeleteSubsection.c)
 *     CmpDeleteHive @ 0x140088098 (CmpDeleteHive.c)
 *     CcDeleteMbcb @ 0x140088410 (CcDeleteMbcb.c)
 *     CcDeallocateBcb @ 0x140088578 (CcDeallocateBcb.c)
 *     ExDeleteResourceLite @ 0x1400885B0 (ExDeleteResourceLite.c)
 *     AuthzBasepFreeSecurityAttributesList @ 0x140088740 (AuthzBasepFreeSecurityAttributesList.c)
 *     AuthzBasepFreeSecurityAttributeValues @ 0x1400887C0 (AuthzBasepFreeSecurityAttributeValues.c)
 *     SepFreeTokenCapabilities @ 0x140088870 (SepFreeTokenCapabilities.c)
 *     PspJobDelete @ 0x1400888BC (PspJobDelete.c)
 *     MiGetLargePageToZero @ 0x14008A680 (MiGetLargePageToZero.c)
 *     MiZeroLargePage @ 0x14008B1C0 (MiZeroLargePage.c)
 *     FsRtlTruncateBaseMcb @ 0x14008C724 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x14008D2B0 (FsRtlAddEntry.c)
 *     SepFreeResourceInfo @ 0x14008D8AC (SepFreeResourceInfo.c)
 *     IoMakeAssociatedIrpPriv @ 0x14008E078 (IoMakeAssociatedIrpPriv.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiFreeModWriterEntry @ 0x14008EF68 (MiFreeModWriterEntry.c)
 *     MiViewMayContainPage @ 0x14008F754 (MiViewMayContainPage.c)
 *     MiCreatePrototypePtes @ 0x14008FE84 (MiCreatePrototypePtes.c)
 *     MiDeleteEmptySubsections @ 0x140090380 (MiDeleteEmptySubsections.c)
 *     SepCleanupMarkedForDeletionEntries @ 0x140091F30 (SepCleanupMarkedForDeletionEntries.c)
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     IopDereferenceVpbAndFree @ 0x1400967B0 (IopDereferenceVpbAndFree.c)
 *     ExpExpandResourceOwnerTable @ 0x1400971CC (ExpExpandResourceOwnerTable.c)
 *     RtlContractHashTable @ 0x140097840 (RtlContractHashTable.c)
 *     RtlInsertDynamicFunctionTable @ 0x1400985C0 (RtlInsertDynamicFunctionTable.c)
 *     IopDeleteFileObjectExtension @ 0x1400998A0 (IopDeleteFileObjectExtension.c)
 *     MmProbeAndLockSelectedPages @ 0x14009A5D4 (MmProbeAndLockSelectedPages.c)
 *     MmFreeContiguousMemory @ 0x14009ABB8 (MmFreeContiguousMemory.c)
 *     MiDereferenceIoPages @ 0x14009BF70 (MiDereferenceIoPages.c)
 *     IoReleaseRemoveLockEx @ 0x14009DD7C (IoReleaseRemoveLockEx.c)
 *     PnpRemoveLockedDeviceNode @ 0x14009E908 (PnpRemoveLockedDeviceNode.c)
 *     PpDevNodeRemoveFromTree @ 0x14009F608 (PpDevNodeRemoveFromTree.c)
 *     AuthzBasepEvaluateAceCondition @ 0x14009FBFC (AuthzBasepEvaluateAceCondition.c)
 *     AuthzBasepResetOperands @ 0x1400A01BC (AuthzBasepResetOperands.c)
 *     CcInitializeVolumeCacheMap @ 0x1400A0E00 (CcInitializeVolumeCacheMap.c)
 *     FsRtlUninitializeOplock @ 0x1400A101C (FsRtlUninitializeOplock.c)
 *     FsRtlCancelNotify @ 0x1400A20F4 (FsRtlCancelNotify.c)
 *     FsRtlpRemoveAndCompleteWaitingIrp @ 0x1400A26C4 (FsRtlpRemoveAndCompleteWaitingIrp.c)
 *     MiExpandSystemCache @ 0x1400A2B00 (MiExpandSystemCache.c)
 *     MiDeleteControlArea @ 0x1400A4F50 (MiDeleteControlArea.c)
 *     FsRtlUninitializeBaseMcb @ 0x1400A533C (FsRtlUninitializeBaseMcb.c)
 *     IoFreeWorkItem @ 0x1400A8584 (IoFreeWorkItem.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400A97EC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     IopCreateSecurityCheck @ 0x1400AABD8 (IopCreateSecurityCheck.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400AC754 (FsRtlpOplockSendModernAppTermination.c)
 *     AuthzBasepInitializeResourceClaimsFromSacl @ 0x1400AC934 (AuthzBasepInitializeResourceClaimsFromSacl.c)
 *     MiDeprioritizeVad @ 0x1400ACF60 (MiDeprioritizeVad.c)
 *     IopUnloadSafeCompletion @ 0x1400AE278 (IopUnloadSafeCompletion.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AEAD8 (MiAllocatePfnRepurposeLogDispatch.c)
 *     DestroyEventEntry @ 0x1400AF218 (DestroyEventEntry.c)
 *     WmipReceiveNotifications @ 0x1400AF3D4 (WmipReceiveNotifications.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400AF76C (RtlpAllowsLowBoxAccess.c)
 *     PnpDeviceActionWorker @ 0x1400AFA3C (PnpDeviceActionWorker.c)
 *     SepDeleteSessionLowboxEntries @ 0x1400AFF8C (SepDeleteSessionLowboxEntries.c)
 *     KsepPoolFreeNonPaged @ 0x1400B0130 (KsepPoolFreeNonPaged.c)
 *     PfpMemoryRangesQuery @ 0x1400B0144 (PfpMemoryRangesQuery.c)
 *     MiStoreEvictPageFile @ 0x1400B0530 (MiStoreEvictPageFile.c)
 *     DbgLoadImageSymbolsUnicode @ 0x1400B0FFC (DbgLoadImageSymbolsUnicode.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400B1090 (DbgUnicodeStringToAnsiString.c)
 *     PspRemoveProperty @ 0x1400B116C (PspRemoveProperty.c)
 *     PspInsertProperty @ 0x1400B121C (PspInsertProperty.c)
 *     SepRmCallLsa @ 0x1400B1930 (SepRmCallLsa.c)
 *     SepRmDispatchDataToLsa @ 0x1400B1C00 (SepRmDispatchDataToLsa.c)
 *     IopFreeIrpExtension @ 0x1400B38E4 (IopFreeIrpExtension.c)
 *     MiFreeClonePool @ 0x1400B47F4 (MiFreeClonePool.c)
 *     IoAllocateDriverObjectExtension @ 0x1400B4958 (IoAllocateDriverObjectExtension.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B4B50 (CmpLogTransactionAbortedWithChildName.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B4C7C (HvSynchronizeAndDropTemporaryBins.c)
 *     RtlDeleteHashTable @ 0x1400B5290 (RtlDeleteHashTable.c)
 *     PfSnEnablePrefetcherTimerRoutine @ 0x1400B5554 (PfSnEnablePrefetcherTimerRoutine.c)
 *     PnpRemoveDeviceActionRequests @ 0x1400B59B0 (PnpRemoveDeviceActionRequests.c)
 *     MiInitializeNumaRanges @ 0x1400B5C68 (MiInitializeNumaRanges.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MiDecrementCloneBlockReference @ 0x1400B8CA0 (MiDecrementCloneBlockReference.c)
 *     MmOutSwapWorkingSet @ 0x1400B97A8 (MmOutSwapWorkingSet.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     MiDeleteStaleCacheMaps @ 0x1400BE6CC (MiDeleteStaleCacheMaps.c)
 *     PiControlFreeUserModeCallersBuffer @ 0x1400C38B0 (PiControlFreeUserModeCallersBuffer.c)
 *     FsRtlEmptyFreePoolList @ 0x1400C4630 (FsRtlEmptyFreePoolList.c)
 *     FsRtlFreeTunnelNode @ 0x1400C4694 (FsRtlFreeTunnelNode.c)
 *     MiFreeInPageSupportBlock @ 0x1400C63A0 (MiFreeInPageSupportBlock.c)
 *     PspReaper @ 0x1400CB26C (PspReaper.c)
 *     CcScanLogHandleList @ 0x1400CCA0C (CcScanLogHandleList.c)
 *     CcDeleteSharedCacheMap @ 0x1400CCD34 (CcDeleteSharedCacheMap.c)
 *     CcUninitializeVolumeCacheMap @ 0x1400CCFE0 (CcUninitializeVolumeCacheMap.c)
 *     MiPfPutPagesInTransition @ 0x1400E5100 (MiPfPutPagesInTransition.c)
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E9780 (IopBuildDeviceIoControlRequest.c)
 *     IopAllocateFileObjectExtension @ 0x1400EB590 (IopAllocateFileObjectExtension.c)
 *     PfSnTraceGetLogEntry @ 0x1400EF6D0 (PfSnTraceGetLogEntry.c)
 *     IopDropIrp @ 0x1400F788C (IopDropIrp.c)
 *     AlpcpDeferredFreeCompletionPacketLookaside @ 0x1400F86C0 (AlpcpDeferredFreeCompletionPacketLookaside.c)
 *     ExpDeleteWorkerFactory @ 0x1400F8700 (ExpDeleteWorkerFactory.c)
 *     ExpWorkerFactoryCompletionPacketRoutine @ 0x1400F8900 (ExpWorkerFactoryCompletionPacketRoutine.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400FAFC0 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400FB2FC (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PoDestroyReasonContext @ 0x1400FB8C8 (PoDestroyReasonContext.c)
 *     PoCaptureReasonContext @ 0x1400FC0BC (PoCaptureReasonContext.c)
 *     PopCaptureReasonContext @ 0x1400FC2D4 (PopCaptureReasonContext.c)
 *     RtlIsUntrustedObject @ 0x1400FC880 (RtlIsUntrustedObject.c)
 *     MiCreateMdl @ 0x1400FCB40 (MiCreateMdl.c)
 *     MiRemoveFromSystemSpace @ 0x140100090 (MiRemoveFromSystemSpace.c)
 *     MiAllocateModWriterEntry @ 0x140102A50 (MiAllocateModWriterEntry.c)
 *     MiObtainMdlCharges @ 0x140103DA8 (MiObtainMdlCharges.c)
 *     MiInitializeMdlPages @ 0x140106A8C (MiInitializeMdlPages.c)
 *     MiDereferencePageRuns @ 0x140107058 (MiDereferencePageRuns.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     MiCreateCloneChain @ 0x14010CD00 (MiCreateCloneChain.c)
 *     MiDereferenceExtendInfo @ 0x14010EAA4 (MiDereferenceExtendInfo.c)
 *     RtlExpandHashTable @ 0x14010EB80 (RtlExpandHashTable.c)
 *     ExFreeCacheAwarePushLock @ 0x14010EFBC (ExFreeCacheAwarePushLock.c)
 *     MiGetWorkingSetInfo @ 0x14010F340 (MiGetWorkingSetInfo.c)
 *     ExAllocateCacheAwarePushLock @ 0x140111204 (ExAllocateCacheAwarePushLock.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140111A40 (PnpUnregisterPlugPlayNotification.c)
 *     PopUnregisterPowerSettingCallback @ 0x140111E80 (PopUnregisterPowerSettingCallback.c)
 *     SepExpandSingletonArrays @ 0x140112028 (SepExpandSingletonArrays.c)
 *     PfpServiceMainThreadUnboost @ 0x1401145B0 (PfpServiceMainThreadUnboost.c)
 *     ?NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z @ 0x140114A98 (-NpNodeFree@NP_CONTEXT@@SAXPEAUNP_CTX@1@PEAXK@Z.c)
 *     ?BTreeMergeNodes@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUSEARCH_RESULT@1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x140114C1C (-BTreeMergeNodes@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     SmHpBufferAlloc @ 0x14011595C (SmHpBufferAlloc.c)
 *     MiBuildReservationCluster @ 0x14011603C (MiBuildReservationCluster.c)
 *     ?BTreeDeleteEx@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAJPEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x140117A3C (-BTreeDeleteEx@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140119D48 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     ?SmWorkItemFree@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_WORK_ITEM_HDR@@PEAJ@Z @ 0x14011AA74 (-SmWorkItemFree@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@PEAU_ST_W.c)
 *     ?SmWorkItemFreeResource@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_CONTEXT@1@@Z @ 0x14011AD70 (-SmWorkItemFreeResource@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAU_SM_WORK_ITEM@1@PEAU_SM_IO_C.c)
 *     SmFpFree @ 0x14011ADA8 (SmFpFree.c)
 *     MiStoreFreeWriteSupport @ 0x14011AE9C (MiStoreFreeWriteSupport.c)
 *     ?StReleaseRegion@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z @ 0x140120180 (-StReleaseRegion@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@K@Z.c)
 *     KeDisconnectInterrupt @ 0x140123E5C (KeDisconnectInterrupt.c)
 *     KiIntSteerDisable @ 0x140123F48 (KiIntSteerDisable.c)
 *     ?BTreeSplitChild@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@PEAUSEARCH_RESULT@1@@Z @ 0x1401244D0 (-BTreeSplitChild@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0B.c)
 *     SmKmFreeMdlForLock @ 0x140124930 (SmKmFreeMdlForLock.c)
 *     PopDereferenceWakeInfos @ 0x1401257A4 (PopDereferenceWakeInfos.c)
 *     MiFindPageFileWriteCluster @ 0x140125A40 (MiFindPageFileWriteCluster.c)
 *     MiPfCompleteCoalescedIo @ 0x140125BC0 (MiPfCompleteCoalescedIo.c)
 *     SmArrayGrow @ 0x1401260EC (SmArrayGrow.c)
 *     PfpPowerActionDpcRoutine @ 0x140126544 (PfpPowerActionDpcRoutine.c)
 *     BgpFwAllocateMemory @ 0x140129508 (BgpFwAllocateMemory.c)
 *     BgpFwFreeMemory @ 0x14012968C (BgpFwFreeMemory.c)
 *     MiFreePrivateFixupEntryForSystemImage @ 0x14012CCA0 (MiFreePrivateFixupEntryForSystemImage.c)
 *     KiIntSteerConnect @ 0x14012D37C (KiIntSteerConnect.c)
 *     BiWasFirmwareModified @ 0x14012DFC4 (BiWasFirmwareModified.c)
 *     VfTargetDriversRemove @ 0x14012EDE8 (VfTargetDriversRemove.c)
 *     VfPoolDelayFreeIfPossible @ 0x14012EF14 (VfPoolDelayFreeIfPossible.c)
 *     SmKmAllocateMdlForLock @ 0x14012F10C (SmKmAllocateMdlForLock.c)
 *     MiSessionInsertImage @ 0x14012FB6C (MiSessionInsertImage.c)
 *     ExRegisterCallback @ 0x14012FD34 (ExRegisterCallback.c)
 *     DbgUnLoadImageSymbolsUnicode @ 0x14013018C (DbgUnLoadImageSymbolsUnicode.c)
 *     IopCleanupNotifications @ 0x1401302A4 (IopCleanupNotifications.c)
 *     MiSessionRemoveImage @ 0x140130440 (MiSessionRemoveImage.c)
 *     ExpFinalizeTimerDeletion @ 0x140130A20 (ExpFinalizeTimerDeletion.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140130BA4 (LdrUnloadAlternateResourceModuleEx.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140130E64 (MiAddPrivateFixupEntryForSystemImage.c)
 *     IoWriteErrorLogEntry @ 0x1401310F8 (IoWriteErrorLogEntry.c)
 *     IopSessionChangeWorker @ 0x1401314A4 (IopSessionChangeWorker.c)
 *     ExUnregisterCallback @ 0x140131758 (ExUnregisterCallback.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140132944 (RtlpUpcaseUnicodeStringPrivate.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1401338C8 (ExpSaPageGroupDescriptorAllocate.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1401343CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     ExpSaPageGroupDescriptorFree @ 0x140134EE4 (ExpSaPageGroupDescriptorFree.c)
 *     ExpSaBinaryArrayRemove @ 0x140134FD0 (ExpSaBinaryArrayRemove.c)
 *     ExFreeAutoExpandPushLock @ 0x140135640 (ExFreeAutoExpandPushLock.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiZeroNodePages @ 0x14013A830 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14013AB00 (MiCreateZeroThreadContext.c)
 *     MiInitializePageZeroing @ 0x14013AE70 (MiInitializePageZeroing.c)
 *     PnpBootDeviceWait @ 0x14013BE80 (PnpBootDeviceWait.c)
 *     SepInitProcessAuditSd @ 0x14013C60C (SepInitProcessAuditSd.c)
 *     BvgaReleaseResources @ 0x14013C6D4 (BvgaReleaseResources.c)
 *     BapdpProcessEtwEvents @ 0x14013CE64 (BapdpProcessEtwEvents.c)
 *     IopInitializeOfflineCrashDump @ 0x14013D3BC (IopInitializeOfflineCrashDump.c)
 *     CcAsyncReadWorker @ 0x14013D91C (CcAsyncReadWorker.c)
 *     MiZeroLargePageThread @ 0x14013F190 (MiZeroLargePageThread.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x140140150 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140140324 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x14014059C (RtlpMuiRegLoadLicInformation.c)
 *     MiDecrementHugeContext @ 0x140140E7C (MiDecrementHugeContext.c)
 *     CmpCreateHiveRootCell @ 0x140140F24 (CmpCreateHiveRootCell.c)
 *     PopFxCreateDeviceCommon @ 0x1401421F0 (PopFxCreateDeviceCommon.c)
 *     IopRemoveDumpCapsuleSupport @ 0x140143020 (IopRemoveDumpCapsuleSupport.c)
 *     IopReadDumpRegistry @ 0x140143058 (IopReadDumpRegistry.c)
 *     MiStoreEvictThread @ 0x14014341C (MiStoreEvictThread.c)
 *     PpmParkRegisterParking @ 0x140143818 (PpmParkRegisterParking.c)
 *     AdtpCleanupParameterAllocations @ 0x140144390 (AdtpCleanupParameterAllocations.c)
 *     AdtpPackageParameters @ 0x140144450 (AdtpPackageParameters.c)
 *     SepBuildCapPolicyTable @ 0x140144EF0 (SepBuildCapPolicyTable.c)
 *     PopGetDope @ 0x140145054 (PopGetDope.c)
 *     PnpFreeUnicodeStringList @ 0x1401452DC (PnpFreeUnicodeStringList.c)
 *     SepAdtLogAuditRecord @ 0x140145330 (SepAdtLogAuditRecord.c)
 *     PpmInstallNewIdleStates @ 0x1401456F8 (PpmInstallNewIdleStates.c)
 *     EmpRuleUpdateWorkerThread @ 0x1401466C0 (EmpRuleUpdateWorkerThread.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x140146FE0 (EmpEvaluateUpdateRuleEvalState.c)
 *     SmFpPreAllocate @ 0x1401488D8 (SmFpPreAllocate.c)
 *     FsFilterInit @ 0x140148B44 (FsFilterInit.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014921C (LdrpSetAlternateResourceModuleHandle.c)
 *     TlgRegisterAggregateProviderEx @ 0x1401495F4 (TlgRegisterAggregateProviderEx.c)
 *     CreateTlgAggregateSession @ 0x1401497C0 (CreateTlgAggregateSession.c)
 *     IopGetPhysicalMemoryBlock @ 0x140149BA4 (IopGetPhysicalMemoryBlock.c)
 *     PopNotifyBrightnessChangesWorker @ 0x14014A420 (PopNotifyBrightnessChangesWorker.c)
 *     IopIsBitlockerOn @ 0x14014B8DC (IopIsBitlockerOn.c)
 *     WheapCheckForAndReportErrorsFromPreviousSession @ 0x14014C3DC (WheapCheckForAndReportErrorsFromPreviousSession.c)
 *     CcUnregisterExternalCache @ 0x1401B1924 (CcUnregisterExternalCache.c)
 *     CcPostDeferredWrites @ 0x1401B1B04 (CcPostDeferredWrites.c)
 *     CcMmLogLostDelayedWriteError @ 0x1401B1BFC (CcMmLogLostDelayedWriteError.c)
 *     CmpCaptureKeyValueArray @ 0x1401B2C8C (CmpCaptureKeyValueArray.c)
 *     CmpFreeCallbackContext @ 0x1401B31CC (CmpFreeCallbackContext.c)
 *     CmpPromoteKey @ 0x1401B3424 (CmpPromoteKey.c)
 *     CmQueryLayeredKey @ 0x1401B3DE4 (CmQueryLayeredKey.c)
 *     CmQueryMultipleValueForLayeredKey @ 0x1401B4234 (CmQueryMultipleValueForLayeredKey.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401B4EE0 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmLogMcUpdateStatus @ 0x1401B53F8 (CmLogMcUpdateStatus.c)
 *     EmpProviderDeregisterEntry @ 0x1401B8090 (EmpProviderDeregisterEntry.c)
 *     FsRtlpRemoveAndCompleteRHIrp @ 0x1401B9B20 (FsRtlpRemoveAndCompleteRHIrp.c)
 *     FsFilterFreeCompletionStack @ 0x1401B9DA4 (FsFilterFreeCompletionStack.c)
 *     FsRtlInsertPerFileContext @ 0x1401BA044 (FsRtlInsertPerFileContext.c)
 *     FsRtlStackOverflowRead @ 0x1401BA738 (FsRtlStackOverflowRead.c)
 *     HvlpDepositPages @ 0x1401BB624 (HvlpDepositPages.c)
 *     VslAllocatePool @ 0x1401C2648 (VslAllocatePool.c)
 *     VslFreePoolTransferObject @ 0x1401C2A38 (VslFreePoolTransferObject.c)
 *     VslpLockPagesForTransfer @ 0x1401C33D0 (VslpLockPagesForTransfer.c)
 *     VslpUnlockPagesForTransfer @ 0x1401C35D0 (VslpUnlockPagesForTransfer.c)
 *     BgkDisplayString @ 0x1401C3CAC (BgkDisplayString.c)
 *     IoFillDumpHeader @ 0x1401C55A4 (IoFillDumpHeader.c)
 *     IoFreeErrorLogEntry @ 0x1401C8AA8 (IoFreeErrorLogEntry.c)
 *     IoFreeSfioStreamIdentifier @ 0x1401C8AF8 (IoFreeSfioStreamIdentifier.c)
 *     IoRaiseInformationalHardError @ 0x1401C8F44 (IoRaiseInformationalHardError.c)
 *     IopReplaceCompletionPort @ 0x1401C976C (IopReplaceCompletionPort.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401C9C40 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopKeepAliveWorker @ 0x1401C9F18 (IopKeepAliveWorker.c)
 *     IopAllowRemoteDASD @ 0x1401CA36C (IopAllowRemoteDASD.c)
 *     IopErrorLogDpc @ 0x1401CB4AC (IopErrorLogDpc.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB578 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_Init @ 0x1401CBA9C (SecureDump_Init.c)
 *     SecureDump_PrepareForInit @ 0x1401CBC5C (SecureDump_PrepareForInit.c)
 *     SecureDump_ReadRegistry @ 0x1401CBE50 (SecureDump_ReadRegistry.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBF4C (SecureDump_SymmetricEncryptionSetup.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401CCDEC (IoReleaseRemoveLockAndWaitEx.c)
 *     PipCreateNewDependencyEdge @ 0x1401CD17C (PipCreateNewDependencyEdge.c)
 *     PipFreeDependencyEdge @ 0x1401CD294 (PipFreeDependencyEdge.c)
 *     IoTranslateBusAddress @ 0x1401CD674 (IoTranslateBusAddress.c)
 *     IopDereferencePassiveInterruptBlock @ 0x1401CD9FC (IopDereferencePassiveInterruptBlock.c)
 *     PnpReleaseBootResourcesForFilteredRequirements @ 0x1401CE0DC (PnpReleaseBootResourcesForFilteredRequirements.c)
 *     PiDevCfgPopCopyKeyEntry @ 0x1401CF09C (PiDevCfgPopCopyKeyEntry.c)
 *     PiDevCfgPopDriverNodeEntry @ 0x1401CF0F4 (PiDevCfgPopDriverNodeEntry.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1401CF144 (PiDevCfgPushCopyKeyEntry.c)
 *     PiDevCfgQueryResolveValue @ 0x1401CF2EC (PiDevCfgQueryResolveValue.c)
 *     KdDeregisterPowerHandler @ 0x1401D1380 (KdDeregisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x1401D194C (KdSetDbgPrintBufferSize.c)
 *     KeDeregisterNmiCallback @ 0x1401D2818 (KeDeregisterNmiCallback.c)
 *     KeProcessorProfileControlArea @ 0x1401D2934 (KeProcessorProfileControlArea.c)
 *     KeDisableProfiling @ 0x1401D6CB0 (KeDisableProfiling.c)
 *     KeStartProfile @ 0x1401D6D44 (KeStartProfile.c)
 *     KeStopProfile @ 0x1401D6E54 (KeStopProfile.c)
 *     MiDeleteCachedSubsection @ 0x1401DE5D0 (MiDeleteCachedSubsection.c)
 *     MiFlushControlArea @ 0x1401DEA98 (MiFlushControlArea.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E0630 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E0B98 (MiReleaseOutSwappedProcessCommit.c)
 *     MiZeroPageFile @ 0x1401E1904 (MiZeroPageFile.c)
 *     MiMakeIoRangePermanent @ 0x1401E6A18 (MiMakeIoRangePermanent.c)
 *     MiFreeVadEvents @ 0x1401E9280 (MiFreeVadEvents.c)
 *     MiFlushComplete @ 0x1401EAD40 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAE48 (MiFreeOverlappedFlushEntry.c)
 *     MiExtendPagingFileMaximum @ 0x1401EE330 (MiExtendPagingFileMaximum.c)
 *     MiAddRangeToPartitionTree @ 0x1401F0D8C (MiAddRangeToPartitionTree.c)
 *     MiAllocatePartitionPhysicalPages @ 0x1401F0FD8 (MiAllocatePartitionPhysicalPages.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     MiDereferencePartitionFinal @ 0x1401F196C (MiDereferencePartitionFinal.c)
 *     MiFreePartitionTree @ 0x1401F1A80 (MiFreePartitionTree.c)
 *     MiInsertPartitionPages @ 0x1401F1B74 (MiInsertPartitionPages.c)
 *     MmOutSwapVirtualAddresses @ 0x1401F7898 (MmOutSwapVirtualAddresses.c)
 *     MiAllocateCombineProto @ 0x1401F7B48 (MiAllocateCombineProto.c)
 *     MiCombineWorkingSet @ 0x1401F80D0 (MiCombineWorkingSet.c)
 *     MiFreeCombinePool @ 0x1401F9DBC (MiFreeCombinePool.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiInsertPteTracker @ 0x1401FC7EC (MiInsertPteTracker.c)
 *     MmEnumerateBadPages @ 0x1401FE948 (MmEnumerateBadPages.c)
 *     PpmQueryPlatformStateResidency @ 0x140200D10 (PpmQueryPlatformStateResidency.c)
 *     PpmRemoveIdleStates @ 0x140200E0C (PpmRemoveIdleStates.c)
 *     PpmUpdateIdleVeto @ 0x140201794 (PpmUpdateIdleVeto.c)
 *     PopFxDestroyDeviceCommon @ 0x140202808 (PopFxDestroyDeviceCommon.c)
 *     PopFxDestroyDeviceDpm @ 0x140202834 (PopFxDestroyDeviceDpm.c)
 *     PopFxRegisterPluginEx @ 0x1402034FC (PopFxRegisterPluginEx.c)
 *     PpmClearSimulatedLoad @ 0x140204E3C (PpmClearSimulatedLoad.c)
 *     PpmSetSimulatedLoad @ 0x14020523C (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x140205918 (PopUpdateWakeSource.c)
 *     PopUpdateWakeSourceWorker @ 0x140205A18 (PopUpdateWakeSourceWorker.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140209C54 (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmFireWmiEvent @ 0x14020B330 (PpmFireWmiEvent.c)
 *     PpmWmiFireIdleAccountingEvent @ 0x14020B3B0 (PpmWmiFireIdleAccountingEvent.c)
 *     PopSetWatchdog @ 0x14020B4CC (PopSetWatchdog.c)
 *     PpmEventTracePreVetoAccounting @ 0x14020CF2C (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14020D0E0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PspReadDfssConfigurationValues @ 0x14020EBD0 (PspReadDfssConfigurationValues.c)
 *     PsSetCpuQuotaInformation @ 0x14020ED78 (PsSetCpuQuotaInformation.c)
 *     PsDispatchIumService @ 0x14020FC24 (PsDispatchIumService.c)
 *     PspIumAllocatePhysicalPages @ 0x1402100F8 (PspIumAllocatePhysicalPages.c)
 *     RtlGetAppContainerNamedObjectPath @ 0x14021091C (RtlGetAppContainerNamedObjectPath.c)
 *     DbgpRemoveDebugPrintCallback @ 0x1402114B0 (DbgpRemoveDebugPrintCallback.c)
 *     RtlTraceDatabaseDestroy @ 0x140215CE8 (RtlTraceDatabaseDestroy.c)
 *     SeFreeCapturedObjectTypeList @ 0x1402199A8 (SeFreeCapturedObjectTypeList.c)
 *     SepVerifyDesktopAppxImage @ 0x140219CAC (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219E60 (SepVerifyDesktopAppxPackageName.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14021A130 (SepCheckAndCopySelfRelativeSD.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AC1C (SepValidateAndCopyGlobalEntry.c)
 *     SepGetLearningModeObjectInformation @ 0x14021AE84 (SepGetLearningModeObjectInformation.c)
 *     SepRmCapPoolExpand @ 0x14021B580 (SepRmCapPoolExpand.c)
 *     ?BTreeNodeFree@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAXPEAU1@PEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@@Z @ 0x14021C238 (-BTreeNodeFree@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAA.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14021C9FC (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CC9C (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14021D290 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14021DA24 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDeviceWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021DE18 (-StDeviceWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmDeviceIoCompletion@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021E00C (-StDmDeviceIoCompletion@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmLazyRegionsWorker@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z @ 0x14021EA98 (-StDmLazyRegionsWorker@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@KPEAU_ST_WORK_ITEM@1@@Z.c)
 *     ?StDmRegionRemove@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z @ 0x14021F220 (-StDmRegionRemove@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAK@Z.c)
 *     ?StStoreWorkItemCleanup@?$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z @ 0x14021FD28 (-StStoreWorkItemCleanup@-$ST_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM@1@@Z.c)
 *     SmHpBufferCleanup @ 0x14021FD64 (SmHpBufferCleanup.c)
 *     SmKmStoreTerminateWorker @ 0x140220D48 (SmKmStoreTerminateWorker.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140221C48 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140221D44 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalPageError @ 0x140222168 (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x140222A30 (VfAllocateDomainCommonBuffer.c)
 *     VmpRemoveMemoryRange @ 0x1402245A0 (VmpRemoveMemoryRange.c)
 *     WdipAccessCheck @ 0x1402246E0 (WdipAccessCheck.c)
 *     EtwpCrimsonStackWalkApc @ 0x140224C7C (EtwpCrimsonStackWalkApc.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140227F14 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwTiLogQueueApcThread @ 0x140228910 (EtwTiLogQueueApcThread.c)
 *     EtwpApplyEventIdPayloadFilter @ 0x140229868 (EtwpApplyEventIdPayloadFilter.c)
 *     EtwpApplyEventNameFilter @ 0x1402299E4 (EtwpApplyEventNameFilter.c)
 *     EtwpCCSwapDeleteProcessor @ 0x14022A038 (EtwpCCSwapDeleteProcessor.c)
 *     NtDrawText @ 0x14022C734 (NtDrawText.c)
 *     ExDeleteWakeTimerInfo @ 0x14022E174 (ExDeleteWakeTimerInfo.c)
 *     ExGetWakeTimerList @ 0x14022E1EC (ExGetWakeTimerList.c)
 *     ExShareAddressSpaceWithDevice @ 0x14022EB68 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14022EFA0 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14022F1BC (ExpPrepareNewSvmDevice.c)
 *     ExpSvmDereferenceDevice @ 0x14022F3F0 (ExpSvmDereferenceDevice.c)
 *     WheapFreeErrorRecord @ 0x140230884 (WheapFreeErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x1402309A4 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140231AD4 (WheapSqmCollectWheaOscTelemetry.c)
 *     ApiSetReleaseSchema @ 0x140231E58 (ApiSetReleaseSchema.c)
 *     sub_140232914 @ 0x140232914 (sub_140232914.c)
 *     sub_140232ED8 @ 0x140232ED8 (sub_140232ED8.c)
 *     sub_140233434 @ 0x140233434 (sub_140233434.c)
 *     AuthzBasepDeleteSecurityAttributeValues @ 0x1402341C0 (AuthzBasepDeleteSecurityAttributeValues.c)
 *     AuthzBasepRollbackSecurityAttributeChanges @ 0x14023436C (AuthzBasepRollbackSecurityAttributeChanges.c)
 *     AuthzBasepCompareFQBNOperands @ 0x140234658 (AuthzBasepCompareFQBNOperands.c)
 *     AuthzBasepCompareUnicodeStringOperands @ 0x140234B30 (AuthzBasepCompareUnicodeStringOperands.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140237DBC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140238284 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140238CF4 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     NtReplacePartitionUnit @ 0x14023E080 (NtReplacePartitionUnit.c)
 *     _SafeReallocBlob @ 0x14023EAC4 (_SafeReallocBlob.c)
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
 *     SmStoreSetProcessVaRanges @ 0x1403E34A8 (SmStoreSetProcessVaRanges.c)
 *     PfpRpCHashDeleteEntries @ 0x1403E4C14 (PfpRpCHashDeleteEntries.c)
 *     PfSnPrefetchScenario @ 0x1403E5094 (PfSnPrefetchScenario.c)
 *     PspQueueApcSpecialApc @ 0x1403E5244 (PspQueueApcSpecialApc.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E524C (PfSnGetPrefetchInstructions.c)
 *     PfpRpCHashAddEntries @ 0x1403E5504 (PfpRpCHashAddEntries.c)
 *     PfTCreateTraceDump @ 0x1403E5A40 (PfTCreateTraceDump.c)
 *     PfProcessCreateNotification @ 0x1403E6410 (PfProcessCreateNotification.c)
 *     PfSnBeginAppLaunch @ 0x1403E64A0 (PfSnBeginAppLaunch.c)
 *     PfCalculateProcessHash @ 0x1403E67F0 (PfCalculateProcessHash.c)
 *     PfSnBeginScenario @ 0x1403E6ED0 (PfSnBeginScenario.c)
 *     PfSnEndTrace @ 0x1403E8F64 (PfSnEndTrace.c)
 *     PfSnCleanupTrace @ 0x1403E91BC (PfSnCleanupTrace.c)
 *     PfSnBuildDumpFromTrace @ 0x1403E92C4 (PfSnBuildDumpFromTrace.c)
 *     PfSnBeginTrace @ 0x1403E9698 (PfSnBeginTrace.c)
 *     NtSetTimerResolution @ 0x1403E9CD4 (NtSetTimerResolution.c)
 *     PfSetSuperfetchInformation @ 0x1403EA8E8 (PfSetSuperfetchInformation.c)
 *     PfpRpControlRequest @ 0x1403EBEEC (PfpRpControlRequest.c)
 *     PfpRpControlRequestCopy @ 0x1403EC014 (PfpRpControlRequestCopy.c)
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     PfpPrefetchRequest @ 0x1403ECD98 (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1403ECF84 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x1403ED8D0 (PfpVolumeOpenAndVerify.c)
 *     PfpPrefetchSharedDeref @ 0x1403EDC40 (PfpPrefetchSharedDeref.c)
 *     PfpPrefetchVolumesCleanup @ 0x1403EDC6C (PfpPrefetchVolumesCleanup.c)
 *     RawCleanupVcb @ 0x1403EE474 (RawCleanupVcb.c)
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PiUEventProcessEventWorker @ 0x1403EF31C (PiUEventProcessEventWorker.c)
 *     PiUEventDequeuePendingEventWorker @ 0x1403EF44C (PiUEventDequeuePendingEventWorker.c)
 *     PiUEventFreeEventEntry @ 0x1403EF4F8 (PiUEventFreeEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1403EF550 (PiUEventProcessBroadcastNotifications.c)
 *     PnpDeviceEventWorker @ 0x1403EF9F0 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x1403EFCC0 (PnpProcessDeferredRegistrations.c)
 *     PnpCompleteDeviceEvent @ 0x1403EFD70 (PnpCompleteDeviceEvent.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1403F0500 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventCacheObjectProperties @ 0x1403F09EC (PiUEventCacheObjectProperties.c)
 *     PnpDereferenceNotify @ 0x1403F0FC8 (PnpDereferenceNotify.c)
 *     PnpProcessAssignResources @ 0x1403F2054 (PnpProcessAssignResources.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1403F2484 (IopBuildGlobalSymbolicLinkString.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     IopDeleteDevice @ 0x1403F2C78 (IopDeleteDevice.c)
 *     IopDestroyDeviceNode @ 0x1403F2CD4 (IopDestroyDeviceNode.c)
 *     PipEnumerateCompleted @ 0x1403F30EC (PipEnumerateCompleted.c)
 *     PopLogDisabledSleepReason @ 0x1403F3C04 (PopLogDisabledSleepReason.c)
 *     PopFilterCapabilities @ 0x1403F3CF4 (PopFilterCapabilities.c)
 *     PopRemoveReasonRecordByReasonCode @ 0x1403F3E6C (PopRemoveReasonRecordByReasonCode.c)
 *     IoGetLegacyVetoList @ 0x1403F3ED0 (IoGetLegacyVetoList.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F489C (PiControlGetSetDeviceStatus.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1403F554C (PnpCallDriverQueryServiceHelper.c)
 *     HvWriteLogFile @ 0x1403F5A70 (HvWriteLogFile.c)
 *     PopUnreferencePowerSetting @ 0x1403F5C54 (PopUnreferencePowerSetting.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1403F5FEC (PopDispatchPowerSettingCallbacks.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403F6164 (CmpQueryFileSecurityDescriptor.c)
 *     ExpWnfLookupPermanentName @ 0x1403F620C (ExpWnfLookupPermanentName.c)
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 *     CmpDoFileWrite @ 0x1403F9028 (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 *     CmpInitHiveFromFile @ 0x1403F9AEC (CmpInitHiveFromFile.c)
 *     NtDeleteValueKey @ 0x1403FA9B8 (NtDeleteValueKey.c)
 *     CmDeleteValueKey @ 0x1403FAE34 (CmDeleteValueKey.c)
 *     CmpAddSecurityCellToCache @ 0x1403FB3A8 (CmpAddSecurityCellToCache.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     CmpLockIXLockIntent @ 0x1403FCCF4 (CmpLockIXLockIntent.c)
 *     CmpSetSecurityDescriptorInfo @ 0x1403FCD98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpTransMgrFreeVolatileData @ 0x1403FD614 (CmpTransMgrFreeVolatileData.c)
 *     CmpRundownUnitOfWork @ 0x1403FD8BC (CmpRundownUnitOfWork.c)
 *     CmpTransSearchAddLightWeightTrans @ 0x1403FDAD8 (CmpTransSearchAddLightWeightTrans.c)
 *     CmpCleanUpSubKeyInfo @ 0x1403FDC28 (CmpCleanUpSubKeyInfo.c)
 *     CmpCreateChild @ 0x1403FE088 (CmpCreateChild.c)
 *     CmpTransSearchAddTrans @ 0x1403FF144 (CmpTransSearchAddTrans.c)
 *     CmDeleteKey @ 0x1403FF378 (CmDeleteKey.c)
 *     CmpAllocatePostBlock @ 0x140401138 (CmpAllocatePostBlock.c)
 *     CmQueryMultipleValueKey @ 0x140402254 (CmQueryMultipleValueKey.c)
 *     CmpCompareNewValueDataAgainstKCBCache @ 0x140402E58 (CmpCompareNewValueDataAgainstKCBCache.c)
 *     NtSetValueKey @ 0x140403098 (NtSetValueKey.c)
 *     CmSetValueKey @ 0x1404037B0 (CmSetValueKey.c)
 *     IopGetLegacyVetoListDrivers @ 0x140405564 (IopGetLegacyVetoListDrivers.c)
 *     ObpFreeObjectNameBuffer @ 0x140405DC0 (ObpFreeObjectNameBuffer.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140406AA0 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x140406CE0 (ObpGetObjectSecurity.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404070A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x140407F0C (EtwpGetGuidSecurityDescriptor.c)
 *     EtwpFreeSecurityDescriptor @ 0x140408098 (EtwpFreeSecurityDescriptor.c)
 *     EtwpSetProviderTraitsCommon @ 0x140409934 (EtwpSetProviderTraitsCommon.c)
 *     AlpcAddHandleTableEntry @ 0x14040BE50 (AlpcAddHandleTableEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14040DA54 (EtwpReleaseProviderTraitsReference.c)
 *     NtTraceControl @ 0x14040DD40 (NtTraceControl.c)
 *     EtwpDeleteRegistrationObject @ 0x14040E9E0 (EtwpDeleteRegistrationObject.c)
 *     NtQuerySecurityAttributesToken @ 0x14040F420 (NtQuerySecurityAttributesToken.c)
 *     SepCaptureUnicodeStringArray @ 0x140411D10 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x140411F10 (SeCaptureUnicodeStringStructures.c)
 *     SepDuplicateToken @ 0x140412BD0 (SepDuplicateToken.c)
 *     NtOpenThreadTokenEx @ 0x140413580 (NtOpenThreadTokenEx.c)
 *     SepSetTokenTrust @ 0x140413EFC (SepSetTokenTrust.c)
 *     SepAdtPrivilegeObjectAuditAlarm @ 0x140414B58 (SepAdtPrivilegeObjectAuditAlarm.c)
 *     SepAdtPrivilegedServiceAuditAlarm @ 0x140414C0C (SepAdtPrivilegedServiceAuditAlarm.c)
 *     FsRtlFreeExtraCreateParameterList @ 0x140414F98 (FsRtlFreeExtraCreateParameterList.c)
 *     FsRtlpCleanupEcps @ 0x140415010 (FsRtlpCleanupEcps.c)
 *     FsRtlFreeExtraCreateParameter @ 0x1404150D0 (FsRtlFreeExtraCreateParameter.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     ObOpenObjectByNameEx @ 0x140419070 (ObOpenObjectByNameEx.c)
 *     ObpCaptureObjectName @ 0x1404199F0 (ObpCaptureObjectName.c)
 *     ObpCreateHandle @ 0x140419C20 (ObpCreateHandle.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14041B220 (PfpCopyUserPfnPrioRequest.c)
 *     PfpPfnPrioRequest @ 0x14041B450 (PfpPfnPrioRequest.c)
 *     ObpFreeObject @ 0x14041B800 (ObpFreeObject.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     RtlpCombineAcls @ 0x14041E240 (RtlpCombineAcls.c)
 *     ObInsertObjectEx @ 0x14041EF00 (ObInsertObjectEx.c)
 *     ObpAssignSecurity @ 0x14041FA10 (ObpAssignSecurity.c)
 *     SeDefaultObjectMethod @ 0x14041FBE0 (SeDefaultObjectMethod.c)
 *     ObLogSecurityDescriptor @ 0x14041FCF0 (ObLogSecurityDescriptor.c)
 *     ObDereferenceSecurityDescriptor @ 0x1404200D0 (ObDereferenceSecurityDescriptor.c)
 *     ObReleaseObjectSecurity @ 0x1404206A8 (ObReleaseObjectSecurity.c)
 *     SeCaptureSecurityDescriptor @ 0x140420EC0 (SeCaptureSecurityDescriptor.c)
 *     ObfDereferenceDeviceMap @ 0x140422458 (ObfDereferenceDeviceMap.c)
 *     NtQueryInformationProcess @ 0x140422590 (NtQueryInformationProcess.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     EtwpEnumerateAddressSpace @ 0x14042AE3C (EtwpEnumerateAddressSpace.c)
 *     MmPrefetchPagesEx @ 0x14042C0DC (MmPrefetchPagesEx.c)
 *     MmPrefetchForCacheManager @ 0x14042C5DC (MmPrefetchForCacheManager.c)
 *     MiReleaseReadListResources @ 0x14042C750 (MiReleaseReadListResources.c)
 *     MiRemoveSharedCommitNode @ 0x14042EA70 (MiRemoveSharedCommitNode.c)
 *     MiCopyToCfgBitMap @ 0x14042F1E0 (MiCopyToCfgBitMap.c)
 *     MiRemoveVadCharges @ 0x14042FB20 (MiRemoveVadCharges.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     CmpCreateKeyControlBlock @ 0x140434610 (CmpCreateKeyControlBlock.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     CmpCleanUpKcbCacheWithLock @ 0x140436D30 (CmpCleanUpKcbCacheWithLock.c)
 *     CmpCleanUpKcbValueCache @ 0x1404372D8 (CmpCleanUpKcbValueCache.c)
 *     CmpFreeKeyControlBlock @ 0x1404375A0 (CmpFreeKeyControlBlock.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 *     NtQueryValueKey @ 0x14043B880 (NtQueryValueKey.c)
 *     CmpCheckRegistry2 @ 0x14043EF70 (CmpCheckRegistry2.c)
 *     CmpVEExecuteOpenLogic @ 0x1404402B0 (CmpVEExecuteOpenLogic.c)
 *     CmpQueryKeyValueData @ 0x140440360 (CmpQueryKeyValueData.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     CmpGetValueData @ 0x140442F60 (CmpGetValueData.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     AlpcpDispatchReplyToWaitingThread @ 0x140447F40 (AlpcpDispatchReplyToWaitingThread.c)
 *     AlpcMessageDestroyProcedure @ 0x140448980 (AlpcMessageDestroyProcedure.c)
 *     AlpcpProcessSynchronousRequest @ 0x140448B60 (AlpcpProcessSynchronousRequest.c)
 *     AlpcpReceiveMessage @ 0x1404494D0 (AlpcpReceiveMessage.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14044C5B0 (AlpcpCaptureMessageDataSafe.c)
 *     SeReleaseSecurityDescriptor @ 0x14044DB84 (SeReleaseSecurityDescriptor.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     PspDeleteCreateProcessContext @ 0x140458B9C (PspDeleteCreateProcessContext.c)
 *     IopCreateFile @ 0x14045B980 (IopCreateFile.c)
 *     EtwTraceProcess @ 0x14045D50C (EtwTraceProcess.c)
 *     EtwpQueryProcessCommandLine @ 0x14045DC34 (EtwpQueryProcessCommandLine.c)
 *     PspRundownSingleProcess @ 0x14045E0C0 (PspRundownSingleProcess.c)
 *     ExpFreeHandleTable @ 0x14045F118 (ExpFreeHandleTable.c)
 *     ExpFreeTablePagedPool @ 0x14045F21C (ExpFreeTablePagedPool.c)
 *     ObCheckRefTraceProcess @ 0x14045F818 (ObCheckRefTraceProcess.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140460358 (SeCaptureLuidAndAttributesArray.c)
 *     SeReleaseLuidAndAttributesArray @ 0x140460434 (SeReleaseLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x140460450 (SepAdtTokenRightAdjusted.c)
 *     MmDeleteProcessAddressSpace @ 0x140460678 (MmDeleteProcessAddressSpace.c)
 *     PspProcessDelete @ 0x140460828 (PspProcessDelete.c)
 *     EtwExitProcess @ 0x140461084 (EtwExitProcess.c)
 *     ExpWnfSubscribeWnfStateChange @ 0x140461950 (ExpWnfSubscribeWnfStateChange.c)
 *     NtUpdateWnfStateData @ 0x140461CC4 (NtUpdateWnfStateData.c)
 *     NtQueryWnfStateData @ 0x140462090 (NtQueryWnfStateData.c)
 *     ExpWnfCreateNameInstance @ 0x140462594 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfWriteStateData @ 0x140463388 (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404636E4 (ExpWnfSubscribeNameInstance.c)
 *     CmCreateKey @ 0x140464100 (CmCreateKey.c)
 *     RegistryCallback @ 0x140464700 (RegistryCallback.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtQueryInformationJobObject @ 0x140466FD0 (NtQueryInformationJobObject.c)
 *     PspQueryRateControlHistory @ 0x14046917C (PspQueryRateControlHistory.c)
 *     FsRtlpAllocateOplock @ 0x14046A718 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14046A818 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x14046B684 (FsRtlPTeardownPerFileObjectContexts.c)
 *     NtQueryEaFile @ 0x14046B6CC (NtQueryEaFile.c)
 *     MiResolveImageReferences @ 0x14046C67C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14046CB34 (MiSnapThunk.c)
 *     MiAllocateVad @ 0x14046D108 (MiAllocateVad.c)
 *     SepAddLuidToIndexEntry @ 0x14046E2DC (SepAddLuidToIndexEntry.c)
 *     NtCreateWorkerFactory @ 0x140470E94 (NtCreateWorkerFactory.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140471860 (AlpcpAllocateCompletionPacketLookaside.c)
 *     RtlQueryImageFileKeyOption @ 0x1404732C4 (RtlQueryImageFileKeyOption.c)
 *     IoCreateDevice @ 0x1404734C0 (IoCreateDevice.c)
 *     WmipCreateGuidObject @ 0x140473F48 (WmipCreateGuidObject.c)
 *     WmipGetGuidSecurityDescriptor @ 0x140474120 (WmipGetGuidSecurityDescriptor.c)
 *     WmipAddProviderIdToPIList @ 0x1404748C0 (WmipAddProviderIdToPIList.c)
 *     PnpFreeInterruptInformation @ 0x1404750F0 (PnpFreeInterruptInformation.c)
 *     SepValidateReferencedLowBoxHandles @ 0x14047513C (SepValidateReferencedLowBoxHandles.c)
 *     SepQueryNameString @ 0x1404754CC (SepQueryNameString.c)
 *     SepGetLowBoxHandlesEntry @ 0x140475930 (SepGetLowBoxHandlesEntry.c)
 *     ObpParseSymbolicLinkEx @ 0x140476170 (ObpParseSymbolicLinkEx.c)
 *     SepSetTokenPackage @ 0x1404769B4 (SepSetTokenPackage.c)
 *     SepGetLowBoxNumberEntry @ 0x140476BFC (SepGetLowBoxNumberEntry.c)
 *     NtCreatePrivateNamespace @ 0x1404776D4 (NtCreatePrivateNamespace.c)
 *     ObpVerifyCreatorAccessCheck @ 0x140477960 (ObpVerifyCreatorAccessCheck.c)
 *     NtOpenPrivateNamespace @ 0x1404784D8 (NtOpenPrivateNamespace.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140478794 (ObpCaptureBoundaryDescriptor.c)
 *     SepSetTokenCapabilities @ 0x140478A4C (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x140478B94 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478C40 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1404791AC (SeCaptureSid.c)
 *     SeReleaseSid @ 0x140479554 (SeReleaseSid.c)
 *     SepCreateClaimAttributes @ 0x140479608 (SepCreateClaimAttributes.c)
 *     SeReleaseAcl @ 0x1404797B8 (SeReleaseAcl.c)
 *     NtSetInformationToken @ 0x1404797D0 (NtSetInformationToken.c)
 *     SeCaptureAcl @ 0x14047ABEC (SeCaptureAcl.c)
 *     SeTokenDefaultDaclChangedAuditAlarm @ 0x14047ADB4 (SeTokenDefaultDaclChangedAuditAlarm.c)
 *     SepExpandDynamic @ 0x14047AF14 (SepExpandDynamic.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     NtCreateLowBoxToken @ 0x14047BBD8 (NtCreateLowBoxToken.c)
 *     SepFreeCapturedTokenSecurityAttributesInformation @ 0x14047C21C (SepFreeCapturedTokenSecurityAttributesInformation.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14047C310 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14047C454 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x14047C8BC (SepCaptureInt64Array.c)
 *     HvpMapHiveImageFromFile @ 0x14047F0D4 (HvpMapHiveImageFromFile.c)
 *     CmCheckRegistry @ 0x140480374 (CmCheckRegistry.c)
 *     HvStoreModifiedData @ 0x140480EEC (HvStoreModifiedData.c)
 *     MiConstructLoaderEntry @ 0x140482408 (MiConstructLoaderEntry.c)
 *     MmLoadSystemImage @ 0x140482B2C (MmLoadSystemImage.c)
 *     MiUnloadSystemImage @ 0x140483468 (MiUnloadSystemImage.c)
 *     HvWriteHivePrimaryFile @ 0x140483AA4 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140484068 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     MiDriverLoadSucceeded @ 0x140484174 (MiDriverLoadSucceeded.c)
 *     AslFree @ 0x14048538C (AslFree.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404867A4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PnpConcatPWSTR @ 0x140487108 (PnpConcatPWSTR.c)
 *     PipCheckForDenyExecute @ 0x140487470 (PipCheckForDenyExecute.c)
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PiProcessNewDeviceNode @ 0x140487BC4 (PiProcessNewDeviceNode.c)
 *     PnpQueryID @ 0x140488E8C (PnpQueryID.c)
 *     PnpCheckDeviceIdsChanged @ 0x140489604 (PnpCheckDeviceIdsChanged.c)
 *     PnpQueryDeviceText @ 0x140489BE0 (PnpQueryDeviceText.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14048A41C (PiUEventFreeClientRegistrationContext.c)
 *     ConstraintEval @ 0x14048A548 (ConstraintEval.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048B654 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqQuerySerializeActionQueue @ 0x14048B994 (PiDqQuerySerializeActionQueue.c)
 *     PiDqQueryActionQueueEntryFree @ 0x14048BD04 (PiDqQueryActionQueueEntryFree.c)
 *     PiDqActionDataFree @ 0x14048BEE8 (PiDqActionDataFree.c)
 *     PiDqQueryRelease @ 0x14048C588 (PiDqQueryRelease.c)
 *     PiDqTraceQueryCreate @ 0x14048CA30 (PiDqTraceQueryCreate.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048CE88 (PiUEventInitClientRegistrationContext.c)
 *     EtwpAllocGuidEntry @ 0x14048D770 (EtwpAllocGuidEntry.c)
 *     EtwpEnableTrace @ 0x14048D828 (EtwpEnableTrace.c)
 *     EtwpCaptureString @ 0x14048D980 (EtwpCaptureString.c)
 *     EtwpReleaseQueueEntry @ 0x14048E35C (EtwpReleaseQueueEntry.c)
 *     EtwpUnreferenceDataBlock @ 0x14048E3BC (EtwpUnreferenceDataBlock.c)
 *     EtwpFreeFilterInfo @ 0x14048ECF4 (EtwpFreeFilterInfo.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14049030C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140490628 (EtwpRealtimeCreateLogfile.c)
 *     EtwpAddDataSource @ 0x140490E70 (EtwpAddDataSource.c)
 *     EtwpUpdateFilterData @ 0x140491C98 (EtwpUpdateFilterData.c)
 *     EtwpRegisterProvider @ 0x140492024 (EtwpRegisterProvider.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140492464 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x1404931B0 (EtwpInitLoggerContext.c)
 *     EtwpFreeTraceBufferPool @ 0x1404936AC (EtwpFreeTraceBufferPool.c)
 *     EtwpFreeLoggerContext @ 0x140493844 (EtwpFreeLoggerContext.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
 *     EtwpDelayCreate @ 0x140494AAC (EtwpDelayCreate.c)
 *     EtwpCreateNtFileName @ 0x140494CBC (EtwpCreateNtFileName.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x140497230 (ExpSetKernelDataProtection.c)
 *     EtwpProcessThreadImageRundown @ 0x1404987E4 (EtwpProcessThreadImageRundown.c)
 *     EtwpTraceProcessRundown @ 0x140498CB0 (EtwpTraceProcessRundown.c)
 *     ExLockUserBuffer @ 0x140499420 (ExLockUserBuffer.c)
 *     CmpFlushNotify @ 0x14049A0FC (CmpFlushNotify.c)
 *     CmpFreePostBlock @ 0x14049A988 (CmpFreePostBlock.c)
 *     CmpRecordUnloadEventForHive @ 0x14049B43C (CmpRecordUnloadEventForHive.c)
 *     CmpQueryNameString @ 0x14049B4E4 (CmpQueryNameString.c)
 *     CmLoadDifferencingKey @ 0x14049B648 (CmLoadDifferencingKey.c)
 *     CmpNameFromAttributes @ 0x14049C2AC (CmpNameFromAttributes.c)
 *     CmLoadKey @ 0x14049C9B4 (CmLoadKey.c)
 *     PiUpdateDriverDBCache @ 0x14049D278 (PiUpdateDriverDBCache.c)
 *     PnpPrepareDriverLoading @ 0x14049D6CC (PnpPrepareDriverLoading.c)
 *     PpCheckInDriverDatabase @ 0x14049D7A4 (PpCheckInDriverDatabase.c)
 *     IopBuildFullDriverPath @ 0x14049DA9C (IopBuildFullDriverPath.c)
 *     IopGetRootDevices @ 0x14049DC40 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
 *     IopGetDriverNameFromKeyNode @ 0x14049F27C (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14049F430 (IopGetRegistryValue.c)
 *     CmpWorkerEngineWorker @ 0x14049F5BC (CmpWorkerEngineWorker.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14049FC28 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpDestroySecurityCache @ 0x14049FDD4 (CmpDestroySecurityCache.c)
 *     CmAddLogForAction @ 0x1404A1450 (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x1404A1B88 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1404A1CA4 (CmpDoTransWriteLogRecord.c)
 *     HvFreeDirtyData @ 0x1404A1F50 (HvFreeDirtyData.c)
 *     CmpDeleteKcbCache @ 0x1404A1FA0 (CmpDeleteKcbCache.c)
 *     PspJobIoRateControlDisable @ 0x1404A204C (PspJobIoRateControlDisable.c)
 *     SepTokenDeleteMethod @ 0x1404A25E0 (SepTokenDeleteMethod.c)
 *     SepDereferenceLowBoxNumberEntry @ 0x1404A2798 (SepDereferenceLowBoxNumberEntry.c)
 *     SepDereferenceLowBoxHandlesEntry @ 0x1404A2998 (SepDereferenceLowBoxHandlesEntry.c)
 *     EtwTraceAppStateChange @ 0x1404A3048 (EtwTraceAppStateChange.c)
 *     AlpcpFreeMessageFunction @ 0x1404A3718 (AlpcpFreeMessageFunction.c)
 *     PspThreadDelete @ 0x1404A37B8 (PspThreadDelete.c)
 *     RtlpFreeAtom @ 0x1404A3DD8 (RtlpFreeAtom.c)
 *     NtQueryLicenseValue @ 0x1404A3E00 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x1404A40C0 (ExQueryLicenseValueInternal.c)
 *     RtlpAllocateAtom @ 0x1404A4B10 (RtlpAllocateAtom.c)
 *     ObSetSecurityDescriptorInfo @ 0x1404A5248 (ObSetSecurityDescriptorInfo.c)
 *     RtlpSetSecurityObject @ 0x1404A56A0 (RtlpSetSecurityObject.c)
 *     PspDereferenceQuotaBlock @ 0x1404A6018 (PspDereferenceQuotaBlock.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     NtQueryDirectoryObject @ 0x1404B0580 (NtQueryDirectoryObject.c)
 *     PspCaptureUserProcessParameters @ 0x1404B1504 (PspCaptureUserProcessParameters.c)
 *     EtwQueryProcessTelemetryInfo @ 0x1404B1BB0 (EtwQueryProcessTelemetryInfo.c)
 *     AlpcpCaptureMessageData @ 0x1404B5DD8 (AlpcpCaptureMessageData.c)
 *     AlpcpAllocateMessageFunction @ 0x1404B62CC (AlpcpAllocateMessageFunction.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404B646C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B66DC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x1404B7D38 (SepProbeAndCaptureString_U.c)
 *     MiSegmentDelete @ 0x1404B81E4 (MiSegmentDelete.c)
 *     MiCreatePagingFileMap @ 0x1404B8370 (MiCreatePagingFileMap.c)
 *     MiAllocateNewTebRegion @ 0x1404BA720 (MiAllocateNewTebRegion.c)
 *     MiCreateVadEventBitmap @ 0x1404BA9CC (MiCreateVadEventBitmap.c)
 *     ObpInsertHandleCount @ 0x1404BB094 (ObpInsertHandleCount.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404BDB18 (NtReadFileScatter.c)
 *     IoWMISystemControl @ 0x1404BE10C (IoWMISystemControl.c)
 *     ExpGetSystemFirmwareTableInformation @ 0x1404BE634 (ExpGetSystemFirmwareTableInformation.c)
 *     WmipGetRegistryHideMachine @ 0x1404BE8C4 (WmipGetRegistryHideMachine.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404BEA58 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyCleanup @ 0x1404BEDB8 (FsRtlNotifyCleanup.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404BEE44 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyCleanupOneEntry @ 0x1404BF188 (FsRtlNotifyCleanupOneEntry.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404BF290 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404BFD2C (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyCompleteIrp @ 0x1404C0234 (FsRtlNotifyCompleteIrp.c)
 *     WmipFreeTraceDeviceList @ 0x1404C0BE8 (WmipFreeTraceDeviceList.c)
 *     SeAppendPrivileges @ 0x1404C0F9C (SeAppendPrivileges.c)
 *     ExpAllocateHandleTable @ 0x1404C1378 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404C1600 (ExpAllocateTablePagedPoolNoZero.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1404C17A0 (ExAllocateCacheAwareRundownProtection.c)
 *     ExpWnfDeleteProcessContext @ 0x1404C1A24 (ExpWnfDeleteProcessContext.c)
 *     ExpWnfDeleteSubscription @ 0x1404C1E2C (ExpWnfDeleteSubscription.c)
 *     ExpWnfFreeScopeInstance @ 0x1404C21A0 (ExpWnfFreeScopeInstance.c)
 *     NtDeleteWnfStateName @ 0x1404C2274 (NtDeleteWnfStateName.c)
 *     ExpWnfDeleteNameInstance @ 0x1404C263C (ExpWnfDeleteNameInstance.c)
 *     ExpWnfDeleteStateData @ 0x1404C2984 (ExpWnfDeleteStateData.c)
 *     PipRemoveDevicesInRelationList @ 0x1404C3254 (PipRemoveDevicesInRelationList.c)
 *     PnpDisableDeviceInterfaces @ 0x1404C3314 (PnpDisableDeviceInterfaces.c)
 *     PiSwDeviceInterfacesUpdateState @ 0x1404C35D0 (PiSwDeviceInterfacesUpdateState.c)
 *     PiSwProcessRemove @ 0x1404C36B0 (PiSwProcessRemove.c)
 *     PiSwPdoAssociationFree @ 0x1404C39D0 (PiSwPdoAssociationFree.c)
 *     PiSwBusRelationRemove @ 0x1404C3A38 (PiSwBusRelationRemove.c)
 *     PiSwDeviceDereference @ 0x1404C3AB4 (PiSwDeviceDereference.c)
 *     PiSwInstanceInfoFree @ 0x1404C3AE8 (PiSwInstanceInfoFree.c)
 *     PiSwPnPInfoFree @ 0x1404C3B28 (PiSwPnPInfoFree.c)
 *     PiSwDeviceFree @ 0x1404C3B98 (PiSwDeviceFree.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpProcessRelation @ 0x1404C47D8 (PnpProcessRelation.c)
 *     PnpQueuePendingSurpriseRemoval @ 0x1404C5028 (PnpQueuePendingSurpriseRemoval.c)
 *     IopFreeRelationList @ 0x1404C59AC (IopFreeRelationList.c)
 *     PipFreeDeviceObjectList @ 0x1404C59E0 (PipFreeDeviceObjectList.c)
 *     PoFxAbandonDevice @ 0x1404C61AC (PoFxAbandonDevice.c)
 *     PiSwStopDestroy @ 0x1404C6264 (PiSwStopDestroy.c)
 *     PiSwIrpInterfaceRegister @ 0x1404C648C (PiSwIrpInterfaceRegister.c)
 *     PiSwDeviceInterfaceSetState @ 0x1404C67BC (PiSwDeviceInterfaceSetState.c)
 *     PiSwIrpStartCreate @ 0x1404C6934 (PiSwIrpStartCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     PiSwBusRelationAdd @ 0x1404C6F58 (PiSwBusRelationAdd.c)
 *     PnpCopyDevPropertyArray @ 0x1404C70A4 (PnpCopyDevPropertyArray.c)
 *     IopUncacheInterfaceInformation @ 0x1404C7A00 (IopUncacheInterfaceInformation.c)
 *     PiDeviceRegistration @ 0x1404C7D00 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404C7E9C (PpForEachDeviceInstanceDriver.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1404C866C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryAndAllocateBootResources @ 0x1404C881C (PiQueryAndAllocateBootResources.c)
 *     IopQueryDeviceResources @ 0x1404C89E8 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1404C8D70 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiQueryResourceRequirements @ 0x1404C90AC (PiQueryResourceRequirements.c)
 *     NtFlushBuffersFileEx @ 0x1404C9430 (NtFlushBuffersFileEx.c)
 *     IopSynchronousApiServiceTail @ 0x1404C9698 (IopSynchronousApiServiceTail.c)
 *     ExGetPoolTagInfo @ 0x1404C9814 (ExGetPoolTagInfo.c)
 *     NtUnlockFile @ 0x1404C9C58 (NtUnlockFile.c)
 *     PfSnArrayGrow @ 0x1404CA040 (PfSnArrayGrow.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1404CA138 (AlpcpCaptureHandleAttributeInternal.c)
 *     AlpcConnectionDestroyProcedure @ 0x1404CA684 (AlpcConnectionDestroyProcedure.c)
 *     IopTrackLink @ 0x1404CB08C (IopTrackLink.c)
 *     WmipDeleteMethod @ 0x1404CC380 (WmipDeleteMethod.c)
 *     MiReserveDriverPtes @ 0x1404CD0DC (MiReserveDriverPtes.c)
 *     PnpGetDeviceLocationStrings @ 0x1404CD7D0 (PnpGetDeviceLocationStrings.c)
 *     FsRtlTeardownPerFileContexts @ 0x1404CDF9C (FsRtlTeardownPerFileContexts.c)
 *     ObpDeleteDirectoryEntry @ 0x1404CE130 (ObpDeleteDirectoryEntry.c)
 *     ExHandleSPCall2 @ 0x1404CE374 (ExHandleSPCall2.c)
 *     NtGetMUIRegistryInfo @ 0x1404CFDC8 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404D014C (NtMapCMFModule.c)
 *     MUIInitializeResourceLock @ 0x1404D085C (MUIInitializeResourceLock.c)
 *     PoDiagFreeUsermodeStack @ 0x1404D08E8 (PoDiagFreeUsermodeStack.c)
 *     EtwpProviderArrivalCallback @ 0x1404D0D5C (EtwpProviderArrivalCallback.c)
 *     PspFreeRateControl @ 0x1404D1D14 (PspFreeRateControl.c)
 *     PspAllocateRateControl @ 0x1404D1D58 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404D1E00 (PspAddSchedulingGroupToJobChain.c)
 *     PspInitializeFullProcessImageName @ 0x1404D2094 (PspInitializeFullProcessImageName.c)
 *     RtlpProcessIFEOKeyFilter @ 0x1404D32CC (RtlpProcessIFEOKeyFilter.c)
 *     SeTokenIsElevated @ 0x1404D33E8 (SeTokenIsElevated.c)
 *     NtCloseObjectAuditAlarm @ 0x1404D3454 (NtCloseObjectAuditAlarm.c)
 *     EtwpReceiveReplyDataBlock @ 0x1404D38F0 (EtwpReceiveReplyDataBlock.c)
 *     NtRemoveIoCompletionEx @ 0x1404D3D44 (NtRemoveIoCompletionEx.c)
 *     PiQueryRemovableDeviceOverride @ 0x1404D4418 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x1404D46C4 (PipFindDeviceOverrideEntry.c)
 *     PiNormalizeDeviceText @ 0x1404D48B4 (PiNormalizeDeviceText.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404D5918 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     CmpMarkIndexDirty @ 0x1404D6634 (CmpMarkIndexDirty.c)
 *     SddlpFree @ 0x1404D6ABC (SddlpFree.c)
 *     SeDeassignSecurity @ 0x1404D88A4 (SeDeassignSecurity.c)
 *     PfSnGetCompletedTrace @ 0x1404D8B44 (PfSnGetCompletedTrace.c)
 *     CmpVEExecuteCreateLogic @ 0x1404D91F4 (CmpVEExecuteCreateLogic.c)
 *     CmpRemoveFromSecurityCache @ 0x1404D97E8 (CmpRemoveFromSecurityCache.c)
 *     CmpCleanupTransactionState @ 0x1404DA1C8 (CmpCleanupTransactionState.c)
 *     CmpLogCheckpoint @ 0x1404DA2D4 (CmpLogCheckpoint.c)
 *     CmpStartRMLog @ 0x1404DAAE0 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x1404DAE78 (CmpStartCLFSLog.c)
 *     ExpHwidProcessInterface @ 0x1404DB0E4 (ExpHwidProcessInterface.c)
 *     RtlAcquirePrivilege @ 0x1404DBF50 (RtlAcquirePrivilege.c)
 *     NtQueryWnfStateNameInformation @ 0x1404DCB58 (NtQueryWnfStateNameInformation.c)
 *     PiCMGetDeviceIdList @ 0x1404DD06C (PiCMGetDeviceIdList.c)
 *     NtQueryMultipleValueKey @ 0x1404DD5F8 (NtQueryMultipleValueKey.c)
 *     AlpcpInitializeCompletionList @ 0x1404DDB10 (AlpcpInitializeCompletionList.c)
 *     PiDmGetReferencedObjectFromProperty @ 0x1404DE6B0 (PiDmGetReferencedObjectFromProperty.c)
 *     NtSystemDebugControl @ 0x1404DE844 (NtSystemDebugControl.c)
 *     _RegRtlEnumValue @ 0x1404DF0EC (_RegRtlEnumValue.c)
 *     EtwpFreeGuidEntry @ 0x1404DF218 (EtwpFreeGuidEntry.c)
 *     PerfDiagpProxyWorker @ 0x1404DFB10 (PerfDiagpProxyWorker.c)
 *     EtwStartAutoLogger @ 0x1404E0034 (EtwStartAutoLogger.c)
 *     PiDqSerializationAlloc @ 0x1404E0AAC (PiDqSerializationAlloc.c)
 *     WmipSecurityMethod @ 0x1404E1DBC (WmipSecurityMethod.c)
 *     ObAssignObjectSecurityDescriptor @ 0x1404E1E60 (ObAssignObjectSecurityDescriptor.c)
 *     PipChangeDeviceObjectFromRegistryProperties @ 0x1404E1F74 (PipChangeDeviceObjectFromRegistryProperties.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404E23B8 (PipGetRegistrySecurityWithFallback.c)
 *     PopFxFindDeviceAndAllocateUniqueId @ 0x1404E2614 (PopFxFindDeviceAndAllocateUniqueId.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404E2820 (PiPnpRtlGetFilteredDeviceList.c)
 *     HvFreeUnreconciledData @ 0x1404E2FD8 (HvFreeUnreconciledData.c)
 *     ExpWnfCheckCrossScopeAccess @ 0x1404E3BCC (ExpWnfCheckCrossScopeAccess.c)
 *     SepDeReferenceLogonSession @ 0x1404E50DC (SepDeReferenceLogonSession.c)
 *     SepInformLsaOfDeletedLogon @ 0x1404E52A4 (SepInformLsaOfDeletedLogon.c)
 *     RtlReleasePrivilege @ 0x1404E5400 (RtlReleasePrivilege.c)
 *     SepUpdateLogonSessionTrack @ 0x1404E61E4 (SepUpdateLogonSessionTrack.c)
 *     NtLoadDriver @ 0x1404E648C (NtLoadDriver.c)
 *     IopCallDriverReinitializationRoutines @ 0x1404E66CC (IopCallDriverReinitializationRoutines.c)
 *     IopSetDeviceSecurityDescriptor @ 0x1404E67CC (IopSetDeviceSecurityDescriptor.c)
 *     SepCreateLogonSessionTrack @ 0x1404E69EC (SepCreateLogonSessionTrack.c)
 *     IopDoDeferredSetInterfaceState @ 0x1404E7110 (IopDoDeferredSetInterfaceState.c)
 *     PnpGetDeviceInstanceCsConfigFlags @ 0x1404E7890 (PnpGetDeviceInstanceCsConfigFlags.c)
 *     IopPnPDispatch @ 0x1404E7998 (IopPnPDispatch.c)
 *     PnpQueryBusInformation @ 0x1404E8ED8 (PnpQueryBusInformation.c)
 *     PnpBusTypeGuidGetIndex @ 0x1404E8F9C (PnpBusTypeGuidGetIndex.c)
 *     PiDmCacheDataFree @ 0x1404E9A74 (PiDmCacheDataFree.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404E9B2C (PiBuildDeviceNodeInstancePath.c)
 *     PnpFreeDeviceInstancePath @ 0x1404E9C44 (PnpFreeDeviceInstancePath.c)
 *     ObpSetDeviceMap @ 0x1404E9E58 (ObpSetDeviceMap.c)
 *     CmpCheckSecurityCellAccess @ 0x1404EA7B4 (CmpCheckSecurityCellAccess.c)
 *     CmSnapshotRMTxArray @ 0x1404EB0B4 (CmSnapshotRMTxArray.c)
 *     CmpAdjustSecurityCacheSize @ 0x1404EB17C (CmpAdjustSecurityCacheSize.c)
 *     CmpDelayFreeRMWorker @ 0x1404EB204 (CmpDelayFreeRMWorker.c)
 *     MiCompressImportList @ 0x1404EBD24 (MiCompressImportList.c)
 *     CmRmFinalizeRecovery @ 0x1404EC2F0 (CmRmFinalizeRecovery.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404ECE6C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PiDeferSetInterfaceState @ 0x1404ECF18 (PiDeferSetInterfaceState.c)
 *     PiDqGrowPropertyArray @ 0x1404ED7B0 (PiDqGrowPropertyArray.c)
 *     ExpCheckPortableOperatingSystem @ 0x1404ED840 (ExpCheckPortableOperatingSystem.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x1404EDC5C (ExpHwidEnsurePropertyBufferLength.c)
 *     IopQueryLegacyBusInformation @ 0x1404EDEC4 (IopQueryLegacyBusInformation.c)
 *     NtNotifyChangeSession @ 0x1404EE3E8 (NtNotifyChangeSession.c)
 *     ObpDeleteSymbolicLink @ 0x1404EE888 (ObpDeleteSymbolicLink.c)
 *     ExpGenuinePolicyPostProcess @ 0x1404EEC60 (ExpGenuinePolicyPostProcess.c)
 *     SepImageVerificationCallbackWorker @ 0x1404EEFE8 (SepImageVerificationCallbackWorker.c)
 *     ExpWnfRegisterPermanentName @ 0x1404EF04C (ExpWnfRegisterPermanentName.c)
 *     MiCreateRotateView @ 0x1404EF458 (MiCreateRotateView.c)
 *     sub_1404EF538 @ 0x1404EF538 (sub_1404EF538.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1404EF5F4 (ExpHwidBiosIfGetFirmwareTable.c)
 *     PopPowerRequestFree @ 0x1404EF7DC (PopPowerRequestFree.c)
 *     EtwpCreateUmReplyObject @ 0x1404EF810 (EtwpCreateUmReplyObject.c)
 *     ExpWnfPopulateStateData @ 0x1404EF9E0 (ExpWnfPopulateStateData.c)
 *     AlpcpFreeCompletionList @ 0x1404F0034 (AlpcpFreeCompletionList.c)
 *     PfSnOperationProcess @ 0x1404F014C (PfSnOperationProcess.c)
 *     PiDqFreeGenericTableEntry @ 0x1404F0474 (PiDqFreeGenericTableEntry.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404F0600 (PoDiagCaptureUsermodeStack.c)
 *     EtwpGenerateFileName @ 0x1404F08C8 (EtwpGenerateFileName.c)
 *     sub_1404F0A48 @ 0x1404F0A48 (sub_1404F0A48.c)
 *     CmpDeleteLightWeightTransaction @ 0x1404F116C (CmpDeleteLightWeightTransaction.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1404F1418 (PfSnTracingStateExWorkerRoutine.c)
 *     PiSwFreeGenericTableEntry @ 0x1404F1534 (PiSwFreeGenericTableEntry.c)
 *     CMFFreeFn @ 0x1404F1544 (CMFFreeFn.c)
 *     MiFreeWorkingSetSwapContext @ 0x1404F16CC (MiFreeWorkingSetSwapContext.c)
 *     MiInSwapStoreContextDereference @ 0x1404F1934 (MiInSwapStoreContextDereference.c)
 *     PspEstablishJobHierarchy @ 0x1404F2FFC (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x1404F33FC (MmLinkJobProcess.c)
 *     NtSetInformationVirtualMemory @ 0x1404F3D10 (NtSetInformationVirtualMemory.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404F4AF8 (PfSnAsyncPrefetchWorker.c)
 *     PfSnAsyncContextCleanup @ 0x1404F4E40 (PfSnAsyncContextCleanup.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404F4E8C (PfSnOpenVolumesForPrefetch.c)
 *     sub_1404F587C @ 0x1404F587C (sub_1404F587C.c)
 *     ExpHwidProcessDevice @ 0x1404F59EC (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404F5B1C (ExpHwidAppendDeviceInfoBlock.c)
 *     PiCMGetDeviceInterfaceList @ 0x1404F5F30 (PiCMGetDeviceInterfaceList.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404F7BE8 (_CmOpenCommonClassRegKeyWorker.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1404F8438 (RtlpAllocDeallocQueryBuffer.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404F8C08 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiCMGetObjectList @ 0x1404F903C (PiCMGetObjectList.c)
 *     IoGetDeviceProperty @ 0x1404F936C (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1404F9894 (PiGetDeviceRegProperty.c)
 *     PiPnpRtlApplyMandatoryDeviceInterfaceFilters @ 0x1404F9D54 (PiPnpRtlApplyMandatoryDeviceInterfaceFilters.c)
 *     PiPnpRtlIsDeviceEnumerableForUser @ 0x1404FA15C (PiPnpRtlIsDeviceEnumerableForUser.c)
 *     DrvDbLoadDatabaseNode @ 0x1404FA464 (DrvDbLoadDatabaseNode.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404FA878 (_RegRtlCreateTreeTransacted.c)
 *     _PnpOpenPropertiesKey @ 0x1404FAC30 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404FB104 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404FB708 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PnpGetObjectProperty @ 0x1404FBC64 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1404FC99C (PiCMGetObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404FD480 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x1404FDA60 (_RegRtlQueryValue.c)
 *     _PnpCtxGetCachedContextBaseKey @ 0x1404FDCC4 (_PnpCtxGetCachedContextBaseKey.c)
 *     PiPnpRtlObjectActionCallback @ 0x1404FE930 (PiPnpRtlObjectActionCallback.c)
 *     PiDmObjectRelease @ 0x1404FEFC0 (PiDmObjectRelease.c)
 *     _PnpRegQueryValueIndirect @ 0x1404FFED4 (_PnpRegQueryValueIndirect.c)
 *     PiControlMakeUserModeCallersCopy @ 0x1405003D8 (PiControlMakeUserModeCallersCopy.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140500AB8 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140500CEC (PiPnpRtlInterfaceFilterCallback.c)
 *     PnpUnicodeStringToWstrFree @ 0x140500F80 (PnpUnicodeStringToWstrFree.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiDqPnPGetObjectProperty @ 0x140501BE4 (PiDqPnPGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x140501D70 (PnpAllocatePWSTR.c)
 *     PiPnpRtlObjectEventRelease @ 0x140501E38 (PiPnpRtlObjectEventRelease.c)
 *     PiPnpRtlOperationFreeGenericTableEntry @ 0x140501F40 (PiPnpRtlOperationFreeGenericTableEntry.c)
 *     PnpFreeDevPropertyArray @ 0x140502730 (PnpFreeDevPropertyArray.c)
 *     PnpFreeDevProperty @ 0x140502788 (PnpFreeDevProperty.c)
 *     PiCMGetRegistryProperty @ 0x140502DC0 (PiCMGetRegistryProperty.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140503538 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140503A30 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 *     WmipQueryAllData @ 0x140504C98 (WmipQueryAllData.c)
 *     PiDmObjectProcessPropertyChange @ 0x14050539C (PiDmObjectProcessPropertyChange.c)
 *     IoQueryFileDosDeviceName @ 0x1405080AC (IoQueryFileDosDeviceName.c)
 *     IoVolumeDeviceToDosName @ 0x14050814C (IoVolumeDeviceToDosName.c)
 *     PfpReadSupportCleanup @ 0x14050921C (PfpReadSupportCleanup.c)
 *     PfpFileBuildReadSupport @ 0x140509310 (PfpFileBuildReadSupport.c)
 *     IopQueryNameInternal @ 0x140509B10 (IopQueryNameInternal.c)
 *     PfSnCleanupPrefetchHeader @ 0x14050A4E0 (PfSnCleanupPrefetchHeader.c)
 *     PfSnSectionInfoCleanupWorkItem @ 0x14050A6B0 (PfSnSectionInfoCleanupWorkItem.c)
 *     PfSnPopulateReadList @ 0x14050A770 (PfSnPopulateReadList.c)
 *     KeRundownApcQueues @ 0x14050BA4C (KeRundownApcQueues.c)
 *     MmCopyVirtualMemory @ 0x14050BE60 (MmCopyVirtualMemory.c)
 *     CcUnpinData @ 0x14050C700 (CcUnpinData.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     AlpcpDestroyBlob @ 0x14050FCC4 (AlpcpDestroyBlob.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     PfpRpFileKeyUpdate @ 0x140512DD0 (PfpRpFileKeyUpdate.c)
 *     CmpFree @ 0x140514550 (CmpFree.c)
 *     CmpDelayedDerefKeys @ 0x140514B2C (CmpDelayedDerefKeys.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     IopFreeMiniCompletionPacket @ 0x14051BA70 (IopFreeMiniCompletionPacket.c)
 *     PopPowerInformationInternal @ 0x14051D314 (PopPowerInformationInternal.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x14051D564 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     sub_14051D758 @ 0x14051D758 (sub_14051D758.c)
 *     PiPnpFreePdoDeviceList @ 0x14051D8AC (PiPnpFreePdoDeviceList.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x14051DA10 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14051DAC0 (ExpHwidSysVolIfGetDiskInfo.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopDiagTracePowerRequestCreate @ 0x14052000C (PopDiagTracePowerRequestCreate.c)
 *     NtSetSecurityObject @ 0x140520B3C (NtSetSecurityObject.c)
 *     SeSecurityDescriptorChangedAuditAlarm @ 0x140520EA8 (SeSecurityDescriptorChangedAuditAlarm.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140521130 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     MiExtendSection @ 0x140521CB4 (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x140522664 (MiCreateDataFileMap.c)
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 *     MiBuildImageControlArea @ 0x140523584 (MiBuildImageControlArea.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MiCompressRelocations @ 0x140525290 (MiCompressRelocations.c)
 *     MiParseImageCfgBits @ 0x1405256E0 (MiParseImageCfgBits.c)
 *     MiValidateImagePfn @ 0x14052685C (MiValidateImagePfn.c)
 *     MiValidateSectionCreate @ 0x140526D8C (MiValidateSectionCreate.c)
 *     SeValidateImageHeader @ 0x140527544 (SeValidateImageHeader.c)
 *     MiPrefetchControlArea @ 0x140527654 (MiPrefetchControlArea.c)
 *     MiBuildNewCloneDescriptor @ 0x140527744 (MiBuildNewCloneDescriptor.c)
 *     SeReleaseImageValidationContext @ 0x1405278E0 (SeReleaseImageValidationContext.c)
 *     MiCloneProcessAddressSpace @ 0x1405278F8 (MiCloneProcessAddressSpace.c)
 *     MiAllocateChildVads @ 0x140527B80 (MiAllocateChildVads.c)
 *     PiUEventBroadcastEventWorker @ 0x140528030 (PiUEventBroadcastEventWorker.c)
 *     MmRotatePhysicalView @ 0x1405281DC (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528600 (MiMapLockedPagesInUserSpace.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1405289A0 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x140528B50 (IoGetDeviceInterfaceAlias.c)
 *     PiUEventHandleVetoEvent @ 0x14052916C (PiUEventHandleVetoEvent.c)
 *     NtSetVolumeInformationFile @ 0x140529574 (NtSetVolumeInformationFile.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140529CB8 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140529EC8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14052A01C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     FsRtlDeleteTunnelCache @ 0x14052A1FC (FsRtlDeleteTunnelCache.c)
 *     WmipQuerySetExecuteSI @ 0x14052A4BC (WmipQuerySetExecuteSI.c)
 *     WmipPrepareWnodeSI @ 0x14052A720 (WmipPrepareWnodeSI.c)
 *     PopDiagTraceControlCallback @ 0x14052B2D0 (PopDiagTraceControlCallback.c)
 *     PopFxTraceDeviceRegistration @ 0x14052B8C0 (PopFxTraceDeviceRegistration.c)
 *     IoRegisterPlugPlayNotification @ 0x14052BB14 (IoRegisterPlugPlayNotification.c)
 *     MmFreeMappingAddress @ 0x14052C224 (MmFreeMappingAddress.c)
 *     MmAllocateMappingAddress @ 0x14052C2FC (MmAllocateMappingAddress.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C468 (PiCMGetRelatedDeviceInstance.c)
 *     MiFreeRelocations @ 0x14052CC54 (MiFreeRelocations.c)
 *     IoVolumeDeviceToGuid @ 0x14052CFCC (IoVolumeDeviceToGuid.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D194 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052D4FC (EtwpUpdateDisallowedGuids.c)
 *     FsRtlNotifyUninitializeSync @ 0x14052DCD4 (FsRtlNotifyUninitializeSync.c)
 *     PopDiagTraceThermalRequest @ 0x14052DCF8 (PopDiagTraceThermalRequest.c)
 *     PopFreeHiberContext @ 0x14052EA54 (PopFreeHiberContext.c)
 *     PopHiberInitializeResources @ 0x14052F2C4 (PopHiberInitializeResources.c)
 *     NtInitiatePowerAction @ 0x140530B04 (NtInitiatePowerAction.c)
 *     PoClearBroadcast @ 0x140531904 (PoClearBroadcast.c)
 *     MiCheckSessionPoolAllocations @ 0x140531DC8 (MiCheckSessionPoolAllocations.c)
 *     WmipDSCleanup @ 0x1405321F0 (WmipDSCleanup.c)
 *     IoDisconnectInterruptEx @ 0x14053247C (IoDisconnectInterruptEx.c)
 *     IoDisconnectInterrupt @ 0x1405324F4 (IoDisconnectInterrupt.c)
 *     WmipISCleanup @ 0x1405327E8 (WmipISCleanup.c)
 *     WmipGECleanup @ 0x140532810 (WmipGECleanup.c)
 *     BiGetObjectIdentifier @ 0x140532888 (BiGetObjectIdentifier.c)
 *     BiGetKeyName @ 0x1405328D4 (BiGetKeyName.c)
 *     BiDeleteKey @ 0x140532A4C (BiDeleteKey.c)
 *     KeFreeCalloutStack @ 0x140532E30 (KeFreeCalloutStack.c)
 *     PopFinalizeWakeInfo @ 0x140533030 (PopFinalizeWakeInfo.c)
 *     SepDeleteLogonSessionTrack @ 0x140533094 (SepDeleteLogonSessionTrack.c)
 *     PfpPrefetchPrivatePages @ 0x1405333EC (PfpPrefetchPrivatePages.c)
 *     PfpSourceBuildVaArray @ 0x1405337A8 (PfpSourceBuildVaArray.c)
 *     PopFreeRegistration @ 0x140533A30 (PopFreeRegistration.c)
 *     BiUnloadHiveByHandle @ 0x140533C28 (BiUnloadHiveByHandle.c)
 *     BiUnloadHiveByName @ 0x140533CB4 (BiUnloadHiveByName.c)
 *     PopLoadResumeContext @ 0x140533E50 (PopLoadResumeContext.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140534094 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     MiSessionObjectDelete @ 0x14053494C (MiSessionObjectDelete.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x140535AA4 (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     WmipEventNotification @ 0x140536DB8 (WmipEventNotification.c)
 *     WmipRegisterOrUpdateDS @ 0x140536E20 (WmipRegisterOrUpdateDS.c)
 *     WmipAddDataSource @ 0x140537074 (WmipAddDataSource.c)
 *     WmipBuildInstanceSet @ 0x140537360 (WmipBuildInstanceSet.c)
 *     WmipGenerateRegistrationNotification @ 0x140537750 (WmipGenerateRegistrationNotification.c)
 *     WmipCachePtrs @ 0x140537828 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x140537A1C (WmipSendGuidUpdateNotifications.c)
 *     WmipProcessEvent @ 0x140537B40 (WmipProcessEvent.c)
 *     WmipAllocGuidEntry @ 0x140537DD4 (WmipAllocGuidEntry.c)
 *     WmipQueueNotification @ 0x14053809C (WmipQueueNotification.c)
 *     RtlQueryModuleInformation @ 0x1405381A4 (RtlQueryModuleInformation.c)
 *     PipServiceInstanceToDeviceInstance @ 0x1405383B0 (PipServiceInstanceToDeviceInstance.c)
 *     PnpIsAnyDeviceInstanceEnabled @ 0x1405385F8 (PnpIsAnyDeviceInstanceEnabled.c)
 *     PiProcessDriverInstance @ 0x1405387C4 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x140538FDC (PiFindDevInstMatch.c)
 *     IopConnectLineBasedInterrupt @ 0x1405392E8 (IopConnectLineBasedInterrupt.c)
 *     IoConnectInterruptEx @ 0x140539558 (IoConnectInterruptEx.c)
 *     IopConnectMessageBasedInterrupt @ 0x1405397D4 (IopConnectMessageBasedInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140539B0C (IopGetInterruptConnectionData.c)
 *     IopConnectInterrupt @ 0x140539BEC (IopConnectInterrupt.c)
 *     CmpCleanupLightWeightUoWData @ 0x14053A9D4 (CmpCleanupLightWeightUoWData.c)
 *     CmpLightWeightCommitSetValueKeyUoW @ 0x14053AF30 (CmpLightWeightCommitSetValueKeyUoW.c)
 *     CmpLightWeightCleanupSetValueKeyUoW @ 0x14053B050 (CmpLightWeightCleanupSetValueKeyUoW.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B080 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053B4E8 (CmpLightWeightCreateSetValueData.c)
 *     BiLoadSystemStore @ 0x14053B5E0 (BiLoadSystemStore.c)
 *     BiGetSystemStorePath @ 0x14053B764 (BiGetSystemStorePath.c)
 *     BiGetSystemPartition @ 0x14053B84C (BiGetSystemPartition.c)
 *     SiQuerySystemPartitionInformation @ 0x14053B914 (SiQuerySystemPartitionInformation.c)
 *     BiMarkTreatAsSystemStore @ 0x14053BADC (BiMarkTreatAsSystemStore.c)
 *     BiOpenSystemStore @ 0x14053BF5C (BiOpenSystemStore.c)
 *     BiCleanupLoadedStores @ 0x14053C160 (BiCleanupLoadedStores.c)
 *     BiEnumerateSubKeys @ 0x14053C2A0 (BiEnumerateSubKeys.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053C928 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14053CA90 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x14053CCF0 (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14053CE58 (BiGetDriveLayoutBlock.c)
 *     BiIsWinPEBoot @ 0x14053CF20 (BiIsWinPEBoot.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053CF94 (PopBcdSetDefaultResumeObjectElements.c)
 *     BiIsSystemStore @ 0x14053D3D8 (BiIsSystemStore.c)
 *     PopBcdReadElement @ 0x14053D498 (PopBcdReadElement.c)
 *     BiCreateKey @ 0x14053D6A0 (BiCreateKey.c)
 *     BiGetObjectDescription @ 0x14053D854 (BiGetObjectDescription.c)
 *     BiGetRegistryValue @ 0x14053D91C (BiGetRegistryValue.c)
 *     BcdSetElementDataWithFlags @ 0x14053DADC (BcdSetElementDataWithFlags.c)
 *     BcdGetElementDataWithFlags @ 0x14053DC9C (BcdGetElementDataWithFlags.c)
 *     BiOpenKey @ 0x14053DE4C (BiOpenKey.c)
 *     BiCloseKey @ 0x14053DFCC (BiCloseKey.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E018 (BiCreateKeySecurityDescriptor.c)
 *     BiConvertElementToRegistryData @ 0x14053E324 (BiConvertElementToRegistryData.c)
 *     BiConvertRegistryDataToElement @ 0x14053E530 (BiConvertRegistryDataToElement.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053E75C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14053E80C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14053EBB4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x14053ED88 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x14053EF34 (BiVerifyBootPartition.c)
 *     PopBcdSetupResumeObject @ 0x14053F0D0 (PopBcdSetupResumeObject.c)
 *     pIoQueryDeviceDescription @ 0x14053F6C0 (pIoQueryDeviceDescription.c)
 *     IoQueryDeviceDescription @ 0x14053FB24 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14053FC30 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x14053FF84 (IopGetRegistryKeyInformation.c)
 *     IoRegisterDeviceInterface @ 0x140540868 (IoRegisterDeviceInterface.c)
 *     IopSymlinkRememberJunction @ 0x140540AD0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140540BD0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkFreeRelatedMountPointChain @ 0x140540D0C (IopSymlinkFreeRelatedMountPointChain.c)
 *     IopGraftName @ 0x140541028 (IopGraftName.c)
 *     KeAllocateCalloutStackEx @ 0x1405416E4 (KeAllocateCalloutStackEx.c)
 *     IoQuerySystemDeviceName @ 0x140541E1C (IoQuerySystemDeviceName.c)
 *     SiGetSystemDeviceName @ 0x140541F38 (SiGetSystemDeviceName.c)
 *     SiGetSystemPartition @ 0x140542030 (SiGetSystemPartition.c)
 *     SiGetFirmwareBootDeviceName @ 0x14054207C (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x1405422D8 (SiTranslateSymbolicLink.c)
 *     SiIsWinPEBoot @ 0x1405424B8 (SiIsWinPEBoot.c)
 *     SiGetRegistryValue @ 0x14054251C (SiGetRegistryValue.c)
 *     IopErrorLogThread @ 0x1405426F4 (IopErrorLogThread.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140542D4C (NtPrivilegeObjectAuditAlarm.c)
 *     WmipRegistrationWorker @ 0x140543088 (WmipRegistrationWorker.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1405431F0 (IopDeviceObjectFromSymbolicName.c)
 *     PiSwIrpPropertySet @ 0x140543704 (PiSwIrpPropertySet.c)
 *     PiSwUpdateArrayProperties @ 0x1405438D0 (PiSwUpdateArrayProperties.c)
 *     WmipCopyFromEventQueues @ 0x1405439E4 (WmipCopyFromEventQueues.c)
 *     MmCallDllInitialize @ 0x1405442A0 (MmCallDllInitialize.c)
 *     MiFormFullImageName @ 0x140544648 (MiFormFullImageName.c)
 *     MiReleaseDriverPtes @ 0x140544938 (MiReleaseDriverPtes.c)
 *     PnpUnloadAttachedDriver @ 0x140544D78 (PnpUnloadAttachedDriver.c)
 *     IopUnloadDriver @ 0x140544E28 (IopUnloadDriver.c)
 *     IopDeleteDriver @ 0x140545C94 (IopDeleteDriver.c)
 *     MiDeleteSessionDriverProtos @ 0x140546350 (MiDeleteSessionDriverProtos.c)
 *     WmipGetFilePDO @ 0x140546704 (WmipGetFilePDO.c)
 *     EtwpCCSwapStart @ 0x1405468E4 (EtwpCCSwapStart.c)
 *     TtmNotifyDeviceArrival @ 0x140546A1C (TtmNotifyDeviceArrival.c)
 *     IoWMIQuerySingleInstance @ 0x140547014 (IoWMIQuerySingleInstance.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140547E40 (NtQuerySystemEnvironmentValueEx.c)
 *     PopSetHiberFileMcb @ 0x1405483F4 (PopSetHiberFileMcb.c)
 *     EtwUnregister @ 0x1405488B0 (EtwUnregister.c)
 *     WmipSendEnableDisableRequest @ 0x140549834 (WmipSendEnableDisableRequest.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepNotifyFileSystems @ 0x14054A550 (SepNotifyFileSystems.c)
 *     EtwpPsProvTraceProcess @ 0x14054B508 (EtwpPsProvTraceProcess.c)
 *     ExpQueryNumaAvailableMemory @ 0x14054C0E4 (ExpQueryNumaAvailableMemory.c)
 *     ExpOsProductCacheProviderHelper @ 0x14054C53C (ExpOsProductCacheProviderHelper.c)
 *     EtwpUpdateKernelGroupsWork @ 0x14054C9E0 (EtwpUpdateKernelGroupsWork.c)
 *     IoCreateSystemThread @ 0x14054CB60 (IoCreateSystemThread.c)
 *     PspSetCreateThreadNotifyRoutine @ 0x14054CC44 (PspSetCreateThreadNotifyRoutine.c)
 *     IopThreadStart @ 0x14054CD14 (IopThreadStart.c)
 *     PiDmListInitEnumCallback @ 0x14054D120 (PiDmListInitEnumCallback.c)
 *     PnpSetInterruptInformation @ 0x14054D528 (PnpSetInterruptInformation.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     MmFreeBootRegistry @ 0x14054E110 (MmFreeBootRegistry.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EAE0 (PpmIdleRegisterDefaultStates.c)
 *     MiCreateNodeLists @ 0x14054F460 (MiCreateNodeLists.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FA20 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopCreateArcName @ 0x14054FC84 (IopCreateArcName.c)
 *     RtlGenerateClass5Guid @ 0x1405501AC (RtlGenerateClass5Guid.c)
 *     WmipInsertMofResource @ 0x140550DF8 (WmipInsertMofResource.c)
 *     CmpRegisterCallbackInternal @ 0x1405510FC (CmpRegisterCallbackInternal.c)
 *     PiDrvDbRegisterNode @ 0x140551AE8 (PiDrvDbRegisterNode.c)
 *     PsRegisterSiloMonitor @ 0x140551E98 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140552054 (ObCreateObjectTypeEx.c)
 *     ObpInitObjectTypeSD @ 0x140552694 (ObpInitObjectTypeSD.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14055272C (ObpCreateDefaultObjectTypeSD.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 *     EmpProviderRegister @ 0x14055420C (EmpProviderRegister.c)
 *     IopLegacyResourceAllocation @ 0x1405549AC (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x140554B14 (IopReleaseResources.c)
 *     IopCreateCmResourceList @ 0x140554BA0 (IopCreateCmResourceList.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     IopIsReportedAlready @ 0x1405551A8 (IopIsReportedAlready.c)
 *     IopDuplicateDetection @ 0x140555458 (IopDuplicateDetection.c)
 *     ArbInitializeArbiterInstance @ 0x140555648 (ArbInitializeArbiterInstance.c)
 *     PnpBuildCmResourceLists @ 0x140555BD8 (PnpBuildCmResourceLists.c)
 *     PnpFreeResourceRequirementsForAssignTable @ 0x1405560E4 (PnpFreeResourceRequirementsForAssignTable.c)
 *     IopAllocateBootResourcesInternal @ 0x1405561C0 (IopAllocateBootResourcesInternal.c)
 *     IopFreeReqList @ 0x14055630C (IopFreeReqList.c)
 *     IopFreeReqAlternative @ 0x14055635C (IopFreeReqAlternative.c)
 *     PnpBuildCmResourceList @ 0x1405563CC (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x140556850 (IopChildToRootTranslation.c)
 *     IopQueryResourceHandlerInterface @ 0x14055753C (IopQueryResourceHandlerInterface.c)
 *     IopTranslateAndAdjustReqDesc @ 0x140557C18 (IopTranslateAndAdjustReqDesc.c)
 *     PnpFilterResourceRequirementsList @ 0x1405583E4 (PnpFilterResourceRequirementsList.c)
 *     ArbBuildAssignmentOrdering @ 0x140558A4C (ArbBuildAssignmentOrdering.c)
 *     ArbAddOrdering @ 0x140559000 (ArbAddOrdering.c)
 *     ArbAllocateEntry @ 0x140559390 (ArbAllocateEntry.c)
 *     ArbpBuildAllocationStack @ 0x14055978C (ArbpBuildAllocationStack.c)
 *     ArbBootAllocation @ 0x1405598CC (ArbBootAllocation.c)
 *     ArbpGetRegistryValue @ 0x14055A67C (ArbpGetRegistryValue.c)
 *     RtlpFreeRangeListEntry @ 0x14055A998 (RtlpFreeRangeListEntry.c)
 *     ArbFreeOrderingList @ 0x14055AA18 (ArbFreeOrderingList.c)
 *     ArbPruneOrdering @ 0x14055AA78 (ArbPruneOrdering.c)
 *     ArbAddInaccessibleAllocationRange @ 0x14055AC84 (ArbAddInaccessibleAllocationRange.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14055AE90 (ArbAddMmConfigRangeAsBootReserved.c)
 *     IopReleaseFilteredBootResources @ 0x14055B33C (IopReleaseFilteredBootResources.c)
 *     CmSetAcpiHwProfile @ 0x14055B9E8 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x14055C098 (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x14055CDF0 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D110 (CmpFinishSystemHivesLoad.c)
 *     CmpSetVersionData @ 0x14055D9A8 (CmpSetVersionData.c)
 *     CmpMountPreloadedHives @ 0x14055E464 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055E548 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055E73C (CmpHiveRootSecurityDescriptor.c)
 *     RtlpLoadInstallLanguageFallback @ 0x14055FD24 (RtlpLoadInstallLanguageFallback.c)
 *     CmpValueToData @ 0x1405601A0 (CmpValueToData.c)
 *     RtlpLoadLanguageConfigList @ 0x140560338 (RtlpLoadLanguageConfigList.c)
 *     RtlpMuiRegFreeRegistryInfo @ 0x140560450 (RtlpMuiRegFreeRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x140560C34 (LdrpQueryValueKey.c)
 *     _RtlpMuiRegValidateInstalled @ 0x140560D70 (_RtlpMuiRegValidateInstalled.c)
 *     RtlpMuiRegGetInstalledLanguageIndexByLangId @ 0x1405613F4 (RtlpMuiRegGetInstalledLanguageIndexByLangId.c)
 *     RtlpGetWindowsPolicy @ 0x140561884 (RtlpGetWindowsPolicy.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140561A98 (_CmGetMatchingDeviceListForSubkey.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x140561D68 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _RegRtlDeleteTreeInternal @ 0x1405620CC (_RegRtlDeleteTreeInternal.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x140562370 (_CmGetMatchingCommonClassListWorker.c)
 *     _RegRtlEnumKeyWithCallback @ 0x1405624B4 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlEnumKey @ 0x140562664 (_RegRtlEnumKey.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140562834 (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140562C98 (_CmEnumSubkeyCallback.c)
 *     EtwInitializeSiloState @ 0x1405631E8 (EtwInitializeSiloState.c)
 *     EtwpInitializeAutoLoggers @ 0x140563428 (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14056366C (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x1405637E0 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140563BFC (EtwpGetAutoLoggerProviderFilter.c)
 *     PiDmListInit @ 0x140564054 (PiDmListInit.c)
 *     PiDmObjectManagerPopulate @ 0x1405640A8 (PiDmObjectManagerPopulate.c)
 *     WdipSemCleanupGroupPolicy @ 0x1405647F4 (WdipSemCleanupGroupPolicy.c)
 *     PoFxRegisterCoreDevice @ 0x14056693C (PoFxRegisterCoreDevice.c)
 *     PoFxRegisterDevice @ 0x140566A50 (PoFxRegisterDevice.c)
 *     PopFxRegisterDeviceWorker @ 0x140566D28 (PopFxRegisterDeviceWorker.c)
 *     PopPepRegisterDevice @ 0x14056747C (PopPepRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140567808 (PopFxConvertV1Components.c)
 *     MmStoreRegister @ 0x140567FC0 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmPerfResizeHistoryAll @ 0x14056AC74 (PpmPerfResizeHistoryAll.c)
 *     AdtpBuildMessageString @ 0x14056B150 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14056B3C4 (SepGetLogonSessionAccountInfo.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14056B668 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x14056B6F0 (SepRmFetchGlobalSacl.c)
 *     PopRequestShutdownWait @ 0x14056BC80 (PopRequestShutdownWait.c)
 *     SepReadAndPopulateCapes @ 0x14056BD0C (SepReadAndPopulateCapes.c)
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 *     PopConnectToPolicyDevice @ 0x14056C0D8 (PopConnectToPolicyDevice.c)
 *     PoCreateThermalRequest @ 0x14056C4C8 (PoCreateThermalRequest.c)
 *     PopEnableHiberFile @ 0x14056C7F8 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14056CCF8 (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056E550 (PopCreateHiberFileSecurityDescriptor.c)
 *     PpReleaseBootDDB @ 0x14056E7B4 (PpReleaseBootDDB.c)
 *     SeAuditProcessCreation @ 0x14056EDCC (SeAuditProcessCreation.c)
 *     CmpCmdInit @ 0x14056F1EC (CmpCmdInit.c)
 *     PoRegisterCoalescingCallback @ 0x14056F390 (PoRegisterCoalescingCallback.c)
 *     PipMakeGloballyUniqueId @ 0x14056F5C4 (PipMakeGloballyUniqueId.c)
 *     AdtpObjsInitialize @ 0x14056FBF0 (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x1405700B8 (AdtpInitializeDriveLetters.c)
 *     PnpReadDeviceConfiguration @ 0x14057091C (PnpReadDeviceConfiguration.c)
 *     PiQueryPowerRelations @ 0x140570A48 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x140570DD4 (PiQueryPowerDependencyRelations.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x140570E50 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PiAuAllocateAndInitializeSid @ 0x14057187C (PiAuAllocateAndInitializeSid.c)
 *     PfpCreateEvent @ 0x140572860 (PfpCreateEvent.c)
 *     PnpCheckPossibleBootStartDriver @ 0x140572BEC (PnpCheckPossibleBootStartDriver.c)
 *     MiMapViewOfPhysicalSection @ 0x140572C40 (MiMapViewOfPhysicalSection.c)
 *     PipApplyFunctionToServiceInstances @ 0x14057471C (PipApplyFunctionToServiceInstances.c)
 *     CmLockKeyForWrite @ 0x140574BC8 (CmLockKeyForWrite.c)
 *     IoReadDiskSignature @ 0x140574C9C (IoReadDiskSignature.c)
 *     WmipLegacyEtwWorker @ 0x140574E44 (WmipLegacyEtwWorker.c)
 *     ExAllocatePrivateWorkerPool @ 0x140575508 (ExAllocatePrivateWorkerPool.c)
 *     EtwpAcquireTokenAccessInformation @ 0x1405756A4 (EtwpAcquireTokenAccessInformation.c)
 *     PspSetCreateProcessNotifyRoutine @ 0x140575954 (PspSetCreateProcessNotifyRoutine.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576830 (PiSwIrpInterfacePropertySet.c)
 *     WmipGenerateMofResourceNotification @ 0x140576CD8 (WmipGenerateMofResourceNotification.c)
 *     FsRtlGetTunnelParameterValue @ 0x140576E3C (FsRtlGetTunnelParameterValue.c)
 *     ExpQueryMemoryTopologyInformation @ 0x140576F34 (ExpQueryMemoryTopologyInformation.c)
 *     NtSetUuidSeed @ 0x140577398 (NtSetUuidSeed.c)
 *     PiDcInitUpdateProperties @ 0x1405777B8 (PiDcInitUpdateProperties.c)
 *     PfpRpCHashEmpty @ 0x140577A98 (PfpRpCHashEmpty.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140578344 (FsRtlpRegisterProviderWithMUP.c)
 *     DrvDbOpenContext @ 0x140578960 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140578BB0 (DrvDbCreateDatabaseNode.c)
 *     ObRegisterCallbacks @ 0x140579118 (ObRegisterCallbacks.c)
 *     _PnpCtxOpenMachine @ 0x140579548 (_PnpCtxOpenMachine.c)
 *     _SysCtxOpenMachine @ 0x140579704 (_SysCtxOpenMachine.c)
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 *     ObpCreateDosDevicesDirectory @ 0x140579BE8 (ObpCreateDosDevicesDirectory.c)
 *     SepSetSystemPaths @ 0x14057A068 (SepSetSystemPaths.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057A954 (PiDevCfgQueryObjectProperties.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14057AADC (ExpRegisterFirmwareTableInformationHandler.c)
 *     WheapLogInitEvent @ 0x14057AC08 (WheapLogInitEvent.c)
 *     SepBuildDefaultCap @ 0x14057B0B4 (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B14C (_PnpGetEnumSecurityDescriptor.c)
 *     DbgkRegisterErrorPort @ 0x14057B984 (DbgkRegisterErrorPort.c)
 *     AlpcpInitializeMessageLog @ 0x14057BFD4 (AlpcpInitializeMessageLog.c)
 *     IoRegisterContainerNotification @ 0x14057C124 (IoRegisterContainerNotification.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C53C (ExpGetSystemPlatformBinary.c)
 *     NtDeleteWnfStateData @ 0x14057CAB8 (NtDeleteWnfStateData.c)
 *     DbgkLkmdRegisterCallback @ 0x14057CDB4 (DbgkLkmdRegisterCallback.c)
 *     PsSetLoadImageNotifyRoutine @ 0x14057D778 (PsSetLoadImageNotifyRoutine.c)
 *     PiSwIrpInterfaceSetState @ 0x14057E580 (PiSwIrpInterfaceSetState.c)
 *     ExGetSystemFirmwareTable @ 0x14057E9A0 (ExGetSystemFirmwareTable.c)
 *     ExNotifyPlatformBinaryExecuted @ 0x14057EC8C (ExNotifyPlatformBinaryExecuted.c)
 *     CmpAddStringToMapping @ 0x14057F170 (CmpAddStringToMapping.c)
 *     PnpDriverLoadingFailed @ 0x14057F858 (PnpDriverLoadingFailed.c)
 *     PopExtendConnectionState @ 0x14057F99C (PopExtendConnectionState.c)
 *     SepAuditAssignPrimaryToken @ 0x140580038 (SepAuditAssignPrimaryToken.c)
 *     ExGetFirmwareEnvironmentVariable @ 0x1405810D4 (ExGetFirmwareEnvironmentVariable.c)
 *     WheaCrashDumpInitializationComplete @ 0x1405812AC (WheaCrashDumpInitializationComplete.c)
 *     PsEstablishWin32Callouts @ 0x1405813D8 (PsEstablishWin32Callouts.c)
 *     IopCopyBootLogRegistryToFile @ 0x14058155C (IopCopyBootLogRegistryToFile.c)
 *     CcUnpinDataForThread @ 0x1405F8FF0 (CcUnpinDataForThread.c)
 *     CcFreeVacbArray @ 0x1405F905C (CcFreeVacbArray.c)
 *     CmpSaveBootControlSet @ 0x1405F9094 (CmpSaveBootControlSet.c)
 *     NtCompactKeys @ 0x1405F9400 (NtCompactKeys.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9B0C (NtQueryOpenSubKeysEx.c)
 *     NtRenameKey @ 0x1405F9DF0 (NtRenameKey.c)
 *     NtReplaceKey @ 0x1405FA30C (NtReplaceKey.c)
 *     CmUnRegisterCallback @ 0x1405FB13C (CmUnRegisterCallback.c)
 *     CmpFreeCallbackObjectContexts @ 0x1405FB518 (CmpFreeCallbackObjectContexts.c)
 *     CmpQuotaWarningWorker @ 0x1405FC5EC (CmpQuotaWarningWorker.c)
 *     CmpSystemHiveHysteresisWorker @ 0x1405FC620 (CmpSystemHiveHysteresisWorker.c)
 *     CmpFreeAllMemory @ 0x1405FCA7C (CmpFreeAllMemory.c)
 *     CmRenameKey @ 0x1405FD4E8 (CmRenameKey.c)
 *     CmSetKeyFlags @ 0x1405FE35C (CmSetKeyFlags.c)
 *     CmSetLastWriteTimeKey @ 0x1405FE7F4 (CmSetLastWriteTimeKey.c)
 *     CmpTerminateServerSiloCallback @ 0x1405FF3F0 (CmpTerminateServerSiloCallback.c)
 *     CmpBuildAdminInformation @ 0x14060049C (CmpBuildAdminInformation.c)
 *     CmpBuildVirtualReplicationStack @ 0x140600808 (CmpBuildVirtualReplicationStack.c)
 *     CmpCheckAdminAccess @ 0x140600994 (CmpCheckAdminAccess.c)
 *     CmpReplicateKeyToVirtual @ 0x140601798 (CmpReplicateKeyToVirtual.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140601A60 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpVERemoveHiveFromSIDMappingTable @ 0x140601C64 (CmpVERemoveHiveFromSIDMappingTable.c)
 *     CmpCheckExeOwnerForPca @ 0x140601DF0 (CmpCheckExeOwnerForPca.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140602464 (CmpDoAccessCheckOnSubtree.c)
 *     CmpReportAuditVirtualizationEvent @ 0x140602880 (CmpReportAuditVirtualizationEvent.c)
 *     CmpCmdRenameHive @ 0x140603554 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarningWorker @ 0x140603684 (CmpDiskFullWarningWorker.c)
 *     CmpClearKeyAccessBits @ 0x140603774 (CmpClearKeyAccessBits.c)
 *     CmInitializeProcessor @ 0x1406038C8 (CmInitializeProcessor.c)
 *     CmpFreeOffsetArray @ 0x1406047E8 (CmpFreeOffsetArray.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x140604834 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpRollbackTransactionArray @ 0x140605148 (CmpRollbackTransactionArray.c)
 *     CmpRmAnalysisPhase @ 0x1406055CC (CmpRmAnalysisPhase.c)
 *     CmpRmUnDoPhase @ 0x14060597C (CmpRmUnDoPhase.c)
 *     HvWriteExternal @ 0x1406064F4 (HvWriteExternal.c)
 *     CmDeleteKeyRecursive @ 0x140606DF0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     CmpCopySyncTree @ 0x1406081A4 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x140608240 (CmpCopySyncTree2.c)
 *     CmpCopyValue @ 0x140608960 (CmpCopyValue.c)
 *     CmpMergeKeyValues @ 0x140608F88 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x140609150 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x14060B354 (CmpGetValueForAudit.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 *     CmpSaveKeyByFileCopy @ 0x14060DA94 (CmpSaveKeyByFileCopy.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DD60 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpFreeUnitOfWork @ 0x14060E2D0 (CmpFreeUnitOfWork.c)
 *     CmpLightWeightCleanupModifyKeyDataUoW @ 0x14060E2DC (CmpLightWeightCleanupModifyKeyDataUoW.c)
 *     CmpLightWeightCommitDeleteValueKeyUoW @ 0x14060E630 (CmpLightWeightCommitDeleteValueKeyUoW.c)
 *     CmpLightWeightCommitSetSecDescUoW @ 0x14060E970 (CmpLightWeightCommitSetSecDescUoW.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F08C (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F624 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     HvpViewMapPrefetchFile @ 0x140610074 (HvpViewMapPrefetchFile.c)
 *     HvpGetLogHeader @ 0x140610A74 (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1406112B8 (HvpRecoverData.c)
 *     HvpRecoverDataReadRoutine @ 0x140611514 (HvpRecoverDataReadRoutine.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140611640 (CmpAddRemoveContainerToCLFSLog.c)
 *     VrpCleanupNamespace @ 0x140612E20 (VrpCleanupNamespace.c)
 *     VrpCleanupBufferParameter @ 0x140612E98 (VrpCleanupBufferParameter.c)
 *     VrpFreeCallbackContext @ 0x140612EC4 (VrpFreeCallbackContext.c)
 *     VrpFreeKeyContext @ 0x140612F08 (VrpFreeKeyContext.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406130D8 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlGetComRootKey @ 0x140613584 (VrpHandleIoctlGetComRootKey.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613754 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHiveForHost @ 0x140613C70 (VrpHandleIoctlLoadDifferencingHiveForHost.c)
 *     VrpHandleIoctlUnloadDifferencingHiveForHost @ 0x140613F7C (VrpHandleIoctlUnloadDifferencingHiveForHost.c)
 *     VrpAddNamespaceNodeToList @ 0x140614330 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140614648 (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x140614978 (VrpDestroyNamespaceNode.c)
 *     VrpDestroyNamespaceNodeList @ 0x140614C00 (VrpDestroyNamespaceNodeList.c)
 *     VrpPostEnumerateKey @ 0x140614D90 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x140615588 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140615D08 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x1406163E4 (VrpPreOpenOrCreate.c)
 *     VrpTranslatePath @ 0x1406169B8 (VrpTranslatePath.c)
 *     VrpDereferenceDiffHiveEntryWithLock @ 0x140617028 (VrpDereferenceDiffHiveEntryWithLock.c)
 *     VrpFindOrCreateDiffHiveEntryForMountPoint @ 0x1406172B8 (VrpFindOrCreateDiffHiveEntryForMountPoint.c)
 *     DbgkpFreeDebugEvent @ 0x1406183E0 (DbgkpFreeDebugEvent.c)
 *     DbgkpPostModuleMessages @ 0x140618B20 (DbgkpPostModuleMessages.c)
 *     DbgkpQueueMessage @ 0x140618F9C (DbgkpQueueMessage.c)
 *     DbgkpDeleteErrorPort @ 0x14061A1EC (DbgkpDeleteErrorPort.c)
 *     DbgkpSectionToFileHandle @ 0x14061ACB4 (DbgkpSectionToFileHandle.c)
 *     DbgkCaptureLiveDump @ 0x14061ADEC (DbgkCaptureLiveDump.c)
 *     DbgkLkmdUnregisterCallback @ 0x14061B1F0 (DbgkLkmdUnregisterCallback.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14061B3D0 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14061B638 (DbgkpLkmdSnapThreadApc.c)
 *     DbgkpWerCleanupContext @ 0x14061C01C (DbgkpWerCleanupContext.c)
 *     DbgkpWerFreePool @ 0x14061C2B4 (DbgkpWerFreePool.c)
 *     EmClientRuleDeregisterNotification @ 0x14061CA8C (EmClientRuleDeregisterNotification.c)
 *     EmpClientRuleRegisterNotification @ 0x14061CB9C (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x14061CE10 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x14061D064 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x14061ED7C (FsRtlIsDbcsInExpression.c)
 *     FsRtlHeatInit @ 0x14061F648 (FsRtlHeatInit.c)
 *     FsRtlpHeatUnregisterVolume @ 0x14061FA48 (FsRtlpHeatUnregisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x14061FAD0 (FsRtlpQueryValueKey.c)
 *     FsRtlNotifyCleanupAll @ 0x14061FCE8 (FsRtlNotifyCleanupAll.c)
 *     IoReadPartitionTable @ 0x14061FF24 (IoReadPartitionTable.c)
 *     IoWritePartitionTable @ 0x1406200D4 (IoWritePartitionTable.c)
 *     IopApcHardError @ 0x140620E1C (IopApcHardError.c)
 *     IopCleanupFileObjectIosbRange @ 0x14062118C (IopCleanupFileObjectIosbRange.c)
 *     IopExceptionCleanup @ 0x1406213D4 (IopExceptionCleanup.c)
 *     IopFreeGenericTableEntry @ 0x14062148C (IopFreeGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x14062149C (IopGetRelatedFileName.c)
 *     IopHardErrorThread @ 0x1406217E0 (IopHardErrorThread.c)
 *     IopRaiseHardError @ 0x140622078 (IopRaiseHardError.c)
 *     IopRaiseInformationalHardError @ 0x140622314 (IopRaiseInformationalHardError.c)
 *     IopSafebootDriverLoad @ 0x14062238C (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1406224EC (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140622BE4 (IopSetFileObjectIosbRange.c)
 *     IopStartApcHardError @ 0x1406231F8 (IopStartApcHardError.c)
 *     IoReplaceFileObjectName @ 0x14062392C (IoReplaceFileObjectName.c)
 *     IoUnregisterFsRegistrationChange @ 0x140623C48 (IoUnregisterFsRegistrationChange.c)
 *     IoUnregisterContainerNotification @ 0x140624484 (IoUnregisterContainerNotification.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406245F0 (IoIsValidNameGraftingBuffer.c)
 *     IopCopyOverNewPathSecure @ 0x140624994 (IopCopyOverNewPathSecure.c)
 *     IopReplaceSymlinkPath @ 0x140624A98 (IopReplaceSymlinkPath.c)
 *     IopSymlinkApplyToOpenedName @ 0x140624DAC (IopSymlinkApplyToOpenedName.c)
 *     IoUnregisterIoTracking @ 0x140625070 (IoUnregisterIoTracking.c)
 *     IoVolumeDeviceNameToGuid @ 0x14062515C (IoVolumeDeviceNameToGuid.c)
 *     NtSetEaFile @ 0x1406251DC (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x140625F30 (IoCaptureLiveDump.c)
 *     IoWriteDeferredLiveDumpData @ 0x14062651C (IoWriteDeferredLiveDumpData.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406266AC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpFreeDumpBuffers @ 0x140626FD8 (IopLiveDumpFreeDumpBuffers.c)
 *     IopLiveDumpFreeMappingResources @ 0x140627068 (IopLiveDumpFreeMappingResources.c)
 *     IopLiveDumpReleaseResources @ 0x1406272E8 (IopLiveDumpReleaseResources.c)
 *     IopLiveDumpWriteDumpFile @ 0x140627610 (IopLiveDumpWriteDumpFile.c)
 *     IopLiveDumpWriteDumpFileWithHvPages @ 0x14062782C (IopLiveDumpWriteDumpFileWithHvPages.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x14062857C (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x14062899C (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140628AE8 (IopGetEnvironmentVariableTrEE.c)
 *     IopOpenSystemVariableDevice @ 0x140628DBC (IopOpenSystemVariableDevice.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x1406290A8 (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x1406291AC (IopSetEnvironmentVariableTrEE.c)
 *     IopFindSystemDevice @ 0x1406292E0 (IopFindSystemDevice.c)
 *     PnpShutdownDevices @ 0x140629A20 (PnpShutdownDevices.c)
 *     IopAppendLegacyVeto @ 0x14062A498 (IopAppendLegacyVeto.c)
 *     PiGetDeviceRegistryProperty @ 0x14062A568 (PiGetDeviceRegistryProperty.c)
 *     PnpRequestDeviceEjectExWorker @ 0x14062A82C (PnpRequestDeviceEjectExWorker.c)
 *     PpCreateLegacyDeviceIds @ 0x14062A8B0 (PpCreateLegacyDeviceIds.c)
 *     PipDeleteDependencyNode @ 0x14062B21C (PipDeleteDependencyNode.c)
 *     PipFreeBindingId @ 0x14062B2DC (PipFreeBindingId.c)
 *     PipFreeBindingRequestEntry @ 0x14062B300 (PipFreeBindingRequestEntry.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B908 (PnpDeleteDeviceInterfaces.c)
 *     PnpReportTargetDeviceChangeAsyncWorker @ 0x14062BD5C (PnpReportTargetDeviceChangeAsyncWorker.c)
 *     IoReportResourceUsageInternal @ 0x14062C294 (IoReportResourceUsageInternal.c)
 *     IopDeviceRemovalForResetComplete @ 0x14062C698 (IopDeviceRemovalForResetComplete.c)
 *     IopFreeResetRemovalContext @ 0x14062C7CC (IopFreeResetRemovalContext.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14062D044 (IopAllocatePassiveInterruptBlock.c)
 *     PnpRestartDeviceNode @ 0x14062DC88 (PnpRestartDeviceNode.c)
 *     PnpCancelRemoveOnHungDevices @ 0x14062DD80 (PnpCancelRemoveOnHungDevices.c)
 *     PnpProcessCompletedEject @ 0x14062DF9C (PnpProcessCompletedEject.c)
 *     IopIsPciRootBus @ 0x14062E770 (IopIsPciRootBus.c)
 *     PiPnpRtlFreeContainerRemoveInfo @ 0x14062EB74 (PiPnpRtlFreeContainerRemoveInfo.c)
 *     PiPnpRtlFreeDeviceDeleteInfo @ 0x14062EBB0 (PiPnpRtlFreeDeviceDeleteInfo.c)
 *     PiPnpRtlFreeInstallerClassChangeInfo @ 0x14062EBC8 (PiPnpRtlFreeInstallerClassChangeInfo.c)
 *     PiPnpRtlFreeInterfaceDeleteInfo @ 0x14062EC24 (PiPnpRtlFreeInterfaceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14062EFB8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14062F290 (PiPnpRtlServiceFilterCallback.c)
 *     PiDmFreeGenericTableEntry @ 0x14062F8BC (PiDmFreeGenericTableEntry.c)
 *     PiDmFreeMem @ 0x14062F8CC (PiDmFreeMem.c)
 *     PnpRebalance @ 0x1406303D0 (PnpRebalance.c)
 *     PiDcFreeGenericTableEntry @ 0x140630894 (PiDcFreeGenericTableEntry.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406308B0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiDcResetChildDeviceContainers @ 0x140630AF8 (PiDcResetChildDeviceContainers.c)
 *     PiAuCheckClientInteractive @ 0x140630CB8 (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140630D78 (PiAuCheckTokenMembership.c)
 *     PiDqActionDataGetAllPropertiesInAllLanguages @ 0x140630F98 (PiDqActionDataGetAllPropertiesInAllLanguages.c)
 *     PiDqActionDataGetAllPropertiesInBestLanguage @ 0x14063121C (PiDqActionDataGetAllPropertiesInBestLanguage.c)
 *     PiDqDeleteUserObject @ 0x140631594 (PiDqDeleteUserObject.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406317A0 (PiDqGetRelativeObjectRegPath.c)
 *     PiDqIrpPropertySet @ 0x1406318E0 (PiDqIrpPropertySet.c)
 *     PiDqOpenUserObjectRegKey @ 0x140631D88 (PiDqOpenUserObjectRegKey.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14063209C (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x1406321C4 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgBuildIndirectString @ 0x14063287C (PiDevCfgBuildIndirectString.c)
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406353CC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureDeviceKeys @ 0x1406358F4 (PiDevCfgConfigureDeviceKeys.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140635E44 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140636008 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140636F9C (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgEnforceDevicePolicy @ 0x140637320 (PiDevCfgEnforceDevicePolicy.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637AD4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140638328 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgFreeDeviceMigrationNode @ 0x140638C94 (PiDevCfgFreeDeviceMigrationNode.c)
 *     PiDevCfgFreeDriverNode @ 0x140638D1C (PiDevCfgFreeDriverNode.c)
 *     PiDevCfgFreeResolveContext @ 0x140638EF4 (PiDevCfgFreeResolveContext.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14063918C (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgMakeServiceBootStart @ 0x14063A648 (PiDevCfgMakeServiceBootStart.c)
 *     PiDevCfgMigrateDevice @ 0x14063A864 (PiDevCfgMigrateDevice.c)
 *     PiDevCfgMigrateRootDevice @ 0x14063AD4C (PiDevCfgMigrateRootDevice.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CCDC (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyEnabled @ 0x14063D170 (PiDevCfgQueryPolicyEnabled.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D1DC (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063DFC8 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E354 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableConstant @ 0x14063E700 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E7C8 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EBAC (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14063FD2C (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableKeyCopy @ 0x140640340 (PiDevCfgResolveVariableKeyCopy.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14064041C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140640BC8 (PiDevCfgResolveVariableKeyValue.c)
 *     PiDevCfgResolveVariableSwitchCase @ 0x140640D9C (PiDevCfgResolveVariableSwitchCase.c)
 *     PiDevCfgVerifyDeviceAllowed @ 0x140641050 (PiDevCfgVerifyDeviceAllowed.c)
 *     PiDevCfgVerifyService @ 0x14064115C (PiDevCfgVerifyService.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14064207C (PiProfileUpdateDeviceTreeWorker.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1406420C0 (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCommitTransitioningDock @ 0x1406423EC (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140642534 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PnpAddVetoInformation @ 0x140642760 (PnpAddVetoInformation.c)
 *     PnpFreeVetoInformation @ 0x140642A48 (PnpFreeVetoInformation.c)
 *     PnpLogVetoInformation @ 0x140642AE0 (PnpLogVetoInformation.c)
 *     PnpRemoveEventFromQueue @ 0x140642C50 (PnpRemoveEventFromQueue.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x140643C5C (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140643E40 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x140643F5C (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x140644114 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x1406444DC (PnprGetPluginDriverImagePath.c)
 *     PnprIsMemoryDevice @ 0x140644978 (PnprIsMemoryDevice.c)
 *     PnprIsProcessorDevice @ 0x140644A24 (PnprIsProcessorDevice.c)
 *     PnprLegacyDeviceDriversPresent @ 0x140644B34 (PnprLegacyDeviceDriversPresent.c)
 *     PnprLoadPluginDriver @ 0x140644B80 (PnprLoadPluginDriver.c)
 *     PnprMmFree @ 0x140645408 (PnprMmFree.c)
 *     PiSwInterfaceFree @ 0x140645718 (PiSwInterfaceFree.c)
 *     PiSwQueuedCreateInfoFree @ 0x140645918 (PiSwQueuedCreateInfoFree.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140647664 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x1406477EC (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140647BEC (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 *     PiCMRegisterDeviceInterface @ 0x140648420 (PiCMRegisterDeviceInterface.c)
 *     PiProcessSetDeviceProblem @ 0x1406499F8 (PiProcessSetDeviceProblem.c)
 *     IopQueryDockRemovalInterface @ 0x140649F20 (IopQueryDockRemovalInterface.c)
 *     PiControlGetDeviceStack @ 0x14064A43C (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14064B0AC (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B3CC (PnpQueueQueryAndRemoveEvent.c)
 *     PiRearrangeDeviceInstances @ 0x14064B740 (PiRearrangeDeviceInstances.c)
 *     PnpRestoreResourcesInternal @ 0x14064BE48 (PnpRestoreResourcesInternal.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14064C090 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C2B4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiAuditDeviceOperation @ 0x14064C720 (PiAuditDeviceOperation.c)
 *     PiDrvDbDestroyNode @ 0x14064CD84 (PiDrvDbDestroyNode.c)
 *     IopExecuteHardwareProfileChange @ 0x14064CDDC (IopExecuteHardwareProfileChange.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D464 (PiCreateDriverSwDeviceCallback.c)
 *     IopQueryConflictListInternal @ 0x14064E5F8 (IopQueryConflictListInternal.c)
 *     KiStartDynamicProcessor @ 0x14064F040 (KiStartDynamicProcessor.c)
 *     KeInitializeUmsThread @ 0x1406504F0 (KeInitializeUmsThread.c)
 *     KeUnInitializeUmsThread @ 0x1406506E4 (KeUnInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406550F4 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x140655E7C (AlpcpGetPortNameInformation.c)
 *     AlpcpPortQueryServerInfo @ 0x140655F30 (AlpcpPortQueryServerInfo.c)
 *     AlpcRegisterLogRoutine @ 0x140656478 (AlpcRegisterLogRoutine.c)
 *     AlpcUnregisterLogRoutine @ 0x14065659C (AlpcUnregisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406569BC (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x140656B10 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140656C18 (MmGetFileNameForSection.c)
 *     MiReturnProcessVads @ 0x140656F20 (MiReturnProcessVads.c)
 *     MiAddPhysicalMemory @ 0x1406575DC (MiAddPhysicalMemory.c)
 *     MiRemovePhysicalMemory @ 0x1406581C0 (MiRemovePhysicalMemory.c)
 *     MmAllocateNonCachedMemory @ 0x1406587C4 (MmAllocateNonCachedMemory.c)
 *     MmFreeNonCachedMemory @ 0x140658948 (MmFreeNonCachedMemory.c)
 *     MiRemoveMdlPages @ 0x1406589E8 (MiRemoveMdlPages.c)
 *     MiLdwPopupWorker @ 0x14065935C (MiLdwPopupWorker.c)
 *     MmSetPermanentCacheAttribute @ 0x140659800 (MmSetPermanentCacheAttribute.c)
 *     MiFreeRotateView @ 0x140659C34 (MiFreeRotateView.c)
 *     MiFreeVadEventBitmap @ 0x140659D2C (MiFreeVadEventBitmap.c)
 *     MiAllocateFileExtents @ 0x14065A34C (MiAllocateFileExtents.c)
 *     MiCopyDirectMapHeader @ 0x14065A8E0 (MiCopyDirectMapHeader.c)
 *     MiDeletePagefile @ 0x14065AE08 (MiDeletePagefile.c)
 *     MiAweViewRemover @ 0x14065C150 (MiAweViewRemover.c)
 *     MiDeletePhysicalProcessPages @ 0x14065C48C (MiDeletePhysicalProcessPages.c)
 *     MiResizeAweBitMap @ 0x14065C82C (MiResizeAweBitMap.c)
 *     NtAllocateUserPhysicalPages @ 0x14065CA98 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x14065D72C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DBA8 (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x14065E080 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateEnclaveVad @ 0x14065E4C4 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x14065F8F8 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14065FCC8 (NtInitializeEnclave.c)
 *     MiCreatePartition @ 0x1406601A8 (MiCreatePartition.c)
 *     MiExpandPartitionIds @ 0x1406603B4 (MiExpandPartitionIds.c)
 *     MiHotAddPartitionMemory @ 0x1406605D8 (MiHotAddPartitionMemory.c)
 *     MiMakePartitionMemoryBlock @ 0x1406607FC (MiMakePartitionMemoryBlock.c)
 *     MiManagePartition @ 0x1406609A4 (MiManagePartition.c)
 *     MiAllocatePerSessionProtos @ 0x140661818 (MiAllocatePerSessionProtos.c)
 *     MiFreeSubsectionProtos @ 0x14066209C (MiFreeSubsectionProtos.c)
 *     MiAllocateLargeZeroPages @ 0x1406620F0 (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x1406624FC (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x1406626E4 (MiFindLargePageMemory.c)
 *     MiFreeLargePageView @ 0x140662878 (MiFreeLargePageView.c)
 *     MiDeletePartialCloneVad @ 0x14066313C (MiDeletePartialCloneVad.c)
 *     MiFreeCloneDescriptor @ 0x14066323C (MiFreeCloneDescriptor.c)
 *     MmInSwapVirtualAddresses @ 0x140663550 (MmInSwapVirtualAddresses.c)
 *     MiCombineAllPhysicalMemory @ 0x140663718 (MiCombineAllPhysicalMemory.c)
 *     MiProcessCrcList @ 0x140663DC8 (MiProcessCrcList.c)
 *     MiReleaseScrubPacket @ 0x140664D84 (MiReleaseScrubPacket.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 *     MmScrubMemory @ 0x14066528C (MmScrubMemory.c)
 *     ObShutdownSystem @ 0x1406655DC (ObShutdownSystem.c)
 *     ObpSetObjectAuditInfo @ 0x14066637C (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x1406665CC (ObGetObjectInformation.c)
 *     ObpDestroyTypeArray @ 0x140666D78 (ObpDestroyTypeArray.c)
 *     ObUnRegisterCallbacks @ 0x140666DCC (ObUnRegisterCallbacks.c)
 *     ObpCallPostOperationCallbacks @ 0x140666F08 (ObpCallPostOperationCallbacks.c)
 *     ObpDeregisterObject @ 0x140667748 (ObpDeregisterObject.c)
 *     ObpDestroyStackAndObjectTables @ 0x1406678C8 (ObpDestroyStackAndObjectTables.c)
 *     ObpFreeWorkItemBlock @ 0x1406679A8 (ObpFreeWorkItemBlock.c)
 *     ObpGetObjectRefInfo @ 0x140667A88 (ObpGetObjectRefInfo.c)
 *     ObpInitStackAndObjectTables @ 0x140667D9C (ObpInitStackAndObjectTables.c)
 *     ObpStartRuntimeStackTrace @ 0x140668404 (ObpStartRuntimeStackTrace.c)
 *     ObpStopRuntimeStackTrace @ 0x140668864 (ObpStopRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x140668CA0 (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 *     PfTCleanupBuffers @ 0x14066991C (PfTCleanupBuffers.c)
 *     PfpRpShutdown @ 0x1406699A8 (PfpRpShutdown.c)
 *     PfFbBufferListCleanup @ 0x14066A0A0 (PfFbBufferListCleanup.c)
 *     PopUnicodeStringDeepCopy @ 0x14066A78C (PopUnicodeStringDeepCopy.c)
 *     PoDeleteThermalRequest @ 0x14066B788 (PoDeleteThermalRequest.c)
 *     PopCleanCoolingExtension @ 0x14066B8F0 (PopCleanCoolingExtension.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14066BD0C (PopRegisterCoolingExtensionProtection.c)
 *     PoReenableSleepStates @ 0x14066BF28 (PoReenableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x14066C054 (PopGetPowerRequestListInfo.c)
 *     PoFxRegisterPrimaryDevice @ 0x14066C458 (PoFxRegisterPrimaryDevice.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C59C (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14066CA74 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoFree @ 0x14066CE7C (PopFxPepPerfInfoFree.c)
 *     PopFxVerifyDependencies @ 0x14066D78C (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14066DB94 (PopPluginQuerySocSubsystemMetadata.c)
 *     PoUnregisterCoalescingCallback @ 0x14066DF0C (PoUnregisterCoalescingCallback.c)
 *     PopFreeWakeInfo @ 0x14066E1A0 (PopFreeWakeInfo.c)
 *     PopFreeWakeSource @ 0x14066E1C0 (PopFreeWakeSource.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14066E438 (PopWakeSourceGetDeviceProperty.c)
 *     PopPepUnregisterDevice @ 0x14066F8C0 (PopPepUnregisterDevice.c)
 *     PopPdcCsDeviceNotification @ 0x14066FEEC (PopPdcCsDeviceNotification.c)
 *     PopThermalZoneRemove @ 0x140670550 (PopThermalZoneRemove.c)
 *     PopDiagReadLastLogOffEndTime @ 0x1406709B0 (PopDiagReadLastLogOffEndTime.c)
 *     PopFxTracePerfRegistration @ 0x1406723F0 (PopFxTracePerfRegistration.c)
 *     PopPolicyDeviceTargetChange @ 0x140672E7C (PopPolicyDeviceTargetChange.c)
 *     PpmWmiIdleAccountingWork @ 0x1406735EC (PpmWmiIdleAccountingWork.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140673C7C (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140673FC4 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x1406742A0 (PpmEventTraceProcessorIdle.c)
 *     PopBcdRegenerateResumeObject @ 0x1406757D0 (PopBcdRegenerateResumeObject.c)
 *     PpmRegisterSpmSettings @ 0x140675EB0 (PpmRegisterSpmSettings.c)
 *     TtmiSessionDeviceListWorker @ 0x1406770C8 (TtmiSessionDeviceListWorker.c)
 *     TtmInitCurrentSession @ 0x1406786B8 (TtmInitCurrentSession.c)
 *     TtmpDereferenceSessionMaybeLast @ 0x140678F98 (TtmpDereferenceSessionMaybeLast.c)
 *     TtmDispatchApi @ 0x14067937C (TtmDispatchApi.c)
 *     TtmiCloseEventQueue @ 0x140679E18 (TtmiCloseEventQueue.c)
 *     TtmiRetrieveEventFromQueue @ 0x140679FDC (TtmiRetrieveEventFromQueue.c)
 *     TtmpDeleteQueue @ 0x14067A2CC (TtmpDeleteQueue.c)
 *     PspDeleteServerSiloGlobals @ 0x14067E784 (PspDeleteServerSiloGlobals.c)
 *     PspCreateSecureThread @ 0x14067F428 (PspCreateSecureThread.c)
 *     PspApplyWorkingSetLimits @ 0x140680254 (PspApplyWorkingSetLimits.c)
 *     PspSetJobIoRateControlForVolume @ 0x140680918 (PspSetJobIoRateControlForVolume.c)
 *     PsUnregisterSiloMonitor @ 0x140681064 (PsUnregisterSiloMonitor.c)
 *     PspSetMinimalProcessName @ 0x140681AEC (PspSetMinimalProcessName.c)
 *     PsRemoveCreateThreadNotifyRoutine @ 0x140681BCC (PsRemoveCreateThreadNotifyRoutine.c)
 *     PsRemoveLoadImageNotifyRoutine @ 0x140681CC4 (PsRemoveLoadImageNotifyRoutine.c)
 *     PspIumVerifyParentSd @ 0x1406822E8 (PspIumVerifyParentSd.c)
 *     PspFreeStorage @ 0x1406828D0 (PspFreeStorage.c)
 *     PspLazyInitializeStorageExpansion @ 0x140682938 (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x1406834A4 (RawQueryFileSystemInformation.c)
 *     RtlGetAppContainerParent @ 0x140683988 (RtlGetAppContainerParent.c)
 *     RtlpComputeMergedAcl @ 0x140683EF8 (RtlpComputeMergedAcl.c)
 *     RtlAddResourceAttributeAce @ 0x140684700 (RtlAddResourceAttributeAce.c)
 *     RtlIdnToUnicode @ 0x1406892F4 (RtlIdnToUnicode.c)
 *     RtlpGetNormalization @ 0x14068C59C (RtlpGetNormalization.c)
 *     NtQuerySecurityPolicy @ 0x14068C694 (NtQuerySecurityPolicy.c)
 *     SeAdtRegistryValueChangedAuditAlarm @ 0x14068D508 (SeAdtRegistryValueChangedAuditAlarm.c)
 *     SeAuditFipsCryptoSelftests @ 0x14068DAD4 (SeAuditFipsCryptoSelftests.c)
 *     SeAuditProcessExit @ 0x14068E394 (SeAuditProcessExit.c)
 *     SeAuditSystemTimeChange @ 0x14068E50C (SeAuditSystemTimeChange.c)
 *     SeAuditTransactionStateChange @ 0x14068E6B4 (SeAuditTransactionStateChange.c)
 *     SeOperationAuditAlarm @ 0x14068E8E8 (SeOperationAuditAlarm.c)
 *     SepAdtCloseObjectAuditAlarm @ 0x14068EBFC (SepAdtCloseObjectAuditAlarm.c)
 *     SepAdtDeleteObjectAuditAlarm @ 0x14068EDF8 (SepAdtDeleteObjectAuditAlarm.c)
 *     SepAdtGenerateDiscardAudit @ 0x14068F02C (SepAdtGenerateDiscardAudit.c)
 *     SepAdtObjectReferenceAuditAlarm @ 0x14068F304 (SepAdtObjectReferenceAuditAlarm.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F52C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtSecurityDescriptorChangedAuditAlarm @ 0x14069000C (SepAdtSecurityDescriptorChangedAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140690298 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x14069079C (SepQueryTypeString.c)
 *     SeReleaseUnicodeStringStructures @ 0x140690B64 (SeReleaseUnicodeStringStructures.c)
 *     SepCaptureAuditPolicy @ 0x140690B80 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x140690C38 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x140690E7C (SepCaptureOctetStringArray.c)
 *     SepReleaseAuditPolicy @ 0x14069107C (SepReleaseAuditPolicy.c)
 *     SeExamineSacl @ 0x140691420 (SeExamineSacl.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14069180C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepExamineSaclEx @ 0x140691D50 (SepExamineSaclEx.c)
 *     SepDeleteTokenUserAndGroups @ 0x140692EE0 (SepDeleteTokenUserAndGroups.c)
 *     SepDereferenceSidValuesBlock @ 0x140692F60 (SepDereferenceSidValuesBlock.c)
 *     SeUnregisterLogonSessionTerminatedRoutine @ 0x1406934AC (SeUnregisterLogonSessionTerminatedRoutine.c)
 *     SeUnregisterLogonSessionTerminatedRoutineEx @ 0x140693574 (SeUnregisterLogonSessionTerminatedRoutineEx.c)
 *     SepRemoveTokenLogonSession @ 0x140693A14 (SepRemoveTokenLogonSession.c)
 *     NtFilterBootOption @ 0x140693BA4 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x140693FEC (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406943FC (SepSecureBootUpdateBcdDataForRule.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x14069479C (SeAdjustObjectAppContainerSecurity.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x14069492C (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140694AD0 (SepBuildObjectSecurityDescriptor.c)
 *     SepLogTokenSidManagement @ 0x140694F2C (SepLogTokenSidManagement.c)
 *     SepDeReferenceSharedSidEntries @ 0x1406958F4 (SepDeReferenceSharedSidEntries.c)
 *     SepDeleteClaimAttributes @ 0x140695A00 (SepDeleteClaimAttributes.c)
 *     SepDuplicateClaimAttributes @ 0x140695A80 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140695D78 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x140696138 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x140696490 (SepReadSingleCap.c)
 *     SepRmDestroyCapTable @ 0x140696798 (SepRmDestroyCapTable.c)
 *     SmKmStoreFileCreateForIoType @ 0x140698F68 (SmKmStoreFileCreateForIoType.c)
 *     SmKmStoreFileGetExtents @ 0x140699274 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406994F8 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     SmKmStoreFileWriteHeader @ 0x1406998CC (SmKmStoreFileWriteHeader.c)
 *     VmCreateMemoryRange @ 0x14069B2E4 (VmCreateMemoryRange.c)
 *     WdipSemFreePool @ 0x14069BDFC (WdipSemFreePool.c)
 *     IoWMIExecuteMethod @ 0x14069C9EC (IoWMIExecuteMethod.c)
 *     IoWMISetSingleInstance @ 0x14069CCF0 (IoWMISetSingleInstance.c)
 *     IoWMISetSingleItem @ 0x14069CDF8 (IoWMISetSingleItem.c)
 *     IoWMISuggestInstanceName @ 0x14069CF14 (IoWMISuggestInstanceName.c)
 *     WmipGetSysIds @ 0x14069D690 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14069DE08 (WmipDereferenceEvent.c)
 *     WmipQueryAllDataMultiple @ 0x14069E48C (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x14069E80C (WmipQuerySingleMultiple.c)
 *     WmipMRCleanup @ 0x14069ECF4 (WmipMRCleanup.c)
 *     WmipGenerateBinaryMofNotification @ 0x14069F03C (WmipGenerateBinaryMofNotification.c)
 *     WmipUpdateDataSource @ 0x14069F36C (WmipUpdateDataSource.c)
 *     WmipUpdateModifyGuid @ 0x14069F6C0 (WmipUpdateModifyGuid.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A0764 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwTraceDeniedTokenCreation @ 0x1406A133C (EtwTraceDeniedTokenCreation.c)
 *     EtwpLogMemInfoWs @ 0x1406A1FFC (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406A258C (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpPerfMemInfoWork @ 0x1406A2848 (EtwpPerfMemInfoWork.c)
 *     EtwpSetPmcProfileSource @ 0x1406A2A78 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1406A2B88 (EtwpTraceHandle.c)
 *     EtwDeleteSiloState @ 0x1406A3110 (EtwDeleteSiloState.c)
 *     EtwpCapturePreviousRegistryData @ 0x1406A4724 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1406A4824 (EtwpCaptureRegistryData.c)
 *     EtwpRegTraceCallback @ 0x1406A48BC (EtwpRegTraceCallback.c)
 *     EtwpSendDbgId @ 0x1406A5450 (EtwpSendDbgId.c)
 *     EtwpTiQueryVad @ 0x1406A63DC (EtwpTiQueryVad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406A651C (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpEnumerateWorkingSet @ 0x1406A6DF0 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406A717C (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1406A7410 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1406A7568 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1406A7AC0 (EtwpProcessorRundown.c)
 *     EtwpFreeEventNameFilter @ 0x1406A9238 (EtwpFreeEventNameFilter.c)
 *     EtwpUpdatePidFilterData @ 0x1406A9280 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1406A931C (EtwpUpdateSchematizedFilterData.c)
 *     EtwpUpdateStringFilterData @ 0x1406A93DC (EtwpUpdateStringFilterData.c)
 *     EtwpAddWinRtProviderToSession @ 0x1406A96BC (EtwpAddWinRtProviderToSession.c)
 *     EtwpFreeStackCache @ 0x1406A9B44 (EtwpFreeStackCache.c)
 *     EtwpCancelMemoryPreservation @ 0x1406A9C3C (EtwpCancelMemoryPreservation.c)
 *     EtwpPreserveLogger @ 0x1406A9E8C (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1406AA0AC (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1406AA194 (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLogger @ 0x1406AA264 (EtwpSavePersistedLogger.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1406AA60C (EtwpSavePersistedLoggersWorker.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1406AAF50 (ExEnumerateSystemFirmwareTables.c)
 *     ExpGetDeviceDataInformation @ 0x1406AB248 (ExpGetDeviceDataInformation.c)
 *     ExpQueryChannelInformation @ 0x1406AB750 (ExpQueryChannelInformation.c)
 *     ExpQueryElamCertInfo @ 0x1406ABA40 (ExpQueryElamCertInfo.c)
 *     ExpQueryLegacyDriverInformation @ 0x1406ABD24 (ExpQueryLegacyDriverInformation.c)
 *     ExpQueryPortableWorkspaceEfiLauncherInformation @ 0x1406ABF58 (ExpQueryPortableWorkspaceEfiLauncherInformation.c)
 *     ExpStringCapture @ 0x1406AC570 (ExpStringCapture.c)
 *     ExpStringFree @ 0x1406AC658 (ExpStringFree.c)
 *     ExpWatchLicenseInfoWork @ 0x1406AC9EC (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1406ACE5C (NtDisplayString.c)
 *     ExDereferenceHandleDebugInfo @ 0x1406AD34C (ExDereferenceHandleDebugInfo.c)
 *     sub_1406AE414 @ 0x1406AE414 (sub_1406AE414.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AED54 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     sub_1406AF038 @ 0x1406AF038 (sub_1406AF038.c)
 *     ExpParseFastCacheHelper @ 0x1406AF5FC (ExpParseFastCacheHelper.c)
 *     ExSetFirmwareEnvironmentVariable @ 0x1406AFEC4 (ExSetFirmwareEnvironmentVariable.c)
 *     ExpConvertArcName @ 0x1406AFF50 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1406B0104 (ExpConvertSignatureName.c)
 *     ExpCreateOutputARC @ 0x1406B0314 (ExpCreateOutputARC.c)
 *     ExpCreateOutputSIGNATURE @ 0x1406B06A4 (ExpCreateOutputSIGNATURE.c)
 *     ExpFindArcName @ 0x1406B0860 (ExpFindArcName.c)
 *     ExpFindDiskSignature @ 0x1406B0B24 (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x1406B0D04 (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x1406B0F14 (ExpGetPartitionTableInfo.c)
 *     ExpParseEfiPath @ 0x1406B1174 (ExpParseEfiPath.c)
 *     ExpParseSignatureName @ 0x1406B139C (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x1406B16BC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1406B1E74 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x1406B278C (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1406B2DDC (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x1406B30A8 (ExpTranslateSymbolicLink.c)
 *     NtEnumerateBootEntries @ 0x1406B378C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3D2C (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4D28 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1406B5050 (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1406B5444 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1406B5644 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406B5970 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1406B5BDC (NtTranslateFilePath.c)
 *     ExpDereferenceHost @ 0x1406B69B0 (ExpDereferenceHost.c)
 *     ExpCovFreeUnloadedModuleEntry @ 0x1406B6DF8 (ExpCovFreeUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406B6F4C (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1406B71B8 (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1406B78B8 (ExpCovReadRequestBuffer.c)
 *     ExpProfileDelete @ 0x1406B80B8 (ExpProfileDelete.c)
 *     NtStartProfile @ 0x1406B823C (NtStartProfile.c)
 *     NtStopProfile @ 0x1406B8494 (NtStopProfile.c)
 *     CMFCheckAccess @ 0x1406B8680 (CMFCheckAccess.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B889C (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1406B8EA0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 *     CMFUnmapModules @ 0x1406B9C14 (CMFUnmapModules.c)
 *     sub_1406B9CE8 @ 0x1406B9CE8 (sub_1406B9CE8.c)
 *     WheaAddErrorSource @ 0x1406BA3A4 (WheaAddErrorSource.c)
 *     WheaUnregisterInUsePageOfflineNotification @ 0x1406BA758 (WheaUnregisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1406BAFA8 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1406BB1F8 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1406BB4C4 (WheapPfaMemoryCheck.c)
 *     WheapPfaReset @ 0x1406BB750 (WheapPfaReset.c)
 *     WheapPfaRetireExpiredMemoryEntries @ 0x1406BB818 (WheapPfaRetireExpiredMemoryEntries.c)
 *     WheapIsSqmLoggerRunning @ 0x1406BBA94 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406BBD24 (WheapSqmCollectPshedPluginTelemetry.c)
 *     sub_1406BCE84 @ 0x1406BCE84 (sub_1406BCE84.c)
 *     sub_1406BD49C @ 0x1406BD49C (sub_1406BD49C.c)
 *     sub_1406BDB14 @ 0x1406BDB14 (sub_1406BDB14.c)
 *     sub_1406BDF30 @ 0x1406BDF30 (sub_1406BDF30.c)
 *     sub_1406BE8E0 @ 0x1406BE8E0 (sub_1406BE8E0.c)
 *     sub_1406BF444 @ 0x1406BF444 (sub_1406BF444.c)
 *     sub_1406BFA70 @ 0x1406BFA70 (sub_1406BFA70.c)
 *     sub_1406C09AC @ 0x1406C09AC (sub_1406C09AC.c)
 *     SdbpFreePackageAttributes @ 0x1406C3208 (SdbpFreePackageAttributes.c)
 *     SddlpFreeUuidString @ 0x1406CC3D8 (SddlpFreeUuidString.c)
 *     SddlpReAlloc @ 0x1406CC3F0 (SddlpReAlloc.c)
 *     AdtpBuildGuidString @ 0x1406D02A8 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1406D03D0 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1406D048C (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1406D05E0 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x1406D0734 (AdtpBuildMacStrings.c)
 *     AdtpBuildRegistryValueString @ 0x1406D09CC (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorChangeString @ 0x1406D0C9C (AdtpBuildSecurityDescriptorChangeString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1406D0D60 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1406D0F58 (AdtpBuildSidListString.c)
 *     AdtpAppendString @ 0x1406D149C (AdtpAppendString.c)
 *     AdtpBuildObjectTypeStrings @ 0x1406D1B10 (AdtpBuildObjectTypeStrings.c)
 *     BcdEnumerateObjects @ 0x1406D2088 (BcdEnumerateObjects.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1406D2738 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1406D280C (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x1406D28CC (BiResolveLocateDevice.c)
 *     BiIsPortableWorkspaceBoot @ 0x1406D2B38 (BiIsPortableWorkspaceBoot.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1406D2BC4 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1406D2D58 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1406D2E50 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1406D2FF8 (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1406D3138 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x1406D3224 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1406D33E0 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1406D3524 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1406D3604 (BiBindEfiBootManager.c)
 *     BiBindEfiEntryToBcdObject @ 0x1406D38D4 (BiBindEfiEntryToBcdObject.c)
 *     BiBuildIdentifierList @ 0x1406D3A28 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x1406D3FB4 (BiCreateBootEntry.c)
 *     BiCreateEfiEntry @ 0x1406D4310 (BiCreateEfiEntry.c)
 *     BiCreateMergedBootEntry @ 0x1406D4498 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x1406D48E0 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1406D4A80 (BiExportEfiBootManager.c)
 *     BiFreeIdentifierList @ 0x1406D4E20 (BiFreeIdentifierList.c)
 *     BiGetDeviceFromEfiPath @ 0x1406D4E9C (BiGetDeviceFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D518C (BiGetObjectReferenceFromEfiEntry.c)
 *     BiGetSavedBootEntry @ 0x1406D5314 (BiGetSavedBootEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1406D5398 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1406D55CC (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1406D567C (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x1406D58FC (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1406D5A18 (BiUpdateBcdObject.c)
 *     BiUpdateEfiEntry @ 0x1406D5CF0 (BiUpdateEfiEntry.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5E64 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetSystemDisk @ 0x1406D5FB4 (SiGetSystemDisk.c)
 *     SiGetDriveLayoutInformation @ 0x1406D6188 (SiGetDriveLayoutInformation.c)
 *     SiDisambiguateSystemDevice @ 0x1406D63C8 (SiDisambiguateSystemDevice.c)
 *     SiGetEfiSystemDevice @ 0x1406D646C (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1406D67C8 (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x1406D6AA4 (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x1406D6BC8 (SiGetBiosSystemPartition.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x1406D6D00 (SiIsWinPeHardDiskZeroUfdBoot.c)
 *     _PnpCtxCloseMachine @ 0x1406D6EA4 (_PnpCtxCloseMachine.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x1406D7B0C (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406D8024 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1406D81F8 (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x1406D85A0 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x1406D8934 (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x1406D8F74 (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x1406D9330 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x1406D9C44 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x1406D9E08 (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406DA104 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x1406DA55C (_CmGetDevicesInBaseContainerList.c)
 *     _CmMoveBaseContainer @ 0x1406DA7B0 (_CmMoveBaseContainer.c)
 *     _CmGetMatchingFilteredDeviceListWorker @ 0x1406DB920 (_CmGetMatchingFilteredDeviceListWorker.c)
 *     _CmServiceFilterCallback @ 0x1406DBAC0 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceSiblings @ 0x1406DD82C (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406DDC68 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _SysCtxCloseMachine @ 0x1406DF8EC (_SysCtxCloseMachine.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DF998 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFC6C (_PnpGetPropertiesSecurityDescriptor.c)
 *     _PnpMultiSzDeleteString @ 0x1406E0030 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0128 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x1406E06D0 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1AC8 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E1FD0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2CD4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbDestroyDatabaseNode @ 0x1406E35CC (DrvDbDestroyDatabaseNode.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3658 (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x1406E4C1C (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x1406E4F50 (ArbQueryConflict.c)
 *     ArbRetestAllocation @ 0x1406E52BC (ArbRetestAllocation.c)
 *     MIDL_user_free @ 0x1406E54B0 (MIDL_user_free.c)
 *     VhdiVerifyBootDisk @ 0x1406E54BC (VhdiVerifyBootDisk.c)
 *     NtEnableLastKnownGood @ 0x1406E572C (NtEnableLastKnownGood.c)
 *     ObpGetSilosRootDirectory @ 0x1406E63A0 (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1406E6564 (RtlpLoadPolicyLanguageSpec.c)
 *     RtlpMuiRegConfigMatchesInstalled @ 0x1406E688C (RtlpMuiRegConfigMatchesInstalled.c)
 *     RtlpMuiRegLangInfoMatchesSpec @ 0x1406E70F8 (RtlpMuiRegLangInfoMatchesSpec.c)
 *     RtlpMuiRegResizeStringPool @ 0x1406E73C8 (RtlpMuiRegResizeStringPool.c)
 *     KdPullRemoteFile @ 0x1406F2368 (KdPullRemoteFile.c)
 *     ViThunkFreeSharedThunksArray @ 0x1406FE100 (ViThunkFreeSharedThunksArray.c)
 *     VfDriverUnloadImage @ 0x1406FE170 (VfDriverUnloadImage.c)
 *     IovUnloadDrivers @ 0x140701070 (IovUnloadDrivers.c)
 *     IovpBuildDriverObjectList @ 0x140701188 (IovpBuildDriverObjectList.c)
 *     VerifierExFreePool @ 0x1407023D0 (VerifierExFreePool.c)
 *     VerifierExFreePoolWithTag @ 0x1407023F0 (VerifierExFreePoolWithTag.c)
 *     VfFreeCapturedUnicodeString @ 0x140702868 (VfFreeCapturedUnicodeString.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140702A08 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407030B0 (ViInitializeLocalSystemDescriptor.c)
 *     VfDriverEnableVerifierForAll @ 0x140704C44 (VfDriverEnableVerifierForAll.c)
 *     VerifierIoDisconnectInterrupt @ 0x14070558C (VerifierIoDisconnectInterrupt.c)
 *     VerifierIoDisconnectInterruptEx @ 0x1407055C0 (VerifierIoDisconnectInterruptEx.c)
 *     ViAllocateMapRegisterFile @ 0x1407087CC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140709458 (ViFreeMapRegisterFile.c)
 *     ViHalFreeDomainCommonBuffer @ 0x140709A1C (ViHalFreeDomainCommonBuffer.c)
 *     ViReleaseDmaAdapter @ 0x14070A24C (ViReleaseDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14070A3DC (ViSpecialAllocateCommonBuffer.c)
 *     ViSpecialFreeCommonBuffer @ 0x14070A524 (ViSpecialFreeCommonBuffer.c)
 *     VfIoFreeIrp @ 0x14070BC68 (VfIoFreeIrp.c)
 *     ViIrpAllocateLockedPacket @ 0x14070C11C (ViIrpAllocateLockedPacket.c)
 *     ViPendingCompleteAfterWait @ 0x14070D284 (ViPendingCompleteAfterWait.c)
 *     ViPendingDelayCompletion @ 0x14070D3B0 (ViPendingDelayCompletion.c)
 *     VfInitializeBranchTracing @ 0x14070ECEC (VfInitializeBranchTracing.c)
 *     VfThunkApplyDriverAddedThunks @ 0x14070F3B8 (VfThunkApplyDriverAddedThunks.c)
 *     ViThunkRemoveImportEntry @ 0x14070FA70 (ViThunkRemoveImportEntry.c)
 *     ViThunkReplaceAllThunkedImports @ 0x14070FB64 (ViThunkReplaceAllThunkedImports.c)
 *     VfTargetDriversEnableVerifier @ 0x14070FE80 (VfTargetDriversEnableVerifier.c)
 *     VfTargetEtwRegister @ 0x14071002C (VfTargetEtwRegister.c)
 *     VfTargetEtwUnregister @ 0x140710114 (VfTargetEtwUnregister.c)
 *     ViTargetRemovingCheckEtwWmi @ 0x140710630 (ViTargetRemovingCheckEtwWmi.c)
 *     VfPoolCheckForLeaks @ 0x1407109DC (VfPoolCheckForLeaks.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140710B30 (ViPoolDelayFreeTrimThreadRoutine.c)
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
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     MiFreePoolPages @ 0x140018558 (MiFreePoolPages.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x14002D440 (PsBoostThreadIoEx.c)
 *     ObpDeferObjectDeletion @ 0x1400A7FB4 (ObpDeferObjectDeletion.c)
 *     ExpRemovePoolTrackerExpansion @ 0x1400AE30C (ExpRemovePoolTrackerExpansion.c)
 *     PspReturnResourceQuota @ 0x1400C6840 (PspReturnResourceQuota.c)
 *     MmIsSpecialPoolAddress @ 0x1400EB24C (MmIsSpecialPoolAddress.c)
 *     EtwTracePool @ 0x1401596BC (EtwTracePool.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     RtlpInterlockedPushEntrySList @ 0x140166E40 (RtlpInterlockedPushEntrySList.c)
 *     KeCheckForTimer @ 0x1401D3640 (KeCheckForTimer.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D39E0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MmFreeSpecialPool @ 0x1401EC0A4 (MmFreeSpecialPool.c)
 *     MmQuerySpecialPoolBlockSize @ 0x1401EC638 (MmQuerySpecialPoolBlockSize.c)
 *     MmQuerySpecialPoolBlockType @ 0x1401EC660 (MmQuerySpecialPoolBlockType.c)
 *     VerifierFreeTrackedPool @ 0x1401EEE28 (VerifierFreeTrackedPool.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F25D0 (MI_READ_PTE_LOCK_FREE.c)
 *     ObpPushStackInfo @ 0x1401FEDC0 (ObpPushStackInfo.c)
 *     ExpFreePoolChecks @ 0x14022D080 (ExpFreePoolChecks.c)
 *     ExpCheckForResource @ 0x14022DBC8 (ExpCheckForResource.c)
 *     ExpCheckForLookaside @ 0x14022E52C (ExpCheckForLookaside.c)
 *     ExpCheckForWorker @ 0x14022E8A4 (ExpCheckForWorker.c)
 *     ExDeferredFreePool @ 0x1402557B0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14041BF20 (MiSessionPoolVector.c)
 *     VfFreePoolNotification @ 0x140710968 (VfFreePoolNotification.c)
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
  struct _SLIST_ENTRY *ListEntry; // [rsp+E0h] [rbp+8h]
  char v117; // [rsp+F0h] [rbp+18h]
  unsigned int v118; // [rsp+F8h] [rbp+20h]

  ListEntry = (struct _SLIST_ENTRY *)P;
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
        ListEntry = (struct _SLIST_ENTRY *)(v70 + 4);
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
    if ( BugCheckParameter4 < qword_140327F30 || BugCheckParameter4 >= qword_140327F30 + 0xF8000000000LL )
    {
      if ( !qword_140326C30
        || BugCheckParameter4 < qword_140326C30
        || BugCheckParameter4 >= qword_140326C30 + (qword_140326C10 << 21)
        || (*(_BYTE *)(48
                     * ((*(_QWORD *)(((BugCheckParameter4 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) != 0x70 )
      {
        if ( BugCheckParameter4 >= qword_140326910 && BugCheckParameter4 < qword_140326910 + 0x8000000000LL )
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
