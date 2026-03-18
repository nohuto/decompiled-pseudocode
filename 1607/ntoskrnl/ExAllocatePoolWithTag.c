/*
 * XREFs of ExAllocatePoolWithTag @ 0x140254A50
 * Callers:
 *     SmAlloc @ 0x14000215C (SmAlloc.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003000 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x14000473C (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x1400049B4 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140004FE4 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x1400052E8 (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x140005558 (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     StEtaStart @ 0x1400056EC (StEtaStart.c)
 *     PfSnTraceBufferAllocate @ 0x140006B10 (PfSnTraceBufferAllocate.c)
 *     PfFbBufferListAllocateTemporary @ 0x1400070CC (PfFbBufferListAllocateTemporary.c)
 *     PnpRequestDeviceAction @ 0x14000794C (PnpRequestDeviceAction.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140007CA8 (IoReportTargetDeviceChangeAsynchronous.c)
 *     EmpEvaluateTargetRule @ 0x140008D9C (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140008F58 (EmpEvaluateNodeLink.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B4B0 (CmpGetSymbolicLinkTarget.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000ED90 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x14000F000 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepMemAlloc @ 0x14000F2A0 (AuthzBasepMemAlloc.c)
 *     SeSetLearningModeObjectInformation @ 0x14000FB70 (SeSetLearningModeObjectInformation.c)
 *     ExAllocatePoolWithQuotaTag @ 0x1400127B0 (ExAllocatePoolWithQuotaTag.c)
 *     MiBuildMappedCluster @ 0x14001F5C0 (MiBuildMappedCluster.c)
 *     MiFlushSectionInternal @ 0x140029DB0 (MiFlushSectionInternal.c)
 *     PsBoostThreadIoEx @ 0x14002D440 (PsBoostThreadIoEx.c)
 *     CmpConstructNameFromKeyNodes @ 0x14002D790 (CmpConstructNameFromKeyNodes.c)
 *     IopAllocateIrpPrivate @ 0x14002E250 (IopAllocateIrpPrivate.c)
 *     IoAllocateMdl @ 0x14002EF90 (IoAllocateMdl.c)
 *     PfSnGetFileInformation @ 0x140037630 (PfSnGetFileInformation.c)
 *     MiAgeWorkingSet @ 0x140047090 (MiAgeWorkingSet.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     SeAccessCheckByType @ 0x14005FEF0 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x140060F4C (SeCaptureObjectTypeList.c)
 *     SeLogAccessFailure @ 0x1400615D0 (SeLogAccessFailure.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x1400659A0 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 *     CcAllocateInitializeBcb @ 0x14006C9C4 (CcAllocateInitializeBcb.c)
 *     CcExtendVacbArray @ 0x14006CF18 (CcExtendVacbArray.c)
 *     CcAsyncCopyRead @ 0x14006DB6C (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x14006DD38 (CcPostWorkQueueAsyncRead.c)
 *     IoBoostThreadIoPriority @ 0x14006E244 (IoBoostThreadIoPriority.c)
 *     CcFindBitmapRangeToDirty @ 0x14006FD44 (CcFindBitmapRangeToDirty.c)
 *     CcAllocateInitializeMbcb @ 0x140070A4C (CcAllocateInitializeMbcb.c)
 *     CcWriteBehind @ 0x14007161C (CcWriteBehind.c)
 *     EtwpEventWriteFull @ 0x140073CE0 (EtwpEventWriteFull.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14007A960 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14007B070 (FsRtlInsertPerFileObjectContext.c)
 *     IopVerifierExAllocatePool @ 0x14007B610 (IopVerifierExAllocatePool.c)
 *     SepMandatorySubProcessToken @ 0x14007C05C (SepMandatorySubProcessToken.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E210 (ExAllocatePoolWithTagPriority.c)
 *     SepSetTokenLowboxHandles @ 0x14007F580 (SepSetTokenLowboxHandles.c)
 *     SepCreateTokenEx @ 0x14007FBC8 (SepCreateTokenEx.c)
 *     SepCaptureTokenSecurityOperations @ 0x14008064C (SepCaptureTokenSecurityOperations.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x1400807C0 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x140080970 (SepCaptureHandles.c)
 *     RtlpIsNameInExpressionPrivate @ 0x140081540 (RtlpIsNameInExpressionPrivate.c)
 *     KeAllocateXStateContext @ 0x1400830D0 (KeAllocateXStateContext.c)
 *     VfAvlReserveNode @ 0x1400842D8 (VfAvlReserveNode.c)
 *     KsepPoolAllocatePaged @ 0x140084D74 (KsepPoolAllocatePaged.c)
 *     EtwpAllocateFreeBuffers @ 0x14008565C (EtwpAllocateFreeBuffers.c)
 *     ExGetSessionPoolTagInfo @ 0x14008672C (ExGetSessionPoolTagInfo.c)
 *     MmCreateMdl @ 0x140086A14 (MmCreateMdl.c)
 *     MiAllocateAccessLog @ 0x140086DF0 (MiAllocateAccessLog.c)
 *     CmpAllocateTransientPoolWithTag @ 0x140087418 (CmpAllocateTransientPoolWithTag.c)
 *     MiGetLargePageToZero @ 0x14008A680 (MiGetLargePageToZero.c)
 *     FsRtlTruncateBaseMcb @ 0x14008C724 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x14008D2B0 (FsRtlAddEntry.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14008D544 (FsRtlInitializeBaseMcbEx.c)
 *     SePrivilegePolicyCheck @ 0x14008D8D0 (SePrivilegePolicyCheck.c)
 *     IoMakeAssociatedIrpPriv @ 0x14008E078 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateIrpExtension @ 0x14008E634 (IopAllocateIrpExtension.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     MiViewMayContainPage @ 0x14008F754 (MiViewMayContainPage.c)
 *     MiCreatePrototypePtes @ 0x14008FE84 (MiCreatePrototypePtes.c)
 *     MiDeletePartialVad @ 0x140095DC0 (MiDeletePartialVad.c)
 *     ExpExpandResourceOwnerTable @ 0x1400971CC (ExpExpandResourceOwnerTable.c)
 *     MmProbeAndLockSelectedPages @ 0x14009A5D4 (MmProbeAndLockSelectedPages.c)
 *     MiReferenceIoPages @ 0x14009C300 (MiReferenceIoPages.c)
 *     WmipBuildTraceDeviceList @ 0x14009D2C4 (WmipBuildTraceDeviceList.c)
 *     PnpRemoveLockedDeviceNode @ 0x14009E908 (PnpRemoveLockedDeviceNode.c)
 *     CreateNewEventEntry @ 0x14009F2F8 (CreateNewEventEntry.c)
 *     IoAllocateWorkItem @ 0x14009F77C (IoAllocateWorkItem.c)
 *     CcInitializeVolumeCacheMap @ 0x1400A0E00 (CcInitializeVolumeCacheMap.c)
 *     FsRtlCancelNotify @ 0x1400A20F4 (FsRtlCancelNotify.c)
 *     MiExpandSystemCache @ 0x1400A2B00 (MiExpandSystemCache.c)
 *     IopBuildAsynchronousFsdRequest @ 0x1400A4594 (IopBuildAsynchronousFsdRequest.c)
 *     MiExpandFlushMdl @ 0x1400A7630 (MiExpandFlushMdl.c)
 *     CmpAllocatePoolWithTag @ 0x1400A7788 (CmpAllocatePoolWithTag.c)
 *     RtlpCreateHashTable @ 0x1400A956C (RtlpCreateHashTable.c)
 *     RtlpAllocateSecondLevelDir @ 0x1400A9670 (RtlpAllocateSecondLevelDir.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400A97EC (MmWaitMultipleForCacheManagerPrefetch.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400ABF18 (IopVerifierExAllocatePool_0.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400AC754 (FsRtlpOplockSendModernAppTermination.c)
 *     IoSetCompletionRoutineEx @ 0x1400AD388 (IoSetCompletionRoutineEx.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AEAD8 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopFxQueryBiosDeviceName @ 0x1400AEE60 (PopFxQueryBiosDeviceName.c)
 *     WmipReceiveNotifications @ 0x1400AF3D4 (WmipReceiveNotifications.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400AF76C (RtlpAllowsLowBoxAccess.c)
 *     DbgUnicodeStringToAnsiString @ 0x1400B1090 (DbgUnicodeStringToAnsiString.c)
 *     PspInsertProperty @ 0x1400B121C (PspInsertProperty.c)
 *     FsRtlpWaitOnIrp @ 0x1400B42DC (FsRtlpWaitOnIrp.c)
 *     IoAllocateDriverObjectExtension @ 0x1400B4958 (IoAllocateDriverObjectExtension.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B4B50 (CmpLogTransactionAbortedWithChildName.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B4C7C (HvSynchronizeAndDropTemporaryBins.c)
 *     ExAllocatePool @ 0x1400B50F8 (ExAllocatePool.c)
 *     MiInitializeNumaRanges @ 0x1400B5C68 (MiInitializeNumaRanges.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400B7460 (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetWorkingSetInfoList @ 0x1400B79E0 (MiGetWorkingSetInfoList.c)
 *     MmOutSwapWorkingSet @ 0x1400B97A8 (MmOutSwapWorkingSet.c)
 *     NtLockVirtualMemory @ 0x1400BAEC8 (NtLockVirtualMemory.c)
 *     MiCloneVads @ 0x1400BC560 (MiCloneVads.c)
 *     IoAcquireRemoveLockEx @ 0x1400C1730 (IoAcquireRemoveLockEx.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C92BC (SmpKeyedStoreEntryGet.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400C9F18 (IopVerifierExAllocatePool_1.c)
 *     PpmParkSteerInterrupts @ 0x1400D7A40 (PpmParkSteerInterrupts.c)
 *     MiGetInPageSupportBlock @ 0x1400E7520 (MiGetInPageSupportBlock.c)
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E9780 (IopBuildDeviceIoControlRequest.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400FAFC0 (IopAttachDeviceToDeviceStackSafe.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400FB2FC (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopCaptureReasonContext @ 0x1400FC2D4 (PopCaptureReasonContext.c)
 *     MiCreateMdl @ 0x1400FCB40 (MiCreateMdl.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     MiAllocateModWriterEntry @ 0x140102A50 (MiAllocateModWriterEntry.c)
 *     MiObtainMdlCharges @ 0x140103DA8 (MiObtainMdlCharges.c)
 *     MiInitializeMdlPages @ 0x140106A8C (MiInitializeMdlPages.c)
 *     MiSwapStackPage @ 0x14010BCFC (MiSwapStackPage.c)
 *     MiCreateCloneChain @ 0x14010CD00 (MiCreateCloneChain.c)
 *     RtlExpandHashTable @ 0x14010EB80 (RtlExpandHashTable.c)
 *     MiGetWorkingSetInfo @ 0x14010F340 (MiGetWorkingSetInfo.c)
 *     ExAllocateCacheAwarePushLock @ 0x140111204 (ExAllocateCacheAwarePushLock.c)
 *     SepExpandSingletonArrays @ 0x140112028 (SepExpandSingletonArrays.c)
 *     SmBinaryArrayGrow @ 0x1401158C8 (SmBinaryArrayGrow.c)
 *     SmHpBufferAlloc @ 0x14011595C (SmHpBufferAlloc.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140116FE8 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiStoreWriteModifiedPages @ 0x140118960 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140119D48 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpAllocate @ 0x14011B81C (SmFpAllocate.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14011FF2C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140124664 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     MiPfIssueCoalescedSupport @ 0x140125220 (MiPfIssueCoalescedSupport.c)
 *     PopGetCurrentWakeInfos @ 0x140125824 (PopGetCurrentWakeInfos.c)
 *     SmArrayGrow @ 0x1401260EC (SmArrayGrow.c)
 *     BgpFwAllocateMemory @ 0x140129508 (BgpFwAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x140129AF0 (BgpFwQueryBootGraphicsInformation.c)
 *     KiIntSteerConnect @ 0x14012D37C (KiIntSteerConnect.c)
 *     KiIntRedirectConnnect @ 0x14012D8F0 (KiIntRedirectConnnect.c)
 *     SmKmAllocateMdlForLock @ 0x14012F10C (SmKmAllocateMdlForLock.c)
 *     IoWMIWriteEvent @ 0x14012F930 (IoWMIWriteEvent.c)
 *     MiSessionInsertImage @ 0x14012FB6C (MiSessionInsertImage.c)
 *     ExRegisterCallback @ 0x14012FD34 (ExRegisterCallback.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140130BA4 (LdrUnloadAlternateResourceModuleEx.c)
 *     IopAllocateErrorLogEntry @ 0x140130D94 (IopAllocateErrorLogEntry.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x140130E64 (MiAddPrivateFixupEntryForSystemImage.c)
 *     PoClearPowerRequestInternalDeferred @ 0x140131570 (PoClearPowerRequestInternalDeferred.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140132944 (RtlpUpcaseUnicodeStringPrivate.c)
 *     ExAllocateTimerInternal @ 0x140132AB8 (ExAllocateTimerInternal.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x1401338C8 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x140133AEC (ExpSaBinaryArrayInsert.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x1401343CC (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     ExAllocateAutoExpandPushLock @ 0x14013502C (ExAllocateAutoExpandPushLock.c)
 *     SepCommonAccessCheckEx @ 0x140135790 (SepCommonAccessCheckEx.c)
 *     CcAllocateInitializeVacbArray @ 0x140136480 (CcAllocateInitializeVacbArray.c)
 *     MiZeroNodePages @ 0x14013A830 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14013AB00 (MiCreateZeroThreadContext.c)
 *     MiInitializePageZeroing @ 0x14013AE70 (MiInitializePageZeroing.c)
 *     MiDescribePageRun @ 0x14013B2C0 (MiDescribePageRun.c)
 *     ExInitializeProcessor @ 0x14013C51C (ExInitializeProcessor.c)
 *     SepInitProcessAuditSd @ 0x14013C60C (SepInitProcessAuditSd.c)
 *     EmpQueueRuleUpdateState @ 0x14013CC5C (EmpQueueRuleUpdateState.c)
 *     BapdpProcessEtwEvents @ 0x14013CE64 (BapdpProcessEtwEvents.c)
 *     _MuiRegAllocArray @ 0x14013FF84 (_MuiRegAllocArray.c)
 *     _SafeAllocBlob @ 0x1401400C0 (_SafeAllocBlob.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x140140150 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140140324 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x14014059C (RtlpMuiRegLoadLicInformation.c)
 *     PopFxCreateDeviceCommon @ 0x1401421F0 (PopFxCreateDeviceCommon.c)
 *     PopFxDuplicateUniqueId @ 0x140142380 (PopFxDuplicateUniqueId.c)
 *     PpmParkRegisterParking @ 0x140143818 (PpmParkRegisterParking.c)
 *     AdtpBuildMultiSzStringListString @ 0x1401449A8 (AdtpBuildMultiSzStringListString.c)
 *     SepBuildCapPolicyTable @ 0x140144EF0 (SepBuildCapPolicyTable.c)
 *     PopGetDope @ 0x140145054 (PopGetDope.c)
 *     SepAdtLogAuditRecord @ 0x140145330 (SepAdtLogAuditRecord.c)
 *     SepAdtMarshallAuditRecord @ 0x1401454A8 (SepAdtMarshallAuditRecord.c)
 *     PpmInstallNewIdleStates @ 0x1401456F8 (PpmInstallNewIdleStates.c)
 *     CcInitializeAsyncRead @ 0x140146138 (CcInitializeAsyncRead.c)
 *     PfFbBufferListAllocate @ 0x1401465F4 (PfFbBufferListAllocate.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x140146FE0 (EmpEvaluateUpdateRuleEvalState.c)
 *     SmFpPreAllocate @ 0x1401488D8 (SmFpPreAllocate.c)
 *     FsFilterInit @ 0x140148B44 (FsFilterInit.c)
 *     ExpSaInitialize @ 0x140148E68 (ExpSaInitialize.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014921C (LdrpSetAlternateResourceModuleHandle.c)
 *     CreateTlgAggregateSession @ 0x1401497C0 (CreateTlgAggregateSession.c)
 *     IopGetPhysicalMemoryBlock @ 0x140149BA4 (IopGetPhysicalMemoryBlock.c)
 *     SepBuildDefaultCape @ 0x140149F08 (SepBuildDefaultCape.c)
 *     SepAdtDetermineInsertQueue @ 0x14014A5C0 (SepAdtDetermineInsertQueue.c)
 *     FsRtlRegisterFileSystemFilterCallbacks @ 0x14014A78C (FsRtlRegisterFileSystemFilterCallbacks.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14014AC3C (MiInitializeWorkingSetManagerParameters.c)
 *     IopInitDumpCapsuleSupport @ 0x14014B880 (IopInitDumpCapsuleSupport.c)
 *     KdRegisterPowerHandler @ 0x14014BC00 (KdRegisterPowerHandler.c)
 *     IoRegisterPriorityCallback @ 0x14014C010 (IoRegisterPriorityCallback.c)
 *     KiSwInterruptDispatch @ 0x14015734C (KiSwInterruptDispatch.c)
 *     CcRegisterExternalCache @ 0x1401B188C (CcRegisterExternalCache.c)
 *     CcDeferWrite @ 0x1401B1A08 (CcDeferWrite.c)
 *     CmpPromoteKey @ 0x1401B3424 (CmpPromoteKey.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1401B49BC (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401B4EE0 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmLogMcUpdateStatus @ 0x1401B53F8 (CmLogMcUpdateStatus.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5C7C (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x1401B7DC4 (DbgkpWerAllocateNonpagedPool.c)
 *     FsRtlAllocatePool @ 0x1401B91EC (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x1401B925C (FsRtlAllocatePoolWithTag.c)
 *     FsFilterAllocateCompletionStack @ 0x1401B9CCC (FsFilterAllocateCompletionStack.c)
 *     FsRtlInsertPerFileContext @ 0x1401BA044 (FsRtlInsertPerFileContext.c)
 *     FsRtlpPostStackOverflow @ 0x1401BA7A0 (FsRtlpPostStackOverflow.c)
 *     VslAllocatePool @ 0x1401C2648 (VslAllocatePool.c)
 *     VslpLockPagesForTransfer @ 0x1401C33D0 (VslpLockPagesForTransfer.c)
 *     BgkDisplayString @ 0x1401C3CAC (BgkDisplayString.c)
 *     IoRaiseHardError @ 0x1401C8CDC (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401C8F44 (IoRaiseInformationalHardError.c)
 *     IopGetSetStreamIdentifier @ 0x1401C948C (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401C9C40 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopQueryFullDriverPath @ 0x1401CA0E4 (IopQueryFullDriverPath.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401CAE28 (IopVerifierExAllocatePool_2.c)
 *     IopLiveDumpAllocNonPagedPool @ 0x1401CAEA8 (IopLiveDumpAllocNonPagedPool.c)
 *     IopVerifierExAllocatePool_3 @ 0x1401CB54C (IopVerifierExAllocatePool_3.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB578 (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_ReadRegistry @ 0x1401CBE50 (SecureDump_ReadRegistry.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBF4C (SecureDump_SymmetricEncryptionSetup.c)
 *     IopVerifierExAllocatePool_4 @ 0x1401CC250 (IopVerifierExAllocatePool_4.c)
 *     IoRequestDeviceEjectEx @ 0x1401CCEA4 (IoRequestDeviceEjectEx.c)
 *     PipCreateNewDependencyEdge @ 0x1401CD17C (PipCreateNewDependencyEdge.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1401CF144 (PiDevCfgPushCopyKeyEntry.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x1401CF284 (PiDevCfgPushDriverNodeEntry.c)
 *     PiDevCfgQueryResolveValue @ 0x1401CF2EC (PiDevCfgQueryResolveValue.c)
 *     KdSetDbgPrintBufferSize @ 0x1401D194C (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x1401D2934 (KeProcessorProfileControlArea.c)
 *     KeRegisterNmiCallback @ 0x1401D2AE8 (KeRegisterNmiCallback.c)
 *     KeStartProfile @ 0x1401D6D44 (KeStartProfile.c)
 *     KsepPoolAllocateNonPaged @ 0x1401DCECC (KsepPoolAllocateNonPaged.c)
 *     MiFlushControlArea @ 0x1401DEA98 (MiFlushControlArea.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E0B98 (MiReleaseOutSwappedProcessCommit.c)
 *     MiConvertRunsToPages @ 0x1401ED50C (MiConvertRunsToPages.c)
 *     MiAddRangeToPartitionTree @ 0x1401F0D8C (MiAddRangeToPartitionTree.c)
 *     MiAllocateCombineProto @ 0x1401F7B48 (MiAllocateCombineProto.c)
 *     MiCombineWorkingSet @ 0x1401F80D0 (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA8E4 (MiSharePages.c)
 *     MiInsertPteTracker @ 0x1401FC7EC (MiInsertPteTracker.c)
 *     MmEnumerateBadPages @ 0x1401FE948 (MmEnumerateBadPages.c)
 *     PpmQueryPlatformStateResidency @ 0x140200D10 (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleVeto @ 0x140201794 (PpmUpdateIdleVeto.c)
 *     PopFxRegisterPluginEx @ 0x1402034FC (PopFxRegisterPluginEx.c)
 *     PpmSetSimulatedLoad @ 0x14020523C (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x140205918 (PopUpdateWakeSource.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140209C54 (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmAllocWmiEvent @ 0x14020B290 (PpmAllocWmiEvent.c)
 *     PpmWmiIdleAccountingProcedure @ 0x14020B44C (PpmWmiIdleAccountingProcedure.c)
 *     PopSetWatchdog @ 0x14020B4CC (PopSetWatchdog.c)
 *     PpmEventTracePreVetoAccounting @ 0x14020CF2C (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14020D0E0 (PpmEventTraceProcessorIdleAccounting.c)
 *     PspReadDfssConfigurationValues @ 0x14020EBD0 (PspReadDfssConfigurationValues.c)
 *     DbgpInsertDebugPrintCallback @ 0x140211400 (DbgpInsertDebugPrintCallback.c)
 *     RtlpTraceDatabaseAllocate @ 0x140215EC8 (RtlpTraceDatabaseAllocate.c)
 *     NormalizationListEntry_Alloc @ 0x140219308 (NormalizationListEntry_Alloc.c)
 *     SepCopyObjectTypeList @ 0x140219B44 (SepCopyObjectTypeList.c)
 *     SepVerifyDesktopAppxImage @ 0x140219CAC (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219E60 (SepVerifyDesktopAppxPackageName.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x14021A130 (SepCheckAndCopySelfRelativeSD.c)
 *     SepSetSingletonEntry @ 0x14021AB48 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AC1C (SepValidateAndCopyGlobalEntry.c)
 *     SepFlattenAcl @ 0x14021AD14 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x14021AE84 (SepGetLearningModeObjectInformation.c)
 *     SepGetSidValuesDump @ 0x14021B234 (SepGetSidValuesDump.c)
 *     SepGetTokenSessionMapEntry @ 0x14021B2F8 (SepGetTokenSessionMapEntry.c)
 *     SeRmReferenceFindCapName @ 0x14021B430 (SeRmReferenceFindCapName.c)
 *     SepRmCapPoolExpand @ 0x14021B580 (SepRmCapPoolExpand.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14021C9FC (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CBE4 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CC9C (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14021D290 (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14021DA24 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140221C48 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140221D44 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalPageError @ 0x140222168 (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x140222A30 (VfAllocateDomainCommonBuffer.c)
 *     MdlInvariantInsertMdlInfo @ 0x140222E44 (MdlInvariantInsertMdlInfo.c)
 *     WdipAccessCheck @ 0x1402246E0 (WdipAccessCheck.c)
 *     WmiVerifierCopyEvent @ 0x14022490C (WmiVerifierCopyEvent.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140226D3C (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140227F14 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwTiLogQueueApcThread @ 0x140228910 (EtwTiLogQueueApcThread.c)
 *     EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x140228BEC (EtwpTiAllocVadQueryEventWriteWorkItemContext.c)
 *     EtwpApplyEventNameFilter @ 0x1402299E4 (EtwpApplyEventNameFilter.c)
 *     EtwpDequeueBufferPendingCompression @ 0x14022A6E4 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpInitializeCompression @ 0x14022AC24 (EtwpInitializeCompression.c)
 *     NtDrawText @ 0x14022C734 (NtDrawText.c)
 *     ExRegisterBootDevice @ 0x14022D1C4 (ExRegisterBootDevice.c)
 *     ExCopyWakeTimerInfo @ 0x14022E118 (ExCopyWakeTimerInfo.c)
 *     ExpHotAddProcessorToWorkers @ 0x14022E9FC (ExpHotAddProcessorToWorkers.c)
 *     ExShareAddressSpaceWithDevice @ 0x14022EB68 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14022EFA0 (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14022F1BC (ExpPrepareNewSvmDevice.c)
 *     WheapReportPersistedErrorRecord @ 0x140230074 (WheapReportPersistedErrorRecord.c)
 *     WheapAllocErrorRecord @ 0x140230508 (WheapAllocErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x1402309A4 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140231AD4 (WheapSqmCollectWheaOscTelemetry.c)
 *     sub_140232914 @ 0x140232914 (sub_140232914.c)
 *     sub_140232ED8 @ 0x140232ED8 (sub_140232ED8.c)
 *     sub_140233434 @ 0x140233434 (sub_140233434.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140237DBC (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x140238284 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140238CF4 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     _SafeReallocBlob @ 0x14023EAC4 (_SafeReallocBlob.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PopCloneRange @ 0x1403CB7FC (PopCloneRange.c)
 *     PfpStartLoggingHardFaultEvents @ 0x1403D03E4 (PfpStartLoggingHardFaultEvents.c)
 *     PopNewWakeInfo @ 0x1403D0BE4 (PopNewWakeInfo.c)
 *     IopCaptureObjectName @ 0x1403D1DCC (IopCaptureObjectName.c)
 *     PopGetBitlockerKeyLocation @ 0x1403D2030 (PopGetBitlockerKeyLocation.c)
 *     PopGetHwConfigurationSignature @ 0x1403D21C4 (PopGetHwConfigurationSignature.c)
 *     PfSnAllocateEnablePrefetcherTimer @ 0x1403D3108 (PfSnAllocateEnablePrefetcherTimer.c)
 *     BapdRecordFirmwareBootStats @ 0x1403D316C (BapdRecordFirmwareBootStats.c)
 *     KiInitializeProcessor @ 0x1403D34A8 (KiInitializeProcessor.c)
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1403DEA58 (MiZeroAllPageFiles.c)
 *     PopDiagTraceFirmwareS3Stats @ 0x1403DF66C (PopDiagTraceFirmwareS3Stats.c)
 *     ExGetNextWakeTime @ 0x1403DFDD0 (ExGetNextWakeTime.c)
 *     ExpSystemErrorHandler2 @ 0x1403E0080 (ExpSystemErrorHandler2.c)
 *     WheaInitializeProcessor @ 0x1403E0728 (WheaInitializeProcessor.c)
 *     CmRealKCBToVirtualPath @ 0x1403E1950 (CmRealKCBToVirtualPath.c)
 *     CmpGetVirtualizationID @ 0x1403E1B4C (CmpGetVirtualizationID.c)
 *     NtSetCachedSigningLevel2 @ 0x1403E21EC (NtSetCachedSigningLevel2.c)
 *     ExpHwidNetworkIfDeviceInfoProvider @ 0x1403E247C (ExpHwidNetworkIfDeviceInfoProvider.c)
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 *     PfpRpCHashDeleteEntries @ 0x1403E4C14 (PfpRpCHashDeleteEntries.c)
 *     PfSnPrefetchScenario @ 0x1403E5094 (PfSnPrefetchScenario.c)
 *     PfSnScenarioAlloc @ 0x1403E5230 (PfSnScenarioAlloc.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E524C (PfSnGetPrefetchInstructions.c)
 *     PfTCreateTraceDump @ 0x1403E5A40 (PfTCreateTraceDump.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1403E6A2C (PsGetAllocatedFullProcessImageName.c)
 *     PfSnBuildDumpFromTrace @ 0x1403E92C4 (PfSnBuildDumpFromTrace.c)
 *     PfSnBeginTrace @ 0x1403E9698 (PfSnBeginTrace.c)
 *     NtSetSystemInformation @ 0x1403E9F6C (NtSetSystemInformation.c)
 *     PfSetSuperfetchInformation @ 0x1403EA8E8 (PfSetSuperfetchInformation.c)
 *     PfpRpControlRequestCopy @ 0x1403EC014 (PfpRpControlRequestCopy.c)
 *     PfpPrefetchRequest @ 0x1403ECD98 (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1403ECF84 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x1403ED8D0 (PfpVolumeOpenAndVerify.c)
 *     PiUEventProcessBroadcastNotifications @ 0x1403EF550 (PiUEventProcessBroadcastNotifications.c)
 *     PiUEventNotifyUserMode @ 0x1403EFE78 (PiUEventNotifyUserMode.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1403F0500 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x1403F0784 (PiUEventNotifyClient.c)
 *     PnpInsertEventInQueue @ 0x1403F0BD4 (PnpInsertEventInQueue.c)
 *     PnpCreateDeviceEventEntry @ 0x1403F0D68 (PnpCreateDeviceEventEntry.c)
 *     PiSwPdoPnPDispatch @ 0x1403F1680 (PiSwPdoPnPDispatch.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1403F1AE4 (PnpDeviceCompletionRequestCreate.c)
 *     PnpProcessAssignResources @ 0x1403F2054 (PnpProcessAssignResources.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1403F2484 (IopBuildGlobalSymbolicLinkString.c)
 *     IopAllocateUnicodeString @ 0x1403F2594 (IopAllocateUnicodeString.c)
 *     IopProcessSetInterfaceState @ 0x1403F26A4 (IopProcessSetInterfaceState.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F2E38 (PoRegisterPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1403F3C04 (PopLogDisabledSleepReason.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F489C (PiControlGetSetDeviceStatus.c)
 *     PipCallDriverAddDevice @ 0x1403F4CEC (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1403F554C (PnpCallDriverQueryServiceHelper.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403F6164 (CmpQueryFileSecurityDescriptor.c)
 *     ExpWnfLookupPermanentName @ 0x1403F620C (ExpWnfLookupPermanentName.c)
 *     PopUmpoProcessPowerMessage @ 0x1403F7C58 (PopUmpoProcessPowerMessage.c)
 *     ExpAllocateStringRoutine @ 0x1403F80BC (ExpAllocateStringRoutine.c)
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 *     CmpDoFileWrite @ 0x1403F9028 (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 *     CmpInitHiveFromFile @ 0x1403F9AEC (CmpInitHiveFromFile.c)
 *     CmpAddSecurityCellToCache @ 0x1403FB3A8 (CmpAddSecurityCellToCache.c)
 *     CmpLockIXLockIntent @ 0x1403FCCF4 (CmpLockIXLockIntent.c)
 *     IopGetLegacyVetoListDrivers @ 0x140405564 (IopGetLegacyVetoListDrivers.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140406AA0 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x140406CE0 (ObpGetObjectSecurity.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x1404070A0 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x140407F0C (EtwpGetGuidSecurityDescriptor.c)
 *     EtwpSetProviderTraitsUm @ 0x14040965C (EtwpSetProviderTraitsUm.c)
 *     AlpcAddHandleTableEntry @ 0x14040BE50 (AlpcAddHandleTableEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14040C87C (EtwpAddRegEntryToGroup.c)
 *     AlpcpAllocateBlob @ 0x14040D624 (AlpcpAllocateBlob.c)
 *     SepCaptureUnicodeStringArray @ 0x140411D10 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x140411F10 (SeCaptureUnicodeStringStructures.c)
 *     SepDuplicateToken @ 0x140412BD0 (SepDuplicateToken.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 *     ObpCaptureObjectName @ 0x1404199F0 (ObpCaptureObjectName.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14041B220 (PfpCopyUserPfnPrioRequest.c)
 *     ObpAllocateObject @ 0x14041BB10 (ObpAllocateObject.c)
 *     RtlpNewSecurityObject @ 0x14041BF40 (RtlpNewSecurityObject.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14041DB70 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     RtlpCombineAcls @ 0x14041E240 (RtlpCombineAcls.c)
 *     ObLogSecurityDescriptor @ 0x14041FCF0 (ObLogSecurityDescriptor.c)
 *     SepCreateImpersonationTokenDacl @ 0x140420C60 (SepCreateImpersonationTokenDacl.c)
 *     SeCaptureSecurityDescriptor @ 0x140420EC0 (SeCaptureSecurityDescriptor.c)
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     MiMapViewOfImageSection @ 0x140429AC0 (MiMapViewOfImageSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x14042A620 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAddSecureEntry @ 0x14042AB30 (MiAddSecureEntry.c)
 *     EtwpEnumerateAddressSpace @ 0x14042AE3C (EtwpEnumerateAddressSpace.c)
 *     MmPrefetchPagesEx @ 0x14042C0DC (MmPrefetchPagesEx.c)
 *     MiInsertSharedCommitNode @ 0x14042E680 (MiInsertSharedCommitNode.c)
 *     MiCopyToCfgBitMap @ 0x14042F1E0 (MiCopyToCfgBitMap.c)
 *     MiPfPrepareSequentialReadList @ 0x1404302F0 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateVirtualMemory @ 0x140430E80 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x1404354C0 (MiMapViewOfDataSection.c)
 *     SeQueryInformationToken @ 0x140439FF0 (SeQueryInformationToken.c)
 *     CmpCheckRegistry2 @ 0x14043EF70 (CmpCheckRegistry2.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     CmpGetValueData @ 0x140442F60 (CmpGetValueData.c)
 *     MiPfPrepareReadList @ 0x140445CF0 (MiPfPrepareReadList.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14044C5B0 (AlpcpCaptureMessageDataSafe.c)
 *     ObWaitForMultipleObjects @ 0x14044EDD0 (ObWaitForMultipleObjects.c)
 *     ObpLookupObjectName @ 0x14044F450 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1404513E0 (ExpGetProcessInformation.c)
 *     CmpCallCallBacks @ 0x140452A00 (CmpCallCallBacks.c)
 *     IopCreateFile @ 0x14045B980 (IopCreateFile.c)
 *     EtwpQueryProcessCommandLine @ 0x14045DC34 (EtwpQueryProcessCommandLine.c)
 *     ObCheckRefTraceProcess @ 0x14045F818 (ObCheckRefTraceProcess.c)
 *     SeCaptureLuidAndAttributesArray @ 0x140460358 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x140460450 (SepAdtTokenRightAdjusted.c)
 *     ExpWnfCreateNameInstance @ 0x140462594 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x1404629B8 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfWriteStateData @ 0x140463388 (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404636E4 (ExpWnfSubscribeNameInstance.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     PspQueryRateControlHistory @ 0x14046917C (PspQueryRateControlHistory.c)
 *     FsRtlpAllocateOplock @ 0x14046A718 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x14046A818 (FsRtlpOplockFsctrlInternal.c)
 *     MiResolveImageReferences @ 0x14046C67C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14046CB34 (MiSnapThunk.c)
 *     MiAllocateVad @ 0x14046D108 (MiAllocateVad.c)
 *     SepAddLuidToIndexEntry @ 0x14046E2DC (SepAddLuidToIndexEntry.c)
 *     PspAllocateProcess @ 0x14046F030 (PspAllocateProcess.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140471860 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x14047391C (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1404739FC (IopCreateSecurityDescriptorPerType.c)
 *     NtCreateSymbolicLinkObject @ 0x140473B2C (NtCreateSymbolicLinkObject.c)
 *     WmipAddProviderIdToPIList @ 0x1404748C0 (WmipAddProviderIdToPIList.c)
 *     SepQueryNameString @ 0x1404754CC (SepQueryNameString.c)
 *     SepGetLowBoxHandlesEntry @ 0x140475930 (SepGetLowBoxHandlesEntry.c)
 *     ObpParseSymbolicLinkEx @ 0x140476170 (ObpParseSymbolicLinkEx.c)
 *     SepSetTokenPackage @ 0x1404769B4 (SepSetTokenPackage.c)
 *     SepGetLowBoxNumberEntry @ 0x140476BFC (SepGetLowBoxNumberEntry.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140478794 (ObpCaptureBoundaryDescriptor.c)
 *     SepSetTokenCapabilities @ 0x140478A4C (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x140478B94 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140478C40 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x1404791AC (SeCaptureSid.c)
 *     SepCreateClaimAttributes @ 0x140479608 (SepCreateClaimAttributes.c)
 *     SeCaptureAcl @ 0x14047ABEC (SeCaptureAcl.c)
 *     SepExpandDynamic @ 0x14047AF14 (SepExpandDynamic.c)
 *     SepFilterToken @ 0x14047AFF4 (SepFilterToken.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14047C310 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14047C454 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x14047C8BC (SepCaptureInt64Array.c)
 *     CmpCanGrowHive @ 0x14047DDDC (CmpCanGrowHive.c)
 *     HvpMapHiveImageFromFile @ 0x14047F0D4 (HvpMapHiveImageFromFile.c)
 *     CmpInitializeHive @ 0x14047F184 (CmpInitializeHive.c)
 *     CmCheckRegistry @ 0x140480374 (CmCheckRegistry.c)
 *     MiAllocateFixupVad @ 0x1404808A4 (MiAllocateFixupVad.c)
 *     HvStoreModifiedData @ 0x140480EEC (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x1404812F0 (HvpGenerateLogEntry.c)
 *     HvpFindNextDirtyBlock @ 0x1404815C8 (HvpFindNextDirtyBlock.c)
 *     MiConstructLoaderEntry @ 0x140482408 (MiConstructLoaderEntry.c)
 *     HvWriteHivePrimaryFile @ 0x140483AA4 (HvWriteHivePrimaryFile.c)
 *     MiObtainSectionForDriver @ 0x140483D4C (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x140483EFC (MiGenerateSystemImageNames.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140484068 (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     MiDriverLoadSucceeded @ 0x140484174 (MiDriverLoadSucceeded.c)
 *     AslAlloc @ 0x14048554C (AslAlloc.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1404867A4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     PnpConcatPWSTR @ 0x140487108 (PnpConcatPWSTR.c)
 *     IopRegisterDeviceInterface @ 0x14048756C (IopRegisterDeviceInterface.c)
 *     PnpCheckDeviceIdsChanged @ 0x140489604 (PnpCheckDeviceIdsChanged.c)
 *     ConstraintEval @ 0x14048A548 (ConstraintEval.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x14048A7F4 (PspAllocateAndQueryNotificationChannel.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048B654 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqActionDataCreate @ 0x14048BD40 (PiDqActionDataCreate.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14048C370 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqQueryCreate @ 0x14048C5FC (PiDqQueryCreate.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14048C8D4 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqTraceQueryCreate @ 0x14048CA30 (PiDqTraceQueryCreate.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048CE88 (PiUEventInitClientRegistrationContext.c)
 *     EtwpAllocGuidEntry @ 0x14048D770 (EtwpAllocGuidEntry.c)
 *     EtwpEnableTrace @ 0x14048D828 (EtwpEnableTrace.c)
 *     EtwpCaptureString @ 0x14048D980 (EtwpCaptureString.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x14049030C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x140490628 (EtwpRealtimeCreateLogfile.c)
 *     EtwpQueueNotification @ 0x140490BB0 (EtwpQueueNotification.c)
 *     EtwpAddDataSource @ 0x140490E70 (EtwpAddDataSource.c)
 *     EtwpUpdateFilterData @ 0x140491C98 (EtwpUpdateFilterData.c)
 *     EtwpAllocDataBlock @ 0x140491EC8 (EtwpAllocDataBlock.c)
 *     EtwpRegisterProvider @ 0x140492024 (EtwpRegisterProvider.c)
 *     EtwpAddKmRegEntry @ 0x140492360 (EtwpAddKmRegEntry.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140492464 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x140492C74 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x1404931B0 (EtwpInitLoggerContext.c)
 *     EtwpUpdateFileHeader @ 0x1404947D4 (EtwpUpdateFileHeader.c)
 *     EtwpCreateNtFileName @ 0x140494CBC (EtwpCreateNtFileName.c)
 *     EtwpQueueReply @ 0x140494EB8 (EtwpQueueReply.c)
 *     ExUpdateLicenseDataInternal @ 0x140496474 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x140497230 (ExpSetKernelDataProtection.c)
 *     EtwpProcessThreadImageRundown @ 0x1404987E4 (EtwpProcessThreadImageRundown.c)
 *     MiGetCcAccessLog @ 0x1404999A0 (MiGetCcAccessLog.c)
 *     CmpRecordUnloadEventForHive @ 0x14049B43C (CmpRecordUnloadEventForHive.c)
 *     CmpQueryNameString @ 0x14049B4E4 (CmpQueryNameString.c)
 *     CmLoadKey @ 0x14049C9B4 (CmLoadKey.c)
 *     PiUpdateDriverDBCache @ 0x14049D278 (PiUpdateDriverDBCache.c)
 *     IopBuildFullDriverPath @ 0x14049DA9C (IopBuildFullDriverPath.c)
 *     IopGetRootDevices @ 0x14049DC40 (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x14049DE94 (IopInitializeDeviceInstanceKey.c)
 *     IopLoadDriver @ 0x14049E388 (IopLoadDriver.c)
 *     CmpInitCmRM @ 0x14049EB58 (CmpInitCmRM.c)
 *     IopGetDriverNameFromKeyNode @ 0x14049F27C (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14049F430 (IopGetRegistryValue.c)
 *     CmpLinkHiveToMaster @ 0x1404A10B4 (CmpLinkHiveToMaster.c)
 *     CmAddLogForAction @ 0x1404A1450 (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x1404A1B88 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x1404A1CA4 (CmpDoTransWriteLogRecord.c)
 *     CmpInitializeKcbCache @ 0x1404A1DEC (CmpInitializeKcbCache.c)
 *     NtQueryLicenseValue @ 0x1404A3E00 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x1404A40C0 (ExQueryLicenseValueInternal.c)
 *     RtlpAllocateAtom @ 0x1404A4B10 (RtlpAllocateAtom.c)
 *     RtlpSetSecurityObject @ 0x1404A56A0 (RtlpSetSecurityObject.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     AlpcpCaptureMessageData @ 0x1404B5DD8 (AlpcpCaptureMessageData.c)
 *     AlpcpAllocateMessageFunction @ 0x1404B62CC (AlpcpAllocateMessageFunction.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404B646C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404B66DC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404B6D30 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x1404B7D38 (SepProbeAndCaptureString_U.c)
 *     MiCreatePagingFileMap @ 0x1404B8370 (MiCreatePagingFileMap.c)
 *     MiAllocateNewTebRegion @ 0x1404BA720 (MiAllocateNewTebRegion.c)
 *     MiCreateVadEventBitmap @ 0x1404BA9CC (MiCreateVadEventBitmap.c)
 *     ObpInsertHandleCount @ 0x1404BB094 (ObpInsertHandleCount.c)
 *     WmipGetRegistryHideMachine @ 0x1404BE8C4 (WmipGetRegistryHideMachine.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404BEA58 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404BEE44 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyInitializeSync @ 0x1404BF234 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404BF290 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404BFD2C (FsRtlNotifyFilterReportChangeLite.c)
 *     SeAppendPrivileges @ 0x1404C0F9C (SeAppendPrivileges.c)
 *     ExpAllocateHandleTable @ 0x1404C1378 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404C1600 (ExpAllocateTablePagedPoolNoZero.c)
 *     RawInitializeVcb @ 0x1404C167C (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1404C17A0 (ExAllocateCacheAwareRundownProtection.c)
 *     PnpDisableDeviceInterfaces @ 0x1404C3314 (PnpDisableDeviceInterfaces.c)
 *     PnpProcessQueryRemoveAndEject @ 0x1404C41D8 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1404C5190 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpAllocateCriticalMemory @ 0x1404C5AB8 (PnpAllocateCriticalMemory.c)
 *     PiSwInterfaceCreate @ 0x1404C6888 (PiSwInterfaceCreate.c)
 *     PiSwIrpStartCreateWorker @ 0x1404C6CB4 (PiSwIrpStartCreateWorker.c)
 *     PnpCopyDevPropertyArray @ 0x1404C70A4 (PnpCopyDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x1404C7168 (PnpCopyDevProperty.c)
 *     PiSwPnPInfoInit @ 0x1404C7204 (PiSwPnPInfoInit.c)
 *     PnpAllocateMultiSZ @ 0x1404C72CC (PnpAllocateMultiSZ.c)
 *     PiSwDeviceCreate @ 0x1404C7410 (PiSwDeviceCreate.c)
 *     WmipSDRegistryQueryRoutine @ 0x1404C779C (WmipSDRegistryQueryRoutine.c)
 *     PiDeviceRegistration @ 0x1404C7D00 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x1404C7E9C (PpForEachDeviceInstanceDriver.c)
 *     IopQueryDeviceResources @ 0x1404C89E8 (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x1404C8D70 (PnpGetDeviceResourcesFromRegistry.c)
 *     NtFlushBuffersFileEx @ 0x1404C9430 (NtFlushBuffersFileEx.c)
 *     ExGetPoolTagInfo @ 0x1404C9814 (ExGetPoolTagInfo.c)
 *     PfSnArrayGrow @ 0x1404CA040 (PfSnArrayGrow.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1404CA138 (AlpcpCaptureHandleAttributeInternal.c)
 *     ObpInsertDirectoryEntry @ 0x1404CC0A8 (ObpInsertDirectoryEntry.c)
 *     CcCreateVacbArray @ 0x1404CC148 (CcCreateVacbArray.c)
 *     MiReserveDriverPtes @ 0x1404CD0DC (MiReserveDriverPtes.c)
 *     PnpGetDeviceLocationStrings @ 0x1404CD7D0 (PnpGetDeviceLocationStrings.c)
 *     ExHandleSPCall2 @ 0x1404CE374 (ExHandleSPCall2.c)
 *     NtMapCMFModule @ 0x1404D014C (NtMapCMFModule.c)
 *     MUIInitializeResourceLock @ 0x1404D085C (MUIInitializeResourceLock.c)
 *     SepDuplicateSid @ 0x1404D0994 (SepDuplicateSid.c)
 *     EtwpAddProviderToSession @ 0x1404D0F50 (EtwpAddProviderToSession.c)
 *     EtwpFindDebugId @ 0x1404D108C (EtwpFindDebugId.c)
 *     PspAllocateRateControl @ 0x1404D1D58 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404D1E00 (PspAddSchedulingGroupToJobChain.c)
 *     PspInitializeFullProcessImageName @ 0x1404D2094 (PspInitializeFullProcessImageName.c)
 *     PfSnPreallocatePrefetchHeader @ 0x1404D34F4 (PfSnPreallocatePrefetchHeader.c)
 *     NtRemoveIoCompletionEx @ 0x1404D3D44 (NtRemoveIoCompletionEx.c)
 *     PiQueryRemovableDeviceOverride @ 0x1404D4418 (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x1404D46C4 (PipFindDeviceOverrideEntry.c)
 *     PiNormalizeDeviceText @ 0x1404D48B4 (PiNormalizeDeviceText.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404D5918 (DrvDbGetDeviceIdDriverInfMatches.c)
 *     CmpMarkIndexDirty @ 0x1404D6634 (CmpMarkIndexDirty.c)
 *     SddlpAlloc @ 0x1404D7574 (SddlpAlloc.c)
 *     PspAssignProcessQuotaBlock @ 0x1404D7894 (PspAssignProcessQuotaBlock.c)
 *     ExpWnfCreateProcessContext @ 0x1404D8030 (ExpWnfCreateProcessContext.c)
 *     CmpLogCheckpoint @ 0x1404DA2D4 (CmpLogCheckpoint.c)
 *     CmpStartRMLog @ 0x1404DAAE0 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x1404DAE78 (CmpStartCLFSLog.c)
 *     PiCMGetDeviceIdList @ 0x1404DD06C (PiCMGetDeviceIdList.c)
 *     AlpcpInitializeCompletionList @ 0x1404DDB10 (AlpcpInitializeCompletionList.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x1404DE3D0 (PiDqObjectActionQueueEntryCreate.c)
 *     CmpAllocateUnitOfWork @ 0x1404DE450 (CmpAllocateUnitOfWork.c)
 *     SepAssemblePrivileges @ 0x1404DE5E8 (SepAssemblePrivileges.c)
 *     NtSystemDebugControl @ 0x1404DE844 (NtSystemDebugControl.c)
 *     _RegRtlEnumValue @ 0x1404DF0EC (_RegRtlEnumValue.c)
 *     EtwStartAutoLogger @ 0x1404E0034 (EtwStartAutoLogger.c)
 *     PiDmCacheDataEncode @ 0x1404E0974 (PiDmCacheDataEncode.c)
 *     PiDqSerializationAlloc @ 0x1404E0AAC (PiDqSerializationAlloc.c)
 *     SPCallServerHandleClepKdf @ 0x1404E185C (SPCallServerHandleClepKdf.c)
 *     WmipSecurityMethod @ 0x1404E1DBC (WmipSecurityMethod.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404E23B8 (PipGetRegistrySecurityWithFallback.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404E2820 (PiPnpRtlGetFilteredDeviceList.c)
 *     MiCreateFixupRecord @ 0x1404E3298 (MiCreateFixupRecord.c)
 *     AlpcpAllocateBuffer @ 0x1404E3594 (AlpcpAllocateBuffer.c)
 *     SepInformLsaOfDeletedLogon @ 0x1404E52A4 (SepInformLsaOfDeletedLogon.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1404E5A08 (MmGetPhysicalMemoryRangesEx.c)
 *     SepUpdateLogonSessionTrack @ 0x1404E61E4 (SepUpdateLogonSessionTrack.c)
 *     SepCreateLogonSessionTrack @ 0x1404E69EC (SepCreateLogonSessionTrack.c)
 *     IopPnPDispatch @ 0x1404E7998 (IopPnPDispatch.c)
 *     PnpBusTypeGuidGetIndex @ 0x1404E8F9C (PnpBusTypeGuidGetIndex.c)
 *     PipAllocateDeviceNode @ 0x1404E9548 (PipAllocateDeviceNode.c)
 *     PiBuildDeviceNodeInstancePath @ 0x1404E9B2C (PiBuildDeviceNodeInstancePath.c)
 *     ObpSetDeviceMap @ 0x1404E9E58 (ObpSetDeviceMap.c)
 *     CmpCheckSecurityCellAccess @ 0x1404EA7B4 (CmpCheckSecurityCellAccess.c)
 *     CmSnapshotRMTxArray @ 0x1404EB0B4 (CmSnapshotRMTxArray.c)
 *     CmpAdjustSecurityCacheSize @ 0x1404EB17C (CmpAdjustSecurityCacheSize.c)
 *     PipGenerateContainerID @ 0x1404EB3C4 (PipGenerateContainerID.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404EB59C (PiUEventQueueBroadcastEventEntry.c)
 *     MiAllocateImportList @ 0x1404EB848 (MiAllocateImportList.c)
 *     MiCompressImportList @ 0x1404EBD24 (MiCompressImportList.c)
 *     MIDL_user_allocate @ 0x1404EC5DC (MIDL_user_allocate.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1404EC670 (PiSwDeviceMakeCompatibleIds.c)
 *     PiDqAllocateGenericTableEntry @ 0x1404EC7FC (PiDqAllocateGenericTableEntry.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404ECE6C (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PiDeferSetInterfaceState @ 0x1404ECF18 (PiDeferSetInterfaceState.c)
 *     ExpWnfAllocateScopeInstance @ 0x1404ED184 (ExpWnfAllocateScopeInstance.c)
 *     PiDqGrowPropertyArray @ 0x1404ED7B0 (PiDqGrowPropertyArray.c)
 *     ExpCheckPortableOperatingSystem @ 0x1404ED840 (ExpCheckPortableOperatingSystem.c)
 *     CmpTransAllocateTrans @ 0x1404EDB60 (CmpTransAllocateTrans.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x1404EDC5C (ExpHwidEnsurePropertyBufferLength.c)
 *     NtNotifyChangeSession @ 0x1404EE3E8 (NtNotifyChangeSession.c)
 *     EtwpExpandFileName @ 0x1404EE8AC (EtwpExpandFileName.c)
 *     ExpGenuinePolicyPostProcess @ 0x1404EEC60 (ExpGenuinePolicyPostProcess.c)
 *     ExpWnfRegisterPermanentName @ 0x1404EF04C (ExpWnfRegisterPermanentName.c)
 *     MiCreateRotateView @ 0x1404EF458 (MiCreateRotateView.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1404EF5F4 (ExpHwidBiosIfGetFirmwareTable.c)
 *     PopPowerRequestAllocate @ 0x1404EF7C0 (PopPowerRequestAllocate.c)
 *     EtwpCreateUmReplyObject @ 0x1404EF810 (EtwpCreateUmReplyObject.c)
 *     ExpWnfPopulateStateData @ 0x1404EF9E0 (ExpWnfPopulateStateData.c)
 *     PiSwAddPdoAssociation @ 0x1404EFBEC (PiSwAddPdoAssociation.c)
 *     PnpAllocateGenericTableEntry @ 0x1404EFF30 (PnpAllocateGenericTableEntry.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404F0600 (PoDiagCaptureUsermodeStack.c)
 *     EtwpGenerateFileName @ 0x1404F08C8 (EtwpGenerateFileName.c)
 *     PerfDiagpRequestState @ 0x1404F0F68 (PerfDiagpRequestState.c)
 *     PiSwAllocateGenericTableEntry @ 0x1404F13F4 (PiSwAllocateGenericTableEntry.c)
 *     MiInSwapStore @ 0x1404F17D0 (MiInSwapStore.c)
 *     IoDiskIoAttributionAllocate @ 0x1404F2330 (IoDiskIoAttributionAllocate.c)
 *     PspEstablishJobHierarchy @ 0x1404F2FFC (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x1404F33FC (MmLinkJobProcess.c)
 *     NtSetInformationVirtualMemory @ 0x1404F3D10 (NtSetInformationVirtualMemory.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404F4AF8 (PfSnAsyncPrefetchWorker.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404F4E8C (PfSnOpenVolumesForPrefetch.c)
 *     ExpHwidProcessDevice @ 0x1404F59EC (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404F5B1C (ExpHwidAppendDeviceInfoBlock.c)
 *     IopGetDeviceInterfaces @ 0x1404F69DC (IopGetDeviceInterfaces.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404F7BE8 (_CmOpenCommonClassRegKeyWorker.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1404F8438 (RtlpAllocDeallocQueryBuffer.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404F8C08 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiCMGetObjectList @ 0x1404F903C (PiCMGetObjectList.c)
 *     IoGetDeviceProperty @ 0x1404F936C (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1404F9894 (PiGetDeviceRegProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404FA878 (_RegRtlCreateTreeTransacted.c)
 *     _PnpOpenPropertiesKey @ 0x1404FAC30 (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404FB104 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404FB708 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PnpGetObjectProperty @ 0x1404FBC64 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1404FC99C (PiCMGetObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1404FCFB8 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404FD480 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x1404FDA60 (_RegRtlQueryValue.c)
 *     PiPnpRtlObjectActionCallback @ 0x1404FE930 (PiPnpRtlObjectActionCallback.c)
 *     _PnpRegQueryValueIndirect @ 0x1404FFED4 (_PnpRegQueryValueIndirect.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1405009C0 (FsRtlAllocateExtraCreateParameter.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140500AB8 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x140500CEC (PiPnpRtlInterfaceFilterCallback.c)
 *     PnpUnicodeStringToWstr @ 0x140500FB4 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlObjectEventCreate @ 0x1405015D8 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlBeginOperation @ 0x14050173C (PiPnpRtlBeginOperation.c)
 *     FsRtlFindInTunnelCache @ 0x140501A80 (FsRtlFindInTunnelCache.c)
 *     PiDqPnPGetObjectProperty @ 0x140501BE4 (PiDqPnPGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x140501D70 (PnpAllocatePWSTR.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x140501F2C (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x140502614 (PiDqQueryEvaluateFilter.c)
 *     PiCMGetRegistryProperty @ 0x140502DC0 (PiCMGetRegistryProperty.c)
 *     FsRtlAddToTunnelCache @ 0x1405030D8 (FsRtlAddToTunnelCache.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x140503538 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x140503A30 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x14050539C (PiDmObjectProcessPropertyChange.c)
 *     IoQueryFileDosDeviceName @ 0x1405080AC (IoQueryFileDosDeviceName.c)
 *     IoVolumeDeviceToDosName @ 0x14050814C (IoVolumeDeviceToDosName.c)
 *     PfpFileBuildReadList @ 0x140509108 (PfpFileBuildReadList.c)
 *     IopQueryNameInternal @ 0x140509B10 (IopQueryNameInternal.c)
 *     PfSnPopulateReadList @ 0x14050A770 (PfSnPopulateReadList.c)
 *     MmCopyVirtualMemory @ 0x14050BE60 (MmCopyVirtualMemory.c)
 *     NtSetInformationThread @ 0x14050E5D0 (NtSetInformationThread.c)
 *     ObpCallPreOperationCallbacks @ 0x140511820 (ObpCallPreOperationCallbacks.c)
 *     PfpRpFileKeyUpdate @ 0x140512DD0 (PfpRpFileKeyUpdate.c)
 *     CmpAllocate @ 0x140513ED4 (CmpAllocate.c)
 *     CmpClaimGlobalQuota @ 0x140513F30 (CmpClaimGlobalQuota.c)
 *     PspAllocateThread @ 0x1405154A0 (PspAllocateThread.c)
 *     PopPowerInformationInternal @ 0x14051D314 (PopPowerInformationInternal.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x14051D564 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     sub_14051D6D0 @ 0x14051D6D0 (sub_14051D6D0.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x14051DA10 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x14051DAC0 (ExpHwidSysVolIfGetDiskInfo.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     PopDiagTracePowerRequestCreate @ 0x14052000C (PopDiagTracePowerRequestCreate.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140521130 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     MiExtendSection @ 0x140521CB4 (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x140522664 (MiCreateDataFileMap.c)
 *     MiBuildImageControlArea @ 0x140523584 (MiBuildImageControlArea.c)
 *     MiRelocateImage @ 0x140524330 (MiRelocateImage.c)
 *     MiCompressRelocations @ 0x140525290 (MiCompressRelocations.c)
 *     MiParseImageCfgBits @ 0x1405256E0 (MiParseImageCfgBits.c)
 *     MiRevertRelocatedImagePfn @ 0x140526A98 (MiRevertRelocatedImagePfn.c)
 *     MiValidateSectionCreate @ 0x140526D8C (MiValidateSectionCreate.c)
 *     MiBuildNewCloneDescriptor @ 0x140527744 (MiBuildNewCloneDescriptor.c)
 *     SepScheduleImageVerificationCallbacks @ 0x140527870 (SepScheduleImageVerificationCallbacks.c)
 *     MiAllocateChildVads @ 0x140527B80 (MiAllocateChildVads.c)
 *     MmRotatePhysicalView @ 0x1405281DC (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528600 (MiMapLockedPagesInUserSpace.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x1405289A0 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x140528B50 (IoGetDeviceInterfaceAlias.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x140529CB8 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x140529EC8 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14052A01C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     WmipCountedToSz @ 0x14052A9C8 (WmipCountedToSz.c)
 *     PfpRpCHashGrow @ 0x14052AEFC (PfpRpCHashGrow.c)
 *     PopFxTraceDeviceRegistration @ 0x14052B8C0 (PopFxTraceDeviceRegistration.c)
 *     PopLoggingInformation @ 0x14052B944 (PopLoggingInformation.c)
 *     IoRegisterPlugPlayNotification @ 0x14052BB14 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x14052BEB4 (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x14052BF78 (PnpInitializeNotifyEntry.c)
 *     MmAllocateMappingAddress @ 0x14052C2FC (MmAllocateMappingAddress.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C468 (PiCMGetRelatedDeviceInstance.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D194 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052D4FC (EtwpUpdateDisallowedGuids.c)
 *     PopDiagTraceThermalRequest @ 0x14052DCF8 (PopDiagTraceThermalRequest.c)
 *     PopHiberInitializeResources @ 0x14052F2C4 (PopHiberInitializeResources.c)
 *     NtInitiatePowerAction @ 0x140530B04 (NtInitiatePowerAction.c)
 *     PoInitializeBroadcast @ 0x140531FFC (PoInitializeBroadcast.c)
 *     BiGetKeyName @ 0x1405328D4 (BiGetKeyName.c)
 *     PfpSourceBuildVaArray @ 0x1405337A8 (PfpSourceBuildVaArray.c)
 *     BiUnloadHiveByName @ 0x140533CB4 (BiUnloadHiveByName.c)
 *     PopLoadResumeContext @ 0x140533E50 (PopLoadResumeContext.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x140534094 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PfpServiceMainThreadBoostPrep @ 0x1405345E0 (PfpServiceMainThreadBoostPrep.c)
 *     MiSessionCreate @ 0x140535604 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x140535AA4 (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x140536508 (MiSessionCreateInternal.c)
 *     WmipRegisterOrUpdateDS @ 0x140536E20 (WmipRegisterOrUpdateDS.c)
 *     WmipBuildInstanceSet @ 0x140537360 (WmipBuildInstanceSet.c)
 *     WmipCachePtrs @ 0x140537828 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x140537A1C (WmipSendGuidUpdateNotifications.c)
 *     WmipAllocGuidEntry @ 0x140537DD4 (WmipAllocGuidEntry.c)
 *     WmipQueueNotification @ 0x14053809C (WmipQueueNotification.c)
 *     PiProcessDriverInstance @ 0x1405387C4 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538A14 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiFindDevInstMatch @ 0x140538FDC (PiFindDevInstMatch.c)
 *     IopConnectLineBasedInterrupt @ 0x1405392E8 (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x1405397D4 (IopConnectMessageBasedInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x140539B0C (IopGetInterruptConnectionData.c)
 *     IopConnectInterrupt @ 0x140539BEC (IopConnectInterrupt.c)
 *     WmipQueueRegWork @ 0x14053A690 (WmipQueueRegWork.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B080 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053B4E8 (CmpLightWeightCreateSetValueData.c)
 *     BiLoadSystemStore @ 0x14053B5E0 (BiLoadSystemStore.c)
 *     BiGetSystemStorePath @ 0x14053B764 (BiGetSystemStorePath.c)
 *     BiGetSystemPartition @ 0x14053B84C (BiGetSystemPartition.c)
 *     SiQuerySystemPartitionInformation @ 0x14053B914 (SiQuerySystemPartitionInformation.c)
 *     BiEnumerateSubKeys @ 0x14053C2A0 (BiEnumerateSubKeys.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053C928 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14053CA90 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x14053CCF0 (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14053CE58 (BiGetDriveLayoutBlock.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053CF94 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14053D498 (PopBcdReadElement.c)
 *     BiGetRegistryValue @ 0x14053D91C (BiGetRegistryValue.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E018 (BiCreateKeySecurityDescriptor.c)
 *     BiConvertElementToRegistryData @ 0x14053E324 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053E75C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14053E80C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14053EBB4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x14053ED88 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x14053EF34 (BiVerifyBootPartition.c)
 *     PopBcdSetupResumeObject @ 0x14053F0D0 (PopBcdSetupResumeObject.c)
 *     IoQueryDeviceDescription @ 0x14053FB24 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x14053FC30 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x14053FF84 (IopGetRegistryKeyInformation.c)
 *     WdipSemAllocatePool @ 0x1405400E0 (WdipSemAllocatePool.c)
 *     IopSymlinkRememberJunction @ 0x140540AD0 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140540BD0 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x140541028 (IopGraftName.c)
 *     KeAllocateCalloutStackEx @ 0x1405416E4 (KeAllocateCalloutStackEx.c)
 *     SiGetFirmwareBootDeviceName @ 0x14054207C (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x1405422D8 (SiTranslateSymbolicLink.c)
 *     SiGetRegistryValue @ 0x14054251C (SiGetRegistryValue.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x140542D4C (NtPrivilegeObjectAuditAlarm.c)
 *     IopDeviceObjectFromSymbolicName @ 0x1405431F0 (IopDeviceObjectFromSymbolicName.c)
 *     PiSwUpdateArrayProperties @ 0x1405438D0 (PiSwUpdateArrayProperties.c)
 *     MmCallDllInitialize @ 0x1405442A0 (MmCallDllInitialize.c)
 *     MiFormFullImageName @ 0x140544648 (MiFormFullImageName.c)
 *     PnpUnloadAttachedDriver @ 0x140544D78 (PnpUnloadAttachedDriver.c)
 *     MiRememberUnloadedDriver @ 0x140545B24 (MiRememberUnloadedDriver.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x1405464D0 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpCCSwapStart @ 0x1405468E4 (EtwpCCSwapStart.c)
 *     TtmNotifyDeviceArrival @ 0x140546A1C (TtmNotifyDeviceArrival.c)
 *     IoWMIQuerySingleInstance @ 0x140547014 (IoWMIQuerySingleInstance.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140547E40 (NtQuerySystemEnvironmentValueEx.c)
 *     PopSetHiberFileMcb @ 0x1405483F4 (PopSetHiberFileMcb.c)
 *     SepInitializeLowBoxNumberTable @ 0x14054847C (SepInitializeLowBoxNumberTable.c)
 *     EtwpSetProviderTraitsKm @ 0x140548B34 (EtwpSetProviderTraitsKm.c)
 *     WmipSendEnableDisableRequest @ 0x140549834 (WmipSendEnableDisableRequest.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x140549C74 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14054A5F0 (SepInformFileSystemsOfDeletedLogon.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14054AE98 (EtwpCrimsonProvEnableCallback.c)
 *     MmGetChannelInformation @ 0x14054C23C (MmGetChannelInformation.c)
 *     ExpOsProductCacheProviderHelper @ 0x14054C53C (ExpOsProductCacheProviderHelper.c)
 *     PopLogSleepDisabled @ 0x14054CA58 (PopLogSleepDisabled.c)
 *     IoCreateSystemThread @ 0x14054CB60 (IoCreateSystemThread.c)
 *     ExAllocateCallBack @ 0x14054CCD0 (ExAllocateCallBack.c)
 *     PiDmListInitEnumCallback @ 0x14054D120 (PiDmListInitEnumCallback.c)
 *     PnpSetInterruptInformation @ 0x14054D528 (PnpSetInterruptInformation.c)
 *     KeInitializeTimerTable @ 0x14054E370 (KeInitializeTimerTable.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EAE0 (PpmIdleRegisterDefaultStates.c)
 *     MiCreateNodeLists @ 0x14054F460 (MiCreateNodeLists.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FA20 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopCreateArcName @ 0x14054FC84 (IopCreateArcName.c)
 *     RtlGenerateClass5Guid @ 0x1405501AC (RtlGenerateClass5Guid.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405506D0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     WmipAddMofResource @ 0x140550C40 (WmipAddMofResource.c)
 *     WmipInsertMofResource @ 0x140550DF8 (WmipInsertMofResource.c)
 *     IoRegisterLastChanceShutdownNotification @ 0x140550F30 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x140550FA0 (IoRegisterShutdownNotification.c)
 *     CmpRegisterCallbackInternal @ 0x1405510FC (CmpRegisterCallbackInternal.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x1405512E8 (VrpInitializeLoadedDifferencingHives.c)
 *     IoCreateDriver @ 0x140551384 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x140551AE8 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x140551BDC (PiDrvDbCreateNode.c)
 *     PsRegisterSiloMonitor @ 0x140551E98 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140552054 (ObCreateObjectTypeEx.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x14055272C (ObpCreateDefaultObjectTypeSD.c)
 *     CcInitializeProcessor @ 0x140552880 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140552930 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x140552A44 (IoInitializeProcessor.c)
 *     EtwInitialize @ 0x140552C6C (EtwInitialize.c)
 *     EtwInitializeProcessor @ 0x140552C9C (EtwInitializeProcessor.c)
 *     SepInitializationPhase1 @ 0x140552FE0 (SepInitializationPhase1.c)
 *     ExRegisterHost @ 0x140553420 (ExRegisterHost.c)
 *     EmpProviderRegister @ 0x14055420C (EmpProviderRegister.c)
 *     IopLegacyResourceAllocation @ 0x1405549AC (IopLegacyResourceAllocation.c)
 *     IopCreateCmResourceList @ 0x140554BA0 (IopCreateCmResourceList.c)
 *     IopCombineCmResourceList @ 0x140554C6C (IopCombineCmResourceList.c)
 *     IoReportDetectedDevice @ 0x140554CFC (IoReportDetectedDevice.c)
 *     HeadlessTerminalAddResources @ 0x1405553EC (HeadlessTerminalAddResources.c)
 *     PnpLogDeviceConflictingResource @ 0x1405554C4 (PnpLogDeviceConflictingResource.c)
 *     ArbInitializeArbiterInstance @ 0x140555648 (ArbInitializeArbiterInstance.c)
 *     PnpLookupArbitersNewResources @ 0x140555FF8 (PnpLookupArbitersNewResources.c)
 *     PnpBuildCmResourceList @ 0x1405563CC (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x140556850 (IopChildToRootTranslation.c)
 *     IopResourceRequirementsListToReqList @ 0x140556A60 (IopResourceRequirementsListToReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x140556FA8 (IopSetupArbiterAndTranslators.c)
 *     IopQueryResourceHandlerInterface @ 0x14055753C (IopQueryResourceHandlerInterface.c)
 *     PnpCmResourcesToIoResources @ 0x1405579DC (PnpCmResourcesToIoResources.c)
 *     IopTranslateAndAdjustReqDesc @ 0x140557C18 (IopTranslateAndAdjustReqDesc.c)
 *     PnpFilterResourceRequirementsList @ 0x1405583E4 (PnpFilterResourceRequirementsList.c)
 *     ArbAddOrdering @ 0x140559000 (ArbAddOrdering.c)
 *     ArbpBuildAllocationStack @ 0x14055978C (ArbpBuildAllocationStack.c)
 *     ArbpGetRegistryValue @ 0x14055A67C (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x14055A9D8 (ArbInitializeOrderingList.c)
 *     ArbPruneOrdering @ 0x14055AA78 (ArbPruneOrdering.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14055AE90 (ArbAddMmConfigRangeAsBootReserved.c)
 *     CmpInitializeNameCache @ 0x14055B63C (CmpInitializeNameCache.c)
 *     CmSetAcpiHwProfile @ 0x14055B9E8 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x14055C098 (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x14055CDF0 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D110 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x14055E464 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055E548 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055E73C (CmpHiveRootSecurityDescriptor.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x140560288 (RtlpMuiRegCreateRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x140560C34 (LdrpQueryValueKey.c)
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
 *     PiDmObjectManagerPopulate @ 0x1405640A8 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x1405641DC (PiDmObjectCreate.c)
 *     PopFxRegisterDeviceWorker @ 0x140566D28 (PopFxRegisterDeviceWorker.c)
 *     PopPepRegisterDevice @ 0x14056747C (PopPepRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140567808 (PopFxConvertV1Components.c)
 *     PipAddBindingId @ 0x140567DB8 (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x140567ED8 (PipCreateDependencyNode.c)
 *     MmStoreRegister @ 0x140567FC0 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x140568224 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x140568D38 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x140569020 (MiCreatePageFileSpaceBitmaps.c)
 *     PpmRegisterPerfStates @ 0x140569588 (PpmRegisterPerfStates.c)
 *     PpmAllocatePerfCheck @ 0x140569F24 (PpmAllocatePerfCheck.c)
 *     PpmIdleInitializeConcurrency @ 0x14056A4B0 (PpmIdleInitializeConcurrency.c)
 *     PpmPerfResizeHistoryAll @ 0x14056AC74 (PpmPerfResizeHistoryAll.c)
 *     AdtpEtwBuildString @ 0x14056B094 (AdtpEtwBuildString.c)
 *     AdtpBuildMessageString @ 0x14056B150 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14056B3C4 (SepGetLogonSessionAccountInfo.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14056B668 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x14056B6F0 (SepRmFetchGlobalSacl.c)
 *     PopRequestShutdownWait @ 0x14056BC80 (PopRequestShutdownWait.c)
 *     SepReadAndPopulateCapes @ 0x14056BD0C (SepReadAndPopulateCapes.c)
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 *     PopConnectToPolicyDevice @ 0x14056C0D8 (PopConnectToPolicyDevice.c)
 *     PoCreateThermalRequest @ 0x14056C4C8 (PoCreateThermalRequest.c)
 *     PopAssociateThermalRequest @ 0x14056C5C0 (PopAssociateThermalRequest.c)
 *     PopEnableHiberFile @ 0x14056C7F8 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14056CCF8 (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056E550 (PopCreateHiberFileSecurityDescriptor.c)
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
 *     PfTAllocateBuffers @ 0x140572700 (PfTAllocateBuffers.c)
 *     PfpCreateEvent @ 0x140572860 (PfpCreateEvent.c)
 *     PiDmAllocateGenericTableEntry @ 0x140572BD8 (PiDmAllocateGenericTableEntry.c)
 *     MiMapViewOfPhysicalSection @ 0x140572C40 (MiMapViewOfPhysicalSection.c)
 *     PiGetDefaultMessageString @ 0x1405745C0 (PiGetDefaultMessageString.c)
 *     PipApplyFunctionToServiceInstances @ 0x14057471C (PipApplyFunctionToServiceInstances.c)
 *     WheapInitializeErrorSource @ 0x140574974 (WheapInitializeErrorSource.c)
 *     CmLockKeyForWrite @ 0x140574BC8 (CmLockKeyForWrite.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140574E38 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 *     ExAllocatePrivateWorkerPool @ 0x140575508 (ExAllocatePrivateWorkerPool.c)
 *     WmipLegacyEtwCallback @ 0x140575CF8 (WmipLegacyEtwCallback.c)
 *     WmipRegisterEtwProvider @ 0x140575E4C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x140575F1C (WmipQueueLegacyEtwWork.c)
 *     IoRegisterBootDriverReinitialization @ 0x140576750 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x1405767C4 (IoRegisterDriverReinitialization.c)
 *     WmipGenerateMofResourceNotification @ 0x140576CD8 (WmipGenerateMofResourceNotification.c)
 *     FsRtlGetTunnelParameterValue @ 0x140576E3C (FsRtlGetTunnelParameterValue.c)
 *     MmGetNodeChannelRanges @ 0x140576FC4 (MmGetNodeChannelRanges.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405770F4 (CmpInitializeSystemHivesLoad.c)
 *     NtSetUuidSeed @ 0x140577398 (NtSetUuidSeed.c)
 *     PiDcInitUpdateProperties @ 0x1405777B8 (PiDcInitUpdateProperties.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140578344 (FsRtlpRegisterProviderWithMUP.c)
 *     PpmRegisterProfiles @ 0x1405784E0 (PpmRegisterProfiles.c)
 *     DrvDbOpenContext @ 0x140578960 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x140578BB0 (DrvDbCreateDatabaseNode.c)
 *     PfSnPrefetchCacheCtxStart @ 0x140578DA4 (PfSnPrefetchCacheCtxStart.c)
 *     ObRegisterCallbacks @ 0x140579118 (ObRegisterCallbacks.c)
 *     MiConvertInitialMemoryBlock @ 0x1405793F8 (MiConvertInitialMemoryBlock.c)
 *     PspAllocStorage @ 0x1405794F0 (PspAllocStorage.c)
 *     _PnpCtxOpenMachine @ 0x140579548 (_PnpCtxOpenMachine.c)
 *     _SysCtxOpenMachine @ 0x140579704 (_SysCtxOpenMachine.c)
 *     ObpInitializeRootNamespace @ 0x140579974 (ObpInitializeRootNamespace.c)
 *     ObpGetDosDevicesProtection @ 0x140579E48 (ObpGetDosDevicesProtection.c)
 *     SepSetSystemPaths @ 0x14057A068 (SepSetSystemPaths.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057A954 (PiDevCfgQueryObjectProperties.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14057AADC (ExpRegisterFirmwareTableInformationHandler.c)
 *     WheapLogInitEvent @ 0x14057AC08 (WheapLogInitEvent.c)
 *     SepBuildDefaultCap @ 0x14057B0B4 (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B14C (_PnpGetEnumSecurityDescriptor.c)
 *     PnpAllocateDeviceInstancePath @ 0x14057B480 (PnpAllocateDeviceInstancePath.c)
 *     AlpcpInitSystem @ 0x14057BD0C (AlpcpInitSystem.c)
 *     AlpcpInitializeMessageLog @ 0x14057BFD4 (AlpcpInitializeMessageLog.c)
 *     IoRegisterContainerNotification @ 0x14057C124 (IoRegisterContainerNotification.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C53C (ExpGetSystemPlatformBinary.c)
 *     IopCreateVpb @ 0x14057D9D0 (IopCreateVpb.c)
 *     ExpWnfAllocateScopeMap @ 0x14057DA38 (ExpWnfAllocateScopeMap.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x14057DD18 (PnpMergeFilteredResourceRequirementsList.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x14057E6EC (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     ExGetSystemFirmwareTable @ 0x14057E9A0 (ExGetSystemFirmwareTable.c)
 *     CmpAddStringToMapping @ 0x14057F170 (CmpAddStringToMapping.c)
 *     IoInitializeTimer @ 0x14057F6F0 (IoInitializeTimer.c)
 *     PopExtendConnectionState @ 0x14057F99C (PopExtendConnectionState.c)
 *     PiDcAllocateGenericTableEntry @ 0x1405800DC (PiDcAllocateGenericTableEntry.c)
 *     CcAllocateObcb @ 0x1405F8F04 (CcAllocateObcb.c)
 *     CmpSaveBootControlSet @ 0x1405F9094 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9B0C (NtQueryOpenSubKeysEx.c)
 *     CmSetCallbackObjectContext @ 0x1405FAFAC (CmSetCallbackObjectContext.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1405FC398 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmVirtualKCBToRealPath @ 0x14060035C (CmVirtualKCBToRealPath.c)
 *     CmpBuildAdminInformation @ 0x14060049C (CmpBuildAdminInformation.c)
 *     CmpBuildVirtualReplicationStack @ 0x140600808 (CmpBuildVirtualReplicationStack.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140601A60 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpCheckExeOwnerForPca @ 0x140601DF0 (CmpCheckExeOwnerForPca.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140602464 (CmpDoAccessCheckOnSubtree.c)
 *     CmpCmdRenameHive @ 0x140603554 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarning @ 0x140603614 (CmpDiskFullWarning.c)
 *     CmpClearKeyAccessBits @ 0x140603774 (CmpClearKeyAccessBits.c)
 *     CmInitializeProcessor @ 0x1406038C8 (CmInitializeProcessor.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x140604834 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1406064F4 (HvWriteExternal.c)
 *     CmDeleteKeyRecursive @ 0x140606DF0 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x1406071B0 (CmpCloneHwProfile.c)
 *     CmpCopySyncTree @ 0x1406081A4 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x140608240 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x140608F88 (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x140609150 (CmpPreserveSystemHiveData.c)
 *     CmpAllocateLayerInfoForKcb @ 0x14060B7E8 (CmpAllocateLayerInfoForKcb.c)
 *     CmpLoadHiveVolatile @ 0x14060D2DC (CmpLoadHiveVolatile.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DD60 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpLightWeightCreateModificationData @ 0x14060EB20 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F08C (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F624 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F93C (CmpSnapshotTxOwnerArray.c)
 *     HvpViewMapPrefetchFile @ 0x140610074 (HvpViewMapPrefetchFile.c)
 *     HvpReviveDiscardedBin @ 0x14061089C (HvpReviveDiscardedBin.c)
 *     HvpGetLogHeader @ 0x140610A74 (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x1406112B8 (HvpRecoverData.c)
 *     HvpRecoverDataReadRoutine @ 0x140611514 (HvpRecoverDataReadRoutine.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x140611640 (CmpAddRemoveContainerToCLFSLog.c)
 *     VrpProcessBufferParameter @ 0x140613010 (VrpProcessBufferParameter.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x1406130D8 (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613754 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x1406139F8 (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpAddNamespaceNodeToList @ 0x140614330 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x140614648 (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x140614978 (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x140614D90 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x140615588 (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140615D08 (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x1406163E4 (VrpPreOpenOrCreate.c)
 *     VrpAllocateDiffHiveEntry @ 0x140616E48 (VrpAllocateDiffHiveEntry.c)
 *     VrpBuildKeyPath @ 0x140617AE4 (VrpBuildKeyPath.c)
 *     DbgkCaptureLiveDump @ 0x14061ADEC (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14061B3D0 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkWerAddSecondaryData @ 0x14061B9B0 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14061BB3C (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerAllocatePool @ 0x14061BD24 (DbgkpWerAllocatePool.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14061BD38 (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x14061BEB4 (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpTriageDumpInitialize @ 0x14061C8D4 (DbgkpTriageDumpInitialize.c)
 *     EmpClientRuleRegisterNotification @ 0x14061CB9C (EmpClientRuleRegisterNotification.c)
 *     EmProviderRegisterEntry @ 0x14061D064 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x14061ED7C (FsRtlIsDbcsInExpression.c)
 *     FsRtlpHeatRegisterVolume @ 0x14061F89C (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x14061FAD0 (FsRtlpQueryValueKey.c)
 *     HvlpAllocatePageListResources @ 0x1406205DC (HvlpAllocatePageListResources.c)
 *     IopAllocateGenericTableEntry @ 0x140620DAC (IopAllocateGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x14062149C (IopGetRelatedFileName.c)
 *     IopInitializeBootLogging @ 0x14062188C (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x140622078 (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x14062238C (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1406224EC (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406227EC (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140622BE4 (IopSetFileObjectIosbRange.c)
 *     IoReplaceFileObjectName @ 0x14062392C (IoReplaceFileObjectName.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406245F0 (IoIsValidNameGraftingBuffer.c)
 *     IopSymlinkApplyToOpenedName @ 0x140624DAC (IopSymlinkApplyToOpenedName.c)
 *     IoRegisterIoTracking @ 0x140624F30 (IoRegisterIoTracking.c)
 *     NtQueryQuotaInformationFile @ 0x1406257E0 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x140625F30 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x1406266AC (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140626C5C (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140626E3C (IopLiveDumpAllocateMappingResources.c)
 *     IopFindSystemDevice @ 0x1406292E0 (IopFindSystemDevice.c)
 *     IopAppendLegacyVeto @ 0x14062A498 (IopAppendLegacyVeto.c)
 *     PpCreateLegacyDeviceIds @ 0x14062A8B0 (PpCreateLegacyDeviceIds.c)
 *     PipAddRequestToEdge @ 0x14062AD74 (PipAddRequestToEdge.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B908 (PnpDeleteDeviceInterfaces.c)
 *     IopChangeInterfaceType @ 0x14062C3B0 (IopChangeInterfaceType.c)
 *     IoRequestDeviceRemovalForReset @ 0x14062C4DC (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14062D044 (IopAllocatePassiveInterruptBlock.c)
 *     IopCombineLegacyResources @ 0x14062E680 (IopCombineLegacyResources.c)
 *     IopIsPciRootBus @ 0x14062E770 (IopIsPciRootBus.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14062EC7C (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14062ED30 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14062EE40 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14062EFB8 (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14062F290 (PiPnpRtlServiceFilterCallback.c)
 *     PnpRebalance @ 0x1406303D0 (PnpRebalance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x1406308B0 (PiDcResetChildDeviceContainerCallback.c)
 *     PiAuCheckClientInteractive @ 0x140630CB8 (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140630D78 (PiAuCheckTokenMembership.c)
 *     PiDqGetRelativeObjectRegPath @ 0x1406317A0 (PiDqGetRelativeObjectRegPath.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x14063209C (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x1406321C4 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConfigureDevice @ 0x140633214 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x1406353CC (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140635E44 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x140636008 (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x140636298 (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140636F9C (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyVariableData @ 0x140637250 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637AD4 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x140638328 (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x14063918C (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgInitResolveContext @ 0x140639814 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063B9F4 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C23C (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CCDC (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D1DC (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063DFC8 (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E354 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableConstant @ 0x14063E700 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E7C8 (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EBAC (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14063FD2C (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140640250 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x14064041C (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140640BC8 (PiDevCfgResolveVariableKeyValue.c)
 *     PiProfileUpdateDeviceTree @ 0x140641F90 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1406420C0 (PnpProfileUpdateHardwareProfile.c)
 *     IopTranslatorHandlerIo @ 0x140642704 (IopTranslatorHandlerIo.c)
 *     PnpAddVetoInformation @ 0x140642760 (PnpAddVetoInformation.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x140643C5C (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140643E40 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x140643F5C (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x140644114 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x1406444DC (PnprGetPluginDriverImagePath.c)
 *     PnprMmAddRange @ 0x1406451D0 (PnprMmAddRange.c)
 *     PiSwQueuedCreateInfoCreate @ 0x140645808 (PiSwQueuedCreateInfoCreate.c)
 *     PiCMCreateDevice @ 0x1406461E4 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140647664 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x1406477EC (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140647BEC (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x140648028 (PiCMQueryRemove.c)
 *     IopQueryDockRemovalInterface @ 0x140649F20 (IopQueryDockRemovalInterface.c)
 *     PiControlGetDeviceStack @ 0x14064A43C (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14064AC94 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14064B0AC (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B3CC (PnpQueueQueryAndRemoveEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14064C090 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C2B4 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiAuditDeviceOperation @ 0x14064C720 (PiAuditDeviceOperation.c)
 *     IopExecuteHardwareProfileChange @ 0x14064CDDC (IopExecuteHardwareProfileChange.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D464 (PiCreateDriverSwDeviceCallback.c)
 *     KeInitializeSecondaryInterruptServices @ 0x14064FAF0 (KeInitializeSecondaryInterruptServices.c)
 *     KeInitializeUmsThread @ 0x1406504F0 (KeInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406550F4 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x140655E7C (AlpcpGetPortNameInformation.c)
 *     AlpcRegisterLogRoutine @ 0x140656478 (AlpcRegisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x1406569BC (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x140656B10 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140656C18 (MmGetFileNameForSection.c)
 *     MiInitializeLockedPagesTracking @ 0x140656EC8 (MiInitializeLockedPagesTracking.c)
 *     MiConfigureMemoryInsertion @ 0x140657BFC (MiConfigureMemoryInsertion.c)
 *     MiConfigureMemoryRemoval @ 0x140657F38 (MiConfigureMemoryRemoval.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406595C0 (MiLogStrongCodeDriverLoadFailure.c)
 *     MmSetPermanentCacheAttribute @ 0x140659800 (MmSetPermanentCacheAttribute.c)
 *     MiAllocateFileExtents @ 0x14065A34C (MiAllocateFileExtents.c)
 *     MiCopyDirectMapHeader @ 0x14065A8E0 (MiCopyDirectMapHeader.c)
 *     MiAllocateAweInfo @ 0x14065C02C (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x14065C82C (MiResizeAweBitMap.c)
 *     NtMapUserPhysicalPages @ 0x14065D72C (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DBA8 (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x14065E080 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateEnclaveVad @ 0x14065E4C4 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E84C (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x14065F8F8 (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14065FCC8 (NtInitializeEnclave.c)
 *     MiCreatePartition @ 0x1406601A8 (MiCreatePartition.c)
 *     MiExpandPartitionIds @ 0x1406603B4 (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x1406607FC (MiMakePartitionMemoryBlock.c)
 *     MiManagePartition @ 0x1406609A4 (MiManagePartition.c)
 *     MiAllocatePerSessionProtos @ 0x140661818 (MiAllocatePerSessionProtos.c)
 *     MiAllocateLargeZeroPages @ 0x1406620F0 (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x1406624FC (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x1406626E4 (MiFindLargePageMemory.c)
 *     MiAllocateCrcList @ 0x1406635EC (MiAllocateCrcList.c)
 *     MiProcessCrcList @ 0x140663DC8 (MiProcessCrcList.c)
 *     MiInitializeScrubPacket @ 0x140664CDC (MiInitializeScrubPacket.c)
 *     MiScrubProcesses @ 0x140664E40 (MiScrubProcesses.c)
 *     MmScrubMemory @ 0x14066528C (MmScrubMemory.c)
 *     ObpSetObjectAuditInfo @ 0x14066637C (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x1406665CC (ObGetObjectInformation.c)
 *     ObpCreateTypeArray @ 0x140666C3C (ObpCreateTypeArray.c)
 *     ObpGetObjectRefInfo @ 0x140667A88 (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x140667BA0 (ObpGetTraceIndex.c)
 *     ObpInitStackAndObjectTables @ 0x140667D9C (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406681BC (ObpRefillWorkItemFreeList.c)
 *     ObpRegisterObject @ 0x1406681FC (ObpRegisterObject.c)
 *     ObpStartRuntimeStackTrace @ 0x140668404 (ObpStartRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x140668CA0 (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x140669118 (PfpQueryFileExtentsRequest.c)
 *     PopUnicodeStringDeepCopy @ 0x14066A78C (PopUnicodeStringDeepCopy.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14066AB58 (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14066B0C8 (PpmInstallPlatformIdleStates.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14066BD0C (PopRegisterCoolingExtensionProtection.c)
 *     PoDisableSleepStates @ 0x14066BE6C (PoDisableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x14066C054 (PopGetPowerRequestListInfo.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C59C (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14066CA74 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x14066CEF4 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x14066D104 (PopFxRegisterComponentPerfStates.c)
 *     PopFxVerifyDependencies @ 0x14066D78C (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14066DB94 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopNewWakeSource @ 0x14066E234 (PopNewWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x14066E27C (PopProcessWakeSourceWork.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14066E438 (PopWakeSourceGetDeviceProperty.c)
 *     PopPdcCsDeviceNotification @ 0x14066FEEC (PopPdcCsDeviceNotification.c)
 *     PopDiagReadLastLogOffEndTime @ 0x1406709B0 (PopDiagReadLastLogOffEndTime.c)
 *     PopFxTracePerfRegistration @ 0x1406723F0 (PopFxTracePerfRegistration.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140673C7C (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x140673FC4 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x1406742A0 (PpmEventTraceProcessorIdle.c)
 *     PpmAllocateQueryTable @ 0x1406759A4 (PpmAllocateQueryTable.c)
 *     TtmInitCurrentSession @ 0x1406786B8 (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x14067937C (TtmDispatchApi.c)
 *     TtmiWriteEventToSingleQueue @ 0x14067A12C (TtmiWriteEventToSingleQueue.c)
 *     PspConvertSiloToServerSilo @ 0x14067E520 (PspConvertSiloToServerSilo.c)
 *     PspCreateSecureThread @ 0x14067F428 (PspCreateSecureThread.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140680194 (PspAddProcessToWorkingSetChangeList.c)
 *     PspSetJobIoRateControlForVolume @ 0x140680918 (PspSetJobIoRateControlForVolume.c)
 *     PspSetMinimalProcessName @ 0x140681AEC (PspSetMinimalProcessName.c)
 *     PspLazyInitializeStorageExpansion @ 0x140682938 (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x1406834A4 (RawQueryFileSystemInformation.c)
 *     RtlpComputeMergedAcl @ 0x140683EF8 (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x140684304 (RtlpCreateServerAcl.c)
 *     RtlIdnToUnicode @ 0x1406892F4 (RtlIdnToUnicode.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F52C (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x140690298 (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x14069079C (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x140690B80 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x140690C38 (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x140690E7C (SepCaptureOctetStringArray.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x14069180C (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepCreateSidValuesBlock @ 0x140692D48 (SepCreateSidValuesBlock.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x140693418 (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SepAddTokenLogonSession @ 0x14069364C (SepAddTokenLogonSession.c)
 *     NtFilterBootOption @ 0x140693BA4 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x140693FEC (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406943FC (SepSecureBootUpdateBcdDataForRule.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x14069479C (SeAdjustObjectAppContainerSecurity.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x14069492C (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140694AD0 (SepBuildObjectSecurityDescriptor.c)
 *     SepDuplicateClaimAttributes @ 0x140695A80 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140695D78 (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x140696138 (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x140696490 (SepReadSingleCap.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406994F8 (SmKmStoreFileMakeSecurityDescriptor.c)
 *     VmCreateMemoryRange @ 0x14069B2E4 (VmCreateMemoryRange.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14069BE9C (WdipSemLoadLocalGroupPolicy.c)
 *     IoWMIAllocateInstanceIds @ 0x14069C8A8 (IoWMIAllocateInstanceIds.c)
 *     IoWMISuggestInstanceName @ 0x14069CF14 (IoWMISuggestInstanceName.c)
 *     WmipAllocateSingleInstanceWnode @ 0x14069D1C8 (WmipAllocateSingleInstanceWnode.c)
 *     WmipGetSysIds @ 0x14069D690 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14069DE08 (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14069E1AC (WmipIncludeStaticNames.c)
 *     WmipQueryAllDataMultiple @ 0x14069E48C (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x14069E80C (WmipQuerySingleMultiple.c)
 *     WmipUnregisterEtwProvider @ 0x14069EF98 (WmipUnregisterEtwProvider.c)
 *     WmipGenerateBinaryMofNotification @ 0x14069F03C (WmipGenerateBinaryMofNotification.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A0764 (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwpLogMemInfoWs @ 0x1406A1FFC (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406A258C (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpSetPmcProfileSource @ 0x1406A2A78 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1406A2B88 (EtwpTraceHandle.c)
 *     EtwpAllocatePmcData @ 0x1406A4088 (EtwpAllocatePmcData.c)
 *     EtwpCapturePreviousRegistryData @ 0x1406A4724 (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1406A4824 (EtwpCaptureRegistryData.c)
 *     EtwpSendDbgId @ 0x1406A5450 (EtwpSendDbgId.c)
 *     EtwpTiQueryVad @ 0x1406A63DC (EtwpTiQueryVad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406A651C (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpEnumerateWorkingSet @ 0x1406A6DF0 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406A717C (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1406A7410 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1406A7568 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1406A7AC0 (EtwpProcessorRundown.c)
 *     EtwpReferenceStackLookasideList @ 0x1406A82E8 (EtwpReferenceStackLookasideList.c)
 *     EtwpUpdateStackTracing @ 0x1406A834C (EtwpUpdateStackTracing.c)
 *     EtwpAllocateEventNameFilter @ 0x1406A8494 (EtwpAllocateEventNameFilter.c)
 *     EtwpAllocatePayloadFilterData @ 0x1406A8854 (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x1406A88D8 (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x1406A8DE0 (EtwpCreatePerfectHashFunction.c)
 *     EtwpUpdatePidFilterData @ 0x1406A9280 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1406A931C (EtwpUpdateSchematizedFilterData.c)
 *     EtwpAddWinRtProviderToSession @ 0x1406A96BC (EtwpAddWinRtProviderToSession.c)
 *     EtwpEnableStackCaching @ 0x1406A99E4 (EtwpEnableStackCaching.c)
 *     EtwpPreserveLogger @ 0x1406A9E8C (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1406AA0AC (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1406AA194 (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1406AA60C (EtwpSavePersistedLoggersWorker.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA708 (EtwpSetSoftRestartInformation.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1406AAF50 (ExEnumerateSystemFirmwareTables.c)
 *     ExpWatchLicenseInfoWork @ 0x1406AC9EC (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1406ACE5C (NtDisplayString.c)
 *     ExEnableHandleTracing @ 0x1406AD3A4 (ExEnableHandleTracing.c)
 *     sub_1406AE414 @ 0x1406AE414 (sub_1406AE414.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AED54 (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     sub_1406AF038 @ 0x1406AF038 (sub_1406AF038.c)
 *     ExpParseFastCacheHelper @ 0x1406AF5FC (ExpParseFastCacheHelper.c)
 *     ExpConvertArcName @ 0x1406AFF50 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1406B0104 (ExpConvertSignatureName.c)
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
 *     ExpUnicodeStringToNonpagedWStr @ 0x1406B3228 (ExpUnicodeStringToNonpagedWStr.c)
 *     NtEnumerateBootEntries @ 0x1406B378C (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3D2C (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4D28 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1406B5050 (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1406B5444 (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1406B5644 (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406B5970 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1406B5BDC (NtTranslateFilePath.c)
 *     ExpAllocatePoolForNode @ 0x1406B5F40 (ExpAllocatePoolForNode.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406B6B08 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406B6F4C (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1406B71B8 (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1406B78B8 (ExpCovReadRequestBuffer.c)
 *     NtStartProfile @ 0x1406B823C (NtStartProfile.c)
 *     CMFAllocFn @ 0x1406B866C (CMFAllocFn.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B889C (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1406B8EA0 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 *     WheaAddErrorSource @ 0x1406BA3A4 (WheaAddErrorSource.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1406BA5DC (WheaRegisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1406BAFA8 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1406BB1F8 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1406BB4C4 (WheapPfaMemoryCheck.c)
 *     WheapIsSqmLoggerRunning @ 0x1406BBA94 (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406BBD24 (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetLoadSchemaEx @ 0x1406BBEC8 (ApiSetLoadSchemaEx.c)
 *     sub_1406BC200 @ 0x1406BC200 (sub_1406BC200.c)
 *     sub_1406BC5E0 @ 0x1406BC5E0 (sub_1406BC5E0.c)
 *     sub_1406BC848 @ 0x1406BC848 (sub_1406BC848.c)
 *     sub_1406BCAC0 @ 0x1406BCAC0 (sub_1406BCAC0.c)
 *     sub_1406BCE84 @ 0x1406BCE84 (sub_1406BCE84.c)
 *     sub_1406BD49C @ 0x1406BD49C (sub_1406BD49C.c)
 *     sub_1406BDB14 @ 0x1406BDB14 (sub_1406BDB14.c)
 *     sub_1406BDF30 @ 0x1406BDF30 (sub_1406BDF30.c)
 *     sub_1406BE8E0 @ 0x1406BE8E0 (sub_1406BE8E0.c)
 *     sub_1406BF0FC @ 0x1406BF0FC (sub_1406BF0FC.c)
 *     sub_1406BF444 @ 0x1406BF444 (sub_1406BF444.c)
 *     sub_1406BFA70 @ 0x1406BFA70 (sub_1406BFA70.c)
 *     sub_1406C0164 @ 0x1406C0164 (sub_1406C0164.c)
 *     sub_1406C04DC @ 0x1406C04DC (sub_1406C04DC.c)
 *     sub_1406C0744 @ 0x1406C0744 (sub_1406C0744.c)
 *     sub_1406C09AC @ 0x1406C09AC (sub_1406C09AC.c)
 *     sub_1406C0E50 @ 0x1406C0E50 (sub_1406C0E50.c)
 *     SddlpReAlloc @ 0x1406CC3F0 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x1406CC544 (SddlpUuidToString.c)
 *     AdtpBuildGuidString @ 0x1406D02A8 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1406D03D0 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1406D048C (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1406D05E0 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x1406D0734 (AdtpBuildMacStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1406D07D4 (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildRegistryValueString @ 0x1406D09CC (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1406D0D60 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1406D0F58 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1406D1244 (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x1406D13A8 (AdtpBuildUlongString.c)
 *     AdtpAppendString @ 0x1406D149C (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1406D1680 (AdtpBuildAccessesString.c)
 *     AdtpBuildUserAccountControlString @ 0x1406D1D94 (AdtpBuildUserAccountControlString.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1406D2738 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1406D280C (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x1406D28CC (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1406D2BC4 (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1406D2CAC (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1406D2D58 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1406D2E50 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1406D2FF8 (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1406D3138 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x1406D3224 (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1406D33E0 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1406D3524 (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1406D3604 (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x1406D3A28 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x1406D3FB4 (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x1406D4498 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x1406D48E0 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1406D4A80 (BiExportEfiBootManager.c)
 *     BiGetDeviceFromEfiPath @ 0x1406D4E9C (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x1406D5030 (BiGetFilePathFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D518C (BiGetObjectReferenceFromEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1406D5398 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1406D55CC (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1406D567C (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x1406D58FC (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1406D5A18 (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5E64 (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetDriveLayoutInformation @ 0x1406D6188 (SiGetDriveLayoutInformation.c)
 *     SiGetEfiSystemDevice @ 0x1406D646C (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1406D67C8 (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x1406D6AA4 (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x1406D6BC8 (SiGetBiosSystemPartition.c)
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
 *     _CmServiceFilterCallback @ 0x1406DBAC0 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceSiblings @ 0x1406DD82C (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406DDC68 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DF998 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFC6C (_PnpGetPropertiesSecurityDescriptor.c)
 *     _PnpMultiSzDeleteString @ 0x1406E0030 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0128 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x1406E06D0 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0C4C (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1AC8 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E1FD0 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2CD4 (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3658 (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x1406E4C1C (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x1406E4F50 (ArbQueryConflict.c)
 *     VhdiVerifyBootDisk @ 0x1406E54BC (VhdiVerifyBootDisk.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E6284 (ObGetSiloRootDirectoryPath.c)
 *     ObpGetSilosRootDirectory @ 0x1406E63A0 (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1406E6564 (RtlpLoadPolicyLanguageSpec.c)
 *     KdPullRemoteFile @ 0x1406F2368 (KdPullRemoteFile.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     ViThunkCreateSharedExportInformation @ 0x1406FDEAC (ViThunkCreateSharedExportInformation.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1406FE128 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfAvlInitializeTreeEx @ 0x1406FE23C (VfAvlInitializeTreeEx.c)
 *     IovpBuildDriverObjectList @ 0x140701188 (IovpBuildDriverObjectList.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140702A08 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407030B0 (ViInitializeLocalSystemDescriptor.c)
 *     VfInitVerifierComponents @ 0x140703300 (VfInitVerifierComponents.c)
 *     ViDdiDriverEntry @ 0x1407047B8 (ViDdiDriverEntry.c)
 *     ViAllocateContiguousMemory @ 0x140708620 (ViAllocateContiguousMemory.c)
 *     ViAllocateMapRegisterFile @ 0x1407087CC (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x140709C74 (ViHookDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14070A3DC (ViSpecialAllocateCommonBuffer.c)
 *     ViPendingDelayCompletion @ 0x14070D3B0 (ViPendingDelayCompletion.c)
 *     VfInitializeBranchTracing @ 0x14070ECEC (VfInitializeBranchTracing.c)
 *     VfThunkAddSpecialDriverThunks @ 0x14070F1D0 (VfThunkAddSpecialDriverThunks.c)
 *     ViThunkCreateThunkTable @ 0x14070F840 (ViThunkCreateThunkTable.c)
 *     ViThunkFindAllSpecialTables @ 0x14070F8C0 (ViThunkFindAllSpecialTables.c)
 *     VfTargetEtwRegister @ 0x14071002C (VfTargetEtwRegister.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x1407103E0 (ViTargetDriversAllocateVerifiedData.c)
 *     ViTargetTrackContiguousMemory @ 0x1407106E0 (ViTargetTrackContiguousMemory.c)
 *     ViFaultsAddAppNoDuplicates @ 0x140711268 (ViFaultsAddAppNoDuplicates.c)
 *     ViFaultsAddTagNoDuplicates @ 0x140711364 (ViFaultsAddTagNoDuplicates.c)
 *     VfDeadlockInitialize @ 0x140713DF4 (VfDeadlockInitialize.c)
 *     ViDeadlockKernelVerifierLookasideAllocate @ 0x1407154B4 (ViDeadlockKernelVerifierLookasideAllocate.c)
 *     VfSuspectDriversAllocateEntry @ 0x140715E70 (VfSuspectDriversAllocateEntry.c)
 *     VfSuspectExcludedDriversAllocateEntry @ 0x140716668 (VfSuspectExcludedDriversAllocateEntry.c)
 *     IovpSessionDataCreate @ 0x140717840 (IovpSessionDataCreate.c)
 *     VfIrpLogRecordEvent @ 0x14071946C (VfIrpLogRecordEvent.c)
 *     VfIrpLogRetrieveWmiData @ 0x140719644 (VfIrpLogRetrieveWmiData.c)
 *     ViCtxAllocateIsrContext @ 0x140719CCC (ViCtxAllocateIsrContext.c)
 *     VfGetVerifierInformation @ 0x140720F40 (VfGetVerifierInformation.c)
 *     HdlspAddLogEntry @ 0x140722ADC (HdlspAddLogEntry.c)
 *     HdlspSetBlueScreenInformation @ 0x140723F74 (HdlspSetBlueScreenInformation.c)
 *     ResFwpPageOutBackground @ 0x140727A6C (ResFwpPageOutBackground.c)
 *     CcInitializeBcbProfiler @ 0x140777304 (CcInitializeBcbProfiler.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     SepVariableInitialization @ 0x14078FC70 (SepVariableInitialization.c)
 *     SepInitSystemDacls @ 0x140791230 (SepInitSystemDacls.c)
 *     MmFreeLoaderBlock @ 0x140791ED4 (MmFreeLoaderBlock.c)
 *     KiInitializeMTRR @ 0x14079232C (KiInitializeMTRR.c)
 *     KiComputeNumaCosts @ 0x1407927E0 (KiComputeNumaCosts.c)
 *     KeStartAllProcessors @ 0x140792860 (KeStartAllProcessors.c)
 *     KiPerformGroupConfiguration @ 0x140793198 (KiPerformGroupConfiguration.c)
 *     KiAllocateCpuSetData @ 0x14079344C (KiAllocateCpuSetData.c)
 *     InitBootProcessor @ 0x1407937C4 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140794438 (Phase1InitializationDiscard.c)
 *     PopNetInitialize @ 0x140795FD0 (PopNetInitialize.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopCreateArcNames @ 0x140798AF8 (IopCreateArcNames.c)
 *     PipInitDeviceOverrideCache @ 0x1407990C4 (PipInitDeviceOverrideCache.c)
 *     PipInitComputerIds @ 0x140799740 (PipInitComputerIds.c)
 *     PipCreateComputerId @ 0x14079A240 (PipCreateComputerId.c)
 *     IopStoreArcInformation @ 0x14079A6CC (IopStoreArcInformation.c)
 *     IopInitializeBootDrivers @ 0x14079B23C (IopInitializeBootDrivers.c)
 *     IopInitializeBuiltinDriver @ 0x14079BB9C (IopInitializeBuiltinDriver.c)
 *     PipCreateEntry @ 0x14079C2E4 (PipCreateEntry.c)
 *     WmipInitializeSecurity @ 0x14079C7B4 (WmipInitializeSecurity.c)
 *     PpInitializeBootDDB @ 0x14079DA0C (PpInitializeBootDDB.c)
 *     PspInitPhase0 @ 0x14079E090 (PspInitPhase0.c)
 *     ExpInitSystemPhase1 @ 0x14079EB74 (ExpInitSystemPhase1.c)
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
 *     ExpandKnownDllsPath @ 0x1407A38A0 (ExpandKnownDllsPath.c)
 *     MiInitializeMirroring @ 0x1407A4334 (MiInitializeMirroring.c)
 *     MiCreateMemoryEvent @ 0x1407A45F0 (MiCreateMemoryEvent.c)
 *     MiInitializeDriverImages @ 0x1407A4F78 (MiInitializeDriverImages.c)
 *     MiInitializeCacheFlushing @ 0x1407A64D8 (MiInitializeCacheFlushing.c)
 *     MiInitializeSessionIds @ 0x1407A66AC (MiInitializeSessionIds.c)
 *     MiCreateEnclaveRegions @ 0x1407A682C (MiCreateEnclaveRegions.c)
 *     EmInitSystem @ 0x1407A6E60 (EmInitSystem.c)
 *     IopGetBootDiskInformationLite @ 0x1407A7560 (IopGetBootDiskInformationLite.c)
 *     EmpParseEntryTypes @ 0x1407A771C (EmpParseEntryTypes.c)
 *     EmpParseCallbacks @ 0x1407A7874 (EmpParseCallbacks.c)
 *     EmpParseRuleTerm @ 0x1407A7A90 (EmpParseRuleTerm.c)
 *     EmpParseRuleExpression @ 0x1407A7BE4 (EmpParseRuleExpression.c)
 *     EmpParseRules @ 0x1407A8094 (EmpParseRules.c)
 *     EmpParseStrings @ 0x1407A83F0 (EmpParseStrings.c)
 *     EmpParseTargetRules @ 0x1407A8604 (EmpParseTargetRules.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1407A8814 (EmpParseTargetRuleStringIndexList.c)
 *     EmpRuleParserStackPush @ 0x1407A8D50 (EmpRuleParserStackPush.c)
 *     BapdpProcessEDrvHintInfo @ 0x1407A9388 (BapdpProcessEDrvHintInfo.c)
 *     BapdpProcessFwUpdateResults @ 0x1407A9410 (BapdpProcessFwUpdateResults.c)
 *     BapdpProcessHSTIResults @ 0x1407A9498 (BapdpProcessHSTIResults.c)
 *     BapdpProcessWmdResults @ 0x1407A9520 (BapdpProcessWmdResults.c)
 *     BapdpProcessResumeInformation @ 0x1407A9604 (BapdpProcessResumeInformation.c)
 *     BapdpProcessBitlockerStatus @ 0x1407A96D0 (BapdpProcessBitlockerStatus.c)
 *     BapdpProcessSiData @ 0x1407A979C (BapdpProcessSiData.c)
 *     BapdpProcessBootMetadata @ 0x1407A9C58 (BapdpProcessBootMetadata.c)
 *     ExpWatchProductTypeInitialization @ 0x1407A9F80 (ExpWatchProductTypeInitialization.c)
 *     PspIumInitialize @ 0x1407AA3D0 (PspIumInitialize.c)
 *     MmInitializeMemoryLimits @ 0x1407AB404 (MmInitializeMemoryLimits.c)
 *     IoReportHalResourceUsage @ 0x1407AB540 (IoReportHalResourceUsage.c)
 *     IopInitializeResourceMap @ 0x1407AB6F0 (IopInitializeResourceMap.c)
 *     IopReportBootResources @ 0x1407ABA34 (IopReportBootResources.c)
 *     CmpInitializeTrustedInstallerSid @ 0x1407ABBA0 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeHardwareConfiguration @ 0x1407AC64C (CmpInitializeHardwareConfiguration.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x1407AC8B4 (CmpInitializeMachineDependentConfiguration.c)
 *     CmpSetSystemBiosInformation @ 0x1407ACD84 (CmpSetSystemBiosInformation.c)
 *     CmpSetVideoBiosInformation @ 0x1407AD088 (CmpSetVideoBiosInformation.c)
 *     CmpGetRegistryValue @ 0x1407AD7C0 (CmpGetRegistryValue.c)
 *     CmpInitializeSystemHive @ 0x1407AD830 (CmpInitializeSystemHive.c)
 *     CmInitSystem1 @ 0x1407ADA6C (CmInitSystem1.c)
 *     CmpInitializePreloadedHive @ 0x1407AE20C (CmpInitializePreloadedHive.c)
 *     CmpParseInfBuffer @ 0x1407AEC04 (CmpParseInfBuffer.c)
 *     CmpGetToken @ 0x1407AEEE8 (CmpGetToken.c)
 *     CmpAppendValue @ 0x1407AF174 (CmpAppendValue.c)
 *     CmpAppendLine @ 0x1407AF1F0 (CmpAppendLine.c)
 *     CmpAppendSection @ 0x1407AF270 (CmpAppendSection.c)
 *     CmGetSystemDriverList @ 0x1407AF6CC (CmGetSystemDriverList.c)
 *     MiBuildImportsForBootDrivers @ 0x1407B132C (MiBuildImportsForBootDrivers.c)
 *     BvgaSaveResources @ 0x1407B2128 (BvgaSaveResources.c)
 *     PoFxRegisterDebugger @ 0x1407B21AC (PoFxRegisterDebugger.c)
 *     PnpRegMultiSzToUnicodeStrings @ 0x1407B26B8 (PnpRegMultiSzToUnicodeStrings.c)
 *     SepInitializeSingletonAttributesStructures @ 0x1407B2E80 (SepInitializeSingletonAttributesStructures.c)
 *     PiAuCreateLocalSystemSecurityObject @ 0x1407B33F4 (PiAuCreateLocalSystemSecurityObject.c)
 *     PiAuCreateStandardSecurityObject @ 0x1407B375C (PiAuCreateStandardSecurityObject.c)
 *     PfSnInitializePrefetcher @ 0x1407B3DC8 (PfSnInitializePrefetcher.c)
 *     WheapInitializeErrorSourceTable @ 0x1407B4128 (WheapInitializeErrorSourceTable.c)
 *     InitializePagedPool @ 0x1407B47A0 (InitializePagedPool.c)
 *     CcInitializeVacbs @ 0x1407B499C (CcInitializeVacbs.c)
 *     ExpInitFastCache @ 0x1407B5348 (ExpInitFastCache.c)
 *     PspInitializeProtectedProcessParameters @ 0x1407B6040 (PspInitializeProtectedProcessParameters.c)
 *     PsInitializeQuotaSystem @ 0x1407B6714 (PsInitializeQuotaSystem.c)
 *     FsRtlInitSystem @ 0x1407B6884 (FsRtlInitSystem.c)
 *     FsRtlGetCompatibilityModeValue @ 0x1407B6BB0 (FsRtlGetCompatibilityModeValue.c)
 *     BootApplicationPersistentDataInitialize @ 0x1407B7218 (BootApplicationPersistentDataInitialize.c)
 *     SepLoadNgenLocations @ 0x1407B7D5C (SepLoadNgenLocations.c)
 *     SepRmDbInitialization @ 0x1407B868C (SepRmDbInitialization.c)
 *     PiLastGoodCopyKeyContents @ 0x1407B90B4 (PiLastGoodCopyKeyContents.c)
 *     IopFileUtilRename @ 0x1407B9164 (IopFileUtilRename.c)
 *     PopUmpoInitializeChannel @ 0x1407B93C4 (PopUmpoInitializeChannel.c)
 *     SeSecureBootRegisterPolicy @ 0x1407B9CA8 (SeSecureBootRegisterPolicy.c)
 *     MiInitializeRelocations @ 0x1407BA558 (MiInitializeRelocations.c)
 *     WheapCreatePerProcessorInfo @ 0x1407BAAE8 (WheapCreatePerProcessorInfo.c)
 *     PopInitPlatformSettings @ 0x1407BAB80 (PopInitPlatformSettings.c)
 *     ObpInitStackTrace @ 0x1407BAD00 (ObpInitStackTrace.c)
 *     EtwpReadConfigParameters @ 0x1407BAF90 (EtwpReadConfigParameters.c)
 *     ExpInitializeSvm @ 0x1407BB558 (ExpInitializeSvm.c)
 *     PnpInitializeDeviceEvents @ 0x1407BBB2C (PnpInitializeDeviceEvents.c)
 *     SaveNodeDistanceInformation @ 0x1407BC5F4 (SaveNodeDistanceInformation.c)
 *     PnpBusTypeGuidInitialize @ 0x1407BCA9C (PnpBusTypeGuidInitialize.c)
 *     MfgInitSystem @ 0x1407BD004 (MfgInitSystem.c)
 *     HeadlessInit @ 0x1407BD2D8 (HeadlessInit.c)
 *     CreateMiniNtBootKey @ 0x1407CCE70 (CreateMiniNtBootKey.c)
 *     CmpInitializeSystemBiosInformation @ 0x1407CD76C (CmpInitializeSystemBiosInformation.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 *     IopApplySystemPartitionProt @ 0x1407CE99C (IopApplySystemPartitionProt.c)
 *     PiLastGoodRevertCopyCallback @ 0x1407CEE78 (PiLastGoodRevertCopyCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x1407CEF34 (PiLastGoodRevertLastKnownDirectory.c)
 *     PipProcessPendingObjects @ 0x1407CF6C0 (PipProcessPendingObjects.c)
 *     KeQueryNumaGraph @ 0x1407CFA68 (KeQueryNumaGraph.c)
 *     KiInitializeCacheErrataSupport @ 0x1407D0270 (KiInitializeCacheErrataSupport.c)
 *     MiInitializeSharedUserData @ 0x1407D0468 (MiInitializeSharedUserData.c)
 *     sub_1407D22C0 @ 0x1407D22C0 (sub_1407D22C0.c)
 *     VhdiInitializeBootDisk @ 0x1407D2AF4 (VhdiInitializeBootDisk.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 *     VhdiQueryVolumeVhdFilePath @ 0x1407D32D0 (VhdiQueryVolumeVhdFilePath.c)
 *     SbpAddTransportToInstance @ 0x1407D36AC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407D3884 (SbpStartLanman.c)
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14000CA40 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x14000CA8C (ExpReleaseFastMutexContended.c)
 *     ExpAllocateBigPool @ 0x140011AD0 (ExpAllocateBigPool.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140012750 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012AF0 (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001BD40 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001BDA0 (KxWaitForLockOwnerShip.c)
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x14002D440 (PsBoostThreadIoEx.c)
 *     KeAbPostRelease @ 0x14006AEC0 (KeAbPostRelease.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C668 (KiAbQueueAutoBoostDpc.c)
 *     RtlCaptureStackBackTrace @ 0x140084730 (RtlCaptureStackBackTrace.c)
 *     MiAllocatePoolPages @ 0x14009DBEC (MiAllocatePoolPages.c)
 *     KiAbThreadInsertList @ 0x1400ACCF0 (KiAbThreadInsertList.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C7E28 (ExpAcquireFastMutexContended.c)
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14015964C (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTracePool @ 0x1401596BC (EtwTracePool.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140166E00 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x1401715C0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D39E0 (KiAcquireQueuedSpinLockInstrumented.c)
 *     MmAllocateSpecialPool @ 0x1401EBAE0 (MmAllocateSpecialPool.c)
 *     ExpUseSpecialPool @ 0x14022D10C (ExpUseSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExDeferredFreePool @ 0x1402557B0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14041BF20 (MiSessionPoolVector.c)
 *     VeAllocatePoolWithTagPriority @ 0x140701D78 (VeAllocatePoolWithTagPriority.c)
 */

PVOID __stdcall ExAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  size_t v4; // rbp
  POOL_TYPE v5; // edi
  __int16 v6; // dx
  __int64 ParentNode; // rcx
  int v8; // ebx
  __int64 v9; // rax
  ULONG v10; // esi
  unsigned __int64 v11; // r10
  unsigned int v12; // ebp
  unsigned int v13; // ebp
  _GENERAL_LOOKASIDE_POOL *v14; // rbp
  PSLIST_ENTRY v15; // rbx
  ULONG_PTR v16; // rbx
  ULONG_PTR v17; // r9
  unsigned __int64 v18; // r10
  int v19; // r9d
  int v20; // ebp
  __int64 v21; // r10
  __int64 v22; // r8
  unsigned int v23; // ebx
  int v24; // edx
  __int64 v25; // rdi
  int v26; // eax
  char v27; // bl
  ULONG_PTR v28; // rdx
  PVOID result; // rax
  struct _KPRCB *v30; // rdx
  __int64 v31; // rax
  _GENERAL_LOOKASIDE_POOL *PPNxPagedLookasideList; // rbp
  __int64 v33; // r9
  __int64 v34; // rax
  __int64 v35; // rbp
  ULONG_PTR *v36; // rbx
  bool v37; // zf
  ULONG_PTR PoolPages; // rax
  struct _FAST_MUTEX *v39; // rcx
  __int64 *v40; // rdx
  __int64 v41; // rcx
  __int64 **v42; // rax
  unsigned __int64 v43; // r8
  struct _KTHREAD *CurrentThread; // r10
  unsigned int AbEntrySummary; // edx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int SessionId; // eax
  __int16 v49; // ax
  unsigned __int8 CurrentIrql; // dl
  int v51; // eax
  _KDPC *v52; // rdx
  KIRQL v53; // r8
  struct _KTHREAD *v54; // rcx
  signed __int32 v55; // eax
  ULONG_PTR v56; // r8
  ULONG_PTR v57; // r9
  ULONG_PTR v58; // rax
  ULONG_PTR v59; // rax
  ULONG_PTR v60; // rdx
  char v61; // al
  _BYTE *v62; // rax
  __int64 v63; // rbp
  __int16 v64; // ax
  __int64 *v65; // rdx
  __int64 v66; // rcx
  __int64 **v67; // rax
  struct _KTHREAD *v68; // rax
  char v69; // cl
  KIRQL v70; // dl
  struct _LIST_ENTRY *v71; // r8
  volatile signed __int32 *v72; // rcx
  signed __int32 v73; // eax
  unsigned __int8 v74; // al
  _QWORD *v75; // rdx
  int v76; // eax
  __int64 v77; // r9
  int v78; // r8d
  __int64 v79; // r9
  unsigned int v80; // eax
  unsigned int v81; // eax
  unsigned int v82; // eax
  unsigned int v83; // ecx
  ULONG_PTR v84; // r8
  __int64 v85; // rcx
  char v86; // r8
  _BYTE *v87; // rcx
  unsigned int v88; // r9d
  int v89; // r9d
  __int64 AbOrphanedEntrySummary; // rax
  unsigned int v91; // ecx
  struct _FAST_MUTEX *SpecialPool; // rax
  unsigned __int64 v93; // r9
  __int64 v94; // rax
  unsigned int v95; // edi
  int v96; // edx
  int v97; // r8d
  __int64 v98; // r11
  __int64 v99; // r10
  unsigned int v100; // ebx
  __int64 v101; // r9
  int v102; // eax
  int v103; // r10d
  PVOID *PoolWithTag; // rax
  KIRQL v105; // al
  _KDPC *Dpc; // r9
  PVOID v107; // rax
  KIRQL v108; // al
  struct _LIST_ENTRY **p_Blink; // rax
  struct _LIST_ENTRY *v110; // rcx
  struct _LIST_ENTRY *v111; // r8
  _KEVENT *i; // rax
  _QWORD *v113; // rcx
  __int64 v114; // r8
  struct _LIST_ENTRY *Flink; // r10
  int v116; // edi
  KIRQL v117; // [rsp+30h] [rbp-B8h]
  unsigned int BugCheckParameter3; // [rsp+34h] [rbp-B4h]
  ULONG_PTR BugCheckParameter3_4; // [rsp+38h] [rbp-B0h]
  ULONG_PTR BugCheckParameter3_4a; // [rsp+38h] [rbp-B0h]
  unsigned __int8 BugCheckParameter3_4b; // [rsp+38h] [rbp-B0h]
  ULONG_PTR BugCheckParameter3_4c; // [rsp+38h] [rbp-B0h]
  int BugCheckParameter3_4d; // [rsp+38h] [rbp-B0h]
  unsigned __int8 BugCheckParameter3_4e; // [rsp+38h] [rbp-B0h]
  ULONG_PTR BugCheckParameter3_4f; // [rsp+38h] [rbp-B0h]
  __int64 v126; // [rsp+40h] [rbp-A8h]
  __int64 v127; // [rsp+40h] [rbp-A8h]
  PKGUARDED_MUTEX Mutex; // [rsp+48h] [rbp-A0h]
  struct _FAST_MUTEX *Mutexa; // [rsp+48h] [rbp-A0h]
  PKGUARDED_MUTEX Mutexb; // [rsp+48h] [rbp-A0h]
  PKGUARDED_MUTEX Mutexc; // [rsp+48h] [rbp-A0h]
  __int64 v132; // [rsp+50h] [rbp-98h]
  __int64 v133; // [rsp+50h] [rbp-98h]
  ULONG_PTR v134; // [rsp+58h] [rbp-90h]
  __int64 v135; // [rsp+58h] [rbp-90h]
  PVOID *v136; // [rsp+58h] [rbp-90h]
  unsigned int v137; // [rsp+60h] [rbp-88h]
  signed __int32 v138; // [rsp+68h] [rbp-80h]
  __int64 v139; // [rsp+70h] [rbp-78h]
  ULONG_PTR v140; // [rsp+70h] [rbp-78h]
  struct _LIST_ENTRY **v141; // [rsp+70h] [rbp-78h]
  int v142; // [rsp+78h] [rbp-70h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+80h] [rbp-68h] BYREF
  int v144; // [rsp+98h] [rbp-50h]
  struct _KLOCK_QUEUE_HANDLE v145; // [rsp+A0h] [rbp-48h] BYREF
  struct _KLOCK_QUEUE_HANDLE v146; // [rsp+B8h] [rbp-30h] BYREF
  __int64 retaddr; // [rsp+E8h] [rbp+0h]
  unsigned int v148; // [rsp+F0h] [rbp+8h]
  int v149; // [rsp+F0h] [rbp+8h]
  int v150; // [rsp+F8h] [rbp+10h]
  int v151; // [rsp+108h] [rbp+20h]
  __int64 v152; // [rsp+108h] [rbp+20h]
  char v153; // [rsp+108h] [rbp+20h]
  char v154; // [rsp+108h] [rbp+20h]
  unsigned __int8 v155; // [rsp+108h] [rbp+20h]
  unsigned int v156; // [rsp+108h] [rbp+20h]
  unsigned int v157; // [rsp+108h] [rbp+20h]
  struct _KPRCB *CurrentPrcb; // [rsp+108h] [rbp+20h]

  v150 = NumberOfBytes;
  v148 = PoolType;
  v4 = NumberOfBytes;
  v5 = PoolType;
  if ( (PoolType & 0x44) == 0x44 )
  {
    v5 = PoolType & 0xFFFFFFFB;
    v148 = PoolType & 0xFFFFFFFB;
  }
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
    v9 = MiSessionPoolVector(0x140000000uLL, (unsigned int)ExpPoolFlags);
LABEL_5:
    v126 = v9;
    if ( (v5 & 1) != 0 )
      goto LABEL_6;
    goto LABEL_38;
  }
  v9 = PoolVector[0];
  v126 = PoolVector[0];
LABEL_38:
  if ( (v5 & 0x200) == 0 )
  {
    if ( (v6 & 0x400) != 0 )
    {
      v5 |= 0x200u;
      v148 = v5;
    }
    else
    {
      v126 = v9 + 4416;
    }
  }
LABEL_6:
  if ( (v6 & 8) != 0 )
  {
    if ( (v5 & 0x80000080) == 0 )
      return (PVOID)VeAllocatePoolWithTagPriority(v5, v4, Tag, HighPoolPriority, retaddr);
    v5 &= ~0x80u;
    v148 = v5;
  }
  v10 = Tag & 0x7FFFFFFF;
  if ( !v10 )
    v10 = 811884866;
  v11 = 2LL;
  if ( !MmSpecialPoolTag || !ExpUseSpecialPool(v4, v10) )
  {
LABEL_10:
    if ( v4 > 0xFE0 )
    {
      result = (PVOID)ExpAllocateBigPool(0LL, v5, v4, v10, 0);
      if ( result )
        return result;
      goto LABEL_260;
    }
    if ( !v4 )
    {
      LODWORD(v4) = 1;
      v150 = 1;
    }
    v12 = v4 + 31;
    if ( (v5 & 4) != 0 )
    {
      ParentNode = (unsigned int)ExpCacheLineSize;
      v80 = ExpCacheLineSize + ((v150 + 31) & 0xFFFFFFF0) - 1;
      if ( ExpCacheLineSize == 64 )
        v81 = v80 >> 6;
      else
        v81 = v80 / ExpCacheLineSize;
      v82 = ExpCacheLineSize * (v81 + 1);
      if ( v82 > 0xFE0 )
      {
        v5 &= ~4u;
        v148 = v5;
      }
      else
      {
        v12 = v82;
      }
    }
    v13 = v12 >> 4;
    v137 = v13;
    if ( v8 )
    {
      if ( (v5 & 0x20) != 0 )
      {
        if ( v13 <= ExpSessionPoolSmallLists )
        {
          v14 = (_GENERAL_LOOKASIDE_POOL *)(((unsigned __int64)v13 << 7) + ExpSessionPoolLookaside - 128);
          ++v14->TotalAllocates;
          v15 = RtlpInterlockedPopEntrySList(&v14->ListHead);
          if ( v15 )
            goto LABEL_19;
          v13 = v137;
          v11 = 2LL;
        }
      }
      else if ( v5 >= NonPagedPool )
      {
        if ( v13 <= 0x20 )
        {
          v14 = &KeGetCurrentPrcb()->PPNPagedLookasideList[v13 + 31];
          ++v14->TotalAllocates;
          v15 = RtlpInterlockedPopEntrySList(&v14->ListHead);
          if ( v15 )
          {
LABEL_19:
            v16 = (ULONG_PTR)&v15[-1];
            v134 = v16;
            v17 = *(_QWORD *)(v16 + 8);
            if ( v17 != (v16 ^ ExpPoolQuotaCookie) )
              KeBugCheckEx(0x19u, 0xEuLL, v16, v17, v16 ^ ExpPoolQuotaCookie);
            ++v14->AllocateMisses;
            *(_BYTE *)(v16 + 3) = v5 & 0x6D | 2;
            goto LABEL_21;
          }
          v13 = v137;
          v11 = 2LL;
        }
        if ( (unsigned __int16)KeNumberNodes <= 1u )
        {
          v76 = ExpNumberOfPagedPools;
LABEL_115:
          BugCheckParameter3 = 1;
          LODWORD(v77) = 1;
          if ( v76 != 1 )
          {
            ParentNode = (unsigned int)ExpNumberOfPagedPools;
            v77 = (unsigned int)(ExpPoolIndex + 1);
            if ( (unsigned int)v77 > ExpNumberOfPagedPools )
              v77 = 1LL;
            v78 = v77;
            ExpPoolIndex = v77;
            do
            {
              if ( !*(_QWORD *)(ExpPagedPoolDescriptor[v77] + 16) )
                break;
              v77 = (unsigned int)(v77 + 1);
              if ( (unsigned int)v77 > ExpNumberOfPagedPools )
                v77 = 1LL;
            }
            while ( (_DWORD)v77 != v78 );
            BugCheckParameter3 = v77;
          }
          v126 = ExpPagedPoolDescriptor[(unsigned int)v77];
          goto LABEL_49;
        }
        ParentNode = (__int64)KeGetCurrentPrcb()->ParentNode;
        v76 = ExpNumberOfPagedPools;
        v88 = *(unsigned __int16 *)(ParentNode + 146);
        if ( v88 >= ExpNumberOfPagedPools )
          goto LABEL_115;
        BugCheckParameter3 = v88 + 1;
        ParentNode = ExpPagedPoolDescriptor[v88 + 1];
        v126 = ParentNode;
LABEL_49:
        v142 = 0;
        v33 = v5 & 1;
        v34 = v126;
        v35 = v126 + 16 * (v13 - 1 + 20LL);
        v139 = v35;
        while ( 1 )
        {
          v36 = (ULONG_PTR *)v35;
          do
          {
            if ( (ULONG_PTR *)*v36 == v36 )
              goto LABEL_52;
            v43 = v34 + 8;
            Mutexa = (struct _FAST_MUTEX *)(v34 + 8);
            if ( v33 )
            {
              CurrentThread = KeGetCurrentThread();
              BugCheckParameter3_4a = (ULONG_PTR)CurrentThread;
              if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
                KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, v43, KeGetCurrentIrql(), 0LL);
              --CurrentThread->SpecialApcDisable;
              if ( CurrentThread->AbEntrySummary )
              {
LABEL_66:
                AbEntrySummary = CurrentThread->AbEntrySummary;
                _BitScanForward((unsigned int *)&v46, AbEntrySummary);
                v144 = v46;
                CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v46);
                v47 = 96 * v46 + 800;
                v37 = (struct _KTHREAD *)((char *)CurrentThread + v47) == 0LL;
                ParentNode = (__int64)CurrentThread + v47;
                v152 = ParentNode;
                if ( !v37 )
                {
                  if ( v43 < qword_140326910 || v43 >= qword_140326910 + 0x8000000000LL )
                  {
                    SessionId = -1;
                  }
                  else
                  {
                    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
                    v43 = (unsigned __int64)Mutexa;
                    CurrentThread = (struct _KTHREAD *)BugCheckParameter3_4a;
                    ParentNode = v152;
                  }
                  *(_DWORD *)(ParentNode + 40) = SessionId;
                  *(_QWORD *)(ParentNode + 32) = v43 & 0x7FFFFFFFFFFFFFFCLL;
                  goto LABEL_70;
                }
              }
              else
              {
                if ( CurrentThread->AbOrphanedEntrySummary )
                {
                  AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
                  CurrentThread->AbOrphanedEntrySummary = 0;
                  CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
                  goto LABEL_66;
                }
                v152 = 0LL;
                if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
                {
                  EtwTraceAutoBoostEntryExhaustion((__int64)CurrentThread, v43);
                  v43 = (unsigned __int64)Mutexa;
                  CurrentThread = (struct _KTHREAD *)BugCheckParameter3_4a;
                }
              }
              _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
LABEL_70:
              v49 = CurrentThread->SpecialApcDisable + 1;
              CurrentThread->SpecialApcDisable = v49;
              if ( !v49
                && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
              {
                KiCheckForKernelApcDelivery(ParentNode);
                v43 = (unsigned __int64)Mutexa;
              }
              CurrentIrql = KeGetCurrentIrql();
              BugCheckParameter3_4b = CurrentIrql;
              __writecr8(1uLL);
              if ( !_interlockedbittestandreset((volatile signed __int32 *)v43, 0) )
              {
                ExpAcquireFastMutexContended(v43, v152);
                v43 = (unsigned __int64)Mutexa;
                CurrentIrql = BugCheckParameter3_4b;
              }
              if ( v152 )
                *(_BYTE *)(v152 + 26) |= 1u;
              *(_QWORD *)(v43 + 8) = KeGetCurrentThread();
              v51 = CurrentIrql;
              v52 = 0LL;
              *(_DWORD *)(v43 + 48) = v51;
              v53 = 0;
              v54 = KeGetCurrentThread();
              BugCheckParameter3_4c = (ULONG_PTR)v54;
              v153 = 0;
              if ( PspAlwaysTrackIoBoosting )
              {
                v153 = 1;
                PoolWithTag = (PVOID *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
                v136 = PoolWithTag;
                if ( PoolWithTag )
                {
                  memset(PoolWithTag, 0, 0x70uLL);
                  RtlCaptureStackBackTrace(1u, 0xAu, v136 + 2, 0LL);
                  v136[12] = KeGetCurrentThread();
                  v136[13] = 0LL;
                }
                v105 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter3_4c + 1832));
                v54 = (struct _KTHREAD *)BugCheckParameter3_4c;
                v53 = v105;
                v52 = (_KDPC *)v136;
              }
              v55 = _InterlockedIncrement((volatile signed __int32 *)&v54[1].Timer.DueTime);
              v138 = v55;
              if ( v153 )
              {
                if ( v52 )
                {
                  Dpc = v54[1].Timer.Dpc;
                  if ( *(struct _KTHREAD **)&Dpc->TargetInfoAsUlong != (struct _KTHREAD *)&v54[1].Timer.TimerListEntry.Blink )
                    __fastfail(3u);
                  *(_QWORD *)&v52->TargetInfoAsUlong = (char *)v54 + 1800;
                  v52->DpcListEntry.Next = (struct _SINGLE_LIST_ENTRY *)Dpc;
                  *(_QWORD *)&Dpc->TargetInfoAsUlong = v52;
                  v54[1].Timer.Dpc = v52;
                }
                KeReleaseSpinLock((PKSPIN_LOCK)&v54[1].WaitBlock[0].WaitListEntry.Blink, v53);
                v55 = v138;
                v54 = (struct _KTHREAD *)BugCheckParameter3_4c;
              }
              if ( v55 == 1 && v54->AbWaitEntryCount )
              {
                BugCheckParameter3_4e = KeGetCurrentIrql();
                __writecr8(2uLL);
                CurrentPrcb = KeGetCurrentPrcb();
                if ( (unsigned int)KiAbThreadInsertList(
                                     (__int64)v54,
                                     &CurrentPrcb->AbPropagateBoostsList.Next,
                                     &v54->PropagateBoostsEntry.Next) )
                  KiAbQueueAutoBoostDpc((__int64)CurrentPrcb);
                __writecr8(BugCheckParameter3_4e);
              }
              goto LABEL_81;
            }
            LockHandle.LockQueue.Lock = (unsigned __int64 *volatile)(v34 + 8);
            LockHandle.LockQueue.Next = 0LL;
            v74 = KeGetCurrentIrql();
            __writecr8(v11);
            LockHandle.OldIrql = v74;
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              KiAcquireQueuedSpinLockInstrumented((__int64)&LockHandle, (volatile __int64 *)v43);
            }
            else
            {
              v75 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)v43, (__int64)&LockHandle);
              if ( !v75 )
                goto LABEL_82;
              KxWaitForLockOwnerShip((__int64)&LockHandle, v75);
            }
LABEL_81:
            v33 = v5 & 1;
LABEL_82:
            if ( (ULONG_PTR *)*v36 != v36 )
            {
              v56 = *v36;
              v57 = *(_QWORD *)(*(_QWORD *)*v36 + 8LL);
              if ( v57 != *v36 || **(_QWORD **)(v56 + 8) != v56 )
                KeBugCheckEx(0x19u, 3uLL, v56, v57, **(_QWORD **)(v56 + 8));
              v58 = *(_QWORD *)v56;
              if ( *(ULONG_PTR **)(v56 + 8) != v36 || *(_QWORD *)(v58 + 8) != v56 )
                __fastfail(3u);
              *v36 = v58;
              *(_QWORD *)(v58 + 8) = v36;
              v16 = v56 - 16;
              v59 = *(unsigned __int8 *)(v56 - 16 + 1);
              v134 = v56 - 16;
              if ( (_DWORD)v59 != BugCheckParameter3 )
                KeBugCheckEx(0x19u, 0x23uLL, v59, BugCheckParameter3, v56 - 16);
              if ( (unsigned __int8)*(_WORD *)(v16 + 2) == v137 )
              {
                v63 = v126;
              }
              else
              {
                if ( *(_BYTE *)v16 )
                {
                  *(_BYTE *)(v16 + 2) -= v137;
                  v60 = v56 - 16;
                  v61 = *(_BYTE *)(v16 + 2);
                  v16 += 16LL * (unsigned __int8)*(_WORD *)(v16 + 2);
                  v134 = v16;
                  *(_BYTE *)v16 = v61;
                  v62 = (_BYTE *)(v16 + 16LL * v137);
                  if ( ((unsigned __int16)v62 & 0xFFF) != 0 )
                    *v62 = v137;
                }
                else
                {
                  v86 = *(_BYTE *)(v16 + 2) - v137;
                  v60 = v16 + 16LL * v137;
                  *(_BYTE *)(v60 + 2) = v86;
                  v87 = (_BYTE *)(v60 + 16LL * (unsigned __int8)*(_WORD *)(v60 + 2));
                  *(_BYTE *)v60 = v137;
                  if ( ((unsigned __int16)v87 & 0xFFF) != 0 )
                    *v87 = v86;
                }
                *(_BYTE *)(v16 + 2) = v137;
                v63 = v126;
                *(_BYTE *)(v16 + 1) = BugCheckParameter3;
                *(_BYTE *)(v60 + 3) = 0;
                v64 = *(_WORD *)(v60 + 2);
                *(_DWORD *)(v60 + 4) = 1701147206;
                *(_BYTE *)(v60 + 1) = BugCheckParameter3;
                if ( (_BYTE)v64 != 1 )
                {
                  v65 = (__int64 *)(v60 + 16);
                  v66 = v126 + 16 * ((unsigned int)(unsigned __int8)v64 - 1 + 20LL);
                  v67 = *(__int64 ***)(v66 + 8);
                  if ( *v67 != (__int64 *)v66 )
                    __fastfail(3u);
                  *v65 = v66;
                  v65[1] = (__int64)v67;
                  *v67 = v65;
                  *(_QWORD *)(v66 + 8) = v65;
                }
              }
              *(_BYTE *)(v16 + 3) = v5 & 0x6D | 2;
              if ( v5 < NonPagedPool )
              {
                memset((void *)(v16 + 16), 0, 16LL * (unsigned __int8)*(_WORD *)(v16 + 2) - 16);
                *(_DWORD *)(v16 + 4) = v10;
              }
              if ( (v5 & 1) != 0 )
              {
                v68 = KeGetCurrentThread();
                v69 = 0;
                v70 = 0;
                Mutexb = (PKGUARDED_MUTEX)v68;
                v71 = 0LL;
                v154 = 0;
                v117 = 0;
                if ( PspAlwaysTrackIoBoosting )
                {
                  v154 = 1;
                  v107 = ExAllocatePoolWithTag(NonPagedPoolNx, 0x70uLL, 0x736F6F42u);
                  BugCheckParameter3_4f = (ULONG_PTR)v107;
                  if ( v107 )
                  {
                    memset(v107, 0, 0x70uLL);
                    RtlCaptureStackBackTrace(1u, 0xAu, (PVOID *)(BugCheckParameter3_4f + 16), 0LL);
                    *(_QWORD *)(BugCheckParameter3_4f + 96) = KeGetCurrentThread();
                    *(_QWORD *)(BugCheckParameter3_4f + 104) = 0LL;
                  }
                  v108 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)&Mutexb[32].Event.Header.WaitListHead.Blink);
                  v69 = 1;
                  v70 = v108;
                  v71 = (struct _LIST_ENTRY *)BugCheckParameter3_4f;
                  v117 = v108;
                  v68 = (struct _KTHREAD *)Mutexb;
                }
                if ( v68[1].Timer.DueTime.LowPart )
                {
                  _InterlockedDecrement((volatile signed __int32 *)&v68[1].Timer.DueTime);
                  if ( !v69 )
                    goto LABEL_102;
                  if ( v68[1].Timer.DueTime.LowPart )
                  {
                    if ( v71 )
                    {
                      Flink = v68[1].WaitBlock[0].WaitListEntry.Flink;
                      if ( (unsigned int *)Flink->Flink != &v68[1].Timer.Processor )
                        __fastfail(3u);
                      v71->Flink = (struct _LIST_ENTRY *)&v68[1].Timer.Processor;
                      v71->Blink = Flink;
                      Flink->Flink = v71;
                      v68[1].WaitBlock[0].WaitListEntry.Flink = v71;
                    }
                  }
                  else
                  {
                    if ( v71 )
                    {
                      ExFreePoolWithTag(v71, 0x736F6F42u);
                      v68 = (struct _KTHREAD *)Mutexb;
                    }
                    p_Blink = &v68[1].Timer.TimerListEntry.Blink;
                    v141 = p_Blink;
                    while ( *p_Blink != (struct _LIST_ENTRY *)p_Blink )
                    {
                      v110 = *p_Blink;
                      v111 = (*p_Blink)->Flink;
                      if ( (struct _LIST_ENTRY **)(*p_Blink)->Blink != p_Blink || v111->Blink != v110 )
                        __fastfail(3u);
                      *p_Blink = v111;
                      v111->Blink = (struct _LIST_ENTRY *)p_Blink;
                      ExFreePoolWithTag(v110, 0x736F6F42u);
                      p_Blink = v141;
                    }
                    for ( i = &Mutexb[32].Event; *(_KEVENT **)&i->Header.Lock != i; i = &Mutexb[32].Event )
                    {
                      v113 = *(_QWORD **)&i->Header.Lock;
                      v114 = **(_QWORD **)&i->Header.Lock;
                      if ( *(_KEVENT **)(*(_QWORD *)&i->Header.Lock + 8LL) != i || *(_QWORD **)(v114 + 8) != v113 )
                        __fastfail(3u);
                      *(_QWORD *)&i->Header.Lock = v114;
                      *(_QWORD *)(v114 + 8) = i;
                      ExFreePoolWithTag(v113, 0x736F6F42u);
                    }
                    v68 = (struct _KTHREAD *)Mutexb;
                    v69 = v154;
                    v70 = v117;
                  }
                }
                if ( v69 )
                  KeReleaseSpinLock((PKSPIN_LOCK)&v68[1].WaitBlock[0].WaitListEntry.Blink, v70);
LABEL_102:
                v72 = (volatile signed __int32 *)(v63 + 8);
                v155 = *(_BYTE *)(v63 + 56);
                *(_QWORD *)(v63 + 16) = 0LL;
                v73 = _InterlockedCompareExchange((volatile signed __int32 *)(v63 + 8), 1, 0);
                if ( v73 )
                {
                  ExpReleaseFastMutexContended(v72, v73);
                  v72 = (volatile signed __int32 *)(v63 + 8);
                }
                __writecr8(v155);
                KeAbPostRelease((ULONG_PTR)v72);
              }
              else
              {
                KeReleaseInStackQueuedSpinLock(&LockHandle);
              }
              _InterlockedIncrement((volatile signed __int32 *)(v63 + 64));
              _InterlockedExchangeAdd64(
                (volatile signed __int64 *)(v63 + 88),
                16LL * (unsigned __int8)*(_WORD *)(v16 + 2));
LABEL_21:
              v18 = 16LL * (unsigned __int8)*(_WORD *)(v16 + 2);
              *(_DWORD *)(v16 + 4) = v10;
              Mutex = (PKGUARDED_MUTEX)v18;
              if ( v10 == PoolHitTag )
                __debugbreak();
              if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
                EtwTracePool(0xE20u, v5, v10, v16 + 16, v18);
              v19 = v5 & 0x20;
              v151 = v19;
              if ( (v5 & 0x20) != 0 )
              {
                v22 = ExpSessionPoolTrackTable;
                v20 = ExpSessionPoolTrackTableMask;
                v21 = ExpSessionPoolTrackTableSize;
              }
              else
              {
                v20 = PoolTrackTableMask;
                v21 = PoolTrackTableSize;
                v22 = (__int64)*(&ExPoolTagTables + KeGetPcr()->Prcb.Number);
              }
              v132 = v21;
              BugCheckParameter3_4 = v22;
              v23 = v20 & ((40543 * v10) ^ ((40543 * (unsigned __int64)v10) >> 32));
              v24 = v23;
              while ( 1 )
              {
                v25 = 40LL * v23;
                v26 = *(_DWORD *)(v22 + v25);
                if ( v26 == v10 )
                {
                  v27 = v148;
                  if ( (v148 & 1) != 0 )
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v22 + v25 + 24));
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + v25 + 32), (unsigned __int64)Mutex);
                  }
                  else
                  {
                    _InterlockedIncrement((volatile signed __int32 *)(v22 + v25 + 4));
                    _InterlockedExchangeAdd64((volatile signed __int64 *)(v22 + v25 + 16), (unsigned __int64)Mutex);
                  }
                  goto LABEL_34;
                }
                if ( v26 )
                  goto LABEL_30;
                if ( !v19 )
                {
                  v89 = *(_DWORD *)(v25 + PoolTrackTable);
                  if ( v89 )
                  {
                    *(_DWORD *)(v22 + 40LL * v23) = v89;
                    v19 = v151;
                    continue;
                  }
                  v19 = v151;
                }
                if ( v23 == v21 - 1 )
                {
LABEL_30:
                  v23 = v20 & (v23 + 1);
                  if ( v23 == v24 )
                  {
                    v27 = v148;
                    ExpInsertPoolTrackerExpansion(v10, (unsigned __int64)Mutex, v148);
LABEL_34:
                    v28 = v134;
                    if ( (v27 & 4) != 0 )
                    {
                      *(_BYTE *)(v134 + 3) &= ~4u;
                      v83 = (ExpCacheLineSize - 1) & (-16 - v134);
                      if ( v83 )
                      {
                        v84 = v134 + v83;
                        v85 = (__int64)v83 >> 4;
                        *(_BYTE *)v84 = v85;
                        *(_BYTE *)(v84 + 2) = *(_BYTE *)(v134 + 2) - v85;
                        *(_BYTE *)(v84 + 1) = *(_BYTE *)(v134 + 1);
                        *(_BYTE *)(v84 + 3) = *(_BYTE *)(v134 + 3) | 4;
                        *(_DWORD *)(v84 + 4) = *(_DWORD *)(v134 + 4);
                        if ( (unsigned __int8)*(_WORD *)v84 > 1u )
                          *(_QWORD *)(v134 + 16) = ExpPoolQuotaCookie ^ v84;
                        v28 = v84;
                      }
                    }
                    result = (PVOID)(v28 + 16);
                    *(_QWORD *)(v28 + 16) = 0LL;
                    return result;
                  }
                }
                else if ( v19 )
                {
                  _InterlockedCompareExchange((volatile signed __int32 *)(v22 + v25), v10, 0);
                }
                else
                {
                  KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v146);
                  if ( !*(_DWORD *)(v25 + PoolTrackTable) )
                  {
                    *(_DWORD *)(v25 + PoolTrackTable) = v10;
                    *(_DWORD *)(BugCheckParameter3_4 + 40LL * v23) = v10;
                  }
                  KeReleaseInStackQueuedSpinLock(&v146);
                  v24 = v20 & ((40543 * v10) ^ ((40543 * (unsigned __int64)v10) >> 32));
                  v22 = BugCheckParameter3_4;
                  v19 = v151;
                  v21 = v132;
                }
              }
            }
            if ( v33 )
            {
              PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
              KeReleaseGuardedMutex(Mutexa);
            }
            else
            {
              KeReleaseInStackQueuedSpinLock(&LockHandle);
            }
            v34 = v126;
            v33 = v5 & 1;
LABEL_52:
            v36 += 2;
            v37 = v36 == (ULONG_PTR *)(v34 + 4416);
            v34 = v126;
            v11 = 2LL;
          }
          while ( !v37 );
          PoolPages = MiAllocatePoolPages(v5 & 0x80000221, 0x1000uLL);
          v134 = PoolPages;
          v16 = PoolPages;
          if ( PoolPages )
          {
            if ( v5 < NonPagedPool )
            {
              memset((void *)(PoolPages + 16), 0, 16 * v137 - 16);
              *(_DWORD *)(v16 + 4) = v10;
            }
            *(_DWORD *)v16 = 0;
            *(_BYTE *)(v16 + 1) = BugCheckParameter3;
            *(_BYTE *)(v16 + 2) = v137;
            *(_BYTE *)(v16 + 3) = v5 & 0x6D | 2;
            v140 = v16 + 16LL * v137;
            *(_DWORD *)v140 = 0;
            *(_BYTE *)(v140 + 1) = BugCheckParameter3;
            *(_BYTE *)(v140 + 2) = -(char)v137;
            *(_BYTE *)v140 = v137;
            _InterlockedIncrement64((volatile signed __int64 *)(v126 + 72));
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v126 + 88), 16 * v137);
            if ( *(_BYTE *)(v140 + 2) != 1 )
            {
              v39 = (struct _FAST_MUTEX *)(v126 + 8);
              if ( (v5 & 1) != 0 )
              {
                ExAcquireFastMutex(v39);
                PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 0, 0, 0LL);
              }
              else
              {
                KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v39, &LockHandle);
              }
              v40 = (__int64 *)(v140 + 16);
              v41 = v126 + 16 * (256 - v137 - 1 + 20LL);
              v42 = *(__int64 ***)(v41 + 8);
              if ( *v42 != (__int64 *)v41 )
                __fastfail(3u);
              *v40 = v41;
              *(_QWORD *)(v140 + 24) = v42;
              *v42 = v40;
              *(_QWORD *)(v41 + 8) = v40;
              if ( (v5 & 1) == 0 )
              {
                KeReleaseInStackQueuedSpinLock(&LockHandle);
                _InterlockedIncrement((volatile signed __int32 *)(v126 + 64));
                goto LABEL_21;
              }
              PsBoostThreadIoEx((__int64)KeGetCurrentThread(), 1, 0, 0LL);
              KeReleaseGuardedMutex((PKGUARDED_MUTEX)(v126 + 8));
            }
            _InterlockedIncrement((volatile signed __int32 *)(v126 + 64));
            goto LABEL_21;
          }
          if ( ++v142 != 1 || (ExpPoolFlags & 0x100) == 0 )
          {
            v4 = 4096LL;
LABEL_260:
            ++ExPoolFailures;
            if ( (v5 & 2) != 0 )
            {
              v116 = v5 & 0x200;
              KeBugCheckEx(
                0x41u,
                v4,
                (unsigned int)qword_14033B908[552 * (v116 == 0)] - (unsigned int)qword_14033B948[552 * (v116 == 0)],
                (unsigned int)qword_14033B910[552 * (v116 == 0)] - (unsigned int)qword_14033B950[552 * (v116 == 0)],
                0LL);
            }
            if ( (v5 & 0x10) != 0 )
              RtlRaiseStatus(-1073741670);
            return 0LL;
          }
          ExDeferredFreePool(v126, 0LL);
          v34 = v126;
          v33 = v5 & 1;
          v35 = v139;
          v11 = 2LL;
        }
      }
    }
    else
    {
      if ( v13 <= 0x20 )
      {
        v30 = KeGetCurrentPrcb();
        v31 = v13 - 1;
        if ( (v5 & 0x200) != 0 )
          PPNxPagedLookasideList = v30->PPNxPagedLookasideList;
        else
          PPNxPagedLookasideList = v30->PPNPagedLookasideList;
        v14 = &PPNxPagedLookasideList[v31];
        ++v14->TotalAllocates;
        v15 = RtlpInterlockedPopEntrySList(&v14->ListHead);
        if ( v15 )
          goto LABEL_19;
        v13 = v137;
        v11 = 2LL;
      }
      if ( (unsigned int)ExpNumberOfNonPagedPools > 1 )
      {
        ParentNode = (__int64)KeGetCurrentPrcb()->ParentNode;
        v79 = *(unsigned __int16 *)(ParentNode + 146);
        BugCheckParameter3 = v79;
        if ( (unsigned int)v79 >= ExpNumberOfNonPagedPools )
        {
          v79 = (unsigned int)(ExpNumberOfNonPagedPools - 1);
          BugCheckParameter3 = ExpNumberOfNonPagedPools - 1;
        }
        v126 = ExpNonPagedPoolDescriptor[v79];
        if ( (v5 & 0x200) == 0 )
          v126 = ExpNonPagedPoolDescriptor[v79] + 4416;
        goto LABEL_49;
      }
    }
    BugCheckParameter3 = 0;
    goto LABEL_49;
  }
  v91 = v5;
  v156 = v5;
  if ( (v5 & 0x21) == 0x20 )
  {
    v91 = v5 & 0xFFFFFFDF;
    v156 = v5 & 0xFFFFFFDF;
  }
  SpecialPool = (struct _FAST_MUTEX *)MmAllocateSpecialPool(v4, v10, v91, v11);
  Mutexc = SpecialPool;
  v93 = (unsigned __int64)SpecialPool;
  if ( !SpecialPool )
  {
    v11 = 2LL;
    goto LABEL_10;
  }
  if ( (v5 & 0x40) != 0 )
    v4 -= 8LL;
  if ( v5 < NonPagedPool )
  {
    memset(SpecialPool, 0, v4);
    v93 = (unsigned __int64)Mutexc;
  }
  if ( v10 == PoolHitTag )
    __debugbreak();
  v94 = DWORD1(PerfGlobalGroupMask);
  v95 = v156;
  if ( (BYTE4(PerfGlobalGroupMask) & 0x41) != 0 )
    EtwTracePool(0xE20u, v156, v10, v93, v4);
  v96 = v156 & 0x20;
  v149 = v96;
  if ( (v156 & 0x20) != 0 )
  {
    v99 = ExpSessionPoolTrackTable;
    v97 = ExpSessionPoolTrackTableMask;
    v98 = ExpSessionPoolTrackTableSize;
  }
  else
  {
    LODWORD(v94) = KeGetPcr()->Prcb.Number;
    v97 = PoolTrackTableMask;
    v98 = PoolTrackTableSize;
    v99 = (__int64)*(&ExPoolTagTables + v94);
    v96 = v156 & 0x20;
  }
  v135 = v98;
  BugCheckParameter3_4d = v97;
  v133 = v99;
  v100 = v97 & ((40543 * v10) ^ ((40543 * (unsigned __int64)v10) >> 32));
  v157 = v100;
  while ( 1 )
  {
    v101 = 40LL * v100;
    v102 = *(_DWORD *)(v99 + v101);
    v127 = v101;
    if ( v102 == v10 )
      break;
    if ( v102 )
    {
LABEL_207:
      v100 = v97 & (v100 + 1);
      if ( v100 == v157 )
      {
        ExpInsertPoolTrackerExpansion(v10, v4, v95);
        goto LABEL_212;
      }
    }
    else
    {
      if ( v96 )
        goto LABEL_201;
      v103 = *(_DWORD *)(v101 + PoolTrackTable);
      if ( v103 )
      {
        *(_DWORD *)(v133 + 40LL * v100) = v103;
        v99 = v133;
      }
      else
      {
        v99 = v133;
LABEL_201:
        if ( v100 == v98 - 1 )
          goto LABEL_207;
        if ( v96 )
        {
          _InterlockedCompareExchange((volatile signed __int32 *)(v99 + v101), v10, 0);
        }
        else
        {
          KeAcquireInStackQueuedSpinLock(&ExpTaggedPoolLock, &v145);
          if ( !*(_DWORD *)(v127 + PoolTrackTable) )
          {
            *(_DWORD *)(v127 + PoolTrackTable) = v10;
            *(_DWORD *)(v133 + 40LL * v100) = v10;
          }
          KeReleaseInStackQueuedSpinLock(&v145);
          v96 = v149;
          v97 = BugCheckParameter3_4d;
          v98 = v135;
          v99 = v133;
        }
      }
    }
  }
  if ( (v95 & 1) != 0 )
  {
    _InterlockedIncrement((volatile signed __int32 *)(v99 + v101 + 24));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v99 + v101 + 32), v4);
  }
  else
  {
    _InterlockedIncrement((volatile signed __int32 *)(v99 + v101 + 4));
    _InterlockedExchangeAdd64((volatile signed __int64 *)(v99 + v101 + 16), v4);
  }
LABEL_212:
  _InterlockedIncrement(&ExpSpecialAllocations);
  return Mutexc;
}
