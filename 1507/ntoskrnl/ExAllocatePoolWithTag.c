/*
 * XREFs of ExAllocatePoolWithTag @ 0x140288E60
 * Callers:
 *     MiCreateCloneChain @ 0x140001300 (MiCreateCloneChain.c)
 *     MiCloneVads @ 0x140001EE4 (MiCloneVads.c)
 *     sub_1400059D8 @ 0x1400059D8 (sub_1400059D8.c)
 *     sub_140005E80 @ 0x140005E80 (sub_140005E80.c)
 *     IopBuildDeviceIoControlRequest @ 0x140006F40 (IopBuildDeviceIoControlRequest.c)
 *     IopBuildAsynchronousFsdRequest @ 0x140007270 (IopBuildAsynchronousFsdRequest.c)
 *     SepCaptureHandles @ 0x1400078F0 (SepCaptureHandles.c)
 *     SepSetTokenLowboxHandles @ 0x140007984 (SepSetTokenLowboxHandles.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140007EA4 (SepAppendAceToTokenDefaultDacl.c)
 *     ExAllocatePoolWithTagPriority @ 0x140013F48 (ExAllocatePoolWithTagPriority.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x1400156C0 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x140015930 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepMemAlloc @ 0x140015FA4 (AuthzBasepMemAlloc.c)
 *     EtwpEventWriteFull @ 0x1400182F0 (EtwpEventWriteFull.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400255E0 (DbgUnicodeStringToAnsiString.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140025AE4 (LdrUnloadAlternateResourceModuleEx.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140026540 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     PopFxQueryBiosDeviceName @ 0x14002733C (PopFxQueryBiosDeviceName.c)
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     SepMandatorySubProcessToken @ 0x14002B81C (SepMandatorySubProcessToken.c)
 *     EmpEvaluateTargetRule @ 0x14002C14C (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x14002C6C8 (EmpEvaluateNodeLink.c)
 *     SepCreateTokenEx @ 0x14002EC40 (SepCreateTokenEx.c)
 *     CcFindBitmapRangeToDirty @ 0x140030588 (CcFindBitmapRangeToDirty.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1400306D4 (FsRtlInitializeBaseMcbEx.c)
 *     CcAllocateInitializeMbcb @ 0x140030EBC (CcAllocateInitializeMbcb.c)
 *     CcWriteBehind @ 0x1400326B0 (CcWriteBehind.c)
 *     IoAllocateMdl @ 0x140033BF0 (IoAllocateMdl.c)
 *     MmProbeAndLockSelectedPages @ 0x140033EA4 (MmProbeAndLockSelectedPages.c)
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140045B50 (ExAllocatePoolWithQuotaTag.c)
 *     IopAllocateIrpPrivate @ 0x1400480F0 (IopAllocateIrpPrivate.c)
 *     SeSetLearningModeObjectInformation @ 0x14004E530 (SeSetLearningModeObjectInformation.c)
 *     MiGetInPageSupportBlock @ 0x14005EA80 (MiGetInPageSupportBlock.c)
 *     MmCreateMdl @ 0x1400627F4 (MmCreateMdl.c)
 *     MiExpandSystemCache @ 0x14006B790 (MiExpandSystemCache.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x14006D784 (FsRtlpOplockSendModernAppTermination.c)
 *     IopSetLockOperationProcess @ 0x14006DB64 (IopSetLockOperationProcess.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x1400709B0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     IopGetSetSpecificExtension @ 0x14007123C (IopGetSetSpecificExtension.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1400714D0 (FsRtlInsertPerFileObjectContext.c)
 *     IopAllocateFileObjectExtension @ 0x140071760 (IopAllocateFileObjectExtension.c)
 *     FsRtlCancelNotify @ 0x140074054 (FsRtlCancelNotify.c)
 *     WmipReceiveNotifications @ 0x140074DAC (WmipReceiveNotifications.c)
 *     EtwpAllocateFreeBuffers @ 0x140075268 (EtwpAllocateFreeBuffers.c)
 *     MiInitializeMdlPages @ 0x140076FA8 (MiInitializeMdlPages.c)
 *     MiObtainMdlCharges @ 0x140077BF0 (MiObtainMdlCharges.c)
 *     CcExtendVacbArray @ 0x140078038 (CcExtendVacbArray.c)
 *     MiGetWorkingSetInfoList @ 0x14007A1C0 (MiGetWorkingSetInfoList.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiAddViewsForSection @ 0x14008A3B0 (MiAddViewsForSection.c)
 *     MiFlushSectionInternal @ 0x14008D1E0 (MiFlushSectionInternal.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiAllocateAccessLog @ 0x140099C40 (MiAllocateAccessLog.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     PfSnGetFileInformation @ 0x1400B7EF0 (PfSnGetFileInformation.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400C7FC0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x1400C88C0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x1400CE500 (SeCaptureObjectTypeList.c)
 *     SePrivilegePolicyCheck @ 0x1400CE840 (SePrivilegePolicyCheck.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400D0A84 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopCaptureReasonContext @ 0x1400D156C (PopCaptureReasonContext.c)
 *     ExpExpandResourceOwnerTable @ 0x1400D6868 (ExpExpandResourceOwnerTable.c)
 *     IoBoostThreadIoPriority @ 0x1400D69B0 (IoBoostThreadIoPriority.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400D8828 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     StEtaStart @ 0x1400D8BCC (StEtaStart.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400D8CFC (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400D8F80 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400D9054 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     SmAlloc @ 0x1400D9FF4 (SmAlloc.c)
 *     ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400DA0AC (-SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1400DAF78 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     MmOutSwapWorkingSet @ 0x1400DC414 (MmOutSwapWorkingSet.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400DCE20 (MiAllocateWorkingSetSwapSupport.c)
 *     MiCreateMdl @ 0x1400DFC50 (MiCreateMdl.c)
 *     MiBuildMappedCluster @ 0x1400E4A80 (MiBuildMappedCluster.c)
 *     PpmParkSteerInterrupts @ 0x1400E87E0 (PpmParkSteerInterrupts.c)
 *     SmpKeyedStoreEntryGet @ 0x1400F0084 (SmpKeyedStoreEntryGet.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     CcAllocateInitializeBcb @ 0x1400F1B2C (CcAllocateInitializeBcb.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400F8170 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400F8690 (RtlpUpcaseUnicodeStringPrivate.c)
 *     MiInsertInSystemSpace @ 0x1400F8C80 (MiInsertInSystemSpace.c)
 *     MiViewMayContainPage @ 0x1400FA970 (MiViewMayContainPage.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     ExGetSessionPoolTagInfo @ 0x1400FEAA8 (ExGetSessionPoolTagInfo.c)
 *     FsRtlTruncateBaseMcb @ 0x140106844 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x140107328 (FsRtlAddEntry.c)
 *     PspInsertProperty @ 0x14010D534 (PspInsertProperty.c)
 *     MiReferenceIoPages @ 0x140116704 (MiReferenceIoPages.c)
 *     CcInitializeVolumeCacheMap @ 0x140117D58 (CcInitializeVolumeCacheMap.c)
 *     IoMakeAssociatedIrpPriv @ 0x140118234 (IoMakeAssociatedIrpPriv.c)
 *     WmipBuildTraceDeviceList @ 0x14011A6D4 (WmipBuildTraceDeviceList.c)
 *     IoAllocateWorkItem @ 0x14011B734 (IoAllocateWorkItem.c)
 *     PnpRemoveLockedDeviceNode @ 0x14011BB6C (PnpRemoveLockedDeviceNode.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x14011D5E4 (MmWaitMultipleForCacheManagerPrefetch.c)
 *     CcAsyncCopyRead @ 0x14011DCB4 (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x14011DF64 (CcPostWorkQueueAsyncRead.c)
 *     MiAllocateModWriterEntry @ 0x14011E6B8 (MiAllocateModWriterEntry.c)
 *     RtlpCreateHashTable @ 0x14011F4D0 (RtlpCreateHashTable.c)
 *     RtlpAllocateSecondLevelDirUsingFreeList @ 0x14011F638 (RtlpAllocateSecondLevelDirUsingFreeList.c)
 *     IoWMIWriteEvent @ 0x1401226E4 (IoWMIWriteEvent.c)
 *     MiExpandFlushMdl @ 0x14012359C (MiExpandFlushMdl.c)
 *     MiCreateZeroThreadContext @ 0x140123730 (MiCreateZeroThreadContext.c)
 *     SeLogAccessFailure @ 0x140124240 (SeLogAccessFailure.c)
 *     KeAllocateXStateContext @ 0x1401252C0 (KeAllocateXStateContext.c)
 *     PfSnTraceBufferAllocate @ 0x1401268E0 (PfSnTraceBufferAllocate.c)
 *     SepCaptureTokenSecurityOperations @ 0x140128A58 (SepCaptureTokenSecurityOperations.c)
 *     KsepPoolAllocatePaged @ 0x14012980C (KsepPoolAllocatePaged.c)
 *     ExAllocatePoolEx @ 0x14012A474 (ExAllocatePoolEx.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14012C120 (MiAllocatePfnRepurposeLogDispatch.c)
 *     RtlpAllowsLowBoxAccess @ 0x14012F0C8 (RtlpAllowsLowBoxAccess.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x140130874 (HvSynchronizeAndDropTemporaryBins.c)
 *     SepExpandSingletonArrays @ 0x1401309EC (SepExpandSingletonArrays.c)
 *     SepBuildCapPolicyTable @ 0x140130FF8 (SepBuildCapPolicyTable.c)
 *     ExAllocatePool @ 0x140131360 (ExAllocatePool.c)
 *     IopAllocateIrpExtension @ 0x140135D90 (IopAllocateIrpExtension.c)
 *     RtlExpandHashTable @ 0x140135DE8 (RtlExpandHashTable.c)
 *     ExAllocateCacheAwarePushLock @ 0x140138820 (ExAllocateCacheAwarePushLock.c)
 *     HalExamineMBR @ 0x1401389D8 (HalExamineMBR.c)
 *     PfFbBufferListAllocateTemporary @ 0x140138B08 (PfFbBufferListAllocateTemporary.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x14013C608 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiStoreWriteModifiedPages @ 0x14013D708 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14013E454 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpAllocate @ 0x14013FA1C (SmFpAllocate.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x140143B10 (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     SmArrayGrow @ 0x140144D5C (SmArrayGrow.c)
 *     PopGetCurrentWakeInfos @ 0x140149038 (PopGetCurrentWakeInfos.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x14014B7CC (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     MiGetWorkingSetInfo @ 0x14014ED08 (MiGetWorkingSetInfo.c)
 *     SmKmAllocateMdlForLock @ 0x14014F364 (SmKmAllocateMdlForLock.c)
 *     KiIntRedirectAllocateObject @ 0x14014FABC (KiIntRedirectAllocateObject.c)
 *     BgpFwAllocateMemory @ 0x1401525C4 (BgpFwAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140152BA8 (BgpFwQueryBootGraphicsInformation.c)
 *     VfAvlReserveNode @ 0x140154068 (VfAvlReserveNode.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401540CC (MiAddPrivateFixupEntryForSystemImage.c)
 *     MiSessionInsertImage @ 0x140154248 (MiSessionInsertImage.c)
 *     KiIntSteerConnect @ 0x1401558E8 (KiIntSteerConnect.c)
 *     IoSetCompletionRoutineEx @ 0x140156F28 (IoSetCompletionRoutineEx.c)
 *     ExAllocateTimerInternal @ 0x1401589E8 (ExAllocateTimerInternal.c)
 *     ExRegisterCallback @ 0x140158AE8 (ExRegisterCallback.c)
 *     IoAllocateDriverObjectExtension @ 0x1401593BC (IoAllocateDriverObjectExtension.c)
 *     IopAllocateErrorLogEntry @ 0x140159C00 (IopAllocateErrorLogEntry.c)
 *     PoClearPowerRequestInternalDeferred @ 0x14015A1E4 (PoClearPowerRequestInternalDeferred.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14015AEB8 (AdtpBuildAccessReasonAuditString.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14015BCDC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14015BF00 (ExpSaBinaryArrayInsert.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14015CAE0 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     PspReadDfssConfigurationValues @ 0x14015D3D4 (PspReadDfssConfigurationValues.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x14015D52C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     sub_14015E11C @ 0x14015E11C (sub_14015E11C.c)
 *     sub_14015E180 @ 0x14015E180 (sub_14015E180.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14015E210 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14015E3E4 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x14015E65C (RtlpMuiRegLoadLicInformation.c)
 *     SepInitProcessAuditSd @ 0x14015EE30 (SepInitProcessAuditSd.c)
 *     ExInitializeProcessor @ 0x14015F3F0 (ExInitializeProcessor.c)
 *     MiDescribePageRun @ 0x14015F634 (MiDescribePageRun.c)
 *     EmpQueueRuleUpdateState @ 0x14016183C (EmpQueueRuleUpdateState.c)
 *     SepCommonAccessCheckEx @ 0x140161A70 (SepCommonAccessCheckEx.c)
 *     MiInitializeNumaRanges @ 0x1401639AC (MiInitializeNumaRanges.c)
 *     AdtpBuildMultiSzStringListString @ 0x140164B58 (AdtpBuildMultiSzStringListString.c)
 *     SepAdtLogAuditRecord @ 0x140164DBC (SepAdtLogAuditRecord.c)
 *     SepAdtMarshallAuditRecord @ 0x140164F00 (SepAdtMarshallAuditRecord.c)
 *     IoRegisterPriorityCallback @ 0x1401658D0 (IoRegisterPriorityCallback.c)
 *     CcAllocateInitializeVacbArray @ 0x140166A8C (CcAllocateInitializeVacbArray.c)
 *     PopFxCreateDeviceCommon @ 0x140166F8C (PopFxCreateDeviceCommon.c)
 *     PopFxDuplicateUniqueId @ 0x14016711C (PopFxDuplicateUniqueId.c)
 *     PpmInstallNewIdleStates @ 0x1401685F8 (PpmInstallNewIdleStates.c)
 *     SepAdtDetermineInsertQueue @ 0x140168D80 (SepAdtDetermineInsertQueue.c)
 *     CcInitializeAsyncRead @ 0x140169C8C (CcInitializeAsyncRead.c)
 *     BapdpProcessEtwEvents @ 0x14016C1C0 (BapdpProcessEtwEvents.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14016C714 (EmpEvaluateUpdateRuleEvalState.c)
 *     PopGetDope @ 0x14016C9C0 (PopGetDope.c)
 *     ExpSaInitialize @ 0x14016CC14 (ExpSaInitialize.c)
 *     FsFilterInit @ 0x14016D484 (FsFilterInit.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016D60C (LdrpSetAlternateResourceModuleHandle.c)
 *     FsRtlpWaitOnIrp @ 0x14016E528 (FsRtlpWaitOnIrp.c)
 *     SepBuildDefaultCape @ 0x14016E890 (SepBuildDefaultCape.c)
 *     IopGetPhysicalMemoryBlock @ 0x14016EB88 (IopGetPhysicalMemoryBlock.c)
 *     FsRtlRegisterFileSystemFilterCallbacks @ 0x14016EF2C (FsRtlRegisterFileSystemFilterCallbacks.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14016EFB8 (MiInitializeWorkingSetManagerParameters.c)
 *     IopInitDumpCapsuleSupport @ 0x14016FFFC (IopInitDumpCapsuleSupport.c)
 *     SmFpPreAllocate @ 0x140170E0C (SmFpPreAllocate.c)
 *     PfFbBufferListAllocate @ 0x140171050 (PfFbBufferListAllocate.c)
 *     KiSwInterruptDispatch @ 0x14017C0E8 (KiSwInterruptDispatch.c)
 *     CcRegisterExternalCache @ 0x1401DCCB0 (CcRegisterExternalCache.c)
 *     CcDeferWrite @ 0x1401DCF50 (CcDeferWrite.c)
 *     CmLogMcUpdateStatus @ 0x1401E0138 (CmLogMcUpdateStatus.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x1401E1A58 (DbgkpWerAllocateNonpagedPool.c)
 *     FsRtlAllocatePool @ 0x1401E2C84 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x1401E2CF4 (FsRtlAllocatePoolWithTag.c)
 *     FsFilterAllocateCompletionStack @ 0x1401E3824 (FsFilterAllocateCompletionStack.c)
 *     FsRtlInsertPerFileContextInternal @ 0x1401E3B44 (FsRtlInsertPerFileContextInternal.c)
 *     FsRtlpPostStackOverflow @ 0x1401E46B4 (FsRtlpPostStackOverflow.c)
 *     FstubReadTableEFI @ 0x1401E498C (FstubReadTableEFI.c)
 *     HvlpLockPagesForTransfer @ 0x1401EE400 (HvlpLockPagesForTransfer.c)
 *     BgkDisplayString @ 0x1401F10DC (BgkDisplayString.c)
 *     IoRaiseHardError @ 0x1401F60B8 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401F6358 (IoRaiseInformationalHardError.c)
 *     IopGetSetStreamIdentifier @ 0x1401F69D0 (IopGetSetStreamIdentifier.c)
 *     IoQueryFullDriverPath @ 0x1401F70FC (IoQueryFullDriverPath.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401F737C (IopAdjustFileObjectKeepAliveCount.c)
 *     IoRequestDeviceEjectEx @ 0x1401FA174 (IoRequestDeviceEjectEx.c)
 *     PipCreateNewDependencyEdge @ 0x1401FA44C (PipCreateNewDependencyEdge.c)
 *     PiDevCfgQueryResolveValue @ 0x1401FBF38 (PiDevCfgQueryResolveValue.c)
 *     KdRegisterPowerHandler @ 0x1401FD9D4 (KdRegisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x1401FE2C8 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x1401FFEC8 (KeProcessorProfileControlArea.c)
 *     KeRegisterNmiCallback @ 0x14020007C (KeRegisterNmiCallback.c)
 *     KeStartProfile @ 0x140204D70 (KeStartProfile.c)
 *     KsepPoolAllocateNonPaged @ 0x14020C5AC (KsepPoolAllocateNonPaged.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x14021023C (MiReleaseOutSwappedProcessCommit.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MiPfIssueCoalescedSupport @ 0x1402191FC (MiPfIssueCoalescedSupport.c)
 *     MiSortPartitionMdls @ 0x14021E170 (MiSortPartitionMdls.c)
 *     MiInsertPteTracker @ 0x140226BDC (MiInsertPteTracker.c)
 *     MiAllocateCombineProto @ 0x140226FF8 (MiAllocateCombineProto.c)
 *     MiCombineWorkingSet @ 0x140227B38 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x14022B7E8 (MiSharePages.c)
 *     MmEnumerateBadPages @ 0x140232E1C (MmEnumerateBadPages.c)
 *     PpmQueryPlatformStateResidency @ 0x140235488 (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleVeto @ 0x1402362BC (PpmUpdateIdleVeto.c)
 *     PopFxRegisterPluginEx @ 0x14023891C (PopFxRegisterPluginEx.c)
 *     PpmSetSimulatedLoad @ 0x14023A99C (PpmSetSimulatedLoad.c)
 *     PoIssueCoalescingNotification @ 0x14023AB10 (PoIssueCoalescingNotification.c)
 *     PopUpdateWakeSource @ 0x14023AD90 (PopUpdateWakeSource.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x14023F0BC (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmAllocWmiEvent @ 0x140240598 (PpmAllocWmiEvent.c)
 *     PpmWmiIdleAccountingProcedure @ 0x140240754 (PpmWmiIdleAccountingProcedure.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1402418E8 (PpmEventTraceProcessorIdleAccounting.c)
 *     PsSetSiloObjectServerPropertyByPointer @ 0x14024411C (PsSetSiloObjectServerPropertyByPointer.c)
 *     DbgpInsertDebugPrintCallback @ 0x14024668C (DbgpInsertDebugPrintCallback.c)
 *     RtlpTraceDatabaseAllocate @ 0x14024AA54 (RtlpTraceDatabaseAllocate.c)
 *     NormalizationListEntry_Alloc @ 0x14024EDDC (NormalizationListEntry_Alloc.c)
 *     SepCopyObjectTypeList @ 0x14024F55C (SepCopyObjectTypeList.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14024F73C (SepCheckAndCopySelfRelativeSD.c)
 *     SepSetSingletonEntry @ 0x14024FEF0 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14025004C (SepValidateAndCopyGlobalEntry.c)
 *     SepFlattenAcl @ 0x1402501A8 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x140250318 (SepGetLearningModeObjectInformation.c)
 *     SepGetSidValuesDump @ 0x1402506C0 (SepGetSidValuesDump.c)
 *     SepGetTokenSessionMapEntry @ 0x140250784 (SepGetTokenSessionMapEntry.c)
 *     SeRmReferenceFindCapName @ 0x1402508BC (SeRmReferenceFindCapName.c)
 *     SepRmCapPoolExpand @ 0x140250A0C (SepRmCapPoolExpand.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140251F38 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252120 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x1402521D8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStoresEtaCheck@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140252B4C (-SmStoresEtaCheck@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x1402530B8 (-StCompactionPerformFile@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14025354C (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDmEtaQueueRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x1402543F0 (-StDmEtaQueueRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmSparseBitmapAlloc@?$ST_STORE@USM_TRAITS@@@@SAPEAX_K@Z @ 0x140255B74 (-StDmSparseBitmapAlloc@-$ST_STORE@USM_TRAITS@@@@SAPEAX_K@Z.c)
 *     ?StStagingRegionStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x140256858 (-StStagingRegionStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140259768 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14025987C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     VfAllocateDomainCommonBuffer @ 0x14025A4E8 (VfAllocateDomainCommonBuffer.c)
 *     MdlInvariantPreProcessing1 @ 0x14025AC9C (MdlInvariantPreProcessing1.c)
 *     WdipAccessCheck @ 0x14025BE34 (WdipAccessCheck.c)
 *     WmiVerifierCopyEvent @ 0x14025C064 (WmiVerifierCopyEvent.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14025E184 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x14025F478 (EtwpGetTrackingLockSlotForThread.c)
 *     ExRegisterBootDevice @ 0x140262824 (ExRegisterBootDevice.c)
 *     NtDrawText @ 0x140262F7C (NtDrawText.c)
 *     ExAllocateAutoExpandPushLock @ 0x1402633A8 (ExAllocateAutoExpandPushLock.c)
 *     ExCopyWakeTimerInfo @ 0x14026448C (ExCopyWakeTimerInfo.c)
 *     ExpHotAddProcessorToWorkers @ 0x140264F14 (ExpHotAddProcessorToWorkers.c)
 *     ExpAllocateAsid @ 0x140265030 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14026524C (ExpPrepareNewSvmDevice.c)
 *     WheapReportPersistedErrorRecord @ 0x140266568 (WheapReportPersistedErrorRecord.c)
 *     WheapAllocErrorRecord @ 0x1402669FC (WheapAllocErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x140266E7C (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140268010 (WheapSqmCollectWheaOscTelemetry.c)
 *     sub_140268E8C @ 0x140268E8C (sub_140268E8C.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14026CFDC (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14026DA4C (AdtpBuildStagingReasonAuditStringInternal.c)
 *     sub_140272EFC @ 0x140272EFC (sub_140272EFC.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     IopCaptureObjectName @ 0x1403EC9FC (IopCaptureObjectName.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403EEE9C (PfpStartLoggingHardFaultEvents.c)
 *     PopNewWakeInfo @ 0x1403EF2D0 (PopNewWakeInfo.c)
 *     PopGetHwConfigurationSignature @ 0x1403F0020 (PopGetHwConfigurationSignature.c)
 *     PopGetBitlockerKeyLocation @ 0x1403F0168 (PopGetBitlockerKeyLocation.c)
 *     PopCloneRange @ 0x1403F2280 (PopCloneRange.c)
 *     BapdRecordFirmwareBootStats @ 0x1403F66C8 (BapdRecordFirmwareBootStats.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1403F70CC (PfSnAllocateEnablePrefetcherTimer.c)
 *     PnprInitiateReplaceOperation @ 0x1403FFF60 (PnprInitiateReplaceOperation.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140402E6C (MiZeroAllPageFiles.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x140403C20 (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x1404043CC (ExGetNextWakeTime.c)
 *     ExpSystemErrorHandler2 @ 0x1404046E4 (ExpSystemErrorHandler2.c)
 *     WheaInitializeProcessor @ 0x140404D94 (WheaInitializeProcessor.c)
 *     MiAllocateChildVads @ 0x140406234 (MiAllocateChildVads.c)
 *     MiBuildNewCloneDescriptor @ 0x1404069E0 (MiBuildNewCloneDescriptor.c)
 *     CmpVEExecuteParseLogic @ 0x1404071F8 (CmpVEExecuteParseLogic.c)
 *     CmRealKCBToVirtualPath @ 0x140407BD4 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x140407F88 (CmpGetVirtualizationID.c)
 *     sub_140408690 @ 0x140408690 (sub_140408690.c)
 *     sub_140409274 @ 0x140409274 (sub_140409274.c)
 *     sub_140409614 @ 0x140409614 (sub_140409614.c)
 *     WmipUnregisterEtwProvider @ 0x14040A690 (WmipUnregisterEtwProvider.c)
 *     sub_14040A6E0 @ 0x14040A6E0 (sub_14040A6E0.c)
 *     sub_14040A84C @ 0x14040A84C (sub_14040A84C.c)
 *     sub_14040ABD4 @ 0x14040ABD4 (sub_14040ABD4.c)
 *     sub_14040C414 @ 0x14040C414 (sub_14040C414.c)
 *     IoVolumeDeviceToDosName @ 0x14040D36C (IoVolumeDeviceToDosName.c)
 *     PnpGetDeviceLocationStrings @ 0x14040D898 (PnpGetDeviceLocationStrings.c)
 *     RawInitializeVcb @ 0x14040E1C4 (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x14040E2E8 (ExAllocateCacheAwareRundownProtection.c)
 *     EtwpCaptureString @ 0x14040EEBC (EtwpCaptureString.c)
 *     SepGetLowBoxHandlesEntry @ 0x1404106F0 (SepGetLowBoxHandlesEntry.c)
 *     ObpParseSymbolicLink @ 0x140410E40 (ObpParseSymbolicLink.c)
 *     NtCreateSymbolicLinkObject @ 0x140411194 (NtCreateSymbolicLinkObject.c)
 *     SepGetLowBoxNumberEntry @ 0x140411948 (SepGetLowBoxNumberEntry.c)
 *     SepExpandDynamic @ 0x140411B54 (SepExpandDynamic.c)
 *     SepFilterToken @ 0x140411C6C (SepFilterToken.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14041374C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x14041382C (IopCreateSecurityDescriptorPerType.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404156FC (PspAllocateAndQueryNotificationChannel.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140416040 (PiDqGetRelativeObjectRegPath.c)
 *     RtlpAllocateAtom @ 0x140416BA8 (RtlpAllocateAtom.c)
 *     PnpConcatPWSTR @ 0x140416C20 (PnpConcatPWSTR.c)
 *     PiUEventInitClientRegistrationContext @ 0x140416D38 (PiUEventInitClientRegistrationContext.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     PspEstablishJobHierarchy @ 0x14041B81C (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x14041BBF8 (MmLinkJobProcess.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 *     MiCreatePebOrTeb @ 0x140421270 (MiCreatePebOrTeb.c)
 *     MiMapViewOfImageSection @ 0x140421990 (MiMapViewOfImageSection.c)
 *     EtwpEnumerateAddressSpace @ 0x140425680 (EtwpEnumerateAddressSpace.c)
 *     IopQueryNameInternal @ 0x140426C40 (IopQueryNameInternal.c)
 *     CmpGetValueData @ 0x140428050 (CmpGetValueData.c)
 *     CmpAddInfoAfterParseFailure @ 0x14042A390 (CmpAddInfoAfterParseFailure.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14042D0F4 (AlpcpAllocateCompletionPacketLookaside.c)
 *     PfpFileBuildReadList @ 0x14042D4A4 (PfpFileBuildReadList.c)
 *     ExpQuerySystemInformation @ 0x14042E880 (ExpQuerySystemInformation.c)
 *     SepDuplicateToken @ 0x140435D60 (SepDuplicateToken.c)
 *     SepSetTokenCapabilities @ 0x140436FA8 (SepSetTokenCapabilities.c)
 *     SepSetTokenPackage @ 0x1404370F0 (SepSetTokenPackage.c)
 *     ExpWnfResolveScopeInstance @ 0x1404371A0 (ExpWnfResolveScopeInstance.c)
 *     PnpGetObjectProperty @ 0x140437764 (PnpGetObjectProperty.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140438E44 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlObjectActionCallback @ 0x140439150 (PiPnpRtlObjectActionCallback.c)
 *     FsRtlAddToTunnelCache @ 0x140439F9C (FsRtlAddToTunnelCache.c)
 *     FsRtlFindInTunnelCache @ 0x14043A2FC (FsRtlFindInTunnelCache.c)
 *     PnpUnicodeStringToWstr @ 0x14043AC54 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14043AE64 (PiPnpRtlInterfaceFilterCallback.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043AFA8 (PiPnpRtlObjectEventCreate.c)
 *     PiDqPnPGetObjectProperty @ 0x14043B1A0 (PiDqPnPGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x14043B32C (PnpAllocatePWSTR.c)
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x14043C008 (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x14043C0E0 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PiPnpRtlCmActionCallback @ 0x14043C5D4 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043CBC8 (_CmOpenDeviceRegKeyWorker.c)
 *     _PnpRegQueryValueIndirect @ 0x14043DFF4 (_PnpRegQueryValueIndirect.c)
 *     _PnpOpenPropertiesKey @ 0x14043E2E0 (_PnpOpenPropertiesKey.c)
 *     PiDqQueryEvaluateFilter @ 0x14043E724 (PiDqQueryEvaluateFilter.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x14043EF34 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x14043FBF0 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x140440170 (_CmOpenCommonClassRegKeyWorker.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x1404407EC (PiDqQueryActionQueueEntryCreate.c)
 *     PiCMGetRegistryProperty @ 0x140440870 (PiCMGetRegistryProperty.c)
 *     PiCMGetObjectProperty @ 0x140440E88 (PiCMGetObjectProperty.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x140441C48 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqActionDataCreate @ 0x1404424C4 (PiDqActionDataCreate.c)
 *     PiDqActionDataGetRequestedProperties @ 0x1404426B8 (PiDqActionDataGetRequestedProperties.c)
 *     MiParseImageCfgBits @ 0x140442CC0 (MiParseImageCfgBits.c)
 *     PsGetAllocatedFullProcessImageName @ 0x140443A34 (PsGetAllocatedFullProcessImageName.c)
 *     CmpAddSecurityCellToCache @ 0x140447E14 (CmpAddSecurityCellToCache.c)
 *     CmpLockIXLockIntent @ 0x140448044 (CmpLockIXLockIntent.c)
 *     CmpInitHiveFromFile @ 0x14044A738 (CmpInitHiveFromFile.c)
 *     CmpDoFileWrite @ 0x14044ACA4 (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x14044B65C (CmpQueryFileSecurityDescriptor.c)
 *     HvStoreModifiedData @ 0x14044D040 (HvStoreModifiedData.c)
 *     MiAllocateFixupVad @ 0x14044D734 (MiAllocateFixupVad.c)
 *     HvpGenerateLogEntry @ 0x14044D908 (HvpGenerateLogEntry.c)
 *     sub_140452868 @ 0x140452868 (sub_140452868.c)
 *     MiRememberUnloadedDriver @ 0x14045342C (MiRememberUnloadedDriver.c)
 *     PfpRpCHashGrow @ 0x1404536C4 (PfpRpCHashGrow.c)
 *     PfpRpCHashDeleteEntries @ 0x140453A14 (PfpRpCHashDeleteEntries.c)
 *     PfSetSuperfetchInformation @ 0x140454728 (PfSetSuperfetchInformation.c)
 *     PfpRpControlRequestCopy @ 0x140455248 (PfpRpControlRequestCopy.c)
 *     PfpPrefetchRequest @ 0x1404558A8 (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x140455A8C (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x140456460 (PfpVolumeOpenAndVerify.c)
 *     PfSnOpenVolumesForPrefetch @ 0x140456B84 (PfSnOpenVolumesForPrefetch.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     IopGetDeviceInterfaces @ 0x140457F6C (IopGetDeviceInterfaces.c)
 *     PfSnPreallocatePrefetchHeader @ 0x140458C1C (PfSnPreallocatePrefetchHeader.c)
 *     NtFlushBuffersFileEx @ 0x140459AD0 (NtFlushBuffersFileEx.c)
 *     PiSwInterfaceCreate @ 0x14045A278 (PiSwInterfaceCreate.c)
 *     PiSwDeviceCreate @ 0x14045ACDC (PiSwDeviceCreate.c)
 *     PiSwPdoPnPDispatch @ 0x14045ADD4 (PiSwPdoPnPDispatch.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x14045B338 (PiSwDeviceMakeCompatibleIds.c)
 *     PnpCopyDevPropertyArray @ 0x14045B858 (PnpCopyDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x14045B91C (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x14045B9B8 (PiSwPnPInfoInit.c)
 *     PnpAllocateMultiSZ @ 0x14045BA80 (PnpAllocateMultiSZ.c)
 *     PiSwIrpStartCreateWorker @ 0x14045BC94 (PiSwIrpStartCreateWorker.c)
 *     IopDeviceObjectFromSymbolicName @ 0x14045BFC8 (IopDeviceObjectFromSymbolicName.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x14045C248 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     IopQueryDeviceResources @ 0x14045CCC0 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14045D048 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14045D730 (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x14045DC54 (PiUEventProcessBroadcastNotifications.c)
 *     PnpProcessAssignResources @ 0x14045E340 (PnpProcessAssignResources.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14045F46C (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x14045F770 (PiUEventNotifyClient.c)
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 *     PnpInsertEventInQueue @ 0x14046093C (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x140460BD4 (PnpCreateDeviceEventEntry.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404612A4 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PnpDeviceCompletionRequestCreate @ 0x140461A8C (PnpDeviceCompletionRequestCreate.c)
 *     ObSetDirectoryDeviceMap @ 0x14046213C (ObSetDirectoryDeviceMap.c)
 *     EtwpAddProviderToSession @ 0x140466298 (EtwpAddProviderToSession.c)
 *     EtwpFindDebugId @ 0x1404663D8 (EtwpFindDebugId.c)
 *     PsInitializeFullProcessImageName @ 0x140466C64 (PsInitializeFullProcessImageName.c)
 *     CmpCheckWrpKeyAccess @ 0x140466E0C (CmpCheckWrpKeyAccess.c)
 *     MiAllocateVad @ 0x140468608 (MiAllocateVad.c)
 *     PspAllocateProcess @ 0x140468798 (PspAllocateProcess.c)
 *     ObCheckRefTraceProcess @ 0x14046AC74 (ObCheckRefTraceProcess.c)
 *     SepAddLuidToIndexEntry @ 0x14046AD50 (SepAddLuidToIndexEntry.c)
 *     MiCompressRelocations @ 0x14046B180 (MiCompressRelocations.c)
 *     SeCaptureAcl @ 0x14046BDC8 (SeCaptureAcl.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14046E008 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtUserRightAdjusted @ 0x14046E0F4 (SepAdtUserRightAdjusted.c)
 *     SepCreateClaimAttributes @ 0x14046E408 (SepCreateClaimAttributes.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     ObpCaptureBoundaryDescriptor @ 0x14046FBA0 (ObpCaptureBoundaryDescriptor.c)
 *     MiCreateDataFileMap @ 0x1404706C4 (MiCreateDataFileMap.c)
 *     SeCaptureSid @ 0x140470AC8 (SeCaptureSid.c)
 *     PfSnPopulateReadList @ 0x1404733A0 (PfSnPopulateReadList.c)
 *     AlpcpAllocateBlob @ 0x140475B60 (AlpcpAllocateBlob.c)
 *     AlpcAddHandleTableEntry @ 0x140475C64 (AlpcAddHandleTableEntry.c)
 *     SeQueryInformationToken @ 0x140481E90 (SeQueryInformationToken.c)
 *     SepCaptureUnicodeStringArray @ 0x140485B70 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x140485DA0 (SeCaptureUnicodeStringStructures.c)
 *     ObLogSecurityDescriptor @ 0x140486480 (ObLogSecurityDescriptor.c)
 *     RtlpCombineAcls @ 0x140487120 (RtlpCombineAcls.c)
 *     RtlpNewSecurityObject @ 0x140488DB0 (RtlpNewSecurityObject.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14048AB10 (PfpCopyUserPfnPrioRequest.c)
 *     ObpAllocateObject @ 0x14048B260 (ObpAllocateObject.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     ObpCaptureObjectName @ 0x1404900F0 (ObpCaptureObjectName.c)
 *     ObpLookupObjectName @ 0x140491C10 (ObpLookupObjectName.c)
 *     ObWaitForMultipleObjects @ 0x140495AC0 (ObWaitForMultipleObjects.c)
 *     CmpCallCallBacks @ 0x140496120 (CmpCallCallBacks.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14049CC90 (AlpcpCaptureMessageDataSafe.c)
 *     MmPrefetchPagesEx @ 0x14049D750 (MmPrefetchPagesEx.c)
 *     MiPfPrepareSequentialReadList @ 0x14049D9A0 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14049E0C0 (MiPfPrepareReadList.c)
 *     CmpAllocate @ 0x1404A02B8 (CmpAllocate.c)
 *     CmpClaimGlobalQuota @ 0x1404A0314 (CmpClaimGlobalQuota.c)
 *     HvpFindNextDirtyBlock @ 0x1404A0C4C (HvpFindNextDirtyBlock.c)
 *     EtwpRealtimeCreateLogfile @ 0x1404A13F4 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x1404A264C (EtwpRealtimeFlushSavedBuffers.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404A5A14 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404A6118 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlpAllocateOplock @ 0x1404A64EC (FsRtlpAllocateOplock.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404A6B90 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyInitializeSync @ 0x1404A7068 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404A70C4 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404A74B4 (FsRtlNotifyFilterReportChange.c)
 *     sub_1404A8518 @ 0x1404A8518 (sub_1404A8518.c)
 *     EtwpStartAutoLogger @ 0x1404A887C (EtwpStartAutoLogger.c)
 *     WmipCachePtrs @ 0x1404A9898 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x1404A9958 (WmipSendGuidUpdateNotifications.c)
 *     WmipSendEnableDisableRequest @ 0x1404A9BE0 (WmipSendEnableDisableRequest.c)
 *     WmipAddProviderIdToPIList @ 0x1404A9F84 (WmipAddProviderIdToPIList.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1404AA860 (RtlpAllocDeallocQueryBuffer.c)
 *     WmipSDRegistryQueryRoutine @ 0x1404AAF84 (WmipSDRegistryQueryRoutine.c)
 *     EtwpFinalizeHeader @ 0x1404AB82C (EtwpFinalizeHeader.c)
 *     EtwpUpdateFileHeader @ 0x1404AC4DC (EtwpUpdateFileHeader.c)
 *     EtwpCreateNtFileName @ 0x1404AC9D0 (EtwpCreateNtFileName.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1404ACABC (EtwpRealtimeNotifyConsumers.c)
 *     CmpInitializeHive @ 0x1404ACE6C (CmpInitializeHive.c)
 *     CmCheckRegistry @ 0x1404ADFB0 (CmCheckRegistry.c)
 *     CmpCheckRegistry2 @ 0x1404AE1C0 (CmpCheckRegistry2.c)
 *     CmpCanGrowHive @ 0x1404AF554 (CmpCanGrowHive.c)
 *     HvpMapHiveImageFromFile @ 0x1404AF8C8 (HvpMapHiveImageFromFile.c)
 *     HvWriteHivePrimaryFile @ 0x1404AFC20 (HvWriteHivePrimaryFile.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404AFEC4 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     EtwpInitLoggerContext @ 0x1404B0048 (EtwpInitLoggerContext.c)
 *     MiExtendSection @ 0x1404B0DE8 (MiExtendSection.c)
 *     MiRevertRelocatedImagePfn @ 0x1404B1740 (MiRevertRelocatedImagePfn.c)
 *     MiCreatePagingFileMap @ 0x1404B258C (MiCreatePagingFileMap.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404B4A40 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAddSecureEntry @ 0x1404B5A90 (MiAddSecureEntry.c)
 *     MiMapViewOfDataSection @ 0x1404B64E0 (MiMapViewOfDataSection.c)
 *     MiInsertSharedCommitNode @ 0x1404B7640 (MiInsertSharedCommitNode.c)
 *     MiCopyToCfgBitMap @ 0x1404B88E0 (MiCopyToCfgBitMap.c)
 *     MiAllocateVirtualMemory @ 0x1404BA9D0 (MiAllocateVirtualMemory.c)
 *     MmCopyVirtualMemory @ 0x1404BD870 (MmCopyVirtualMemory.c)
 *     ObpCallPreOperationCallbacks @ 0x1404BE7F0 (ObpCallPreOperationCallbacks.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     CmpGetSymbolicLink @ 0x1404C5480 (CmpGetSymbolicLink.c)
 *     CmpConstructName @ 0x1404C5EC0 (CmpConstructName.c)
 *     SepCreateImpersonationTokenDacl @ 0x1404C9270 (SepCreateImpersonationTokenDacl.c)
 *     SeCaptureSecurityDescriptor @ 0x1404C9790 (SeCaptureSecurityDescriptor.c)
 *     CmpAllocateKeyControlBlock @ 0x1404CBB90 (CmpAllocateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1404CBDC0 (CmpGetNameControlBlock.c)
 *     PfpRpFileKeyUpdate @ 0x1404CC0A0 (PfpRpFileKeyUpdate.c)
 *     SeCaptureSidAndAttributesArray @ 0x1404CCC50 (SeCaptureSidAndAttributesArray.c)
 *     RtlpSetSecurityObject @ 0x1404CD280 (RtlpSetSecurityObject.c)
 *     SepAppendAceToTokenObjectAcl @ 0x1404CF990 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x1404CFBCC (ObpGetObjectSecurity.c)
 *     SepLengthSidAndAttributesArray @ 0x1404D009C (SepLengthSidAndAttributesArray.c)
 *     IopGetLegacyVetoListDrivers @ 0x1404D0148 (IopGetLegacyVetoListDrivers.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x1404D2818 (EtwpGetGuidSecurityDescriptor.c)
 *     EtwpSetProviderTraitsUm @ 0x1404D2CA0 (EtwpSetProviderTraitsUm.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404D3F80 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpAllocGuidEntry @ 0x1404D4290 (EtwpAllocGuidEntry.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1404D49E4 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     EtwpQueueNotification @ 0x1404D5430 (EtwpQueueNotification.c)
 *     EtwpAddDataSource @ 0x1404D5690 (EtwpAddDataSource.c)
 *     EtwpAllocDataBlock @ 0x1404D5CB4 (EtwpAllocDataBlock.c)
 *     EtwpUpdateFilterData @ 0x1404D6208 (EtwpUpdateFilterData.c)
 *     EtwpEnableTrace @ 0x1404D720C (EtwpEnableTrace.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404D93C4 (PnpCheckDeviceIdsChanged.c)
 *     ExUpdateLicenseData_0 @ 0x1404D95E0 (ExUpdateLicenseData_0.c)
 *     sub_1404DAD40 @ 0x1404DAD40 (sub_1404DAD40.c)
 *     sub_1404DAE70 @ 0x1404DAE70 (sub_1404DAE70.c)
 *     PiCMGetObjectList @ 0x1404DBAE4 (PiCMGetObjectList.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404DD708 (DrvDbGetDriverPackageMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404DE5F8 (_RegRtlCreateTreeTransacted.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E0000 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x1404E0880 (PiDmCacheDataEncode.c)
 *     PopLogDisabledSleepReason @ 0x1404E0DAC (PopLogDisabledSleepReason.c)
 *     PiControlGetSetDeviceStatus @ 0x1404E1D68 (PiControlGetSetDeviceStatus.c)
 *     PipCallDriverAddDevice @ 0x1404E231C (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E2B34 (PnpCallDriverQueryServiceHelper.c)
 *     IoGetDeviceProperty @ 0x1404E2C80 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1404E3234 (PiGetDeviceRegProperty.c)
 *     IopProcessSetInterfaceState @ 0x1404E3518 (IopProcessSetInterfaceState.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1404E3A00 (IopBuildGlobalSymbolicLinkString.c)
 *     IopAllocateUnicodeString @ 0x1404E3B10 (IopAllocateUnicodeString.c)
 *     PoRegisterPowerSettingCallback @ 0x1404E4240 (PoRegisterPowerSettingCallback.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404E4560 (PpForEachDeviceInstanceDriver.c)
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
 *     CmpParseCacheAllocEntry @ 0x1404EA4A4 (CmpParseCacheAllocEntry.c)
 *     CmpInitializeKcbCache @ 0x1404EA528 (CmpInitializeKcbCache.c)
 *     CmpInitCmRM @ 0x1404EABF8 (CmpInitCmRM.c)
 *     CmpAddToHiveFileList @ 0x1404EBEEC (CmpAddToHiveFileList.c)
 *     CmLoadKey @ 0x1404EC054 (CmLoadKey.c)
 *     CmpQueryNameString @ 0x1404EC478 (CmpQueryNameString.c)
 *     CmpRecordUnloadEventForHive @ 0x1404ED934 (CmpRecordUnloadEventForHive.c)
 *     CmpLogCheckpoint @ 0x1404EEB78 (CmpLogCheckpoint.c)
 *     CmSnapshotRMTxArray @ 0x1404EF218 (CmSnapshotRMTxArray.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1404F0898 (CmpCommitDeleteValueKeyUoW.c)
 *     CmpSearchAddTrans @ 0x1404F0F50 (CmpSearchAddTrans.c)
 *     CmpCommitSetValueKeyUoW @ 0x1404F19C4 (CmpCommitSetValueKeyUoW.c)
 *     CmAddLogForAction @ 0x1404F1E20 (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x1404F2550 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1404F266C (CmpDoTransWriteLogRecord.c)
 *     CmpAllocateUnitOfWork @ 0x1404F3314 (CmpAllocateUnitOfWork.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404F449C (PoDiagCaptureUsermodeStack.c)
 *     ExGetPoolTagInfo @ 0x1404F44F4 (ExGetPoolTagInfo.c)
 *     PfSnPrefetchScenario @ 0x1404F502C (PfSnPrefetchScenario.c)
 *     PfSnGetPrefetchInstructions @ 0x1404F61EC (PfSnGetPrefetchInstructions.c)
 *     PfSnBuildDumpFromTrace @ 0x1404F70F4 (PfSnBuildDumpFromTrace.c)
 *     PfTCreateTraceDump @ 0x1404F87C0 (PfTCreateTraceDump.c)
 *     PfSnScenarioAlloc @ 0x1404F9220 (PfSnScenarioAlloc.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404FB194 (EtwpCrimsonProvEnableCallback.c)
 *     NtSetInformationVirtualMemory @ 0x1404FB5E8 (NtSetInformationVirtualMemory.c)
 *     MiBuildImageControlArea @ 0x1404FC19C (MiBuildImageControlArea.c)
 *     ExpWnfLookupPermanentName @ 0x1404FE56C (ExpWnfLookupPermanentName.c)
 *     PopUmpoProcessPowerMessage @ 0x1404FFB68 (PopUmpoProcessPowerMessage.c)
 *     ExpAllocateStringRoutine @ 0x1404FFFAC (ExpAllocateStringRoutine.c)
 *     PopSetPowerSettingValue @ 0x1404FFFC0 (PopSetPowerSettingValue.c)
 *     ExpWnfCreateNameInstance @ 0x1405023B4 (ExpWnfCreateNameInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x140503024 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x14050395C (ExpWnfWriteStateData.c)
 *     PspQueryRateControlHistory @ 0x140506D2C (PspQueryRateControlHistory.c)
 *     IopCreateFile @ 0x14050A2E0 (IopCreateFile.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x14050B22C (FsRtlAllocateExtraCreateParameter.c)
 *     EtwpQueryProcessCommandLine @ 0x14050C998 (EtwpQueryProcessCommandLine.c)
 *     sub_140511984 @ 0x140511984 (sub_140511984.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 *     MiCreateVadEventBitmap @ 0x14051C46C (MiCreateVadEventBitmap.c)
 *     MmGetPhysicalMemoryRanges @ 0x14051CF60 (MmGetPhysicalMemoryRanges.c)
 *     sub_14051D108 @ 0x14051D108 (sub_14051D108.c)
 *     NtQueryLicenseValue @ 0x14051D354 (NtQueryLicenseValue.c)
 *     ExpGenuinePolicyPostProcess @ 0x14051DEEC (ExpGenuinePolicyPostProcess.c)
 *     AlpcpCaptureMessageData @ 0x140523318 (AlpcpCaptureMessageData.c)
 *     ExpAllocateHandleTable @ 0x140523D44 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x140523FC0 (ExpAllocateTablePagedPoolNoZero.c)
 *     ObpInsertHandleCount @ 0x140524B64 (ObpInsertHandleCount.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x140524EA0 (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x140525110 (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x140525750 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x140526A90 (SepProbeAndCaptureString_U.c)
 *     AlpcpInitializeCompletionList @ 0x14052CDBC (AlpcpInitializeCompletionList.c)
 *     SeAppendPrivileges @ 0x14052D500 (SeAppendPrivileges.c)
 *     SepInformLsaOfDeletedLogon @ 0x14052E598 (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14052E744 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14052EB48 (SepInformFileSystemsOfDeletedLogon.c)
 *     CcCreateVacbArray @ 0x14052FC9C (CcCreateVacbArray.c)
 *     _RegRtlQueryValue @ 0x140530770 (_RegRtlQueryValue.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140532058 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     MiGetCcAccessLog @ 0x1405323EC (MiGetCcAccessLog.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     PiBuildDeviceNodeInstancePath @ 0x140534E10 (PiBuildDeviceNodeInstancePath.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x140535314 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1405361F8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpAllocateCriticalMemory @ 0x140536EA0 (PnpAllocateCriticalMemory.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x140537FFC (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PnpDisableDeviceInterfaces @ 0x140538D8C (PnpDisableDeviceInterfaces.c)
 *     PnpUnloadAttachedDriver @ 0x1405395A8 (PnpUnloadAttachedDriver.c)
 *     PiSwAddPdoAssociation @ 0x14053A124 (PiSwAddPdoAssociation.c)
 *     ObpInsertDirectoryEntry @ 0x14053A340 (ObpInsertDirectoryEntry.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     MUIInitializeResourceLock @ 0x14053B410 (MUIInitializeResourceLock.c)
 *     SepCreateLogonSessionTrack @ 0x14053C348 (SepCreateLogonSessionTrack.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 *     PspAllocateRateControl @ 0x14053CE10 (PspAllocateRateControl.c)
 *     SepUpdateLogonSessionTrack @ 0x14053D66C (SepUpdateLogonSessionTrack.c)
 *     AlpcpAllocateMessageFunction @ 0x1405402B8 (AlpcpAllocateMessageFunction.c)
 *     PiQueryRemovableDeviceOverride @ 0x140540D3C (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x140540FE4 (PipFindDeviceOverrideEntry.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x140542C64 (PiDqObjectActionQueueEntryCreate.c)
 *     NtRemoveIoCompletionEx @ 0x1405432F8 (NtRemoveIoCompletionEx.c)
 *     PspAssignProcessQuotaBlock @ 0x140543A18 (PspAssignProcessQuotaBlock.c)
 *     PfSnBeginTrace @ 0x140543FC8 (PfSnBeginTrace.c)
 *     SepDuplicateSid @ 0x1405448BC (SepDuplicateSid.c)
 *     sub_140544F58 @ 0x140544F58 (sub_140544F58.c)
 *     CmpMarkIndexDirty @ 0x1405451A8 (CmpMarkIndexDirty.c)
 *     ExpWnfCreateProcessContext @ 0x1405458E0 (ExpWnfCreateProcessContext.c)
 *     ConstraintEval @ 0x140547464 (ConstraintEval.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x140547B70 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x140547CC4 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x140548108 (SepCaptureInt64Array.c)
 *     PiDqSerializationAlloc @ 0x14054836C (PiDqSerializationAlloc.c)
 *     PiDqQueryCreate @ 0x1405483F0 (PiDqQueryCreate.c)
 *     IopSymlinkRememberJunction @ 0x14054891C (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 *     IoQueryFileDosDeviceName @ 0x140549C1C (IoQueryFileDosDeviceName.c)
 *     EtwpProcessThreadImageRundown @ 0x14054B004 (EtwpProcessThreadImageRundown.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 *     RtlGetNtProductType @ 0x14054E0B0 (RtlGetNtProductType.c)
 *     MiCreateFixupRecord @ 0x14054E34C (MiCreateFixupRecord.c)
 *     PnpBusTypeGuidGetIndex @ 0x14054E968 (PnpBusTypeGuidGetIndex.c)
 *     PiNormalizeDeviceText @ 0x14054F2C8 (PiNormalizeDeviceText.c)
 *     SepAssemblePrivileges @ 0x14054FBD0 (SepAssemblePrivileges.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1405506E4 (PiCMGetRelatedDeviceInstance.c)
 *     PfSnArrayGrow @ 0x140550980 (PfSnArrayGrow.c)
 *     PiCMGetDeviceIdList @ 0x140550A70 (PiCMGetDeviceIdList.c)
 *     EtwpUpdateDisallowedGuids @ 0x14055146C (EtwpUpdateDisallowedGuids.c)
 *     PipAllocateDeviceNode @ 0x1405532C0 (PipAllocateDeviceNode.c)
 *     AlpcpAllocateBuffer @ 0x1405538A0 (AlpcpAllocateBuffer.c)
 *     PiDqTraceQueryCreate @ 0x140554728 (PiDqTraceQueryCreate.c)
 *     PipGenerateContainerID @ 0x140554BA8 (PipGenerateContainerID.c)
 *     MIDL_user_allocate @ 0x140554F80 (MIDL_user_allocate.c)
 *     EtwpQueueReply @ 0x140555B84 (EtwpQueueReply.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x140555D3C (PiPnpRtlGetFilteredDeviceList.c)
 *     MiCreateRotateView @ 0x1405563AC (MiCreateRotateView.c)
 *     PiDeferSetInterfaceState @ 0x140556B68 (PiDeferSetInterfaceState.c)
 *     sub_140556E48 @ 0x140556E48 (sub_140556E48.c)
 *     PiDqGrowPropertyArray @ 0x1405577CC (PiDqGrowPropertyArray.c)
 *     WmipSecurityMethod @ 0x140557AFC (WmipSecurityMethod.c)
 *     PiDqAllocateGenericTableEntry @ 0x14055806C (PiDqAllocateGenericTableEntry.c)
 *     CmpAdjustSecurityCacheSize @ 0x140558D7C (CmpAdjustSecurityCacheSize.c)
 *     EtwpExpandFileName @ 0x14055903C (EtwpExpandFileName.c)
 *     NtNotifyChangeSession @ 0x140559524 (NtNotifyChangeSession.c)
 *     CmpCheckSecurityCellAccess @ 0x1405598A8 (CmpCheckSecurityCellAccess.c)
 *     sub_140559BD8 @ 0x140559BD8 (sub_140559BD8.c)
 *     PopPowerRequestAllocate @ 0x140559C70 (PopPowerRequestAllocate.c)
 *     PnpAllocateGenericTableEntry @ 0x140559F28 (PnpAllocateGenericTableEntry.c)
 *     ExpWnfAllocateScopeInstance @ 0x14055A3BC (ExpWnfAllocateScopeInstance.c)
 *     ExpWnfRegisterPermanentName @ 0x14055A4A8 (ExpWnfRegisterPermanentName.c)
 *     sub_14055AB0C @ 0x14055AB0C (sub_14055AB0C.c)
 *     EtwpCreateUmReplyObject @ 0x14055B78C (EtwpCreateUmReplyObject.c)
 *     EtwpGenerateFileName @ 0x14055BC88 (EtwpGenerateFileName.c)
 *     WmipQueueNotification @ 0x14055BE88 (WmipQueueNotification.c)
 *     WmipQueueLegacyEtwWork @ 0x14055C1CC (WmipQueueLegacyEtwWork.c)
 *     SepReadAndPopulateCapes @ 0x14055C3A8 (SepReadAndPopulateCapes.c)
 *     PfpSourceBuildVaArray @ 0x14055C9AC (PfpSourceBuildVaArray.c)
 *     PopPowerInformationInternal @ 0x14055CB5C (PopPowerInformationInternal.c)
 *     PerfDiagpRequestState @ 0x14055CC7C (PerfDiagpRequestState.c)
 *     PiSwAllocateGenericTableEntry @ 0x14055CD4C (PiSwAllocateGenericTableEntry.c)
 *     MiInSwapStore @ 0x14055D380 (MiInSwapStore.c)
 *     IopPnPDispatch @ 0x14055D5D4 (IopPnPDispatch.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x14055E6C0 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x14055E874 (IoGetDeviceInterfaceAlias.c)
 *     MiMapLockedPagesInUserSpace @ 0x14055EF68 (MiMapLockedPagesInUserSpace.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     IoSetPartitionInformation @ 0x14055FBF8 (IoSetPartitionInformation.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14055FFC8 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1405601D8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14056032C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     MmRotatePhysicalView @ 0x140560980 (MmRotatePhysicalView.c)
 *     IoRegisterPlugPlayNotification @ 0x140561348 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x140561854 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x1405619FC (PnpInitializeNotifyEntry.c)
 *     IoVolumeDeviceToGuidPath @ 0x14056254C (IoVolumeDeviceToGuidPath.c)
 *     FstubReadPartitionTableMBR @ 0x1405629C4 (FstubReadPartitionTableMBR.c)
 *     IoReadPartitionTable @ 0x140562AE0 (IoReadPartitionTable.c)
 *     HalpGetFullGeometry @ 0x1405630A4 (HalpGetFullGeometry.c)
 *     FstubAllocateDiskInformation @ 0x140563328 (FstubAllocateDiskInformation.c)
 *     FstubGetDiskGeometry @ 0x1405633DC (FstubGetDiskGeometry.c)
 *     PoInitializeBroadcast @ 0x140565238 (PoInitializeBroadcast.c)
 *     NtInitiatePowerAction @ 0x140565308 (NtInitiatePowerAction.c)
 *     BiUnloadHiveByName @ 0x140569140 (BiUnloadHiveByName.c)
 *     PopLoadResumeContext @ 0x140569238 (PopLoadResumeContext.c)
 *     BiGetKeyName @ 0x1405693EC (BiGetKeyName.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x14056950C (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140569A28 (PfpServiceMainThreadBoostPrep.c)
 *     MiAllocateMemoryListLocks @ 0x140569C3C (MiAllocateMemoryListLocks.c)
 *     PopHiberInitializeResources @ 0x140569E78 (PopHiberInitializeResources.c)
 *     PiSwUpdateArrayProperties @ 0x14056A96C (PiSwUpdateArrayProperties.c)
 *     EtwpCCSwapStart @ 0x14056BADC (EtwpCCSwapStart.c)
 *     PopSetHiberFileMcb @ 0x14056C280 (PopSetHiberFileMcb.c)
 *     SepInitializeLowBoxNumberTable @ 0x14056C2F0 (SepInitializeLowBoxNumberTable.c)
 *     BiLoadSystemStore @ 0x14056D274 (BiLoadSystemStore.c)
 *     BiGetSystemStorePath @ 0x14056D3D0 (BiGetSystemStorePath.c)
 *     BiGetSystemPartition @ 0x14056D4B4 (BiGetSystemPartition.c)
 *     SiQuerySystemPartitionInformation @ 0x14056D57C (SiQuerySystemPartitionInformation.c)
 *     BiEnumerateSubKeys @ 0x14056DFB8 (BiEnumerateSubKeys.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14056E654 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14056EC30 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x14056EE8C (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14056EFF4 (BiGetDriveLayoutBlock.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14056F2D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14056F618 (PopBcdReadElement.c)
 *     BiGetRegistryValue @ 0x14056F9C4 (BiGetRegistryValue.c)
 *     BiCreateKeySecurityDescriptor @ 0x14056FD5C (BiCreateKeySecurityDescriptor.c)
 *     BiConvertElementToRegistryData @ 0x140570370 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14057093C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1405709EC (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x140570E08 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x140571020 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x14057129C (BiVerifyBootPartition.c)
 *     PopBcdSetupResumeObject @ 0x14057143C (PopBcdSetupResumeObject.c)
 *     MmCallDllInitialize @ 0x140571780 (MmCallDllInitialize.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x1405724D8 (PipCallDriverAddDeviceQueryRoutine.c)
 *     IopBuildFullDriverPath @ 0x140572CFC (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x140572EA0 (IopLoadDriver.c)
 *     MiObtainSectionForDriver @ 0x140574C30 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x140574DD8 (MiGenerateSystemImageNames.c)
 *     MiDriverLoadSucceeded @ 0x140574F44 (MiDriverLoadSucceeded.c)
 *     MiResolveImageReferences @ 0x1405753E4 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1405758EC (MiSnapThunk.c)
 *     MiAllocateImportList @ 0x140575E70 (MiAllocateImportList.c)
 *     MiConstructLoaderEntry @ 0x140576044 (MiConstructLoaderEntry.c)
 *     MiCompressImportList @ 0x140576CA0 (MiCompressImportList.c)
 *     AslAlloc @ 0x1405783E4 (AslAlloc.c)
 *     MiReserveDriverPtes @ 0x140579058 (MiReserveDriverPtes.c)
 *     MiSessionCreate @ 0x140579240 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x14057979C (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x14057A1FC (MiSessionCreateInternal.c)
 *     IoWMIQuerySingleInstance @ 0x14057AC60 (IoWMIQuerySingleInstance.c)
 *     IopErrorLogThread @ 0x14057B2A4 (IopErrorLogThread.c)
 *     WmipRegisterOrUpdateDS @ 0x14057B564 (WmipRegisterOrUpdateDS.c)
 *     WmipBuildInstanceSet @ 0x14057BA68 (WmipBuildInstanceSet.c)
 *     WmipCountedToSz @ 0x14057C16C (WmipCountedToSz.c)
 *     IopConnectLineBasedInterrupt @ 0x14057C66C (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x14057CB44 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterrupt @ 0x14057CE68 (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14057D528 (IopGetInterruptConnectionData.c)
 *     IoQueryDeviceDescription @ 0x14057DE14 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14057DF20 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x14057E268 (IopGetRegistryKeyInformation.c)
 *     WmipQueueRegWork @ 0x14057E640 (WmipQueueRegWork.c)
 *     EtwpSetProviderTraitsKm @ 0x14057E810 (EtwpSetProviderTraitsKm.c)
 *     KeAllocateCalloutStackEx @ 0x14057F020 (KeAllocateCalloutStackEx.c)
 *     SiGetFirmwareBootDeviceName @ 0x14057FA0C (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14057FC04 (SiTranslateSymbolicLink.c)
 *     SiGetRegistryValue @ 0x14057FFA0 (SiGetRegistryValue.c)
 *     WdipSemAllocatePool @ 0x140580394 (WdipSemAllocatePool.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140580598 (NtPrivilegeObjectAuditAlarm.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1405810DC (SepScheduleImageVerificationCallbacks.c)
 *     MiFormFullImageName @ 0x14058298C (MiFormFullImageName.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140582B84 (IoWMIDeviceObjectToInstanceName.c)
 *     MiInitializeMirroring @ 0x140583560 (MiInitializeMirroring.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14058417C (NtQuerySystemEnvironmentValueEx.c)
 *     CmpSaveBootControlSet @ 0x140584D98 (CmpSaveBootControlSet.c)
 *     CmpCopySyncTree @ 0x140585040 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x1405850E0 (CmpCopySyncTree2.c)
 *     AdtpAppendString @ 0x14058615C (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1405862D4 (AdtpBuildAccessesString.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x1405867E8 (SepAdtOpenObjectAuditAlarm.c)
 *     sub_1405870FC @ 0x1405870FC (sub_1405870FC.c)
 *     AdtpBuildGuidString @ 0x140587638 (AdtpBuildGuidString.c)
 *     PiDevCfgConfigureDevice @ 0x140587D2C (PiDevCfgConfigureDevice.c)
 *     PiDevCfgFindDeviceDriver @ 0x140588230 (PiDevCfgFindDeviceDriver.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x140588A84 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     PiDevCfgQueryDriverNode @ 0x140588D38 (PiDevCfgQueryDriverNode.c)
 *     MmGetChannelInformation @ 0x14058A52C (MmGetChannelInformation.c)
 *     PiCMQueryRemove @ 0x14058A87C (PiCMQueryRemove.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14058AA90 (PnpQueueQueryAndRemoveEvent.c)
 *     _RegRtlEnumValue @ 0x14058B9D0 (_RegRtlEnumValue.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x14058BBD8 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x14058C9CC (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x14058CBA8 (CmpAddRemoveContainerToCLFSLog.c)
 *     NtSetCachedSigningLevel @ 0x14058CEF8 (NtSetCachedSigningLevel.c)
 *     WheaAddErrorSource @ 0x14058D00C (WheaAddErrorSource.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14058D3C4 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14058D558 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     WmipAllocateSingleInstanceWnode @ 0x14058DCD0 (WmipAllocateSingleInstanceWnode.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14058DD9C (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PoDisableSleepStates @ 0x14058E6EC (PoDisableSleepStates.c)
 *     CmpClearKeyAccessBits @ 0x14058ECA8 (CmpClearKeyAccessBits.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14058F2E0 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     RtlGenerateClass5Guid @ 0x14058F544 (RtlGenerateClass5Guid.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14058FA68 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoCreateDriver @ 0x1405900A4 (IoCreateDriver.c)
 *     IoRegisterLastChanceShutdownNotification @ 0x140590394 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x1405904B8 (IoRegisterShutdownNotification.c)
 *     WmipAddMofResource @ 0x1405905DC (WmipAddMofResource.c)
 *     WmipInsertMofResource @ 0x140590794 (WmipInsertMofResource.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1405911F8 (RtlpMuiRegCreateRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x140591BAC (LdrpQueryValueKey.c)
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
 *     ExRegisterHost @ 0x140594978 (ExRegisterHost.c)
 *     PiDmListInitEnumCallback @ 0x140595210 (PiDmListInitEnumCallback.c)
 *     PiDrvDbRegisterNode @ 0x1405955BC (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x1405956B0 (PiDrvDbCreateNode.c)
 *     EtwInitializeProcessor @ 0x14059597C (EtwInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x140595B40 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140595BE4 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x140595D04 (IoInitializeProcessor.c)
 *     ObCreateObjectTypeEx @ 0x140595F64 (ObCreateObjectTypeEx.c)
 *     MiCreateNodeLists @ 0x140596AF8 (MiCreateNodeLists.c)
 *     PnpSetInterruptInformation @ 0x140597B2C (PnpSetInterruptInformation.c)
 *     EmpProviderRegister @ 0x140597C74 (EmpProviderRegister.c)
 *     PopExtendConnectionState @ 0x140599D40 (PopExtendConnectionState.c)
 *     PpmIdleRegisterDefaultStates @ 0x14059A25C (PpmIdleRegisterDefaultStates.c)
 *     KeInitializeTimerTable @ 0x14059A850 (KeInitializeTimerTable.c)
 *     MiConvertInitialMemoryBlock @ 0x14059AF34 (MiConvertInitialMemoryBlock.c)
 *     IopCreateCmResourceList @ 0x14059B160 (IopCreateCmResourceList.c)
 *     IopCombineCmResourceList @ 0x14059B22C (IopCombineCmResourceList.c)
 *     IoReportDetectedDevice @ 0x14059B5E8 (IoReportDetectedDevice.c)
 *     HeadlessTerminalAddResources @ 0x14059BCEC (HeadlessTerminalAddResources.c)
 *     ArbInitializeArbiterInstance @ 0x14059BE90 (ArbInitializeArbiterInstance.c)
 *     PnpLookupArbitersNewResources @ 0x14059C6C8 (PnpLookupArbitersNewResources.c)
 *     PnpBuildCmResourceList @ 0x14059CAA8 (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x14059CF2C (IopChildToRootTranslation.c)
 *     IopResourceRequirementsListToReqList @ 0x14059D140 (IopResourceRequirementsListToReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x14059D6A4 (IopSetupArbiterAndTranslators.c)
 *     IopQueryResourceHandlerInterface @ 0x14059DC48 (IopQueryResourceHandlerInterface.c)
 *     PnpCmResourcesToIoResources @ 0x14059E0E8 (PnpCmResourcesToIoResources.c)
 *     IopTranslateAndAdjustReqDesc @ 0x14059E330 (IopTranslateAndAdjustReqDesc.c)
 *     ArbAddOrdering @ 0x14059EF44 (ArbAddOrdering.c)
 *     PnpFilterResourceRequirementsList @ 0x14059F0BC (PnpFilterResourceRequirementsList.c)
 *     ArbpBuildAllocationStack @ 0x14059FC54 (ArbpBuildAllocationStack.c)
 *     ArbpGetRegistryValue @ 0x1405A0B44 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x1405A0E88 (ArbInitializeOrderingList.c)
 *     ArbPruneOrdering @ 0x1405A0F28 (ArbPruneOrdering.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x1405A134C (ArbAddMmConfigRangeAsBootReserved.c)
 *     AdtpEtwBuildString @ 0x1405A1914 (AdtpEtwBuildString.c)
 *     SepGetLogonSessionAccountInfo @ 0x1405A1C10 (SepGetLogonSessionAccountInfo.c)
 *     AdtpBuildMessageString @ 0x1405A1DB0 (AdtpBuildMessageString.c)
 *     SeAuditProcessCreation @ 0x1405A23C4 (SeAuditProcessCreation.c)
 *     CmpInitializeNameCache @ 0x1405A274C (CmpInitializeNameCache.c)
 *     CmpParseCacheInit @ 0x1405A2AF0 (CmpParseCacheInit.c)
 *     CmSetAcpiHwProfile @ 0x1405A2B5C (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x1405A3214 (CmpGetAcpiProfileInformation.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1405A4DC4 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1405A4EAC (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1405A50A0 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeRegistryNode @ 0x1405A5A9C (CmpInitializeRegistryNode.c)
 *     CmpCmdInit @ 0x1405A6AF4 (CmpCmdInit.c)
 *     ObRegisterCallbacks @ 0x1405A6D9C (ObRegisterCallbacks.c)
 *     PoRegisterCoalescingCallback @ 0x1405A7100 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x1405A72A8 (ExAllocateCallBack.c)
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
 *     PiDmObjectManagerPopulate @ 0x1405ABFB4 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x1405AC0E8 (PiDmObjectCreate.c)
 *     PopFxTraceDeviceRegistration @ 0x1405AC94C (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterDeviceWorker @ 0x1405AC9D0 (PopFxRegisterDeviceWorker.c)
 *     PopPepRegisterDevice @ 0x1405AD2D0 (PopPepRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x1405AD664 (PopFxConvertV1Components.c)
 *     PpmRegisterPerfStates @ 0x1405AF60C (PpmRegisterPerfStates.c)
 *     PpmParkRegisterParking @ 0x1405B0118 (PpmParkRegisterParking.c)
 *     PpmIdleInitializeConcurrency @ 0x1405B0720 (PpmIdleInitializeConcurrency.c)
 *     PpmPerfResizeHistoryAll @ 0x1405B1208 (PpmPerfResizeHistoryAll.c)
 *     PipAddBindingId @ 0x1405B19D0 (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x1405B1AF0 (PipCreateDependencyNode.c)
 *     PipMakeGloballyUniqueId @ 0x1405B1CF8 (PipMakeGloballyUniqueId.c)
 *     PopLogSleepDisabled @ 0x1405B227C (PopLogSleepDisabled.c)
 *     PiGetDefaultMessageString @ 0x1405B298C (PiGetDefaultMessageString.c)
 *     WmipAllocGuidEntry @ 0x1405B2AE8 (WmipAllocGuidEntry.c)
 *     IoCreateSystemThread @ 0x1405B2B7C (IoCreateSystemThread.c)
 *     MiMapViewOfPhysicalSection @ 0x1405B2C58 (MiMapViewOfPhysicalSection.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x1405B3288 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PnpReadDeviceConfiguration @ 0x1405B3828 (PnpReadDeviceConfiguration.c)
 *     PiQueryPowerRelations @ 0x1405B3954 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x1405B3CE0 (PiQueryPowerDependencyRelations.c)
 *     PiDevCfgQueryObjectProperties @ 0x1405B3DCC (PiDevCfgQueryObjectProperties.c)
 *     WheapInitializeErrorSource @ 0x1405B4108 (WheapInitializeErrorSource.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405B4DBC (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1405B50B0 (MiCreatePageFileSpaceBitmaps.c)
 *     PiAuAllocateAndInitializeSid @ 0x1405B5958 (PiAuAllocateAndInitializeSid.c)
 *     PfpCreateEvent @ 0x1405B7260 (PfpCreateEvent.c)
 *     IoReadDiskSignature @ 0x1405B748C (IoReadDiskSignature.c)
 *     PiDmAllocateGenericTableEntry @ 0x1405B7844 (PiDmAllocateGenericTableEntry.c)
 *     PipApplyFunctionToServiceInstances @ 0x1405B7858 (PipApplyFunctionToServiceInstances.c)
 *     CmpStartRMLog @ 0x1405B8B98 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x1405B9014 (CmpStartCLFSLog.c)
 *     IoRegisterBootDriverReinitialization @ 0x1405B9358 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x1405B93CC (IoRegisterDriverReinitialization.c)
 *     FsRtlGetTunnelParameterValue @ 0x1405B945C (FsRtlGetTunnelParameterValue.c)
 *     NtSetUuidSeed @ 0x1405B9554 (NtSetUuidSeed.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405B9910 (CmpInitializeSystemHivesLoad.c)
 *     PiDcInitUpdateProperties @ 0x1405B9CB8 (PiDcInitUpdateProperties.c)
 *     PpmRegisterProfiles @ 0x1405B9F50 (PpmRegisterProfiles.c)
 *     WheapLogInitEvent @ 0x1405BA4F8 (WheapLogInitEvent.c)
 *     WmipGenerateMofResourceNotification @ 0x1405BA69C (WmipGenerateMofResourceNotification.c)
 *     DrvDbOpenContext @ 0x1405BAEA0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405BB0F0 (DrvDbCreateDatabaseNode.c)
 *     MmGetNodeChannelRanges @ 0x1405BB304 (MmGetNodeChannelRanges.c)
 *     CmpParseCacheAddSymbolicLink @ 0x1405BB434 (CmpParseCacheAddSymbolicLink.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x1405BB80C (FsRtlpRegisterProviderWithMUP.c)
 *     _PnpCtxOpenMachine @ 0x1405BBB38 (_PnpCtxOpenMachine.c)
 *     _SysCtxOpenMachine @ 0x1405BBCB8 (_SysCtxOpenMachine.c)
 *     ObSetDeviceMap @ 0x1405BBFDC (ObSetDeviceMap.c)
 *     WmipGenerateBinaryMofNotification @ 0x1405BC498 (WmipGenerateBinaryMofNotification.c)
 *     SepSetSystemPaths @ 0x1405BC640 (SepSetSystemPaths.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405BCA4C (ExpRegisterFirmwareTableInformationHandler.c)
 *     WmipRegisterEtwProvider @ 0x1405BCEAC (WmipRegisterEtwProvider.c)
 *     IoRegisterContainerNotification @ 0x1405BD318 (IoRegisterContainerNotification.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x1405BD654 (PopEnableHiberFile.c)
 *     ExpWnfPopulateStateData @ 0x1405BDB94 (ExpWnfPopulateStateData.c)
 *     CmpRegisterCallbackInternal @ 0x1405BDDDC (CmpRegisterCallbackInternal.c)
 *     SepBuildDefaultCap @ 0x1405BE024 (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405BE0BC (_PnpGetEnumSecurityDescriptor.c)
 *     PnpAllocateDeviceInstancePath @ 0x1405BE5F8 (PnpAllocateDeviceInstancePath.c)
 *     IopCreateVpb @ 0x1405BE634 (IopCreateVpb.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x1405BE69C (PnpMergeFilteredResourceRequirementsList.c)
 *     AlpcpInitSystem @ 0x1405BEC58 (AlpcpInitSystem.c)
 *     AlpcpInitializeMessageLog @ 0x1405BEF50 (AlpcpInitializeMessageLog.c)
 *     ExpGetSystemPlatformBinary @ 0x1405BF130 (ExpGetSystemPlatformBinary.c)
 *     CmpAddStringToMapping @ 0x1405BFB4C (CmpAddStringToMapping.c)
 *     PspAllocateMonitorContextArrayServerSilo @ 0x1405C0030 (PspAllocateMonitorContextArrayServerSilo.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x1405C0314 (PopCreateHiberFileSecurityDescriptor.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x1405C0594 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1405C0910 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     ExpWnfAllocateScopeMap @ 0x1405C0BB0 (ExpWnfAllocateScopeMap.c)
 *     PiDcAllocateGenericTableEntry @ 0x1405C1F54 (PiDcAllocateGenericTableEntry.c)
 *     PopConnectToPolicyDevice @ 0x1405C32C0 (PopConnectToPolicyDevice.c)
 *     PoCreateThermalRequest @ 0x1405C364C (PoCreateThermalRequest.c)
 *     PopAssociateThermalRequest @ 0x1405C3744 (PopAssociateThermalRequest.c)
 *     PfSnPrefetchCacheCtxStart @ 0x1405C4CA0 (PfSnPrefetchCacheCtxStart.c)
 *     PfTAllocateBuffers @ 0x1405C4EB8 (PfTAllocateBuffers.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     WmipLegacyEtwCallback @ 0x1405C5E44 (WmipLegacyEtwCallback.c)
 *     MmStoreRegister @ 0x1405C5F98 (MmStoreRegister.c)
 *     PopPreallocateHibernateMemory @ 0x1405C61D8 (PopPreallocateHibernateMemory.c)
 *     PopDiagTraceThermalRequest @ 0x1405C6424 (PopDiagTraceThermalRequest.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405C660C (ExAllocatePrivateWorkerPool.c)
 *     IoInitializeTimer @ 0x1405C6818 (IoInitializeTimer.c)
 *     CcAllocateObcb @ 0x14064FBD8 (CcAllocateObcb.c)
 *     NtQueryOpenSubKeysEx @ 0x1406505EC (NtQueryOpenSubKeysEx.c)
 *     CmSetCallbackObjectContext @ 0x14065265C (CmSetCallbackObjectContext.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x140653A1C (CmpDoQueueSystemHiveHysteresis.c)
 *     CmVirtualKCBToRealPath @ 0x140657A00 (CmVirtualKCBToRealPath.c)
 *     CmpBuildAdminInformation @ 0x140657B40 (CmpBuildAdminInformation.c)
 *     CmpBuildVirtualReplicationStack @ 0x140657EBC (CmpBuildVirtualReplicationStack.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140659598 (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKCBSecurity @ 0x140659C90 (CmpSnapshotKCBSecurity.c)
 *     CmpCmdRenameHive @ 0x14065AD80 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarning @ 0x14065AE40 (CmpDiskFullWarning.c)
 *     CmInitializeProcessor @ 0x14065B694 (CmInitializeProcessor.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x14065C1F0 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpDoReadTxRBigLogRecord @ 0x14065CEE8 (CmpDoReadTxRBigLogRecord.c)
 *     HvWriteExternal @ 0x14065E3F4 (HvWriteExternal.c)
 *     CmDeleteKeyRecursive @ 0x14065EBF8 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x14065EFB8 (CmpCloneHwProfile.c)
 *     CmpMergeKeyValues @ 0x14065FFA8 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x140660170 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x140660968 (CmpGetValueForAudit.c)
 *     CmpLoadHiveVolatile @ 0x140661E7C (CmpLoadHiveVolatile.c)
 *     HvpViewMapPrefetchFile @ 0x140663578 (HvpViewMapPrefetchFile.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x140663E6C (CmpUndoDeleteKeyForTransEx.c)
 *     CmpSnapshotTxOwnerArray @ 0x140664768 (CmpSnapshotTxOwnerArray.c)
 *     HvpReviveDiscardedBin @ 0x14066490C (HvpReviveDiscardedBin.c)
 *     HvpGetLogHeader @ 0x140664AE4 (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1406650F0 (HvpRecoverData.c)
 *     HvpRecoverDataReadRoutine @ 0x14066534C (HvpRecoverDataReadRoutine.c)
 *     DbgkCaptureLiveDump @ 0x14066980C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140669E08 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkWerAddSecondaryData @ 0x14066A3E8 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14066A574 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerAllocatePool @ 0x14066A7C4 (DbgkpWerAllocatePool.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14066A7D8 (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x14066A954 (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpTriageDumpInitialize @ 0x14066B3A0 (DbgkpTriageDumpInitialize.c)
 *     EmpClientRuleRegisterNotification @ 0x14066B668 (EmpClientRuleRegisterNotification.c)
 *     EmProviderRegisterEntry @ 0x14066BB30 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x14066DAB4 (FsRtlIsDbcsInExpression.c)
 *     FsRtlpHeatRegisterVolume @ 0x14066E590 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x14066E7C4 (FsRtlpQueryValueKey.c)
 *     IoWritePartitionTable @ 0x14066ED20 (IoWritePartitionTable.c)
 *     FstubConvertExtendedToLayout @ 0x14066F1D0 (FstubConvertExtendedToLayout.c)
 *     FstubReadPartitionTableEFI @ 0x14066F604 (FstubReadPartitionTableEFI.c)
 *     FstubVerifyPartitionTableEFI @ 0x14066F990 (FstubVerifyPartitionTableEFI.c)
 *     HvlpAllocatePageListResources @ 0x140670D7C (HvlpAllocatePageListResources.c)
 *     IopAllocateGenericTableEntry @ 0x140670E34 (IopAllocateGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140671564 (IopGetRelatedFileName.c)
 *     IopInitializeBootLogging @ 0x140671954 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140672188 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x14067249C (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1406725FC (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140672E30 (IopSetFileObjectIosbRange.c)
 *     IopValidateJunctionTarget @ 0x14067350C (IopValidateJunctionTarget.c)
 *     IoReplaceFileObjectName @ 0x140674240 (IoReplaceFileObjectName.c)
 *     IoIsValidNameGraftingBuffer @ 0x140674FB0 (IoIsValidNameGraftingBuffer.c)
 *     IopSymlinkApplyToOpenedName @ 0x140675754 (IopSymlinkApplyToOpenedName.c)
 *     IoRegisterIoTracking @ 0x1406758D8 (IoRegisterIoTracking.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x140676C1C (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140677378 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140677924 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140677B20 (IopLiveDumpAllocateMappingResources.c)
 *     IopErrorLogQueueRequest @ 0x140678964 (IopErrorLogQueueRequest.c)
 *     IopEnumerateEnvironmentVariablesTrEE @ 0x140678EC0 (IopEnumerateEnvironmentVariablesTrEE.c)
 *     IopGetEnvironmentVariableSysEnv @ 0x1406793EC (IopGetEnvironmentVariableSysEnv.c)
 *     IopGetEnvironmentVariableTrEE @ 0x140679594 (IopGetEnvironmentVariableTrEE.c)
 *     IopSetEnvironmentVariableSysEnv @ 0x140679BBC (IopSetEnvironmentVariableSysEnv.c)
 *     IopSetEnvironmentVariableTrEE @ 0x140679CEC (IopSetEnvironmentVariableTrEE.c)
 *     IopFindSystemDevice @ 0x140679E48 (IopFindSystemDevice.c)
 *     IopAppendLegacyVeto @ 0x14067B028 (IopAppendLegacyVeto.c)
 *     PpCreateLegacyDeviceIds @ 0x14067B474 (PpCreateLegacyDeviceIds.c)
 *     PipAddRequestToEdge @ 0x14067B938 (PipAddRequestToEdge.c)
 *     PnpDeleteDeviceInterfaces @ 0x14067C4CC (PnpDeleteDeviceInterfaces.c)
 *     IopChangeInterfaceType @ 0x14067D20C (IopChangeInterfaceType.c)
 *     IoRequestDeviceRemovalForReset @ 0x14067D338 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14067DB34 (IopAllocatePassiveInterruptBlock.c)
 *     IopCombineLegacyResources @ 0x14067EF78 (IopCombineLegacyResources.c)
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 *     IopIsPciRootBus @ 0x14067F6D4 (IopIsPciRootBus.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14067FBE4 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14067FC98 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14067FDA4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x140680078 (PiPnpRtlServiceFilterCallback.c)
 *     PnpRebalance @ 0x140680EDC (PnpRebalance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140681244 (PiDcResetChildDeviceContainerCallback.c)
 *     PiAuCheckClientInteractive @ 0x140681644 (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140681708 (PiAuCheckTokenMembership.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x1406821AC (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x1406822D4 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406835F4 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140683E18 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140683FDC (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14068426C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyDeviceKeys @ 0x1406852B8 (PiDevCfgCopyDeviceKeys.c)
 *     PiDevCfgCopyObjectProperties @ 0x140685538 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyVariableData @ 0x1406857EC (PiDevCfgCopyVariableData.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x14068606C (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140686DE0 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgInitResolveContext @ 0x140687104 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14068822C (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverConfigurations @ 0x1406885D4 (PiDevCfgQueryIncludedDriverConfigurations.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x140688A94 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140688F1C (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x140689694 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x140689AFC (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableConstant @ 0x140689ED0 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14068A004 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x14068A41C (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14068B800 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14068BD84 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14068BFB8 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14068C788 (PiDevCfgResolveVariableKeyValue.c)
 *     PiProfileUpdateDeviceTree @ 0x14068D5C0 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14068D6F0 (PnpProfileUpdateHardwareProfile.c)
 *     IopTranslatorHandlerIo @ 0x14068E180 (IopTranslatorHandlerIo.c)
 *     PnpAddVetoInformation @ 0x14068E1DC (PnpAddVetoInformation.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x14068F5A4 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x14068F788 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x14068F8C4 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x14068FA7C (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x14068FE44 (PnprGetPluginDriverImagePath.c)
 *     PnprMmAddRange @ 0x140690B38 (PnprMmAddRange.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406911C0 (PiSwQueuedCreateInfoCreate.c)
 *     PiCMCreateDevice @ 0x140691B70 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140692C44 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x140692DCC (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x1406930A8 (PiCMGetObjectPropertyKeys.c)
 *     IopQueryDockRemovalInterface @ 0x140694240 (IopQueryDockRemovalInterface.c)
 *     PiControlGetDeviceStack @ 0x140694628 (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x140694F24 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x140695374 (PiQueryDeviceRelations.c)
 *     IopExecuteHardwareProfileChange @ 0x1406962B0 (IopExecuteHardwareProfileChange.c)
 *     PiAuditStartedDevice @ 0x1406964A4 (PiAuditStartedDevice.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406968A0 (PiCreateDriverSwDeviceCallback.c)
 *     KeInitializeSecondaryInterruptServices @ 0x140698F8C (KeInitializeSecondaryInterruptServices.c)
 *     KeInitializeUmsThread @ 0x140699CF0 (KeInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14069ECA0 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x14069FC58 (AlpcpGetPortNameInformation.c)
 *     AlpcRegisterLogRoutine @ 0x14069FE4C (AlpcRegisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406A0390 (AlpcpLogWaitForNewMessage.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406A0F7C (MiLogStrongCodeDriverLoadFailure.c)
 *     MiInitializeLockedPagesTracking @ 0x1406A1690 (MiInitializeLockedPagesTracking.c)
 *     MmGetFileNameForAddress @ 0x1406A172C (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x1406A1834 (MmGetFileNameForSection.c)
 *     MiConfigureMemoryInsertion @ 0x1406A1A20 (MiConfigureMemoryInsertion.c)
 *     MiConfigureMemoryRemoval @ 0x1406A1D5C (MiConfigureMemoryRemoval.c)
 *     MiAllocatePerSessionProtos @ 0x1406A30B8 (MiAllocatePerSessionProtos.c)
 *     MiAllocatePartitionId @ 0x1406A3690 (MiAllocatePartitionId.c)
 *     MiCreatePartition @ 0x1406A3A54 (MiCreatePartition.c)
 *     MiHotAddPartitionMemory @ 0x1406A3DD4 (MiHotAddPartitionMemory.c)
 *     MiAllocateAweInfo @ 0x1406A5BA4 (MiAllocateAweInfo.c)
 *     NtAllocateUserPhysicalPages @ 0x1406A6328 (NtAllocateUserPhysicalPages.c)
 *     NtMapUserPhysicalPages @ 0x1406A703C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x1406A75B4 (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x1406A7C70 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateCrcList @ 0x1406A8890 (MiAllocateCrcList.c)
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 *     MiAllocateLargeZeroPages @ 0x1406A9A90 (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x1406A9CA4 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x1406A9E00 (MiFindLargePageMemory.c)
 *     MiAllocateFileExtents @ 0x1406AA2A0 (MiAllocateFileExtents.c)
 *     MiInitializeScrubPacket @ 0x1406AA87C (MiInitializeScrubPacket.c)
 *     MmScrubMemory @ 0x1406AACD4 (MmScrubMemory.c)
 *     ObpSetObjectAuditInfo @ 0x1406AC044 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x1406AC304 (ObGetObjectInformation.c)
 *     ObpCreateTypeArray @ 0x1406AC9A4 (ObpCreateTypeArray.c)
 *     ObpGetObjectRefInfo @ 0x1406AD9C8 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x1406ADAE0 (ObpGetTraceIndex.c)
 *     ObpInitStackAndObjectTables @ 0x1406ADCDC (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406AE154 (ObpRefillWorkItemFreeList.c)
 *     ObpRegisterObject @ 0x1406AE194 (ObpRegisterObject.c)
 *     ObpStartRuntimeStackTrace @ 0x1406AE3B8 (ObpStartRuntimeStackTrace.c)
 *     ObGetRootDirectoryNameByPointer @ 0x1406AEB94 (ObGetRootDirectoryNameByPointer.c)
 *     ObSetSiloRootDirectoryByPointer @ 0x1406AECC4 (ObSetSiloRootDirectoryByPointer.c)
 *     PfpPrefetchFiles @ 0x1406AF06C (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x1406AF41C (PfpQueryFileExtentsRequest.c)
 *     PopLoggingInformation @ 0x1406B06C4 (PopLoggingInformation.c)
 *     PopUnicodeStringDeepCopy @ 0x1406B0914 (PopUnicodeStringDeepCopy.c)
 *     PpmInstallCoordinatedIdleStates @ 0x1406B0D4C (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x1406B1428 (PpmInstallPlatformIdleStates.c)
 *     PopRegisterCoolingExtensionProtection @ 0x1406B2BE4 (PopRegisterCoolingExtensionProtection.c)
 *     PopGetPowerRequestListInfo @ 0x1406B326C (PopGetPowerRequestListInfo.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x1406B3808 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x1406B3D58 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x1406B41D8 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x1406B43E8 (PopFxRegisterComponentPerfStates.c)
 *     PopFxVerifyDependencies @ 0x1406B4A70 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x1406B4E78 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopNewWakeSource @ 0x1406B5770 (PopNewWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x1406B57B8 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceGetDeviceProperty @ 0x1406B5974 (PopWakeSourceGetDeviceProperty.c)
 *     PopPdcCsDeviceNotification @ 0x1406B787C (PopPdcCsDeviceNotification.c)
 *     PopFxTracePerfRegistration @ 0x1406BA510 (PopFxTracePerfRegistration.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x1406BBDEC (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1406BC134 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x1406BC410 (PpmEventTraceProcessorIdle.c)
 *     PpmAllocateQueryTable @ 0x1406BD7B4 (PpmAllocateQueryTable.c)
 *     PsInsertSiloObject @ 0x1406C0CC0 (PsInsertSiloObject.c)
 *     PsInsertSiloObjectByPointer @ 0x1406C0E40 (PsInsertSiloObjectByPointer.c)
 *     PspCreateSecureThread @ 0x1406C35B4 (PspCreateSecureThread.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x1406C42F8 (PspAddProcessToWorkingSetChangeList.c)
 *     RawQueryFileSystemInformation @ 0x1406C6C80 (RawQueryFileSystemInformation.c)
 *     RtlpComputeMergedAcl @ 0x1406CA01C (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406CA428 (RtlpCreateServerAcl.c)
 *     RtlIdnToUnicode @ 0x1406CCBA8 (RtlIdnToUnicode.c)
 *     SepAdtStagingEvent @ 0x1406D3618 (SepAdtStagingEvent.c)
 *     SepQueryNameString @ 0x1406D3B24 (SepQueryNameString.c)
 *     SepQueryTypeString @ 0x1406D3C14 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x1406D3FF8 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x1406D40A0 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x1406D42D0 (SepCaptureOctetStringArray.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406D4BDC (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepCreateSidValuesBlock @ 0x1406D5870 (SepCreateSidValuesBlock.c)
 *     NtFilterBootOption @ 0x1406D6460 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1406D68C4 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406D6CC0 (SepSecureBootUpdateBcdDataForRule.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x1406D7010 (SeAdjustObjectAppContainerSecurity.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406D71A0 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SepBuildObjectSecurityDescriptor @ 0x1406D7344 (SepBuildObjectSecurityDescriptor.c)
 *     SepDuplicateClaimAttributes @ 0x1406D8228 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x1406D8520 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1406D8C80 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x1406D8FD8 (SepReadSingleCap.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406DE120 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     VmCreateMemoryRange @ 0x1406DE920 (VmCreateMemoryRange.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x1406DF904 (WdipSemLoadLocalGroupPolicy.c)
 *     IoWMIAllocateInstanceIds @ 0x1406DFC88 (IoWMIAllocateInstanceIds.c)
 *     IoWMISuggestInstanceName @ 0x1406E0180 (IoWMISuggestInstanceName.c)
 *     WmipDereferenceEvent @ 0x1406E0434 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x1406E07DC (WmipIncludeStaticNames.c)
 *     WmipQueryAllDataMultiple @ 0x1406E0ABC (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x1406E0D78 (WmipQuerySingleMultiple.c)
 *     WmipGetSysIds @ 0x1406E18D4 (WmipGetSysIds.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406E2BC0 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwpLogMemInfoWs @ 0x1406E4310 (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406E4820 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpSetPmcProfileSource @ 0x1406E51EC (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1406E52FC (EtwpTraceHandle.c)
 *     EtwpAllocatePmcData @ 0x1406E6804 (EtwpAllocatePmcData.c)
 *     EtwpCapturePreviousRegistryData @ 0x1406E6FE4 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1406E70E4 (EtwpCaptureRegistryData.c)
 *     EtwpSendDbgId @ 0x1406E7CE8 (EtwpSendDbgId.c)
 *     EtwpEnumerateWorkingSet @ 0x1406E84F4 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406E8870 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1406E8B94 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1406E8CE0 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1406E9204 (EtwpProcessorRundown.c)
 *     EtwpReferenceStackLookasideList @ 0x1406E9954 (EtwpReferenceStackLookasideList.c)
 *     EtwpUpdateStackTracing @ 0x1406E99B8 (EtwpUpdateStackTracing.c)
 *     EtwpAllocatePayloadFilterData @ 0x1406E9AFC (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x1406E9B80 (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x1406EA084 (EtwpCreatePerfectHashFunction.c)
 *     EtwpUpdatePidFilterData @ 0x1406EA5D0 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1406EA66C (EtwpUpdateSchematizedFilterData.c)
 *     EtwpAddWinRtProviderToSession @ 0x1406EAB2C (EtwpAddWinRtProviderToSession.c)
 *     EtwpEnableStackCaching @ 0x1406EAE54 (EtwpEnableStackCaching.c)
 *     ExQueryFastCacheAppOrigin @ 0x1406EBA8C (ExQueryFastCacheAppOrigin.c)
 *     sub_1406EC140 @ 0x1406EC140 (sub_1406EC140.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406ECC64 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     sub_1406ECEC4 @ 0x1406ECEC4 (sub_1406ECEC4.c)
 *     ExpOsProductCacheProviderHelper @ 0x1406ED418 (ExpOsProductCacheProviderHelper.c)
 *     sub_1406EF8FC @ 0x1406EF8FC (sub_1406EF8FC.c)
 *     NtDisplayString @ 0x1406EFD70 (NtDisplayString.c)
 *     ExEnableHandleTracing @ 0x1406EFFA0 (ExEnableHandleTracing.c)
 *     ExpConvertArcName @ 0x1406F0B40 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1406F0CF4 (ExpConvertSignatureName.c)
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
 *     ExpUnicodeStringToNonpagedWStr @ 0x1406F40E4 (ExpUnicodeStringToNonpagedWStr.c)
 *     NtEnumerateBootEntries @ 0x1406F4780 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406F4DB4 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406F61FC (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1406F65CC (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1406F6AEC (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1406F6D78 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406F7144 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1406F73B0 (NtTranslateFilePath.c)
 *     ExpAllocatePoolForNode @ 0x1406F778C (ExpAllocatePoolForNode.c)
 *     ExShareAddressSpaceWithDevice @ 0x1406F826C (ExShareAddressSpaceWithDevice.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406F880C (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406F8C84 (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1406F8EF0 (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1406F96A8 (ExpCovReadRequestBuffer.c)
 *     NtStartProfile @ 0x1406FA0A8 (NtStartProfile.c)
 *     CMFAllocFn @ 0x1406FA4E0 (CMFAllocFn.c)
 *     CMFCreateSecurityDescriptor @ 0x1406FA710 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1406FAC30 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     NtSystemDebugControl @ 0x1406FBA78 (NtSystemDebugControl.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1406FC6C0 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1406FD08C (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1406FD2E4 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1406FD5B0 (WheapPfaMemoryCheck.c)
 *     WheapIsSqmLoggerRunning @ 0x1406FDB80 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406FDE14 (WheapSqmCollectPshedPluginTelemetry.c)
 *     sub_1406FDFB8 @ 0x1406FDFB8 (sub_1406FDFB8.c)
 *     sub_1406FE398 @ 0x1406FE398 (sub_1406FE398.c)
 *     sub_1406FE610 @ 0x1406FE610 (sub_1406FE610.c)
 *     sub_1406FEC28 @ 0x1406FEC28 (sub_1406FEC28.c)
 *     sub_1406FF044 @ 0x1406FF044 (sub_1406FF044.c)
 *     sub_1406FF424 @ 0x1406FF424 (sub_1406FF424.c)
 *     sub_1406FFC40 @ 0x1406FFC40 (sub_1406FFC40.c)
 *     sub_1406FFF04 @ 0x1406FFF04 (sub_1406FFF04.c)
 *     sub_1407001D4 @ 0x1407001D4 (sub_1407001D4.c)
 *     sub_140700570 @ 0x140700570 (sub_140700570.c)
 *     sub_140700A3C @ 0x140700A3C (sub_140700A3C.c)
 *     sub_140700DB4 @ 0x140700DB4 (sub_140700DB4.c)
 *     sub_140701190 @ 0x140701190 (sub_140701190.c)
 *     sub_140701618 @ 0x140701618 (sub_140701618.c)
 *     sub_140701838 @ 0x140701838 (sub_140701838.c)
 *     SddlpAlloc @ 0x14070A49C (SddlpAlloc.c)
 *     SddlpReAlloc @ 0x14070A510 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x14070A584 (SddlpUuidToString.c)
 *     AdtpBuildHexInt64String @ 0x14070BF10 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x14070BFCC (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x14070C120 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x14070C274 (AdtpBuildMacStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x14070C314 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildRegistryValueString @ 0x14070C50C (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14070C8A4 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x14070CA9C (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14070CD88 (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x14070CEEC (AdtpBuildUlongString.c)
 *     AdtpBuildUserAccountControlString @ 0x14070D078 (AdtpBuildUserAccountControlString.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x14070D9F0 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x14070DAC4 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x14070DB84 (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x14070DEF4 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x14070DFDC (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x14070E088 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x14070E17C (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x14070E32C (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14070E460 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x14070E5D8 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14070E78C (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14070E8C8 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14070E9A4 (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x14070EDBC (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x14070F33C (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x14070F814 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x14070FC58 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x14070FDF4 (BiExportEfiBootManager.c)
 *     BiGetDeviceFromEfiPath @ 0x1407101F8 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x140710388 (BiGetFilePathFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1407104E4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1407106EC (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x14071091C (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1407109CC (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x140710C48 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x140710D60 (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140711178 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetDriveLayoutInformation @ 0x140711480 (SiGetDriveLayoutInformation.c)
 *     SiGetEfiSystemDevice @ 0x140711860 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140711B48 (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x140711E24 (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x140711F48 (SiGetBiosSystemPartition.c)
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
 *     _CmServiceFilterCallback @ 0x1407166D4 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceSiblings @ 0x1407182CC (_CmGetDeviceSiblings.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140719880 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x140719D30 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x140719E28 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x14071A3E4 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14071A84C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x14071B63C (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14071BB44 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14071C8E8 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x14071D0CC (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x14071E6BC (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x14071E9EC (ArbQueryConflict.c)
 *     VhdiVerifyBootDisk @ 0x14071EF58 (VhdiVerifyBootDisk.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14071F328 (RtlpLoadPolicyLanguageSpec.c)
 *     KdInitSystem @ 0x14072A128 (KdInitSystem.c)
 *     KdPullRemoteFile @ 0x14072E134 (KdPullRemoteFile.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1407320D4 (VfXdvDriverCaptureIoCallbacks.c)
 *     ViThunkCreateSharedExportInformation @ 0x140732268 (ViThunkCreateSharedExportInformation.c)
 *     VfAvlInitializeTree @ 0x1407324E4 (VfAvlInitializeTree.c)
 *     IovpBuildDriverObjectList @ 0x1407354B0 (IovpBuildDriverObjectList.c)
 *     VfInitVerifierComponents @ 0x140736E40 (VfInitVerifierComponents.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140737588 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x140737BD4 (ViInitializeLocalSystemDescriptor.c)
 *     ViDdiDriverEntry @ 0x140738C50 (ViDdiDriverEntry.c)
 *     ViAllocateContiguousMemory @ 0x14073D098 (ViAllocateContiguousMemory.c)
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x14073E9E0 (ViHookDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14073F1E0 (ViSpecialAllocateCommonBuffer.c)
 *     ViPendingDelayCompletion @ 0x140742AC8 (ViPendingDelayCompletion.c)
 *     VfInitializeBranchTracing @ 0x1407444FC (VfInitializeBranchTracing.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1407449E0 (VfThunkAddSpecialDriverThunks.c)
 *     ViThunkCreateThunkTable @ 0x140745050 (ViThunkCreateThunkTable.c)
 *     ViThunkFindAllSpecialTables @ 0x1407450D0 (ViThunkFindAllSpecialTables.c)
 *     VfTargetEtwRegister @ 0x140745840 (VfTargetEtwRegister.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140745BD8 (ViTargetDriversAllocateVerifiedData.c)
 *     ViTargetTrackContiguousMemory @ 0x140745EF8 (ViTargetTrackContiguousMemory.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140746A44 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140746BA4 (ViFaultsAddTagNoDuplicates.c)
 *     VfSuspectDriversAllocateEntry @ 0x140749ECC (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x14074A6C8 (VfSuspectExcludedDriversAllocateEntry.c)
 *     IovpSessionDataCreate @ 0x14074BA70 (IovpSessionDataCreate.c)
 *     VfIrpLogRecordEvent @ 0x14074E138 (VfIrpLogRecordEvent.c)
 *     VfIrpLogRetrieveWmiData @ 0x14074E35C (VfIrpLogRetrieveWmiData.c)
 *     ViCtxAllocateIsrContext @ 0x14074E950 (ViCtxAllocateIsrContext.c)
 *     VfDeadlockInitialize @ 0x14074F8A4 (VfDeadlockInitialize.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x14075105C (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     VfGetVerifierInformation @ 0x140758934 (VfGetVerifierInformation.c)
 *     HdlspAddLogEntry @ 0x140759ADC (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x14075B158 (HdlspSetBlueScreenInformation.c)
 *     ResFwpPageOutBackground @ 0x14075E9F4 (ResFwpPageOutBackground.c)
 *     CcInitializeBcbProfiler @ 0x14079A2C4 (CcInitializeBcbProfiler.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 *     KeQueryNumaGraph @ 0x1407B5CFC (KeQueryNumaGraph.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x1407B5FE8 (IopCreateArcNames.c)
 *     PipInitDeviceOverrideCache @ 0x1407B67F8 (PipInitDeviceOverrideCache.c)
 *     PipInitComputerIds @ 0x1407B6E78 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x1407B7980 (PipCreateComputerId.c)
 *     IopInitializeBootDrivers @ 0x1407B872C (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x1407B91D4 (IopInitializeBuiltinDriver.c)
 *     PipCreateEntry @ 0x1407B99F8 (PipCreateEntry.c)
 *     WmipInitializeSecurity @ 0x1407B9F00 (WmipInitializeSecurity.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x1407BA454 (PnpRegMultiSzToUnicodeStrings.c)
 *     CmGetSystemDriverList @ 0x1407BA76C (CmGetSystemDriverList.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1407BC278 (SepInitializeSingletonAttributesStructures.c)
 *     StartFirstUserProcess @ 0x1407BC5B4 (StartFirstUserProcess.c)
 *     SeMakeSystemToken @ 0x1407BC9E0 (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x1407BCF14 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x1407BD148 (SeMakeAnonymousLogonToken.c)
 *     BuildKnownDlls @ 0x1407BD39C (BuildKnownDlls.c)
 *     ExpandKnownDllsPath @ 0x1407BD718 (ExpandKnownDllsPath.c)
 *     SepVariableInitialization @ 0x1407BD8FC (SepVariableInitialization.c)
 *     SepInitSystemDacls @ 0x1407BEE60 (SepInitSystemDacls.c)
 *     PpInitializeBootDDB @ 0x1407C03F8 (PpInitializeBootDDB.c)
 *     CcInitializeCacheManager @ 0x1407C1E24 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x1407C266C (ObInitSystem.c)
 *     ExpInitSystemPhase1 @ 0x1407C3074 (ExpInitSystemPhase1.c)
 *     PspInitPhase0 @ 0x1407C344C (PspInitPhase0.c)
 *     MiSystemPartitionObjectCreate @ 0x1407C4068 (MiSystemPartitionObjectCreate.c)
 *     MiSectionInitialization @ 0x1407C41D0 (MiSectionInitialization.c)
 *     MiInitializeRelocations @ 0x1407C7D1C (MiInitializeRelocations.c)
 *     MiInitializeSessionIds @ 0x1407C85DC (MiInitializeSessionIds.c)
 *     MiInitializeCacheFlushing @ 0x1407C8714 (MiInitializeCacheFlushing.c)
 *     MiInitSystem @ 0x1407C8BD0 (MiInitSystem.c)
 *     MiCreateZeroContext @ 0x1407C9940 (MiCreateZeroContext.c)
 *     InitializePagedPool @ 0x1407CA2BC (InitializePagedPool.c)
 *     MiCreateMemoryEvent @ 0x1407CAF9C (MiCreateMemoryEvent.c)
 *     MiInitializeDriverImages @ 0x1407CBC2C (MiInitializeDriverImages.c)
 *     EmInitSystem @ 0x1407CD450 (EmInitSystem.c)
 *     EmpParseEntryTypes @ 0x1407CDB50 (EmpParseEntryTypes.c)
 *     IopGetBootDiskInformationLite @ 0x1407CDCA8 (IopGetBootDiskInformationLite.c)
 *     EmpParseCallbacks @ 0x1407CDE68 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x1407CE084 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x1407CE1D8 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1407CE640 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1407CE96C (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1407CEB80 (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1407CED90 (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPush @ 0x1407CF2DC (EmpRuleParserStackPush.c)
 *     sub_1407CF6FC @ 0x1407CF6FC (sub_1407CF6FC.c)
 *     MmFreeLoaderBlock @ 0x1407CFF0C (MmFreeLoaderBlock.c)
 *     InitBootProcessor @ 0x1407D089C (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407D146C (Phase1InitializationDiscard.c)
 *     KiInitializeMTRR @ 0x1407D292C (KiInitializeMTRR.c)
 *     KiAllocateCpuSetData @ 0x1407D36D0 (KiAllocateCpuSetData.c)
 *     KeStartAllProcessors @ 0x1407D3888 (KeStartAllProcessors.c)
 *     MmInitNucleus @ 0x1407D42F4 (MmInitNucleus.c)
 *     MmInitializeMemoryLimits @ 0x1407D5674 (MmInitializeMemoryLimits.c)
 *     IoReportHalResourceUsage @ 0x1407D57B0 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x1407D5960 (IopInitializeResourceMap.c)
 *     IopReportBootResources @ 0x1407D5CA4 (IopReportBootResources.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1407D6020 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeSystemHive @ 0x1407D6AC0 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407D6D64 (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1407D74A8 (CmpInitializePreloadedHive.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407D7D8C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407D7FF8 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemBiosInformation @ 0x1407D84CC (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407D87DC (CmpSetVideoBiosInformation.c)
 *     CmpGetRegistryValue @ 0x1407D8E8C (CmpGetRegistryValue.c)
 *     CmpParseInfBuffer @ 0x1407D9018 (CmpParseInfBuffer.c)
 *     CmpGetToken @ 0x1407D92F8 (CmpGetToken.c)
 *     CmpAppendValue @ 0x1407D9584 (CmpAppendValue.c)
 *     CmpAppendLine @ 0x1407D9600 (CmpAppendLine.c)
 *     CmpAppendSection @ 0x1407D9680 (CmpAppendSection.c)
 *     MiBuildImportsForBootDrivers @ 0x1407D9908 (MiBuildImportsForBootDrivers.c)
 *     sub_1407DA854 @ 0x1407DA854 (sub_1407DA854.c)
 *     sub_1407DB064 @ 0x1407DB064 (sub_1407DB064.c)
 *     BvgaSaveResources @ 0x1407DB5D0 (BvgaSaveResources.c)
 *     CcInitializeVacbs @ 0x1407DB71C (CcInitializeVacbs.c)
 *     PopInitPlatformSettings @ 0x1407DBA38 (PopInitPlatformSettings.c)
 *     KiComputeNumaCosts @ 0x1407DBBB8 (KiComputeNumaCosts.c)
 *     WheapInitializeErrorSourceTable @ 0x1407DC5C4 (WheapInitializeErrorSourceTable.c)
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
 *     BapdpProcessBootMetadata @ 0x1407DD504 (BapdpProcessBootMetadata.c)
 *     sub_1407DD578 @ 0x1407DD578 (sub_1407DD578.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407DDE74 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407DE1E4 (PiAuCreateStandardSecurityObject.c)
 *     DbgkpCreateNotificationEvent @ 0x1407DE814 (DbgkpCreateNotificationEvent.c)
 *     PfSnInitializePrefetcher @ 0x1407DF0C8 (PfSnInitializePrefetcher.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407E0D6C (PspInitializeProtectedProcessParameters.c)
 *     PsInitializeQuotaSystem @ 0x1407E1018 (PsInitializeQuotaSystem.c)
 *     FsRtlInitSystem @ 0x1407E124C (FsRtlInitSystem.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1407E1578 (FsRtlGetCompatibilityModeValue.c)
 *     IopStoreArcInformation @ 0x1407E19C0 (IopStoreArcInformation.c)
 *     BootApplicationPersistentDataInitialize @ 0x1407E1BB4 (BootApplicationPersistentDataInitialize.c)
 *     WheapCreatePerProcessorInfo @ 0x1407E2118 (WheapCreatePerProcessorInfo.c)
 *     ObpGetDosDevicesProtection @ 0x1407E27EC (ObpGetDosDevicesProtection.c)
 *     SepLoadNgenLocations @ 0x1407E3034 (SepLoadNgenLocations.c)
 *     KiPerformGroupConfiguration @ 0x1407E3360 (KiPerformGroupConfiguration.c)
 *     SepRmDbInitialization @ 0x1407E38EC (SepRmDbInitialization.c)
 *     ExpKeyedEventInitialization @ 0x1407E4030 (ExpKeyedEventInitialization.c)
 *     PiLastGoodCopyKeyContents @ 0x1407E43B4 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x1407E4464 (IopFileUtilRename.c)
 *     PopUmpoInitializeChannel @ 0x1407E46C0 (PopUmpoInitializeChannel.c)
 *     PspInitializeSiloStructures @ 0x1407E4ED8 (PspInitializeSiloStructures.c)
 *     ExpInitializeSvm @ 0x1407E5748 (ExpInitializeSvm.c)
 *     EtwpReadConfigParameters @ 0x1407E694C (EtwpReadConfigParameters.c)
 *     PnpInitializeDeviceEvents @ 0x1407E71F4 (PnpInitializeDeviceEvents.c)
 *     ObpInitStackTrace @ 0x1407E7A5C (ObpInitStackTrace.c)
 *     PnpBusTypeGuidInitialize @ 0x1407E8688 (PnpBusTypeGuidInitialize.c)
 *     MfgInitSystem @ 0x1407E8BA0 (MfgInitSystem.c)
 *     PspIumInitialize @ 0x1407E8D88 (PspIumInitialize.c)
 *     PoFxRegisterDebugger @ 0x1407E8DD4 (PoFxRegisterDebugger.c)
 *     HeadlessInit @ 0x1407E9094 (HeadlessInit.c)
 *     CreateMiniNtBootKey @ 0x1407F7DAC (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x1407F8518 (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407F9954 (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x1407F9DD8 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407F9E94 (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x1407FA624 (PipProcessPendingObjects.c)
 *     KiInitializeCacheErrataSupport @ 0x1407FB13C (KiInitializeCacheErrataSupport.c)
 *     RtlInitializeExceptionLog @ 0x1407FB9C0 (RtlInitializeExceptionLog.c)
 *     SeSystemIntegrityRegisterPolicy @ 0x1407FBA0C (SeSystemIntegrityRegisterPolicy.c)
 *     VhdiInitializeBootDisk @ 0x1407FCB20 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1407FD2E8 (VhdiQueryVolumeVhdFilePath.c)
 * Callees:
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     RtlCaptureStackBackTrace @ 0x14001D418 (RtlCaptureStackBackTrace.c)
 *     KxWaitForLockOwnerShip @ 0x140042D90 (KxWaitForLockOwnerShip.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpAllocateBigPool @ 0x140046030 (ExpAllocateBigPool.c)
 *     MiAllocatePoolPages @ 0x140046C90 (MiAllocatePoolPages.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MmGetSessionIdEx @ 0x140089328 (MmGetSessionIdEx.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400FF2B0 (ExpInsertPoolTrackerExpansion.c)
 *     KiAbThreadInsertList @ 0x14012B960 (KiAbThreadInsertList.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14017E7A0 (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTracePool @ 0x14017E810 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14018B440 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140195A80 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x140200B54 (KiAcquireQueuedSpinLockInstrumented.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 *     MmAllocateSpecialPool @ 0x14021F6C4 (MmAllocateSpecialPool.c)
 *     ExpUseSpecialPool @ 0x140262604 (ExpUseSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     ExDeferredFreePool @ 0x14028A240 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14048B620 (MiSessionPoolVector.c)
 *     VeAllocatePoolWithTagPriority @ 0x140736208 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  ULONG v3; // esi
  SIZE_T v4; // r10
  POOL_TYPE v5; // ebp
  __int16 v6; // bx
  int v7; // edi
  __int64 v8; // rax
  PVOID result; // rax
  unsigned int v10; // ebx
  void *SpecialPool; // rax
  unsigned __int64 v12; // r9
  size_t v13; // rdi
  unsigned int v14; // esi
  unsigned __int64 v15; // rax
  int v16; // ebp
  int v17; // edx
  __int64 v18; // r9
  __int64 v19; // r8
  unsigned __int32 v20; // r11d
  unsigned __int64 v21; // rdi
  int v22; // r10d
  unsigned __int64 v23; // rcx
  __int64 v24; // rsi
  int v25; // eax
  __int64 v26; // rbx
  int v27; // edx
  ULONG_PTR v28; // rdi
  unsigned int v29; // r9d
  unsigned int v30; // r9d
  struct _KPRCB *CurrentPrcb; // rdx
  _GENERAL_LOOKASIDE_POOL *PPNxPagedLookasideList; // rdi
  _GENERAL_LOOKASIDE_POOL *v33; // rdi
  PSLIST_ENTRY v34; // rbx
  __int64 v35; // r8
  char v36; // si
  __int64 v37; // rbp
  int v38; // r8d
  int v39; // eax
  unsigned int v40; // r8d
  __int64 v41; // r8
  int v42; // edx
  ULONG_PTR v43; // rbx
  ULONG_PTR v44; // r9
  __int64 v45; // r8
  __int64 v46; // rcx
  ULONG_PTR *v47; // rsi
  ULONG_PTR v48; // rdi
  unsigned __int8 v49; // al
  _QWORD *v50; // rdx
  struct _KTHREAD *v51; // rbx
  __int64 AbOrphanedEntrySummary; // rax
  unsigned int AbEntrySummary; // edx
  __int64 v54; // rcx
  __int64 v55; // rsi
  int SessionId; // eax
  __int16 v57; // ax
  unsigned __int8 CurrentIrql; // bl
  int v59; // eax
  PVOID *v60; // rbx
  char v61; // al
  struct _KTHREAD *CurrentThread; // rsi
  PVOID *PoolWithTag; // rax
  volatile signed __int32 *v64; // rcx
  signed __int32 v65; // ebp
  _KDPC *Dpc; // rcx
  volatile signed __int64 *p_Blink; // rcx
  unsigned __int8 v68; // bp
  struct _KPRCB *v69; // rbx
  unsigned __int8 v70; // bl
  signed __int32 v71; // eax
  ULONG_PTR PoolPages; // rax
  __int64 v73; // r9
  ULONG_PTR v74; // r8
  ULONG_PTR v75; // r9
  ULONG_PTR v76; // rax
  ULONG_PTR v77; // rax
  char v78; // r8
  ULONG_PTR v79; // rdx
  _BYTE *v80; // rcx
  char v81; // al
  _BYTE *v82; // rax
  __int16 v83; // ax
  __int64 *v84; // rdx
  __int64 v85; // rcx
  __int64 **v86; // rax
  struct _KTHREAD *v87; // rsi
  char v88; // bp
  struct _LIST_ENTRY *v89; // rdi
  struct _LIST_ENTRY *v90; // rax
  volatile signed __int32 *v91; // rcx
  struct _LIST_ENTRY **v92; // rdi
  struct _LIST_ENTRY *v93; // rcx
  struct _LIST_ENTRY *v94; // rdx
  unsigned int *p_Processor; // rdi
  __int64 *v96; // rcx
  __int64 v97; // rdx
  struct _LIST_ENTRY *Flink; // rcx
  volatile signed __int64 *v99; // rsi
  unsigned __int8 v100; // si
  signed __int32 v101; // eax
  ULONG_PTR v102; // rsi
  ULONG_PTR v103; // rdi
  KSPIN_LOCK *v104; // rcx
  __int64 v105; // rbp
  unsigned __int8 v106; // cl
  __int64 *v107; // rsi
  __int64 v108; // rcx
  __int64 **v109; // rax
  unsigned __int8 v110; // si
  signed __int32 v111; // eax
  __int16 v112; // ax
  unsigned int v113; // esi
  int v114; // edx
  int v115; // r8d
  __int64 v116; // r10
  __int64 v117; // r9
  unsigned __int64 v118; // rsi
  int v119; // r11d
  __int64 v120; // rcx
  __int64 v121; // rbp
  int v122; // eax
  __int64 v123; // rdi
  int v124; // edx
  char v125; // si
  unsigned int v126; // ecx
  ULONG_PTR v127; // rdx
  __int64 v128; // rcx
  unsigned int v130; // [rsp+30h] [rbp-A8h]
  unsigned __int32 v131; // [rsp+30h] [rbp-A8h]
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-A4h]
  ULONG_PTR BugCheckParameter3_4; // [rsp+38h] [rbp-A0h]
  ULONG_PTR BugCheckParameter3_4a; // [rsp+38h] [rbp-A0h]
  ULONG_PTR BugCheckParameter3_4b; // [rsp+38h] [rbp-A0h]
  int v136; // [rsp+40h] [rbp-98h]
  ULONG_PTR *v137; // [rsp+40h] [rbp-98h]
  unsigned __int64 v138; // [rsp+40h] [rbp-98h]
  __int64 v139; // [rsp+48h] [rbp-90h]
  __int64 v140; // [rsp+48h] [rbp-90h]
  __int64 v141; // [rsp+48h] [rbp-90h]
  unsigned int v142; // [rsp+50h] [rbp-88h]
  int v143; // [rsp+54h] [rbp-84h]
  void *v144; // [rsp+58h] [rbp-80h]
  int v145; // [rsp+58h] [rbp-80h]
  int v146; // [rsp+58h] [rbp-80h]
  unsigned __int8 v147; // [rsp+60h] [rbp-78h]
  int v148; // [rsp+60h] [rbp-78h]
  __int64 v149; // [rsp+68h] [rbp-70h]
  unsigned __int8 v150; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE v151; // [rsp+70h] [rbp-68h] BYREF
  int v152; // [rsp+88h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+90h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v154; // [rsp+A8h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  signed int v156; // [rsp+E0h] [rbp+8h]
  int v157; // [rsp+E0h] [rbp+8h]
  size_t Size; // [rsp+E8h] [rbp+10h]
  unsigned int v159; // [rsp+F8h] [rbp+20h]
  unsigned __int8 v160; // [rsp+F8h] [rbp+20h]
  int v161; // [rsp+F8h] [rbp+20h]

  Size = NumberOfBytes;
  v156 = PoolType;
  v3 = Tag;
  v4 = NumberOfBytes;
  v5 = PoolType;
  if ( (PoolType & 0x44) == 0x44 )
  {
    v5 = PoolType & 0xFFFFFFFB;
    v156 = PoolType & 0xFFFFFFFB;
  }
  v6 = ExpPoolFlags;
  v7 = v5 & 1;
  if ( (v5 & 0x20) == 0 )
  {
    v8 = PoolVector[v5 & 1];
    goto LABEL_8;
  }
  if ( (v5 & 1) != 0 )
  {
    v8 = MiSessionPoolVector(0x140000000uLL, NumberOfBytes);
LABEL_8:
    BugCheckParameter3_4 = v8;
    if ( (v5 & 1) != 0 )
      goto LABEL_13;
    goto LABEL_9;
  }
  v8 = PoolVector[0];
  BugCheckParameter3_4 = PoolVector[0];
LABEL_9:
  if ( (v5 & 0x200) == 0 )
  {
    if ( (v6 & 0x800) != 0 )
    {
      v5 |= 0x200u;
      v156 = v5;
    }
    else
    {
      BugCheckParameter3_4 = v8 + 4416;
    }
  }
LABEL_13:
  if ( (v6 & 8) != 0 )
  {
    if ( (v5 & 0x80000080) == 0 )
      return (PVOID)VeAllocatePoolWithTagPriority(v5, NumberOfBytes, Tag, HighPoolPriority, retaddr);
    v5 &= ~0x80u;
    v156 = v5;
  }
  if ( MmSpecialPoolTag )
  {
    if ( (unsigned int)ExpUseSpecialPool(v4, Tag) )
    {
      v10 = v5;
      v159 = v5;
      if ( (v5 & 0x21) == 0x20 )
      {
        v10 = v5 & 0xFFFFFFDF;
        v159 = v5 & 0xFFFFFFDF;
      }
      SpecialPool = (void *)MmAllocateSpecialPool(Size, v3, v10, 2);
      v144 = SpecialPool;
      v12 = (unsigned __int64)SpecialPool;
      if ( SpecialPool )
      {
        v13 = Size;
        if ( (v5 & 0x40) != 0 )
        {
          v13 = Size - 8;
          Size -= 8LL;
        }
        if ( v5 < NonPagedPool )
        {
          memset(SpecialPool, 0, v13);
          v12 = (unsigned __int64)v144;
        }
        v14 = v3 & 0x7FFFFFFF;
        v130 = v14;
        if ( v14 == PoolHitTag )
          __debugbreak();
        v15 = DWORD1(PerfGlobalGroupMask);
        if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
          v15 = EtwTracePool(0xE20u, v10, v14, v12, v13);
        v16 = v10 & 0x20;
        if ( (v10 & 0x20) != 0 )
        {
          v19 = ExpSessionPoolTrackTable;
          v17 = ExpSessionPoolTrackTableMask;
          v18 = ExpSessionPoolTrackTableSize;
        }
        else
        {
          LODWORD(v15) = KeGetPcr()->Prcb.Number;
          v17 = PoolTrackTableMask;
          v18 = PoolTrackTableSize;
          v19 = (__int64)*(&ExPoolTagTables + v15);
        }
        v20 = v14;
        BugCheckParameter3_4a = v18;
        v136 = v17;
        v139 = v19;
        v21 = v17 & ((40543 * v14) ^ ((40543 * (unsigned __int64)v14) >> 32));
        v22 = v17 & ((40543 * v14) ^ ((40543 * (unsigned __int64)v14) >> 32));
        v157 = v22;
        v23 = v21;
        v24 = 40 * v21;
        v25 = *(_DWORD *)(v19 + 40 * v21);
        v26 = v19 + 40 * v21;
        if ( v25 == v130 )
        {
LABEL_47:
          if ( (v159 & 1) != 0 )
          {
            _InterlockedIncrement((volatile signed __int32 *)(v26 + 24));
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 32), Size);
          }
          else
          {
            _InterlockedIncrement((volatile signed __int32 *)(v26 + 4));
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 16), Size);
          }
          _InterlockedIncrement(&ExpSpecialAllocations);
          return v144;
        }
        while ( 1 )
        {
          if ( !v25 )
          {
            if ( !v16 )
            {
              v27 = *(_DWORD *)(v24 + PoolTrackTable);
              if ( v27 )
              {
                *(_DWORD *)v26 = v27;
                goto LABEL_46;
              }
              v17 = v136;
            }
            if ( v23 != v18 - 1 )
            {
              if ( v16 )
              {
                _InterlockedCompareExchange((volatile signed __int32 *)v26, v20, 0);
              }
              else
              {
                KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &LockHandle);
                if ( !*(_DWORD *)(v24 + PoolTrackTable) )
                {
                  *(_DWORD *)(v24 + PoolTrackTable) = v130;
                  *(_DWORD *)v26 = v130;
                }
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                v19 = v139;
                v22 = v157;
                v20 = v130;
              }
              goto LABEL_46;
            }
          }
          LODWORD(v21) = v17 & (v21 + 1);
          if ( (_DWORD)v21 == v22 )
          {
            ExpInsertPoolTrackerExpansion(v20, Size, v159);
            _InterlockedIncrement(&ExpSpecialAllocations);
            return v144;
          }
LABEL_46:
          v17 = v136;
          v18 = BugCheckParameter3_4a;
          v23 = (unsigned int)v21;
          v24 = 40LL * (unsigned int)v21;
          v25 = *(_DWORD *)(v19 + v24);
          v26 = v19 + v24;
          if ( v25 == v20 )
            goto LABEL_47;
        }
      }
      v6 = ExpPoolFlags;
    }
    v4 = Size;
  }
  if ( v4 > 0xFE0 )
  {
    result = (PVOID)ExpAllocateBigPool(0LL, v5, v4, v3, 0);
    if ( !result )
    {
      v28 = Size;
      goto LABEL_57;
    }
    return result;
  }
  if ( !v4 )
    LODWORD(v4) = 1;
  v29 = v4 + 31;
  if ( (v5 & 4) != 0 )
  {
    if ( ExpCacheLineSize * ((ExpCacheLineSize + (((_DWORD)v4 + 31) & 0xFFFFFFF0) - 1) / ExpCacheLineSize + 1) > 0xFE0 )
    {
      v5 &= ~4u;
      v156 = v5;
    }
    else
    {
      v29 = ExpCacheLineSize * ((ExpCacheLineSize + (((_DWORD)v4 + 31) & 0xFFFFFFF0) - 1) / ExpCacheLineSize + 1);
    }
  }
  v30 = v29 >> 4;
  v142 = v30;
  if ( v7 )
  {
    if ( (v5 & 0x20) != 0 )
    {
      if ( v30 > ExpSessionPoolSmallLists )
        goto LABEL_105;
      v33 = (_GENERAL_LOOKASIDE_POOL *)(((unsigned __int64)v30 << 7) + ExpSessionPoolLookaside - 128);
      ++v33->TotalAllocates;
      v34 = RtlpInterlockedPopEntrySList(&v33->ListHead);
      if ( !v34 )
      {
        v30 = v142;
        goto LABEL_105;
      }
      goto LABEL_102;
    }
    if ( v5 < NonPagedPool )
      goto LABEL_105;
    if ( v30 <= 0x20 )
    {
      if ( (v6 & 0x100) != 0 )
        goto LABEL_83;
      v33 = &KeGetCurrentPrcb()->PPNPagedLookasideList[v30 + 31];
      ++v33->TotalAllocates;
      v34 = RtlpInterlockedPopEntrySList(&v33->ListHead);
      if ( v34 )
        goto LABEL_102;
      v6 = ExpPoolFlags;
      v30 = v142;
    }
    if ( (v6 & 0x100) == 0 )
    {
      if ( (unsigned __int16)KeNumberNodes <= 1u )
      {
        v39 = ExpNumberOfPagedPools;
      }
      else
      {
        v39 = ExpNumberOfPagedPools;
        v40 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
        if ( v40 < ExpNumberOfPagedPools )
        {
          BugCheckParameter3 = v40 + 1;
          v37 = ExpPagedPoolDescriptor[v40 + 1];
          BugCheckParameter3_4 = v37;
          goto LABEL_106;
        }
      }
      BugCheckParameter3 = 1;
      v38 = 1;
      if ( v39 != 1 )
      {
        v41 = (unsigned int)(ExpPoolIndex + 1);
        if ( (unsigned int)v41 > ExpNumberOfPagedPools )
          v41 = 1LL;
        v42 = v41;
        ExpPoolIndex = v41;
        do
        {
          if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v41] + 16) )
            break;
          v41 = (unsigned int)(v41 + 1);
          if ( (unsigned int)v41 > ExpNumberOfPagedPools )
            v41 = 1LL;
        }
        while ( (_DWORD)v41 != v42 );
        BugCheckParameter3 = v41;
        v37 = ExpPagedPoolDescriptor[(unsigned int)v41];
        BugCheckParameter3_4 = v37;
        goto LABEL_106;
      }
LABEL_86:
      v37 = ExpPagedPoolDescriptor[v38];
      BugCheckParameter3_4 = v37;
LABEL_106:
      v36 = v156;
      goto LABEL_107;
    }
LABEL_83:
    v38 = ExpNumberOfPagedPools;
    if ( (v5 & 0x100) == 0 )
      v38 = 1;
    BugCheckParameter3 = v38;
    goto LABEL_86;
  }
  if ( v30 > 0x20 )
    goto LABEL_71;
  CurrentPrcb = KeGetCurrentPrcb();
  PPNxPagedLookasideList = CurrentPrcb->PPNxPagedLookasideList;
  if ( (v5 & 0x200) == 0 )
    PPNxPagedLookasideList = CurrentPrcb->PPNPagedLookasideList;
  v33 = &PPNxPagedLookasideList[v30 - 1];
  ++v33->TotalAllocates;
  v34 = RtlpInterlockedPopEntrySList(&v33->ListHead);
  if ( v34 )
  {
LABEL_102:
    v43 = (ULONG_PTR)&v34[-1];
    v44 = *(_QWORD *)(v43 + 8);
    if ( v44 != (v43 ^ ExpPoolQuotaCookie) )
      KeBugCheckEx(0x19u, 0xEuLL, v43, v44, v43 ^ ExpPoolQuotaCookie);
    ++v33->AllocateMisses;
    *(_BYTE *)(v43 + 3) = v5 & 0x6D | 2;
LABEL_252:
    v112 = *(_WORD *)(v43 + 2);
    *(_DWORD *)(v43 + 4) = v3;
    v113 = v3 & 0x7FFFFFFF;
    v138 = 16LL * (unsigned __int8)v112;
    v131 = v113;
    if ( v113 == PoolHitTag )
      __debugbreak();
    if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
      EtwTracePool(0xE20u, v5, v113, v43 + 16, 16LL * (unsigned __int8)v112);
    v114 = v5 & 0x20;
    v161 = v114;
    if ( (v5 & 0x20) != 0 )
    {
      v117 = ExpSessionPoolTrackTable;
      v115 = ExpSessionPoolTrackTableMask;
      v116 = ExpSessionPoolTrackTableSize;
    }
    else
    {
      v115 = PoolTrackTableMask;
      v116 = PoolTrackTableSize;
      v117 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
    }
    BugCheckParameter3_4b = v116;
    v148 = v115;
    v141 = v117;
    v118 = v115 & ((40543 * v113) ^ ((40543 * (unsigned __int64)v113) >> 32));
    v119 = v118;
    v146 = v118;
    v120 = (unsigned int)v118;
    v121 = 40 * v118;
    v122 = *(_DWORD *)(v117 + 40 * v118);
    v123 = v117 + 40 * v118;
    if ( v122 == v131 )
    {
LABEL_273:
      v125 = v156;
      if ( (v156 & 1) != 0 )
      {
        _InterlockedIncrement((volatile signed __int32 *)(v123 + 24));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v123 + 32), v138);
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v123 + 4));
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v123 + 16), v138);
      }
LABEL_277:
      if ( (v125 & 4) != 0 )
      {
        *(_BYTE *)(v43 + 3) &= ~4u;
        v126 = (ExpCacheLineSize - 1) & (-16 - v43);
        if ( v126 )
        {
          v127 = v43 + v126;
          v128 = (__int64)v126 >> 4;
          *(_BYTE *)v127 = v128;
          *(_BYTE *)(v127 + 2) = *(_BYTE *)(v43 + 2) - v128;
          *(_BYTE *)(v127 + 1) = *(_BYTE *)(v43 + 1);
          *(_BYTE *)(v127 + 3) = *(_BYTE *)(v43 + 3) | 4;
          *(_DWORD *)(v127 + 4) = *(_DWORD *)(v43 + 4);
          if ( (unsigned __int8)*(_WORD *)v127 > 1u )
            *(_QWORD *)(v43 + 16) = ExpPoolQuotaCookie ^ v127;
          v43 = v127;
        }
      }
      result = (PVOID)(v43 + 16);
      *(_QWORD *)(v43 + 16) = 0LL;
      return result;
    }
    while ( 1 )
    {
      if ( !v122 )
      {
        if ( !v114 )
        {
          v124 = *(_DWORD *)(PoolTrackTable + v121);
          if ( v124 )
          {
            *(_DWORD *)v123 = v124;
            goto LABEL_272;
          }
          v114 = v161;
        }
        if ( v120 != v116 - 1 )
        {
          if ( v114 )
          {
            _InterlockedCompareExchange((volatile signed __int32 *)v123, v131, 0);
          }
          else
          {
            KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v154);
            if ( !*(_DWORD *)(PoolTrackTable + v121) )
            {
              *(_DWORD *)(PoolTrackTable + v121) = v131;
              *(_DWORD *)v123 = v131;
            }
            KeReleaseInStackQueuedSpinLock(&v154);
            v115 = v148;
            v117 = v141;
            v119 = v146;
          }
          goto LABEL_272;
        }
      }
      LODWORD(v118) = v115 & (v118 + 1);
      if ( (_DWORD)v118 == v119 )
      {
        v125 = v156;
        ExpInsertPoolTrackerExpansion(v131, v138, v156);
        goto LABEL_277;
      }
LABEL_272:
      v114 = v161;
      v116 = BugCheckParameter3_4b;
      v120 = (unsigned int)v118;
      v121 = 40LL * (unsigned int)v118;
      v122 = *(_DWORD *)(v117 + v121);
      v123 = v117 + v121;
      if ( v122 == v131 )
        goto LABEL_273;
    }
  }
  v30 = v142;
LABEL_71:
  if ( (unsigned int)ExpNumberOfNonPagedPools <= 1 )
  {
LABEL_105:
    v37 = BugCheckParameter3_4;
    BugCheckParameter3 = 0;
    goto LABEL_106;
  }
  v35 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
  BugCheckParameter3 = v35;
  if ( (unsigned int)v35 >= ExpNumberOfNonPagedPools )
  {
    v35 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
    BugCheckParameter3 = ExpNumberOfNonPagedPools - 1;
  }
  v36 = v156;
  v37 = ExpNonPagedPoolDescriptor[v35];
  BugCheckParameter3_4 = v37;
  if ( (v156 & 0x200) == 0 )
  {
    v37 += 4416LL;
    BugCheckParameter3_4 = v37;
  }
LABEL_107:
  v145 = 0;
  v45 = v36 & 1;
  v143 = v36 & 1;
  v46 = v37 + 16 * (v30 - 1 + 20LL);
  v149 = v46;
  v140 = v45;
  while ( 2 )
  {
    v47 = (ULONG_PTR *)v46;
    v137 = (ULONG_PTR *)v46;
    do
    {
      if ( (ULONG_PTR *)*v47 == v47 )
        goto LABEL_167;
      v48 = v37 + 8;
      if ( v45 )
      {
        if ( !KiAbEnabled )
        {
          v55 = 0LL;
LABEL_132:
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v48, 0) )
            ExpAcquireFastMutexContended(v48, v55);
          if ( v55 )
            *(_BYTE *)(v55 + 26) |= 1u;
          *(_QWORD *)(v37 + 16) = KeGetCurrentThread();
          v59 = CurrentIrql;
          v60 = 0LL;
          *(_DWORD *)(v37 + 56) = v59;
          v61 = 0;
          CurrentThread = KeGetCurrentThread();
          v147 = 0;
          if ( PspAlwaysTrackIoBoosting )
          {
            PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
            v60 = PoolWithTag;
            if ( PoolWithTag )
            {
              memset(PoolWithTag, 0, 0x70uLL);
              RtlCaptureStackBackTrace(1u, 0xAu, v60 + 2, 0LL);
              v60[12] = KeGetCurrentThread();
              v60[13] = 0LL;
            }
            v64 = (volatile signed __int32 *)&CurrentThread[1].WaitBlockFill10[8];
            v147 = KeGetCurrentIrql();
            __writecr8(2uLL);
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireSpinLockInstrumented(v64);
            }
            else if ( _interlockedbittestandset64(v64, 0LL) )
            {
              KxWaitForSpinLockAndAcquire(v64);
            }
            v61 = 1;
          }
          v65 = _InterlockedIncrement((volatile signed __int32 *)&CurrentThread[1].Timer.TimerListEntry.Flink + 1);
          if ( v61 )
          {
            if ( v60 )
            {
              Dpc = CurrentThread[1].Timer.Dpc;
              *v60 = &CurrentThread[1].Timer.TimerListEntry.Blink;
              v60[1] = Dpc;
              if ( *(struct _KTHREAD **)&Dpc->TargetInfoAsUlong != (struct _KTHREAD *)&CurrentThread[1].Timer.TimerListEntry.Blink )
                __fastfail(3u);
              *(_QWORD *)&Dpc->TargetInfoAsUlong = v60;
              CurrentThread[1].Timer.Dpc = (_KDPC *)v60;
            }
            p_Blink = (volatile signed __int64 *)&CurrentThread[1].WaitBlock[0].WaitListEntry.Blink;
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
              KiReleaseSpinLockInstrumented(p_Blink, retaddr);
            else
              _InterlockedAnd64(p_Blink, 0LL);
            __writecr8(v147);
          }
          if ( v65 == 1 && KiAbEnabled && CurrentThread->AbWaitEntryCount )
          {
            v68 = KeGetCurrentIrql();
            __writecr8(2uLL);
            v69 = KeGetCurrentPrcb();
            if ( (unsigned int)KiAbThreadInsertList(
                                 (__int64)CurrentThread,
                                 &v69->AbPropagateBoostsList.Next,
                                 &CurrentThread->PropagateBoostsEntry.Next) )
              KiAbQueueAutoBoostDpc((__int64)v69);
            __writecr8(v68);
          }
          v37 = BugCheckParameter3_4;
          v47 = v137;
          goto LABEL_159;
        }
        v51 = KeGetCurrentThread();
        if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
          KeBugCheckEx(0x192u, (ULONG_PTR)v51, v37 + 8, KeGetCurrentIrql(), 0LL);
        --v51->SpecialApcDisable;
        if ( !v51->AbEntrySummary )
        {
          if ( !v51->AbOrphanedEntrySummary )
          {
            v55 = 0LL;
            if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
            {
              EtwTraceAutoBoostEntryExhaustion((__int64)v51, v37 + 8);
              _interlockedbittestandset((volatile signed __int32 *)&v51->116 + 1, 0xFu);
              goto LABEL_128;
            }
            goto LABEL_121;
          }
          AbOrphanedEntrySummary = v51->AbOrphanedEntrySummary;
          v51->AbOrphanedEntrySummary = 0;
          v51->AbEntrySummary |= AbOrphanedEntrySummary;
        }
        AbEntrySummary = v51->AbEntrySummary;
        _BitScanForward((unsigned int *)&v54, AbEntrySummary);
        v152 = v54;
        v51->AbEntrySummary = AbEntrySummary & ~(1 << v54);
        v55 = (__int64)&v51->LockEntries[v54];
        if ( v55 )
        {
          if ( (unsigned __int64)(v37 + 0x70000000008LL) > 0x7FFFFFFFFFLL )
            SessionId = -1;
          else
            SessionId = MmGetSessionIdEx(v51->ApcState.Process);
          *(_DWORD *)(v55 + 40) = SessionId;
          *(_QWORD *)(v55 + 32) = v48 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_128:
          v57 = v51->SpecialApcDisable + 1;
          v51->SpecialApcDisable = v57;
          if ( !v57 && ($CD287064E7C9F7953DE243E927CFCB99 *)v51->ApcState.ApcListHead[0].Flink != &v51->152 )
            KiCheckForKernelApcDelivery();
          goto LABEL_132;
        }
LABEL_121:
        _interlockedbittestandset((volatile signed __int32 *)&v51->116 + 1, 0xFu);
        goto LABEL_128;
      }
      v151.LockQueue.Lock = (unsigned __int64 *volatile)(v37 + 8);
      v151.LockQueue.Next = 0LL;
      v49 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v151.OldIrql = v49;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        KiAcquireQueuedSpinLockInstrumented((__int64)&v151, (volatile __int64 *)(v37 + 8));
      }
      else
      {
        v50 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v48, (__int64)&v151);
        if ( !v50 )
          goto LABEL_160;
        KxWaitForLockOwnerShip((__int64)&v151, v50);
      }
LABEL_159:
      v45 = v140;
LABEL_160:
      if ( (ULONG_PTR *)*v47 != v47 )
      {
        v74 = *v47;
        v75 = *(_QWORD *)(*(_QWORD *)*v47 + 8LL);
        if ( v75 != *v47 || **(_QWORD **)(v74 + 8) != v74 )
          KeBugCheckEx(0x19u, 3uLL, v74, v75, **(_QWORD **)(v74 + 8));
        v76 = *(_QWORD *)v74;
        if ( *(ULONG_PTR **)(v74 + 8) != v47 || *(_QWORD *)(v76 + 8) != v74 )
          __fastfail(3u);
        v43 = v74 - 16;
        *v47 = v76;
        *(_QWORD *)(v76 + 8) = v47;
        v77 = *(unsigned __int8 *)(v74 - 16 + 1);
        if ( (_DWORD)v77 != BugCheckParameter3 )
          KeBugCheckEx(0x19u, 0x23uLL, v77, BugCheckParameter3, v74 - 16);
        if ( (unsigned __int8)*(_WORD *)(v43 + 2) != v142 )
        {
          if ( *(_BYTE *)v43 )
          {
            *(_BYTE *)(v43 + 2) -= v142;
            v79 = v74 - 16;
            v81 = *(_BYTE *)(v43 + 2);
            v43 += 16LL * (unsigned __int8)*(_WORD *)(v43 + 2);
            *(_BYTE *)v43 = v81;
            v82 = (_BYTE *)(v43 + 16LL * v142);
            if ( ((unsigned __int16)v82 & 0xFFF) != 0 )
              *v82 = v142;
          }
          else
          {
            v78 = *(_BYTE *)(v43 + 2) - v142;
            v79 = v43 + 16LL * v142;
            *(_BYTE *)(v79 + 2) = v78;
            v80 = (_BYTE *)(v79 + 16LL * (unsigned __int8)*(_WORD *)(v79 + 2));
            *(_BYTE *)v79 = v142;
            if ( ((unsigned __int16)v80 & 0xFFF) != 0 )
              *v80 = v78;
          }
          *(_BYTE *)(v43 + 2) = v142;
          *(_BYTE *)(v43 + 1) = BugCheckParameter3;
          *(_BYTE *)(v79 + 3) = 0;
          v83 = *(_WORD *)(v79 + 2);
          *(_DWORD *)(v79 + 4) = 1701147206;
          *(_BYTE *)(v79 + 1) = BugCheckParameter3;
          if ( (_BYTE)v83 != 1 )
          {
            v84 = (__int64 *)(v79 + 16);
            v85 = v37 + 16 * ((unsigned int)(unsigned __int8)v83 - 1 + 20LL);
            v86 = *(__int64 ***)(v85 + 8);
            *v84 = v85;
            v84[1] = (__int64)v86;
            if ( *v86 != (__int64 *)v85 )
              __fastfail(3u);
            *v86 = v84;
            *(_QWORD *)(v85 + 8) = v84;
          }
        }
        *(_BYTE *)(v43 + 3) = v156 & 0x6D | 2;
        if ( v156 < 0 )
        {
          memset((void *)(v43 + 16), 0, 16LL * (unsigned __int8)*(_WORD *)(v43 + 2) - 16);
          *(_DWORD *)(v43 + 4) = Tag;
        }
        if ( !v143 )
        {
          KeReleaseInStackQueuedSpinLock(&v151);
LABEL_228:
          _InterlockedIncrement((volatile signed __int32 *)(v37 + 64));
          _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 80), 16LL * (unsigned __int8)*(_WORD *)(v43 + 2));
LABEL_251:
          LOWORD(v5) = v156;
          v3 = Tag;
          goto LABEL_252;
        }
        v87 = KeGetCurrentThread();
        v88 = 0;
        v89 = 0LL;
        v160 = 0;
        if ( PspAlwaysTrackIoBoosting )
        {
          v88 = 1;
          v90 = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
          v89 = v90;
          if ( v90 )
          {
            memset(v90, 0, 0x70uLL);
            RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)&v89[1].Flink, 0LL);
            v89[6].Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
            v89[6].Blink = 0LL;
          }
          v91 = (volatile signed __int32 *)&v87[1].WaitBlockFill10[8];
          v160 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            KiAcquireSpinLockInstrumented(v91);
          }
          else if ( _interlockedbittestandset64(v91, 0LL) )
          {
            KxWaitForSpinLockAndAcquire(v91);
          }
        }
        if ( HIDWORD(v87[1].Timer.TimerListEntry.Flink) )
        {
          _InterlockedDecrement((volatile signed __int32 *)&v87[1].Timer.TimerListEntry.Flink + 1);
          if ( !v88 )
          {
LABEL_225:
            v37 = BugCheckParameter3_4;
            v100 = *(_BYTE *)(BugCheckParameter3_4 + 56);
            *(_QWORD *)(BugCheckParameter3_4 + 16) = 0LL;
            v101 = _InterlockedCompareExchange((volatile signed __int32 *)(BugCheckParameter3_4 + 8), 1, 0);
            if ( v101 )
              ExpReleaseFastMutexContended((volatile signed __int32 *)(BugCheckParameter3_4 + 8), v101);
            __writecr8(v100);
            KeAbPostRelease(BugCheckParameter3_4 + 8);
            goto LABEL_228;
          }
          if ( HIDWORD(v87[1].Timer.TimerListEntry.Flink) )
          {
            if ( v89 )
            {
              Flink = v87[1].WaitBlock[0].WaitListEntry.Flink;
              v89->Flink = (struct _LIST_ENTRY *)&v87[1].Timer.Processor;
              v89->Blink = Flink;
              if ( (unsigned int *)Flink->Flink != &v87[1].Timer.Processor )
                __fastfail(3u);
              Flink->Flink = v89;
              v87[1].WaitBlock[0].WaitListEntry.Flink = v89;
            }
          }
          else
          {
            if ( v89 )
              ExFreePoolWithTag(v89, 0x736F6F42u);
            v92 = &v87[1].Timer.TimerListEntry.Blink;
            while ( *v92 != (struct _LIST_ENTRY *)v92 )
            {
              v93 = *v92;
              v94 = (*v92)->Flink;
              if ( (struct _LIST_ENTRY **)(*v92)->Blink != v92 || v94->Blink != v93 )
                __fastfail(3u);
              *v92 = v94;
              v94->Blink = (struct _LIST_ENTRY *)v92;
              ExFreePoolWithTag(v93, 0x736F6F42u);
            }
            p_Processor = &v87[1].Timer.Processor;
            while ( *(unsigned int **)p_Processor != p_Processor )
            {
              v96 = *(__int64 **)p_Processor;
              v97 = **(_QWORD **)p_Processor;
              if ( *(unsigned int **)(*(_QWORD *)p_Processor + 8LL) != p_Processor || *(__int64 **)(v97 + 8) != v96 )
                __fastfail(3u);
              *(_QWORD *)p_Processor = v97;
              *(_QWORD *)(v97 + 8) = p_Processor;
              ExFreePoolWithTag(v96, 0x736F6F42u);
            }
          }
        }
        if ( v88 )
        {
          v99 = (volatile signed __int64 *)&v87[1].WaitBlock[0].WaitListEntry.Blink;
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            KiReleaseSpinLockInstrumented(v99, retaddr);
          else
            _InterlockedAnd64(v99, 0LL);
          __writecr8(v160);
        }
        goto LABEL_225;
      }
      if ( v45 )
      {
        PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
        v70 = *(_BYTE *)(v48 + 48);
        *(_QWORD *)(v48 + 8) = 0LL;
        v71 = _InterlockedCompareExchange((volatile signed __int32 *)v48, 1, 0);
        if ( v71 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)v48, v71);
        __writecr8(v70);
        KeAbPostRelease(v48);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&v151);
      }
      v45 = v140;
LABEL_167:
      v47 += 2;
      v137 = v47;
    }
    while ( v47 != (ULONG_PTR *)(v37 + 4416) );
    v28 = 4096LL;
    PoolPages = MiAllocatePoolPages(v156 & 0x80000221, 0x1000uLL);
    v43 = PoolPages;
    if ( PoolPages )
    {
      if ( v156 < 0 )
      {
        memset((void *)(PoolPages + 16), 0, 16 * v142 - 16);
        *(_DWORD *)(v43 + 4) = Tag;
      }
      *(_DWORD *)v43 = 0;
      *(_BYTE *)(v43 + 1) = BugCheckParameter3;
      *(_BYTE *)(v43 + 2) = v142;
      *(_BYTE *)(v43 + 3) = v156 & 0x6D | 2;
      v102 = v43 + 16LL * v142;
      *(_DWORD *)v102 = 0;
      *(_BYTE *)(v102 + 2) = -(char)v142;
      *(_BYTE *)v102 = v142;
      *(_BYTE *)(v102 + 1) = BugCheckParameter3;
      _InterlockedIncrement((volatile signed __int32 *)(v37 + 192));
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v37 + 80), 16 * v142);
      if ( *(_BYTE *)(v102 + 2) != 1 )
      {
        v103 = v37 + 8;
        v104 = (KSPIN_LOCK *)(v37 + 8);
        if ( v143 )
        {
          v105 = KeAbPreAcquire((ULONG_PTR)v104, 0LL, 0LL, v73);
          v106 = KeGetCurrentIrql();
          v150 = v106;
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v103, 0) )
          {
            ExpAcquireFastMutexContended(v103, v105);
            v106 = v150;
          }
          if ( v105 )
            *(_BYTE *)(v105 + 26) |= 1u;
          *(_QWORD *)(v103 + 8) = KeGetCurrentThread();
          *(_DWORD *)(v103 + 48) = v106;
          PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
          v37 = BugCheckParameter3_4;
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(v104, &v151);
        }
        v107 = (__int64 *)(v102 + 16);
        v108 = v37 + 16 * (256 - v142 - 1 + 20LL);
        v109 = *(__int64 ***)(v108 + 8);
        *v107 = v108;
        v107[1] = (__int64)v109;
        if ( *v109 != (__int64 *)v108 )
          __fastfail(3u);
        *v109 = v107;
        *(_QWORD *)(v108 + 8) = v107;
        if ( v143 )
        {
          PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
          v110 = *(_BYTE *)(v103 + 48);
          *(_QWORD *)(v103 + 8) = 0LL;
          v111 = _InterlockedCompareExchange((volatile signed __int32 *)v103, 1, 0);
          if ( v111 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)v103, v111);
          __writecr8(v110);
          KeAbPostRelease(v103);
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&v151);
        }
      }
      _InterlockedIncrement((volatile signed __int32 *)(v37 + 64));
      goto LABEL_251;
    }
    if ( ++v145 == 1 && (ExpPoolFlags & 0x200) != 0 )
    {
      ExDeferredFreePool(v37, 0LL);
      v45 = v140;
      v46 = v149;
      continue;
    }
    break;
  }
  LOWORD(v5) = v156;
LABEL_57:
  ++ExPoolFailures;
  if ( (v5 & 2) != 0 )
    KeBugCheckEx(
      0x41u,
      v28,
      dword_140368040[1104 * ((v5 & 0x200) == 0)],
      dword_140367FC8[1104 * ((v5 & 0x200) == 0)],
      0LL);
  if ( (v5 & 0x10) != 0 )
    RtlRaiseStatus(-1073741670);
  return 0LL;
}
