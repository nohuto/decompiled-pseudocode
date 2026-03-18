/*
 * XREFs of KeSetEvent @ 0x14004C230
 * Callers:
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140006E40 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExpQueueWorkItemNode @ 0x14000D530 (ExpQueueWorkItemNode.c)
 *     ExReferenceCallBackBlock @ 0x140010130 (ExReferenceCallBackBlock.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400117B0 (MiStoreUpdateMemoryConditions.c)
 *     MiWorkingSetManager @ 0x1400124C4 (MiWorkingSetManager.c)
 *     PopQueueTargetDpc @ 0x140013A6C (PopQueueTargetDpc.c)
 *     PfSnReferenceProcessTrace @ 0x14001A540 (PfSnReferenceProcessTrace.c)
 *     VfPoolDelayFreeIfPossible @ 0x1400257A0 (VfPoolDelayFreeIfPossible.c)
 *     PnpDeviceActionWorker @ 0x14002604C (PnpDeviceActionWorker.c)
 *     PopFxActivateDevice @ 0x140026F98 (PopFxActivateDevice.c)
 *     PoFxPrepareDevice @ 0x1400271E8 (PoFxPrepareDevice.c)
 *     PopFxCompleteComponentActivation @ 0x140027434 (PopFxCompleteComponentActivation.c)
 *     IoAcquireRemoveLockEx @ 0x14002782C (IoAcquireRemoveLockEx.c)
 *     PopFxProcessWork @ 0x1400288DC (PopFxProcessWork.c)
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     ExfReleaseRundownProtection @ 0x140030F40 (ExfReleaseRundownProtection.c)
 *     ExpWorkerThread @ 0x1400316D0 (ExpWorkerThread.c)
 *     CcWorkerThread @ 0x1400328D0 (CcWorkerThread.c)
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     CcFlushCachePriv @ 0x140040060 (CcFlushCachePriv.c)
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     CcWriteBehindInternal @ 0x1400414C0 (CcWriteBehindInternal.c)
 *     AlpcpSignalAndWait @ 0x140044130 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x1400444B0 (AlpcpSignal.c)
 *     IopCompleteRequest @ 0x14004A190 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     CcPinFileData @ 0x140051C40 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x140053740 (CcFreeVirtualAddress.c)
 *     MiInsertProtectedStandbyPage @ 0x140055700 (MiInsertProtectedStandbyPage.c)
 *     EtwpSwitchBuffer @ 0x140063148 (EtwpSwitchBuffer.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     CcPurgeAndClearCacheSection @ 0x140078F1C (CcPurgeAndClearCacheSection.c)
 *     MiPrivateFixup @ 0x14007991C (MiPrivateFixup.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     MiIssueHardFaultIo @ 0x140085C00 (MiIssueHardFaultIo.c)
 *     CcDeleteSharedCacheMap @ 0x140086290 (CcDeleteSharedCacheMap.c)
 *     MiCheckControlArea @ 0x14008B090 (MiCheckControlArea.c)
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 *     MiProcessWorkingSets @ 0x140099DB0 (MiProcessWorkingSets.c)
 *     KiDecrementProcessStackCount @ 0x14009AA60 (KiDecrementProcessStackCount.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14009D900 (NtWaitForWorkViaWorkerFactory.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 *     CcMapAndCopyInToCache @ 0x1400B2720 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x1400B6EE0 (MiFinishHardFault.c)
 *     PfFileInfoNotify @ 0x1400B82A0 (PfFileInfoNotify.c)
 *     MiResolveTransitionFault @ 0x1400B8D10 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiDispatchFault @ 0x1400C24A0 (MiDispatchFault.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     WmipUnreferenceRegEntry @ 0x1400CF108 (WmipUnreferenceRegEntry.c)
 *     ExpUnblockPushLock @ 0x1400D2C68 (ExpUnblockPushLock.c)
 *     MiEmptyPageAccessLog @ 0x1400D71E0 (MiEmptyPageAccessLog.c)
 *     PfSnRemoveProcessTrace @ 0x1400D7900 (PfSnRemoveProcessTrace.c)
 *     PfpEventHandleFullBuffer @ 0x1400D7B68 (PfpEventHandleFullBuffer.c)
 *     PfpReturnAccessBuffer @ 0x1400D7BDC (PfpReturnAccessBuffer.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x1400DAA14 (SmKmStoreHelperSendCommand.c)
 *     SmKmStoreHelperWorker @ 0x1400DACBC (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DAD90 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiCopyDataPageToImagePage @ 0x1400E1430 (MiCopyDataPageToImagePage.c)
 *     PpmReleaseLock @ 0x1400E70D0 (PpmReleaseLock.c)
 *     ExNotifyWithProcessing @ 0x1400EDED8 (ExNotifyWithProcessing.c)
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 *     ExpWakePushLock @ 0x1400F3720 (ExpWakePushLock.c)
 *     KiProcessThreadWaitList @ 0x1400F7350 (KiProcessThreadWaitList.c)
 *     MiIncreaseAvailablePages @ 0x1400FFF20 (MiIncreaseAvailablePages.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140109170 (ExReleaseRundownProtectionCacheAware.c)
 *     KiRequestProcessInSwap @ 0x14010C75C (KiRequestProcessInSwap.c)
 *     MiInsertUnusedSubsection @ 0x14010E120 (MiInsertUnusedSubsection.c)
 *     KiReadyThread @ 0x1401109F0 (KiReadyThread.c)
 *     SepRmCallLsa @ 0x140117528 (SepRmCallLsa.c)
 *     IoReleaseRemoveLockEx @ 0x140117C68 (IoReleaseRemoveLockEx.c)
 *     MiQueuePageAccessLog @ 0x140119FD0 (MiQueuePageAccessLog.c)
 *     CcPostWorkQueueAsyncRead @ 0x14011DF64 (CcPostWorkQueueAsyncRead.c)
 *     CcPrepareMdlWrite @ 0x140124310 (CcPrepareMdlWrite.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x140126044 (KiBalanceSetManagerDeferredRoutine.c)
 *     SmKmGenericCompletion @ 0x1401273C0 (SmKmGenericCompletion.c)
 *     CcNotifyWriteBehind @ 0x1401284AC (CcNotifyWriteBehind.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140128B60 (LZNT1DecompressChunkWorkItem.c)
 *     MiFreeExcessSegments @ 0x140129184 (MiFreeExcessSegments.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14012C120 (MiAllocatePfnRepurposeLogDispatch.c)
 *     CmpLazyFlushDpcRoutine @ 0x14012C398 (CmpLazyFlushDpcRoutine.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x14012C7C4 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     MiReclaimSystemVa @ 0x14012D8C0 (MiReclaimSystemVa.c)
 *     PopUserPresentSet @ 0x14012DEE4 (PopUserPresentSet.c)
 *     ExpSetThreadReaperEvents @ 0x14012F394 (ExpSetThreadReaperEvents.c)
 *     PnpRemoveDeviceActionRequests @ 0x14013175C (PnpRemoveDeviceActionRequests.c)
 *     PopUnregisterPowerSettingCallback @ 0x140133B64 (PopUnregisterPowerSettingCallback.c)
 *     PopRequestCompletion @ 0x140136608 (PopRequestCompletion.c)
 *     PopFxReleasePowerIrp @ 0x140136B3C (PopFxReleasePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x140136D3C (PopPepUpdateConstraints.c)
 *     PopRequestPowerIrp @ 0x140136E74 (PopRequestPowerIrp.c)
 *     PopFxAllocatePowerIrp @ 0x140137708 (PopFxAllocatePowerIrp.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140138590 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     CcDeleteBcbs @ 0x140139D58 (CcDeleteBcbs.c)
 *     EtwpLoggerDpc @ 0x14013A218 (EtwpLoggerDpc.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14013CD78 (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14013EA94 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     SmIoRequestComplete @ 0x14013F03C (SmIoRequestComplete.c)
 *     SmFpFree @ 0x14013F098 (SmFpFree.c)
 *     MiFinishResume @ 0x140144E14 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140145AB0 (MiProcessDereferenceList.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140147F78 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PoFxNotifySurprisePowerOn @ 0x14014BE30 (PoFxNotifySurprisePowerOn.c)
 *     PopTimestampTargetProcessor @ 0x14014C958 (PopTimestampTargetProcessor.c)
 *     PopBatteryWakeDpc @ 0x14014C99C (PopBatteryWakeDpc.c)
 *     MiFlushAllPages @ 0x14014D6A0 (MiFlushAllPages.c)
 *     MiWakeModifiedPageWriter @ 0x14014D788 (MiWakeModifiedPageWriter.c)
 *     PopIrpWorker @ 0x140156584 (PopIrpWorker.c)
 *     PnpUnlockDeviceActionQueue @ 0x140156FFC (PnpUnlockDeviceActionQueue.c)
 *     MiQueueWorkingSetRequest @ 0x14015A008 (MiQueueWorkingSetRequest.c)
 *     PopFxComponentWork @ 0x14015A130 (PopFxComponentWork.c)
 *     ExpEnumerateCallback @ 0x14015B254 (ExpEnumerateCallback.c)
 *     PnpDiagnosticCompletionRoutine @ 0x14015D764 (PnpDiagnosticCompletionRoutine.c)
 *     MiUpdateAvailableEvents @ 0x14015FA18 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14015FBE0 (MiSignalNonPagedPoolWatchers.c)
 *     ExCompareExchangeCallBack @ 0x140165970 (ExCompareExchangeCallBack.c)
 *     KeBalanceSetManager @ 0x140165F30 (KeBalanceSetManager.c)
 *     PnpCompleteSystemStartProcess @ 0x1401699B4 (PnpCompleteSystemStartProcess.c)
 *     WheapAddErrorSource @ 0x14016B998 (WheapAddErrorSource.c)
 *     MiSyncCommitSignals @ 0x14016BDFC (MiSyncCommitSignals.c)
 *     MiTrimSegmentCache @ 0x1401701C0 (MiTrimSegmentCache.c)
 *     MiStoreEvictThread @ 0x140170980 (MiStoreEvictThread.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401DC518 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1401DD050 (CcPostDeferredWrites.c)
 *     FsFilterFreeCompletionStack @ 0x1401E38FC (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1401E464C (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1401F23CC (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1401F242C (IopFreeReserveIrp.c)
 *     IopCreateFlow @ 0x1401F91EC (IopCreateFlow.c)
 *     IopDeleteFlow @ 0x1401F925C (IopDeleteFlow.c)
 *     IopQueryFlowHistory @ 0x1401F9328 (IopQueryFlowHistory.c)
 *     IopQueryFlowInformation @ 0x1401F93A4 (IopQueryFlowInformation.c)
 *     IopSetFlowPolicy @ 0x1401F9470 (IopSetFlowPolicy.c)
 *     IopSetHandleFlow @ 0x1401F94F8 (IopSetHandleFlow.c)
 *     PnpUnlockMountableDevice @ 0x1401FB45C (PnpUnlockMountableDevice.c)
 *     PnprQuiesce @ 0x1401FCC54 (PnprQuiesce.c)
 *     KiConnectSecondaryInterrupt @ 0x140203414 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402035F8 (KiDisconnectSecondaryInterrupt.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140207B64 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x140207E0C (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x140207E40 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x140207F08 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140207F34 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x14020B618 (KiBlockAndActivateUmsThread.c)
 *     MiZeroPageFile @ 0x14020DB5C (MiZeroPageFile.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiQueueControlAreaDelete @ 0x140212170 (MiQueueControlAreaDelete.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     MiPfCompleteCoalescedIo @ 0x140218FB0 (MiPfCompleteCoalescedIo.c)
 *     MiPfIssueCoalescedSupport @ 0x1402191FC (MiPfIssueCoalescedSupport.c)
 *     MiMarkMdlComplete @ 0x140219754 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x14021AB2C (MiObtainFreePages.c)
 *     MiDeletePartitionResources @ 0x14021D020 (MiDeletePartitionResources.c)
 *     MiFlushComplete @ 0x14021E5B8 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x14021E6C0 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x140220E7C (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1402216C8 (MiFinishPageFileExtension.c)
 *     MiFlushAllHintedStorePages @ 0x14022179C (MiFlushAllHintedStorePages.c)
 *     MiIrpCompletionApcRoutine @ 0x140221B00 (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1402220BC (MiTrimUnusedPageFileRegionsApc.c)
 *     MiPageNotZero @ 0x1402262F4 (MiPageNotZero.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140231A58 (MmStoreFlushOutstandingEvictions.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402331B0 (NtSignalAndWaitForSingleObject.c)
 *     PopPropogateCoolingChange @ 0x140236B60 (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x140236F14 (PopDeviceIdleCompletion.c)
 *     PoFxPowerControl @ 0x140237060 (PoFxPowerControl.c)
 *     PopFxCompleteComponentPerfState @ 0x14023785C (PopFxCompleteComponentPerfState.c)
 *     PopFxComponentPerfWork @ 0x140237938 (PopFxComponentPerfWork.c)
 *     PopFxDestroyDeviceDpm @ 0x1402379F4 (PopFxDestroyDeviceDpm.c)
 *     PopFxDeviceWork @ 0x140237E18 (PopFxDeviceWork.c)
 *     PopFxPlatformIdleVeto @ 0x1402385B8 (PopFxPlatformIdleVeto.c)
 *     PopFxProcessorIdleVeto @ 0x140238784 (PopFxProcessorIdleVeto.c)
 *     PopFxReleaseAcpiRefDevice @ 0x140238CC4 (PopFxReleaseAcpiRefDevice.c)
 *     PopFxUpdatePlatformIdleState @ 0x140239B6C (PopFxUpdatePlatformIdleState.c)
 *     PopFxUpdateProcessorIdleState @ 0x140239C64 (PopFxUpdateProcessorIdleState.c)
 *     PopUpdateWakeSourceWorker @ 0x14023AE8C (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x14023B200 (PopBatteryIrpComplete.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x14023C818 (PopPepStartDeviceUnregisterActivity.c)
 *     PopFxAcpiForwardNotification @ 0x140242C80 (PopFxAcpiForwardNotification.c)
 *     PopFxAcpiForwardPepAcpiNotifyRequest @ 0x140242D14 (PopFxAcpiForwardPepAcpiNotifyRequest.c)
 *     PopFxAcpiForwardPepWorkRequest @ 0x140242DA8 (PopFxAcpiForwardPepWorkRequest.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140252D08 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140259ABC (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140259BA0 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x14025C988 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x14025FEB4 (EtwpThreadRundownApc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1402627D8 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x140262824 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x140263F64 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x140266DAC (WheapProcessWorkQueueItem.c)
 *     EmpReleasePagingReference @ 0x1403EB7D8 (EmpReleasePagingReference.c)
 *     PopFlushVolumeWorker @ 0x1403ECD88 (PopFlushVolumeWorker.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PfpScenCtxPrefetchWait @ 0x1403EED74 (PfpScenCtxPrefetchWait.c)
 *     PopHandleWakeSources @ 0x1403EF1DC (PopHandleWakeSources.c)
 *     PopSystemIrpCompletion @ 0x1403EF484 (PopSystemIrpCompletion.c)
 *     ExpSetSwappingKernelApc @ 0x1403EF998 (ExpSetSwappingKernelApc.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1403EFAB0 (PfpScenCtxPrefetchStateSet.c)
 *     PopTransitionToSleep @ 0x1403F045C (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x1403F1294 (PopEndMirroring.c)
 *     PfpScenCtxScenarioSet @ 0x1403F69DC (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1403FFF60 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1404012DC (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x140402E6C (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x140403964 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x14040397C (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 *     IopTrackLink @ 0x14040C918 (IopTrackLink.c)
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     CmNotifyRunDown @ 0x140420ED0 (CmNotifyRunDown.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     IopQueryXxxInformation @ 0x14042A8D8 (IopQueryXxxInformation.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmpFlushHive @ 0x14044C5C4 (CmpFlushHive.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     PiUEventDereferenceEventEntry @ 0x14045DB04 (PiUEventDereferenceEventEntry.c)
 *     PnpDeviceEventWorker @ 0x14045FC1C (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x140460174 (PnpCompleteDeviceEvent.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     NtAlpcSendWaitReceivePort @ 0x14047B5F0 (NtAlpcSendWaitReceivePort.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     NtSetEvent @ 0x14048FDC0 (NtSetEvent.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     AlpcpCompleteDispatchMessage @ 0x14049B070 (AlpcpCompleteDispatchMessage.c)
 *     EtwpRealtimeUpdateConsumers @ 0x1404A15F8 (EtwpRealtimeUpdateConsumers.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404A2364 (EtwpRealtimeInjectEtwBuffer.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1404A819C (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     MiPfExecuteReadList @ 0x1404B2C24 (MiPfExecuteReadList.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     EtwpQueueNotification @ 0x1404D5430 (EtwpQueueNotification.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     CmpPostApc @ 0x1404ECE6C (CmpPostApc.c)
 *     CmpPostNotify @ 0x1404ECFFC (CmpPostNotify.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x1404EE670 (CmpSignalUnloadEventArrayForHive.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1404F59F8 (RtlDecompressFragmentLZNT1.c)
 *     PfSnEndTrace @ 0x1404F6D18 (PfSnEndTrace.c)
 *     PfGetCompletedTrace @ 0x1404F74C8 (PfGetCompletedTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x1404F85F4 (PfTReplaceCurrentBuffer.c)
 *     PfTTraceListAdd @ 0x1404F8FF0 (PfTTraceListAdd.c)
 *     PopUmpoProcessPowerMessage @ 0x1404FFB68 (PopUmpoProcessPowerMessage.c)
 *     ExpWnfNotifySubscription @ 0x140500BFC (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140503674 (ExpWnfNotifyNameSubscribers.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140505E20 (PspEvaluateAndNotifyEmptyJob.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     EtwpShutdownConsumers @ 0x1405247B8 (EtwpShutdownConsumers.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140524868 (EtwpRealtimeDisconnectAllConsumers.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140538690 (PopFxUnregisterDeviceOrWait.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     EtwpSynchronizeWithLogger @ 0x14054D790 (EtwpSynchronizeWithLogger.c)
 *     WmipReleaseCollectionEnabled @ 0x140556E2C (WmipReleaseCollectionEnabled.c)
 *     EtwpDisassociateConsumer @ 0x140558FEC (EtwpDisassociateConsumer.c)
 *     NtNotifyChangeSession @ 0x140559524 (NtNotifyChangeSession.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x14055A084 (PiDrvDbLoadNodeWorkerCallback.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x14055AC18 (CmpGetVolumeClusterSizeCompletion.c)
 *     IoSetInformation @ 0x14055B32C (IoSetInformation.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x14055B534 (PfSnTracingStateExWorkerRoutine.c)
 *     WmipQueueNotification @ 0x14055BE88 (WmipQueueNotification.c)
 *     PopUserPresentSetWorker @ 0x14055BF78 (PopUserPresentSetWorker.c)
 *     IopExceptionCleanup @ 0x14055D264 (IopExceptionCleanup.c)
 *     MiInSwapStoreWorker @ 0x14055D454 (MiInSwapStoreWorker.c)
 *     PiUEventHandleVetoEvent @ 0x14055E55C (PiUEventHandleVetoEvent.c)
 *     RtlDecompressBufferLZNT1 @ 0x1405607F0 (RtlDecompressBufferLZNT1.c)
 *     RtlRunOnceComplete @ 0x140564294 (RtlRunOnceComplete.c)
 *     PopReleaseTransitionLock @ 0x140564A68 (PopReleaseTransitionLock.c)
 *     PopCompleteAction @ 0x140566224 (PopCompleteAction.c)
 *     PfGenerateTrace @ 0x1405668C4 (PfGenerateTrace.c)
 *     PopFinalizeWakeInfo @ 0x140567934 (PopFinalizeWakeInfo.c)
 *     MiDereferenceSessionFinal @ 0x14056797C (MiDereferenceSessionFinal.c)
 *     IopLoadUnloadDriver @ 0x140571B04 (IopLoadUnloadDriver.c)
 *     WmipAddDataSource @ 0x14057B770 (WmipAddDataSource.c)
 *     IopDestroyActiveConnectBlock @ 0x14057D290 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14057D4A0 (IopAcquireReleaseConnectLockInternal.c)
 *     MmSetSessionObjectIoEvent @ 0x1405836FC (MmSetSessionObjectIoEvent.c)
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 *     MUIRegistrySystemRoutine @ 0x140592024 (MUIRegistrySystemRoutine.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x14059876C (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     ArbArbiterHandler @ 0x14059E62C (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x14059E96C (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     MiInsertPageFileInList @ 0x1405B4BD0 (MiInsertPageFileInList.c)
 *     CmpWaitForHiveMount @ 0x1405B5F44 (CmpWaitForHiveMount.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405B9910 (CmpInitializeSystemHivesLoad.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     DbgkRegisterErrorPort @ 0x1405BE8F4 (DbgkRegisterErrorPort.c)
 *     WheapEtwEnableCallback @ 0x1405C161C (WheapEtwEnableCallback.c)
 *     PfTLoggingWorker @ 0x1405C2D20 (PfTLoggingWorker.c)
 *     PopNotifyPolicyDevice @ 0x1405C3158 (PopNotifyPolicyDevice.c)
 *     PopThermalWorker @ 0x1405C3BD8 (PopThermalWorker.c)
 *     MmStoreRegister @ 0x1405C5F98 (MmStoreRegister.c)
 *     ExAllocatePrivateWorkerPool @ 0x1405C660C (ExAllocatePrivateWorkerPool.c)
 *     CmThawRegistry @ 0x14065A074 (CmThawRegistry.c)
 *     CmpPostApcRunDown @ 0x14065E970 (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x140666AD0 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140667B2C (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140667F30 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140668390 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x1406687C4 (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14066A070 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14066D640 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopAllocateIrpCleanup @ 0x140670E48 (IopAllocateIrpCleanup.c)
 *     IopConnectLinkTrackingPort @ 0x140671414 (IopConnectLinkTrackingPort.c)
 *     IopInvalidateVolumesForDevice @ 0x140671B84 (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x1406725FC (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140674678 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x14067A594 (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14067DAB4 (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x140696190 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x140699F78 (KeUpdateUmsThreadState.c)
 *     PfpParametersWatcher @ 0x1406B0294 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x1406B4870 (PopFxUnregisterDevice.c)
 *     PopBatteryReadTag @ 0x1406B6C28 (PopBatteryReadTag.c)
 *     PopFanWorker @ 0x1406BB3D4 (PopFanWorker.c)
 *     PspDeferredWorkerRoutine @ 0x1406C1D04 (PspDeferredWorkerRoutine.c)
 *     PspRemoveProcessFromSilo @ 0x1406C2778 (PspRemoveProcessFromSilo.c)
 *     PspSiloDelete @ 0x1406C2AE8 (PspSiloDelete.c)
 *     PspTerminateServerSiloDeferred @ 0x1406C2DDC (PspTerminateServerSiloDeferred.c)
 *     SmcCacheAdd @ 0x1406DAD34 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x1406DAF34 (SmcCacheDelete.c)
 *     CMFSystemThreadRoutine @ 0x1406FB330 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1406FCA40 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     KdpTimeSlipWork @ 0x14072C8E0 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x140741A64 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x140742C34 (ViPendingQueuePassiveLevelCompletion.c)
 *     VerifierKeSetEvent @ 0x140748D20 (VerifierKeSetEvent.c)
 *     ViFilterRemoveNotificationCompletion @ 0x140752B68 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x14075DF88 (AnFwpFadeAnimationTimer.c)
 *     sub_14079BAE4 @ 0x14079BAE4 (sub_14079BAE4.c)
 *     MiInitializePagedPoolEvents @ 0x1407CBB28 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  PRKEVENT v3; // r15
  int v5; // edi
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v7; // ebx
  LIST_ENTRY *Flink; // r12
  LIST_ENTRY *p_WaitListHead; // r13
  __int64 v10; // rsi
  __int64 v11; // rcx
  _QWORD *v12; // rax
  char v13; // al
  bool v14; // zf
  __int64 v15; // rdi
  struct _KPRCB *v16; // r15
  _KTHREAD *CurrentThread; // rbp
  bool v18; // al
  unsigned int v19; // ebx
  __int64 *v20; // rcx
  LIST_ENTRY *v21; // r14
  LIST_ENTRY *v22; // r12
  __int64 v23; // rsi
  char v24; // al
  __int64 v25; // r8
  __int64 v26; // rdi
  struct _KPRCB *v27; // r13
  _KTHREAD *v28; // rbp
  bool v29; // al
  unsigned int v30; // ebx
  __int64 *v31; // rcx
  struct _KPRCB *v32; // [rsp+30h] [rbp-58h]
  char CurrentIrql; // [rsp+38h] [rbp-50h]
  LONG SignalState; // [rsp+A8h] [rbp+20h]

  v3 = Event;
  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v5 = 0;
  }
  else
  {
    if ( Event->Header.SignalState == 1 && !Wait )
      return 1;
    v5 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 0;
  v32 = CurrentPrcb;
  if ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v7);
    }
    while ( (v3->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&v3->Header.Lock, 7u) );
    CurrentPrcb = v32;
  }
  SignalState = v3->Header.SignalState;
  v3->Header.SignalState = 1;
  if ( SignalState )
    goto LABEL_84;
  if ( !v5 )
  {
    Flink = v3->Header.WaitListHead.Flink;
    p_WaitListHead = &v3->Header.WaitListHead;
    if ( Flink != &v3->Header.WaitListHead )
    {
      while ( 1 )
      {
        v10 = (__int64)Flink;
        Flink = Flink->Flink;
        v11 = *(_QWORD *)v10;
        v12 = *(_QWORD **)(v10 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v10 + 8LL) != v10 || *v12 != v10 )
          __fastfail(3u);
        *v12 = v11;
        *(_QWORD *)(v11 + 8) = v12;
        v13 = *(_BYTE *)(v10 + 16);
        if ( v13 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v10, *(unsigned __int16 *)(v10 + 18), 0LL) )
          {
            v14 = v3->Header.SignalState-- == 1;
            if ( v14 )
              goto LABEL_84;
          }
        }
        else if ( v13 == 2 )
        {
          *(_BYTE *)(v10 + 17) = 5;
          v15 = *(_QWORD *)(v10 + 24);
          *(_QWORD *)v10 = 0LL;
          __writecr8(2uLL);
          v16 = KeGetCurrentPrcb();
          CurrentThread = v16->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v18 = CurrentThread->WaitBlockFill6[68] == 2 && CurrentThread->NextProcessor == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(v16->CurrentThread, v10, v18);
          }
          v19 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v15, 7u) )
          {
            do
            {
              if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v19);
            }
            while ( (*(_DWORD *)v15 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v15, 7u) );
          }
          if ( *(_QWORD *)(v15 + 16) == v15 + 8
            || *(_DWORD *)(v15 + 40) >= *(_DWORD *)(v15 + 44)
            || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v15 && CurrentThread->WaitReason == 15
            || !KiWakeQueueWaiter((__int64)v16, v15, v10) )
          {
            ++*(_DWORD *)(v15 + 4);
            v20 = *(__int64 **)(v15 + 32);
            *(_QWORD *)v10 = v15 + 24;
            *(_QWORD *)(v10 + 8) = v20;
            if ( *v20 != v15 + 24 )
              __fastfail(3u);
            *v20 = v10;
            *(_QWORD *)(v15 + 32) = v10;
          }
          _InterlockedAnd((volatile signed __int32 *)v15, 0xFFFFFF7F);
          v3 = Event;
          v14 = Event->Header.SignalState-- == 1;
          if ( v14 )
            goto LABEL_84;
        }
        else
        {
          KiTryUnwaitThread(CurrentPrcb, v10, 256LL, 0LL);
        }
        if ( Flink == p_WaitListHead )
          goto LABEL_84;
        CurrentPrcb = v32;
      }
    }
    goto LABEL_84;
  }
  v21 = v3->Header.WaitListHead.Flink;
  v22 = &v3->Header.WaitListHead;
  if ( v21 == &v3->Header.WaitListHead )
    goto LABEL_83;
  while ( 1 )
  {
    v23 = (__int64)v21;
    v21 = v21->Flink;
    v24 = *(_BYTE *)(v23 + 16);
    if ( v24 == 1 )
    {
      v25 = *(unsigned __int16 *)(v23 + 18);
LABEL_78:
      KiTryUnwaitThread(CurrentPrcb, v23, v25, 0LL);
      goto LABEL_79;
    }
    if ( v24 != 2 )
    {
      v25 = 256LL;
      goto LABEL_78;
    }
    *(_BYTE *)(v23 + 17) = 5;
    v26 = *(_QWORD *)(v23 + 24);
    *(_QWORD *)v23 = 0LL;
    __writecr8(2uLL);
    v27 = KeGetCurrentPrcb();
    v28 = v27->CurrentThread;
    if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
    {
      v29 = v28->WaitBlockFill6[68] == 2 && v28->NextProcessor == KeGetPcr()->Prcb.Number;
      EtwTraceEnqueueWork(v27->CurrentThread, v23, v29);
    }
    v30 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v26, 7u) )
    {
      do
      {
        if ( (++v30 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v30);
      }
      while ( (*(_DWORD *)v26 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v26, 7u) );
    }
    if ( *(_QWORD *)(v26 + 16) == v26 + 8
      || *(_DWORD *)(v26 + 40) >= *(_DWORD *)(v26 + 44)
      || v28->Queue == (_DISPATCHER_HEADER *volatile)v26 && v28->WaitReason == 15
      || !KiWakeQueueWaiter((__int64)v27, v26, v23) )
    {
      ++*(_DWORD *)(v26 + 4);
      v31 = *(__int64 **)(v26 + 32);
      *(_QWORD *)v23 = v26 + 24;
      *(_QWORD *)(v23 + 8) = v31;
      if ( *v31 != v26 + 24 )
        __fastfail(3u);
      *v31 = v23;
      *(_QWORD *)(v26 + 32) = v23;
    }
    _InterlockedAnd((volatile signed __int32 *)v26, 0xFFFFFF7F);
LABEL_79:
    if ( v21 == v22 )
      break;
    CurrentPrcb = v32;
  }
  v3 = Event;
LABEL_83:
  v22->Blink = v22;
  v22->Flink = v22;
LABEL_84:
  _InterlockedAnd(&v3->Header.Lock, 0xFFFFFF7F);
  KiExitDispatcher((_DWORD)v32, Wait, 1, Increment, CurrentIrql);
  return SignalState;
}
