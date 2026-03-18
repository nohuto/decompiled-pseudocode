/*
 * XREFs of KeSetEvent @ 0x1400875D0
 * Callers:
 *     VfPoolDelayFreeIfPossible @ 0x140002138 (VfPoolDelayFreeIfPossible.c)
 *     CcDeleteSharedCacheMap @ 0x14000D140 (CcDeleteSharedCacheMap.c)
 *     MiCopyDataPageToImagePage @ 0x14000EF10 (MiCopyDataPageToImagePage.c)
 *     MiInsertProtectedStandbyPage @ 0x140010160 (MiInsertProtectedStandbyPage.c)
 *     MiDecrementCloneBlockReference @ 0x140011D94 (MiDecrementCloneBlockReference.c)
 *     MiReplenishPageSlist @ 0x140012870 (MiReplenishPageSlist.c)
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 *     MiStoreUpdateMemoryConditions @ 0x140014BC8 (MiStoreUpdateMemoryConditions.c)
 *     MiFreeExcessSegments @ 0x140015B78 (MiFreeExcessSegments.c)
 *     MiReclaimSystemVa @ 0x140019340 (MiReclaimSystemVa.c)
 *     MiDecreaseAvailablePages @ 0x1400197DC (MiDecreaseAvailablePages.c)
 *     WmipUnreferenceRegEntry @ 0x14001AFF0 (WmipUnreferenceRegEntry.c)
 *     KiDecrementProcessStackCount @ 0x14002DAC8 (KiDecrementProcessStackCount.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     ExpWakePushLock @ 0x140030B00 (ExpWakePushLock.c)
 *     KiReadyThread @ 0x140034300 (KiReadyThread.c)
 *     ExReferenceCallBackBlock @ 0x140038510 (ExReferenceCallBackBlock.c)
 *     MiIssueHardFaultIo @ 0x14003A3B8 (MiIssueHardFaultIo.c)
 *     CcUnpinFileDataEx @ 0x14003A5E0 (CcUnpinFileDataEx.c)
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x14003ECA0 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiEmptyPageAccessLog @ 0x14006DE20 (MiEmptyPageAccessLog.c)
 *     PfFileInfoNotify @ 0x14006E310 (PfFileInfoNotify.c)
 *     ExpWorkerThread @ 0x14006F990 (ExpWorkerThread.c)
 *     MiResolveTransitionFault @ 0x1400728A0 (MiResolveTransitionFault.c)
 *     AlpcpSignal @ 0x14007A0C0 (AlpcpSignal.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14007F570 (NtWaitForWorkViaWorkerFactory.c)
 *     IopCompleteRequest @ 0x140086090 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     LZNT1DecompressChunkWorkItem @ 0x140091EE4 (LZNT1DecompressChunkWorkItem.c)
 *     ExNotifyWithProcessing @ 0x14009200C (ExNotifyWithProcessing.c)
 *     PpmReleaseLock @ 0x140097098 (PpmReleaseLock.c)
 *     PopQueueTargetDpc @ 0x14009C5CC (PopQueueTargetDpc.c)
 *     EtwpSwitchBuffer @ 0x14009D01C (EtwpSwitchBuffer.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x1400A3560 (CcFreeVirtualAddress.c)
 *     MiProcessWorkingSets @ 0x1400A53A0 (MiProcessWorkingSets.c)
 *     KiDetachProcess @ 0x1400A6A30 (KiDetachProcess.c)
 *     MiInsertUnusedSubsection @ 0x1400A86E0 (MiInsertUnusedSubsection.c)
 *     CcUninitializeCacheMap @ 0x1400AEF70 (CcUninitializeCacheMap.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     CcFlushCachePriv @ 0x1400AFD30 (CcFlushCachePriv.c)
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 *     CcWorkerThread @ 0x1400B2610 (CcWorkerThread.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiIncreaseAvailablePages @ 0x1400C0448 (MiIncreaseAvailablePages.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400C33F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     KiProcessThreadWaitList @ 0x1400C7610 (KiProcessThreadWaitList.c)
 *     KiRequestProcessInSwap @ 0x1400C7BB0 (KiRequestProcessInSwap.c)
 *     ExfReleaseRundownProtection @ 0x1400D0750 (ExfReleaseRundownProtection.c)
 *     PnpDeviceActionWorker @ 0x1400D11E4 (PnpDeviceActionWorker.c)
 *     ExpUnblockPushLock @ 0x1400D2A8C (ExpUnblockPushLock.c)
 *     SepRmCallLsa @ 0x1400D4F24 (SepRmCallLsa.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x1400D5D10 (ExReleaseRundownProtectionCacheAware.c)
 *     MiFinishVadDeletion @ 0x1400D6450 (MiFinishVadDeletion.c)
 *     IoAcquireRemoveLockEx @ 0x1400DAFE0 (IoAcquireRemoveLockEx.c)
 *     PopFxCompleteComponentActivation @ 0x1400DC434 (PopFxCompleteComponentActivation.c)
 *     IoReleaseRemoveLockEx @ 0x1400E26D0 (IoReleaseRemoveLockEx.c)
 *     CcPurgeAndClearCacheSection @ 0x1400E7B9C (CcPurgeAndClearCacheSection.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1400E9D60 (KiBalanceSetManagerDeferredRoutine.c)
 *     SmKmGenericCompletion @ 0x1400EA13C (SmKmGenericCompletion.c)
 *     CcNotifyWriteBehind @ 0x1400EB5C0 (CcNotifyWriteBehind.c)
 *     CmpLazyFlushDpcRoutine @ 0x1400EF370 (CmpLazyFlushDpcRoutine.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1400EFEFC (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     CcPrepareMdlWrite @ 0x1400F04A8 (CcPrepareMdlWrite.c)
 *     ExpEnumerateCallback @ 0x1400F0818 (ExpEnumerateCallback.c)
 *     MiQueuePageAccessLog @ 0x1400F152C (MiQueuePageAccessLog.c)
 *     PopUserPresentSet @ 0x1400F1E14 (PopUserPresentSet.c)
 *     ExpSetThreadReaperEvents @ 0x1400F2788 (ExpSetThreadReaperEvents.c)
 *     PnpRemoveDeviceActionRequests @ 0x1400F4378 (PnpRemoveDeviceActionRequests.c)
 *     SmKmStoreHelperWorker @ 0x1400F71C0 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7294 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F7B0C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x1400F7D9C (SmKmStoreHelperSendCommand.c)
 *     PfSnDeactivateTrace @ 0x1400FA91C (PfSnDeactivateTrace.c)
 *     PfpEventHandleFullBuffer @ 0x1400FABF8 (PfpEventHandleFullBuffer.c)
 *     PfpReturnAccessBuffer @ 0x1400FAC6C (PfpReturnAccessBuffer.c)
 *     PfSnReferenceProcessTrace @ 0x1400FAFB0 (PfSnReferenceProcessTrace.c)
 *     MiPrivateFixup @ 0x1400FEA08 (MiPrivateFixup.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400FF968 (CcPostWorkQueueAsyncRead.c)
 *     ExTryQueueWorkItem @ 0x140100504 (ExTryQueueWorkItem.c)
 *     ExpQueueWorkItemNode @ 0x14010075C (ExpQueueWorkItemNode.c)
 *     ExQueueWorkItem @ 0x140101400 (ExQueueWorkItem.c)
 *     CcDeleteBcbs @ 0x140107150 (CcDeleteBcbs.c)
 *     PopUnregisterPowerSettingCallback @ 0x140107554 (PopUnregisterPowerSettingCallback.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14010A09C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14010BE48 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14010D2C0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmFpFree @ 0x14010D4C0 (SmFpFree.c)
 *     MiFinishResume @ 0x1401121BC (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140113D70 (MiProcessDereferenceList.c)
 *     MiPfIssueCoalescedSupport @ 0x140116A74 (MiPfIssueCoalescedSupport.c)
 *     MiPfCompleteCoalescedIo @ 0x140116FD4 (MiPfCompleteCoalescedIo.c)
 *     PopTimestampTargetProcessor @ 0x1401179DC (PopTimestampTargetProcessor.c)
 *     PopBatteryWakeDpc @ 0x140117A3C (PopBatteryWakeDpc.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140117A70 (PfpScenCtxWaiterTimedOut.c)
 *     MiFlushAllPages @ 0x140118BC4 (MiFlushAllPages.c)
 *     MiWakeModifiedPageWriter @ 0x140118C84 (MiWakeModifiedPageWriter.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140119F04 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x14011AE50 (MiAllocatePfnRepurposeLogDispatch.c)
 *     EtwpLoggerDpc @ 0x14011B614 (EtwpLoggerDpc.c)
 *     MiQueueWorkingSetRequest @ 0x14011B7BC (MiQueueWorkingSetRequest.c)
 *     PopFxReleasePowerIrp @ 0x1401211A4 (PopFxReleasePowerIrp.c)
 *     PopIrpWorker @ 0x1401212D0 (PopIrpWorker.c)
 *     PnpUnlockDeviceActionQueue @ 0x140124628 (PnpUnlockDeviceActionQueue.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140125F3C (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     PopPepUpdateConstraints @ 0x14012F4AC (PopPepUpdateConstraints.c)
 *     MiUpdateAvailableEvents @ 0x140133178 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140133234 (MiSignalNonPagedPoolWatchers.c)
 *     ExCompareExchangeCallBack @ 0x140136EEC (ExCompareExchangeCallBack.c)
 *     KeBalanceSetManager @ 0x1401373C4 (KeBalanceSetManager.c)
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x14013A478 (MiSyncCommitSignals.c)
 *     PnpCompleteSystemStartProcess @ 0x14013C87C (PnpCompleteSystemStartProcess.c)
 *     WheapAddErrorSource @ 0x14013E604 (WheapAddErrorSource.c)
 *     MiTrimSegmentCache @ 0x14014231C (MiTrimSegmentCache.c)
 *     MiStoreEvictThread @ 0x140142B00 (MiStoreEvictThread.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401A8958 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1401A8F40 (CcPostDeferredWrites.c)
 *     FsFilterFreeCompletionStack @ 0x1401AD6B0 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1401ADEE8 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1401B71F4 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1401B7254 (IopFreeReserveIrp.c)
 *     IopCreateFlow @ 0x1401BD964 (IopCreateFlow.c)
 *     IopDeleteFlow @ 0x1401BD9BC (IopDeleteFlow.c)
 *     IopQueryFlowHistory @ 0x1401BDA74 (IopQueryFlowHistory.c)
 *     IopQueryFlowInformation @ 0x1401BDADC (IopQueryFlowInformation.c)
 *     IopSetFlowPolicy @ 0x1401BDB94 (IopSetFlowPolicy.c)
 *     IopSetHandleFlow @ 0x1401BDC08 (IopSetHandleFlow.c)
 *     PnpUnlockMountableDevice @ 0x1401BF914 (PnpUnlockMountableDevice.c)
 *     PnprQuiesce @ 0x1401C1090 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1401C1B3C (PnpDiagnosticCompletionRoutine.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1401C6E18 (KiReleaseSecondaryPassiveConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401CA1C8 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1401CA43C (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x1401CA470 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x1401CA538 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1401CA564 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x1401CC49C (KiBlockAndActivateUmsThread.c)
 *     MiZeroPageFile @ 0x1401CE874 (MiZeroPageFile.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiQueueControlAreaDelete @ 0x1401D1810 (MiQueueControlAreaDelete.c)
 *     MmFlushAllFilesystemPages @ 0x1401D5180 (MmFlushAllFilesystemPages.c)
 *     MiMarkMdlComplete @ 0x1401D6CB4 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x1401D7D4C (MiObtainFreePages.c)
 *     MiDeletePartitionResources @ 0x1401D91C8 (MiDeletePartitionResources.c)
 *     MiFlushComplete @ 0x1401DA128 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401DA230 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x1401DC124 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1401DC968 (MiFinishPageFileExtension.c)
 *     MiFlushAllHintedStorePages @ 0x1401DCA38 (MiFlushAllHintedStorePages.c)
 *     MiIrpCompletionApcRoutine @ 0x1401DCCAC (MiIrpCompletionApcRoutine.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x1401DD118 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiPageNotZero @ 0x1401DFFEC (MiPageNotZero.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401E5784 (MmStoreFlushOutstandingEvictions.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401E61A0 (NtSignalAndWaitForSingleObject.c)
 *     PopPropogateCoolingChange @ 0x1401E9310 (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x1401E9544 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x1401E9CD4 (PopFxCompleteComponentPerfState.c)
 *     PopUpdateWakeSourceWorker @ 0x1401ECBD0 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x1401ECEEC (PopBatteryIrpComplete.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x1401EE450 (PopPepStartDeviceUnregisterActivity.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x140203A60 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x14020A5DC (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x14020A6AC (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x14020D638 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140210AF4 (EtwpThreadRundownApc.c)
 *     ExNotifyBootDeviceRemoval @ 0x1402130A0 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x1402130EC (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x140214060 (ExReleaseRundownProtectionEx.c)
 *     WheapProcessWorkQueueItem @ 0x14021675C (WheapProcessWorkQueueItem.c)
 *     EmpReleasePagingReference @ 0x14039C870 (EmpReleasePagingReference.c)
 *     PopSystemIrpCompletion @ 0x14039D018 (PopSystemIrpCompletion.c)
 *     ExpSetSwappingKernelApc @ 0x14039D514 (ExpSetSwappingKernelApc.c)
 *     PfpScenCtxPrefetchStateSet @ 0x14039D6DC (PfpScenCtxPrefetchStateSet.c)
 *     PopTransitionToSleep @ 0x14039E084 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x14039EAC4 (PopEndMirroring.c)
 *     PopFlushVolumeWorker @ 0x1403A3C40 (PopFlushVolumeWorker.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopHandleWakeSources @ 0x1403A5A04 (PopHandleWakeSources.c)
 *     PfpScenCtxScenarioSet @ 0x1403A6580 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1403AF974 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1403B0C00 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1403B1B80 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1403B1D84 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1403B2728 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403B2740 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     MiInSwapStoreWorker @ 0x1403B5A9C (MiInSwapStoreWorker.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     ExpWnfNotifySubscription @ 0x1403E23AC (ExpWnfNotifySubscription.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1403E6600 (ExpWnfNotifyNameSubscribers.c)
 *     PfGetCompletedTrace @ 0x1403E7018 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1403E725C (PfTTraceListAdd.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x1403E9410 (PspEvaluateAndNotifyEmptyJob.c)
 *     CmNotifyRunDown @ 0x1403F1B90 (CmNotifyRunDown.c)
 *     MiPfExecuteReadList @ 0x1403F70AC (MiPfExecuteReadList.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     AlpcpCompleteDispatchMessage @ 0x1404069A0 (AlpcpCompleteDispatchMessage.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     NtSetEvent @ 0x14042F470 (NtSetEvent.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     IopSynchronousServiceTail @ 0x140437580 (IopSynchronousServiceTail.c)
 *     NtQueryVolumeInformationFile @ 0x1404383A0 (NtQueryVolumeInformationFile.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     PopUmpoProcessPowerMessage @ 0x1404496B8 (PopUmpoProcessPowerMessage.c)
 *     CmpFlushHive @ 0x14044B9C0 (CmpFlushHive.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14046A9CC (EtwpRealtimeUpdateConsumers.c)
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     WmipReleaseCollectionEnabled @ 0x14048C508 (WmipReleaseCollectionEnabled.c)
 *     WmipQueueNotification @ 0x14048C744 (WmipQueueNotification.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x14048D678 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     NtLockFile @ 0x14048F14C (NtLockFile.c)
 *     NtWriteFileGather @ 0x140490124 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404909FC (NtReadFileScatter.c)
 *     IopLoadUnloadDriver @ 0x140494328 (IopLoadUnloadDriver.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x140499190 (CmpSignalUnloadEventArrayForHive.c)
 *     CmpPostApc @ 0x14049A7D4 (CmpPostApc.c)
 *     CmpPostNotify @ 0x14049AAF4 (CmpPostNotify.c)
 *     EtwpShutdownConsumers @ 0x14049D918 (EtwpShutdownConsumers.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x14049D9D4 (EtwpRealtimeDisconnectAllConsumers.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1404A1280 (PopFxUnregisterDeviceOrWait.c)
 *     IopAcquireFileObjectLock @ 0x1404AC66C (IopAcquireFileObjectLock.c)
 *     AlpcpTrackPortReferences @ 0x1404AC7D4 (AlpcpTrackPortReferences.c)
 *     EtwpSynchronizeWithLogger @ 0x1404B666C (EtwpSynchronizeWithLogger.c)
 *     IopTrackLink @ 0x1404BC4A8 (IopTrackLink.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1404BDD10 (PiDrvDbLoadNodeWorkerCallback.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1404C2ECC (CmpGetVolumeClusterSizeCompletion.c)
 *     NtNotifyChangeSession @ 0x1404C2F6C (NtNotifyChangeSession.c)
 *     IoSetInformation @ 0x1404C362C (IoSetInformation.c)
 *     PopUserPresentSetWorker @ 0x1404C552C (PopUserPresentSetWorker.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1404C6650 (PfSnTracingStateExWorkerRoutine.c)
 *     IopExceptionCleanup @ 0x1404C68BC (IopExceptionCleanup.c)
 *     EtwpStopLoggerInstance @ 0x1404C989C (EtwpStopLoggerInstance.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404CAF98 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpDisassociateConsumer @ 0x1404CB344 (EtwpDisassociateConsumer.c)
 *     EtwpQueueNotification @ 0x1404CDF90 (EtwpQueueNotification.c)
 *     PfSnEndTrace @ 0x1404D2B18 (PfSnEndTrace.c)
 *     PfTReplaceCurrentBuffer @ 0x1404D3FE0 (PfTReplaceCurrentBuffer.c)
 *     IopQueryXxxInformation @ 0x1404DB258 (IopQueryXxxInformation.c)
 *     RtlDecompressBufferLZNT1 @ 0x1404DF1E4 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1404DF384 (RtlDecompressFragmentLZNT1.c)
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 *     PnpDeviceEventWorker @ 0x1404E0578 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x1404E08EC (PnpCompleteDeviceEvent.c)
 *     PiUEventDereferenceEventEntry @ 0x1404E19A8 (PiUEventDereferenceEventEntry.c)
 *     PiUEventHandleVetoEvent @ 0x1404EA320 (PiUEventHandleVetoEvent.c)
 *     RtlRunOnceComplete @ 0x1404EB660 (RtlRunOnceComplete.c)
 *     MiDereferenceSessionFinal @ 0x1404F36F0 (MiDereferenceSessionFinal.c)
 *     PopReleaseTransitionLock @ 0x1404F5984 (PopReleaseTransitionLock.c)
 *     PopCompleteAction @ 0x1404F7660 (PopCompleteAction.c)
 *     PfGenerateTrace @ 0x1404F7C3C (PfGenerateTrace.c)
 *     PopFinalizeWakeInfo @ 0x1404F8C68 (PopFinalizeWakeInfo.c)
 *     WmipAddDataSource @ 0x140501BD8 (WmipAddDataSource.c)
 *     IopDestroyActiveConnectBlock @ 0x1405036E8 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1405038C4 (IopAcquireReleaseConnectLockInternal.c)
 *     MmSetSessionObjectIoEvent @ 0x14050C320 (MmSetSessionObjectIoEvent.c)
 *     CmThawRegistry @ 0x140519210 (CmThawRegistry.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     CmpFinishBeingActiveFlusherAndReconciler @ 0x1405216F4 (CmpFinishBeingActiveFlusherAndReconciler.c)
 *     ArbArbiterHandler @ 0x14052BCF4 (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x14052C010 (ArbBuildAssignmentOrdering.c)
 *     MiInsertPageFileInList @ 0x140538300 (MiInsertPageFileInList.c)
 *     MUIRegistrySystemRoutine @ 0x140539B30 (MUIRegistrySystemRoutine.c)
 *     CmpWaitForHiveMount @ 0x14053FF80 (CmpWaitForHiveMount.c)
 *     CmpInitializeSystemHivesLoad @ 0x14054307C (CmpInitializeSystemHivesLoad.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 *     DbgkRegisterErrorPort @ 0x140547930 (DbgkRegisterErrorPort.c)
 *     WheapEtwEnableCallback @ 0x14054A064 (WheapEtwEnableCallback.c)
 *     PfTLoggingWorker @ 0x14054BCF4 (PfTLoggingWorker.c)
 *     PopNotifyPolicyDevice @ 0x14054BEDC (PopNotifyPolicyDevice.c)
 *     PopThermalWorker @ 0x14054C618 (PopThermalWorker.c)
 *     MmStoreRegister @ 0x14054E108 (MmStoreRegister.c)
 *     ExAllocatePrivateWorkerPool @ 0x14054E918 (ExAllocatePrivateWorkerPool.c)
 *     CmpPostApcRunDown @ 0x1405E74DC (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x1405EE548 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x1405EF390 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1405EF678 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x1405EF9A0 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x1405EFD9C (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x1405F13E0 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x1405F45A8 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopAllocateIrpCleanup @ 0x1405F70B8 (IopAllocateIrpCleanup.c)
 *     IopConnectLinkTrackingPort @ 0x1405F758C (IopConnectLinkTrackingPort.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F7CFC (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x1405F8664 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x1405FA2C0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x1405FF9D0 (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140602C78 (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x1406178CC (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x14061B43C (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x14063154C (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x140631D64 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x14063517C (PopFxUnregisterDevice.c)
 *     PopBatteryReadTag @ 0x140636EBC (PopBatteryReadTag.c)
 *     PopFanWorker @ 0x14063BDDC (PopFanWorker.c)
 *     PspDeferredWorkerRoutine @ 0x1406402BC (PspDeferredWorkerRoutine.c)
 *     SmcCacheAdd @ 0x140658908 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x140658AC0 (SmcCacheDelete.c)
 *     CMFSystemThreadRoutine @ 0x140676B60 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x140678224 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x14069EA30 (SbpVmbusNotificationHandler.c)
 *     KdpTimeSlipWork @ 0x1406AC880 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x1406C0270 (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x1406C14B4 (ViPendingQueuePassiveLevelCompletion.c)
 *     VerifierKeSetEvent @ 0x1406C65F4 (VerifierKeSetEvent.c)
 *     ViFilterRemoveNotificationCompletion @ 0x1406CF09C (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x1406DAF40 (AnFwpFadeAnimationTimer.c)
 *     sub_14072EAFC @ 0x14072EAFC (sub_14072EAFC.c)
 *     MiInitializePagedPoolEvents @ 0x14074D8B0 (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x140034400 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x14007E740 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x1400879A0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140088FA0 (KiTryUnwaitThread.c)
 *     KeIsThreadRunning @ 0x1401C2F44 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x14020DD68 (EtwTraceEnqueueWork.c)
 */

// local variable allocation has failed, the output may be wrong!
LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v3; // esi
  int v7; // r13d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  __int64 *v10; // rdx
  struct _LIST_ENTRY *v11; // r8
  LONG SignalState; // edi
  struct _KEVENT *Flink; // rax
  __int64 v14; // r13
  struct _LIST_ENTRY *v15; // rcx
  struct _LIST_ENTRY *v16; // rax
  char v17; // al
  bool v18; // zf
  struct _LIST_ENTRY *v20; // rax
  LIST_ENTRY *p_WaitListHead; // r13
  __int64 v22; // rdx
  char v23; // cl
  __int64 v24; // r8
  __int64 v25; // rcx
  char v26; // al
  __int64 v27; // rcx
  char v28; // al
  unsigned __int8 IsThreadRunning; // al
  __int64 v30; // r9
  unsigned __int8 v31; // al
  __int64 v32; // rdx
  __int64 v33; // r9
  _KTHREAD *CurrentThread; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v35; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v36; // [rsp+38h] [rbp-50h]
  _KTHREAD *v37; // [rsp+38h] [rbp-50h]
  struct _KEVENT *v38; // [rsp+40h] [rbp-48h]
  struct _LIST_ENTRY *v39; // [rsp+48h] [rbp-40h]
  __int64 v40; // [rsp+90h] [rbp+8h]
  __int64 Blink; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v42; // [rsp+A8h] [rbp+20h]

  v3 = 0;
  if ( (Event->Header.Type & 0x7F) != 0 )
  {
    v7 = 0;
  }
  else
  {
    if ( Event->Header.SignalState == 1 && !Wait )
      return 1;
    v7 = 1;
  }
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  CurrentPrcb = KeGetCurrentPrcb();
  KiAcquireKobjectLockSafe(&Event->Header.Lock, *(__int64 *)&Increment, Wait);
  SignalState = Event->Header.SignalState;
  Event->Header.SignalState = 1;
  if ( !SignalState )
  {
    if ( !v7 )
    {
      Flink = (struct _KEVENT *)Event->Header.WaitListHead.Flink;
      if ( Flink != (struct _KEVENT *)&Event->Header.WaitListHead )
      {
        while ( 1 )
        {
          v14 = (__int64)Flink;
          v38 = *(struct _KEVENT **)&Flink->Header.Lock;
          v15 = *(struct _LIST_ENTRY **)&Flink->Header.Lock;
          v16 = Flink->Header.WaitListHead.Flink;
          if ( v15->Blink != (struct _LIST_ENTRY *)v14 || v16->Flink != (struct _LIST_ENTRY *)v14 )
            __fastfail(3u);
          v16->Flink = v15;
          v15->Blink = v16;
          v17 = *(_BYTE *)(v14 + 16);
          if ( v17 == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v14, *(unsigned __int16 *)(v14 + 18), 0LL) )
            {
              v18 = Event->Header.SignalState-- == 1;
              if ( v18 )
                goto LABEL_11;
            }
          }
          else if ( v17 == 2 )
          {
            *(_BYTE *)(v14 + 17) = 5;
            v40 = *(_QWORD *)(v14 + 24);
            *(_QWORD *)v14 = 0LL;
            __writecr8(2uLL);
            v36 = KeGetCurrentPrcb();
            CurrentThread = v36->CurrentThread;
            if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
            {
              IsThreadRunning = KeIsThreadRunning(v36->CurrentThread);
              EtwTraceEnqueueWork(v30, v14, IsThreadRunning);
            }
            KiAcquireKobjectLockSafe((volatile signed __int32 *)v40, (__int64)v10, (__int64)v11);
            v25 = v40;
            if ( *(_QWORD *)(v40 + 16) == v40 + 8
              || *(_DWORD *)(v40 + 40) >= *(_DWORD *)(v40 + 44)
              || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v40 && CurrentThread->WaitReason == 15
              || (v26 = KiWakeQueueWaiter((__int64)v36, v40, v14), v25 = v40, !v26) )
            {
              ++*(_DWORD *)(v25 + 4);
              v10 = *(__int64 **)(v25 + 32);
              *(_QWORD *)v14 = v25 + 24;
              *(_QWORD *)(v14 + 8) = v10;
              if ( *v10 != v25 + 24 )
                __fastfail(3u);
              *v10 = v14;
              *(_QWORD *)(v25 + 32) = v14;
            }
            _InterlockedAnd((volatile signed __int32 *)v25, 0xFFFFFF7F);
            v18 = Event->Header.SignalState-- == 1;
            if ( v18 )
              goto LABEL_11;
          }
          else
          {
            KiTryUnwaitThread(CurrentPrcb, v14, 256LL, 0LL);
          }
          Flink = v38;
          if ( v38 == (struct _KEVENT *)&Event->Header.WaitListHead )
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    v20 = Event->Header.WaitListHead.Flink;
    p_WaitListHead = &Event->Header.WaitListHead;
    if ( v20 == &Event->Header.WaitListHead )
    {
LABEL_17:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v22 = (__int64)v20;
      v42 = v20;
      v39 = v20->Flink;
      v23 = (char)v20[1].Flink;
      if ( v23 == 1 )
      {
        v24 = WORD1(v20[1].Flink);
      }
      else
      {
        if ( v23 == 2 )
        {
          BYTE1(v20[1].Flink) = 5;
          Blink = (__int64)v20[1].Blink;
          v20->Flink = 0LL;
          __writecr8(2uLL);
          v35 = KeGetCurrentPrcb();
          v37 = v35->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v31 = KeIsThreadRunning(v35->CurrentThread);
            EtwTraceEnqueueWork(v33, v32, v31);
          }
          KiAcquireKobjectLockSafe((volatile signed __int32 *)Blink, v22, (__int64)v11);
          v27 = Blink;
          if ( *(_QWORD *)(Blink + 16) == Blink + 8
            || *(_DWORD *)(Blink + 40) >= *(_DWORD *)(Blink + 44)
            || v37->Queue == (_DISPATCHER_HEADER *volatile)Blink && v37->WaitReason == 15
            || (v28 = KiWakeQueueWaiter((__int64)v35, Blink, (__int64)v42), v27 = Blink, !v28) )
          {
            ++*(_DWORD *)(v27 + 4);
            v11 = *(struct _LIST_ENTRY **)(v27 + 32);
            v42->Flink = (struct _LIST_ENTRY *)(v27 + 24);
            v42->Blink = v11;
            if ( v11->Flink != (struct _LIST_ENTRY *)(v27 + 24) )
              __fastfail(3u);
            v11->Flink = v42;
            *(_QWORD *)(v27 + 32) = v42;
          }
          _InterlockedAnd((volatile signed __int32 *)v27, 0xFFFFFF7F);
          goto LABEL_21;
        }
        v24 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, v20, v24, 0LL);
LABEL_21:
      v20 = v39;
      if ( v39 == p_WaitListHead )
        goto LABEL_17;
    }
  }
LABEL_11:
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  if ( Wait )
    v3 = 3;
  KiExitDispatcher((_DWORD)CurrentPrcb, v3, 1, Increment, CurrentIrql);
  return SignalState;
}
