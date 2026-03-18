/*
 * XREFs of ExAllocatePoolWithTag @ 0x140238380
 * Callers:
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x140001854 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     VfAvlReserveNode @ 0x1400025E4 (VfAvlReserveNode.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400027D4 (DbgUnicodeStringToAnsiString.c)
 *     KsepPoolAllocatePaged @ 0x1400028EC (KsepPoolAllocatePaged.c)
 *     SepCaptureHandles @ 0x1400032BC (SepCaptureHandles.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1400033B0 (SepAppendAceToTokenDefaultDacl.c)
 *     SepSetTokenLowboxHandles @ 0x1400035E4 (SepSetTokenLowboxHandles.c)
 *     SepCreateTokenEx @ 0x140004180 (SepCreateTokenEx.c)
 *     SepCaptureTokenSecurityOperations @ 0x140004F74 (SepCaptureTokenSecurityOperations.c)
 *     AuthzBasepMemAlloc @ 0x140006788 (AuthzBasepMemAlloc.c)
 *     MiViewMayContainPage @ 0x140008570 (MiViewMayContainPage.c)
 *     MiInsertInSystemSpace @ 0x14000A670 (MiInsertInSystemSpace.c)
 *     MiCreatePrototypePtes @ 0x14000CC94 (MiCreatePrototypePtes.c)
 *     MiExpandSystemCache @ 0x1400162A8 (MiExpandSystemCache.c)
 *     MiCloneVads @ 0x14001D7C8 (MiCloneVads.c)
 *     KeAllocateXStateContext @ 0x14002240C (KeAllocateXStateContext.c)
 *     MiBuildMappedCluster @ 0x14002F79C (MiBuildMappedCluster.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x140037950 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x14003F010 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExEnterPriorityRegionAndAcquireResourceExclusive @ 0x14003F6E0 (ExEnterPriorityRegionAndAcquireResourceExclusive.c)
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     ExAllocatePoolWithTagPriority @ 0x140041DC0 (ExAllocatePoolWithTagPriority.c)
 *     SeSetLearningModeObjectInformation @ 0x140043210 (SeSetLearningModeObjectInformation.c)
 *     IopAllocateIrpPrivate @ 0x140043750 (IopAllocateIrpPrivate.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiFlushSectionInternal @ 0x140063C80 (MiFlushSectionInternal.c)
 *     MiGetInPageSupportBlock @ 0x140070DF4 (MiGetInPageSupportBlock.c)
 *     IopBuildDeviceIoControlRequest @ 0x140073E30 (IopBuildDeviceIoControlRequest.c)
 *     PpmParkSteerInterrupts @ 0x140074F40 (PpmParkSteerInterrupts.c)
 *     PfSnGetFileInformation @ 0x140079990 (PfSnGetFileInformation.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     SeAccessCheckByType @ 0x14008CBF0 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x14008DC20 (SeCaptureObjectTypeList.c)
 *     SePrivilegePolicyCheck @ 0x14008DF10 (SePrivilegePolicyCheck.c)
 *     ExAllocatePoolWithQuotaTag @ 0x14008E480 (ExAllocatePoolWithQuotaTag.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     SmpKeyedStoreEntryGet @ 0x1400926A8 (SmpKeyedStoreEntryGet.c)
 *     SepMandatorySubProcessToken @ 0x140092DB0 (SepMandatorySubProcessToken.c)
 *     PopCaptureReasonContext @ 0x140097B84 (PopCaptureReasonContext.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400981B4 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     RtlpAllowsLowBoxAccess @ 0x14009A1E4 (RtlpAllowsLowBoxAccess.c)
 *     MiCreateCloneChain @ 0x14009ABD0 (MiCreateCloneChain.c)
 *     EmpEvaluateTargetRule @ 0x14009BD30 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x14009CAA4 (EmpEvaluateNodeLink.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14009E350 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttributeValue @ 0x14009E7F8 (AuthzBasepAllocateSecurityAttributeValue.c)
 *     EtwpEventWriteFull @ 0x14009E960 (EtwpEventWriteFull.c)
 *     CcAllocateInitializeBcb @ 0x1400A0330 (CcAllocateInitializeBcb.c)
 *     MmProbeAndLockSelectedPages @ 0x1400A70B0 (MmProbeAndLockSelectedPages.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     CcFindBitmapRangeToDirty @ 0x1400B3278 (CcFindBitmapRangeToDirty.c)
 *     MiGetWorkingSetInfoList @ 0x1400B9CE0 (MiGetWorkingSetInfoList.c)
 *     FsRtlInitializeBaseMcbEx @ 0x1400BB770 (FsRtlInitializeBaseMcbEx.c)
 *     NtLockVirtualMemory @ 0x1400BB80C (NtLockVirtualMemory.c)
 *     MiInitializeMdlPages @ 0x1400BCA18 (MiInitializeMdlPages.c)
 *     MiObtainMdlCharges @ 0x1400BD288 (MiObtainMdlCharges.c)
 *     MiReferenceIoPages @ 0x1400C16A0 (MiReferenceIoPages.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400C2D40 (RtlpIsNameInExpressionPrivate.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x1400C3240 (RtlpUpcaseUnicodeStringPrivate.c)
 *     MiCreateMdl @ 0x1400C86FC (MiCreateMdl.c)
 *     FsRtlCancelNotify @ 0x1400C94AC (FsRtlCancelNotify.c)
 *     sub_1400CC298 @ 0x1400CC298 (sub_1400CC298.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400CC430 (FsRtlpOplockSendModernAppTermination.c)
 *     IoAllocateWorkItem @ 0x1400CC8CC (IoAllocateWorkItem.c)
 *     FsRtlpWaitOnIrp @ 0x1400CC9E8 (FsRtlpWaitOnIrp.c)
 *     ExpExpandResourceOwnerTable @ 0x1400CF8AC (ExpExpandResourceOwnerTable.c)
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     FsRtlTruncateBaseMcb @ 0x1400D6D10 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x1400D77E4 (FsRtlAddEntry.c)
 *     FsRtlInsertPerFileObjectContext @ 0x1400D7AD8 (FsRtlInsertPerFileObjectContext.c)
 *     MiAllocateAccessLog @ 0x1400D7D70 (MiAllocateAccessLog.c)
 *     PnpRemoveLockedDeviceNode @ 0x1400DA4F4 (PnpRemoveLockedDeviceNode.c)
 *     IoAcquireRemoveLockEx @ 0x1400DAFE0 (IoAcquireRemoveLockEx.c)
 *     PspInsertProperty @ 0x1400DCE10 (PspInsertProperty.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1400DD174 (LdrUnloadAlternateResourceModuleEx.c)
 *     CcExtendVacbArray @ 0x1400E0744 (CcExtendVacbArray.c)
 *     IoWMIWriteEvent @ 0x1400E2250 (IoWMIWriteEvent.c)
 *     CcInitializeVolumeCacheMap @ 0x1400E3538 (CcInitializeVolumeCacheMap.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400E5238 (IopBuildAsynchronousFsdRequest.c)
 *     MiAllocateModWriterEntry @ 0x1400E5684 (MiAllocateModWriterEntry.c)
 *     RtlpCreateHashTable @ 0x1400E5870 (RtlpCreateHashTable.c)
 *     RtlpAllocateSecondLevelDir @ 0x1400E5A00 (RtlpAllocateSecondLevelDir.c)
 *     SeLogAccessFailure @ 0x1400E6334 (SeLogAccessFailure.c)
 *     ExGetSessionPoolTagInfo @ 0x1400E6F20 (ExGetSessionPoolTagInfo.c)
 *     MiExpandFlushMdl @ 0x1400E8448 (MiExpandFlushMdl.c)
 *     CcAllocateInitializeMbcb @ 0x1400E862C (CcAllocateInitializeMbcb.c)
 *     sub_1400EB244 @ 0x1400EB244 (sub_1400EB244.c)
 *     ExAllocatePoolEx @ 0x1400EC218 (ExAllocatePoolEx.c)
 *     IoSetCompletionRoutineEx @ 0x1400ECCF4 (IoSetCompletionRoutineEx.c)
 *     WmipReceiveNotifications @ 0x1400EE5C4 (WmipReceiveNotifications.c)
 *     FsRtlInsertPerFileContextInternal @ 0x1400F1BB0 (FsRtlInsertPerFileContextInternal.c)
 *     PfFbBufferListAllocateTemporary @ 0x1400F1CFC (PfFbBufferListAllocateTemporary.c)
 *     IoAllocateDriverObjectExtension @ 0x1400F29D8 (IoAllocateDriverObjectExtension.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400F2C48 (HvSynchronizeAndDropTemporaryBins.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400F3720 (CmpLogTransactionAbortedWithChildName.c)
 *     SepBuildCapPolicyTable @ 0x1400F3BAC (SepBuildCapPolicyTable.c)
 *     ExAllocatePool @ 0x1400F3D2C (ExAllocatePool.c)
 *     SepExpandSingletonArrays @ 0x1400F3EB4 (SepExpandSingletonArrays.c)
 *     EtwpAllocateWorkerContext @ 0x1400F47E4 (EtwpAllocateWorkerContext.c)
 *     EtwpAllocateFreeBuffers @ 0x1400F485C (EtwpAllocateFreeBuffers.c)
 *     MmOutSwapWorkingSet @ 0x1400F56B4 (MmOutSwapWorkingSet.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400F5CF8 (MiAllocateWorkingSetSwapSupport.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1400F744C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z @ 0x1400F8004 (-SmpStoreMgrCallback@@YAJPEAU_SMKM_STORE_LIST@@PEAXW4_SMKM_CALLBACK_TYPE@@@Z.c)
 *     SmAlloc @ 0x1400F85A0 (SmAlloc.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400F9010 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x1400F9550 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     StEtaStart @ 0x1400F98F4 (StEtaStart.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400F9A24 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400F9CA8 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     PfSnTraceBufferAllocate @ 0x1400FAED4 (PfSnTraceBufferAllocate.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400FBF2C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     IoAllocateMdl @ 0x1400FC2E0 (IoAllocateMdl.c)
 *     sub_1400FC4C8 @ 0x1400FC4C8 (sub_1400FC4C8.c)
 *     MmCreateMdl @ 0x1400FDF78 (MmCreateMdl.c)
 *     CcAsyncCopyRead @ 0x1400FF7AC (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400FF968 (CcPostWorkQueueAsyncRead.c)
 *     IoMakeAssociatedIrpPriv @ 0x140100098 (IoMakeAssociatedIrpPriv.c)
 *     CcWriteBehind @ 0x140101160 (CcWriteBehind.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140102528 (IoReportTargetDeviceChangeAsynchronous.c)
 *     IoBoostThreadIoPriority @ 0x1401028BC (IoBoostThreadIoPriority.c)
 *     IopAllocateIrpExtension @ 0x14010536C (IopAllocateIrpExtension.c)
 *     RtlExpandHashTable @ 0x140105490 (RtlExpandHashTable.c)
 *     HalExamineMBR @ 0x140105C4C (HalExamineMBR.c)
 *     ExAllocateCacheAwarePushLock @ 0x14010603C (ExAllocateCacheAwarePushLock.c)
 *     PopFxQueryBiosDeviceName @ 0x1401079A8 (PopFxQueryBiosDeviceName.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140109D44 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiStoreWriteModifiedPages @ 0x14010A610 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14010B87C (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpAllocate @ 0x14010E714 (SmFpAllocate.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x140114EEC (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140115990 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     MiPfIssueCoalescedSupport @ 0x140116A74 (MiPfIssueCoalescedSupport.c)
 *     SmArrayGrow @ 0x1401173D4 (SmArrayGrow.c)
 *     PopGetCurrentWakeInfos @ 0x14011A654 (PopGetCurrentWakeInfos.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14011AE50 (MiAllocatePfnRepurposeLogDispatch.c)
 *     SmKmAllocateMdlForLock @ 0x14011B02C (SmKmAllocateMdlForLock.c)
 *     KiIntRedirectAllocateObject @ 0x14011B5B0 (KiIntRedirectAllocateObject.c)
 *     BgpFwAllocateMemory @ 0x14011E344 (BgpFwAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14011E928 (BgpFwQueryBootGraphicsInformation.c)
 *     KiIntSteerConnect @ 0x140122B3C (KiIntSteerConnect.c)
 *     WmipBuildTraceDeviceList @ 0x1401252F0 (WmipBuildTraceDeviceList.c)
 *     ExAllocateTimerInternal @ 0x140125434 (ExAllocateTimerInternal.c)
 *     ExRegisterCallback @ 0x14012577C (ExRegisterCallback.c)
 *     MiSessionInsertImage @ 0x14012599C (MiSessionInsertImage.c)
 *     IopAllocateErrorLogEntry @ 0x140126108 (IopAllocateErrorLogEntry.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140126394 (MiAddPrivateFixupEntryForSystemImage.c)
 *     PoClearPowerRequestInternalDeferred @ 0x140126A14 (PoClearPowerRequestInternalDeferred.c)
 *     MiAllocateCombineProto @ 0x140128770 (MiAllocateCombineProto.c)
 *     MiSharePages @ 0x140128D20 (MiSharePages.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x14012C990 (PiDevCfgPushCopyKeyEntry.c)
 *     FstubReadTableEFI @ 0x14012CB00 (FstubReadTableEFI.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x14012D1DC (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14012D564 (ExpSaBinaryArrayInsert.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14012DDB4 (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     ExAllocateAutoExpandPushLock @ 0x14012F27C (ExAllocateAutoExpandPushLock.c)
 *     PspReadDfssConfigurationValues @ 0x14012F840 (PspReadDfssConfigurationValues.c)
 *     CcRegisterExternalCache @ 0x14012FA38 (CcRegisterExternalCache.c)
 *     PopFxCreateDeviceCommon @ 0x1401300B0 (PopFxCreateDeviceCommon.c)
 *     PopFxDuplicateUniqueId @ 0x140130240 (PopFxDuplicateUniqueId.c)
 *     MiInitializePageZeroing @ 0x1401312FC (MiInitializePageZeroing.c)
 *     MiCreateZeroThreadContext @ 0x1401318FC (MiCreateZeroThreadContext.c)
 *     MiDescribePageRun @ 0x140131A08 (MiDescribePageRun.c)
 *     MiInitializeNumaRanges @ 0x140132088 (MiInitializeNumaRanges.c)
 *     ExInitializeProcessor @ 0x140134140 (ExInitializeProcessor.c)
 *     SepInitProcessAuditSd @ 0x140134478 (SepInitProcessAuditSd.c)
 *     EmpQueueRuleUpdateState @ 0x1401350F4 (EmpQueueRuleUpdateState.c)
 *     SepCommonAccessCheckEx @ 0x140135324 (SepCommonAccessCheckEx.c)
 *     IoRegisterPriorityCallback @ 0x140136E4C (IoRegisterPriorityCallback.c)
 *     CcAllocateInitializeVacbArray @ 0x140137910 (CcAllocateInitializeVacbArray.c)
 *     PpmParkRegisterParking @ 0x140138DFC (PpmParkRegisterParking.c)
 *     PpmInstallNewIdleStates @ 0x140139824 (PpmInstallNewIdleStates.c)
 *     sub_14013A7C0 @ 0x14013A7C0 (sub_14013A7C0.c)
 *     sub_14013A824 @ 0x14013A824 (sub_14013A824.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x14013A8B4 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x14013AA88 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x14013AD00 (RtlpMuiRegLoadLicInformation.c)
 *     AdtpBuildMultiSzStringListString @ 0x14013B7E4 (AdtpBuildMultiSzStringListString.c)
 *     SepAdtLogAuditRecord @ 0x14013C4E0 (SepAdtLogAuditRecord.c)
 *     SepAdtMarshallAuditRecord @ 0x14013C63C (SepAdtMarshallAuditRecord.c)
 *     CcInitializeAsyncRead @ 0x14013CC90 (CcInitializeAsyncRead.c)
 *     BapdpProcessEtwEvents @ 0x14013E6F8 (BapdpProcessEtwEvents.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x14013E9AC (EmpEvaluateUpdateRuleEvalState.c)
 *     PopGetDope @ 0x14013F194 (PopGetDope.c)
 *     ExpSaInitialize @ 0x14013F47C (ExpSaInitialize.c)
 *     FsFilterInit @ 0x14013FAE8 (FsFilterInit.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14013FDE8 (LdrpSetAlternateResourceModuleHandle.c)
 *     SepBuildDefaultCape @ 0x1401406DC (SepBuildDefaultCape.c)
 *     IopGetPhysicalMemoryBlock @ 0x140140DD4 (IopGetPhysicalMemoryBlock.c)
 *     SepAdtDetermineInsertQueue @ 0x140140EF4 (SepAdtDetermineInsertQueue.c)
 *     FsRtlRegisterFileSystemFilterCallbacks @ 0x1401410CC (FsRtlRegisterFileSystemFilterCallbacks.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x1401413A4 (MiInitializeWorkingSetManagerParameters.c)
 *     IopInitDumpCapsuleSupport @ 0x140141FF0 (IopInitDumpCapsuleSupport.c)
 *     PfFbBufferListAllocate @ 0x140142DCC (PfFbBufferListAllocate.c)
 *     SmFpPreAllocate @ 0x140142F28 (SmFpPreAllocate.c)
 *     KiSwInterruptDispatch @ 0x14014DF2C (KiSwInterruptDispatch.c)
 *     CcDeferWrite @ 0x1401A8E40 (CcDeferWrite.c)
 *     CmLogMcUpdateStatus @ 0x1401AA1EC (CmLogMcUpdateStatus.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x1401ABF18 (DbgkpWerAllocateNonpagedPool.c)
 *     FsRtlAllocatePool @ 0x1401ACCB4 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x1401ACD24 (FsRtlAllocatePoolWithTag.c)
 *     FsFilterAllocateCompletionStack @ 0x1401AD5D8 (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1401ADF50 (FsRtlpPostStackOverflow.c)
 *     HvlpLockPagesForTransfer @ 0x1401B39EC (HvlpLockPagesForTransfer.c)
 *     BgkDisplayString @ 0x1401B61D0 (BgkDisplayString.c)
 *     IoRaiseHardError @ 0x1401BAE90 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401BB0F8 (IoRaiseInformationalHardError.c)
 *     IopGetSetStreamIdentifier @ 0x1401BB694 (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401BBE08 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopQueryFullDriverPath @ 0x1401BC2AC (IopQueryFullDriverPath.c)
 *     sub_1401BCE54 @ 0x1401BCE54 (sub_1401BCE54.c)
 *     sub_1401BD574 @ 0x1401BD574 (sub_1401BD574.c)
 *     sub_1401BD68C @ 0x1401BD68C (sub_1401BD68C.c)
 *     IoRequestDeviceEjectEx @ 0x1401BE90C (IoRequestDeviceEjectEx.c)
 *     PipCreateNewDependencyEdge @ 0x1401BEBE4 (PipCreateNewDependencyEdge.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x1401C0618 (PiDevCfgPushDriverNodeEntry.c)
 *     PiDevCfgQueryResolveValue @ 0x1401C0680 (PiDevCfgQueryResolveValue.c)
 *     KdRegisterPowerHandler @ 0x1401C1E24 (KdRegisterPowerHandler.c)
 *     KdSetDbgPrintBufferSize @ 0x1401C25A4 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x1401C3D8C (KeProcessorProfileControlArea.c)
 *     KeRegisterNmiCallback @ 0x1401C3F40 (KeRegisterNmiCallback.c)
 *     KeStartProfile @ 0x1401C7CFC (KeStartProfile.c)
 *     KsepPoolAllocateNonPaged @ 0x1401CD248 (KsepPoolAllocateNonPaged.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401D059C (MiReleaseOutSwappedProcessCommit.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 *     MiSortPartitionMdls @ 0x1401D9E48 (MiSortPartitionMdls.c)
 *     MiGetWorkingSetInfo @ 0x1401DF478 (MiGetWorkingSetInfo.c)
 *     MiInsertPteTracker @ 0x1401E09F8 (MiInsertPteTracker.c)
 *     MiCombineWorkingSet @ 0x1401E0DFC (MiCombineWorkingSet.c)
 *     MiConvertRunsToPages @ 0x1401E341C (MiConvertRunsToPages.c)
 *     MmEnumerateBadPages @ 0x1401E608C (MmEnumerateBadPages.c)
 *     PpmQueryPlatformStateResidency @ 0x1401E82FC (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleVeto @ 0x1401E8D70 (PpmUpdateIdleVeto.c)
 *     PopFxRegisterPluginEx @ 0x1401EAB24 (PopFxRegisterPluginEx.c)
 *     PpmSetSimulatedLoad @ 0x1401EC6C0 (PpmSetSimulatedLoad.c)
 *     PoIssueCoalescingNotification @ 0x1401EC7F4 (PoIssueCoalescingNotification.c)
 *     PopUpdateWakeSource @ 0x1401ECAD4 (PopUpdateWakeSource.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x1401F0E14 (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmEventTracePreVetoAccounting @ 0x1401F2DEC (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x1401F2FA0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PpmAllocWmiEvent @ 0x1401F36D4 (PpmAllocWmiEvent.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1401F3890 (PpmWmiIdleAccountingProcedure.c)
 *     DbgpInsertDebugPrintCallback @ 0x1401F785C (DbgpInsertDebugPrintCallback.c)
 *     RtlpTraceDatabaseAllocate @ 0x1401FBC20 (RtlpTraceDatabaseAllocate.c)
 *     NormalizationListEntry_Alloc @ 0x1401FFF4C (NormalizationListEntry_Alloc.c)
 *     SepCopyObjectTypeList @ 0x14020065C (SepCopyObjectTypeList.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14020083C (SepCheckAndCopySelfRelativeSD.c)
 *     SepSetSingletonEntry @ 0x140201014 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x1402010E8 (SepValidateAndCopyGlobalEntry.c)
 *     SepFlattenAcl @ 0x1402011E0 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x140201350 (SepGetLearningModeObjectInformation.c)
 *     SepGetSidValuesDump @ 0x1402016E8 (SepGetSidValuesDump.c)
 *     SepGetTokenSessionMapEntry @ 0x1402017AC (SepGetTokenSessionMapEntry.c)
 *     SeRmReferenceFindCapName @ 0x1402018E4 (SeRmReferenceFindCapName.c)
 *     SepRmCapPoolExpand @ 0x140201A34 (SepRmCapPoolExpand.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140202CD4 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140202EBC (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140202F74 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x140203568 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?SmStoresEtaCheck@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x140203904 (-SmStoresEtaCheck@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?StCompactionPerformFile@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z @ 0x140203E18 (-StCompactionPerformFile@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x1402042A0 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?StDmEtaQueueRefresh@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z @ 0x14020515C (-StDmEtaQueueRefresh@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@@Z.c)
 *     ?StDmSparseBitmapAlloc@?$ST_STORE@USM_TRAITS@@@@SAPEAX_K@Z @ 0x14020691C (-StDmSparseBitmapAlloc@-$ST_STORE@USM_TRAITS@@@@SAPEAX_K@Z.c)
 *     ?StStagingRegionStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@Z @ 0x1402075FC (-StStagingRegionStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU_ST_DATA_MGR@1@PEAU_ST_STAGING_REGION@1@K@.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14020A300 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14020A408 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     VfAllocateDomainCommonBuffer @ 0x14020AF74 (VfAllocateDomainCommonBuffer.c)
 *     MdlInvariantInsertMdlInfo @ 0x14020B388 (MdlInvariantInsertMdlInfo.c)
 *     WdipAccessCheck @ 0x14020CB70 (WdipAccessCheck.c)
 *     WmiVerifierCopyEvent @ 0x14020CDA0 (WmiVerifierCopyEvent.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14020EE5C (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140210108 (EtwpGetTrackingLockSlotForThread.c)
 *     ExRegisterBootDevice @ 0x1402130EC (ExRegisterBootDevice.c)
 *     NtDrawText @ 0x1402136BC (NtDrawText.c)
 *     ExCopyWakeTimerInfo @ 0x1402144A8 (ExCopyWakeTimerInfo.c)
 *     ExpHotAddProcessorToWorkers @ 0x140214C74 (ExpHotAddProcessorToWorkers.c)
 *     ExpAllocateAsid @ 0x140214D90 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x140214FA8 (ExpPrepareNewSvmDevice.c)
 *     WheapReportPersistedErrorRecord @ 0x140215F18 (WheapReportPersistedErrorRecord.c)
 *     WheapAllocErrorRecord @ 0x1402163AC (WheapAllocErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x14021682C (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140217904 (WheapSqmCollectWheaOscTelemetry.c)
 *     sub_140218764 @ 0x140218764 (sub_140218764.c)
 *     sub_140218D28 @ 0x140218D28 (sub_140218D28.c)
 *     sub_140219284 @ 0x140219284 (sub_140219284.c)
 *     AdtpBuildAccessReasonAuditString @ 0x14021D6EC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x14021DBB4 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x14021E624 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     sub_140223024 @ 0x140223024 (sub_140223024.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     PopGetHwConfigurationSignature @ 0x14039DB44 (PopGetHwConfigurationSignature.c)
 *     PopGetBitlockerKeyLocation @ 0x14039DC8C (PopGetBitlockerKeyLocation.c)
 *     PopCloneRange @ 0x14039FAC4 (PopCloneRange.c)
 *     IopCaptureObjectName @ 0x1403A391C (IopCaptureObjectName.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403A5618 (PfpStartLoggingHardFaultEvents.c)
 *     PopNewWakeInfo @ 0x1403A5AF0 (PopNewWakeInfo.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1403A6BA8 (PfSnAllocateEnablePrefetcherTimer.c)
 *     BapdRecordFirmwareBootStats @ 0x1403A6C88 (BapdRecordFirmwareBootStats.c)
 *     PnprInitiateReplaceOperation @ 0x1403AF974 (PnprInitiateReplaceOperation.c)
 *     MiShutdownSystem @ 0x1403B1B80 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1403B1D84 (MiZeroAllPageFiles.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1403B2980 (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x1403B3094 (ExGetNextWakeTime.c)
 *     ExpSystemErrorHandler2 @ 0x1403B3344 (ExpSystemErrorHandler2.c)
 *     WheaInitializeProcessor @ 0x1403B39F4 (WheaInitializeProcessor.c)
 *     CmpUndoDeleteKeyForTrans @ 0x1403B4238 (CmpUndoDeleteKeyForTrans.c)
 *     sub_1403B4904 @ 0x1403B4904 (sub_1403B4904.c)
 *     NtSetCachedSigningLevel @ 0x1403B5004 (NtSetCachedSigningLevel.c)
 *     CmpClearKeyAccessBits @ 0x1403B5728 (CmpClearKeyAccessBits.c)
 *     WmipUnregisterEtwProvider @ 0x1403B58DC (WmipUnregisterEtwProvider.c)
 *     MiInSwapStore @ 0x1403B59C8 (MiInSwapStore.c)
 *     PiUpdateDriverDBCache @ 0x1403B6B8C (PiUpdateDriverDBCache.c)
 *     AslAlloc @ 0x1403B8554 (AslAlloc.c)
 *     PiDeviceRegistration @ 0x1403B9274 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1403B940C (PpForEachDeviceInstanceDriver.c)
 *     PiProcessDriverInstance @ 0x1403B9744 (PiProcessDriverInstance.c)
 *     PiFindDevInstMatch @ 0x1403B9AEC (PiFindDevInstMatch.c)
 *     IopGetRootDevices @ 0x1403B9DD4 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1403BA028 (IopInitializeDeviceInstanceKey.c)
 *     CmpInitCmRM @ 0x1403BA424 (CmpInitCmRM.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     CmpParseCacheAllocEntry @ 0x1403BB2A0 (CmpParseCacheAllocEntry.c)
 *     IopBuildFullDriverPath @ 0x1403BB854 (IopBuildFullDriverPath.c)
 *     IopLoadDriver @ 0x1403BB9F8 (IopLoadDriver.c)
 *     CmpVEExecuteParseLogic @ 0x1403BC378 (CmpVEExecuteParseLogic.c)
 *     IopGetDriverNameFromKeyNode @ 0x1403BC9F4 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x1403BCBA8 (IopGetRegistryValue.c)
 *     CmRealKCBToVirtualPath @ 0x1403BCD04 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1403BD028 (CmpGetVirtualizationID.c)
 *     PspAssignProcessQuotaBlock @ 0x1403BD170 (PspAssignProcessQuotaBlock.c)
 *     CmpInitializeKcbCache @ 0x1403BDA28 (CmpInitializeKcbCache.c)
 *     SepExpandDynamic @ 0x1403BDEA4 (SepExpandDynamic.c)
 *     SepGetLowBoxHandlesEntry @ 0x1403BDF84 (SepGetLowBoxHandlesEntry.c)
 *     ObpParseSymbolicLink @ 0x1403BEA20 (ObpParseSymbolicLink.c)
 *     SepGetLowBoxNumberEntry @ 0x1403BEF4C (SepGetLowBoxNumberEntry.c)
 *     SepQueryNameString @ 0x1403BF450 (SepQueryNameString.c)
 *     PiUEventInitClientRegistrationContext @ 0x1403BFF58 (PiUEventInitClientRegistrationContext.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1403C0714 (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1403C07F4 (IopCreateSecurityDescriptorPerType.c)
 *     SepFilterToken @ 0x1403C11C8 (SepFilterToken.c)
 *     SepCreateClaimAttributes @ 0x1403C23C0 (SepCreateClaimAttributes.c)
 *     SeCaptureAcl @ 0x1403C2594 (SeCaptureAcl.c)
 *     SeCaptureLuidAndAttributesArray @ 0x1403C3368 (SeCaptureLuidAndAttributesArray.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x1403C3EF8 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x1403C404C (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x1403C4490 (SepCaptureInt64Array.c)
 *     MiCreateFixupRecord @ 0x1403C5420 (MiCreateFixupRecord.c)
 *     SepAddLuidToIndexEntry @ 0x1403C5868 (SepAddLuidToIndexEntry.c)
 *     MiCompressRelocations @ 0x1403C5A60 (MiCompressRelocations.c)
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiParseImageCfgBits @ 0x1403C6C80 (MiParseImageCfgBits.c)
 *     MiExtendSection @ 0x1403C7890 (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x1403C86B8 (MiCreateDataFileMap.c)
 *     MiCreatePagingFileMap @ 0x1403C89F8 (MiCreatePagingFileMap.c)
 *     MiBuildImageControlArea @ 0x1403C9B5C (MiBuildImageControlArea.c)
 *     NtSetInformationVirtualMemory @ 0x1403CA6EC (NtSetInformationVirtualMemory.c)
 *     MiCompressImportList @ 0x1403CC38C (MiCompressImportList.c)
 *     MiAllocateImportList @ 0x1403CC768 (MiAllocateImportList.c)
 *     MiResolveImageReferences @ 0x1403CCAA8 (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x1403CCF50 (MiSnapThunk.c)
 *     MiDriverLoadSucceeded @ 0x1403CD204 (MiDriverLoadSucceeded.c)
 *     MiGenerateSystemImageNames @ 0x1403CD67C (MiGenerateSystemImageNames.c)
 *     MiObtainSectionForDriver @ 0x1403CD7E8 (MiObtainSectionForDriver.c)
 *     MiConstructLoaderEntry @ 0x1403CE188 (MiConstructLoaderEntry.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1403D01E4 (PnpDeviceCompletionRequestCreate.c)
 *     MiAllocateFixupVad @ 0x1403D034C (MiAllocateFixupVad.c)
 *     CmpInitializeHive @ 0x1403D071C (CmpInitializeHive.c)
 *     CmCheckRegistry @ 0x1403D1730 (CmCheckRegistry.c)
 *     WmipCachePtrs @ 0x1403D1A08 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x1403D1AC8 (WmipSendGuidUpdateNotifications.c)
 *     HvWriteHivePrimaryFile @ 0x1403D1E60 (HvWriteHivePrimaryFile.c)
 *     WmipSendEnableDisableRequest @ 0x1403D2308 (WmipSendEnableDisableRequest.c)
 *     WmipAddProviderIdToPIList @ 0x1403D38FC (WmipAddProviderIdToPIList.c)
 *     HvpMapHiveImageFromFile @ 0x1403D3CD8 (HvpMapHiveImageFromFile.c)
 *     CmpCanGrowHive @ 0x1403D50E4 (CmpCanGrowHive.c)
 *     CmpCommitDeleteValueKeyUoW @ 0x1403D5C98 (CmpCommitDeleteValueKeyUoW.c)
 *     CmAddLogForAction @ 0x1403D5EAC (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x1403D6464 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1403D6580 (CmpDoTransWriteLogRecord.c)
 *     CmpSearchAddTrans @ 0x1403D6DD0 (CmpSearchAddTrans.c)
 *     CmpCommitSetValueKeyUoW @ 0x1403D7548 (CmpCommitSetValueKeyUoW.c)
 *     CmpMarkIndexDirty @ 0x1403D7904 (CmpMarkIndexDirty.c)
 *     CmpRemoveSubKey @ 0x1403D7AB8 (CmpRemoveSubKey.c)
 *     CmpAllocate @ 0x1403D8F04 (CmpAllocate.c)
 *     CmpClaimGlobalQuota @ 0x1403D8F60 (CmpClaimGlobalQuota.c)
 *     CmpInitHiveFromFile @ 0x1403DCB84 (CmpInitHiveFromFile.c)
 *     CmpDoFileWrite @ 0x1403DD10C (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403DD9C0 (CmpQueryFileSecurityDescriptor.c)
 *     CmpAddSecurityCellToCache @ 0x1403DDE74 (CmpAddSecurityCellToCache.c)
 *     CmpLockIXLockIntent @ 0x1403DE050 (CmpLockIXLockIntent.c)
 *     CmpAddInfoAfterParseFailure @ 0x1403E0290 (CmpAddInfoAfterParseFailure.c)
 *     ExpWnfLookupPermanentName @ 0x1403E0F08 (ExpWnfLookupPermanentName.c)
 *     ExpAllocateHandleTable @ 0x1403E308C (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1403E3314 (ExpAllocateTablePagedPoolNoZero.c)
 *     ObCheckRefTraceProcess @ 0x1403E3858 (ObCheckRefTraceProcess.c)
 *     ExpWnfCreateNameInstance @ 0x1403E5290 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1403E5698 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfSubscribeNameInstance @ 0x1403E6008 (ExpWnfSubscribeNameInstance.c)
 *     ExpWnfWriteStateData @ 0x1403E68DC (ExpWnfWriteStateData.c)
 *     PspEstablishJobHierarchy @ 0x1403E7DD4 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x1403E80C0 (MmLinkJobProcess.c)
 *     PspQueryRateControlHistory @ 0x1403EBB78 (PspQueryRateControlHistory.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1403ECA98 (PspAllocateAndQueryNotificationChannel.c)
 *     HvStoreModifiedData @ 0x1403ECE74 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x1403ED278 (HvpGenerateLogEntry.c)
 *     HvpFindNextDirtyBlock @ 0x1403ED550 (HvpFindNextDirtyBlock.c)
 *     EtwpEnumerateAddressSpace @ 0x1403F4C98 (EtwpEnumerateAddressSpace.c)
 *     MiMapViewOfImageSection @ 0x1403F5860 (MiMapViewOfImageSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1403F71D0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     CmpAllocateKeyControlBlock @ 0x1403FA7E0 (CmpAllocateKeyControlBlock.c)
 *     CmpGetNameControlBlock @ 0x1403FAA10 (CmpGetNameControlBlock.c)
 *     PfpRpFileKeyUpdate @ 0x1403FACF0 (PfpRpFileKeyUpdate.c)
 *     CmpGetSymbolicLink @ 0x1403FBEB0 (CmpGetSymbolicLink.c)
 *     CmpConstructName @ 0x1403FC9B0 (CmpConstructName.c)
 *     SeQueryInformationToken @ 0x1403FE580 (SeQueryInformationToken.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpCheckRegistry2 @ 0x140405850 (CmpCheckRegistry2.c)
 *     ObpAllocateObject @ 0x1404065F0 (ObpAllocateObject.c)
 *     CmpCallCallBacks @ 0x140409130 (CmpCallCallBacks.c)
 *     ExpGetProcessInformation @ 0x140409F60 (ExpGetProcessInformation.c)
 *     ObWaitForMultipleObjects @ 0x14040B380 (ObWaitForMultipleObjects.c)
 *     ObpCreateHandle @ 0x14040CFA0 (ObpCreateHandle.c)
 *     ObpLookupObjectName @ 0x14040E3D0 (ObpLookupObjectName.c)
 *     ObpCaptureObjectName @ 0x140410A10 (ObpCaptureObjectName.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     MiCopyToCfgBitMap @ 0x1404163B0 (MiCopyToCfgBitMap.c)
 *     MiMapViewOfDataSection @ 0x140416C00 (MiMapViewOfDataSection.c)
 *     MiAllocateVirtualMemory @ 0x140419B20 (MiAllocateVirtualMemory.c)
 *     MiInsertSharedCommitNode @ 0x14041B4F0 (MiInsertSharedCommitNode.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140420AE0 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x140420EA0 (ObpGetObjectSecurity.c)
 *     CmpGetValueData @ 0x140422DD0 (CmpGetValueData.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14042BA70 (AlpcpCaptureMessageDataSafe.c)
 *     MiPfPrepareSequentialReadList @ 0x14042CB00 (MiPfPrepareSequentialReadList.c)
 *     MiPfPrepareReadList @ 0x14042D190 (MiPfPrepareReadList.c)
 *     ObLogSecurityDescriptor @ 0x14042E2C0 (ObLogSecurityDescriptor.c)
 *     RtlpNewSecurityObject @ 0x14042F920 (RtlpNewSecurityObject.c)
 *     SepCaptureUnicodeStringArray @ 0x140433B60 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x140433DA0 (SeCaptureUnicodeStringStructures.c)
 *     SeCaptureSecurityDescriptor @ 0x140434450 (SeCaptureSecurityDescriptor.c)
 *     SepCreateImpersonationTokenDacl @ 0x140434DA0 (SepCreateImpersonationTokenDacl.c)
 *     IopCreateFile @ 0x140439640 (IopCreateFile.c)
 *     PiCMGetObjectProperty @ 0x14043A998 (PiCMGetObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x14043B138 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x14043B720 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x14043BD34 (_RegRtlQueryValue.c)
 *     _PnpRegQueryValueIndirect @ 0x14043CA58 (_PnpRegQueryValueIndirect.c)
 *     PiPnpRtlObjectActionCallback @ 0x14043CD30 (PiPnpRtlObjectActionCallback.c)
 *     PiDmListEnumObjectsWithCallback @ 0x14043EA04 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x14043EC40 (PiPnpRtlInterfaceFilterCallback.c)
 *     PnpGetObjectProperty @ 0x14043ED84 (PnpGetObjectProperty.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x14043EEEC (FsRtlAllocateExtraCreateParameter.c)
 *     PiPnpRtlObjectEventCreate @ 0x14043EFE4 (PiPnpRtlObjectEventCreate.c)
 *     _PnpOpenPropertiesKey @ 0x14043F144 (_PnpOpenPropertiesKey.c)
 *     PnpUnicodeStringToWstr @ 0x14043F5D0 (PnpUnicodeStringToWstr.c)
 *     PiDqPnPGetObjectProperty @ 0x14043F954 (PiDqPnPGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x14043FAE0 (PnpAllocatePWSTR.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x140440104 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x140440DCC (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x140441A6C (PiDqQueryEvaluateFilter.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140441EDC (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x140442270 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x140442490 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     PiCMGetObjectList @ 0x140443074 (PiCMGetObjectList.c)
 *     PiCMGetRegistryProperty @ 0x140443A00 (PiCMGetRegistryProperty.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140443F94 (DrvDbGetDriverPackageMappedProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x140444D58 (_RegRtlCreateTreeTransacted.c)
 *     ExpAllocateStringRoutine @ 0x140447224 (ExpAllocateStringRoutine.c)
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopUmpoProcessPowerMessage @ 0x1404496B8 (PopUmpoProcessPowerMessage.c)
 *     EtwpQueryProcessCommandLine @ 0x14044A314 (EtwpQueryProcessCommandLine.c)
 *     PspAllocateProcess @ 0x14044C768 (PspAllocateProcess.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x14044EE44 (AlpcpAllocateCompletionPacketLookaside.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PopDiagTracePowerRequestCreate @ 0x140454D34 (PopDiagTracePowerRequestCreate.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x140456068 (IopBuildGlobalSymbolicLinkString.c)
 *     IopAllocateUnicodeString @ 0x140456178 (IopAllocateUnicodeString.c)
 *     IopProcessSetInterfaceState @ 0x140456288 (IopProcessSetInterfaceState.c)
 *     PoRegisterPowerSettingCallback @ 0x1404568F0 (PoRegisterPowerSettingCallback.c)
 *     sub_14045768C @ 0x14045768C (sub_14045768C.c)
 *     sub_1404577BC @ 0x1404577BC (sub_1404577BC.c)
 *     PopLogDisabledSleepReason @ 0x140457DDC (PopLogDisabledSleepReason.c)
 *     PiControlGetSetDeviceStatus @ 0x140458AB4 (PiControlGetSetDeviceStatus.c)
 *     IoGetDeviceProperty @ 0x1404596E0 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x140459C20 (PiGetDeviceRegProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x14045A798 (PiDmObjectProcessPropertyChange.c)
 *     PiDmCacheDataEncode @ 0x14045AD0C (PiDmCacheDataEncode.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14045E118 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqActionDataCreate @ 0x14045E804 (PiDqActionDataCreate.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14045EED8 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqQueryCreate @ 0x14045F138 (PiDqQueryCreate.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14045F498 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqTraceQueryCreate @ 0x14045F5F4 (PiDqTraceQueryCreate.c)
 *     ConstraintEval @ 0x14045F6D0 (ConstraintEval.c)
 *     PiDqGrowPropertyArray @ 0x140460E74 (PiDqGrowPropertyArray.c)
 *     MiBuildNewCloneDescriptor @ 0x140460EE0 (MiBuildNewCloneDescriptor.c)
 *     MiAllocateChildVads @ 0x140461278 (MiAllocateChildVads.c)
 *     MiAllocateVad @ 0x140463408 (MiAllocateVad.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     RtlpAllocateAtom @ 0x14046A750 (RtlpAllocateAtom.c)
 *     EtwpRealtimeCreateLogfile @ 0x14046A7C8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14046ABB8 (EtwpRealtimeFlushSavedBuffers.c)
 *     SeCaptureSid @ 0x14046B354 (SeCaptureSid.c)
 *     RtlpSetSecurityObject @ 0x14046B8C0 (RtlpSetSecurityObject.c)
 *     EtwpSetProviderTraitsUm @ 0x14046C820 (EtwpSetProviderTraitsUm.c)
 *     EtwpAddRegEntryToGroup @ 0x14046CBFC (EtwpAddRegEntryToGroup.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x14046E114 (EtwpGetGuidSecurityDescriptor.c)
 *     SepAccessCheckAndAuditAlarm @ 0x14046E620 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x14046F5B0 (SepProbeAndCaptureString_U.c)
 *     IopGetLegacyVetoListDrivers @ 0x14046F6CC (IopGetLegacyVetoListDrivers.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140470A30 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     SepDuplicateToken @ 0x140477C00 (SepDuplicateToken.c)
 *     SepSetTokenCapabilities @ 0x140478C80 (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x140478DC8 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478E80 (SeCaptureSidAndAttributesArray.c)
 *     SepSetTokenPackage @ 0x1404792B0 (SepSetTokenPackage.c)
 *     SepDuplicateSid @ 0x140479564 (SepDuplicateSid.c)
 *     MmCopyVirtualMemory @ 0x14047AC20 (MmCopyVirtualMemory.c)
 *     MiAddSecureEntry @ 0x14047B4A0 (MiAddSecureEntry.c)
 *     AlpcpAllocateBlob @ 0x14047C900 (AlpcpAllocateBlob.c)
 *     AlpcAddHandleTableEntry @ 0x14047CAB0 (AlpcAddHandleTableEntry.c)
 *     AlpcpAllocateBuffer @ 0x14047D5C8 (AlpcpAllocateBuffer.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14047D620 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     AlpcpAllocateMessageFunction @ 0x14047D760 (AlpcpAllocateMessageFunction.c)
 *     ObpCallPreOperationCallbacks @ 0x140482B10 (ObpCallPreOperationCallbacks.c)
 *     MiAllocateNewTebRegion @ 0x140482F48 (MiAllocateNewTebRegion.c)
 *     MiCreateVadEventBitmap @ 0x1404831E8 (MiCreateVadEventBitmap.c)
 *     PfpCopyUserPfnPrioRequest @ 0x1404836F0 (PfpCopyUserPfnPrioRequest.c)
 *     PfTCreateTraceDump @ 0x140483950 (PfTCreateTraceDump.c)
 *     MmGetPhysicalMemoryRanges @ 0x140484B04 (MmGetPhysicalMemoryRanges.c)
 *     AlpcpInitializeCompletionList @ 0x140485028 (AlpcpInitializeCompletionList.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404868AC (PspAddSchedulingGroupToJobChain.c)
 *     PspAllocateRateControl @ 0x140487898 (PspAllocateRateControl.c)
 *     ExUpdateLicenseData_0 @ 0x140488840 (ExUpdateLicenseData_0.c)
 *     sub_140489880 @ 0x140489880 (sub_140489880.c)
 *     NtQueryLicenseValue @ 0x140489ACC (NtQueryLicenseValue.c)
 *     ExpGenuinePolicyPostProcess @ 0x14048A5CC (ExpGenuinePolicyPostProcess.c)
 *     WmipQueueNotification @ 0x14048C744 (WmipQueueNotification.c)
 *     FsRtlNotifyFilterReportChange @ 0x14048CA00 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x14048D310 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyInitializeSync @ 0x14048D7FC (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x14048D904 (FsRtlNotifyFilterReportChangeLite.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x14048E028 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14048EA24 (FsRtlpOplockFsctrlInternal.c)
 *     FsRtlpAllocateOplock @ 0x14048F084 (FsRtlpAllocateOplock.c)
 *     NtFlushBuffersFileEx @ 0x14048F78C (NtFlushBuffersFileEx.c)
 *     RawInitializeVcb @ 0x140491BB8 (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x140491CDC (ExAllocateCacheAwareRundownProtection.c)
 *     FsRtlFindInTunnelCache @ 0x140492444 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x140492590 (FsRtlAddToTunnelCache.c)
 *     PnpUnloadAttachedDriver @ 0x140493B70 (PnpUnloadAttachedDriver.c)
 *     PiSwPdoPnPDispatch @ 0x14049479C (PiSwPdoPnPDispatch.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x1404956FC (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     sub_140495840 @ 0x140495840 (sub_140495840.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x140495D00 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     sub_140496110 @ 0x140496110 (sub_140496110.c)
 *     sub_1404962F4 @ 0x1404962F4 (sub_1404962F4.c)
 *     sub_1404966D4 @ 0x1404966D4 (sub_1404966D4.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404969B0 (PiPnpRtlGetFilteredDeviceList.c)
 *     CmpBuildAdminInformation @ 0x140497598 (CmpBuildAdminInformation.c)
 *     RtlpCombineAcls @ 0x140497990 (RtlpCombineAcls.c)
 *     CmpRecordUnloadEventForHive @ 0x140499B10 (CmpRecordUnloadEventForHive.c)
 *     CmSnapshotRMTxArray @ 0x14049B3B0 (CmSnapshotRMTxArray.c)
 *     SepInformLsaOfDeletedLogon @ 0x14049B860 (SepInformLsaOfDeletedLogon.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14049B9C8 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14049BCFC (SepInformFileSystemsOfDeletedLogon.c)
 *     ObpInsertHandleCount @ 0x14049D074 (ObpInsertHandleCount.c)
 *     PnpProcessQueryRemoveAndEject @ 0x14049F874 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1404A0028 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpAllocateCriticalMemory @ 0x1404A0618 (PnpAllocateCriticalMemory.c)
 *     PnpDisableDeviceInterfaces @ 0x1404A091C (PnpDisableDeviceInterfaces.c)
 *     PfpPrefetchRequest @ 0x1404A29D8 (PfpPrefetchRequest.c)
 *     SeAppendPrivileges @ 0x1404A3E30 (SeAppendPrivileges.c)
 *     MiReserveDriverPtes @ 0x1404A6DA8 (MiReserveDriverPtes.c)
 *     AlpcpCaptureMessageData @ 0x1404A7424 (AlpcpCaptureMessageData.c)
 *     ExGetPoolTagInfo @ 0x1404A7774 (ExGetPoolTagInfo.c)
 *     ObSetDirectoryDeviceMap @ 0x1404A7D9C (ObSetDirectoryDeviceMap.c)
 *     CmQueryMultipleValueKey @ 0x1404A8708 (CmQueryMultipleValueKey.c)
 *     CcCreateVacbArray @ 0x1404A8F70 (CcCreateVacbArray.c)
 *     CmpCheckWrpKeyAccess @ 0x1404A976C (CmpCheckWrpKeyAccess.c)
 *     ObpCaptureBoundaryDescriptor @ 0x1404AA488 (ObpCaptureBoundaryDescriptor.c)
 *     ObpInsertDirectoryEntry @ 0x1404AA9B4 (ObpInsertDirectoryEntry.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     MUIInitializeResourceLock @ 0x1404ABA74 (MUIInitializeResourceLock.c)
 *     PspInitializeFullProcessImageName @ 0x1404ABF8C (PspInitializeFullProcessImageName.c)
 *     PfpRpCHashDeleteEntries @ 0x1404AC980 (PfpRpCHashDeleteEntries.c)
 *     sub_1404AE668 @ 0x1404AE668 (sub_1404AE668.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1404AF334 (SepScheduleImageVerificationCallbacks.c)
 *     PfSnPreallocatePrefetchHeader @ 0x1404AFAB4 (PfSnPreallocatePrefetchHeader.c)
 *     NtRemoveIoCompletionEx @ 0x1404B049C (NtRemoveIoCompletionEx.c)
 *     NtCreateSymbolicLinkObject @ 0x1404B0E34 (NtCreateSymbolicLinkObject.c)
 *     PnpProcessAssignResources @ 0x1404B1780 (PnpProcessAssignResources.c)
 *     ExpWnfCreateProcessContext @ 0x1404B2C08 (ExpWnfCreateProcessContext.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404B50FC (PoDiagCaptureUsermodeStack.c)
 *     CmpAllocateUnitOfWork @ 0x1404B5CE4 (CmpAllocateUnitOfWork.c)
 *     PiDqSerializationAlloc @ 0x1404B5DD4 (PiDqSerializationAlloc.c)
 *     sub_1404B6C58 @ 0x1404B6C58 (sub_1404B6C58.c)
 *     SepAssemblePrivileges @ 0x1404B7630 (SepAssemblePrivileges.c)
 *     PfpRpControlRequestCopy @ 0x1404B7D94 (PfpRpControlRequestCopy.c)
 *     PfSnArrayGrow @ 0x1404B8A44 (PfSnArrayGrow.c)
 *     RtlGetNtProductType @ 0x1404B8BC0 (RtlGetNtProductType.c)
 *     PiCMGetDeviceIdList @ 0x1404B9164 (PiCMGetDeviceIdList.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B9924 (NtOpenObjectAuditAlarm.c)
 *     _RegRtlEnumValue @ 0x1404BA058 (_RegRtlEnumValue.c)
 *     PfpRpCHashGrow @ 0x1404BA288 (PfpRpCHashGrow.c)
 *     CmpLogCheckpoint @ 0x1404BAB0C (CmpLogCheckpoint.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404BB38C (NtPrivilegedServiceAuditAlarm.c)
 *     PfpVolumeOpenAndVerify @ 0x1404BB8EC (PfpVolumeOpenAndVerify.c)
 *     SepUpdateLogonSessionTrack @ 0x1404BCEDC (SepUpdateLogonSessionTrack.c)
 *     SepCreateLogonSessionTrack @ 0x1404BDA90 (SepCreateLogonSessionTrack.c)
 *     CmLoadKey @ 0x1404BEDE8 (CmLoadKey.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x1404BF534 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     CmpCheckSecurityCellAccess @ 0x1404BFEE8 (CmpCheckSecurityCellAccess.c)
 *     MIDL_user_allocate @ 0x1404C0818 (MIDL_user_allocate.c)
 *     CmpAdjustSecurityCacheSize @ 0x1404C08A8 (CmpAdjustSecurityCacheSize.c)
 *     IopSymlinkRememberJunction @ 0x1404C0A58 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x1404C0B58 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x1404C0FB0 (IopGraftName.c)
 *     PiDqAllocateGenericTableEntry @ 0x1404C19E4 (PiDqAllocateGenericTableEntry.c)
 *     WmipSecurityMethod @ 0x1404C19F8 (WmipSecurityMethod.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404C1AE8 (PiUEventQueueBroadcastEventEntry.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1404C2098 (IopDeviceObjectFromSymbolicName.c)
 *     CmpQueryNameString @ 0x1404C2294 (CmpQueryNameString.c)
 *     ExpWnfAllocateScopeInstance @ 0x1404C23B0 (ExpWnfAllocateScopeInstance.c)
 *     CmpAddToHiveFileList @ 0x1404C26DC (CmpAddToHiveFileList.c)
 *     ExpWnfRegisterPermanentName @ 0x1404C2D98 (ExpWnfRegisterPermanentName.c)
 *     NtNotifyChangeSession @ 0x1404C2F6C (NtNotifyChangeSession.c)
 *     PnpAllocateGenericTableEntry @ 0x1404C3AF8 (PnpAllocateGenericTableEntry.c)
 *     PopPowerRequestAllocate @ 0x1404C3B20 (PopPowerRequestAllocate.c)
 *     MiCreateRotateView @ 0x1404C40C4 (MiCreateRotateView.c)
 *     sub_1404C4548 @ 0x1404C4548 (sub_1404C4548.c)
 *     EtwpCreateUmReplyObject @ 0x1404C4A00 (EtwpCreateUmReplyObject.c)
 *     MiRememberUnloadedDriver @ 0x1404C4BD0 (MiRememberUnloadedDriver.c)
 *     EtwpGenerateFileName @ 0x1404C51D4 (EtwpGenerateFileName.c)
 *     sub_1404C56A0 @ 0x1404C56A0 (sub_1404C56A0.c)
 *     WmipQueueLegacyEtwWork @ 0x1404C5A20 (WmipQueueLegacyEtwWork.c)
 *     PopPowerInformationInternal @ 0x1404C5AFC (PopPowerInformationInternal.c)
 *     SepReadAndPopulateCapes @ 0x1404C5E6C (SepReadAndPopulateCapes.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404C6DBC (DrvDbGetDeviceIdDriverInfMatches.c)
 *     EtwpExpandFileName @ 0x1404C72C8 (EtwpExpandFileName.c)
 *     EtwpFinalizeHeader @ 0x1404C75B0 (EtwpFinalizeHeader.c)
 *     sub_1404C80E8 @ 0x1404C80E8 (sub_1404C80E8.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1404C8BEC (RtlpAllocDeallocQueryBuffer.c)
 *     WmipSDRegistryQueryRoutine @ 0x1404C9288 (WmipSDRegistryQueryRoutine.c)
 *     EtwpCreateNtFileName @ 0x1404C9BB8 (EtwpCreateNtFileName.c)
 *     EtwpUpdateFileHeader @ 0x1404C9CA4 (EtwpUpdateFileHeader.c)
 *     EtwpRealtimeNotifyConsumers @ 0x1404C9F88 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpInitLoggerContext @ 0x1404CA828 (EtwpInitLoggerContext.c)
 *     EtwpCaptureString @ 0x1404CC270 (EtwpCaptureString.c)
 *     EtwpRegisterProvider @ 0x1404CC76C (EtwpRegisterProvider.c)
 *     EtwpAddKmRegEntry @ 0x1404CCAA4 (EtwpAddKmRegEntry.c)
 *     EtwpQueueNotification @ 0x1404CDF90 (EtwpQueueNotification.c)
 *     EtwpAddDataSource @ 0x1404CE16C (EtwpAddDataSource.c)
 *     EtwpAllocDataBlock @ 0x1404CE704 (EtwpAllocDataBlock.c)
 *     EtwpUpdateFilterData @ 0x1404CEC94 (EtwpUpdateFilterData.c)
 *     EtwpAllocGuidEntry @ 0x1404CEEAC (EtwpAllocGuidEntry.c)
 *     EtwpAddProviderToSession @ 0x1404CF154 (EtwpAddProviderToSession.c)
 *     EtwpFindDebugId @ 0x1404CF2A8 (EtwpFindDebugId.c)
 *     EtwpUpdateDisallowedGuids @ 0x1404CF680 (EtwpUpdateDisallowedGuids.c)
 *     EtwpQueueReply @ 0x1404CFE80 (EtwpQueueReply.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404D00D4 (EtwpCrimsonProvEnableCallback.c)
 *     PfSnScenarioAlloc @ 0x1404D230C (PfSnScenarioAlloc.c)
 *     PfSnBuildDumpFromTrace @ 0x1404D2E60 (PfSnBuildDumpFromTrace.c)
 *     PfSnGetPrefetchInstructions @ 0x1404D439C (PfSnGetPrefetchInstructions.c)
 *     PfSetSuperfetchInformation @ 0x1404D4FE8 (PfSetSuperfetchInformation.c)
 *     PfSnBeginTrace @ 0x1404D5984 (PfSnBeginTrace.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1404D6CF0 (PsGetAllocatedFullProcessImageName.c)
 *     IoQueryFileDosDeviceName @ 0x1404D7F30 (IoQueryFileDosDeviceName.c)
 *     IoVolumeDeviceToDosName @ 0x1404D7FD4 (IoVolumeDeviceToDosName.c)
 *     IopQueryNameInternal @ 0x1404D8B10 (IopQueryNameInternal.c)
 *     MmPrefetchPagesEx @ 0x1404D9B80 (MmPrefetchPagesEx.c)
 *     PfpFileBuildReadList @ 0x1404DA2D0 (PfpFileBuildReadList.c)
 *     PfSnPopulateReadList @ 0x1404DA590 (PfSnPopulateReadList.c)
 *     MiRevertRelocatedImagePfn @ 0x1404DB678 (MiRevertRelocatedImagePfn.c)
 *     MiGetCcAccessLog @ 0x1404DB96C (MiGetCcAccessLog.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404DBB8C (PfSnOpenVolumesForPrefetch.c)
 *     PfpPrefetchRequestPerform @ 0x1404DC998 (PfpPrefetchRequestPerform.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404DD2D8 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     IopGetDeviceInterfaces @ 0x1404DD828 (IopGetDeviceInterfaces.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DE228 (_CmOpenCommonClassRegKeyWorker.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404DEC44 (PfSnAsyncPrefetchWorker.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 *     PfSnPrefetchScenario @ 0x1404DFA78 (PfSnPrefetchScenario.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x1404E04F8 (PiDqObjectActionQueueEntryCreate.c)
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404E1078 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x1404E12F8 (PiUEventNotifyClient.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1404E1A5C (PiUEventProcessBroadcastNotifications.c)
 *     PnpCreateDeviceEventEntry @ 0x1404E2358 (PnpCreateDeviceEventEntry.c)
 *     IopPnPDispatch @ 0x1404E2670 (IopPnPDispatch.c)
 *     MmRotatePhysicalView @ 0x1404E2C10 (MmRotatePhysicalView.c)
 *     IoSetPartitionInformation @ 0x1404E3140 (IoSetPartitionInformation.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1404E35C4 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x1404E377C (IoGetDeviceInterfaceAlias.c)
 *     PiSwInterfaceCreate @ 0x1404E3EBC (PiSwInterfaceCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404E42CC (PiSwIrpStartCreateWorker.c)
 *     PnpCopyDevPropertyArray @ 0x1404E46C0 (PnpCopyDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x1404E4784 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x1404E4820 (PiSwPnPInfoInit.c)
 *     PnpAllocateMultiSZ @ 0x1404E48E8 (PnpAllocateMultiSZ.c)
 *     IopRegisterDeviceInterface @ 0x1404E4A9C (IopRegisterDeviceInterface.c)
 *     PnpConcatPWSTR @ 0x1404E55A0 (PnpConcatPWSTR.c)
 *     PiSwDeviceCreate @ 0x1404E56B8 (PiSwDeviceCreate.c)
 *     MiMapLockedPagesInUserSpace @ 0x1404E65E0 (MiMapLockedPagesInUserSpace.c)
 *     PipCallDriverAddDevice @ 0x1404E68A0 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1404E70C0 (PnpCallDriverQueryServiceHelper.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404E7700 (PipGetRegistrySecurityWithFallback.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1404E7ED0 (IoVolumeDeviceNameToGuidPath.c)
 *     FstubAllocateDiskInformation @ 0x1404E8640 (FstubAllocateDiskInformation.c)
 *     FstubGetDiskGeometry @ 0x1404E86F4 (FstubGetDiskGeometry.c)
 *     FstubReadPartitionTableMBR @ 0x1404E888C (FstubReadPartitionTableMBR.c)
 *     IoReadPartitionTable @ 0x1404E89A8 (IoReadPartitionTable.c)
 *     HalpGetFullGeometry @ 0x1404E8F68 (HalpGetFullGeometry.c)
 *     IoRegisterPlugPlayNotification @ 0x1404E90BC (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1404E9464 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x1404E9528 (PnpInitializeNotifyEntry.c)
 *     PipAllocateDeviceNode @ 0x1404E9B10 (PipAllocateDeviceNode.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404EA06C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PiDeferSetInterfaceState @ 0x1404EA11C (PiDeferSetInterfaceState.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1404EA67C (PiSwDeviceMakeCompatibleIds.c)
 *     PfpSourceBuildVaArray @ 0x1404EB2A8 (PfpSourceBuildVaArray.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x1404EB778 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x1404EB988 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x1404EBADC (RtlpSysVolCheckOwnerAndSecurity.c)
 *     PiSwAddPdoAssociation @ 0x1404EBF70 (PiSwAddPdoAssociation.c)
 *     PiSwAllocateGenericTableEntry @ 0x1404EC328 (PiSwAllocateGenericTableEntry.c)
 *     PipGenerateContainerID @ 0x1404EC9C4 (PipGenerateContainerID.c)
 *     PnpCheckDeviceIdsChanged @ 0x1404EE910 (PnpCheckDeviceIdsChanged.c)
 *     IopQueryDeviceResources @ 0x1404EF3B0 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1404EF738 (PnpGetDeviceResourcesFromRegistry.c)
 *     PnpGetDeviceLocationStrings @ 0x1404EFF38 (PnpGetDeviceLocationStrings.c)
 *     PiQueryRemovableDeviceOverride @ 0x1404F066C (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x1404F0914 (PipFindDeviceOverrideEntry.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404F0FA8 (PiBuildDeviceNodeInstancePath.c)
 *     PiNormalizeDeviceText @ 0x1404F1278 (PiNormalizeDeviceText.c)
 *     PnpBusTypeGuidGetIndex @ 0x1404F1620 (PnpBusTypeGuidGetIndex.c)
 *     PiCMGetRelatedDeviceInstance @ 0x1404F1C44 (PiCMGetRelatedDeviceInstance.c)
 *     PfpPrefetchFiles @ 0x1404F3380 (PfpPrefetchFiles.c)
 *     BiUnloadHiveByName @ 0x1404F4D38 (BiUnloadHiveByName.c)
 *     PopLoadResumeContext @ 0x1404F4E30 (PopLoadResumeContext.c)
 *     BiGetKeyName @ 0x1404F4FE4 (BiGetKeyName.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1404F5104 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1404F555C (PfpServiceMainThreadBoostPrep.c)
 *     PopHiberInitializeResources @ 0x1404F61A4 (PopHiberInitializeResources.c)
 *     PoInitializeBroadcast @ 0x1404F6AFC (PoInitializeBroadcast.c)
 *     NtInitiatePowerAction @ 0x1404F6BCC (NtInitiatePowerAction.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1404F9140 (PiDqGetRelativeObjectRegPath.c)
 *     PiSwUpdateArrayProperties @ 0x1404F93FC (PiSwUpdateArrayProperties.c)
 *     PopSetHiberFileMcb @ 0x1404FA0FC (PopSetHiberFileMcb.c)
 *     BiLoadSystemStore @ 0x1404FACDC (BiLoadSystemStore.c)
 *     BiGetSystemStorePath @ 0x1404FAE38 (BiGetSystemStorePath.c)
 *     BiGetSystemPartition @ 0x1404FAF1C (BiGetSystemPartition.c)
 *     SiQuerySystemPartitionInformation @ 0x1404FAFE4 (SiQuerySystemPartitionInformation.c)
 *     BiEnumerateSubKeys @ 0x1404FBA20 (BiEnumerateSubKeys.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x1404FC02C (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x1404FC190 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x1404FC3EC (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x1404FC554 (BiGetDriveLayoutBlock.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x1404FC834 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x1404FCB78 (PopBcdReadElement.c)
 *     BiGetRegistryValue @ 0x1404FCF24 (BiGetRegistryValue.c)
 *     BiCreateKeySecurityDescriptor @ 0x1404FD2BC (BiCreateKeySecurityDescriptor.c)
 *     BiConvertElementToRegistryData @ 0x1404FD8D0 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x1404FDCF4 (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x1404FDDA4 (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x1404FE1C0 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x1404FE3D8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x1404FE654 (BiVerifyBootPartition.c)
 *     PopBcdSetupResumeObject @ 0x1404FE7F4 (PopBcdSetupResumeObject.c)
 *     MiSessionCreate @ 0x1404FE8CC (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x1404FED9C (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x1404FF8F8 (MiSessionCreateInternal.c)
 *     EtwpProcessThreadImageRundown @ 0x14050074C (EtwpProcessThreadImageRundown.c)
 *     EtwpCCSwapStart @ 0x140501110 (EtwpCCSwapStart.c)
 *     IoWMIQuerySingleInstance @ 0x140501374 (IoWMIQuerySingleInstance.c)
 *     WmipRegisterOrUpdateDS @ 0x1405019CC (WmipRegisterOrUpdateDS.c)
 *     WmipBuildInstanceSet @ 0x140501EDC (WmipBuildInstanceSet.c)
 *     WmipCountedToSz @ 0x1405025E0 (WmipCountedToSz.c)
 *     IopConnectLineBasedInterrupt @ 0x140502B18 (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140503004 (IopConnectMessageBasedInterrupt.c)
 *     IopConnectInterrupt @ 0x140503334 (IopConnectInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14050392C (IopGetInterruptConnectionData.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140503A70 (PipCallDriverAddDeviceQueryRoutine.c)
 *     WdipSemAllocatePool @ 0x140504B84 (WdipSemAllocatePool.c)
 *     EtwpEnableTrace @ 0x140506134 (EtwpEnableTrace.c)
 *     SiGetFirmwareBootDeviceName @ 0x140506740 (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x14050692C (SiTranslateSymbolicLink.c)
 *     SiGetRegistryValue @ 0x140506CC8 (SiGetRegistryValue.c)
 *     IoQueryDeviceDescription @ 0x14050762C (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140507738 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x140507A9C (IopGetRegistryKeyInformation.c)
 *     WmipQueueRegWork @ 0x140507DA4 (WmipQueueRegWork.c)
 *     EtwpStartAutoLogger @ 0x14050889C (EtwpStartAutoLogger.c)
 *     KeAllocateCalloutStackEx @ 0x140509188 (KeAllocateCalloutStackEx.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140509D38 (NtPrivilegeObjectAuditAlarm.c)
 *     MmCallDllInitialize @ 0x14050A338 (MmCallDllInitialize.c)
 *     MiFormFullImageName @ 0x14050B410 (MiFormFullImageName.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x14050B564 (IoWMIDeviceObjectToInstanceName.c)
 *     PerfDiagpRequestState @ 0x14050C404 (PerfDiagpRequestState.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14050CD48 (NtQuerySystemEnvironmentValueEx.c)
 *     SepInitializeLowBoxNumberTable @ 0x14050D018 (SepInitializeLowBoxNumberTable.c)
 *     EtwpSetProviderTraitsKm @ 0x14050D1D0 (EtwpSetProviderTraitsKm.c)
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 *     MiAllocateCrcList @ 0x14050E9B4 (MiAllocateCrcList.c)
 *     CmpSaveBootControlSet @ 0x14050EC14 (CmpSaveBootControlSet.c)
 *     CmpCopySyncTree @ 0x14050EEBC (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x14050F068 (CmpCopySyncTree2.c)
 *     PiDevCfgFindDeviceDriver @ 0x140510680 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgQueryDriverNode @ 0x140510B28 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgConfigureDevice @ 0x140511EA0 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140514214 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1405142AC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgInitResolveContext @ 0x1405147B0 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgCopyObjectProperties @ 0x140514894 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyDeviceKey @ 0x140515118 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgResolveVariable @ 0x1405156FC (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x140515AA0 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140515DF8 (PiDevCfgGetKeySecurityDescriptor.c)
 *     FstubReadPartitionTableEFI @ 0x1405167E0 (FstubReadPartitionTableEFI.c)
 *     ExpOsProductCacheProviderHelper @ 0x140516B10 (ExpOsProductCacheProviderHelper.c)
 *     sub_140516C6C @ 0x140516C6C (sub_140516C6C.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x140517310 (DrvDbGetObjectSubKeyCallback.c)
 *     MmGetChannelInformation @ 0x140518364 (MmGetChannelInformation.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1405184F8 (_PnpGetPropertiesSecurityDescriptor.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140518D60 (CmpAddRemoveContainerToCLFSLog.c)
 *     RawQueryFileSystemInformation @ 0x140518FE0 (RawQueryFileSystemInformation.c)
 *     WheaAddErrorSource @ 0x1405195F0 (WheaAddErrorSource.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x1405199A0 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x140519D5C (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x140519EF0 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     WmipAllocateSingleInstanceWnode @ 0x14051A34C (WmipAllocateSingleInstanceWnode.c)
 *     PopDeleteHiberFile @ 0x14051AD40 (PopDeleteHiberFile.c)
 *     PoDisableSleepStates @ 0x14051AEE4 (PoDisableSleepStates.c)
 *     PiDmObjectManagerPopulate @ 0x14051B15C (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x14051B290 (PiDmObjectCreate.c)
 *     PiDmListInitEnumCallback @ 0x14051B57C (PiDmListInitEnumCallback.c)
 *     PopFxTraceDeviceRegistration @ 0x14051BAAC (PopFxTraceDeviceRegistration.c)
 *     PopFxRegisterDeviceWorker @ 0x14051BB30 (PopFxRegisterDeviceWorker.c)
 *     PopPepRegisterDevice @ 0x14051C284 (PopPepRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x14051C610 (PopFxConvertV1Components.c)
 *     PnpSetInterruptInformation @ 0x14051C9B0 (PnpSetInterruptInformation.c)
 *     CmpParseCacheInit @ 0x14051CD50 (CmpParseCacheInit.c)
 *     CmSetAcpiHwProfile @ 0x14051CDBC (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x14051D474 (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x14051E0D8 (CmpInitializeRegistryNode.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14051E508 (CmpHiveRootSecurityDescriptor.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14051E8D8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpMountPreloadedHives @ 0x14051EACC (CmpMountPreloadedHives.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 *     MiCreateNodeLists @ 0x1405200A4 (MiCreateNodeLists.c)
 *     RtlGenerateClass5Guid @ 0x140521FD8 (RtlGenerateClass5Guid.c)
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140522AA0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     IoCreateDriver @ 0x140523034 (IoCreateDriver.c)
 *     IoRegisterLastChanceShutdownNotification @ 0x140523304 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x140523374 (IoRegisterShutdownNotification.c)
 *     WmipAddMofResource @ 0x1405234A4 (WmipAddMofResource.c)
 *     WmipInsertMofResource @ 0x14052365C (WmipInsertMofResource.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x140523794 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     _PnpCtxOpenMachine @ 0x140523F0C (_PnpCtxOpenMachine.c)
 *     _SysCtxOpenMachine @ 0x14052408C (_SysCtxOpenMachine.c)
 *     DrvDbOpenContext @ 0x1405242D0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140524640 (DrvDbCreateDatabaseNode.c)
 *     PiDcInitUpdateProperties @ 0x1405247C4 (PiDcInitUpdateProperties.c)
 *     PiDrvDbRegisterNode @ 0x1405251A4 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x140525298 (PiDrvDbCreateNode.c)
 *     EtwInitializeProcessor @ 0x140525564 (EtwInitializeProcessor.c)
 *     CcInitializeProcessor @ 0x140525728 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x1405257CC (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x1405258EC (IoInitializeProcessor.c)
 *     ObCreateObjectTypeEx @ 0x140525B54 (ObCreateObjectTypeEx.c)
 *     SepInitializationPhase1 @ 0x1405262AC (SepInitializationPhase1.c)
 *     PsAllocateMonitorContextServerSilo @ 0x1405265E4 (PsAllocateMonitorContextServerSilo.c)
 *     PsRegisterMonitorServerSilo @ 0x140526694 (PsRegisterMonitorServerSilo.c)
 *     EtwpInitializeAutoLoggers @ 0x140526F0C (EtwpInitializeAutoLoggers.c)
 *     EtwpEnableKeyProviders @ 0x14052718C (EtwpEnableKeyProviders.c)
 *     EtwpEnableAutoLoggerProviders @ 0x140527308 (EtwpEnableAutoLoggerProviders.c)
 *     EtwpGetAutoLoggerProviderFilter @ 0x140527730 (EtwpGetAutoLoggerProviderFilter.c)
 *     ExRegisterHost @ 0x140527A90 (ExRegisterHost.c)
 *     EmpProviderRegister @ 0x140528320 (EmpProviderRegister.c)
 *     IopCreateCmResourceList @ 0x1405288AC (IopCreateCmResourceList.c)
 *     IopCombineCmResourceList @ 0x140528978 (IopCombineCmResourceList.c)
 *     IoReportDetectedDevice @ 0x140528D34 (IoReportDetectedDevice.c)
 *     HeadlessTerminalAddResources @ 0x140529420 (HeadlessTerminalAddResources.c)
 *     ArbInitializeArbiterInstance @ 0x1405295C4 (ArbInitializeArbiterInstance.c)
 *     PnpLookupArbitersNewResources @ 0x140529DC8 (PnpLookupArbitersNewResources.c)
 *     PnpBuildCmResourceList @ 0x14052A17C (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x14052A600 (IopChildToRootTranslation.c)
 *     IopResourceRequirementsListToReqList @ 0x14052A814 (IopResourceRequirementsListToReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x14052AD6C (IopSetupArbiterAndTranslators.c)
 *     IopQueryResourceHandlerInterface @ 0x14052B310 (IopQueryResourceHandlerInterface.c)
 *     PnpCmResourcesToIoResources @ 0x14052B7B0 (PnpCmResourcesToIoResources.c)
 *     IopTranslateAndAdjustReqDesc @ 0x14052B9F8 (IopTranslateAndAdjustReqDesc.c)
 *     ArbAddOrdering @ 0x14052C5C4 (ArbAddOrdering.c)
 *     PnpFilterResourceRequirementsList @ 0x14052C73C (PnpFilterResourceRequirementsList.c)
 *     ArbpBuildAllocationStack @ 0x14052D2D4 (ArbpBuildAllocationStack.c)
 *     ArbpGetRegistryValue @ 0x14052E1C4 (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x14052E508 (ArbInitializeOrderingList.c)
 *     ArbPruneOrdering @ 0x14052E5A8 (ArbPruneOrdering.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14052E9CC (ArbAddMmConfigRangeAsBootReserved.c)
 *     AdtpObjsInitialize @ 0x14052EF6C (AdtpObjsInitialize.c)
 *     AdtpInitializeDriveLetters @ 0x14052F430 (AdtpInitializeDriveLetters.c)
 *     KeInitializeTimerTable @ 0x14052F834 (KeInitializeTimerTable.c)
 *     PpmIdleRegisterDefaultStates @ 0x14052FDF4 (PpmIdleRegisterDefaultStates.c)
 *     CmpCmdInit @ 0x1405301A0 (CmpCmdInit.c)
 *     PoRegisterCoalescingCallback @ 0x140530628 (PoRegisterCoalescingCallback.c)
 *     ExAllocateCallBack @ 0x1405308A0 (ExAllocateCallBack.c)
 *     PopExtendConnectionState @ 0x140530AE8 (PopExtendConnectionState.c)
 *     _CmGetMatchingDeviceListForSubkey @ 0x140530F6C (_CmGetMatchingDeviceListForSubkey.c)
 *     _RegRtlDeleteTreeInternal @ 0x140531140 (_RegRtlDeleteTreeInternal.c)
 *     _CmGetMatchingFilteredDeviceInterfaceListWorker @ 0x1405313E4 (_CmGetMatchingFilteredDeviceInterfaceListWorker.c)
 *     _CmGetMatchingCommonClassListWorker @ 0x14053184C (_CmGetMatchingCommonClassListWorker.c)
 *     _RegRtlEnumKeyWithCallback @ 0x140531990 (_RegRtlEnumKeyWithCallback.c)
 *     _RegRtlEnumKey @ 0x140531B40 (_RegRtlEnumKey.c)
 *     _CmDeviceClassesSubkeyCallback @ 0x140531D0C (_CmDeviceClassesSubkeyCallback.c)
 *     _CmEnumSubkeyCallback @ 0x140532164 (_CmEnumSubkeyCallback.c)
 *     PipAddBindingId @ 0x140534D40 (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x140534E60 (PipCreateDependencyNode.c)
 *     PpmRegisterPerfStates @ 0x140536740 (PpmRegisterPerfStates.c)
 *     PpmAllocatePerfCheck @ 0x140536FC4 (PpmAllocatePerfCheck.c)
 *     PpmIdleInitializeConcurrency @ 0x140537030 (PpmIdleInitializeConcurrency.c)
 *     PpmPerfResizeHistoryAll @ 0x1405379AC (PpmPerfResizeHistoryAll.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x1405384C0 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x1405387B0 (MiCreatePageFileSpaceBitmaps.c)
 *     CmpInitializeNameCache @ 0x140538B6C (CmpInitializeNameCache.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x140538D04 (RtlpMuiRegCreateRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x1405396B8 (LdrpQueryValueKey.c)
 *     RtlpGetWindowsPolicy @ 0x14053A258 (RtlpGetWindowsPolicy.c)
 *     AdtpEtwBuildString @ 0x14053A71C (AdtpEtwBuildString.c)
 *     AdtpBuildMessageString @ 0x14053A7D8 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14053AA4C (SepGetLogonSessionAccountInfo.c)
 *     PipMakeGloballyUniqueId @ 0x14053AE10 (PipMakeGloballyUniqueId.c)
 *     MiMapViewOfPhysicalSection @ 0x14053B280 (MiMapViewOfPhysicalSection.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14053C468 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x14053C4F0 (SepRmFetchGlobalSacl.c)
 *     PopRequestShutdownWait @ 0x14053C988 (PopRequestShutdownWait.c)
 *     SeAuditProcessCreation @ 0x14053D024 (SeAuditProcessCreation.c)
 *     PopLogSleepDisabled @ 0x14053D3AC (PopLogSleepDisabled.c)
 *     PiQueryPowerRelations @ 0x14053E790 (PiQueryPowerRelations.c)
 *     PiQueryPowerDependencyRelations @ 0x14053EB5C (PiQueryPowerDependencyRelations.c)
 *     PiGetDefaultMessageString @ 0x14053ED4C (PiGetDefaultMessageString.c)
 *     WmipAllocGuidEntry @ 0x14053EEA8 (WmipAllocGuidEntry.c)
 *     PiDevCfgQueryObjectProperties @ 0x14053EF3C (PiDevCfgQueryObjectProperties.c)
 *     _CmGetDeviceRegKeySecurityDescriptor @ 0x14053F248 (_CmGetDeviceRegKeySecurityDescriptor.c)
 *     PnpReadDeviceConfiguration @ 0x14053F6B4 (PnpReadDeviceConfiguration.c)
 *     WheapInitializeErrorSource @ 0x14053F834 (WheapInitializeErrorSource.c)
 *     IoCreateSystemThread @ 0x14053FAE8 (IoCreateSystemThread.c)
 *     IoReadDiskSignature @ 0x14053FDCC (IoReadDiskSignature.c)
 *     PiAuAllocateAndInitializeSid @ 0x14053FEB8 (PiAuAllocateAndInitializeSid.c)
 *     PipApplyFunctionToServiceInstances @ 0x140540188 (PipApplyFunctionToServiceInstances.c)
 *     PiDmAllocateGenericTableEntry @ 0x140540528 (PiDmAllocateGenericTableEntry.c)
 *     PfpCreateEvent @ 0x14054149C (PfpCreateEvent.c)
 *     CmLockKcbForWrite @ 0x140541740 (CmLockKcbForWrite.c)
 *     CmpStartRMLog @ 0x140542840 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x140542C50 (CmpStartCLFSLog.c)
 *     FsRtlGetTunnelParameterValue @ 0x140542F84 (FsRtlGetTunnelParameterValue.c)
 *     CmpInitializeSystemHivesLoad @ 0x14054307C (CmpInitializeSystemHivesLoad.c)
 *     IoRegisterBootDriverReinitialization @ 0x140543320 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x140543394 (IoRegisterDriverReinitialization.c)
 *     NtSetUuidSeed @ 0x140543400 (NtSetUuidSeed.c)
 *     WmipGenerateMofResourceNotification @ 0x140543820 (WmipGenerateMofResourceNotification.c)
 *     WheapLogInitEvent @ 0x140543950 (WheapLogInitEvent.c)
 *     PpmRegisterProfiles @ 0x140543F34 (PpmRegisterProfiles.c)
 *     MmGetNodeChannelRanges @ 0x14054420C (MmGetNodeChannelRanges.c)
 *     ObRegisterCallbacks @ 0x14054433C (ObRegisterCallbacks.c)
 *     WmipGenerateBinaryMofNotification @ 0x14054471C (WmipGenerateBinaryMofNotification.c)
 *     CmpParseCacheAddSymbolicLink @ 0x14054488C (CmpParseCacheAddSymbolicLink.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140544C64 (FsRtlpRegisterProviderWithMUP.c)
 *     ObSetDeviceMap @ 0x140545400 (ObSetDeviceMap.c)
 *     SepSetSystemPaths @ 0x140545620 (SepSetSystemPaths.c)
 *     IopCreateVpb @ 0x14054571C (IopCreateVpb.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x1405460C0 (ExpRegisterFirmwareTableInformationHandler.c)
 *     WmipRegisterEtwProvider @ 0x1405463AC (WmipRegisterEtwProvider.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 *     PopEnableHiberFile @ 0x1405467D4 (PopEnableHiberFile.c)
 *     ExpWnfPopulateStateData @ 0x140546B98 (ExpWnfPopulateStateData.c)
 *     IoRegisterContainerNotification @ 0x140546F70 (IoRegisterContainerNotification.c)
 *     SepBuildDefaultCap @ 0x140547160 (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x1405471F8 (_PnpGetEnumSecurityDescriptor.c)
 *     PnpAllocateDeviceInstancePath @ 0x140547518 (PnpAllocateDeviceInstancePath.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x140547638 (PnpMergeFilteredResourceRequirementsList.c)
 *     AlpcpInitSystem @ 0x140547BD8 (AlpcpInitSystem.c)
 *     AlpcpInitializeMessageLog @ 0x140547EA0 (AlpcpInitializeMessageLog.c)
 *     ExpGetSystemPlatformBinary @ 0x1405482D8 (ExpGetSystemPlatformBinary.c)
 *     CmpRegisterCallbackInternal @ 0x140548A24 (CmpRegisterCallbackInternal.c)
 *     ExpWnfAllocateScopeMap @ 0x140548F0C (ExpWnfAllocateScopeMap.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x140549098 (PopCreateHiberFileSecurityDescriptor.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x140549818 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     CmpAddStringToMapping @ 0x140549E4C (CmpAddStringToMapping.c)
 *     PspAllocateMonitorContextArrayServerSilo @ 0x14054A288 (PspAllocateMonitorContextArrayServerSilo.c)
 *     PiDcAllocateGenericTableEntry @ 0x14054AA38 (PiDcAllocateGenericTableEntry.c)
 *     MiConvertInitialMemoryBlock @ 0x14054B2F8 (MiConvertInitialMemoryBlock.c)
 *     PopCreateHiberFile @ 0x14054BA2C (PopCreateHiberFile.c)
 *     PopConnectToPolicyDevice @ 0x14054BF5C (PopConnectToPolicyDevice.c)
 *     PoCreateThermalRequest @ 0x14054C2E8 (PoCreateThermalRequest.c)
 *     PopAssociateThermalRequest @ 0x14054C3E0 (PopAssociateThermalRequest.c)
 *     PfTAllocateBuffers @ 0x14054CFAC (PfTAllocateBuffers.c)
 *     PfSnPrefetchCacheCtxStart @ 0x14054D654 (PfSnPrefetchCacheCtxStart.c)
 *     WmipLegacyEtwCallback @ 0x14054DFB4 (WmipLegacyEtwCallback.c)
 *     MmStoreRegister @ 0x14054E108 (MmStoreRegister.c)
 *     PopPreallocateHibernateMemory @ 0x14054E350 (PopPreallocateHibernateMemory.c)
 *     PopDiagTraceThermalRequest @ 0x14054E6B4 (PopDiagTraceThermalRequest.c)
 *     ExAllocatePrivateWorkerPool @ 0x14054E918 (ExAllocatePrivateWorkerPool.c)
 *     IoInitializeTimer @ 0x14054EC5C (IoInitializeTimer.c)
 *     CcAllocateObcb @ 0x1405DB590 (CcAllocateObcb.c)
 *     NtQueryOpenSubKeysEx @ 0x1405DBD48 (NtQueryOpenSubKeysEx.c)
 *     CmSetCallbackObjectContext @ 0x1405DD130 (CmSetCallbackObjectContext.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1405DE4F0 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmVirtualKCBToRealPath @ 0x1405E1C6C (CmVirtualKCBToRealPath.c)
 *     CmpBuildVirtualReplicationStack @ 0x1405E1DAC (CmpBuildVirtualReplicationStack.c)
 *     CmpDoAccessCheckOnSubtree @ 0x1405E30DC (CmpDoAccessCheckOnSubtree.c)
 *     CmpSnapshotKCBSecurity @ 0x1405E35F4 (CmpSnapshotKCBSecurity.c)
 *     CmpCmdRenameHive @ 0x1405E3C50 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarning @ 0x1405E3D10 (CmpDiskFullWarning.c)
 *     CmInitializeProcessor @ 0x1405E474C (CmInitializeProcessor.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1405E52D8 (CmpSnapshotHiveToOffsetArray.c)
 *     CmpDoReadTxRBigLogRecord @ 0x1405E5E04 (CmpDoReadTxRBigLogRecord.c)
 *     HvWriteExternal @ 0x1405E6F98 (HvWriteExternal.c)
 *     CmDeleteKeyRecursive @ 0x1405E76E0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1405E7AA0 (CmpCloneHwProfile.c)
 *     CmpMergeKeyValues @ 0x1405E8A90 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x1405E8C58 (CmpPreserveSystemHiveData.c)
 *     CmpGetValueForAudit @ 0x1405E9330 (CmpGetValueForAudit.c)
 *     CmpLoadHiveVolatile @ 0x1405EA5F4 (CmpLoadHiveVolatile.c)
 *     HvpViewMapPrefetchFile @ 0x1405EB5D0 (HvpViewMapPrefetchFile.c)
 *     CmpSnapshotTxOwnerArray @ 0x1405EC1D0 (CmpSnapshotTxOwnerArray.c)
 *     HvpReviveDiscardedBin @ 0x1405EC2A4 (HvpReviveDiscardedBin.c)
 *     HvpGetLogHeader @ 0x1405EC47C (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1405ECCC0 (HvpRecoverData.c)
 *     HvpRecoverDataReadRoutine @ 0x1405ECF1C (HvpRecoverDataReadRoutine.c)
 *     DbgkCaptureLiveDump @ 0x1405F0B8C (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1405F1178 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkWerAddSecondaryData @ 0x1405F1758 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x1405F18E4 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerAllocatePool @ 0x1405F1ACC (DbgkpWerAllocatePool.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x1405F1AE0 (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x1405F1C5C (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpTriageDumpInitialize @ 0x1405F2674 (DbgkpTriageDumpInitialize.c)
 *     EmpClientRuleRegisterNotification @ 0x1405F293C (EmpClientRuleRegisterNotification.c)
 *     EmProviderRegisterEntry @ 0x1405F2E04 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x1405F4A18 (FsRtlIsDbcsInExpression.c)
 *     FsRtlpHeatRegisterVolume @ 0x1405F54F4 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x1405F5728 (FsRtlpQueryValueKey.c)
 *     IoWritePartitionTable @ 0x1405F5BF8 (IoWritePartitionTable.c)
 *     FstubConvertExtendedToLayout @ 0x1405F60A8 (FstubConvertExtendedToLayout.c)
 *     FstubVerifyPartitionTableEFI @ 0x1405F6308 (FstubVerifyPartitionTableEFI.c)
 *     HvlpAllocatePageListResources @ 0x1405F6F70 (HvlpAllocatePageListResources.c)
 *     IopAllocateGenericTableEntry @ 0x1405F70A4 (IopAllocateGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x1405F76DC (IopGetRelatedFileName.c)
 *     IopInitializeBootLogging @ 0x1405F7ACC (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x1405F81F0 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x1405F8504 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1405F8664 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1405F8964 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 *     IopValidateJunctionTarget @ 0x1405F93B0 (IopValidateJunctionTarget.c)
 *     IoReplaceFileObjectName @ 0x1405F9FB4 (IoReplaceFileObjectName.c)
 *     IoIsValidNameGraftingBuffer @ 0x1405FAB5C (IoIsValidNameGraftingBuffer.c)
 *     IopSymlinkApplyToOpenedName @ 0x1405FB1FC (IopSymlinkApplyToOpenedName.c)
 *     IoRegisterIoTracking @ 0x1405FB380 (IoRegisterIoTracking.c)
 *     NtQueryQuotaInformationFile @ 0x1405FBBAC (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x1405FC30C (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1405FCA38 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x1405FCFE8 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x1405FD1C8 (IopLiveDumpAllocateMappingResources.c)
 *     IopFindSystemDevice @ 0x1405FF2AC (IopFindSystemDevice.c)
 *     IopAppendLegacyVeto @ 0x140600444 (IopAppendLegacyVeto.c)
 *     PpCreateLegacyDeviceIds @ 0x140600864 (PpCreateLegacyDeviceIds.c)
 *     PipAddRequestToEdge @ 0x140600D28 (PipAddRequestToEdge.c)
 *     PnpDeleteDeviceInterfaces @ 0x1406018BC (PnpDeleteDeviceInterfaces.c)
 *     IopChangeInterfaceType @ 0x140602364 (IopChangeInterfaceType.c)
 *     IoRequestDeviceRemovalForReset @ 0x140602490 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x140602CC8 (IopAllocatePassiveInterruptBlock.c)
 *     IopCombineLegacyResources @ 0x140604350 (IopCombineLegacyResources.c)
 *     IopLegacyResourceAllocation @ 0x1406045CC (IopLegacyResourceAllocation.c)
 *     IopIsPciRootBus @ 0x140604970 (IopIsPciRootBus.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x140604E20 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x140604ED4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x140604FE4 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x1406052B8 (PiPnpRtlServiceFilterCallback.c)
 *     PnpRebalance @ 0x140606198 (PnpRebalance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x14060649C (PiDcResetChildDeviceContainerCallback.c)
 *     PiAuCheckClientInteractive @ 0x14060689C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140606960 (PiAuCheckTokenMembership.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140607408 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x140607530 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140607F90 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyVariableData @ 0x140608248 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140608318 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x140609340 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x1406096F0 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x140609B14 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14060A6AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariableConstant @ 0x14060AA38 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableExpression @ 0x14060AB00 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14060BCA4 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x14060C1C8 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14060C394 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x14060CB3C (PiDevCfgResolveVariableKeyValue.c)
 *     PiProfileUpdateDeviceTree @ 0x14060DB84 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14060DCB4 (PnpProfileUpdateHardwareProfile.c)
 *     IopTranslatorHandlerIo @ 0x14060E2F8 (IopTranslatorHandlerIo.c)
 *     PnpAddVetoInformation @ 0x14060E354 (PnpAddVetoInformation.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x14060F850 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x14060FA34 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x14060FB50 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x14060FD08 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x1406100D0 (PnprGetPluginDriverImagePath.c)
 *     PnprMmAddRange @ 0x140610DC4 (PnprMmAddRange.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406113FC (PiSwQueuedCreateInfoCreate.c)
 *     PiCMCreateDevice @ 0x140611DAC (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140613120 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x1406132A8 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x14061365C (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140613880 (PiCMQueryRemove.c)
 *     IopQueryDockRemovalInterface @ 0x1406154C8 (IopQueryDockRemovalInterface.c)
 *     PiControlGetDeviceStack @ 0x1406159EC (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14061627C (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x140616688 (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1406169A8 (PnpQueueQueryAndRemoveEvent.c)
 *     PiAuditDeviceOperation @ 0x140617A00 (PiAuditDeviceOperation.c)
 *     IopExecuteHardwareProfileChange @ 0x1406180BC (IopExecuteHardwareProfileChange.c)
 *     PiCreateDriverSwDeviceCallback @ 0x1406182B0 (PiCreateDriverSwDeviceCallback.c)
 *     KeInitializeSecondaryInterruptServices @ 0x14061A8BC (KeInitializeSecondaryInterruptServices.c)
 *     KeInitializeUmsThread @ 0x14061B1E0 (KeInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x14061FE50 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x14062071C (AlpcpGetPortNameInformation.c)
 *     AlpcRegisterLogRoutine @ 0x1406207D0 (AlpcRegisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x140620D14 (AlpcpLogWaitForNewMessage.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406218DC (MiLogStrongCodeDriverLoadFailure.c)
 *     MiInitializeLockedPagesTracking @ 0x140621E34 (MiInitializeLockedPagesTracking.c)
 *     MmGetFileNameForAddress @ 0x140621ED0 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140621FD8 (MmGetFileNameForSection.c)
 *     MiConfigureMemoryInsertion @ 0x1406226E8 (MiConfigureMemoryInsertion.c)
 *     MiConfigureMemoryRemoval @ 0x140622A24 (MiConfigureMemoryRemoval.c)
 *     MiAllocatePartitionId @ 0x140623F10 (MiAllocatePartitionId.c)
 *     MiCreatePartition @ 0x140624224 (MiCreatePartition.c)
 *     MiHotAddPartitionMemory @ 0x140624578 (MiHotAddPartitionMemory.c)
 *     MiAllocateAweInfo @ 0x14062686C (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x1406270C0 (MiResizeAweBitMap.c)
 *     NtMapUserPhysicalPages @ 0x140627FF0 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x140628474 (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x140628988 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateEnclaveVad @ 0x140628DA0 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x140629118 (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x14062A184 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14062A548 (NtInitializeEnclave.c)
 *     MiAllocateLargeZeroPages @ 0x14062B1CC (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x14062B3E0 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x14062B53C (MiFindLargePageMemory.c)
 *     MiAllocatePerSessionProtos @ 0x14062BADC (MiAllocatePerSessionProtos.c)
 *     MiCopyDirectMapHeader @ 0x14062C788 (MiCopyDirectMapHeader.c)
 *     MiInitializeScrubPacket @ 0x14062CDC8 (MiInitializeScrubPacket.c)
 *     MmScrubMemory @ 0x14062D224 (MmScrubMemory.c)
 *     ObpSetObjectAuditInfo @ 0x14062E334 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x14062E584 (ObGetObjectInformation.c)
 *     ObpCreateTypeArray @ 0x14062EBF4 (ObpCreateTypeArray.c)
 *     ObpGetObjectRefInfo @ 0x14062F99C (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x14062FAB4 (ObpGetTraceIndex.c)
 *     ObpInitStackAndObjectTables @ 0x14062FCB0 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406300C0 (ObpRefillWorkItemFreeList.c)
 *     ObpRegisterObject @ 0x140630100 (ObpRegisterObject.c)
 *     ObpStartRuntimeStackTrace @ 0x140630308 (ObpStartRuntimeStackTrace.c)
 *     ObGetRootDirectoryNameByPointer @ 0x140630A1C (ObGetRootDirectoryNameByPointer.c)
 *     ObSetSiloRootDirectoryByPointer @ 0x140630B4C (ObSetSiloRootDirectoryByPointer.c)
 *     PfpQueryFileExtentsRequest @ 0x140630EFC (PfpQueryFileExtentsRequest.c)
 *     PopLoggingInformation @ 0x1406321B8 (PopLoggingInformation.c)
 *     PpmInstallCoordinatedIdleStates @ 0x140632690 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x140632C00 (PpmInstallPlatformIdleStates.c)
 *     PopRegisterCoolingExtensionProtection @ 0x140633814 (PopRegisterCoolingExtensionProtection.c)
 *     PopGetPowerRequestListInfo @ 0x140633C50 (PopGetPowerRequestListInfo.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x140634184 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x140634664 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x140634AE4 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x140634CF4 (PopFxRegisterComponentPerfStates.c)
 *     PopFxVerifyDependencies @ 0x14063537C (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x140635784 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopNewWakeSource @ 0x140635E8C (PopNewWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x140635ED4 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceGetDeviceProperty @ 0x140636090 (PopWakeSourceGetDeviceProperty.c)
 *     PopPdcCsDeviceNotification @ 0x140637B24 (PopPdcCsDeviceNotification.c)
 *     PopFxTracePerfRegistration @ 0x14063A448 (PopFxTracePerfRegistration.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x14063ADE4 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x14063B12C (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x14063B408 (PpmEventTraceProcessorIdle.c)
 *     PpmAllocateQueryTable @ 0x14063D210 (PpmAllocateQueryTable.c)
 *     PsInsertSiloObjectByPointer @ 0x14063F8F0 (PsInsertSiloObjectByPointer.c)
 *     PspConvertSiloToServerSilo @ 0x14063FFCC (PspConvertSiloToServerSilo.c)
 *     PspCreateSilo @ 0x140640174 (PspCreateSilo.c)
 *     PspCreateSecureThread @ 0x140641044 (PspCreateSecureThread.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140641D50 (PspAddProcessToWorkingSetChangeList.c)
 *     RtlpComputeMergedAcl @ 0x140646FA8 (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406473B4 (RtlpCreateServerAcl.c)
 *     RtlIdnToUnicode @ 0x140649B24 (RtlIdnToUnicode.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14064FF0C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140650CA8 (SepAdtStagingEvent.c)
 *     SepAdtTokenRightAdjusted @ 0x1406511B4 (SepAdtTokenRightAdjusted.c)
 *     SepQueryTypeString @ 0x140651514 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x1406518F8 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x1406519A0 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x140651BC0 (SepCaptureOctetStringArray.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14065252C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepCreateSidValuesBlock @ 0x1406539C4 (SepCreateSidValuesBlock.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140654094 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     NtFilterBootOption @ 0x1406545E8 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x140654A4C (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x140654E48 (SepSecureBootUpdateBcdDataForRule.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x140655164 (SeAdjustObjectAppContainerSecurity.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x1406552F4 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140655498 (SepBuildObjectSecurityDescriptor.c)
 *     SepDuplicateClaimAttributes @ 0x140656110 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140656408 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x1406567C8 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x140656B20 (SepReadSingleCap.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x14065B8CC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     VmCreateMemoryRange @ 0x14065C0CC (VmCreateMemoryRange.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14065D05C (WdipSemLoadLocalGroupPolicy.c)
 *     IoWMIAllocateInstanceIds @ 0x14065D3E0 (IoWMIAllocateInstanceIds.c)
 *     IoWMISuggestInstanceName @ 0x14065D8D8 (IoWMISuggestInstanceName.c)
 *     WmipDereferenceEvent @ 0x14065DB8C (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14065DF34 (WmipIncludeStaticNames.c)
 *     WmipQueryAllDataMultiple @ 0x14065E214 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x14065E4D0 (WmipQuerySingleMultiple.c)
 *     WmipGetSysIds @ 0x14065F02C (WmipGetSysIds.c)
 *     EtwpLogMemInfoWs @ 0x1406612D8 (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406617E8 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpSetPmcProfileSource @ 0x140662118 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x140662228 (EtwpTraceHandle.c)
 *     EtwpAllocatePmcData @ 0x140663724 (EtwpAllocatePmcData.c)
 *     EtwpCapturePreviousRegistryData @ 0x140663F0C (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x14066400C (EtwpCaptureRegistryData.c)
 *     EtwpSendDbgId @ 0x140664C10 (EtwpSendDbgId.c)
 *     EtwpEnumerateWorkingSet @ 0x140665400 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x14066577C (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x140665A08 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x140665B54 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x140666074 (EtwpProcessorRundown.c)
 *     EtwpReferenceStackLookasideList @ 0x14066676C (EtwpReferenceStackLookasideList.c)
 *     EtwpUpdateStackTracing @ 0x1406667D0 (EtwpUpdateStackTracing.c)
 *     EtwpAllocatePayloadFilterData @ 0x140666918 (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x14066699C (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x140666E9C (EtwpCreatePerfectHashFunction.c)
 *     EtwpUpdatePidFilterData @ 0x140667314 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1406673B0 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpAddWinRtProviderToSession @ 0x140667800 (EtwpAddWinRtProviderToSession.c)
 *     EtwpEnableStackCaching @ 0x140667B28 (EtwpEnableStackCaching.c)
 *     sub_140668B98 @ 0x140668B98 (sub_140668B98.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406696D0 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     sub_14066994C @ 0x14066994C (sub_14066994C.c)
 *     ExpParseFastCacheHelper @ 0x140669F10 (ExpParseFastCacheHelper.c)
 *     sub_14066C188 @ 0x14066C188 (sub_14066C188.c)
 *     NtDisplayString @ 0x14066C5FC (NtDisplayString.c)
 *     ExEnableHandleTracing @ 0x14066C82C (ExEnableHandleTracing.c)
 *     ExpConvertArcName @ 0x14066D234 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x14066D3E8 (ExpConvertSignatureName.c)
 *     ExpFindArcName @ 0x14066DB48 (ExpFindArcName.c)
 *     ExpFindDiskSignature @ 0x14066DE0C (ExpFindDiskSignature.c)
 *     ExpGetDriveGeometry @ 0x14066DFEC (ExpGetDriveGeometry.c)
 *     ExpGetPartitionTableInfo @ 0x14066E1FC (ExpGetPartitionTableInfo.c)
 *     ExpParseEfiPath @ 0x14066E45C (ExpParseEfiPath.c)
 *     ExpParseSignatureName @ 0x14066E684 (ExpParseSignatureName.c)
 *     ExpSetBootEntry @ 0x14066E9A4 (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x14066F160 (ExpSetDriverEntry.c)
 *     ExpTranslateEfiPath @ 0x14066FA84 (ExpTranslateEfiPath.c)
 *     ExpTranslateNtPath @ 0x1406700EC (ExpTranslateNtPath.c)
 *     ExpTranslateSymbolicLink @ 0x1406703B8 (ExpTranslateSymbolicLink.c)
 *     ExpUnicodeStringToNonpagedWStr @ 0x140670538 (ExpUnicodeStringToNonpagedWStr.c)
 *     NtEnumerateBootEntries @ 0x140670A9C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x140671040 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x140672028 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x140672358 (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x140672740 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x140672934 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x140672C68 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x140672ED4 (NtTranslateFilePath.c)
 *     ExpAllocatePoolForNode @ 0x14067323C (ExpAllocatePoolForNode.c)
 *     ExShareAddressSpaceWithDevice @ 0x140673C50 (ExShareAddressSpaceWithDevice.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406741C8 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x14067460C (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x140674878 (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x140674F78 (ExpCovReadRequestBuffer.c)
 *     NtStartProfile @ 0x1406758E4 (NtStartProfile.c)
 *     CMFAllocFn @ 0x140675D10 (CMFAllocFn.c)
 *     CMFCreateSecurityDescriptor @ 0x140675F40 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x140676460 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x140676B60 (CMFSystemThreadRoutine.c)
 *     NtSystemDebugControl @ 0x1406772A8 (NtSystemDebugControl.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x140677EA4 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x140678870 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x140678AC8 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x140678D94 (WheapPfaMemoryCheck.c)
 *     WheapIsSqmLoggerRunning @ 0x140679364 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406795F8 (WheapSqmCollectPshedPluginTelemetry.c)
 *     sub_140679828 @ 0x140679828 (sub_140679828.c)
 *     sub_140679C08 @ 0x140679C08 (sub_140679C08.c)
 *     sub_140679E80 @ 0x140679E80 (sub_140679E80.c)
 *     sub_14067A244 @ 0x14067A244 (sub_14067A244.c)
 *     sub_14067A85C @ 0x14067A85C (sub_14067A85C.c)
 *     sub_14067AC78 @ 0x14067AC78 (sub_14067AC78.c)
 *     sub_14067B494 @ 0x14067B494 (sub_14067B494.c)
 *     sub_14067B814 @ 0x14067B814 (sub_14067B814.c)
 *     sub_14067BCE0 @ 0x14067BCE0 (sub_14067BCE0.c)
 *     sub_14067C058 @ 0x14067C058 (sub_14067C058.c)
 *     sub_14067C2C0 @ 0x14067C2C0 (sub_14067C2C0.c)
 *     sub_14067C528 @ 0x14067C528 (sub_14067C528.c)
 *     sub_14067C9CC @ 0x14067C9CC (sub_14067C9CC.c)
 *     SddlpAlloc @ 0x140687AFC (SddlpAlloc.c)
 *     SddlpReAlloc @ 0x140687B70 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x140687CC4 (SddlpUuidToString.c)
 *     AdtpBuildGuidString @ 0x14068BA6C (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x14068BB98 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x14068BC54 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x14068BDA8 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x14068BEFC (AdtpBuildMacStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x14068BF9C (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildRegistryValueString @ 0x14068C194 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x14068C52C (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x14068C724 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x14068CA10 (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x14068CB74 (AdtpBuildUlongString.c)
 *     AdtpAppendString @ 0x14068CC68 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x14068CE4C (AdtpBuildAccessesString.c)
 *     AdtpBuildUserAccountControlString @ 0x14068D560 (AdtpBuildUserAccountControlString.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x14068DED8 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x14068DFAC (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x14068E06C (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x14068E3DC (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x14068E4C4 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x14068E570 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x14068E664 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x14068E814 (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x14068E948 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x14068EAC0 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x14068EC74 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x14068EDB0 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x14068EE8C (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x14068F2A4 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x14068F824 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x14068FCFC (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x140690140 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1406902DC (BiExportEfiBootManager.c)
 *     BiGetDeviceFromEfiPath @ 0x1406906E0 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x140690870 (BiGetFilePathFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406909CC (BiGetObjectReferenceFromEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x140690BD4 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x140690E04 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x140690EB4 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x140691130 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x140691248 (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x140691660 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetDriveLayoutInformation @ 0x140691968 (SiGetDriveLayoutInformation.c)
 *     SiGetEfiSystemDevice @ 0x140691D48 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x140692030 (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x14069230C (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x140692430 (SiGetBiosSystemPartition.c)
 *     _CmDeleteCommonClassRegKeyWorker @ 0x140692BDC (_CmDeleteCommonClassRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceRegKeyWorker @ 0x1406930F8 (_CmDeleteDeviceInterfaceRegKeyWorker.c)
 *     _CmDeleteDeviceInterfaceWorker @ 0x1406932CC (_CmDeleteDeviceInterfaceWorker.c)
 *     _CmDeleteDeviceRegKeyWorker @ 0x140693674 (_CmDeleteDeviceRegKeyWorker.c)
 *     _CmDeleteDeviceWorker @ 0x140693A0C (_CmDeleteDeviceWorker.c)
 *     _CmDeleteInstallerClassWorker @ 0x14069404C (_CmDeleteInstallerClassWorker.c)
 *     _CmDeleteInterfaceClassWorker @ 0x140694408 (_CmDeleteInterfaceClassWorker.c)
 *     _CmDeleteDeviceContainerRegKeyWorker @ 0x140694D24 (_CmDeleteDeviceContainerRegKeyWorker.c)
 *     _CmDeleteDeviceContainerWorker @ 0x140694EE8 (_CmDeleteDeviceContainerWorker.c)
 *     _CmEnumDevicesInContainerWithCallbackWorker @ 0x1406951E4 (_CmEnumDevicesInContainerWithCallbackWorker.c)
 *     _CmGetDevicesInBaseContainerList @ 0x14069563C (_CmGetDevicesInBaseContainerList.c)
 *     _CmServiceFilterCallback @ 0x140696B44 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceSiblings @ 0x140698210 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x140698370 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x140699A24 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpMultiSzDeleteString @ 0x140699D84 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x140699E7C (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x14069A424 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x14069A88C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x14069B588 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x14069C28C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x14069CA70 (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x14069E060 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x14069E390 (ArbQueryConflict.c)
 *     VhdiVerifyBootDisk @ 0x14069E8FC (VhdiVerifyBootDisk.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x14069F10C (RtlpLoadPolicyLanguageSpec.c)
 *     KdInitSystem @ 0x1406AA128 (KdInitSystem.c)
 *     KdPullRemoteFile @ 0x1406AE0E0 (KdPullRemoteFile.c)
 *     ViThunkCreateSharedExportInformation @ 0x1406B21F8 (ViThunkCreateSharedExportInformation.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1406B2474 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfAvlInitializeTree @ 0x1406B24D4 (VfAvlInitializeTree.c)
 *     IovpBuildDriverObjectList @ 0x1406B5320 (IovpBuildDriverObjectList.c)
 *     VfInitVerifierComponents @ 0x1406B6B50 (VfInitVerifierComponents.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x1406B7220 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1406B78B8 (ViInitializeLocalSystemDescriptor.c)
 *     ViDdiDriverEntry @ 0x1406B872C (ViDdiDriverEntry.c)
 *     ViAllocateContiguousMemory @ 0x1406BC5AC (ViAllocateContiguousMemory.c)
 *     ViAllocateMapRegisterFile @ 0x1406BC758 (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x1406BDC1C (ViHookDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x1406BE384 (ViSpecialAllocateCommonBuffer.c)
 *     ViPendingDelayCompletion @ 0x1406C1348 (ViPendingDelayCompletion.c)
 *     VfInitializeBranchTracing @ 0x1406C2C5C (VfInitializeBranchTracing.c)
 *     VfThunkAddSpecialDriverThunks @ 0x1406C3140 (VfThunkAddSpecialDriverThunks.c)
 *     ViThunkCreateThunkTable @ 0x1406C37B0 (ViThunkCreateThunkTable.c)
 *     ViThunkFindAllSpecialTables @ 0x1406C3830 (ViThunkFindAllSpecialTables.c)
 *     VfTargetEtwRegister @ 0x1406C3F8C (VfTargetEtwRegister.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1406C4324 (ViTargetDriversAllocateVerifiedData.c)
 *     ViTargetTrackContiguousMemory @ 0x1406C4634 (ViTargetTrackContiguousMemory.c)
 *     ViFaultsAddAppNoDuplicates @ 0x1406C51CC (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x1406C52E0 (ViFaultsAddTagNoDuplicates.c)
 *     VfSuspectDriversAllocateEntry @ 0x1406C74C8 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x1406C7CC4 (VfSuspectExcludedDriversAllocateEntry.c)
 *     IovpSessionDataCreate @ 0x1406C8E70 (IovpSessionDataCreate.c)
 *     VfIrpLogRecordEvent @ 0x1406CAA5C (VfIrpLogRecordEvent.c)
 *     VfIrpLogRetrieveWmiData @ 0x1406CAC34 (VfIrpLogRetrieveWmiData.c)
 *     ViCtxAllocateIsrContext @ 0x1406CB2BC (ViCtxAllocateIsrContext.c)
 *     VfDeadlockInitialize @ 0x1406CC018 (VfDeadlockInitialize.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x1406CD6CC (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     VfGetVerifierInformation @ 0x1406D4D60 (VfGetVerifierInformation.c)
 *     HdlspAddLogEntry @ 0x1406D6ADC (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x1406D7F74 (HdlspSetBlueScreenInformation.c)
 *     ResFwpPageOutBackground @ 0x1406DB9AC (ResFwpPageOutBackground.c)
 *     CcInitializeBcbProfiler @ 0x14072D2C4 (CcInitializeBcbProfiler.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 *     KeQueryNumaGraph @ 0x140742E8C (KeQueryNumaGraph.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407439F0 (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140743C5C (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemBiosInformation @ 0x140744130 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x140744438 (CmpSetVideoBiosInformation.c)
 *     CmpGetRegistryValue @ 0x140744B70 (CmpGetRegistryValue.c)
 *     CmpInitializeSystemHive @ 0x140744EB4 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407450EC (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x140745898 (CmpInitializePreloadedHive.c)
 *     InitializePagedPool @ 0x140749B74 (InitializePagedPool.c)
 *     MiInitializeDriverImages @ 0x14074A790 (MiInitializeDriverImages.c)
 *     PsInitializeQuotaSystem @ 0x14074B984 (PsInitializeQuotaSystem.c)
 *     MiBuildImportsForBootDrivers @ 0x14074BBEC (MiBuildImportsForBootDrivers.c)
 *     MiInitializeRelocations @ 0x14074C01C (MiInitializeRelocations.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 *     MiInitializeMirroring @ 0x14074CF24 (MiInitializeMirroring.c)
 *     MiCreateMemoryEvent @ 0x14074D1CC (MiCreateMemoryEvent.c)
 *     MiInitializeCacheFlushing @ 0x14074DBEC (MiInitializeCacheFlushing.c)
 *     MiInitializeSessionIds @ 0x14074DDB0 (MiInitializeSessionIds.c)
 *     MiCreateEnclaveRegions @ 0x14074DEE8 (MiCreateEnclaveRegions.c)
 *     MmFreeLoaderBlock @ 0x14074E52C (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x14074E92C (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x14074ED1C (KiComputeNumaCosts.c)
 *     IopCreateArcNamesCd @ 0x14074F274 (IopCreateArcNamesCd.c)
 *     PipInitComputerIds @ 0x14074FA48 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x140750550 (PipCreateComputerId.c)
 *     IopCreateArcNames @ 0x1407509D8 (IopCreateArcNames.c)
 *     IopStoreArcInformation @ 0x140750ED8 (IopStoreArcInformation.c)
 *     IopInitializeBootDrivers @ 0x1407517B4 (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x14075210C (IopInitializeBuiltinDriver.c)
 *     PipCreateEntry @ 0x140752870 (PipCreateEntry.c)
 *     WmipInitializeSecurity @ 0x140752D78 (WmipInitializeSecurity.c)
 *     PipInitDeviceOverrideCache @ 0x140753200 (PipInitDeviceOverrideCache.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x140753A8C (PnpRegMultiSzToUnicodeStrings.c)
 *     CmGetSystemDriverList @ 0x140753C54 (CmGetSystemDriverList.c)
 *     EtwpReadConfigParameters @ 0x140755760 (EtwpReadConfigParameters.c)
 *     PpInitializeBootDDB @ 0x140756EE4 (PpInitializeBootDDB.c)
 *     CcInitializeCacheManager @ 0x140758600 (CcInitializeCacheManager.c)
 *     ObInitSystem @ 0x140758E84 (ObInitSystem.c)
 *     ExpInitSystemPhase1 @ 0x140759698 (ExpInitSystemPhase1.c)
 *     PspInitPhase0 @ 0x140759ACC (PspInitPhase0.c)
 *     MiSystemPartitionObjectCreate @ 0x14075A6E8 (MiSystemPartitionObjectCreate.c)
 *     MiSectionInitialization @ 0x14075A850 (MiSectionInitialization.c)
 *     DbgkpCreateNotificationEvent @ 0x14075AC8C (DbgkpCreateNotificationEvent.c)
 *     ExpKeyedEventInitialization @ 0x14075AE80 (ExpKeyedEventInitialization.c)
 *     StartFirstUserProcess @ 0x14075BB50 (StartFirstUserProcess.c)
 *     SeMakeSystemToken @ 0x14075BF7C (SeMakeSystemToken.c)
 *     SeMakeAnonymousLogonTokenNoEveryone @ 0x14075C4B0 (SeMakeAnonymousLogonTokenNoEveryone.c)
 *     SeMakeAnonymousLogonToken @ 0x14075C6E4 (SeMakeAnonymousLogonToken.c)
 *     BuildKnownDlls @ 0x14075C938 (BuildKnownDlls.c)
 *     ExpandKnownDllsPath @ 0x14075CCB4 (ExpandKnownDllsPath.c)
 *     SepVariableInitialization @ 0x14075CDE0 (SepVariableInitialization.c)
 *     SepInitSystemDacls @ 0x14075E344 (SepInitSystemDacls.c)
 *     EmInitSystem @ 0x14075EBD4 (EmInitSystem.c)
 *     EmpParseEntryTypes @ 0x14075F2D4 (EmpParseEntryTypes.c)
 *     IopGetBootDiskInformationLite @ 0x14075F42C (IopGetBootDiskInformationLite.c)
 *     EmpParseCallbacks @ 0x14075F5EC (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x14075F808 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x14075F95C (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x14075FDC8 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1407600F4 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x140760308 (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x140760518 (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPush @ 0x140760A5C (EmpRuleParserStackPush.c)
 *     MmInitializeMemoryLimits @ 0x140761084 (MmInitializeMemoryLimits.c)
 *     IoReportHalResourceUsage @ 0x1407611C0 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x140761370 (IopInitializeResourceMap.c)
 *     IopReportBootResources @ 0x1407616B4 (IopReportBootResources.c)
 *     CmpParseInfBuffer @ 0x14076172C (CmpParseInfBuffer.c)
 *     CmpGetToken @ 0x140761A0C (CmpGetToken.c)
 *     CmpAppendValue @ 0x140761C98 (CmpAppendValue.c)
 *     CmpAppendLine @ 0x140761D14 (CmpAppendLine.c)
 *     CmpAppendSection @ 0x140761D94 (CmpAppendSection.c)
 *     PspInitializeProtectedProcessParameters @ 0x140761FA0 (PspInitializeProtectedProcessParameters.c)
 *     sub_14076255C @ 0x14076255C (sub_14076255C.c)
 *     SepInitializeSingletonAttributesStructures @ 0x140762A88 (SepInitializeSingletonAttributesStructures.c)
 *     KeStartAllProcessors @ 0x140762F20 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140763928 (KiPerformGroupConfiguration.c)
 *     KiAllocateCpuSetData @ 0x140763C28 (KiAllocateCpuSetData.c)
 *     InitBootProcessor @ 0x140763EA0 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x1407645E8 (Phase1InitializationDiscard.c)
 *     PoFxRegisterDebugger @ 0x140766334 (PoFxRegisterDebugger.c)
 *     MxConvertKernelHal @ 0x140766618 (MxConvertKernelHal.c)
 *     CcInitializeVacbs @ 0x1407677BC (CcInitializeVacbs.c)
 *     BvgaSaveResources @ 0x140767A9C (BvgaSaveResources.c)
 *     PopInitPlatformSettings @ 0x14076812C (PopInitPlatformSettings.c)
 *     WheapInitializeErrorSourceTable @ 0x1407684B4 (WheapInitializeErrorSourceTable.c)
 *     BapdpProcessEDrvHintInfo @ 0x140768724 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1407687AC (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x140768834 (BapdpProcessHSTIResults.c)
 *     BapdpProcessSystemIntegrityPolicy @ 0x1407688BC (BapdpProcessSystemIntegrityPolicy.c)
 *     BapdpProcessWmdResults @ 0x140768950 (BapdpProcessWmdResults.c)
 *     BapdpProcessResumeInformation @ 0x140768A34 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x140768B00 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSecureBootPolicy @ 0x140768BCC (BapdpProcessSecureBootPolicy.c)
 *     BapdpProcessSiData @ 0x140768C98 (BapdpProcessSiData.c)
 *     SeSecureBootRegisterPolicy @ 0x140768E30 (SeSecureBootRegisterPolicy.c)
 *     BapdpProcessBootMetadata @ 0x1407691E8 (BapdpProcessBootMetadata.c)
 *     sub_14076925C @ 0x14076925C (sub_14076925C.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x140769C5C (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x140769FCC (PiAuCreateStandardSecurityObject.c)
 *     PfSnInitializePrefetcher @ 0x14076A66C (PfSnInitializePrefetcher.c)
 *     FsRtlInitSystem @ 0x14076C038 (FsRtlInitSystem.c)
 *     FsRtlGetCompatibilityModeValue @ 0x14076C364 (FsRtlGetCompatibilityModeValue.c)
 *     BootApplicationPersistentDataInitialize @ 0x14076C9D4 (BootApplicationPersistentDataInitialize.c)
 *     ObpGetDosDevicesProtection @ 0x14076D55C (ObpGetDosDevicesProtection.c)
 *     sub_14076D710 @ 0x14076D710 (sub_14076D710.c)
 *     SepLoadNgenLocations @ 0x14076DC8C (SepLoadNgenLocations.c)
 *     SepRmDbInitialization @ 0x14076E6F0 (SepRmDbInitialization.c)
 *     PiLastGoodCopyKeyContents @ 0x14076EC0C (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x14076ECBC (IopFileUtilRename.c)
 *     WheapCreatePerProcessorInfo @ 0x14076EFB8 (WheapCreatePerProcessorInfo.c)
 *     PopUmpoInitializeChannel @ 0x14076F050 (PopUmpoInitializeChannel.c)
 *     ExpInitializeSvm @ 0x1407701E0 (ExpInitializeSvm.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1407706F4 (CmpInitializeTrustedInstallerSid.c)
 *     PspInitializeSiloStructures @ 0x140770CC0 (PspInitializeSiloStructures.c)
 *     PnpInitializeDeviceEvents @ 0x140770D44 (PnpInitializeDeviceEvents.c)
 *     ObpInitStackTrace @ 0x14077148C (ObpInitStackTrace.c)
 *     PnpBusTypeGuidInitialize @ 0x140771BEC (PnpBusTypeGuidInitialize.c)
 *     MfgInitSystem @ 0x1407720A4 (MfgInitSystem.c)
 *     PspIumInitialize @ 0x1407722B8 (PspIumInitialize.c)
 *     HeadlessInit @ 0x14077250C (HeadlessInit.c)
 *     CreateMiniNtBootKey @ 0x140781A50 (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x140782144 (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x140782D38 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407831D0 (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x140783654 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140783710 (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x140783EA0 (PipProcessPendingObjects.c)
 *     KiInitializeCacheErrataSupport @ 0x1407849C4 (KiInitializeCacheErrataSupport.c)
 *     RtlInitializeExceptionLog @ 0x14078505C (RtlInitializeExceptionLog.c)
 *     SeSystemIntegrityRegisterPolicy @ 0x1407850A8 (SeSystemIntegrityRegisterPolicy.c)
 *     sub_140785A2C @ 0x140785A2C (sub_140785A2C.c)
 *     VhdiInitializeBootDisk @ 0x140786954 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x140786C50 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x140787130 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x14078750C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407876E4 (SbpStartLanman.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     KeReleaseGuardedMutex @ 0x140020FB0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x140020FFC (ExpReleaseFastMutexContended.c)
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     RtlCaptureStackBackTrace @ 0x1400243AC (RtlCaptureStackBackTrace.c)
 *     KeReleaseSpinLock @ 0x14002D960 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x140038DA0 (KeAcquireSpinLockRaiseToDpc.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x140040D00 (PsBoostThreadIoEx.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiAllocatePoolPages @ 0x140040F90 (MiAllocatePoolPages.c)
 *     ExpAllocateBigPool @ 0x140041130 (ExpAllocateBigPool.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x1400B1C70 (KxWaitForLockOwnerShip.c)
 *     ExpInsertPoolTrackerExpansion @ 0x1400C6E40 (ExpInsertPoolTrackerExpansion.c)
 *     KiAbThreadInsertList @ 0x1400EC5C8 (KiAbThreadInsertList.c)
 *     KiAbQueueAutoBoostDpc @ 0x14010287C (KiAbQueueAutoBoostDpc.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTracePool @ 0x140150068 (EtwTracePool.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x14015B960 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401C4828 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MmAllocateSpecialPool @ 0x1401DAD04 (MmAllocateSpecialPool.c)
 *     ExpUseSpecialPool @ 0x140212E44 (ExpUseSpecialPool.c)
 *     ExDeferredFreePool @ 0x140238000 (ExDeferredFreePool.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     MiSessionPoolVector @ 0x1404065D0 (MiSessionPoolVector.c)
 *     VeAllocatePoolWithTagPriority @ 0x1406B5F18 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  SIZE_T v4; // rbp
  POOL_TYPE v5; // edi
  __int16 v6; // r10
  __int64 ParentNode; // rcx
  int v8; // ebx
  __int64 v9; // rax
  ULONG v10; // esi
  unsigned int v11; // ebp
  unsigned int v12; // ebp
  PSLIST_ENTRY v13; // rbx
  ULONG_PTR v14; // rbx
  ULONG_PTR v15; // r9
  unsigned __int64 v16; // rdx
  int v17; // r8d
  int v18; // r9d
  __int64 v19; // r11
  __int64 v20; // rdx
  unsigned int v21; // ebx
  unsigned int v22; // r10d
  __int64 v23; // rbp
  int v24; // eax
  ULONG_PTR v25; // rdx
  PVOID result; // rax
  struct _KPRCB *v27; // rdx
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // r9
  int v31; // eax
  __int64 v32; // r9
  int v33; // r8d
  __int64 v34; // rax
  __int64 i; // r9
  ULONG_PTR *v36; // rbx
  __int64 v37; // r9
  bool v38; // zf
  ULONG_PTR PoolPages; // rax
  char v40; // r8
  struct _FAST_MUTEX *v41; // rcx
  ULONG_PTR v42; // rdx
  __int64 v43; // rcx
  ULONG_PTR *v44; // rax
  volatile signed __int32 *v45; // rcx
  signed __int32 v46; // eax
  ULONG_PTR v47; // r8
  struct _KTHREAD *CurrentThread; // r10
  unsigned int AbEntrySummary; // edx
  __int64 v50; // rcx
  __int64 v51; // rcx
  int SessionId; // eax
  __int16 v53; // ax
  __int64 v54; // rcx
  unsigned __int8 CurrentIrql; // dl
  int v56; // eax
  _KDPC *v57; // rdx
  KIRQL v58; // r8
  struct _KTHREAD *v59; // rcx
  signed __int32 v60; // eax
  ULONG_PTR v61; // r8
  ULONG_PTR v62; // r9
  ULONG_PTR v63; // rax
  ULONG_PTR v64; // rax
  __int64 v65; // rbp
  struct _KTHREAD *v66; // rax
  char v67; // cl
  KIRQL v68; // dl
  struct _LIST_ENTRY *v69; // r8
  volatile signed __int32 *v70; // rcx
  signed __int32 v71; // eax
  ULONG_PTR v72; // rdx
  char v73; // al
  _BYTE *v74; // rax
  __int16 v75; // ax
  __int64 *v76; // rdx
  __int64 v77; // rcx
  __int64 **v78; // rax
  unsigned __int8 v79; // al
  _QWORD *v80; // rdx
  unsigned int v81; // eax
  unsigned int v82; // eax
  unsigned int v83; // eax
  unsigned int v84; // ecx
  ULONG_PTR v85; // r8
  __int64 v86; // rcx
  unsigned int v87; // r9d
  char v88; // r8
  _BYTE *v89; // rcx
  int v90; // r11d
  __int64 AbOrphanedEntrySummary; // rax
  int v92; // r11d
  unsigned int v93; // ecx
  void *SpecialPool; // rax
  unsigned __int64 v95; // r9
  __int64 v96; // rax
  unsigned int v97; // edi
  int v98; // edx
  int v99; // r8d
  __int64 v100; // r11
  __int64 v101; // r10
  unsigned int v102; // ebx
  __int64 v103; // r9
  int v104; // eax
  int v105; // r10d
  PVOID *PoolWithTag; // rax
  KIRQL v107; // al
  _KDPC *Dpc; // r9
  struct _LIST_ENTRY *v109; // rax
  KIRQL v110; // al
  struct _LIST_ENTRY **p_Blink; // rax
  struct _LIST_ENTRY *v112; // rcx
  struct _LIST_ENTRY *v113; // r8
  unsigned int *j; // rax
  __int64 *v115; // rcx
  __int64 v116; // r8
  struct _LIST_ENTRY *Flink; // r10
  ULONG_PTR v118; // [rsp+30h] [rbp-A8h]
  __int64 v119; // [rsp+30h] [rbp-A8h]
  signed __int32 v120; // [rsp+30h] [rbp-A8h]
  void *v121; // [rsp+30h] [rbp-A8h]
  PVOID *v122; // [rsp+30h] [rbp-A8h]
  unsigned __int8 v123; // [rsp+30h] [rbp-A8h]
  __int64 v124; // [rsp+38h] [rbp-A0h]
  int v125; // [rsp+38h] [rbp-A0h]
  __int64 v126; // [rsp+38h] [rbp-A0h]
  __int64 v127; // [rsp+40h] [rbp-98h]
  struct _KTHREAD *v128; // [rsp+40h] [rbp-98h]
  unsigned __int8 v129; // [rsp+40h] [rbp-98h]
  struct _KTHREAD *v130; // [rsp+40h] [rbp-98h]
  int v131; // [rsp+40h] [rbp-98h]
  struct _KPRCB *CurrentPrcb; // [rsp+40h] [rbp-98h]
  struct _LIST_ENTRY *v133; // [rsp+40h] [rbp-98h]
  PKGUARDED_MUTEX Mutex; // [rsp+48h] [rbp-90h]
  struct _FAST_MUTEX *Mutexa; // [rsp+48h] [rbp-90h]
  PKGUARDED_MUTEX Mutexb; // [rsp+48h] [rbp-90h]
  PKGUARDED_MUTEX Mutexc; // [rsp+48h] [rbp-90h]
  unsigned __int64 v138; // [rsp+50h] [rbp-88h]
  __int64 v139; // [rsp+50h] [rbp-88h]
  struct _LIST_ENTRY **v140; // [rsp+60h] [rbp-78h]
  int v141; // [rsp+68h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+70h] [rbp-68h] BYREF
  int v143; // [rsp+88h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE v144; // [rsp+90h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v145; // [rsp+A8h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+D8h] [rbp+0h]
  unsigned __int8 v147; // [rsp+E0h] [rbp+8h]
  char v148; // [rsp+E0h] [rbp+8h]
  char v149; // [rsp+E0h] [rbp+8h]
  unsigned __int8 v150; // [rsp+E0h] [rbp+8h]
  unsigned int v151; // [rsp+E0h] [rbp+8h]
  int v152; // [rsp+E0h] [rbp+8h]
  int v153; // [rsp+E8h] [rbp+10h]
  _GENERAL_LOOKASIDE_POOL *BugCheckParameter3; // [rsp+F8h] [rbp+20h]
  unsigned int BugCheckParameter3a; // [rsp+F8h] [rbp+20h]
  unsigned int BugCheckParameter3b; // [rsp+F8h] [rbp+20h]
  ULONG_PTR BugCheckParameter3c; // [rsp+F8h] [rbp+20h]
  KIRQL BugCheckParameter3d; // [rsp+F8h] [rbp+20h]
  unsigned int BugCheckParameter3e; // [rsp+F8h] [rbp+20h]

  v153 = NumberOfBytes;
  v4 = NumberOfBytes;
  v5 = PoolType;
  if ( (PoolType & 0x44) == 0x44 )
    v5 = PoolType & 0xFFFFFFFB;
  v6 = ExpPoolFlags;
  ParentNode = 0x140000000uLL;
  v8 = v5 & 1;
  if ( (v5 & 0x20) == 0 )
  {
    v9 = PoolVector[v5 & 1];
    goto LABEL_5;
  }
  if ( (v5 & 1) != 0 )
  {
    v9 = MiSessionPoolVector(0x140000000uLL, NumberOfBytes);
LABEL_5:
    v124 = v9;
    if ( (v5 & 1) != 0 )
      goto LABEL_6;
    goto LABEL_39;
  }
  v9 = PoolVector[0];
  v124 = PoolVector[0];
LABEL_39:
  if ( (v5 & 0x200) == 0 )
  {
    if ( (v6 & 0x800) != 0 )
      v5 |= 0x200u;
    else
      v124 = v9 + 4416;
  }
LABEL_6:
  if ( (v6 & 8) != 0 )
  {
    if ( (v5 & 0x80000080) == 0 )
      return (PVOID)VeAllocatePoolWithTagPriority(v5, NumberOfBytes, Tag, HighPoolPriority, retaddr);
    v5 &= ~0x80u;
  }
  v10 = Tag & 0x7FFFFFFF;
  if ( !v10 )
    v10 = 811884866;
  if ( !MmSpecialPoolTag || !ExpUseSpecialPool(v4, v10) )
  {
LABEL_10:
    if ( v4 > 0xFE0 )
    {
      result = (PVOID)ExpAllocateBigPool(0LL, v5, v4, v10, 0);
      if ( result )
        return result;
      goto LABEL_269;
    }
    if ( !v4 )
    {
      LODWORD(v4) = 1;
      v153 = 1;
    }
    v11 = v4 + 31;
    if ( (v5 & 4) != 0 )
    {
      ParentNode = (unsigned int)ExpCacheLineSize;
      v81 = ExpCacheLineSize + ((v153 + 31) & 0xFFFFFFF0) - 1;
      if ( ExpCacheLineSize == 64 )
        v82 = v81 >> 6;
      else
        v82 = v81 / ExpCacheLineSize;
      v83 = ExpCacheLineSize * (v82 + 1);
      if ( v83 > 0xFE0 )
        v5 &= ~4u;
      else
        v11 = v83;
    }
    v12 = v11 >> 4;
    if ( v8 )
    {
      if ( (v5 & 0x20) != 0 )
      {
        if ( v12 <= ExpSessionPoolSmallLists )
        {
          BugCheckParameter3 = (_GENERAL_LOOKASIDE_POOL *)(ExpSessionPoolLookaside - 128 + ((unsigned __int64)v12 << 7));
          ++BugCheckParameter3->TotalAllocates;
          v13 = RtlpInterlockedPopEntrySList(&BugCheckParameter3->ListHead);
          if ( v13 )
            goto LABEL_20;
        }
      }
      else if ( v5 >= NonPagedPool )
      {
        if ( v12 <= 0x20 )
        {
          if ( (v6 & 0x100) != 0 )
            goto LABEL_148;
          BugCheckParameter3 = &KeGetCurrentPrcb()->PPNPagedLookasideList[v12 + 31];
          ++BugCheckParameter3->TotalAllocates;
          v13 = RtlpInterlockedPopEntrySList(&BugCheckParameter3->ListHead);
          if ( v13 )
          {
LABEL_20:
            v14 = (ULONG_PTR)&v13[-1];
            v118 = v14;
            v15 = *(_QWORD *)(v14 + 8);
            if ( v15 != (v14 ^ ExpPoolQuotaCookie) )
              KeBugCheckEx(0x19u, 0xEuLL, v14, v15, v14 ^ ExpPoolQuotaCookie);
            ++BugCheckParameter3->AllocateMisses;
            *(_BYTE *)(v14 + 3) = v5 & 0x6D | 2;
            goto LABEL_22;
          }
          v6 = ExpPoolFlags;
        }
        if ( (v6 & 0x100) == 0 )
        {
          if ( (unsigned __int16)KeNumberNodes > 1u )
          {
            ParentNode = (__int64)KeGetCurrentPrcb()->ParentNode;
            v31 = ExpNumberOfPagedPools;
            v87 = *(unsigned __int16 *)(ParentNode + 146);
            if ( v87 < ExpNumberOfPagedPools )
            {
              BugCheckParameter3b = v87 + 1;
              ParentNode = ExpPagedPoolDescriptor[v87 + 1];
              v124 = ParentNode;
              goto LABEL_66;
            }
          }
          else
          {
            v31 = ExpNumberOfPagedPools;
          }
          BugCheckParameter3b = 1;
          LODWORD(v32) = 1;
          if ( v31 == 1 )
            goto LABEL_64;
          ParentNode = (unsigned int)ExpNumberOfPagedPools;
          v32 = (unsigned int)(ExpPoolIndex + 1);
          if ( (unsigned int)v32 > ExpNumberOfPagedPools )
            v32 = 1LL;
          v33 = v32;
          ExpPoolIndex = v32;
          do
          {
            if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v32] + 16) )
              break;
            v32 = (unsigned int)(v32 + 1);
            if ( (unsigned int)v32 > ExpNumberOfPagedPools )
              v32 = 1LL;
          }
          while ( (_DWORD)v32 != v33 );
LABEL_63:
          BugCheckParameter3b = v32;
LABEL_64:
          v124 = ExpPagedPoolDescriptor[(unsigned int)v32];
LABEL_66:
          v141 = 0;
          v34 = v124;
          for ( i = v124 + 16 * (v12 - 1 + 20LL); ; i = v124 + 16 * (v12 - 1 + 20LL) )
          {
            v36 = (ULONG_PTR *)i;
            v37 = v5 & 1;
            do
            {
              if ( (ULONG_PTR *)*v36 == v36 )
                goto LABEL_69;
              v47 = v34 + 8;
              Mutexa = (struct _FAST_MUTEX *)(v34 + 8);
              if ( v37 )
              {
                if ( KiAbEnabled )
                {
                  CurrentThread = KeGetCurrentThread();
                  v128 = CurrentThread;
                  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
                    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v47, KeGetCurrentIrql(), 0LL);
                  --CurrentThread->SpecialApcDisable;
                  if ( CurrentThread->AbEntrySummary )
                  {
LABEL_86:
                    AbEntrySummary = CurrentThread->AbEntrySummary;
                    _BitScanForward((unsigned int *)&v50, AbEntrySummary);
                    v143 = v50;
                    CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v50);
                    v51 = 96 * v50 + 800;
                    v38 = (struct _KTHREAD *)((char *)CurrentThread + v51) == 0LL;
                    ParentNode = (__int64)CurrentThread + v51;
                    v119 = ParentNode;
                    if ( !v38 )
                    {
                      if ( v47 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
                      {
                        SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
                        CurrentThread = v128;
                        v47 = (ULONG_PTR)Mutexa;
                        ParentNode = v119;
                      }
                      else
                      {
                        SessionId = -1;
                      }
                      *(_DWORD *)(ParentNode + 40) = SessionId;
                      *(_QWORD *)(ParentNode + 32) = v47 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_90:
                      v53 = CurrentThread->SpecialApcDisable + 1;
                      CurrentThread->SpecialApcDisable = v53;
                      if ( !v53
                        && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
                      {
                        KiCheckForKernelApcDelivery(ParentNode);
                        v47 = (ULONG_PTR)Mutexa;
                      }
                      v54 = v119;
LABEL_94:
                      CurrentIrql = KeGetCurrentIrql();
                      v129 = CurrentIrql;
                      __writecr8(1uLL);
                      if ( !_interlockedbittestandreset((volatile signed __int32 *)v47, 0) )
                      {
                        ExpAcquireFastMutexContended(v47, v54);
                        v47 = (ULONG_PTR)Mutexa;
                        v54 = v119;
                        CurrentIrql = v129;
                      }
                      if ( v54 )
                        *(_BYTE *)(v54 + 26) |= 1u;
                      *(_QWORD *)(v47 + 8) = KeGetCurrentThread();
                      v56 = CurrentIrql;
                      v57 = 0LL;
                      *(_DWORD *)(v47 + 48) = v56;
                      v58 = 0;
                      v59 = KeGetCurrentThread();
                      v130 = v59;
                      v148 = 0;
                      if ( PspAlwaysTrackIoBoosting )
                      {
                        v148 = 1;
                        PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
                        v122 = PoolWithTag;
                        if ( PoolWithTag )
                        {
                          memset(PoolWithTag, 0, 0x70uLL);
                          RtlCaptureStackBackTrace(1u, 0xAu, v122 + 2, 0LL);
                          v122[12] = KeGetCurrentThread();
                          v122[13] = 0LL;
                        }
                        v107 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&v130[1].WaitBlock[0].WaitListEntry.Blink);
                        v59 = v130;
                        v58 = v107;
                        v57 = (_KDPC *)v122;
                      }
                      v60 = _InterlockedIncrement((volatile signed __int32 *)&v59[1].Timer.TimerListEntry.Flink + 1);
                      v120 = v60;
                      if ( v148 )
                      {
                        if ( v57 )
                        {
                          Dpc = v59[1].Timer.Dpc;
                          *(_QWORD *)&v57->TargetInfoAsUlong = (char *)v59 + 1792;
                          v57->DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)Dpc;
                          if ( *(struct _KTHREAD **)&Dpc->TargetInfoAsUlong != (struct _KTHREAD *)&v59[1].Timer.TimerListEntry.Blink )
                            __fastfail(3u);
                          *(_QWORD *)&Dpc->TargetInfoAsUlong = v57;
                          v59[1].Timer.Dpc = v57;
                        }
                        KeReleaseSpinLock((PKSPIN_LOCK)&v59[1].WaitBlock[0].WaitListEntry.Blink, v58);
                        v60 = v120;
                        v59 = v130;
                      }
                      if ( v60 == 1 && KiAbEnabled && v59->AbWaitEntryCount )
                      {
                        v123 = KeGetCurrentIrql();
                        __writecr8(2uLL);
                        CurrentPrcb = KeGetCurrentPrcb();
                        if ( (unsigned int)KiAbThreadInsertList(
                                             (__int64)v59,
                                             &CurrentPrcb->AbPropagateBoostsList.Next,
                                             &v59->PropagateBoostsEntry.Next) )
                          KiAbQueueAutoBoostDpc((__int64)CurrentPrcb);
                        __writecr8(v123);
                      }
                      goto LABEL_103;
                    }
                  }
                  else
                  {
                    if ( CurrentThread->AbOrphanedEntrySummary )
                    {
                      AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
                      CurrentThread->AbOrphanedEntrySummary = 0;
                      CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
                      goto LABEL_86;
                    }
                    v119 = 0LL;
                    if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
                    {
                      EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, v47);
                      CurrentThread = v128;
                      v47 = (ULONG_PTR)Mutexa;
                    }
                  }
                  _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
                  goto LABEL_90;
                }
                v54 = 0LL;
                v119 = 0LL;
                goto LABEL_94;
              }
              LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v34 + 8);
              LockHandle.LockQueue.Next = 0LL;
              v79 = KeGetCurrentIrql();
              __writecr8(2uLL);
              LockHandle.OldIrql = v79;
              if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
              {
                KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v47);
              }
              else
              {
                v80 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v47, (__int64)&LockHandle);
                if ( !v80 )
                  goto LABEL_104;
                KxWaitForLockOwnerShip((__int64)&LockHandle, v80, v47);
              }
LABEL_103:
              v37 = v5 & 1;
LABEL_104:
              if ( (ULONG_PTR *)*v36 != v36 )
              {
                v61 = *v36;
                v62 = *(_QWORD *)(*(_QWORD *)*v36 + 8LL);
                if ( v62 != *v36 || **(_QWORD **)(v61 + 8) != v61 )
                  KeBugCheckEx(0x19u, 3uLL, v61, v62, **(_QWORD **)(v61 + 8));
                v63 = *(_QWORD *)v61;
                if ( *(ULONG_PTR **)(v61 + 8) != v36 || *(_QWORD *)(v63 + 8) != v61 )
                  __fastfail(3u);
                *v36 = v63;
                *(_QWORD *)(v63 + 8) = v36;
                v14 = v61 - 16;
                v64 = *(unsigned __int8 *)(v61 - 16 + 1);
                v118 = v61 - 16;
                if ( (_DWORD)v64 != BugCheckParameter3b )
                  KeBugCheckEx(0x19u, 0x23uLL, v64, BugCheckParameter3b, v61 - 16);
                if ( (unsigned __int8)*(_WORD *)(v14 + 2) == v12 )
                {
                  v65 = v124;
                }
                else
                {
                  if ( *(_BYTE *)v14 )
                  {
                    *(_BYTE *)(v14 + 2) -= v12;
                    v72 = v61 - 16;
                    v73 = *(_BYTE *)(v14 + 2);
                    v14 += 16LL * (unsigned __int8)*(_WORD *)(v14 + 2);
                    v118 = v14;
                    *(_BYTE *)v14 = v73;
                    v74 = (_BYTE *)(v14 + 16LL * v12);
                    if ( ((unsigned __int16)v74 & 0xFFF) != 0 )
                      *v74 = v12;
                  }
                  else
                  {
                    v88 = *(_BYTE *)(v14 + 2) - v12;
                    v72 = v14 + 16LL * v12;
                    *(_BYTE *)(v72 + 2) = v88;
                    v89 = (_BYTE *)(v72 + 16LL * (unsigned __int8)*(_WORD *)(v72 + 2));
                    *(_BYTE *)v72 = v12;
                    if ( ((unsigned __int16)v89 & 0xFFF) != 0 )
                      *v89 = v88;
                  }
                  *(_BYTE *)(v14 + 2) = v12;
                  v65 = v124;
                  *(_BYTE *)(v14 + 1) = BugCheckParameter3b;
                  *(_BYTE *)(v72 + 3) = 0;
                  v75 = *(_WORD *)(v72 + 2);
                  *(_DWORD *)(v72 + 4) = 1701147206;
                  *(_BYTE *)(v72 + 1) = BugCheckParameter3b;
                  if ( (_BYTE)v75 != 1 )
                  {
                    v76 = (__int64 *)(v72 + 16);
                    v77 = v124 + 16 * ((unsigned int)(unsigned __int8)v75 - 1 + 20LL);
                    v78 = *(__int64 ***)(v77 + 8);
                    *v76 = v77;
                    v76[1] = (__int64)v78;
                    if ( *v78 != (__int64 *)v77 )
                      __fastfail(3u);
                    *v78 = v76;
                    *(_QWORD *)(v77 + 8) = v76;
                  }
                }
                *(_BYTE *)(v14 + 3) = v5 & 0x6D | 2;
                if ( v5 < NonPagedPool )
                {
                  memset((void *)(v14 + 16), 0, 16LL * (unsigned __int8)*(_WORD *)(v14 + 2) - 16);
                  *(_DWORD *)(v14 + 4) = v10;
                }
                if ( (v5 & 1) != 0 )
                {
                  v66 = KeGetCurrentThread();
                  v67 = 0;
                  v68 = 0;
                  Mutexb = (PKGUARDED_MUTEX)v66;
                  v69 = 0LL;
                  v149 = 0;
                  BugCheckParameter3d = 0;
                  if ( PspAlwaysTrackIoBoosting )
                  {
                    v149 = 1;
                    v109 = (struct _LIST_ENTRY *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
                    v133 = v109;
                    if ( v109 )
                    {
                      memset(v109, 0, 0x70uLL);
                      RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)&v133[1].Flink, 0LL);
                      v133[6].Flink = (struct _LIST_ENTRY *)KeGetCurrentThread();
                      v133[6].Blink = 0LL;
                    }
                    v110 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Mutexb[32].Event.Header.WaitListHead);
                    v67 = 1;
                    v68 = v110;
                    v69 = v133;
                    BugCheckParameter3d = v110;
                    v66 = (struct _KTHREAD *)Mutexb;
                  }
                  if ( HIDWORD(v66[1].Timer.TimerListEntry.Flink) )
                  {
                    _InterlockedDecrement((volatile signed __int32 *)&v66[1].Timer.TimerListEntry.Flink + 1);
                    if ( !v67 )
                      goto LABEL_118;
                    if ( HIDWORD(v66[1].Timer.TimerListEntry.Flink) )
                    {
                      if ( v69 )
                      {
                        Flink = v66[1].WaitBlock[0].WaitListEntry.Flink;
                        v69->Flink = (struct _LIST_ENTRY *)&v66[1].Timer.Processor;
                        v69->Blink = Flink;
                        if ( (unsigned int *)Flink->Flink != &v66[1].Timer.Processor )
                          __fastfail(3u);
                        Flink->Flink = v69;
                        v66[1].WaitBlock[0].WaitListEntry.Flink = v69;
                      }
                    }
                    else
                    {
                      if ( v69 )
                      {
                        ExFreePoolWithTag(v69, 0x736F6F42u);
                        v66 = (struct _KTHREAD *)Mutexb;
                      }
                      p_Blink = &v66[1].Timer.TimerListEntry.Blink;
                      v140 = p_Blink;
                      while ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
                      {
                        v112 = *p_Blink;
                        v113 = (*p_Blink)->Flink;
                        if ( (struct _LIST_ENTRY **)(*p_Blink)->Blink != p_Blink || v113->Blink != v112 )
                          __fastfail(3u);
                        *p_Blink = v113;
                        v113->Blink = (struct _LIST_ENTRY *)p_Blink;
                        ExFreePoolWithTag(v112, 0x736F6F42u);
                        p_Blink = v140;
                      }
                      for ( j = &Mutexb[32].Contention; *(unsigned int **)j != j; j = &Mutexb[32].Contention )
                      {
                        v115 = *(__int64 **)j;
                        v116 = **(_QWORD **)j;
                        if ( *(unsigned int **)(*(_QWORD *)j + 8LL) != j || *(__int64 **)(v116 + 8) != v115 )
                          __fastfail(3u);
                        *(_QWORD *)j = v116;
                        *(_QWORD *)(v116 + 8) = j;
                        ExFreePoolWithTag(v115, 0x736F6F42u);
                      }
                      v66 = (struct _KTHREAD *)Mutexb;
                      v67 = v149;
                      v68 = BugCheckParameter3d;
                    }
                  }
                  if ( v67 )
                    KeReleaseSpinLock((PKSPIN_LOCK)&v66[1].WaitBlock[0].WaitListEntry.Blink, v68);
LABEL_118:
                  v70 = (volatile signed __int32 *)(v65 + 8);
                  v150 = *(_BYTE *)(v65 + 56);
                  *(_QWORD *)(v65 + 16) = 0LL;
                  v71 = _InterlockedCompareExchange((volatile signed __int32 *)(v65 + 8), 1, 0);
                  if ( v71 )
                  {
                    ExpReleaseFastMutexContended(v70, v71);
                    v70 = (volatile signed __int32 *)(v65 + 8);
                  }
                  __writecr8(v150);
                  KeAbPostRelease((ULONG_PTR)v70);
                }
                else
                {
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                }
                _InterlockedIncrement((volatile signed __int32 *)(v65 + 64));
                _InterlockedExchangeAdd64(
                  (volatile signed __int64 *)(v65 + 80),
                  16LL * (unsigned __int8)*(_WORD *)(v14 + 2));
LABEL_22:
                v16 = 16LL * (unsigned __int8)*(_WORD *)(v14 + 2);
                *(_DWORD *)(v14 + 4) = v10;
                v138 = v16;
                if ( v10 == PoolHitTag )
                  __debugbreak();
                if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
                  EtwTracePool(0xE20u, v5, v10, v14 + 16, v16);
                v17 = v5 & 0x20;
                if ( (v5 & 0x20) != 0 )
                {
                  v20 = ExpSessionPoolTrackTable;
                  v18 = ExpSessionPoolTrackTableMask;
                  v19 = ExpSessionPoolTrackTableSize;
                }
                else
                {
                  v18 = PoolTrackTableMask;
                  v19 = PoolTrackTableSize;
                  v20 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
                }
                Mutex = (PKGUARDED_MUTEX)v19;
                v125 = v18;
                v127 = v20;
                v21 = v18 & ((40543 * v10) ^ ((40543 * (unsigned __int64)v10) >> 32));
                v22 = v21;
                BugCheckParameter3a = v21;
                while ( 1 )
                {
                  v23 = 40LL * v21;
                  v24 = *(_DWORD *)(v20 + v23);
                  if ( v24 == v10 )
                  {
                    if ( (v5 & 1) != 0 )
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v20 + v23 + 24));
                      _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + v23 + 32), v138);
                    }
                    else
                    {
                      _InterlockedIncrement((volatile signed __int32 *)(v20 + v23 + 4));
                      _InterlockedExchangeAdd64((volatile signed __int64 *)(v20 + v23 + 16), v138);
                    }
                    goto LABEL_35;
                  }
                  if ( v24 )
                    goto LABEL_31;
                  if ( !v17 )
                  {
                    v90 = *(_DWORD *)(PoolTrackTable + 40LL * v21);
                    if ( v90 )
                    {
                      *(_DWORD *)(v20 + 40LL * v21) = v90;
                      v19 = (__int64)Mutex;
                      continue;
                    }
                    v19 = (__int64)Mutex;
                  }
                  if ( v21 == v19 - 1 )
                  {
LABEL_31:
                    v21 = v18 & (v21 + 1);
                    if ( v21 == v22 )
                    {
                      ExpInsertPoolTrackerExpansion(v10, v138, v5);
LABEL_35:
                      v25 = v118;
                      if ( (v5 & 4) != 0 )
                      {
                        *(_BYTE *)(v118 + 3) &= ~4u;
                        v84 = (ExpCacheLineSize - 1) & (-16 - v118);
                        if ( v84 )
                        {
                          v85 = v118 + v84;
                          v86 = (__int64)v84 >> 4;
                          *(_BYTE *)v85 = v86;
                          *(_BYTE *)(v85 + 2) = *(_BYTE *)(v118 + 2) - v86;
                          *(_BYTE *)(v85 + 1) = *(_BYTE *)(v118 + 1);
                          *(_BYTE *)(v85 + 3) = *(_BYTE *)(v118 + 3) | 4;
                          *(_DWORD *)(v85 + 4) = *(_DWORD *)(v118 + 4);
                          if ( (unsigned __int8)*(_WORD *)v85 > 1u )
                            *(_QWORD *)(v118 + 16) = ExpPoolQuotaCookie ^ v85;
                          v25 = v85;
                        }
                      }
                      result = (PVOID)(v25 + 16);
                      *(_QWORD *)(v25 + 16) = 0LL;
                      return result;
                    }
                  }
                  else if ( v17 )
                  {
                    _InterlockedCompareExchange((volatile signed __int32 *)(v20 + v23), v10, 0);
                  }
                  else
                  {
                    KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v145);
                    if ( !*(_DWORD *)(PoolTrackTable + 40LL * v21) )
                    {
                      *(_DWORD *)(PoolTrackTable + 40LL * v21) = v10;
                      *(_DWORD *)(v127 + 40LL * v21) = v10;
                    }
                    KeReleaseInStackQueuedSpinLock(&v145);
                    v20 = v127;
                    v17 = v5 & 0x20;
                    v18 = v125;
                    v22 = BugCheckParameter3a;
                    v19 = (__int64)Mutex;
                  }
                }
              }
              if ( v37 )
              {
                PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
                KeReleaseGuardedMutex(Mutexa);
              }
              else
              {
                KeReleaseInStackQueuedSpinLock(&LockHandle);
              }
              v34 = v124;
              v37 = v5 & 1;
LABEL_69:
              v36 += 2;
              v38 = v36 == (ULONG_PTR *)(v34 + 4416);
              v34 = v124;
            }
            while ( !v38 );
            PoolPages = MiAllocatePoolPages(v5 & 0x80000221, 0x1000uLL);
            v118 = PoolPages;
            v14 = PoolPages;
            if ( PoolPages )
            {
              if ( v5 < NonPagedPool )
              {
                memset((void *)(PoolPages + 16), 0, 16 * v12 - 16);
                *(_DWORD *)(v14 + 4) = v10;
              }
              v40 = BugCheckParameter3b;
              *(_DWORD *)v14 = 0;
              *(_BYTE *)(v14 + 1) = BugCheckParameter3b;
              *(_BYTE *)(v14 + 2) = v12;
              *(_BYTE *)(v14 + 3) = v5 & 0x6D | 2;
              BugCheckParameter3c = v14 + 16LL * v12;
              *(_DWORD *)BugCheckParameter3c = 0;
              *(_BYTE *)(BugCheckParameter3c + 2) = -(char)v12;
              *(_BYTE *)BugCheckParameter3c = v12;
              *(_BYTE *)(BugCheckParameter3c + 1) = v40;
              _InterlockedIncrement((volatile signed __int32 *)(v124 + 192));
              _InterlockedExchangeAdd64((volatile signed __int64 *)(v124 + 80), 16 * v12);
              if ( *(_BYTE *)(BugCheckParameter3c + 2) != 1 )
              {
                v41 = (struct _FAST_MUTEX *)(v124 + 8);
                if ( (v5 & 1) != 0 )
                {
                  ExAcquireFastMutex(v41);
                  PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
                }
                else
                {
                  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v41, &LockHandle);
                }
                v42 = BugCheckParameter3c + 16;
                v43 = v124 + 16 * (256 - v12 - 1 + 20LL);
                v44 = *(ULONG_PTR **)(v43 + 8);
                *(_QWORD *)(BugCheckParameter3c + 16) = v43;
                *(_QWORD *)(BugCheckParameter3c + 24) = v44;
                if ( *v44 != v43 )
                  __fastfail(3u);
                *v44 = v42;
                *(_QWORD *)(v43 + 8) = v42;
                if ( (v5 & 1) == 0 )
                {
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                  _InterlockedIncrement((volatile signed __int32 *)(v124 + 64));
                  goto LABEL_22;
                }
                PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
                v45 = (volatile signed __int32 *)(v124 + 8);
                v147 = *(_BYTE *)(v124 + 56);
                *(_QWORD *)(v124 + 16) = 0LL;
                v46 = _InterlockedCompareExchange((volatile signed __int32 *)(v124 + 8), 1, 0);
                if ( v46 )
                {
                  ExpReleaseFastMutexContended(v45, v46);
                  v45 = (volatile signed __int32 *)(v124 + 8);
                }
                __writecr8(v147);
                KeAbPostRelease((ULONG_PTR)v45);
              }
              _InterlockedIncrement((volatile signed __int32 *)(v124 + 64));
              goto LABEL_22;
            }
            if ( ++v141 != 1 || (ExpPoolFlags & 0x200) == 0 )
            {
              v4 = 4096LL;
LABEL_269:
              ++ExPoolFailures;
              if ( (v5 & 2) != 0 )
                KeBugCheckEx(
                  0x41u,
                  v4,
                  dword_140317D00[1104 * ((v5 & 0x200) == 0)],
                  dword_140317C88[1104 * ((v5 & 0x200) == 0)],
                  0LL);
              if ( (v5 & 0x10) != 0 )
                RtlRaiseStatus(-1073741670);
              return 0LL;
            }
            ExDeferredFreePool(v124, 0);
            v34 = v124;
          }
        }
LABEL_148:
        if ( (v5 & 0x100) == 0 )
        {
          BugCheckParameter3b = 1;
          v124 = ExpPagedPoolDescriptor[1];
          goto LABEL_66;
        }
        LODWORD(v32) = ExpNumberOfPagedPools;
        goto LABEL_63;
      }
    }
    else
    {
      if ( v12 <= 0x20 )
      {
        v27 = KeGetCurrentPrcb();
        v28 = 96LL * (v12 - 1);
        v29 = (v5 & 0x200) != 0 ? v28 + 2176 : v28 + 5248;
        BugCheckParameter3 = (_GENERAL_LOOKASIDE_POOL *)((char *)v27 + v29);
        ++*(_DWORD *)((char *)&v27->NextThread + v29 + 4);
        v13 = RtlpInterlockedPopEntrySList((PSLIST_HEADER)((char *)v27 + v29));
        if ( v13 )
          goto LABEL_20;
      }
      if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
      {
        v30 = KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0];
        BugCheckParameter3b = v30;
        if ( (unsigned int)v30 >= ExpNumberOfNonPagedPools )
        {
          v30 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
          BugCheckParameter3b = ExpNumberOfNonPagedPools - 1;
        }
        ParentNode = ExpNonPagedPoolDescriptor[v30];
        v124 = ParentNode;
        if ( (v5 & 0x200) == 0 )
        {
          ParentNode += 4416LL;
          v124 = ParentNode;
        }
        goto LABEL_66;
      }
    }
    BugCheckParameter3b = 0;
    goto LABEL_66;
  }
  v93 = v5;
  v151 = v5;
  if ( (v5 & 0x21) == 0x20 )
  {
    v93 = v5 & 0xFFFFFFDF;
    v151 = v5 & 0xFFFFFFDF;
  }
  SpecialPool = (void *)MmAllocateSpecialPool(v4, v10, v93, v92);
  v121 = SpecialPool;
  v95 = (unsigned __int64)SpecialPool;
  if ( !SpecialPool )
  {
    v6 = ExpPoolFlags;
    goto LABEL_10;
  }
  if ( (v5 & 0x40) != 0 )
    v4 -= 8LL;
  if ( v5 < NonPagedPool )
  {
    memset(SpecialPool, 0, v4);
    v95 = (unsigned __int64)v121;
  }
  if ( v10 == PoolHitTag )
    __debugbreak();
  v96 = DWORD1(PerfGlobalGroupMask);
  v97 = v151;
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v151, v10, v95, v4);
  v98 = v151 & 0x20;
  v152 = v98;
  if ( (v97 & 0x20) != 0 )
  {
    v101 = ExpSessionPoolTrackTable;
    v99 = ExpSessionPoolTrackTableMask;
    v100 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v96) = KeGetPcr()->Prcb.Number;
    v99 = PoolTrackTableMask;
    v100 = PoolTrackTableSize;
    v101 = (__int64)*(&ExPoolTagTables + v96);
  }
  Mutexc = (PKGUARDED_MUTEX)v100;
  v131 = v99;
  v139 = v101;
  v102 = v99 & ((40543 * v10) ^ ((40543 * (unsigned __int64)v10) >> 32));
  BugCheckParameter3e = v102;
  while ( 1 )
  {
    v103 = 40LL * v102;
    v104 = *(_DWORD *)(v101 + v103);
    v126 = v103;
    if ( v104 == v10 )
      break;
    if ( v104 )
    {
LABEL_216:
      v102 = v99 & (v102 + 1);
      if ( v102 == BugCheckParameter3e )
      {
        ExpInsertPoolTrackerExpansion(v10, v4, v97);
        goto LABEL_221;
      }
    }
    else
    {
      if ( v98 )
        goto LABEL_210;
      v105 = *(_DWORD *)(v103 + PoolTrackTable);
      if ( v105 )
      {
        *(_DWORD *)(v139 + 40LL * v102) = v105;
        v101 = v139;
      }
      else
      {
        v101 = v139;
LABEL_210:
        if ( v102 == v100 - 1 )
          goto LABEL_216;
        if ( v98 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v101 + v103), v10, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v144);
          if ( !*(_DWORD *)(v126 + PoolTrackTable) )
          {
            *(_DWORD *)(v126 + PoolTrackTable) = v10;
            *(_DWORD *)(v139 + 40LL * v102) = v10;
          }
          KeReleaseInStackQueuedSpinLock(&v144);
          v98 = v152;
          v99 = v131;
          v100 = (__int64)Mutexc;
          v101 = v139;
        }
      }
    }
  }
  if ( (v97 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v101 + v103 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v101 + v103 + 32), v4);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v101 + v103 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v101 + v103 + 16), v4);
  }
LABEL_221:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return v121;
}
