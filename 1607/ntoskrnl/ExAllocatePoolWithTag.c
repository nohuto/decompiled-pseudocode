/*
 * XREFs of ExAllocatePoolWithTag @ 0x140254A50
 * Callers:
 *     SmAlloc @ 0x1400022D0 (SmAlloc.c)
 *     ?SmHighMemPriorityWatchdogWorker@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003174 (-SmHighMemPriorityWatchdogWorker@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?StAcquireReadContext@?$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z @ 0x1400048B0 (-StAcquireReadContext@-$ST_STORE@USM_TRAITS@@@@SAPEAXPEAU1@@Z.c)
 *     ?SmStStart@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z @ 0x140004B28 (-SmStStart@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_SMST_PARAMETERS@@@Z.c)
 *     ?StStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z @ 0x140005158 (-StStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_CREATE_PARAMS@@@Z.c)
 *     ?StDmStart@?$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_BITMAP@@PEAKK@Z @ 0x14000545C (-StDmStart@-$ST_STORE@USM_TRAITS@@@@SAJPEAU1@PEAU_ST_DATA_MGR@1@PEAU_STDM_PARAMETERS@@PEAU_RTL_B.c)
 *     ?NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z @ 0x1400056CC (-NpStart@NP_CONTEXT@@SAJPEAU1@PEAU_NP_PARAMETERS@1@@Z.c)
 *     StEtaStart @ 0x140005860 (StEtaStart.c)
 *     PfSnTraceBufferAllocate @ 0x140006C80 (PfSnTraceBufferAllocate.c)
 *     PfFbBufferListAllocateTemporary @ 0x14000723C (PfFbBufferListAllocateTemporary.c)
 *     EmpEvaluateTargetRule @ 0x140008910 (EmpEvaluateTargetRule.c)
 *     EmpEvaluateNodeLink @ 0x140008ACC (EmpEvaluateNodeLink.c)
 *     CmpGetSymbolicLinkTarget @ 0x14000B030 (CmpGetSymbolicLinkTarget.c)
 *     AuthzBasepDuplicateSecurityAttributes @ 0x14000E910 (AuthzBasepDuplicateSecurityAttributes.c)
 *     AuthzBasepAllocateSecurityAttribute @ 0x14000EB80 (AuthzBasepAllocateSecurityAttribute.c)
 *     AuthzBasepMemAlloc @ 0x14000EE20 (AuthzBasepMemAlloc.c)
 *     SeSetLearningModeObjectInformation @ 0x14000F6F0 (SeSetLearningModeObjectInformation.c)
 *     ExAllocatePoolWithQuotaTag @ 0x140012330 (ExAllocatePoolWithQuotaTag.c)
 *     MiBuildMappedCluster @ 0x14001F140 (MiBuildMappedCluster.c)
 *     MiFlushSectionInternal @ 0x140029930 (MiFlushSectionInternal.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     CmpConstructNameFromKeyNodes @ 0x14002D310 (CmpConstructNameFromKeyNodes.c)
 *     IopAllocateIrpPrivate @ 0x14002DDD0 (IopAllocateIrpPrivate.c)
 *     IoAllocateMdl @ 0x14002EB10 (IoAllocateMdl.c)
 *     PfSnGetFileInformation @ 0x1400371B0 (PfSnGetFileInformation.c)
 *     MiAgeWorkingSet @ 0x140046C10 (MiAgeWorkingSet.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     SeAccessCheckByType @ 0x14005FA70 (SeAccessCheckByType.c)
 *     SeCaptureObjectTypeList @ 0x140060ACC (SeCaptureObjectTypeList.c)
 *     SeLogAccessFailure @ 0x140061150 (SeLogAccessFailure.c)
 *     ExEnterPriorityRegionAndAcquireResourceShared @ 0x140065520 (ExEnterPriorityRegionAndAcquireResourceShared.c)
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 *     CcAllocateInitializeBcb @ 0x14006C544 (CcAllocateInitializeBcb.c)
 *     CcExtendVacbArray @ 0x14006CA98 (CcExtendVacbArray.c)
 *     CcAsyncCopyRead @ 0x14006D6EC (CcAsyncCopyRead.c)
 *     CcPostWorkQueueAsyncRead @ 0x14006D8B8 (CcPostWorkQueueAsyncRead.c)
 *     IoBoostThreadIoPriority @ 0x14006DDC4 (IoBoostThreadIoPriority.c)
 *     CcFindBitmapRangeToDirty @ 0x14006F8C4 (CcFindBitmapRangeToDirty.c)
 *     CcAllocateInitializeMbcb @ 0x1400705CC (CcAllocateInitializeMbcb.c)
 *     CcWriteBehind @ 0x14007119C (CcWriteBehind.c)
 *     EtwpEventWriteFull @ 0x140073860 (EtwpEventWriteFull.c)
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     FsRtlpOplockStoreKeyForDeleteOperation @ 0x14007A9E0 (FsRtlpOplockStoreKeyForDeleteOperation.c)
 *     FsRtlInsertPerFileObjectContext @ 0x14007B0F0 (FsRtlInsertPerFileObjectContext.c)
 *     IopVerifierExAllocatePool @ 0x14007B690 (IopVerifierExAllocatePool.c)
 *     SepMandatorySubProcessToken @ 0x14007C0DC (SepMandatorySubProcessToken.c)
 *     ExAllocatePoolWithTagPriority @ 0x14007E290 (ExAllocatePoolWithTagPriority.c)
 *     SepSetTokenLowboxHandles @ 0x14007F600 (SepSetTokenLowboxHandles.c)
 *     SepCreateTokenEx @ 0x14007FC48 (SepCreateTokenEx.c)
 *     SepCaptureTokenSecurityOperations @ 0x1400806CC (SepCaptureTokenSecurityOperations.c)
 *     SepAppendAceToTokenDefaultDacl @ 0x140080840 (SepAppendAceToTokenDefaultDacl.c)
 *     SepCaptureHandles @ 0x1400809F0 (SepCaptureHandles.c)
 *     RtlpIsNameInExpressionPrivate @ 0x1400815C0 (RtlpIsNameInExpressionPrivate.c)
 *     VfAvlReserveNode @ 0x140082438 (VfAvlReserveNode.c)
 *     KeAllocateXStateContext @ 0x140083D50 (KeAllocateXStateContext.c)
 *     DbgUnicodeStringToAnsiString @ 0x140084708 (DbgUnicodeStringToAnsiString.c)
 *     CreateNewEventEntry @ 0x1400855EC (CreateNewEventEntry.c)
 *     PnpRemoveLockedDeviceNode @ 0x140085A68 (PnpRemoveLockedDeviceNode.c)
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140086468 (IoReportTargetDeviceChangeAsynchronous.c)
 *     EtwpAllocateFreeBuffers @ 0x140086F48 (EtwpAllocateFreeBuffers.c)
 *     ExGetSessionPoolTagInfo @ 0x14008801C (ExGetSessionPoolTagInfo.c)
 *     MmCreateMdl @ 0x140088304 (MmCreateMdl.c)
 *     MiAllocateAccessLog @ 0x1400886E0 (MiAllocateAccessLog.c)
 *     MiGetLargePageToZero @ 0x140089D80 (MiGetLargePageToZero.c)
 *     FsRtlTruncateBaseMcb @ 0x14008BE84 (FsRtlTruncateBaseMcb.c)
 *     FsRtlAddEntry @ 0x14008CA14 (FsRtlAddEntry.c)
 *     FsRtlInitializeBaseMcbEx @ 0x14008CCA8 (FsRtlInitializeBaseMcbEx.c)
 *     SePrivilegePolicyCheck @ 0x14008D030 (SePrivilegePolicyCheck.c)
 *     IoMakeAssociatedIrpPriv @ 0x14008D7D8 (IoMakeAssociatedIrpPriv.c)
 *     IopAllocateIrpExtension @ 0x14008DD94 (IopAllocateIrpExtension.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     MiViewMayContainPage @ 0x14008EEB4 (MiViewMayContainPage.c)
 *     MiCreatePrototypePtes @ 0x14008F5E4 (MiCreatePrototypePtes.c)
 *     MiDeletePartialVad @ 0x1400955C0 (MiDeletePartialVad.c)
 *     ExpExpandResourceOwnerTable @ 0x1400969CC (ExpExpandResourceOwnerTable.c)
 *     MmProbeAndLockSelectedPages @ 0x140099DD4 (MmProbeAndLockSelectedPages.c)
 *     MiReferenceIoPages @ 0x14009BB00 (MiReferenceIoPages.c)
 *     WmipBuildTraceDeviceList @ 0x14009CAC4 (WmipBuildTraceDeviceList.c)
 *     IoAllocateWorkItem @ 0x14009E0A4 (IoAllocateWorkItem.c)
 *     CcInitializeVolumeCacheMap @ 0x14009F728 (CcInitializeVolumeCacheMap.c)
 *     FsRtlCancelNotify @ 0x1400A0A1C (FsRtlCancelNotify.c)
 *     MiExpandSystemCache @ 0x1400A1428 (MiExpandSystemCache.c)
 *     MiExpandFlushMdl @ 0x1400A5BA8 (MiExpandFlushMdl.c)
 *     CmpAllocatePoolWithTag @ 0x1400A5D00 (CmpAllocatePoolWithTag.c)
 *     RtlpCreateHashTable @ 0x1400A7AEC (RtlpCreateHashTable.c)
 *     RtlpAllocateSecondLevelDir @ 0x1400A7BF0 (RtlpAllocateSecondLevelDir.c)
 *     MmWaitMultipleForCacheManagerPrefetch @ 0x1400A7D6C (MmWaitMultipleForCacheManagerPrefetch.c)
 *     IopVerifierExAllocatePool_0 @ 0x1400AA480 (IopVerifierExAllocatePool_0.c)
 *     FsRtlpOplockSendModernAppTermination @ 0x1400AACBC (FsRtlpOplockSendModernAppTermination.c)
 *     IoSetCompletionRoutineEx @ 0x1400AB8F0 (IoSetCompletionRoutineEx.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AD040 (MiAllocatePfnRepurposeLogDispatch.c)
 *     PopFxQueryBiosDeviceName @ 0x1400AD3C8 (PopFxQueryBiosDeviceName.c)
 *     WmipReceiveNotifications @ 0x1400AD93C (WmipReceiveNotifications.c)
 *     RtlpAllowsLowBoxAccess @ 0x1400ADCD4 (RtlpAllowsLowBoxAccess.c)
 *     PspInsertProperty @ 0x1400AF15C (PspInsertProperty.c)
 *     CmpAllocateTransientPoolWithTag @ 0x1400B0B88 (CmpAllocateTransientPoolWithTag.c)
 *     FsRtlpWaitOnIrp @ 0x1400B215C (FsRtlpWaitOnIrp.c)
 *     IoAllocateDriverObjectExtension @ 0x1400B27D8 (IoAllocateDriverObjectExtension.c)
 *     CmpLogTransactionAbortedWithChildName @ 0x1400B2988 (CmpLogTransactionAbortedWithChildName.c)
 *     HvSynchronizeAndDropTemporaryBins @ 0x1400B2AB4 (HvSynchronizeAndDropTemporaryBins.c)
 *     ExAllocatePool @ 0x1400B2F30 (ExAllocatePool.c)
 *     MiInitializeNumaRanges @ 0x1400B3A90 (MiInitializeNumaRanges.c)
 *     MiAllocateWorkingSetSwapSupport @ 0x1400B52F8 (MiAllocateWorkingSetSwapSupport.c)
 *     MiGetWorkingSetInfoList @ 0x1400B5870 (MiGetWorkingSetInfoList.c)
 *     MmOutSwapWorkingSet @ 0x1400B7638 (MmOutSwapWorkingSet.c)
 *     NtLockVirtualMemory @ 0x1400B8D58 (NtLockVirtualMemory.c)
 *     MiCloneVads @ 0x1400BA3F0 (MiCloneVads.c)
 *     IoAcquireRemoveLockEx @ 0x1400BF5C0 (IoAcquireRemoveLockEx.c)
 *     SmpKeyedStoreEntryGet @ 0x1400C715C (SmpKeyedStoreEntryGet.c)
 *     IopVerifierExAllocatePool_1 @ 0x1400C7DB8 (IopVerifierExAllocatePool_1.c)
 *     PpmParkSteerInterrupts @ 0x1400D58E0 (PpmParkSteerInterrupts.c)
 *     MiGetInPageSupportBlock @ 0x1400E53C0 (MiGetInPageSupportBlock.c)
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 *     IopBuildDeviceIoControlRequest @ 0x1400E7620 (IopBuildDeviceIoControlRequest.c)
 *     IopAttachDeviceToDeviceStackSafe @ 0x1400F8D4C (IopAttachDeviceToDeviceStackSafe.c)
 *     PopUmpoSendPowerRequestOverrideQuery @ 0x1400F9088 (PopUmpoSendPowerRequestOverrideQuery.c)
 *     PopCaptureReasonContext @ 0x1400FA054 (PopCaptureReasonContext.c)
 *     MiCreateMdl @ 0x1400FA8C0 (MiCreateMdl.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiAllocateModWriterEntry @ 0x1401007D0 (MiAllocateModWriterEntry.c)
 *     MiObtainMdlCharges @ 0x140101B28 (MiObtainMdlCharges.c)
 *     MiInitializeMdlPages @ 0x14010480C (MiInitializeMdlPages.c)
 *     MiSwapStackPage @ 0x140109A7C (MiSwapStackPage.c)
 *     MiCreateCloneChain @ 0x14010AA80 (MiCreateCloneChain.c)
 *     IopBuildAsynchronousFsdRequest @ 0x14010AEC0 (IopBuildAsynchronousFsdRequest.c)
 *     KsepPoolAllocatePaged @ 0x14010B37C (KsepPoolAllocatePaged.c)
 *     RtlExpandHashTable @ 0x14010F0E4 (RtlExpandHashTable.c)
 *     MiGetWorkingSetInfo @ 0x14010F8A4 (MiGetWorkingSetInfo.c)
 *     ExAllocateCacheAwarePushLock @ 0x140111768 (ExAllocateCacheAwarePushLock.c)
 *     SepExpandSingletonArrays @ 0x14011258C (SepExpandSingletonArrays.c)
 *     SmBinaryArrayGrow @ 0x140115E38 (SmBinaryArrayGrow.c)
 *     SmHpBufferAlloc @ 0x140115ECC (SmHpBufferAlloc.c)
 *     ?SmPageRead@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x140117558 (-SmPageRead@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@PEAU_MDL@@PEAXPEAU_IO_STAT.c)
 *     MiStoreWriteModifiedPages @ 0x140118ED0 (MiStoreWriteModifiedPages.c)
 *     ?SmPageWrite@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU_MDL@@PEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14011A2B8 (-SmPageWrite@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@T_SM_PAGE_ADD_PARAM@@PEAU.c)
 *     SmFpAllocate @ 0x14011BD8C (SmFpAllocate.c)
 *     ?NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z @ 0x14012049C (-NpNodeAllocate@NP_CONTEXT@@SAPEAXPEAUNP_CTX@1@KK@Z.c)
 *     ?BTreeNewNode@?$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA@UB_TREE_DUMMY_NODE_POOL@@U?$B_TREE_KEY_COMPARATOR@T_SM_PAGE_KEY@@@@@@SAPEAUNODE@?$B_TREE_HEADER@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@?$SMKM_STORE_MGR@USM_TRAITS@@@@@@PEAU1@KK@Z @ 0x140124BD4 (-BTreeNewNode@-$B_TREE@T_SM_PAGE_KEY@@USMKM_FRONTEND_ENTRY@-$SMKM_STORE_MGR@USM_TRAITS@@@@$0BAAA.c)
 *     MiPfIssueCoalescedSupport @ 0x140125790 (MiPfIssueCoalescedSupport.c)
 *     PopGetCurrentWakeInfos @ 0x140125D94 (PopGetCurrentWakeInfos.c)
 *     SmArrayGrow @ 0x14012665C (SmArrayGrow.c)
 *     BgpFwAllocateMemory @ 0x140129A78 (BgpFwAllocateMemory.c)
 *     BgpFwQueryBootGraphicsInformation @ 0x14012A060 (BgpFwQueryBootGraphicsInformation.c)
 *     KiIntSteerConnect @ 0x14012D8EC (KiIntSteerConnect.c)
 *     KiIntRedirectConnnect @ 0x14012DE60 (KiIntRedirectConnnect.c)
 *     SmKmAllocateMdlForLock @ 0x14012F67C (SmKmAllocateMdlForLock.c)
 *     IoWMIWriteEvent @ 0x14012FEA0 (IoWMIWriteEvent.c)
 *     MiSessionInsertImage @ 0x1401300DC (MiSessionInsertImage.c)
 *     ExRegisterCallback @ 0x1401302A4 (ExRegisterCallback.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140131114 (LdrUnloadAlternateResourceModuleEx.c)
 *     IopAllocateErrorLogEntry @ 0x140131304 (IopAllocateErrorLogEntry.c)
 *     MiAddPrivateFixupEntryForSystemImage @ 0x1401313D4 (MiAddPrivateFixupEntryForSystemImage.c)
 *     PoClearPowerRequestInternalDeferred @ 0x140131AE0 (PoClearPowerRequestInternalDeferred.c)
 *     RtlpUpcaseUnicodeStringPrivate @ 0x140132EB4 (RtlpUpcaseUnicodeStringPrivate.c)
 *     ExAllocateTimerInternal @ 0x140133028 (ExAllocateTimerInternal.c)
 *     ExpSaPageGroupDescriptorAllocate @ 0x140133E38 (ExpSaPageGroupDescriptorAllocate.c)
 *     ExpSaBinaryArrayInsert @ 0x14013405C (ExpSaBinaryArrayInsert.c)
 *     FsRtlpAcknowledgeOplockBreakByCacheFlags @ 0x14013493C (FsRtlpAcknowledgeOplockBreakByCacheFlags.c)
 *     ExAllocateAutoExpandPushLock @ 0x14013559C (ExAllocateAutoExpandPushLock.c)
 *     SepCommonAccessCheckEx @ 0x140135D00 (SepCommonAccessCheckEx.c)
 *     CcAllocateInitializeVacbArray @ 0x1401369F0 (CcAllocateInitializeVacbArray.c)
 *     MiZeroNodePages @ 0x14013ADA0 (MiZeroNodePages.c)
 *     MiCreateZeroThreadContext @ 0x14013B070 (MiCreateZeroThreadContext.c)
 *     MiInitializePageZeroing @ 0x14013B3E0 (MiInitializePageZeroing.c)
 *     MiDescribePageRun @ 0x14013B830 (MiDescribePageRun.c)
 *     ExInitializeProcessor @ 0x14013CA8C (ExInitializeProcessor.c)
 *     SepInitProcessAuditSd @ 0x14013CB7C (SepInitProcessAuditSd.c)
 *     EmpQueueRuleUpdateState @ 0x14013D1CC (EmpQueueRuleUpdateState.c)
 *     BapdpProcessEtwEvents @ 0x14013D3D4 (BapdpProcessEtwEvents.c)
 *     _MuiRegAllocArray @ 0x1401404F4 (_MuiRegAllocArray.c)
 *     _SafeAllocBlob @ 0x140140630 (_SafeAllocBlob.c)
 *     RtlpMuiRegAddAlternateCodePage @ 0x1401406C0 (RtlpMuiRegAddAlternateCodePage.c)
 *     RtlpMuiRegCreateKernelRegistryInfo @ 0x140140894 (RtlpMuiRegCreateKernelRegistryInfo.c)
 *     RtlpMuiRegLoadLicInformation @ 0x140140B0C (RtlpMuiRegLoadLicInformation.c)
 *     PopFxCreateDeviceCommon @ 0x140142760 (PopFxCreateDeviceCommon.c)
 *     PopFxDuplicateUniqueId @ 0x1401428F0 (PopFxDuplicateUniqueId.c)
 *     PpmParkRegisterParking @ 0x140143D88 (PpmParkRegisterParking.c)
 *     AdtpBuildMultiSzStringListString @ 0x140144F18 (AdtpBuildMultiSzStringListString.c)
 *     SepBuildCapPolicyTable @ 0x140145460 (SepBuildCapPolicyTable.c)
 *     PopGetDope @ 0x1401455C4 (PopGetDope.c)
 *     SepAdtLogAuditRecord @ 0x1401458A0 (SepAdtLogAuditRecord.c)
 *     SepAdtMarshallAuditRecord @ 0x140145A18 (SepAdtMarshallAuditRecord.c)
 *     PpmInstallNewIdleStates @ 0x140145C68 (PpmInstallNewIdleStates.c)
 *     CcInitializeAsyncRead @ 0x1401466A8 (CcInitializeAsyncRead.c)
 *     PfFbBufferListAllocate @ 0x140146B64 (PfFbBufferListAllocate.c)
 *     EmpEvaluateUpdateRuleEvalState @ 0x140147550 (EmpEvaluateUpdateRuleEvalState.c)
 *     SmFpPreAllocate @ 0x140148E48 (SmFpPreAllocate.c)
 *     FsFilterInit @ 0x1401490B4 (FsFilterInit.c)
 *     ExpSaInitialize @ 0x1401493D8 (ExpSaInitialize.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014978C (LdrpSetAlternateResourceModuleHandle.c)
 *     CreateTlgAggregateSession @ 0x140149D30 (CreateTlgAggregateSession.c)
 *     IopGetPhysicalMemoryBlock @ 0x14014A114 (IopGetPhysicalMemoryBlock.c)
 *     SepBuildDefaultCape @ 0x14014A478 (SepBuildDefaultCape.c)
 *     SepAdtDetermineInsertQueue @ 0x14014AB30 (SepAdtDetermineInsertQueue.c)
 *     FsRtlRegisterFileSystemFilterCallbacks @ 0x14014ACFC (FsRtlRegisterFileSystemFilterCallbacks.c)
 *     MiInitializeWorkingSetManagerParameters @ 0x14014B1AC (MiInitializeWorkingSetManagerParameters.c)
 *     IopInitDumpCapsuleSupport @ 0x14014BDF0 (IopInitDumpCapsuleSupport.c)
 *     KdRegisterPowerHandler @ 0x14014C170 (KdRegisterPowerHandler.c)
 *     IoRegisterPriorityCallback @ 0x14014C580 (IoRegisterPriorityCallback.c)
 *     KiSwInterruptDispatch @ 0x1401578BC (KiSwInterruptDispatch.c)
 *     CcRegisterExternalCache @ 0x1401B1770 (CcRegisterExternalCache.c)
 *     CcDeferWrite @ 0x1401B18EC (CcDeferWrite.c)
 *     CmpPromoteKey @ 0x1401B3308 (CmpPromoteKey.c)
 *     CmpConstructNameFromKcbNameBlocks @ 0x1401B48A0 (CmpConstructNameFromKcbNameBlocks.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1401B4DC4 (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmLogMcUpdateStatus @ 0x1401B52DC (CmLogMcUpdateStatus.c)
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x1401B5B60 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     DbgkpWerAllocateNonpagedPool @ 0x1401B7CA8 (DbgkpWerAllocateNonpagedPool.c)
 *     FsRtlAllocatePool @ 0x1401B8E30 (FsRtlAllocatePool.c)
 *     FsRtlAllocatePoolWithTag @ 0x1401B8EA0 (FsRtlAllocatePoolWithTag.c)
 *     FsFilterAllocateCompletionStack @ 0x1401B9BB0 (FsFilterAllocateCompletionStack.c)
 *     FsRtlInsertPerFileContext @ 0x1401B9F28 (FsRtlInsertPerFileContext.c)
 *     FsRtlpPostStackOverflow @ 0x1401BA684 (FsRtlpPostStackOverflow.c)
 *     VslAllocatePool @ 0x1401C252C (VslAllocatePool.c)
 *     VslpLockPagesForTransfer @ 0x1401C32B4 (VslpLockPagesForTransfer.c)
 *     BgkDisplayString @ 0x1401C3B90 (BgkDisplayString.c)
 *     IoRaiseHardError @ 0x1401C8B7C (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401C8DE4 (IoRaiseInformationalHardError.c)
 *     IopGetSetStreamIdentifier @ 0x1401C932C (IopGetSetStreamIdentifier.c)
 *     IopAdjustFileObjectKeepAliveCount @ 0x1401C9AE0 (IopAdjustFileObjectKeepAliveCount.c)
 *     IopQueryFullDriverPath @ 0x1401C9F84 (IopQueryFullDriverPath.c)
 *     IopVerifierExAllocatePool_2 @ 0x1401CACC8 (IopVerifierExAllocatePool_2.c)
 *     IopLiveDumpAllocNonPagedPool @ 0x1401CAD8C (IopLiveDumpAllocNonPagedPool.c)
 *     IopVerifierExAllocatePool_3 @ 0x1401CB430 (IopVerifierExAllocatePool_3.c)
 *     SecureDump_EncryptSymmetricKeyWithPublicKey @ 0x1401CB45C (SecureDump_EncryptSymmetricKeyWithPublicKey.c)
 *     SecureDump_ReadRegistry @ 0x1401CBD34 (SecureDump_ReadRegistry.c)
 *     SecureDump_SymmetricEncryptionSetup @ 0x1401CBE30 (SecureDump_SymmetricEncryptionSetup.c)
 *     IopVerifierExAllocatePool_4 @ 0x1401CC134 (IopVerifierExAllocatePool_4.c)
 *     IoRequestDeviceEjectEx @ 0x1401CCCF0 (IoRequestDeviceEjectEx.c)
 *     PipCreateNewDependencyEdge @ 0x1401CCFC8 (PipCreateNewDependencyEdge.c)
 *     PiDevCfgPushCopyKeyEntry @ 0x1401CEED8 (PiDevCfgPushCopyKeyEntry.c)
 *     PiDevCfgPushDriverNodeEntry @ 0x1401CF018 (PiDevCfgPushDriverNodeEntry.c)
 *     PiDevCfgQueryResolveValue @ 0x1401CF080 (PiDevCfgQueryResolveValue.c)
 *     KdSetDbgPrintBufferSize @ 0x1401D1778 (KdSetDbgPrintBufferSize.c)
 *     KeProcessorProfileControlArea @ 0x1401D2760 (KeProcessorProfileControlArea.c)
 *     KeRegisterNmiCallback @ 0x1401D2914 (KeRegisterNmiCallback.c)
 *     KeStartProfile @ 0x1401D6B70 (KeStartProfile.c)
 *     KsepPoolAllocateNonPaged @ 0x1401DCCF8 (KsepPoolAllocateNonPaged.c)
 *     MiFlushControlArea @ 0x1401DE8C4 (MiFlushControlArea.c)
 *     MiReleaseOutSwappedProcessCommit @ 0x1401E09C4 (MiReleaseOutSwappedProcessCommit.c)
 *     MiConvertRunsToPages @ 0x1401ED338 (MiConvertRunsToPages.c)
 *     MiAddRangeToPartitionTree @ 0x1401F0BB8 (MiAddRangeToPartitionTree.c)
 *     MiAllocateCombineProto @ 0x1401F7974 (MiAllocateCombineProto.c)
 *     MiCombineWorkingSet @ 0x1401F7EFC (MiCombineWorkingSet.c)
 *     MiSharePages @ 0x1401FA710 (MiSharePages.c)
 *     MiInsertPteTracker @ 0x1401FC618 (MiInsertPteTracker.c)
 *     MmEnumerateBadPages @ 0x1401FE774 (MmEnumerateBadPages.c)
 *     PpmQueryPlatformStateResidency @ 0x140200B3C (PpmQueryPlatformStateResidency.c)
 *     PpmUpdateIdleVeto @ 0x1402015C0 (PpmUpdateIdleVeto.c)
 *     PopFxRegisterPluginEx @ 0x140203328 (PopFxRegisterPluginEx.c)
 *     PpmSetSimulatedLoad @ 0x140205068 (PpmSetSimulatedLoad.c)
 *     PopUpdateWakeSource @ 0x140205744 (PopUpdateWakeSource.c)
 *     PopTraceThermalRequestPassiveHistogram @ 0x140209A80 (PopTraceThermalRequestPassiveHistogram.c)
 *     PpmAllocWmiEvent @ 0x14020B0BC (PpmAllocWmiEvent.c)
 *     PpmWmiIdleAccountingProcedure @ 0x14020B278 (PpmWmiIdleAccountingProcedure.c)
 *     PopSetWatchdog @ 0x14020B2F8 (PopSetWatchdog.c)
 *     PpmEventTracePreVetoAccounting @ 0x14020CD58 (PpmEventTracePreVetoAccounting.c)
 *     PpmEventTraceProcessorIdleAccounting @ 0x14020CF0C (PpmEventTraceProcessorIdleAccounting.c)
 *     PspReadDfssConfigurationValues @ 0x14020E9FC (PspReadDfssConfigurationValues.c)
 *     DbgpInsertDebugPrintCallback @ 0x14021122C (DbgpInsertDebugPrintCallback.c)
 *     RtlpTraceDatabaseAllocate @ 0x140215CF4 (RtlpTraceDatabaseAllocate.c)
 *     NormalizationListEntry_Alloc @ 0x140219134 (NormalizationListEntry_Alloc.c)
 *     SepCopyObjectTypeList @ 0x140219970 (SepCopyObjectTypeList.c)
 *     SepVerifyDesktopAppxImage @ 0x140219AD8 (SepVerifyDesktopAppxImage.c)
 *     SepVerifyDesktopAppxPackageName @ 0x140219C8C (SepVerifyDesktopAppxPackageName.c)
 *     SepCheckAndCopySelfRelativeSD @ 0x140219F5C (SepCheckAndCopySelfRelativeSD.c)
 *     SepSetSingletonEntry @ 0x14021A974 (SepSetSingletonEntry.c)
 *     SepValidateAndCopyGlobalEntry @ 0x14021AA48 (SepValidateAndCopyGlobalEntry.c)
 *     SepFlattenAcl @ 0x14021AB40 (SepFlattenAcl.c)
 *     SepGetLearningModeObjectInformation @ 0x14021ACB0 (SepGetLearningModeObjectInformation.c)
 *     SepGetSidValuesDump @ 0x14021B060 (SepGetSidValuesDump.c)
 *     SepGetTokenSessionMapEntry @ 0x14021B124 (SepGetTokenSessionMapEntry.c)
 *     SeRmReferenceFindCapName @ 0x14021B25C (SeRmReferenceFindCapName.c)
 *     SepRmCapPoolExpand @ 0x14021B3AC (SepRmCapPoolExpand.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14021C828 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     ?SmStOutSwapPrepareStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CA10 (-SmStOutSwapPrepareStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStOutSwapStore@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z @ 0x14021CAC8 (-SmStOutSwapStore@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@@Z.c)
 *     ?SmStTrimWsStoreBatch@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z @ 0x14021D0BC (-SmStTrimWsStoreBatch@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAKPEAPEAXKKPEA_K@Z.c)
 *     ?StDeviceIoBuild@?$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_LOCATION@1@KPEAX@Z @ 0x14021D850 (-StDeviceIoBuild@-$ST_STORE@USM_TRAITS@@@@SAPEAU_ST_WORK_ITEM@1@PEAU_ST_DATA_MGR@1@PEAU_ST_PAGE_.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140221A74 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x140221B70 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     SmPrepareForFatalPageError @ 0x140221F94 (SmPrepareForFatalPageError.c)
 *     VfAllocateDomainCommonBuffer @ 0x14022285C (VfAllocateDomainCommonBuffer.c)
 *     MdlInvariantInsertMdlInfo @ 0x140222C70 (MdlInvariantInsertMdlInfo.c)
 *     WdipAccessCheck @ 0x14022450C (WdipAccessCheck.c)
 *     WmiVerifierCopyEvent @ 0x140224738 (WmiVerifierCopyEvent.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x140226B68 (EtwpQueuePerfMemInfoWorkItem.c)
 *     EtwpGetTrackingLockSlotForThread @ 0x140227D40 (EtwpGetTrackingLockSlotForThread.c)
 *     EtwTiLogQueueApcThread @ 0x14022873C (EtwTiLogQueueApcThread.c)
 *     EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x140228A18 (EtwpTiAllocVadQueryEventWriteWorkItemContext.c)
 *     EtwpApplyEventNameFilter @ 0x140229810 (EtwpApplyEventNameFilter.c)
 *     EtwpDequeueBufferPendingCompression @ 0x14022A510 (EtwpDequeueBufferPendingCompression.c)
 *     EtwpInitializeCompression @ 0x14022AA50 (EtwpInitializeCompression.c)
 *     NtDrawText @ 0x14022C560 (NtDrawText.c)
 *     ExRegisterBootDevice @ 0x14022CFF0 (ExRegisterBootDevice.c)
 *     ExCopyWakeTimerInfo @ 0x14022DF44 (ExCopyWakeTimerInfo.c)
 *     ExpHotAddProcessorToWorkers @ 0x14022E828 (ExpHotAddProcessorToWorkers.c)
 *     ExShareAddressSpaceWithDevice @ 0x14022E994 (ExShareAddressSpaceWithDevice.c)
 *     ExpAllocateAsid @ 0x14022EDCC (ExpAllocateAsid.c)
 *     ExpPrepareNewSvmDevice @ 0x14022EFE8 (ExpPrepareNewSvmDevice.c)
 *     WheapReportPersistedErrorRecord @ 0x14022FEA0 (WheapReportPersistedErrorRecord.c)
 *     WheapAllocErrorRecord @ 0x140230334 (WheapAllocErrorRecord.c)
 *     WheaPersistOfflinedPage @ 0x1402307D0 (WheaPersistOfflinedPage.c)
 *     WheapSqmCollectWheaOscTelemetry @ 0x140231900 (WheapSqmCollectWheaOscTelemetry.c)
 *     sub_140232740 @ 0x140232740 (sub_140232740.c)
 *     sub_140232D04 @ 0x140232D04 (sub_140232D04.c)
 *     sub_140233260 @ 0x140233260 (sub_140233260.c)
 *     AdtpBuildAccessReasonAuditString @ 0x140237BE8 (AdtpBuildAccessReasonAuditString.c)
 *     AdtpBuildAccessReasonAuditStringInternal @ 0x1402380B0 (AdtpBuildAccessReasonAuditStringInternal.c)
 *     AdtpBuildStagingReasonAuditStringInternal @ 0x140238B20 (AdtpBuildStagingReasonAuditStringInternal.c)
 *     _SafeReallocBlob @ 0x14023E9A8 (_SafeReallocBlob.c)
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
 *     PfpRpCHashDeleteEntries @ 0x1403E6240 (PfpRpCHashDeleteEntries.c)
 *     PfSnPrefetchScenario @ 0x1403E66C0 (PfSnPrefetchScenario.c)
 *     PfSnScenarioAlloc @ 0x1403E685C (PfSnScenarioAlloc.c)
 *     PfSnGetPrefetchInstructions @ 0x1403E6878 (PfSnGetPrefetchInstructions.c)
 *     PfTCreateTraceDump @ 0x1403E7070 (PfTCreateTraceDump.c)
 *     PsGetAllocatedFullProcessImageName @ 0x1403E805C (PsGetAllocatedFullProcessImageName.c)
 *     PfSnBuildDumpFromTrace @ 0x1403EA8F4 (PfSnBuildDumpFromTrace.c)
 *     PfSnBeginTrace @ 0x1403EACC8 (PfSnBeginTrace.c)
 *     NtSetSystemInformation @ 0x1403EB59C (NtSetSystemInformation.c)
 *     PfSetSuperfetchInformation @ 0x1403EBF18 (PfSetSuperfetchInformation.c)
 *     PfpRpControlRequestCopy @ 0x1403ED644 (PfpRpControlRequestCopy.c)
 *     PfpPrefetchRequest @ 0x1403EE3C8 (PfpPrefetchRequest.c)
 *     PfpPrefetchRequestPerform @ 0x1403EE5B4 (PfpPrefetchRequestPerform.c)
 *     PfpVolumeOpenAndVerify @ 0x1403EEF00 (PfpVolumeOpenAndVerify.c)
 *     PiSwPdoPnPDispatch @ 0x1403F0544 (PiSwPdoPnPDispatch.c)
 *     PnpDeviceCompletionRequestCreate @ 0x1403F09A8 (PnpDeviceCompletionRequestCreate.c)
 *     PnpProcessAssignResources @ 0x1403F0F18 (PnpProcessAssignResources.c)
 *     IopBuildGlobalSymbolicLinkString @ 0x1403F1348 (IopBuildGlobalSymbolicLinkString.c)
 *     IopAllocateUnicodeString @ 0x1403F1458 (IopAllocateUnicodeString.c)
 *     IopProcessSetInterfaceState @ 0x1403F1568 (IopProcessSetInterfaceState.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1403F2AC8 (PopLogDisabledSleepReason.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F3760 (PiControlGetSetDeviceStatus.c)
 *     PipCallDriverAddDevice @ 0x1403F3BB0 (PipCallDriverAddDevice.c)
 *     PnpCallDriverQueryServiceHelper @ 0x1403F4410 (PnpCallDriverQueryServiceHelper.c)
 *     CmpQueryFileSecurityDescriptor @ 0x1403F5028 (CmpQueryFileSecurityDescriptor.c)
 *     ExpWnfLookupPermanentName @ 0x1403F50D0 (ExpWnfLookupPermanentName.c)
 *     PopUmpoProcessPowerMessage @ 0x1403F6B18 (PopUmpoProcessPowerMessage.c)
 *     ExpAllocateStringRoutine @ 0x1403F6F7C (ExpAllocateStringRoutine.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 *     CmpDoFileWrite @ 0x1403F7EE8 (CmpDoFileWrite.c)
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     CmpInitHiveFromFile @ 0x1403F89AC (CmpInitHiveFromFile.c)
 *     CmpAddSecurityCellToCache @ 0x1403FA268 (CmpAddSecurityCellToCache.c)
 *     CmpLockIXLockIntent @ 0x1403FBBB4 (CmpLockIXLockIntent.c)
 *     IopGetLegacyVetoListDrivers @ 0x140404424 (IopGetLegacyVetoListDrivers.c)
 *     SepAppendAceToTokenObjectAcl @ 0x140405960 (SepAppendAceToTokenObjectAcl.c)
 *     ObpGetObjectSecurity @ 0x140405BA0 (ObpGetObjectSecurity.c)
 *     SeOpenObjectAuditAlarmWithTransaction @ 0x140405F60 (SeOpenObjectAuditAlarmWithTransaction.c)
 *     EtwpGetGuidSecurityDescriptor @ 0x140406DCC (EtwpGetGuidSecurityDescriptor.c)
 *     EtwpSetProviderTraitsUm @ 0x14040851C (EtwpSetProviderTraitsUm.c)
 *     AlpcAddHandleTableEntry @ 0x14040AD10 (AlpcAddHandleTableEntry.c)
 *     EtwpAddRegEntryToGroup @ 0x14040B73C (EtwpAddRegEntryToGroup.c)
 *     AlpcpAllocateBlob @ 0x14040C4E4 (AlpcpAllocateBlob.c)
 *     SepCaptureUnicodeStringArray @ 0x140410BD0 (SepCaptureUnicodeStringArray.c)
 *     SeCaptureUnicodeStringStructures @ 0x140410DD0 (SeCaptureUnicodeStringStructures.c)
 *     SepDuplicateToken @ 0x140411A90 (SepDuplicateToken.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 *     ObpCaptureObjectName @ 0x1404188B0 (ObpCaptureObjectName.c)
 *     PfpCopyUserPfnPrioRequest @ 0x14041A0E0 (PfpCopyUserPfnPrioRequest.c)
 *     ObpAllocateObject @ 0x14041A9D0 (ObpAllocateObject.c)
 *     RtlpNewSecurityObject @ 0x14041AE00 (RtlpNewSecurityObject.c)
 *     FsRtlAllocateExtraCreateParameterFromLookasideList @ 0x14041CA30 (FsRtlAllocateExtraCreateParameterFromLookasideList.c)
 *     RtlpCombineAcls @ 0x14041D100 (RtlpCombineAcls.c)
 *     ObLogSecurityDescriptor @ 0x14041EBB0 (ObLogSecurityDescriptor.c)
 *     SepCreateImpersonationTokenDacl @ 0x14041FB20 (SepCreateImpersonationTokenDacl.c)
 *     SeCaptureSecurityDescriptor @ 0x14041FD80 (SeCaptureSecurityDescriptor.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MiMapViewOfImageSection @ 0x140428990 (MiMapViewOfImageSection.c)
 *     MmEnumerateAddressSpaceAndReferenceImages @ 0x1404294F0 (MmEnumerateAddressSpaceAndReferenceImages.c)
 *     MiAddSecureEntry @ 0x140429A00 (MiAddSecureEntry.c)
 *     EtwpEnumerateAddressSpace @ 0x140429D0C (EtwpEnumerateAddressSpace.c)
 *     MmPrefetchPagesEx @ 0x14042AFAC (MmPrefetchPagesEx.c)
 *     MiInsertSharedCommitNode @ 0x14042D550 (MiInsertSharedCommitNode.c)
 *     MiCopyToCfgBitMap @ 0x14042E0B0 (MiCopyToCfgBitMap.c)
 *     MiPfPrepareSequentialReadList @ 0x14042F1C0 (MiPfPrepareSequentialReadList.c)
 *     MiAllocateVirtualMemory @ 0x14042FD50 (MiAllocateVirtualMemory.c)
 *     MiMapViewOfDataSection @ 0x140434390 (MiMapViewOfDataSection.c)
 *     SeQueryInformationToken @ 0x140438EC0 (SeQueryInformationToken.c)
 *     CmpCheckRegistry2 @ 0x14043DE40 (CmpCheckRegistry2.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     CmpGetValueData @ 0x140441E30 (CmpGetValueData.c)
 *     MiPfPrepareReadList @ 0x140444BC0 (MiPfPrepareReadList.c)
 *     AlpcpCaptureMessageDataSafe @ 0x14044B480 (AlpcpCaptureMessageDataSafe.c)
 *     ObWaitForMultipleObjects @ 0x14044DCA0 (ObWaitForMultipleObjects.c)
 *     ObpLookupObjectName @ 0x14044E320 (ObpLookupObjectName.c)
 *     ExpGetProcessInformation @ 0x1404502B0 (ExpGetProcessInformation.c)
 *     CmpCallCallBacks @ 0x1404518D0 (CmpCallCallBacks.c)
 *     IopCreateFile @ 0x14045A850 (IopCreateFile.c)
 *     EtwpQueryProcessCommandLine @ 0x14045CB04 (EtwpQueryProcessCommandLine.c)
 *     ObCheckRefTraceProcess @ 0x14045E6E8 (ObCheckRefTraceProcess.c)
 *     SeCaptureLuidAndAttributesArray @ 0x14045F228 (SeCaptureLuidAndAttributesArray.c)
 *     SepAdtTokenRightAdjusted @ 0x14045F320 (SepAdtTokenRightAdjusted.c)
 *     ExpWnfCreateNameInstance @ 0x140461464 (ExpWnfCreateNameInstance.c)
 *     ExpWnfResolveScopeInstance @ 0x140461888 (ExpWnfResolveScopeInstance.c)
 *     ExpWnfWriteStateData @ 0x140462258 (ExpWnfWriteStateData.c)
 *     ExpWnfSubscribeNameInstance @ 0x1404625B4 (ExpWnfSubscribeNameInstance.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspQueryRateControlHistory @ 0x14046804C (PspQueryRateControlHistory.c)
 *     FsRtlpAllocateOplock @ 0x1404695E8 (FsRtlpAllocateOplock.c)
 *     FsRtlpOplockFsctrlInternal @ 0x1404696E8 (FsRtlpOplockFsctrlInternal.c)
 *     MiResolveImageReferences @ 0x14046B54C (MiResolveImageReferences.c)
 *     MiSnapThunk @ 0x14046BA04 (MiSnapThunk.c)
 *     MiAllocateVad @ 0x14046BFD8 (MiAllocateVad.c)
 *     SepAddLuidToIndexEntry @ 0x14046D1AC (SepAddLuidToIndexEntry.c)
 *     PspAllocateProcess @ 0x14046DF00 (PspAllocateProcess.c)
 *     AlpcpAllocateCompletionPacketLookaside @ 0x140470730 (AlpcpAllocateCompletionPacketLookaside.c)
 *     IopCreateDefaultDeviceSecurityDescriptor @ 0x1404727EC (IopCreateDefaultDeviceSecurityDescriptor.c)
 *     IopCreateSecurityDescriptorPerType @ 0x1404728CC (IopCreateSecurityDescriptorPerType.c)
 *     NtCreateSymbolicLinkObject @ 0x1404729FC (NtCreateSymbolicLinkObject.c)
 *     WmipAddProviderIdToPIList @ 0x140473790 (WmipAddProviderIdToPIList.c)
 *     SepQueryNameString @ 0x14047439C (SepQueryNameString.c)
 *     SepGetLowBoxHandlesEntry @ 0x140474800 (SepGetLowBoxHandlesEntry.c)
 *     ObpParseSymbolicLinkEx @ 0x140475040 (ObpParseSymbolicLinkEx.c)
 *     SepSetTokenPackage @ 0x140475884 (SepSetTokenPackage.c)
 *     SepGetLowBoxNumberEntry @ 0x140475ACC (SepGetLowBoxNumberEntry.c)
 *     ObpCaptureBoundaryDescriptor @ 0x140477664 (ObpCaptureBoundaryDescriptor.c)
 *     SepSetTokenCapabilities @ 0x14047791C (SepSetTokenCapabilities.c)
 *     SepLengthSidAndAttributesArray @ 0x140477A64 (SepLengthSidAndAttributesArray.c)
 *     SeCaptureSidAndAttributesArray @ 0x140477B10 (SeCaptureSidAndAttributesArray.c)
 *     SeCaptureSid @ 0x14047807C (SeCaptureSid.c)
 *     SepCreateClaimAttributes @ 0x1404784D8 (SepCreateClaimAttributes.c)
 *     SeCaptureAcl @ 0x140479ABC (SeCaptureAcl.c)
 *     SepExpandDynamic @ 0x140479DE4 (SepExpandDynamic.c)
 *     SepFilterToken @ 0x140479EC4 (SepFilterToken.c)
 *     SepCaptureTokenSecurityAttributesAndOperationsInformation @ 0x14047B1E0 (SepCaptureTokenSecurityAttributesAndOperationsInformation.c)
 *     SepCaptureTokenSecurityAttributesInformation @ 0x14047B324 (SepCaptureTokenSecurityAttributesInformation.c)
 *     SepCaptureInt64Array @ 0x14047B78C (SepCaptureInt64Array.c)
 *     CmpCanGrowHive @ 0x14047CB30 (CmpCanGrowHive.c)
 *     HvpMapHiveImageFromFile @ 0x14047DE28 (HvpMapHiveImageFromFile.c)
 *     CmpInitializeHive @ 0x14047DED8 (CmpInitializeHive.c)
 *     CmCheckRegistry @ 0x14047F0C8 (CmCheckRegistry.c)
 *     MiAllocateFixupVad @ 0x14047F5F8 (MiAllocateFixupVad.c)
 *     HvStoreModifiedData @ 0x14047FC40 (HvStoreModifiedData.c)
 *     HvpGenerateLogEntry @ 0x140480044 (HvpGenerateLogEntry.c)
 *     HvpFindNextDirtyBlock @ 0x14048031C (HvpFindNextDirtyBlock.c)
 *     MiConstructLoaderEntry @ 0x14048115C (MiConstructLoaderEntry.c)
 *     HvWriteHivePrimaryFile @ 0x1404827F8 (HvWriteHivePrimaryFile.c)
 *     MiObtainSectionForDriver @ 0x140482AA0 (MiObtainSectionForDriver.c)
 *     MiGenerateSystemImageNames @ 0x140482C50 (MiGenerateSystemImageNames.c)
 *     HvValidateOrInvalidatePrimaryFileHeader @ 0x140482DBC (HvValidateOrInvalidatePrimaryFileHeader.c)
 *     MiDriverLoadSucceeded @ 0x140482EC8 (MiDriverLoadSucceeded.c)
 *     PnpDisableDeviceInterfaces @ 0x14048367C (PnpDisableDeviceInterfaces.c)
 *     PnpProcessQueryRemoveAndEject @ 0x140484DD0 (PnpProcessQueryRemoveAndEject.c)
 *     PnpBuildUnsafeRemovalDeviceList @ 0x1404855C4 (PnpBuildUnsafeRemovalDeviceList.c)
 *     PnpAllocateCriticalMemory @ 0x140485EEC (PnpAllocateCriticalMemory.c)
 *     WmipSDRegistryQueryRoutine @ 0x140486BE4 (WmipSDRegistryQueryRoutine.c)
 *     PiSwInterfaceCreate @ 0x140486FEC (PiSwInterfaceCreate.c)
 *     PiPnpAddDeviceToPdoDeviceListEnumContext @ 0x1404874F8 (PiPnpAddDeviceToPdoDeviceListEnumContext.c)
 *     PiSwDeviceCreate @ 0x140487BA0 (PiSwDeviceCreate.c)
 *     PiSwPnPInfoInit @ 0x140487C98 (PiSwPnPInfoInit.c)
 *     PnpAllocateMultiSZ @ 0x140487D60 (PnpAllocateMultiSZ.c)
 *     PnpCopyDevPropertyArray @ 0x140487E24 (PnpCopyDevPropertyArray.c)
 *     PnpCopyDevProperty @ 0x140487EE8 (PnpCopyDevProperty.c)
 *     PiSwIrpStartCreateWorker @ 0x1404880D0 (PiSwIrpStartCreateWorker.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404887EC (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventProcessBroadcastNotifications @ 0x140489978 (PiUEventProcessBroadcastNotifications.c)
 *     PnpCreateDeviceEventEntry @ 0x140489C28 (PnpCreateDeviceEventEntry.c)
 *     ConstraintEval @ 0x140489ED0 (ConstraintEval.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14048A778 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x14048A9FC (PiUEventNotifyClient.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048BBB8 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqActionDataCreate @ 0x14048C2A4 (PiDqActionDataCreate.c)
 *     PiDqActionDataGetRequestedProperties @ 0x14048C8D4 (PiDqActionDataGetRequestedProperties.c)
 *     PiDqQueryCreate @ 0x14048CC10 (PiDqQueryCreate.c)
 *     PiDqQueryActionQueueEntryCreate @ 0x14048CEE8 (PiDqQueryActionQueueEntryCreate.c)
 *     PiDqTraceQueryCreate @ 0x14048D044 (PiDqTraceQueryCreate.c)
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 *     PiUEventInitClientRegistrationContext @ 0x14048D918 (PiUEventInitClientRegistrationContext.c)
 *     EtwpAllocGuidEntry @ 0x14048E200 (EtwpAllocGuidEntry.c)
 *     EtwpEnableTrace @ 0x14048E2B8 (EtwpEnableTrace.c)
 *     EtwpCaptureString @ 0x14048E410 (EtwpCaptureString.c)
 *     EtwpRealtimeFlushSavedBuffers @ 0x140490D9C (EtwpRealtimeFlushSavedBuffers.c)
 *     EtwpRealtimeCreateLogfile @ 0x1404910B8 (EtwpRealtimeCreateLogfile.c)
 *     EtwpQueueNotification @ 0x140491640 (EtwpQueueNotification.c)
 *     EtwpAddDataSource @ 0x140491900 (EtwpAddDataSource.c)
 *     EtwpUpdateFilterData @ 0x140492728 (EtwpUpdateFilterData.c)
 *     EtwpAllocDataBlock @ 0x140492958 (EtwpAllocDataBlock.c)
 *     EtwpRegisterProvider @ 0x140492AB4 (EtwpRegisterProvider.c)
 *     EtwpAddKmRegEntry @ 0x140492DF0 (EtwpAddKmRegEntry.c)
 *     EtwpRealtimeNotifyConsumers @ 0x140492EF4 (EtwpRealtimeNotifyConsumers.c)
 *     EtwpFinalizeHeader @ 0x140493704 (EtwpFinalizeHeader.c)
 *     EtwpInitLoggerContext @ 0x140493C40 (EtwpInitLoggerContext.c)
 *     EtwpUpdateFileHeader @ 0x140495264 (EtwpUpdateFileHeader.c)
 *     EtwpCreateNtFileName @ 0x14049574C (EtwpCreateNtFileName.c)
 *     EtwpQueueReply @ 0x140495948 (EtwpQueueReply.c)
 *     ExUpdateLicenseDataInternal @ 0x140496F04 (ExUpdateLicenseDataInternal.c)
 *     ExpSetKernelDataProtection @ 0x140497CC0 (ExpSetKernelDataProtection.c)
 *     EtwpProcessThreadImageRundown @ 0x140499274 (EtwpProcessThreadImageRundown.c)
 *     MiGetCcAccessLog @ 0x14049A430 (MiGetCcAccessLog.c)
 *     AlpcpCaptureMessageData @ 0x1404A01B8 (AlpcpCaptureMessageData.c)
 *     AlpcpAllocateMessageFunction @ 0x1404A06AC (AlpcpAllocateMessageFunction.c)
 *     NtPrivilegedServiceAuditAlarm @ 0x1404A084C (NtPrivilegedServiceAuditAlarm.c)
 *     NtOpenObjectAuditAlarm @ 0x1404A0ABC (NtOpenObjectAuditAlarm.c)
 *     SepAccessCheckAndAuditAlarm @ 0x1404A1110 (SepAccessCheckAndAuditAlarm.c)
 *     SepProbeAndCaptureString_U @ 0x1404A2118 (SepProbeAndCaptureString_U.c)
 *     MiCreatePagingFileMap @ 0x1404A2750 (MiCreatePagingFileMap.c)
 *     CmLoadKey @ 0x1404A4834 (CmLoadKey.c)
 *     MiAllocateNewTebRegion @ 0x1404A6450 (MiAllocateNewTebRegion.c)
 *     MiCreateVadEventBitmap @ 0x1404A66FC (MiCreateVadEventBitmap.c)
 *     ObpInsertHandleCount @ 0x1404A6DC4 (ObpInsertHandleCount.c)
 *     WmipGetRegistryHideMachine @ 0x1404AA5F4 (WmipGetRegistryHideMachine.c)
 *     FsRtlNotifyFilterChangeDirectory @ 0x1404AA788 (FsRtlNotifyFilterChangeDirectory.c)
 *     FsRtlNotifyFilterChangeDirectoryLite @ 0x1404AAB74 (FsRtlNotifyFilterChangeDirectoryLite.c)
 *     FsRtlNotifyInitializeSync @ 0x1404AAF64 (FsRtlNotifyInitializeSync.c)
 *     FsRtlNotifyFilterReportChange @ 0x1404AAFC0 (FsRtlNotifyFilterReportChange.c)
 *     FsRtlNotifyFilterReportChangeLite @ 0x1404ABA5C (FsRtlNotifyFilterReportChangeLite.c)
 *     SeAppendPrivileges @ 0x1404ACCCC (SeAppendPrivileges.c)
 *     ExpAllocateHandleTable @ 0x1404AD0A8 (ExpAllocateHandleTable.c)
 *     ExpAllocateTablePagedPoolNoZero @ 0x1404AD330 (ExpAllocateTablePagedPoolNoZero.c)
 *     RawInitializeVcb @ 0x1404AD3AC (RawInitializeVcb.c)
 *     ExAllocateCacheAwareRundownProtection @ 0x1404AD4D0 (ExAllocateCacheAwareRundownProtection.c)
 *     NtFlushBuffersFileEx @ 0x1404AF1B0 (NtFlushBuffersFileEx.c)
 *     ExGetPoolTagInfo @ 0x1404AF594 (ExGetPoolTagInfo.c)
 *     PfSnArrayGrow @ 0x1404AFDC0 (PfSnArrayGrow.c)
 *     AlpcpCaptureHandleAttributeInternal @ 0x1404AFEB8 (AlpcpCaptureHandleAttributeInternal.c)
 *     ObpInsertDirectoryEntry @ 0x1404B1AD4 (ObpInsertDirectoryEntry.c)
 *     CcCreateVacbArray @ 0x1404B1B74 (CcCreateVacbArray.c)
 *     MiReserveDriverPtes @ 0x1404B2B08 (MiReserveDriverPtes.c)
 *     ExHandleSPCall2 @ 0x1404B35D4 (ExHandleSPCall2.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     MUIInitializeResourceLock @ 0x1404B42FC (MUIInitializeResourceLock.c)
 *     SepDuplicateSid @ 0x1404B4434 (SepDuplicateSid.c)
 *     EtwpAddProviderToSession @ 0x1404B49F0 (EtwpAddProviderToSession.c)
 *     EtwpFindDebugId @ 0x1404B4B2C (EtwpFindDebugId.c)
 *     PspAllocateRateControl @ 0x1404B57F8 (PspAllocateRateControl.c)
 *     PspAddSchedulingGroupToJobChain @ 0x1404B58A0 (PspAddSchedulingGroupToJobChain.c)
 *     PspInitializeFullProcessImageName @ 0x1404B5B34 (PspInitializeFullProcessImageName.c)
 *     PfSnPreallocatePrefetchHeader @ 0x1404B6F94 (PfSnPreallocatePrefetchHeader.c)
 *     NtRemoveIoCompletionEx @ 0x1404B77E4 (NtRemoveIoCompletionEx.c)
 *     PiNormalizeDeviceText @ 0x1404B7EB8 (PiNormalizeDeviceText.c)
 *     DrvDbGetDeviceIdDriverInfMatches @ 0x1404B8F1C (DrvDbGetDeviceIdDriverInfMatches.c)
 *     CmpMarkIndexDirty @ 0x1404B9C38 (CmpMarkIndexDirty.c)
 *     SddlpAlloc @ 0x1404BAB78 (SddlpAlloc.c)
 *     PspAssignProcessQuotaBlock @ 0x1404BAE98 (PspAssignProcessQuotaBlock.c)
 *     ExpWnfCreateProcessContext @ 0x1404BB634 (ExpWnfCreateProcessContext.c)
 *     CmpLogCheckpoint @ 0x1404BD8D8 (CmpLogCheckpoint.c)
 *     CmpStartRMLog @ 0x1404BE0E4 (CmpStartRMLog.c)
 *     CmpStartCLFSLog @ 0x1404BE47C (CmpStartCLFSLog.c)
 *     PiCMGetDeviceIdList @ 0x1404C0670 (PiCMGetDeviceIdList.c)
 *     AlpcpInitializeCompletionList @ 0x1404C1114 (AlpcpInitializeCompletionList.c)
 *     PiDqObjectActionQueueEntryCreate @ 0x1404C19D4 (PiDqObjectActionQueueEntryCreate.c)
 *     CmpAllocateUnitOfWork @ 0x1404C1A54 (CmpAllocateUnitOfWork.c)
 *     SepAssemblePrivileges @ 0x1404C1BEC (SepAssemblePrivileges.c)
 *     NtSystemDebugControl @ 0x1404C1E48 (NtSystemDebugControl.c)
 *     _RegRtlEnumValue @ 0x1404C26F0 (_RegRtlEnumValue.c)
 *     EtwStartAutoLogger @ 0x1404C3638 (EtwStartAutoLogger.c)
 *     PiDmCacheDataEncode @ 0x1404C3F78 (PiDmCacheDataEncode.c)
 *     PiDqSerializationAlloc @ 0x1404C40B0 (PiDqSerializationAlloc.c)
 *     SPCallServerHandleClepKdf @ 0x1404C4E60 (SPCallServerHandleClepKdf.c)
 *     WmipSecurityMethod @ 0x1404C53C0 (WmipSecurityMethod.c)
 *     PiPnpRtlGetFilteredDeviceList @ 0x1404C5784 (PiPnpRtlGetFilteredDeviceList.c)
 *     MiCreateFixupRecord @ 0x1404C61FC (MiCreateFixupRecord.c)
 *     AlpcpAllocateBuffer @ 0x1404C64F8 (AlpcpAllocateBuffer.c)
 *     SepInformLsaOfDeletedLogon @ 0x1404C7EC0 (SepInformLsaOfDeletedLogon.c)
 *     MmGetPhysicalMemoryRangesEx @ 0x1404C843C (MmGetPhysicalMemoryRangesEx.c)
 *     SepUpdateLogonSessionTrack @ 0x1404C8C18 (SepUpdateLogonSessionTrack.c)
 *     SepCreateLogonSessionTrack @ 0x1404C935C (SepCreateLogonSessionTrack.c)
 *     IopPnPDispatch @ 0x1404C9D24 (IopPnPDispatch.c)
 *     PipAllocateDeviceNode @ 0x1404CB638 (PipAllocateDeviceNode.c)
 *     ObpSetDeviceMap @ 0x1404CBF4C (ObpSetDeviceMap.c)
 *     CmpQueryNameString @ 0x1404CC8A8 (CmpQueryNameString.c)
 *     CmpCheckSecurityCellAccess @ 0x1404CC9B8 (CmpCheckSecurityCellAccess.c)
 *     CmSnapshotRMTxArray @ 0x1404CD238 (CmSnapshotRMTxArray.c)
 *     CmpAdjustSecurityCacheSize @ 0x1404CD300 (CmpAdjustSecurityCacheSize.c)
 *     PipGenerateContainerID @ 0x1404CD548 (PipGenerateContainerID.c)
 *     MiAllocateImportList @ 0x1404CD8D0 (MiAllocateImportList.c)
 *     MiCompressImportList @ 0x1404CDDAC (MiCompressImportList.c)
 *     MIDL_user_allocate @ 0x1404CE664 (MIDL_user_allocate.c)
 *     PiSwDeviceMakeCompatibleIds @ 0x1404CE6F8 (PiSwDeviceMakeCompatibleIds.c)
 *     PiDqAllocateGenericTableEntry @ 0x1404CE884 (PiDqAllocateGenericTableEntry.c)
 *     PiUEventSendDeviceInterfaceArrivalETWEvent @ 0x1404CEFD8 (PiUEventSendDeviceInterfaceArrivalETWEvent.c)
 *     PiDeferSetInterfaceState @ 0x1404CF084 (PiDeferSetInterfaceState.c)
 *     ExpWnfAllocateScopeInstance @ 0x1404CF2F0 (ExpWnfAllocateScopeInstance.c)
 *     PiDqGrowPropertyArray @ 0x1404CF868 (PiDqGrowPropertyArray.c)
 *     ExpCheckPortableOperatingSystem @ 0x1404CF8F8 (ExpCheckPortableOperatingSystem.c)
 *     CmpTransAllocateTrans @ 0x1404CFC84 (CmpTransAllocateTrans.c)
 *     ExpHwidEnsurePropertyBufferLength @ 0x1404CFD80 (ExpHwidEnsurePropertyBufferLength.c)
 *     CmpRecordUnloadEventForHive @ 0x1404D009C (CmpRecordUnloadEventForHive.c)
 *     NtNotifyChangeSession @ 0x1404D04B0 (NtNotifyChangeSession.c)
 *     EtwpExpandFileName @ 0x1404D0974 (EtwpExpandFileName.c)
 *     ExpGenuinePolicyPostProcess @ 0x1404D0D28 (ExpGenuinePolicyPostProcess.c)
 *     ExpWnfRegisterPermanentName @ 0x1404D1140 (ExpWnfRegisterPermanentName.c)
 *     MiCreateRotateView @ 0x1404D151C (MiCreateRotateView.c)
 *     ExpHwidBiosIfGetFirmwareTable @ 0x1404D16B8 (ExpHwidBiosIfGetFirmwareTable.c)
 *     PopPowerRequestAllocate @ 0x1404D17DC (PopPowerRequestAllocate.c)
 *     EtwpCreateUmReplyObject @ 0x1404D182C (EtwpCreateUmReplyObject.c)
 *     ExpWnfPopulateStateData @ 0x1404D19FC (ExpWnfPopulateStateData.c)
 *     PiSwAddPdoAssociation @ 0x1404D1C08 (PiSwAddPdoAssociation.c)
 *     PnpAllocateGenericTableEntry @ 0x1404D2024 (PnpAllocateGenericTableEntry.c)
 *     PoDiagCaptureUsermodeStack @ 0x1404D26F4 (PoDiagCaptureUsermodeStack.c)
 *     EtwpGenerateFileName @ 0x1404D29BC (EtwpGenerateFileName.c)
 *     PerfDiagpRequestState @ 0x1404D305C (PerfDiagpRequestState.c)
 *     PiSwAllocateGenericTableEntry @ 0x1404D34E8 (PiSwAllocateGenericTableEntry.c)
 *     MiInSwapStore @ 0x1404D38C4 (MiInSwapStore.c)
 *     PipGetRegistrySecurityWithFallback @ 0x1404D3FA4 (PipGetRegistrySecurityWithFallback.c)
 *     IoDiskIoAttributionAllocate @ 0x1404D4AC4 (IoDiskIoAttributionAllocate.c)
 *     PspAllocateAndQueryNotificationChannel @ 0x1404D4B6C (PspAllocateAndQueryNotificationChannel.c)
 *     PspEstablishJobHierarchy @ 0x1404D5F88 (PspEstablishJobHierarchy.c)
 *     MmLinkJobProcess @ 0x1404D6388 (MmLinkJobProcess.c)
 *     NtSetInformationVirtualMemory @ 0x1404D6C9C (NtSetInformationVirtualMemory.c)
 *     PfSnAsyncPrefetchWorker @ 0x1404D7A84 (PfSnAsyncPrefetchWorker.c)
 *     PfSnOpenVolumesForPrefetch @ 0x1404D7E18 (PfSnOpenVolumesForPrefetch.c)
 *     ExpHwidProcessDevice @ 0x1404D8978 (ExpHwidProcessDevice.c)
 *     ExpHwidAppendDeviceInfoBlock @ 0x1404D8AA8 (ExpHwidAppendDeviceInfoBlock.c)
 *     IopGetDeviceInterfaces @ 0x1404D9968 (IopGetDeviceInterfaces.c)
 *     _CmOpenCommonClassRegKeyWorker @ 0x1404DAB74 (_CmOpenCommonClassRegKeyWorker.c)
 *     RtlpAllocDeallocQueryBuffer @ 0x1404DB3C4 (RtlpAllocDeallocQueryBuffer.c)
 *     _CmOpenDeviceInterfaceRegKeyWorker @ 0x1404DBB94 (_CmOpenDeviceInterfaceRegKeyWorker.c)
 *     PiCMGetObjectList @ 0x1404DBFC8 (PiCMGetObjectList.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     PiGetDeviceRegProperty @ 0x1404DC820 (PiGetDeviceRegProperty.c)
 *     _RegRtlCreateTreeTransacted @ 0x1404DD804 (_RegRtlCreateTreeTransacted.c)
 *     _PnpOpenPropertiesKey @ 0x1404DDBBC (_PnpOpenPropertiesKey.c)
 *     _CmGetDeviceInterfaceRegKeyPath @ 0x1404DE090 (_CmGetDeviceInterfaceRegKeyPath.c)
 *     _CmGetDeviceMappedPropertyFromRegProp @ 0x1404DE698 (_CmGetDeviceMappedPropertyFromRegProp.c)
 *     PnpGetObjectProperty @ 0x1404DEBF4 (PnpGetObjectProperty.c)
 *     PiCMGetObjectProperty @ 0x1404DF92C (PiCMGetObjectProperty.c)
 *     PiPnpRtlCmActionCallback @ 0x1404DFF48 (PiPnpRtlCmActionCallback.c)
 *     _CmOpenDeviceRegKeyWorker @ 0x1404E0410 (_CmOpenDeviceRegKeyWorker.c)
 *     _RegRtlQueryValue @ 0x1404E09F0 (_RegRtlQueryValue.c)
 *     PiPnpRtlObjectActionCallback @ 0x1404E18C0 (PiPnpRtlObjectActionCallback.c)
 *     _PnpRegQueryValueIndirect @ 0x1404E2E64 (_PnpRegQueryValueIndirect.c)
 *     FsRtlAllocateExtraCreateParameter @ 0x1404E3950 (FsRtlAllocateExtraCreateParameter.c)
 *     PiDmListEnumObjectsWithCallback @ 0x1404E3A48 (PiDmListEnumObjectsWithCallback.c)
 *     PiPnpRtlInterfaceFilterCallback @ 0x1404E3C7C (PiPnpRtlInterfaceFilterCallback.c)
 *     PnpUnicodeStringToWstr @ 0x1404E3F44 (PnpUnicodeStringToWstr.c)
 *     PiPnpRtlObjectEventCreate @ 0x1404E4568 (PiPnpRtlObjectEventCreate.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
 *     FsRtlFindInTunnelCache @ 0x1404E4A10 (FsRtlFindInTunnelCache.c)
 *     PiDqPnPGetObjectProperty @ 0x1404E4B74 (PiDqPnPGetObjectProperty.c)
 *     PnpAllocatePWSTR @ 0x1404E4D00 (PnpAllocatePWSTR.c)
 *     PiPnpRtlOperationAllocateGenericTableEntry @ 0x1404E4EBC (PiPnpRtlOperationAllocateGenericTableEntry.c)
 *     PiDqQueryEvaluateFilter @ 0x1404E55A4 (PiDqQueryEvaluateFilter.c)
 *     PiCMGetRegistryProperty @ 0x1404E5D50 (PiCMGetRegistryProperty.c)
 *     FsRtlAddToTunnelCache @ 0x1404E6068 (FsRtlAddToTunnelCache.c)
 *     _CmGetDeviceInterfaceMappedPropertyFromComposite @ 0x1404E64C8 (_CmGetDeviceInterfaceMappedPropertyFromComposite.c)
 *     DrvDbGetDriverPackageMappedProperty @ 0x1404E69C0 (DrvDbGetDriverPackageMappedProperty.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
 *     PiDmObjectProcessPropertyChange @ 0x1404E832C (PiDmObjectProcessPropertyChange.c)
 *     IoQueryFileDosDeviceName @ 0x1404EB03C (IoQueryFileDosDeviceName.c)
 *     IoVolumeDeviceToDosName @ 0x1404EB0DC (IoVolumeDeviceToDosName.c)
 *     PfpFileBuildReadList @ 0x1404EC098 (PfpFileBuildReadList.c)
 *     IopQueryNameInternal @ 0x1404ECAA0 (IopQueryNameInternal.c)
 *     PfSnPopulateReadList @ 0x1404ED700 (PfSnPopulateReadList.c)
 *     MmCopyVirtualMemory @ 0x1404EEDF0 (MmCopyVirtualMemory.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 *     ObpCallPreOperationCallbacks @ 0x1404F4C10 (ObpCallPreOperationCallbacks.c)
 *     PfpRpFileKeyUpdate @ 0x1404F61C0 (PfpRpFileKeyUpdate.c)
 *     CmpAllocate @ 0x1404F72C4 (CmpAllocate.c)
 *     CmpClaimGlobalQuota @ 0x1404F7320 (CmpClaimGlobalQuota.c)
 *     PspAllocateThread @ 0x1404F8890 (PspAllocateThread.c)
 *     PopPowerInformationInternal @ 0x140500704 (PopPowerInformationInternal.c)
 *     ExpHwidSysVolIfDeviceInfoProvider @ 0x140500954 (ExpHwidSysVolIfDeviceInfoProvider.c)
 *     sub_140500AC0 @ 0x140500AC0 (sub_140500AC0.c)
 *     ExpHwidSysVolIfGetDiskInfo @ 0x140500B70 (ExpHwidSysVolIfGetDiskInfo.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     PopDiagTracePowerRequestCreate @ 0x140503074 (PopDiagTracePowerRequestCreate.c)
 *     ObpAllocateAndQuerySecurityDescriptorInfo @ 0x140504198 (ObpAllocateAndQuerySecurityDescriptorInfo.c)
 *     MiExtendSection @ 0x140504D14 (MiExtendSection.c)
 *     MiCreateDataFileMap @ 0x1405056C4 (MiCreateDataFileMap.c)
 *     MiBuildImageControlArea @ 0x1405065E4 (MiBuildImageControlArea.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiCompressRelocations @ 0x1405082F0 (MiCompressRelocations.c)
 *     MiParseImageCfgBits @ 0x140508740 (MiParseImageCfgBits.c)
 *     MiRevertRelocatedImagePfn @ 0x140509AF8 (MiRevertRelocatedImagePfn.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 *     MiBuildNewCloneDescriptor @ 0x14050A7A4 (MiBuildNewCloneDescriptor.c)
 *     SepScheduleImageVerificationCallbacks @ 0x14050A8D0 (SepScheduleImageVerificationCallbacks.c)
 *     MiAllocateChildVads @ 0x14050ABE0 (MiAllocateChildVads.c)
 *     PnpBusTypeGuidGetIndex @ 0x14050B60C (PnpBusTypeGuidGetIndex.c)
 *     PiBuildDeviceNodeInstancePath @ 0x14050D31C (PiBuildDeviceNodeInstancePath.c)
 *     PiQueryRemovableDeviceOverride @ 0x14050D9CC (PiQueryRemovableDeviceOverride.c)
 *     PipFindDeviceOverrideEntry @ 0x14050DC78 (PipFindDeviceOverrideEntry.c)
 *     PnpGetDeviceLocationStrings @ 0x14050DE68 (PnpGetDeviceLocationStrings.c)
 *     IopQueryDeviceResources @ 0x14050EDDC (IopQueryDeviceResources.c)
 *     PnpGetDeviceResourcesFromRegistry @ 0x14050F164 (PnpGetDeviceResourcesFromRegistry.c)
 *     PiDeviceRegistration @ 0x14050F534 (PiDeviceRegistration.c)
 *     PpForEachDeviceInstanceDriver @ 0x14050F6D0 (PpForEachDeviceInstanceDriver.c)
 *     IopRegisterDeviceInterface @ 0x14050FDE8 (IopRegisterDeviceInterface.c)
 *     PnpCheckDeviceIdsChanged @ 0x140511D78 (PnpCheckDeviceIdsChanged.c)
 *     PnpConcatPWSTR @ 0x140512884 (PnpConcatPWSTR.c)
 *     _CmOpenDeviceContainerRegKeyWorker @ 0x1405135B4 (_CmOpenDeviceContainerRegKeyWorker.c)
 *     AslAlloc @ 0x1405148D4 (AslAlloc.c)
 *     PiUpdateDriverDBCache @ 0x140515734 (PiUpdateDriverDBCache.c)
 *     IopBuildFullDriverPath @ 0x140515EA8 (IopBuildFullDriverPath.c)
 *     IopGetRootDevices @ 0x14051604C (IopGetRootDevices.c)
 *     IopInitializeDeviceInstanceKey @ 0x1405162A0 (IopInitializeDeviceInstanceKey.c)
 *     IopLoadDriver @ 0x140516794 (IopLoadDriver.c)
 *     CmpInitCmRM @ 0x140516F64 (CmpInitCmRM.c)
 *     IopGetDriverNameFromKeyNode @ 0x140517688 (IopGetDriverNameFromKeyNode.c)
 *     IopGetRegistryValue @ 0x14051783C (IopGetRegistryValue.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     CmAddLogForAction @ 0x14051985C (CmAddLogForAction.c)
 *     CmpComputeLogFillLevel @ 0x140519F94 (CmpComputeLogFillLevel.c)
 *     CmpDoTransWriteLogRecord @ 0x14051A0B0 (CmpDoTransWriteLogRecord.c)
 *     CmpInitializeKcbCache @ 0x14051A1F8 (CmpInitializeKcbCache.c)
 *     NtQueryLicenseValue @ 0x14051C200 (NtQueryLicenseValue.c)
 *     ExQueryLicenseValueInternal @ 0x14051C4C0 (ExQueryLicenseValueInternal.c)
 *     RtlpAllocateAtom @ 0x14051CF10 (RtlpAllocateAtom.c)
 *     RtlpSetSecurityObject @ 0x14051DAA0 (RtlpSetSecurityObject.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     MmRotatePhysicalView @ 0x14052871C (MmRotatePhysicalView.c)
 *     MiMapLockedPagesInUserSpace @ 0x140528B40 (MiMapLockedPagesInUserSpace.c)
 *     PiCMGetDeviceInterfaceAlias @ 0x140528EE0 (PiCMGetDeviceInterfaceAlias.c)
 *     IoGetDeviceInterfaceAlias @ 0x140529090 (IoGetDeviceInterfaceAlias.c)
 *     RtlCreateSystemVolumeInformationFolder @ 0x14052A1F8 (RtlCreateSystemVolumeInformationFolder.c)
 *     RtlpSysVolCreateSecurityDescriptor @ 0x14052A408 (RtlpSysVolCreateSecurityDescriptor.c)
 *     RtlpSysVolCheckOwnerAndSecurity @ 0x14052A55C (RtlpSysVolCheckOwnerAndSecurity.c)
 *     IoRegisterPlugPlayNotification @ 0x14052A9FC (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x14052AD9C (PnpDeferNotification.c)
 *     PnpInitializeNotifyEntry @ 0x14052AE60 (PnpInitializeNotifyEntry.c)
 *     WmipCountedToSz @ 0x14052B618 (WmipCountedToSz.c)
 *     PfpRpCHashGrow @ 0x14052BB4C (PfpRpCHashGrow.c)
 *     PopFxTraceDeviceRegistration @ 0x14052C510 (PopFxTraceDeviceRegistration.c)
 *     PopLoggingInformation @ 0x14052C594 (PopLoggingInformation.c)
 *     MmAllocateMappingAddress @ 0x14052C83C (MmAllocateMappingAddress.c)
 *     PiCMGetRelatedDeviceInstance @ 0x14052C9A8 (PiCMGetRelatedDeviceInstance.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D6D4 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052DA3C (EtwpUpdateDisallowedGuids.c)
 *     PopDiagTraceThermalRequest @ 0x14052E238 (PopDiagTraceThermalRequest.c)
 *     PopHiberInitializeResources @ 0x14052F804 (PopHiberInitializeResources.c)
 *     NtInitiatePowerAction @ 0x140531044 (NtInitiatePowerAction.c)
 *     PoInitializeBroadcast @ 0x14053253C (PoInitializeBroadcast.c)
 *     BiGetKeyName @ 0x140532E14 (BiGetKeyName.c)
 *     PfpSourceBuildVaArray @ 0x140533CE8 (PfpSourceBuildVaArray.c)
 *     BiUnloadHiveByName @ 0x1405341F4 (BiUnloadHiveByName.c)
 *     PopLoadResumeContext @ 0x140534390 (PopLoadResumeContext.c)
 *     PerfDiagpSaveActiveDCLLogFileName @ 0x1405345D4 (PerfDiagpSaveActiveDCLLogFileName.c)
 *     PfpServiceMainThreadBoostPrep @ 0x140534B20 (PfpServiceMainThreadBoostPrep.c)
 *     MiSessionCreate @ 0x140535B44 (MiSessionCreate.c)
 *     MiSessionObjectCreate @ 0x140535FE4 (MiSessionObjectCreate.c)
 *     MiSessionCreateInternal @ 0x140536A48 (MiSessionCreateInternal.c)
 *     WmipRegisterOrUpdateDS @ 0x140537360 (WmipRegisterOrUpdateDS.c)
 *     WmipBuildInstanceSet @ 0x1405378A0 (WmipBuildInstanceSet.c)
 *     WmipCachePtrs @ 0x140537D68 (WmipCachePtrs.c)
 *     WmipSendGuidUpdateNotifications @ 0x140537F5C (WmipSendGuidUpdateNotifications.c)
 *     WmipAllocGuidEntry @ 0x140538314 (WmipAllocGuidEntry.c)
 *     WmipQueueNotification @ 0x1405385DC (WmipQueueNotification.c)
 *     PiProcessDriverInstance @ 0x140538D04 (PiProcessDriverInstance.c)
 *     PipCallDriverAddDeviceQueryRoutine @ 0x140538F54 (PipCallDriverAddDeviceQueryRoutine.c)
 *     PiFindDevInstMatch @ 0x14053951C (PiFindDevInstMatch.c)
 *     IopConnectLineBasedInterrupt @ 0x140539828 (IopConnectLineBasedInterrupt.c)
 *     IopConnectMessageBasedInterrupt @ 0x140539D14 (IopConnectMessageBasedInterrupt.c)
 *     IopGetInterruptConnectionData @ 0x14053A04C (IopGetInterruptConnectionData.c)
 *     IopConnectInterrupt @ 0x14053A12C (IopConnectInterrupt.c)
 *     WmipQueueRegWork @ 0x14053ABD0 (WmipQueueRegWork.c)
 *     CmpLightWeightPrepareSetValueKeyUoW @ 0x14053B5C0 (CmpLightWeightPrepareSetValueKeyUoW.c)
 *     CmpLightWeightCreateSetValueData @ 0x14053BA28 (CmpLightWeightCreateSetValueData.c)
 *     BiLoadSystemStore @ 0x14053BB20 (BiLoadSystemStore.c)
 *     BiGetSystemStorePath @ 0x14053BCA4 (BiGetSystemStorePath.c)
 *     BiGetSystemPartition @ 0x14053BD8C (BiGetSystemPartition.c)
 *     SiQuerySystemPartitionInformation @ 0x14053BE54 (SiQuerySystemPartitionInformation.c)
 *     BiEnumerateSubKeys @ 0x14053C7E0 (BiEnumerateSubKeys.c)
 *     BiConvertBootEnvironmentDeviceToNt @ 0x14053CE68 (BiConvertBootEnvironmentDeviceToNt.c)
 *     BiGetNtPartitionPath @ 0x14053CFD0 (BiGetNtPartitionPath.c)
 *     BiTranslateSymbolicLink @ 0x14053D230 (BiTranslateSymbolicLink.c)
 *     BiGetDriveLayoutBlock @ 0x14053D398 (BiGetDriveLayoutBlock.c)
 *     PopBcdSetDefaultResumeObjectElements @ 0x14053D4D4 (PopBcdSetDefaultResumeObjectElements.c)
 *     PopBcdReadElement @ 0x14053D9D8 (PopBcdReadElement.c)
 *     BiGetRegistryValue @ 0x14053DE5C (BiGetRegistryValue.c)
 *     BiCreateKeySecurityDescriptor @ 0x14053E558 (BiCreateKeySecurityDescriptor.c)
 *     BiConvertElementToRegistryData @ 0x14053E864 (BiConvertElementToRegistryData.c)
 *     BiConvertNtDeviceToBootEnvironment @ 0x14053EC9C (BiConvertNtDeviceToBootEnvironment.c)
 *     BiCreatePartitionDevice @ 0x14053ED4C (BiCreatePartitionDevice.c)
 *     BiGetPartitionVhdFilePathFromUnicodeString @ 0x14053F0F4 (BiGetPartitionVhdFilePathFromUnicodeString.c)
 *     BiIssueGetDriveLayoutIoctl @ 0x14053F2C8 (BiIssueGetDriveLayoutIoctl.c)
 *     BiVerifyBootPartition @ 0x14053F474 (BiVerifyBootPartition.c)
 *     PopBcdSetupResumeObject @ 0x14053F610 (PopBcdSetupResumeObject.c)
 *     IoQueryDeviceDescription @ 0x140540064 (IoQueryDeviceDescription.c)
 *     pIoQueryBusDescription @ 0x140540170 (pIoQueryBusDescription.c)
 *     IopGetRegistryKeyInformation @ 0x1405404C4 (IopGetRegistryKeyInformation.c)
 *     WdipSemAllocatePool @ 0x140540620 (WdipSemAllocatePool.c)
 *     IopSymlinkRememberJunction @ 0x140541010 (IopSymlinkRememberJunction.c)
 *     IopSymlinkUpdateECP @ 0x140541110 (IopSymlinkUpdateECP.c)
 *     IopGraftName @ 0x140541568 (IopGraftName.c)
 *     KeAllocateCalloutStackEx @ 0x140541C24 (KeAllocateCalloutStackEx.c)
 *     SiGetFirmwareBootDeviceName @ 0x1405425BC (SiGetFirmwareBootDeviceName.c)
 *     SiTranslateSymbolicLink @ 0x140542818 (SiTranslateSymbolicLink.c)
 *     SiGetRegistryValue @ 0x140542A5C (SiGetRegistryValue.c)
 *     NtPrivilegeObjectAuditAlarm @ 0x14054328C (NtPrivilegeObjectAuditAlarm.c)
 *     IopDeviceObjectFromSymbolicName @ 0x140543730 (IopDeviceObjectFromSymbolicName.c)
 *     PiSwUpdateArrayProperties @ 0x140543E10 (PiSwUpdateArrayProperties.c)
 *     MmCallDllInitialize @ 0x1405447E0 (MmCallDllInitialize.c)
 *     MiFormFullImageName @ 0x140544B88 (MiFormFullImageName.c)
 *     PnpUnloadAttachedDriver @ 0x1405452B8 (PnpUnloadAttachedDriver.c)
 *     MiRememberUnloadedDriver @ 0x140546064 (MiRememberUnloadedDriver.c)
 *     IoWMIDeviceObjectToInstanceName @ 0x140546A10 (IoWMIDeviceObjectToInstanceName.c)
 *     EtwpCCSwapStart @ 0x140546E24 (EtwpCCSwapStart.c)
 *     TtmNotifyDeviceArrival @ 0x140546F5C (TtmNotifyDeviceArrival.c)
 *     IoWMIQuerySingleInstance @ 0x140547554 (IoWMIQuerySingleInstance.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x140548380 (NtQuerySystemEnvironmentValueEx.c)
 *     PopSetHiberFileMcb @ 0x140548934 (PopSetHiberFileMcb.c)
 *     SepInitializeLowBoxNumberTable @ 0x1405489BC (SepInitializeLowBoxNumberTable.c)
 *     EtwpSetProviderTraitsKm @ 0x140549074 (EtwpSetProviderTraitsKm.c)
 *     WmipSendEnableDisableRequest @ 0x140549D74 (WmipSendEnableDisableRequest.c)
 *     SepCleanupLUIDDeviceMapDirectory @ 0x14054A1B4 (SepCleanupLUIDDeviceMapDirectory.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14054AB30 (SepInformFileSystemsOfDeletedLogon.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14054B3D8 (EtwpCrimsonProvEnableCallback.c)
 *     MmGetChannelInformation @ 0x14054C77C (MmGetChannelInformation.c)
 *     ExpOsProductCacheProviderHelper @ 0x14054CA7C (ExpOsProductCacheProviderHelper.c)
 *     PopLogSleepDisabled @ 0x14054CF98 (PopLogSleepDisabled.c)
 *     IoCreateSystemThread @ 0x14054D0A0 (IoCreateSystemThread.c)
 *     ExAllocateCallBack @ 0x14054D210 (ExAllocateCallBack.c)
 *     PiDmListInitEnumCallback @ 0x14054D4C0 (PiDmListInitEnumCallback.c)
 *     PnpSetInterruptInformation @ 0x14054D8C8 (PnpSetInterruptInformation.c)
 *     KeInitializeTimerTable @ 0x14054E710 (KeInitializeTimerTable.c)
 *     PpmIdleRegisterDefaultStates @ 0x14054EE80 (PpmIdleRegisterDefaultStates.c)
 *     MiCreateNodeLists @ 0x14054F9A0 (MiCreateNodeLists.c)
 *     PnpHardwareConfigCreateBootDriverFlags @ 0x14054FF60 (PnpHardwareConfigCreateBootDriverFlags.c)
 *     IopCreateArcName @ 0x1405501C4 (IopCreateArcName.c)
 *     RtlGenerateClass5Guid @ 0x1405506EC (RtlGenerateClass5Guid.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140550C10 (IoRegisterFsRegistrationChangeMountAware.c)
 *     WmipAddMofResource @ 0x140551180 (WmipAddMofResource.c)
 *     WmipInsertMofResource @ 0x140551338 (WmipInsertMofResource.c)
 *     IoRegisterLastChanceShutdownNotification @ 0x140551470 (IoRegisterLastChanceShutdownNotification.c)
 *     IoRegisterShutdownNotification @ 0x1405514E0 (IoRegisterShutdownNotification.c)
 *     CmpRegisterCallbackInternal @ 0x14055163C (CmpRegisterCallbackInternal.c)
 *     VrpInitializeLoadedDifferencingHives @ 0x140551828 (VrpInitializeLoadedDifferencingHives.c)
 *     IoCreateDriver @ 0x1405518C4 (IoCreateDriver.c)
 *     PiDrvDbRegisterNode @ 0x140552028 (PiDrvDbRegisterNode.c)
 *     PiDrvDbCreateNode @ 0x14055211C (PiDrvDbCreateNode.c)
 *     PsRegisterSiloMonitor @ 0x1405523D8 (PsRegisterSiloMonitor.c)
 *     ObCreateObjectTypeEx @ 0x140552594 (ObCreateObjectTypeEx.c)
 *     ObpCreateDefaultObjectTypeSD @ 0x140552C6C (ObpCreateDefaultObjectTypeSD.c)
 *     CcInitializeProcessor @ 0x140552DC0 (CcInitializeProcessor.c)
 *     ObInitializeProcessor @ 0x140552E70 (ObInitializeProcessor.c)
 *     IoInitializeProcessor @ 0x140552F84 (IoInitializeProcessor.c)
 *     EtwInitialize @ 0x1405531AC (EtwInitialize.c)
 *     EtwInitializeProcessor @ 0x1405531DC (EtwInitializeProcessor.c)
 *     SepInitializationPhase1 @ 0x140553520 (SepInitializationPhase1.c)
 *     ExRegisterHost @ 0x140553960 (ExRegisterHost.c)
 *     EmpProviderRegister @ 0x14055474C (EmpProviderRegister.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     IopCreateCmResourceList @ 0x1405550E0 (IopCreateCmResourceList.c)
 *     IopCombineCmResourceList @ 0x1405551AC (IopCombineCmResourceList.c)
 *     IoReportDetectedDevice @ 0x14055523C (IoReportDetectedDevice.c)
 *     HeadlessTerminalAddResources @ 0x14055592C (HeadlessTerminalAddResources.c)
 *     PnpLogDeviceConflictingResource @ 0x140555A04 (PnpLogDeviceConflictingResource.c)
 *     ArbInitializeArbiterInstance @ 0x140555B88 (ArbInitializeArbiterInstance.c)
 *     PnpLookupArbitersNewResources @ 0x140556538 (PnpLookupArbitersNewResources.c)
 *     PnpBuildCmResourceList @ 0x14055690C (PnpBuildCmResourceList.c)
 *     IopChildToRootTranslation @ 0x140556D90 (IopChildToRootTranslation.c)
 *     IopResourceRequirementsListToReqList @ 0x140556FA0 (IopResourceRequirementsListToReqList.c)
 *     IopSetupArbiterAndTranslators @ 0x1405574E8 (IopSetupArbiterAndTranslators.c)
 *     IopQueryResourceHandlerInterface @ 0x140557A7C (IopQueryResourceHandlerInterface.c)
 *     PnpCmResourcesToIoResources @ 0x140557F1C (PnpCmResourcesToIoResources.c)
 *     IopTranslateAndAdjustReqDesc @ 0x140558158 (IopTranslateAndAdjustReqDesc.c)
 *     PnpFilterResourceRequirementsList @ 0x140558924 (PnpFilterResourceRequirementsList.c)
 *     ArbAddOrdering @ 0x140559540 (ArbAddOrdering.c)
 *     ArbpBuildAllocationStack @ 0x140559CCC (ArbpBuildAllocationStack.c)
 *     ArbpGetRegistryValue @ 0x14055ABBC (ArbpGetRegistryValue.c)
 *     ArbInitializeOrderingList @ 0x14055AF18 (ArbInitializeOrderingList.c)
 *     ArbPruneOrdering @ 0x14055AFB8 (ArbPruneOrdering.c)
 *     ArbAddMmConfigRangeAsBootReserved @ 0x14055B3D0 (ArbAddMmConfigRangeAsBootReserved.c)
 *     CmpInitializeNameCache @ 0x14055BB7C (CmpInitializeNameCache.c)
 *     CmSetAcpiHwProfile @ 0x14055BF28 (CmSetAcpiHwProfile.c)
 *     CmpGetAcpiProfileInformation @ 0x14055C5D8 (CmpGetAcpiProfileInformation.c)
 *     CmpInitializeRegistryNode @ 0x14055D330 (CmpInitializeRegistryNode.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x14055E9A4 (CmpMountPreloadedHives.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x14055EA88 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x14055EC7C (CmpHiveRootSecurityDescriptor.c)
 *     RtlpMuiRegCreateRegistryInfo @ 0x1405607C8 (RtlpMuiRegCreateRegistryInfo.c)
 *     LdrpQueryValueKey @ 0x140561174 (LdrpQueryValueKey.c)
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
 *     PiDmObjectManagerPopulate @ 0x1405645E8 (PiDmObjectManagerPopulate.c)
 *     PiDmObjectCreate @ 0x14056471C (PiDmObjectCreate.c)
 *     PopFxRegisterDeviceWorker @ 0x140567268 (PopFxRegisterDeviceWorker.c)
 *     PopPepRegisterDevice @ 0x1405679BC (PopPepRegisterDevice.c)
 *     PopFxConvertV1Components @ 0x140567D48 (PopFxConvertV1Components.c)
 *     PipAddBindingId @ 0x1405682F8 (PipAddBindingId.c)
 *     PipCreateDependencyNode @ 0x140568418 (PipCreateDependencyNode.c)
 *     MmStoreRegister @ 0x140568500 (MmStoreRegister.c)
 *     MiCreatePagingFile @ 0x140568764 (MiCreatePagingFile.c)
 *     MiCreatePagefile @ 0x140569278 (MiCreatePagefile.c)
 *     MiCreatePageFileSpaceBitmaps @ 0x140569560 (MiCreatePageFileSpaceBitmaps.c)
 *     PpmRegisterPerfStates @ 0x140569AC8 (PpmRegisterPerfStates.c)
 *     PpmAllocatePerfCheck @ 0x14056A464 (PpmAllocatePerfCheck.c)
 *     PpmIdleInitializeConcurrency @ 0x14056A9F0 (PpmIdleInitializeConcurrency.c)
 *     PpmPerfResizeHistoryAll @ 0x14056B1B4 (PpmPerfResizeHistoryAll.c)
 *     AdtpEtwBuildString @ 0x14056B5D4 (AdtpEtwBuildString.c)
 *     AdtpBuildMessageString @ 0x14056B690 (AdtpBuildMessageString.c)
 *     SepGetLogonSessionAccountInfo @ 0x14056B904 (SepGetLogonSessionAccountInfo.c)
 *     SepRmGlobalSaclSetWrkr @ 0x14056BBA8 (SepRmGlobalSaclSetWrkr.c)
 *     SepRmFetchGlobalSacl @ 0x14056BC30 (SepRmFetchGlobalSacl.c)
 *     PopRequestShutdownWait @ 0x14056C1C0 (PopRequestShutdownWait.c)
 *     SepReadAndPopulateCapes @ 0x14056C24C (SepReadAndPopulateCapes.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 *     PopConnectToPolicyDevice @ 0x14056C618 (PopConnectToPolicyDevice.c)
 *     PoCreateThermalRequest @ 0x14056CA08 (PoCreateThermalRequest.c)
 *     PopAssociateThermalRequest @ 0x14056CB00 (PopAssociateThermalRequest.c)
 *     PopEnableHiberFile @ 0x14056CD38 (PopEnableHiberFile.c)
 *     PopPreallocateHibernateMemory @ 0x14056D238 (PopPreallocateHibernateMemory.c)
 *     PopCreateHiberFile @ 0x14056D474 (PopCreateHiberFile.c)
 *     PopCreateHiberFileSecurityDescriptor @ 0x14056EA90 (PopCreateHiberFileSecurityDescriptor.c)
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
 *     PfTAllocateBuffers @ 0x140572C40 (PfTAllocateBuffers.c)
 *     PfpCreateEvent @ 0x140572DA0 (PfpCreateEvent.c)
 *     PiDmAllocateGenericTableEntry @ 0x140573118 (PiDmAllocateGenericTableEntry.c)
 *     MiMapViewOfPhysicalSection @ 0x140573180 (MiMapViewOfPhysicalSection.c)
 *     PiGetDefaultMessageString @ 0x140574B00 (PiGetDefaultMessageString.c)
 *     PipApplyFunctionToServiceInstances @ 0x140574C5C (PipApplyFunctionToServiceInstances.c)
 *     WheapInitializeErrorSource @ 0x140574EB4 (WheapInitializeErrorSource.c)
 *     CmLockKeyForWrite @ 0x140575108 (CmLockKeyForWrite.c)
 *     ?AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z @ 0x140575378 (-AllocatePool@PC_ENVIRONMENT@@SAPEAXKEK@Z.c)
 *     ExAllocatePrivateWorkerPool @ 0x140575A48 (ExAllocatePrivateWorkerPool.c)
 *     WmipLegacyEtwCallback @ 0x140576238 (WmipLegacyEtwCallback.c)
 *     WmipRegisterEtwProvider @ 0x14057638C (WmipRegisterEtwProvider.c)
 *     WmipQueueLegacyEtwWork @ 0x14057645C (WmipQueueLegacyEtwWork.c)
 *     IoRegisterBootDriverReinitialization @ 0x140576C90 (IoRegisterBootDriverReinitialization.c)
 *     IoRegisterDriverReinitialization @ 0x140576D04 (IoRegisterDriverReinitialization.c)
 *     WmipGenerateMofResourceNotification @ 0x140577218 (WmipGenerateMofResourceNotification.c)
 *     FsRtlGetTunnelParameterValue @ 0x14057737C (FsRtlGetTunnelParameterValue.c)
 *     MmGetNodeChannelRanges @ 0x140577504 (MmGetNodeChannelRanges.c)
 *     CmpInitializeSystemHivesLoad @ 0x140577634 (CmpInitializeSystemHivesLoad.c)
 *     NtSetUuidSeed @ 0x1405778D8 (NtSetUuidSeed.c)
 *     PiDcInitUpdateProperties @ 0x140577CF8 (PiDcInitUpdateProperties.c)
 *     FsRtlpRegisterProviderWithMUP @ 0x140578884 (FsRtlpRegisterProviderWithMUP.c)
 *     PpmRegisterProfiles @ 0x140578A20 (PpmRegisterProfiles.c)
 *     DrvDbOpenContext @ 0x140578EA0 (DrvDbOpenContext.c)
 *     DrvDbCreateDatabaseNode @ 0x1405790F0 (DrvDbCreateDatabaseNode.c)
 *     PfSnPrefetchCacheCtxStart @ 0x1405792E4 (PfSnPrefetchCacheCtxStart.c)
 *     ObRegisterCallbacks @ 0x140579658 (ObRegisterCallbacks.c)
 *     MiConvertInitialMemoryBlock @ 0x140579938 (MiConvertInitialMemoryBlock.c)
 *     PspAllocStorage @ 0x140579A30 (PspAllocStorage.c)
 *     _PnpCtxOpenMachine @ 0x140579A88 (_PnpCtxOpenMachine.c)
 *     _SysCtxOpenMachine @ 0x140579C44 (_SysCtxOpenMachine.c)
 *     ObpInitializeRootNamespace @ 0x140579EB4 (ObpInitializeRootNamespace.c)
 *     ObpGetDosDevicesProtection @ 0x14057A388 (ObpGetDosDevicesProtection.c)
 *     SepSetSystemPaths @ 0x14057A5A8 (SepSetSystemPaths.c)
 *     PiDevCfgQueryObjectProperties @ 0x14057AE94 (PiDevCfgQueryObjectProperties.c)
 *     ExpRegisterFirmwareTableInformationHandler @ 0x14057B01C (ExpRegisterFirmwareTableInformationHandler.c)
 *     WheapLogInitEvent @ 0x14057B148 (WheapLogInitEvent.c)
 *     SepBuildDefaultCap @ 0x14057B560 (SepBuildDefaultCap.c)
 *     _PnpGetEnumSecurityDescriptor @ 0x14057B5F8 (_PnpGetEnumSecurityDescriptor.c)
 *     PnpAllocateDeviceInstancePath @ 0x14057B92C (PnpAllocateDeviceInstancePath.c)
 *     AlpcpInitSystem @ 0x14057C1B8 (AlpcpInitSystem.c)
 *     AlpcpInitializeMessageLog @ 0x14057C480 (AlpcpInitializeMessageLog.c)
 *     IoRegisterContainerNotification @ 0x14057C5D0 (IoRegisterContainerNotification.c)
 *     ExpGetSystemPlatformBinary @ 0x14057C9E8 (ExpGetSystemPlatformBinary.c)
 *     IopCreateVpb @ 0x14057DE7C (IopCreateVpb.c)
 *     ExpWnfAllocateScopeMap @ 0x14057DEE4 (ExpWnfAllocateScopeMap.c)
 *     PnpMergeFilteredResourceRequirementsList @ 0x14057E1C4 (PnpMergeFilteredResourceRequirementsList.c)
 *     SeRegisterLogonSessionTerminatedRoutineEx @ 0x14057EB98 (SeRegisterLogonSessionTerminatedRoutineEx.c)
 *     ExGetSystemFirmwareTable @ 0x14057EE4C (ExGetSystemFirmwareTable.c)
 *     CmpAddStringToMapping @ 0x14057F61C (CmpAddStringToMapping.c)
 *     IoInitializeTimer @ 0x14057FB9C (IoInitializeTimer.c)
 *     PopExtendConnectionState @ 0x14057FE48 (PopExtendConnectionState.c)
 *     PiDcAllocateGenericTableEntry @ 0x140580588 (PiDcAllocateGenericTableEntry.c)
 *     CcAllocateObcb @ 0x1405F8FB8 (CcAllocateObcb.c)
 *     CmpSaveBootControlSet @ 0x1405F9148 (CmpSaveBootControlSet.c)
 *     NtQueryOpenSubKeysEx @ 0x1405F9BC0 (NtQueryOpenSubKeysEx.c)
 *     CmSetCallbackObjectContext @ 0x1405FB060 (CmSetCallbackObjectContext.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1405FC44C (CmpDoQueueSystemHiveHysteresis.c)
 *     CmVirtualKCBToRealPath @ 0x140600410 (CmVirtualKCBToRealPath.c)
 *     CmpBuildAdminInformation @ 0x140600550 (CmpBuildAdminInformation.c)
 *     CmpBuildVirtualReplicationStack @ 0x1406008BC (CmpBuildVirtualReplicationStack.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140601B14 (CmpVEExecuteVirtualStoreParseLogic.c)
 *     CmpCheckExeOwnerForPca @ 0x140601EA4 (CmpCheckExeOwnerForPca.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140602518 (CmpDoAccessCheckOnSubtree.c)
 *     CmpCmdRenameHive @ 0x140603608 (CmpCmdRenameHive.c)
 *     CmpDiskFullWarning @ 0x1406036C8 (CmpDiskFullWarning.c)
 *     CmpClearKeyAccessBits @ 0x140603828 (CmpClearKeyAccessBits.c)
 *     CmInitializeProcessor @ 0x14060397C (CmInitializeProcessor.c)
 *     CmpSnapshotHiveToOffsetArray @ 0x1406048E8 (CmpSnapshotHiveToOffsetArray.c)
 *     HvWriteExternal @ 0x1406065A8 (HvWriteExternal.c)
 *     CmDeleteKeyRecursive @ 0x140606EA4 (CmDeleteKeyRecursive.c)
 *     CmpCloneHwProfile @ 0x140607264 (CmpCloneHwProfile.c)
 *     CmpCopySyncTree @ 0x140608258 (CmpCopySyncTree.c)
 *     CmpCopySyncTree2 @ 0x1406082F4 (CmpCopySyncTree2.c)
 *     CmpMergeKeyValues @ 0x14060903C (CmpMergeKeyValues.c)
 *     CmpPreserveSystemHiveData @ 0x140609204 (CmpPreserveSystemHiveData.c)
 *     CmpAllocateLayerInfoForKcb @ 0x14060B89C (CmpAllocateLayerInfoForKcb.c)
 *     CmpLoadHiveVolatile @ 0x14060D390 (CmpLoadHiveVolatile.c)
 *     CmpUndoDeleteKeyForTransEx @ 0x14060DE14 (CmpUndoDeleteKeyForTransEx.c)
 *     CmpLightWeightCreateModificationData @ 0x14060EBD4 (CmpLightWeightCreateModificationData.c)
 *     CmpLightWeightPrepareDeleteValueKeyUoW @ 0x14060F140 (CmpLightWeightPrepareDeleteValueKeyUoW.c)
 *     CmpLightWeightPrepareSetSecDescUoW @ 0x14060F6D8 (CmpLightWeightPrepareSetSecDescUoW.c)
 *     CmpSnapshotTxOwnerArray @ 0x14060F9F0 (CmpSnapshotTxOwnerArray.c)
 *     HvpViewMapPrefetchFile @ 0x140610128 (HvpViewMapPrefetchFile.c)
 *     HvpReviveDiscardedBin @ 0x140610950 (HvpReviveDiscardedBin.c)
 *     HvpGetLogHeader @ 0x140610B28 (HvpGetLogHeader.c)
 *     HvpRecoverData @ 0x14061136C (HvpRecoverData.c)
 *     HvpRecoverDataReadRoutine @ 0x1406115C8 (HvpRecoverDataReadRoutine.c)
 *     CmpAddRemoveContainerToCLFSLog @ 0x1406116F4 (CmpAddRemoveContainerToCLFSLog.c)
 *     VrpProcessBufferParameter @ 0x1406130C4 (VrpProcessBufferParameter.c)
 *     VrpHandleIoctlCreateMultipleNamespaceNodes @ 0x14061318C (VrpHandleIoctlCreateMultipleNamespaceNodes.c)
 *     VrpHandleIoctlInitializeJobForVreg @ 0x140613808 (VrpHandleIoctlInitializeJobForVreg.c)
 *     VrpHandleIoctlLoadDifferencingHive @ 0x140613AAC (VrpHandleIoctlLoadDifferencingHive.c)
 *     VrpAddNamespaceNodeToList @ 0x1406143E4 (VrpAddNamespaceNodeToList.c)
 *     VrpCreateNamespaceNode @ 0x1406146FC (VrpCreateNamespaceNode.c)
 *     VrpDestroyNamespaceNode @ 0x140614A2C (VrpDestroyNamespaceNode.c)
 *     VrpPostEnumerateKey @ 0x140614E44 (VrpPostEnumerateKey.c)
 *     VrpPostOpenOrCreate @ 0x14061563C (VrpPostOpenOrCreate.c)
 *     VrpPreLoadKey @ 0x140615DBC (VrpPreLoadKey.c)
 *     VrpPreOpenOrCreate @ 0x140616498 (VrpPreOpenOrCreate.c)
 *     VrpAllocateDiffHiveEntry @ 0x140616EFC (VrpAllocateDiffHiveEntry.c)
 *     VrpBuildKeyPath @ 0x140617B98 (VrpBuildKeyPath.c)
 *     DbgkCaptureLiveDump @ 0x14061AEA0 (DbgkCaptureLiveDump.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14061B484 (DbgkpLkmdLaunchSnapApc.c)
 *     DbgkWerAddSecondaryData @ 0x14061BA64 (DbgkWerAddSecondaryData.c)
 *     DbgkWerCaptureLiveKernelDump @ 0x14061BBF0 (DbgkWerCaptureLiveKernelDump.c)
 *     DbgkpWerAllocatePool @ 0x14061BDD8 (DbgkpWerAllocatePool.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14061BDEC (DbgkpWerCaptureLiveFullDump.c)
 *     DbgkpWerCaptureLiveTriageDump @ 0x14061BF68 (DbgkpWerCaptureLiveTriageDump.c)
 *     DbgkpTriageDumpInitialize @ 0x14061C988 (DbgkpTriageDumpInitialize.c)
 *     EmpClientRuleRegisterNotification @ 0x14061CC50 (EmpClientRuleRegisterNotification.c)
 *     EmProviderRegisterEntry @ 0x14061D118 (EmProviderRegisterEntry.c)
 *     FsRtlIsDbcsInExpression @ 0x14061EE30 (FsRtlIsDbcsInExpression.c)
 *     FsRtlpHeatRegisterVolume @ 0x14061F950 (FsRtlpHeatRegisterVolume.c)
 *     FsRtlpQueryValueKey @ 0x14061FB84 (FsRtlpQueryValueKey.c)
 *     HvlpAllocatePageListResources @ 0x140620690 (HvlpAllocatePageListResources.c)
 *     IopAllocateGenericTableEntry @ 0x140620E60 (IopAllocateGenericTableEntry.c)
 *     IopGetRelatedFileName @ 0x140621550 (IopGetRelatedFileName.c)
 *     IopInitializeBootLogging @ 0x140621940 (IopInitializeBootLogging.c)
 *     IopRaiseHardError @ 0x14062212C (IopRaiseHardError.c)
 *     IopSafebootDriverLoad @ 0x140622440 (IopSafebootDriverLoad.c)
 *     IopSendMessageToTrackService @ 0x1406225A0 (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406228A0 (IopSetEaOrQuotaInformationFile.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     IoReplaceFileObjectName @ 0x1406239E0 (IoReplaceFileObjectName.c)
 *     IoIsValidNameGraftingBuffer @ 0x1406246A4 (IoIsValidNameGraftingBuffer.c)
 *     IopSymlinkApplyToOpenedName @ 0x140624E60 (IopSymlinkApplyToOpenedName.c)
 *     IoRegisterIoTracking @ 0x140624FE4 (IoRegisterIoTracking.c)
 *     NtQueryQuotaInformationFile @ 0x140625894 (NtQueryQuotaInformationFile.c)
 *     IoCaptureLiveDump @ 0x140625FE4 (IoCaptureLiveDump.c)
 *     IopLiveDumpAllocAndInitResources @ 0x140626760 (IopLiveDumpAllocAndInitResources.c)
 *     IopLiveDumpAllocateDumpBuffers @ 0x140626D10 (IopLiveDumpAllocateDumpBuffers.c)
 *     IopLiveDumpAllocateMappingResources @ 0x140626EF0 (IopLiveDumpAllocateMappingResources.c)
 *     IopFindSystemDevice @ 0x140629394 (IopFindSystemDevice.c)
 *     IopAppendLegacyVeto @ 0x14062A54C (IopAppendLegacyVeto.c)
 *     PpCreateLegacyDeviceIds @ 0x14062A964 (PpCreateLegacyDeviceIds.c)
 *     PipAddRequestToEdge @ 0x14062AE28 (PipAddRequestToEdge.c)
 *     PnpDeleteDeviceInterfaces @ 0x14062B9BC (PnpDeleteDeviceInterfaces.c)
 *     IopChangeInterfaceType @ 0x14062C464 (IopChangeInterfaceType.c)
 *     IoRequestDeviceRemovalForReset @ 0x14062C590 (IoRequestDeviceRemovalForReset.c)
 *     IopAllocatePassiveInterruptBlock @ 0x14062D0F8 (IopAllocatePassiveInterruptBlock.c)
 *     IopCombineLegacyResources @ 0x14062E734 (IopCombineLegacyResources.c)
 *     IopIsPciRootBus @ 0x14062E824 (IopIsPciRootBus.c)
 *     PiPnpRtlGatherContainerRemoveInfo @ 0x14062ED30 (PiPnpRtlGatherContainerRemoveInfo.c)
 *     PiPnpRtlGatherDeviceDeleteInfo @ 0x14062EDE4 (PiPnpRtlGatherDeviceDeleteInfo.c)
 *     PiPnpRtlGatherInstallerClassChangeInfo @ 0x14062EEF4 (PiPnpRtlGatherInstallerClassChangeInfo.c)
 *     PiPnpRtlGatherInterfaceDeleteInfo @ 0x14062F06C (PiPnpRtlGatherInterfaceDeleteInfo.c)
 *     PiPnpRtlServiceFilterCallback @ 0x14062F344 (PiPnpRtlServiceFilterCallback.c)
 *     PnpRebalance @ 0x140630484 (PnpRebalance.c)
 *     PiDcResetChildDeviceContainerCallback @ 0x140630964 (PiDcResetChildDeviceContainerCallback.c)
 *     PiAuCheckClientInteractive @ 0x140630D6C (PiAuCheckClientInteractive.c)
 *     PiAuCheckTokenMembership @ 0x140630E2C (PiAuCheckTokenMembership.c)
 *     PiDqGetRelativeObjectRegPath @ 0x140631854 (PiDqGetRelativeObjectRegPath.c)
 *     PiDqPnPGetObjectPropertyKeys @ 0x140632150 (PiDqPnPGetObjectPropertyKeys.c)
 *     PiDqPnPGetObjectPropertyLocales @ 0x140632278 (PiDqPnPGetObjectPropertyLocales.c)
 *     PiDevCfgConfigureDevice @ 0x1406332C8 (PiDevCfgConfigureDevice.c)
 *     PiDevCfgConfigureDeviceInterfaces @ 0x140635480 (PiDevCfgConfigureDeviceInterfaces.c)
 *     PiDevCfgConfigureSoftwareDevices @ 0x140635EF8 (PiDevCfgConfigureSoftwareDevices.c)
 *     PiDevCfgConvertPropertyFromValue @ 0x1406360BC (PiDevCfgConvertPropertyFromValue.c)
 *     PiDevCfgCopyDeviceKey @ 0x14063634C (PiDevCfgCopyDeviceKey.c)
 *     PiDevCfgCopyObjectProperties @ 0x140637050 (PiDevCfgCopyObjectProperties.c)
 *     PiDevCfgCopyVariableData @ 0x140637304 (PiDevCfgCopyVariableData.c)
 *     PiDevCfgFindDeviceDriver @ 0x140637B88 (PiDevCfgFindDeviceDriver.c)
 *     PiDevCfgFindDeviceMigrationNode @ 0x1406383DC (PiDevCfgFindDeviceMigrationNode.c)
 *     PiDevCfgGetKeySecurityDescriptor @ 0x140639240 (PiDevCfgGetKeySecurityDescriptor.c)
 *     PiDevCfgInitResolveContext @ 0x1406398C8 (PiDevCfgInitResolveContext.c)
 *     PiDevCfgQueryDeviceMigrationNode @ 0x14063BAA8 (PiDevCfgQueryDeviceMigrationNode.c)
 *     PiDevCfgQueryDriverNode @ 0x14063C2F0 (PiDevCfgQueryDriverNode.c)
 *     PiDevCfgQueryIncludedDriverNode @ 0x14063CD90 (PiDevCfgQueryIncludedDriverNode.c)
 *     PiDevCfgQueryPolicyStringList @ 0x14063D290 (PiDevCfgQueryPolicyStringList.c)
 *     PiDevCfgResolveMultiSzValue @ 0x14063E0AC (PiDevCfgResolveMultiSzValue.c)
 *     PiDevCfgResolveVariable @ 0x14063E438 (PiDevCfgResolveVariable.c)
 *     PiDevCfgResolveVariableConstant @ 0x14063E7E4 (PiDevCfgResolveVariableConstant.c)
 *     PiDevCfgResolveVariableDeviceProperty @ 0x14063E8AC (PiDevCfgResolveVariableDeviceProperty.c)
 *     PiDevCfgResolveVariableExpression @ 0x14063EC90 (PiDevCfgResolveVariableExpression.c)
 *     PiDevCfgResolveVariableFormatString @ 0x14063FE10 (PiDevCfgResolveVariableFormatString.c)
 *     PiDevCfgResolveVariableGenerateGuid @ 0x140640334 (PiDevCfgResolveVariableGenerateGuid.c)
 *     PiDevCfgResolveVariableKeyHandle @ 0x140640500 (PiDevCfgResolveVariableKeyHandle.c)
 *     PiDevCfgResolveVariableKeyValue @ 0x140640CAC (PiDevCfgResolveVariableKeyValue.c)
 *     PiProfileUpdateDeviceTree @ 0x140642074 (PiProfileUpdateDeviceTree.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1406421A4 (PnpProfileUpdateHardwareProfile.c)
 *     IopTranslatorHandlerIo @ 0x1406427E8 (IopTranslatorHandlerIo.c)
 *     PnpAddVetoInformation @ 0x140642844 (PnpAddVetoInformation.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 *     PnprAddMemoryResources @ 0x140643D40 (PnprAddMemoryResources.c)
 *     PnprAddProcessorResources @ 0x140643F24 (PnprAddProcessorResources.c)
 *     PnprAllocateMappingReserves @ 0x140644040 (PnprAllocateMappingReserves.c)
 *     PnprCollectResources @ 0x1406441F8 (PnprCollectResources.c)
 *     PnprGetPluginDriverImagePath @ 0x1406445C0 (PnprGetPluginDriverImagePath.c)
 *     PnprMmAddRange @ 0x1406452B4 (PnprMmAddRange.c)
 *     PiSwQueuedCreateInfoCreate @ 0x1406458EC (PiSwQueuedCreateInfoCreate.c)
 *     PiCMCreateDevice @ 0x1406462C8 (PiCMCreateDevice.c)
 *     PiCMEnumerateSubKeys @ 0x140647748 (PiCMEnumerateSubKeys.c)
 *     PiCMGenerateDeviceInstance @ 0x1406478D0 (PiCMGenerateDeviceInstance.c)
 *     PiCMGetObjectPropertyKeys @ 0x140647CD0 (PiCMGetObjectPropertyKeys.c)
 *     PiCMQueryRemove @ 0x14064810C (PiCMQueryRemove.c)
 *     IopQueryDockRemovalInterface @ 0x14064A004 (IopQueryDockRemovalInterface.c)
 *     PiControlGetDeviceStack @ 0x14064A520 (PiControlGetDeviceStack.c)
 *     PiInitializeDevice @ 0x14064AD78 (PiInitializeDevice.c)
 *     PiQueryDeviceRelations @ 0x14064B190 (PiQueryDeviceRelations.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B4B0 (PnpQueueQueryAndRemoveEvent.c)
 *     IopFileUtilWalkDirectoryTreeBottomUp @ 0x14064C174 (IopFileUtilWalkDirectoryTreeBottomUp.c)
 *     IopFileUtilWalkDirectoryTreeHelper @ 0x14064C398 (IopFileUtilWalkDirectoryTreeHelper.c)
 *     PiAuditDeviceOperation @ 0x14064C804 (PiAuditDeviceOperation.c)
 *     IopExecuteHardwareProfileChange @ 0x14064CEC0 (IopExecuteHardwareProfileChange.c)
 *     PiCreateDriverSwDeviceCallback @ 0x14064D548 (PiCreateDriverSwDeviceCallback.c)
 *     KeInitializeSecondaryInterruptServices @ 0x14064FBD4 (KeInitializeSecondaryInterruptServices.c)
 *     KeInitializeUmsThread @ 0x1406505D4 (KeInitializeUmsThread.c)
 *     AlpcpAllocateMessageFromExtendedTables @ 0x1406551D8 (AlpcpAllocateMessageFromExtendedTables.c)
 *     AlpcpGetPortNameInformation @ 0x140655F60 (AlpcpGetPortNameInformation.c)
 *     AlpcRegisterLogRoutine @ 0x14065655C (AlpcRegisterLogRoutine.c)
 *     AlpcpLogWaitForNewMessage @ 0x140656AA0 (AlpcpLogWaitForNewMessage.c)
 *     MmGetFileNameForAddress @ 0x140656BF4 (MmGetFileNameForAddress.c)
 *     MmGetFileNameForSection @ 0x140656CFC (MmGetFileNameForSection.c)
 *     MiInitializeLockedPagesTracking @ 0x140656FAC (MiInitializeLockedPagesTracking.c)
 *     MiConfigureMemoryInsertion @ 0x140657CE0 (MiConfigureMemoryInsertion.c)
 *     MiConfigureMemoryRemoval @ 0x14065801C (MiConfigureMemoryRemoval.c)
 *     MiLogStrongCodeDriverLoadFailure @ 0x1406596A4 (MiLogStrongCodeDriverLoadFailure.c)
 *     MmSetPermanentCacheAttribute @ 0x1406598E4 (MmSetPermanentCacheAttribute.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 *     MiCopyDirectMapHeader @ 0x14065A9C4 (MiCopyDirectMapHeader.c)
 *     MiAllocateAweInfo @ 0x14065C110 (MiAllocateAweInfo.c)
 *     MiResizeAweBitMap @ 0x14065C910 (MiResizeAweBitMap.c)
 *     NtMapUserPhysicalPages @ 0x14065D810 (NtMapUserPhysicalPages.c)
 *     NtMapUserPhysicalPagesScatter @ 0x14065DC8C (NtMapUserPhysicalPagesScatter.c)
 *     MmLogSystemShareablePfnInfo @ 0x14065E164 (MmLogSystemShareablePfnInfo.c)
 *     MiAllocateEnclaveVad @ 0x14065E5A8 (MiAllocateEnclaveVad.c)
 *     MiCopyPagesIntoEnclave @ 0x14065E930 (MiCopyPagesIntoEnclave.c)
 *     NtCreateEnclave @ 0x14065F9DC (NtCreateEnclave.c)
 *     NtInitializeEnclave @ 0x14065FDAC (NtInitializeEnclave.c)
 *     MiCreatePartition @ 0x14066028C (MiCreatePartition.c)
 *     MiExpandPartitionIds @ 0x140660498 (MiExpandPartitionIds.c)
 *     MiMakePartitionMemoryBlock @ 0x1406608E0 (MiMakePartitionMemoryBlock.c)
 *     MiManagePartition @ 0x140660A88 (MiManagePartition.c)
 *     MiAllocatePerSessionProtos @ 0x1406618FC (MiAllocatePerSessionProtos.c)
 *     MiAllocateLargeZeroPages @ 0x1406621D4 (MiAllocateLargeZeroPages.c)
 *     MiCreateLargePageVad @ 0x1406625E0 (MiCreateLargePageVad.c)
 *     MiFindLargePageMemory @ 0x1406627C8 (MiFindLargePageMemory.c)
 *     MiAllocateCrcList @ 0x1406636D0 (MiAllocateCrcList.c)
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 *     MiInitializeScrubPacket @ 0x140664DC0 (MiInitializeScrubPacket.c)
 *     MiScrubProcesses @ 0x140664F24 (MiScrubProcesses.c)
 *     MmScrubMemory @ 0x140665370 (MmScrubMemory.c)
 *     ObpSetObjectAuditInfo @ 0x140666460 (ObpSetObjectAuditInfo.c)
 *     ObGetObjectInformation @ 0x1406666B0 (ObGetObjectInformation.c)
 *     ObpCreateTypeArray @ 0x140666D20 (ObpCreateTypeArray.c)
 *     ObpGetObjectRefInfo @ 0x140667B6C (ObpGetObjectRefInfo.c)
 *     ObpGetTraceIndex @ 0x140667C84 (ObpGetTraceIndex.c)
 *     ObpInitStackAndObjectTables @ 0x140667E80 (ObpInitStackAndObjectTables.c)
 *     ObpRefillWorkItemFreeList @ 0x1406682A0 (ObpRefillWorkItemFreeList.c)
 *     ObpRegisterObject @ 0x1406682E0 (ObpRegisterObject.c)
 *     ObpStartRuntimeStackTrace @ 0x1406684E8 (ObpStartRuntimeStackTrace.c)
 *     PfpPrefetchFiles @ 0x140668D84 (PfpPrefetchFiles.c)
 *     PfpQueryFileExtentsRequest @ 0x1406691FC (PfpQueryFileExtentsRequest.c)
 *     PopUnicodeStringDeepCopy @ 0x14066A870 (PopUnicodeStringDeepCopy.c)
 *     PpmInstallCoordinatedIdleStates @ 0x14066AC3C (PpmInstallCoordinatedIdleStates.c)
 *     PpmInstallPlatformIdleStates @ 0x14066B1AC (PpmInstallPlatformIdleStates.c)
 *     PopRegisterCoolingExtensionProtection @ 0x14066BDF0 (PopRegisterCoolingExtensionProtection.c)
 *     PoDisableSleepStates @ 0x14066BF50 (PoDisableSleepStates.c)
 *     PopGetPowerRequestListInfo @ 0x14066C138 (PopGetPowerRequestListInfo.c)
 *     PopFxInitializeSocSubsystemStaticInfo @ 0x14066C680 (PopFxInitializeSocSubsystemStaticInfo.c)
 *     PopFxLogSocSubsystemMetadata @ 0x14066CB58 (PopFxLogSocSubsystemMetadata.c)
 *     PopFxPepPerfInfoQuery @ 0x14066CFD8 (PopFxPepPerfInfoQuery.c)
 *     PopFxRegisterComponentPerfStates @ 0x14066D1E8 (PopFxRegisterComponentPerfStates.c)
 *     PopFxVerifyDependencies @ 0x14066D870 (PopFxVerifyDependencies.c)
 *     PopPluginQuerySocSubsystemMetadata @ 0x14066DC78 (PopPluginQuerySocSubsystemMetadata.c)
 *     PopNewWakeSource @ 0x14066E318 (PopNewWakeSource.c)
 *     PopProcessWakeSourceWork @ 0x14066E360 (PopProcessWakeSourceWork.c)
 *     PopWakeSourceGetDeviceProperty @ 0x14066E51C (PopWakeSourceGetDeviceProperty.c)
 *     PopPdcCsDeviceNotification @ 0x14066FFD0 (PopPdcCsDeviceNotification.c)
 *     PopDiagReadLastLogOffEndTime @ 0x140670A94 (PopDiagReadLastLogOffEndTime.c)
 *     PopFxTracePerfRegistration @ 0x1406724D4 (PopFxTracePerfRegistration.c)
 *     PpmEventTraceCoordinatedIdleStates @ 0x140673D60 (PpmEventTraceCoordinatedIdleStates.c)
 *     PpmEventTracePlatformIdleAccounting @ 0x1406740A8 (PpmEventTracePlatformIdleAccounting.c)
 *     PpmEventTraceProcessorIdle @ 0x140674384 (PpmEventTraceProcessorIdle.c)
 *     PpmAllocateQueryTable @ 0x140675A88 (PpmAllocateQueryTable.c)
 *     TtmInitCurrentSession @ 0x14067879C (TtmInitCurrentSession.c)
 *     TtmDispatchApi @ 0x140679460 (TtmDispatchApi.c)
 *     TtmiWriteEventToSingleQueue @ 0x14067A210 (TtmiWriteEventToSingleQueue.c)
 *     PspConvertSiloToServerSilo @ 0x14067E604 (PspConvertSiloToServerSilo.c)
 *     PspCreateSecureThread @ 0x14067F50C (PspCreateSecureThread.c)
 *     PspAddProcessToWorkingSetChangeList @ 0x140680278 (PspAddProcessToWorkingSetChangeList.c)
 *     PspSetJobIoRateControlForVolume @ 0x1406809FC (PspSetJobIoRateControlForVolume.c)
 *     PspSetMinimalProcessName @ 0x140681BD0 (PspSetMinimalProcessName.c)
 *     PspLazyInitializeStorageExpansion @ 0x140682A1C (PspLazyInitializeStorageExpansion.c)
 *     RawQueryFileSystemInformation @ 0x140683588 (RawQueryFileSystemInformation.c)
 *     RtlpComputeMergedAcl @ 0x140683FDC (RtlpComputeMergedAcl.c)
 *     RtlpCreateServerAcl @ 0x1406843E8 (RtlpCreateServerAcl.c)
 *     RtlIdnToUnicode @ 0x1406893D8 (RtlIdnToUnicode.c)
 *     SepAdtOpenObjectAuditAlarm @ 0x14068F610 (SepAdtOpenObjectAuditAlarm.c)
 *     SepAdtStagingEvent @ 0x14069037C (SepAdtStagingEvent.c)
 *     SepQueryTypeString @ 0x140690880 (SepQueryTypeString.c)
 *     SepCaptureAuditPolicy @ 0x140690C64 (SepCaptureAuditPolicy.c)
 *     SepCaptureFqbnArray @ 0x140690D1C (SepCaptureFqbnArray.c)
 *     SepCaptureOctetStringArray @ 0x140690F60 (SepCaptureOctetStringArray.c)
 *     SeOpenObjectForDeleteAuditAlarmWithTransaction @ 0x1406918F0 (SeOpenObjectForDeleteAuditAlarmWithTransaction.c)
 *     SepCreateSidValuesBlock @ 0x140692E2C (SepCreateSidValuesBlock.c)
 *     SeRegisterLogonSessionTerminatedRoutine @ 0x1406934FC (SeRegisterLogonSessionTerminatedRoutine.c)
 *     SepAddTokenLogonSession @ 0x140693730 (SepAddTokenLogonSession.c)
 *     NtFilterBootOption @ 0x140693C88 (NtFilterBootOption.c)
 *     SepSecureBootCorrectBcd @ 0x1406940D0 (SepSecureBootCorrectBcd.c)
 *     SepSecureBootUpdateBcdDataForRule @ 0x1406944E0 (SepSecureBootUpdateBcdDataForRule.c)
 *     SeAdjustObjectAppContainerSecurity @ 0x140694880 (SeAdjustObjectAppContainerSecurity.c)
 *     SepBuildDaclWithAllApplicationPackageSid @ 0x140694A10 (SepBuildDaclWithAllApplicationPackageSid.c)
 *     SepBuildObjectSecurityDescriptor @ 0x140694BB4 (SepBuildObjectSecurityDescriptor.c)
 *     SepDuplicateClaimAttributes @ 0x140695B64 (SepDuplicateClaimAttributes.c)
 *     SepInsertOrReferenceSharedSidEntries @ 0x140695E5C (SepInsertOrReferenceSharedSidEntries.c)
 *     SepReadAndInsertCaps @ 0x14069621C (SepReadAndInsertCaps.c)
 *     SepReadSingleCap @ 0x140696574 (SepReadSingleCap.c)
 *     SmKmStoreFileMakeSecurityDescriptor @ 0x1406995DC (SmKmStoreFileMakeSecurityDescriptor.c)
 *     VmCreateMemoryRange @ 0x14069B3C8 (VmCreateMemoryRange.c)
 *     WdipSemLoadLocalGroupPolicy @ 0x14069BF80 (WdipSemLoadLocalGroupPolicy.c)
 *     IoWMIAllocateInstanceIds @ 0x14069C98C (IoWMIAllocateInstanceIds.c)
 *     IoWMISuggestInstanceName @ 0x14069CFF8 (IoWMISuggestInstanceName.c)
 *     WmipAllocateSingleInstanceWnode @ 0x14069D2AC (WmipAllocateSingleInstanceWnode.c)
 *     WmipGetSysIds @ 0x14069D774 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14069DEEC (WmipDereferenceEvent.c)
 *     WmipIncludeStaticNames @ 0x14069E290 (WmipIncludeStaticNames.c)
 *     WmipQueryAllDataMultiple @ 0x14069E570 (WmipQueryAllDataMultiple.c)
 *     WmipQuerySingleMultiple @ 0x14069E90C (WmipQuerySingleMultiple.c)
 *     WmipUnregisterEtwProvider @ 0x14069F0D0 (WmipUnregisterEtwProvider.c)
 *     WmipGenerateBinaryMofNotification @ 0x14069F174 (WmipGenerateBinaryMofNotification.c)
 *     EtwTimLogRedirectionTrustPolicy @ 0x1406A089C (EtwTimLogRedirectionTrustPolicy.c)
 *     EtwpLogMemInfoWs @ 0x1406A2134 (EtwpLogMemInfoWs.c)
 *     EtwpLogSessionWorkingSetInfo @ 0x1406A26C4 (EtwpLogSessionWorkingSetInfo.c)
 *     EtwpSetPmcProfileSource @ 0x1406A2BB0 (EtwpSetPmcProfileSource.c)
 *     EtwpTraceHandle @ 0x1406A2CC0 (EtwpTraceHandle.c)
 *     EtwpAllocatePmcData @ 0x1406A41C0 (EtwpAllocatePmcData.c)
 *     EtwpCapturePreviousRegistryData @ 0x1406A485C (EtwpCapturePreviousRegistryData.c)
 *     EtwpCaptureRegistryData @ 0x1406A495C (EtwpCaptureRegistryData.c)
 *     EtwpSendDbgId @ 0x1406A5588 (EtwpSendDbgId.c)
 *     EtwpTiQueryVad @ 0x1406A6514 (EtwpTiQueryVad.c)
 *     EtwpTiVadQueryEventWriteCallback @ 0x1406A6654 (EtwpTiVadQueryEventWriteCallback.c)
 *     EtwpEnumerateWorkingSet @ 0x1406A6F28 (EtwpEnumerateWorkingSet.c)
 *     EtwpObjectHandleEnumCallback @ 0x1406A72B4 (EtwpObjectHandleEnumCallback.c)
 *     EtwpObjectTypeRundown @ 0x1406A7548 (EtwpObjectTypeRundown.c)
 *     EtwpPoolRunDown @ 0x1406A76A0 (EtwpPoolRunDown.c)
 *     EtwpProcessorRundown @ 0x1406A7BF8 (EtwpProcessorRundown.c)
 *     EtwpReferenceStackLookasideList @ 0x1406A8420 (EtwpReferenceStackLookasideList.c)
 *     EtwpUpdateStackTracing @ 0x1406A8484 (EtwpUpdateStackTracing.c)
 *     EtwpAllocateEventNameFilter @ 0x1406A85CC (EtwpAllocateEventNameFilter.c)
 *     EtwpAllocatePayloadFilterData @ 0x1406A898C (EtwpAllocatePayloadFilterData.c)
 *     EtwpAllocateStringFilterData @ 0x1406A8A10 (EtwpAllocateStringFilterData.c)
 *     EtwpCreatePerfectHashFunction @ 0x1406A8F18 (EtwpCreatePerfectHashFunction.c)
 *     EtwpUpdatePidFilterData @ 0x1406A93B8 (EtwpUpdatePidFilterData.c)
 *     EtwpUpdateSchematizedFilterData @ 0x1406A9454 (EtwpUpdateSchematizedFilterData.c)
 *     EtwpAddWinRtProviderToSession @ 0x1406A97F4 (EtwpAddWinRtProviderToSession.c)
 *     EtwpEnableStackCaching @ 0x1406A9B1C (EtwpEnableStackCaching.c)
 *     EtwpPreserveLogger @ 0x1406A9FC4 (EtwpPreserveLogger.c)
 *     EtwpPreserveMdlList @ 0x1406AA1E4 (EtwpPreserveMdlList.c)
 *     EtwpQueryPersistedMemory @ 0x1406AA2CC (EtwpQueryPersistedMemory.c)
 *     EtwpSavePersistedLoggersWorker @ 0x1406AA744 (EtwpSavePersistedLoggersWorker.c)
 *     EtwpSetSoftRestartInformation @ 0x1406AA840 (EtwpSetSoftRestartInformation.c)
 *     ExEnumerateSystemFirmwareTables @ 0x1406AB088 (ExEnumerateSystemFirmwareTables.c)
 *     ExpWatchLicenseInfoWork @ 0x1406ACB24 (ExpWatchLicenseInfoWork.c)
 *     NtDisplayString @ 0x1406ACF94 (NtDisplayString.c)
 *     ExEnableHandleTracing @ 0x1406AD4DC (ExEnableHandleTracing.c)
 *     sub_1406AE54C @ 0x1406AE54C (sub_1406AE54C.c)
 *     ExpCreateRestrictedFastCacheRegistryKey @ 0x1406AEE8C (ExpCreateRestrictedFastCacheRegistryKey.c)
 *     sub_1406AF170 @ 0x1406AF170 (sub_1406AF170.c)
 *     ExpParseFastCacheHelper @ 0x1406AF734 (ExpParseFastCacheHelper.c)
 *     ExpConvertArcName @ 0x1406B0088 (ExpConvertArcName.c)
 *     ExpConvertSignatureName @ 0x1406B023C (ExpConvertSignatureName.c)
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
 *     ExpUnicodeStringToNonpagedWStr @ 0x1406B3360 (ExpUnicodeStringToNonpagedWStr.c)
 *     NtEnumerateBootEntries @ 0x1406B38C4 (NtEnumerateBootEntries.c)
 *     NtEnumerateDriverEntries @ 0x1406B3E64 (NtEnumerateDriverEntries.c)
 *     NtQuerySystemEnvironmentValue @ 0x1406B4E60 (NtQuerySystemEnvironmentValue.c)
 *     NtSetBootEntryOrder @ 0x1406B5188 (NtSetBootEntryOrder.c)
 *     NtSetDriverEntryOrder @ 0x1406B557C (NtSetDriverEntryOrder.c)
 *     NtSetSystemEnvironmentValue @ 0x1406B577C (NtSetSystemEnvironmentValue.c)
 *     NtSetSystemEnvironmentValueEx @ 0x1406B5AA8 (NtSetSystemEnvironmentValueEx.c)
 *     NtTranslateFilePath @ 0x1406B5D14 (NtTranslateFilePath.c)
 *     ExpAllocatePoolForNode @ 0x1406B6078 (ExpAllocatePoolForNode.c)
 *     ExpCovCreateUnloadedModuleEntry @ 0x1406B6C40 (ExpCovCreateUnloadedModuleEntry.c)
 *     ExpCovQueryHypervisorInformation @ 0x1406B7084 (ExpCovQueryHypervisorInformation.c)
 *     ExpCovQueryInformation @ 0x1406B72F0 (ExpCovQueryInformation.c)
 *     ExpCovReadRequestBuffer @ 0x1406B79F0 (ExpCovReadRequestBuffer.c)
 *     NtStartProfile @ 0x1406B8374 (NtStartProfile.c)
 *     CMFAllocFn @ 0x1406B87A4 (CMFAllocFn.c)
 *     CMFCreateSecurityDescriptor @ 0x1406B89D4 (CMFCreateSecurityDescriptor.c)
 *     CMFFlushHitsFile @ 0x1406B8FD8 (CMFFlushHitsFile.c)
 *     CMFSystemThreadRoutine @ 0x1406B96D8 (CMFSystemThreadRoutine.c)
 *     WheaAddErrorSource @ 0x1406BA4DC (WheaAddErrorSource.c)
 *     WheaRegisterInUsePageOfflineNotification @ 0x1406BA714 (WheaRegisterInUsePageOfflineNotification.c)
 *     WheapCreateLiveTriageDump @ 0x1406BB0E0 (WheapCreateLiveTriageDump.c)
 *     WheapWriteTriageDump @ 0x1406BB330 (WheapWriteTriageDump.c)
 *     WheapPfaMemoryCheck @ 0x1406BB5FC (WheapPfaMemoryCheck.c)
 *     WheapIsSqmLoggerRunning @ 0x1406BBBCC (WheapIsSqmLoggerRunning.c)
 *     WheapSqmCollectPshedPluginTelemetry @ 0x1406BBE5C (WheapSqmCollectPshedPluginTelemetry.c)
 *     ApiSetLoadSchemaEx @ 0x1406BC000 (ApiSetLoadSchemaEx.c)
 *     sub_1406BC338 @ 0x1406BC338 (sub_1406BC338.c)
 *     sub_1406BC718 @ 0x1406BC718 (sub_1406BC718.c)
 *     sub_1406BC980 @ 0x1406BC980 (sub_1406BC980.c)
 *     sub_1406BCBF8 @ 0x1406BCBF8 (sub_1406BCBF8.c)
 *     sub_1406BCFBC @ 0x1406BCFBC (sub_1406BCFBC.c)
 *     sub_1406BD5D4 @ 0x1406BD5D4 (sub_1406BD5D4.c)
 *     sub_1406BDC4C @ 0x1406BDC4C (sub_1406BDC4C.c)
 *     sub_1406BE068 @ 0x1406BE068 (sub_1406BE068.c)
 *     sub_1406BEA18 @ 0x1406BEA18 (sub_1406BEA18.c)
 *     sub_1406BF234 @ 0x1406BF234 (sub_1406BF234.c)
 *     sub_1406BF57C @ 0x1406BF57C (sub_1406BF57C.c)
 *     sub_1406BFBA8 @ 0x1406BFBA8 (sub_1406BFBA8.c)
 *     sub_1406C029C @ 0x1406C029C (sub_1406C029C.c)
 *     sub_1406C0614 @ 0x1406C0614 (sub_1406C0614.c)
 *     sub_1406C087C @ 0x1406C087C (sub_1406C087C.c)
 *     sub_1406C0AE4 @ 0x1406C0AE4 (sub_1406C0AE4.c)
 *     sub_1406C0F88 @ 0x1406C0F88 (sub_1406C0F88.c)
 *     SddlpReAlloc @ 0x1406CC528 (SddlpReAlloc.c)
 *     SddlpUuidToString @ 0x1406CC67C (SddlpUuidToString.c)
 *     AdtpBuildGuidString @ 0x1406D03E0 (AdtpBuildGuidString.c)
 *     AdtpBuildHexInt64String @ 0x1406D0508 (AdtpBuildHexInt64String.c)
 *     AdtpBuildIPv4Strings @ 0x1406D05C4 (AdtpBuildIPv4Strings.c)
 *     AdtpBuildIPv6Strings @ 0x1406D0718 (AdtpBuildIPv6Strings.c)
 *     AdtpBuildMacStrings @ 0x1406D086C (AdtpBuildMacStrings.c)
 *     AdtpBuildPrivilegeAuditString @ 0x1406D090C (AdtpBuildPrivilegeAuditString.c)
 *     AdtpBuildRegistryValueString @ 0x1406D0B04 (AdtpBuildRegistryValueString.c)
 *     AdtpBuildSecurityDescriptorUnicodeString @ 0x1406D0E98 (AdtpBuildSecurityDescriptorUnicodeString.c)
 *     AdtpBuildSidListString @ 0x1406D1090 (AdtpBuildSidListString.c)
 *     AdtpBuildStringListString @ 0x1406D137C (AdtpBuildStringListString.c)
 *     AdtpBuildUlongString @ 0x1406D14E0 (AdtpBuildUlongString.c)
 *     AdtpAppendString @ 0x1406D15D4 (AdtpAppendString.c)
 *     AdtpBuildAccessesString @ 0x1406D17B8 (AdtpBuildAccessesString.c)
 *     AdtpBuildUserAccountControlString @ 0x1406D1ECC (AdtpBuildUserAccountControlString.c)
 *     BiConvertQualifiedPartitionToBootEnvironment @ 0x1406D2870 (BiConvertQualifiedPartitionToBootEnvironment.c)
 *     BiGetElement @ 0x1406D2944 (BiGetElement.c)
 *     BiResolveLocateDevice @ 0x1406D2A04 (BiResolveLocateDevice.c)
 *     BiConvertBootEnvironmentDeviceToQualifiedPartition @ 0x1406D2CFC (BiConvertBootEnvironmentDeviceToQualifiedPartition.c)
 *     BiConvertBootEnvironmentDeviceToUnknown @ 0x1406D2DE4 (BiConvertBootEnvironmentDeviceToUnknown.c)
 *     BiConvertNtFilePathToBootEnvironment @ 0x1406D2E90 (BiConvertNtFilePathToBootEnvironment.c)
 *     BiCreateFileDeviceElement @ 0x1406D2F88 (BiCreateFileDeviceElement.c)
 *     BiGetPhysicalDriveName @ 0x1406D3130 (BiGetPhysicalDriveName.c)
 *     BiGetVolumeDiskExtentsInformation @ 0x1406D3270 (BiGetVolumeDiskExtentsInformation.c)
 *     BiTranslateSymbolicLinkFile @ 0x1406D335C (BiTranslateSymbolicLinkFile.c)
 *     BiAddBootEntryToEfiBootManagerDisplayOrder @ 0x1406D3518 (BiAddBootEntryToEfiBootManagerDisplayOrder.c)
 *     BiAddBootEntryToNvramDisplayOrder @ 0x1406D365C (BiAddBootEntryToNvramDisplayOrder.c)
 *     BiBindEfiBootManager @ 0x1406D373C (BiBindEfiBootManager.c)
 *     BiBuildIdentifierList @ 0x1406D3B60 (BiBuildIdentifierList.c)
 *     BiCreateBootEntry @ 0x1406D40EC (BiCreateBootEntry.c)
 *     BiCreateMergedBootEntry @ 0x1406D45D0 (BiCreateMergedBootEntry.c)
 *     BiEnumerateBootEntries @ 0x1406D4A18 (BiEnumerateBootEntries.c)
 *     BiExportEfiBootManager @ 0x1406D4BB8 (BiExportEfiBootManager.c)
 *     BiGetDeviceFromEfiPath @ 0x1406D4FD4 (BiGetDeviceFromEfiPath.c)
 *     BiGetFilePathFromEfiPath @ 0x1406D5168 (BiGetFilePathFromEfiPath.c)
 *     BiGetObjectReferenceFromEfiEntry @ 0x1406D52C4 (BiGetObjectReferenceFromEfiEntry.c)
 *     BiHandleFirmwareDefaultEntry @ 0x1406D54D0 (BiHandleFirmwareDefaultEntry.c)
 *     BiQueryBootEntryOrder @ 0x1406D5704 (BiQueryBootEntryOrder.c)
 *     BiQueryBootOptions @ 0x1406D57B4 (BiQueryBootOptions.c)
 *     BiTranslateFilePath @ 0x1406D5A34 (BiTranslateFilePath.c)
 *     BiUpdateBcdObject @ 0x1406D5B50 (BiUpdateBcdObject.c)
 *     BiUpdateObjectReferenceInEfiEntry @ 0x1406D5F9C (BiUpdateObjectReferenceInEfiEntry.c)
 *     SiGetDriveLayoutInformation @ 0x1406D62C0 (SiGetDriveLayoutInformation.c)
 *     SiGetEfiSystemDevice @ 0x1406D65A4 (SiGetEfiSystemDevice.c)
 *     SiGetEspFromFirmware @ 0x1406D6900 (SiGetEspFromFirmware.c)
 *     SiGetBiosSystemDisk @ 0x1406D6BDC (SiGetBiosSystemDisk.c)
 *     SiGetBiosSystemPartition @ 0x1406D6D00 (SiGetBiosSystemPartition.c)
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
 *     _CmServiceFilterCallback @ 0x1406DBBF8 (_CmServiceFilterCallback.c)
 *     _CmGetDeviceSiblings @ 0x1406DD964 (_CmGetDeviceSiblings.c)
 *     _CmGetInstallerClassMappedPropertyFromRegProp @ 0x1406DDDA0 (_CmGetInstallerClassMappedPropertyFromRegProp.c)
 *     _SysCtxRegOpenCurrentUserKey @ 0x1406DFAD0 (_SysCtxRegOpenCurrentUserKey.c)
 *     _PnpGetPropertiesSecurityDescriptor @ 0x1406DFDA4 (_PnpGetPropertiesSecurityDescriptor.c)
 *     _PnpMultiSzDeleteString @ 0x1406E0168 (_PnpMultiSzDeleteString.c)
 *     _RegRtlCopyTreeInternal @ 0x1406E0260 (_RegRtlCopyTreeInternal.c)
 *     _RegRtlDeletePathInternal @ 0x1406E0808 (_RegRtlDeletePathInternal.c)
 *     DrvDbDeleteObjectSubKey @ 0x1406E0D84 (DrvDbDeleteObjectSubKey.c)
 *     DrvDbGetObjectSubKeyCallback @ 0x1406E1C00 (DrvDbGetObjectSubKeyCallback.c)
 *     DrvDbSetDeviceIdDriverInfMatches @ 0x1406E2108 (DrvDbSetDeviceIdDriverInfMatches.c)
 *     DrvDbSetDriverPackageMappedProperty @ 0x1406E2E0C (DrvDbSetDriverPackageMappedProperty.c)
 *     DrvDbGetSecurityDescriptor @ 0x1406E3790 (DrvDbGetSecurityDescriptor.c)
 *     AhcCacheQueryHwId @ 0x1406E4D54 (AhcCacheQueryHwId.c)
 *     ArbQueryConflict @ 0x1406E5088 (ArbQueryConflict.c)
 *     VhdiVerifyBootDisk @ 0x1406E55F4 (VhdiVerifyBootDisk.c)
 *     ObGetSiloRootDirectoryPath @ 0x1406E63BC (ObGetSiloRootDirectoryPath.c)
 *     ObpGetSilosRootDirectory @ 0x1406E64D8 (ObpGetSilosRootDirectory.c)
 *     RtlpLoadPolicyLanguageSpec @ 0x1406E669C (RtlpLoadPolicyLanguageSpec.c)
 *     KdPullRemoteFile @ 0x1406F2000 (KdPullRemoteFile.c)
 *     KdInitSystem @ 0x1406F3740 (KdInitSystem.c)
 *     ViThunkCreateSharedExportInformation @ 0x1406FDEAC (ViThunkCreateSharedExportInformation.c)
 *     VfXdvDriverCaptureIoCallbacks @ 0x1406FE128 (VfXdvDriverCaptureIoCallbacks.c)
 *     VfAvlInitializeTreeEx @ 0x1406FE23C (VfAvlInitializeTreeEx.c)
 *     IovpBuildDriverObjectList @ 0x140701188 (IovpBuildDriverObjectList.c)
 *     VfProbeAndCaptureUnicodeStringBuffer @ 0x140702A38 (VfProbeAndCaptureUnicodeStringBuffer.c)
 *     ViInitializeLocalSystemDescriptor @ 0x1407030E0 (ViInitializeLocalSystemDescriptor.c)
 *     VfInitVerifierComponents @ 0x140703330 (VfInitVerifierComponents.c)
 *     ViDdiDriverEntry @ 0x1407047E8 (ViDdiDriverEntry.c)
 *     ViAllocateContiguousMemory @ 0x140708650 (ViAllocateContiguousMemory.c)
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 *     ViHookDmaAdapter @ 0x140709CA4 (ViHookDmaAdapter.c)
 *     ViSpecialAllocateCommonBuffer @ 0x14070A40C (ViSpecialAllocateCommonBuffer.c)
 *     ViPendingDelayCompletion @ 0x14070D3E0 (ViPendingDelayCompletion.c)
 *     VfInitializeBranchTracing @ 0x14070ED1C (VfInitializeBranchTracing.c)
 *     VfThunkAddSpecialDriverThunks @ 0x14070F200 (VfThunkAddSpecialDriverThunks.c)
 *     ViThunkCreateThunkTable @ 0x14070F870 (ViThunkCreateThunkTable.c)
 *     ViThunkFindAllSpecialTables @ 0x14070F8F0 (ViThunkFindAllSpecialTables.c)
 *     VfTargetEtwRegister @ 0x14071005C (VfTargetEtwRegister.c)
 *     ViTargetDriversAllocateVerifiedData @ 0x140710410 (ViTargetDriversAllocateVerifiedData.c)
 *     ViTargetTrackContiguousMemory @ 0x140710710 (ViTargetTrackContiguousMemory.c)
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
 *     KeReleaseGuardedMutex @ 0x14000C5C0 (KeReleaseGuardedMutex.c)
 *     ExpReleaseFastMutexContended @ 0x14000C60C (ExpReleaseFastMutexContended.c)
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     ExpInsertPoolTrackerExpansion @ 0x140012670 (ExpInsertPoolTrackerExpansion.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PsBoostThreadIoEx @ 0x14002CFC0 (PsBoostThreadIoEx.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     KiAbQueueAutoBoostDpc @ 0x14006C1E8 (KiAbQueueAutoBoostDpc.c)
 *     RtlCaptureStackBackTrace @ 0x140082890 (RtlCaptureStackBackTrace.c)
 *     MiAllocatePoolPages @ 0x14009D3EC (MiAllocatePoolPages.c)
 *     KiAbThreadInsertList @ 0x1400AB258 (KiAbThreadInsertList.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     EtwTracePool @ 0x140159C2C (EtwTracePool.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     RtlpInterlockedPopEntrySList @ 0x140167370 (RtlpInterlockedPopEntrySList.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MmAllocateSpecialPool @ 0x1401EB90C (MmAllocateSpecialPool.c)
 *     ExpUseSpecialPool @ 0x14022CF38 (ExpUseSpecialPool.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExDeferredFreePool @ 0x1402557B0 (ExDeferredFreePool.c)
 *     MiSessionPoolVector @ 0x14041ADE0 (MiSessionPoolVector.c)
 *     VeAllocatePoolWithTagPriority @ 0x140701DA8 (VeAllocatePoolWithTagPriority.c)
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
                  if ( v43 < qword_140326950 || v43 >= qword_140326950 + 0x8000000000LL )
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
                (unsigned int)qword_14033B948[552 * (v116 == 0)] - (unsigned int)qword_14033B988[552 * (v116 == 0)],
                (unsigned int)qword_14033B950[552 * (v116 == 0)] - (unsigned int)qword_14033B990[552 * (v116 == 0)],
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
