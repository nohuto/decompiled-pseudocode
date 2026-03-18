/*
 * XREFs of KeSetEvent @ 0x1400562D0
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140002C50 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140002D30 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003634 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039C4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x140003C0C (SmKmStoreHelperSendCommand.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003E08 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PfSnDeactivateTrace @ 0x140006874 (PfSnDeactivateTrace.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x140007280 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExNotifyWithProcessing @ 0x140009D60 (ExNotifyWithProcessing.c)
 *     PopQueueTargetDpc @ 0x14000D654 (PopQueueTargetDpc.c)
 *     ExReferenceCallBackBlock @ 0x140013F80 (ExReferenceCallBackBlock.c)
 *     MiReleasePageFileInfo @ 0x14001A280 (MiReleasePageFileInfo.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14001B760 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x14001BB80 (MiIncreaseAvailablePages.c)
 *     MiIssueHardFaultIo @ 0x1400237A4 (MiIssueHardFaultIo.c)
 *     MiCopyDataPageToImagePage @ 0x140023A40 (MiCopyDataPageToImagePage.c)
 *     MiInsertUnusedSubsection @ 0x140026DCC (MiInsertUnusedSubsection.c)
 *     MiEmptyPageAccessLog @ 0x140027640 (MiEmptyPageAccessLog.c)
 *     MiCheckControlArea @ 0x140027EE0 (MiCheckControlArea.c)
 *     MiFinishVadDeletion @ 0x1400295E0 (MiFinishVadDeletion.c)
 *     CcPinFileData @ 0x140031DE0 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x140032F20 (CcFreeVirtualAddress.c)
 *     CcMapAndCopyInToCache @ 0x140034F60 (CcMapAndCopyInToCache.c)
 *     MiResolveTransitionFault @ 0x140035F90 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x140039AF0 (MiCompleteProtoPteFault.c)
 *     MiFreePagedPoolPages @ 0x14004BBA0 (MiFreePagedPoolPages.c)
 *     MiFinishHardFault @ 0x14004D6A0 (MiFinishHardFault.c)
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     AlpcpSignalAndWait @ 0x14005E020 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005E350 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E910 (NtWaitForWorkViaWorkerFactory.c)
 *     KiReadyThread @ 0x14005FBEC (KiReadyThread.c)
 *     ExpQueueWorkItem @ 0x14005FCC0 (ExpQueueWorkItem.c)
 *     MiUnlinkPageFromList @ 0x140065A40 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066D00 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400671C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x1400695D0 (MiInsertPageInList.c)
 *     CcPurgeAndClearCacheSection @ 0x14006C840 (CcPurgeAndClearCacheSection.c)
 *     CcPostWorkQueueAsyncRead @ 0x14006DD38 (CcPostWorkQueueAsyncRead.c)
 *     MiInsertProtectedStandbyPage @ 0x1400701C0 (MiInsertProtectedStandbyPage.c)
 *     CcUninitializeCacheMap @ 0x1400705C0 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x140071980 (CcWorkerThread.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     MiQueuePageAccessLog @ 0x140086FA4 (MiQueuePageAccessLog.c)
 *     ExpUnblockPushLock @ 0x140087548 (ExpUnblockPushLock.c)
 *     MiDecreaseAvailablePages @ 0x14008AD20 (MiDecreaseAvailablePages.c)
 *     KiProcessThreadWaitList @ 0x14008DCC0 (KiProcessThreadWaitList.c)
 *     MiWriteComplete @ 0x14008E9E0 (MiWriteComplete.c)
 *     ExfReleaseRundownProtection @ 0x140090D30 (ExfReleaseRundownProtection.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140092850 (ExReleaseRundownProtectionCacheAware.c)
 *     IoReleaseRemoveLockEx @ 0x14009DD7C (IoReleaseRemoveLockEx.c)
 *     MiReclaimSystemVa @ 0x1400A38F4 (MiReclaimSystemVa.c)
 *     MiFreeExcessSegments @ 0x1400A3910 (MiFreeExcessSegments.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1400A9690 (KiBalanceSetManagerDeferredRoutine.c)
 *     SmKmGenericCompletion @ 0x1400AB8C8 (SmKmGenericCompletion.c)
 *     CcNotifyWriteBehind @ 0x1400AB9E0 (CcNotifyWriteBehind.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1400AD124 (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AEAD8 (MiAllocatePfnRepurposeLogDispatch.c)
 *     FlushWorkItemRoutineKernelMode @ 0x1400AF00C (FlushWorkItemRoutineKernelMode.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1400AF318 (LZNT1DecompressChunkWorkItem.c)
 *     CmpLazyFlushDpcRoutine @ 0x1400AF95C (CmpLazyFlushDpcRoutine.c)
 *     PnpDeviceActionWorker @ 0x1400AFA3C (PnpDeviceActionWorker.c)
 *     PfpReturnAccessBuffer @ 0x1400B0994 (PfpReturnAccessBuffer.c)
 *     CcPrepareMdlWrite @ 0x1400B161C (CcPrepareMdlWrite.c)
 *     SepRmCallLsa @ 0x1400B1930 (SepRmCallLsa.c)
 *     ExpEnumerateCallback @ 0x1400B2CF4 (ExpEnumerateCallback.c)
 *     ExpSetThreadReaperEvents @ 0x1400B2FD0 (ExpSetThreadReaperEvents.c)
 *     PopUserPresentSet @ 0x1400B4DC8 (PopUserPresentSet.c)
 *     KeRetryOutswapProcess @ 0x1400B5500 (KeRetryOutswapProcess.c)
 *     PnpRemoveDeviceActionRequests @ 0x1400B59B0 (PnpRemoveDeviceActionRequests.c)
 *     MiDecrementCloneBlockReference @ 0x1400B8CA0 (MiDecrementCloneBlockReference.c)
 *     MiWorkingSetManager @ 0x1400BDF08 (MiWorkingSetManager.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400BF048 (MiStoreUpdateMemoryConditions.c)
 *     IoAcquireRemoveLockEx @ 0x1400C1730 (IoAcquireRemoveLockEx.c)
 *     PopFxCompleteComponentActivation @ 0x1400C1A64 (PopFxCompleteComponentActivation.c)
 *     ExTryQueueWorkItem @ 0x1400C30E0 (ExTryQueueWorkItem.c)
 *     WmipUnreferenceRegEntry @ 0x1400C48D0 (WmipUnreferenceRegEntry.c)
 *     ExpWakePushLock @ 0x1400C8760 (ExpWakePushLock.c)
 *     CcDeleteSharedCacheMap @ 0x1400CCD34 (CcDeleteSharedCacheMap.c)
 *     MiProcessWorkingSets @ 0x1400CD640 (MiProcessWorkingSets.c)
 *     KiDetachProcess @ 0x1400CE460 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x1400CEB20 (KiDecrementProcessStackCount.c)
 *     KiRequestProcessInSwap @ 0x1400CECA0 (KiRequestProcessInSwap.c)
 *     CcUnpinFileDataEx @ 0x1400CF860 (CcUnpinFileDataEx.c)
 *     PpmCheckRun @ 0x1400D4610 (PpmCheckRun.c)
 *     PpmReleaseLock @ 0x1400D46D4 (PpmReleaseLock.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     ExpWorkerThread @ 0x1400E7700 (ExpWorkerThread.c)
 *     CcWriteBehindInternal @ 0x1400E7F30 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 *     CcFlushCachePriv @ 0x1400E8E10 (CcFlushCachePriv.c)
 *     EtwpSwitchBuffer @ 0x1400ED3E0 (EtwpSwitchBuffer.c)
 *     PfFileInfoNotify @ 0x1400EEAD0 (PfFileInfoNotify.c)
 *     PfpEventHandleFullBuffer @ 0x1400F0420 (PfpEventHandleFullBuffer.c)
 *     PfSnReferenceProcessTrace @ 0x1400F0910 (PfSnReferenceProcessTrace.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     MiPrivateFixup @ 0x14010B3F0 (MiPrivateFixup.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010D6EC (ExTryQueueWorkItemFromIo.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14010F220 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiIrpCompletionApcRoutine @ 0x14010F334 (MiIrpCompletionApcRoutine.c)
 *     PnpUnlockDeviceActionQueue @ 0x1401106F8 (PnpUnlockDeviceActionQueue.c)
 *     CcDeleteBcbs @ 0x140111D74 (CcDeleteBcbs.c)
 *     PopUnregisterPowerSettingCallback @ 0x140111E80 (PopUnregisterPowerSettingCallback.c)
 *     MiFlushAllPages @ 0x140113188 (MiFlushAllPages.c)
 *     MiWakeModifiedPageWriter @ 0x140113248 (MiWakeModifiedPageWriter.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x14011785C (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14011A324 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011ABA0 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmFpFree @ 0x14011ADA8 (SmFpFree.c)
 *     MiFinishResume @ 0x140120570 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x14012259C (MiProcessDereferenceList.c)
 *     MiPfIssueCoalescedSupport @ 0x140125220 (MiPfIssueCoalescedSupport.c)
 *     MiPfCompleteCoalescedIo @ 0x140125BC0 (MiPfCompleteCoalescedIo.c)
 *     PopTimestampTargetProcessor @ 0x140126AF0 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140126B64 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140126BB8 (PfpScenCtxWaiterTimedOut.c)
 *     PopBatteryWakeDpc @ 0x140126BD4 (PopBatteryWakeDpc.c)
 *     PopFxReleasePowerIrp @ 0x14012BA48 (PopFxReleasePowerIrp.c)
 *     PopIrpWorker @ 0x14012BB74 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14012C374 (PopPepUpdateConstraints.c)
 *     VfPoolDelayFreeIfPossible @ 0x14012EF14 (VfPoolDelayFreeIfPossible.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140130748 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     MiQueueWorkingSetRequest @ 0x14013135C (MiQueueWorkingSetRequest.c)
 *     EtwpLoggerDpc @ 0x140131448 (EtwpLoggerDpc.c)
 *     ExCompareExchangeCallBack @ 0x140136688 (ExCompareExchangeCallBack.c)
 *     MiZeroNodePages @ 0x14013A830 (MiZeroNodePages.c)
 *     MiUpdateAvailableEvents @ 0x14013C7F8 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14013C8B4 (MiSignalNonPagedPoolWatchers.c)
 *     KeBalanceSetManager @ 0x14013EF3C (KeBalanceSetManager.c)
 *     MiZeroLargePages @ 0x14013F2D0 (MiZeroLargePages.c)
 *     MiReassessZeroThreads @ 0x14013F4D4 (MiReassessZeroThreads.c)
 *     MiModifiedPageWriter @ 0x140142508 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x140142B2C (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x14014341C (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x140145238 (PnpCompleteSystemStartProcess.c)
 *     WheapAddErrorSource @ 0x140147268 (WheapAddErrorSource.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401B1390 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1401B1B04 (CcPostDeferredWrites.c)
 *     FsFilterFreeCompletionStack @ 0x1401B9DA4 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1401BA738 (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1401C4D34 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1401C4D94 (IopFreeReserveIrp.c)
 *     PnpUnlockMountableDevice @ 0x1401CDE9C (PnpUnlockMountableDevice.c)
 *     PnprQuiesce @ 0x1401D05D4 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1401D114C (PnpDiagnosticCompletionRoutine.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1401D5F88 (KiReleaseSecondaryPassiveConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D8994 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1401D8C10 (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x1401D8C44 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x1401D8D0C (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1401D8D38 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x1401DC128 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x1401DF008 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x1401DF2E8 (MiQueueControlAreaDelete.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E0630 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0934 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x1401E1904 (MiZeroPageFile.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5DD4 (MmFlushAllFilesystemPages.c)
 *     MiMarkMdlComplete @ 0x1401E8970 (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x1401E9B08 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x1401EAD40 (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAE48 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDF10 (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1401EE648 (MiFinishPageFileExtension.c)
 *     MiFlushAllHintedStorePages @ 0x1401EE714 (MiFlushAllHintedStorePages.c)
 *     MiDeletePartitionResources @ 0x1401F13D0 (MiDeletePartitionResources.c)
 *     MiPageNotZero @ 0x1401F2C8C (MiPageNotZero.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401F4E50 (MmStoreFlushOutstandingEvictions.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401FEA5C (NtSignalAndWaitForSingleObject.c)
 *     PopPropogateCoolingChange @ 0x140201D2C (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x1402020F8 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x1402026AC (PopFxCompleteComponentPerfState.c)
 *     PopUpdateWakeSourceWorker @ 0x140205A18 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x140205D38 (PopBatteryIrpComplete.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x140206FD4 (PopPepStartDeviceUnregisterActivity.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14020B780 (PopUpdateWatchdogNoWorkersEvent.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14021D5E4 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140221E34 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140221EF4 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x140225124 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140229064 (EtwpThreadRundownApc.c)
 *     ExNotifyBootDeviceRemoval @ 0x14022D178 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x14022D1C4 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x14022DCA8 (ExReleaseRundownProtectionEx.c)
 *     ExpQueueWorkItemNode @ 0x14022EA8C (ExpQueueWorkItemNode.c)
 *     WheapProcessWorkQueueItem @ 0x1402308D4 (WheapProcessWorkQueueItem.c)
 *     EmpReleasePagingReference @ 0x1403C874C (EmpReleasePagingReference.c)
 *     PopTransitionToSleep @ 0x1403C9804 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopHandleWakeSources @ 0x1403D0AEC (PopHandleWakeSources.c)
 *     PopFlushVolumeWorker @ 0x1403D0FC4 (PopFlushVolumeWorker.c)
 *     PopSystemIrpCompletion @ 0x1403D12D8 (PopSystemIrpCompletion.c)
 *     ExpSetSwappingKernelApc @ 0x1403D1E74 (ExpSetSwappingKernelApc.c)
 *     PfpScenCtxPrefetchStateSet @ 0x1403D1F5C (PfpScenCtxPrefetchStateSet.c)
 *     PfpScenCtxScenarioSet @ 0x1403D2AF4 (PfpScenCtxScenarioSet.c)
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1403DCD24 (PnprQuiesceWorker.c)
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 *     MiZeroAllPageFiles @ 0x1403DEA58 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     PopBuildDeviceNotifyListWatchdog @ 0x1403DF414 (PopBuildDeviceNotifyListWatchdog.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403DF42C (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     PfGetCompletedTrace @ 0x1403E6AB4 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1403E6D38 (PfTTraceListAdd.c)
 *     PfTReplaceCurrentBuffer @ 0x1403E8A6C (PfTReplaceCurrentBuffer.c)
 *     PfSnEndTrace @ 0x1403E8F64 (PfSnEndTrace.c)
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     IopAcquireFileObjectLock @ 0x1403ECA60 (IopAcquireFileObjectLock.c)
 *     PiUEventDereferenceEventEntry @ 0x1403EF49C (PiUEventDereferenceEventEntry.c)
 *     PnpDeviceEventWorker @ 0x1403EF9F0 (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x1403EFD70 (PnpCompleteDeviceEvent.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F1DC4 (PiDrvDbLoadNodeWorkerCallback.c)
 *     CmpWakeWriteQueueWaiters @ 0x1403F9010 (CmpWakeWriteQueueWaiters.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     MiPfExecuteReadList @ 0x14042C854 (MiPfExecuteReadList.c)
 *     CmpDeleteKeyObject @ 0x14043C400 (CmpDeleteKeyObject.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     NtSetEvent @ 0x140447A00 (NtSetEvent.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044B990 (AlpcpCompleteDispatchMessage.c)
 *     ExpWnfNotifyNameSubscribers @ 0x1404630B4 (ExpWnfNotifyNameSubscribers.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140469F64 (PspEvaluateAndNotifyEmptyJob.c)
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 *     EtwpLogger @ 0x14048FBA8 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x14049043C (EtwpRealtimeUpdateConsumers.c)
 *     EtwpQueueNotification @ 0x140490BB0 (EtwpQueueNotification.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x140491760 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpSynchronizeWithLogger @ 0x140492AB0 (EtwpSynchronizeWithLogger.c)
 *     EtwpDisassociateConsumer @ 0x140492B80 (EtwpDisassociateConsumer.c)
 *     EtwpShutdownConsumers @ 0x140493A6C (EtwpShutdownConsumers.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x140493B1C (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpStopLoggerInstance @ 0x140493B50 (EtwpStopLoggerInstance.c)
 *     CmpPostApc @ 0x14049A620 (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x14049A8F0 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x14049A9D4 (CmpPostNotify.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x14049FC28 (CmpSignalUnloadEventArrayForHive.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404BDB18 (NtReadFileScatter.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1404C7B8C (PopFxUnregisterDeviceOrWait.c)
 *     IopTrackLink @ 0x1404CB08C (IopTrackLink.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1404CC87C (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     ExpWnfNotifySubscription @ 0x1404D5E70 (ExpWnfNotifySubscription.c)
 *     AlpcpTrackPortReferences @ 0x1404DD5AC (AlpcpTrackPortReferences.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1404E0D40 (RtlDecompressFragmentLZNT1.c)
 *     IopLoadUnloadDriver @ 0x1404E663C (IopLoadUnloadDriver.c)
 *     IoSetInformation @ 0x1404E8078 (IoSetInformation.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1404EDADC (CmpGetVolumeClusterSizeCompletion.c)
 *     NtNotifyChangeSession @ 0x1404EE3E8 (NtNotifyChangeSession.c)
 *     PopUserPresentSetWorker @ 0x1404F0484 (PopUserPresentSetWorker.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1404F1418 (PfSnTracingStateExWorkerRoutine.c)
 *     MiInSwapStoreWorker @ 0x1404F18A4 (MiInSwapStoreWorker.c)
 *     RtlDecompressBufferLZNT1 @ 0x140506C50 (RtlDecompressBufferLZNT1.c)
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x140511B30 (NtQueryVolumeInformationFile.c)
 *     CmNotifyRunDown @ 0x1405152B8 (CmNotifyRunDown.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     PiUEventHandleVetoEvent @ 0x14052916C (PiUEventHandleVetoEvent.c)
 *     PopReleaseTransitionLock @ 0x14052EA04 (PopReleaseTransitionLock.c)
 *     PfGenerateTrace @ 0x14052FD24 (PfGenerateTrace.c)
 *     PopCompleteAction @ 0x140530720 (PopCompleteAction.c)
 *     MiDereferenceSessionFinal @ 0x140531AD0 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x140533030 (PopFinalizeWakeInfo.c)
 *     WmipAddDataSource @ 0x140537074 (WmipAddDataSource.c)
 *     WmipQueueNotification @ 0x14053809C (WmipQueueNotification.c)
 *     IopDestroyActiveConnectBlock @ 0x140539F98 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14053A144 (IopAcquireReleaseConnectLockInternal.c)
 *     MmSetSessionObjectIoEvent @ 0x140546E44 (MmSetSessionObjectIoEvent.c)
 *     RtlRunOnceComplete @ 0x14054CDD8 (RtlRunOnceComplete.c)
 *     WmipReleaseCollectionEnabled @ 0x14054CF24 (WmipReleaseCollectionEnabled.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     ArbArbiterHandler @ 0x14055803C (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x140558A4C (ArbBuildAssignmentOrdering.c)
 *     PfTLoggingWorker @ 0x14055B15C (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D110 (CmpFinishSystemHivesLoad.c)
 *     MUIRegistrySystemRoutine @ 0x1405610A0 (MUIRegistrySystemRoutine.c)
 *     MmStoreRegister @ 0x140567FC0 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x140568B64 (MiInsertPageFileInList.c)
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14056C058 (PopNotifyPolicyDevice.c)
 *     PopThermalWorker @ 0x140573F40 (PopThermalWorker.c)
 *     CmpWaitForHiveMount @ 0x1405752DC (CmpWaitForHiveMount.c)
 *     ExAllocatePrivateWorkerPool @ 0x140575508 (ExAllocatePrivateWorkerPool.c)
 *     CmpInitializeSystemHivesLoad @ 0x1405770F4 (CmpInitializeSystemHivesLoad.c)
 *     DbgkRegisterErrorPort @ 0x14057B984 (DbgkRegisterErrorPort.c)
 *     WheapEtwEnableCallback @ 0x14057F424 (WheapEtwEnableCallback.c)
 *     CmThawRegistry @ 0x140602DE0 (CmThawRegistry.c)
 *     CmpPostApcRunDown @ 0x140606AAC (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x140618178 (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140618F9C (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x14061927C (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x14061959C (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140619998 (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14061B638 (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14061E904 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopAllocateIrpCleanup @ 0x140620DC0 (IopAllocateIrpCleanup.c)
 *     IopConnectLinkTrackingPort @ 0x140621294 (IopConnectLinkTrackingPort.c)
 *     IopExceptionCleanup @ 0x1406213D4 (IopExceptionCleanup.c)
 *     IopInvalidateVolumesForDevice @ 0x140621ABC (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x1406224EC (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140623CF0 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x140629A20 (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14062CFF4 (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14064C5EC (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x14065074C (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x140669770 (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x140669ED4 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x14066D58C (PopFxUnregisterDevice.c)
 *     PopBatteryReadTag @ 0x14066F2A0 (PopBatteryReadTag.c)
 *     PopFanWorker @ 0x140673168 (PopFanWorker.c)
 *     TtmiCloseEventQueue @ 0x140679E18 (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14067A12C (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x14067E75C (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x14067E784 (PspDeleteServerSiloGlobals.c)
 *     SmcCacheAdd @ 0x140699D00 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x140699EB4 (SmcCacheDelete.c)
 *     CMFSystemThreadRoutine @ 0x1406B95A0 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1406BA95C (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x1406E55F0 (SbpVmbusNotificationHandler.c)
 *     KdpTimeSlipWork @ 0x1406F3064 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x14070C2CC (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x14070D51C (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x14071B154 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140726E84 (AnFwpFadeAnimationTimer.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     MiInitializePagedPoolEvents @ 0x1407A51FC (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056700 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057DA0 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EE7C0 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EE800 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F9DBC (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2C78 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225C20 (EtwTraceEnqueueWork.c)
 */

LONG __stdcall KeSetEvent(PRKEVENT Event, KPRIORITY Increment, BOOLEAN Wait)
{
  int v3; // esi
  int v7; // r13d
  unsigned __int8 CurrentIrql; // r12
  struct _KPRCB *CurrentPrcb; // r15
  LONG SignalState; // edi
  struct _KEVENT *Flink; // rax
  struct _KEVENT *v12; // r13
  __int64 v13; // rcx
  struct _LIST_ENTRY *v14; // rax
  char Blink; // al
  bool v16; // zf
  struct _LIST_ENTRY *v18; // rax
  LIST_ENTRY *p_WaitListHead; // r13
  char v20; // cl
  __int64 v21; // r8
  _QWORD *v22; // rdx
  __int64 v23; // rcx
  char v24; // al
  int v25; // r9d
  struct _KEVENT **v26; // r8
  struct _LIST_ENTRY **p_Blink; // r8
  struct _LIST_ENTRY *v28; // rcx
  char v29; // al
  int Flink_high; // r10d
  struct _LIST_ENTRY *v31; // r9
  unsigned __int8 IsThreadRunning; // al
  __int64 v33; // r9
  unsigned __int8 v34; // al
  __int64 v35; // rdx
  __int64 v36; // r9
  struct _LIST_ENTRY *v37; // [rsp+30h] [rbp-58h]
  struct _KPRCB *v38; // [rsp+30h] [rbp-58h]
  _KTHREAD *CurrentThread; // [rsp+38h] [rbp-50h]
  struct _KPRCB *v40; // [rsp+38h] [rbp-50h]
  struct _KEVENT *v41; // [rsp+40h] [rbp-48h]
  _KTHREAD *v42; // [rsp+40h] [rbp-48h]
  struct _LIST_ENTRY *v43; // [rsp+48h] [rbp-40h]
  __int64 v44; // [rsp+90h] [rbp+8h]
  struct _LIST_ENTRY *v45; // [rsp+90h] [rbp+8h]

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
  KiAcquireKobjectLockSafe(Event);
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
          v12 = Flink;
          v41 = *(struct _KEVENT **)&Flink->Header.Lock;
          v13 = *(_QWORD *)&Flink->Header.Lock;
          v14 = Flink->Header.WaitListHead.Flink;
          if ( *(struct _KEVENT **)(v13 + 8) != v12 || (struct _KEVENT *)v14->Flink != v12 )
            __fastfail(3u);
          v14->Flink = (struct _LIST_ENTRY *)v13;
          *(_QWORD *)(v13 + 8) = v14;
          Blink = (char)v12->Header.WaitListHead.Blink;
          if ( Blink == 1 )
          {
            if ( (unsigned __int8)KiTryUnwaitThread(CurrentPrcb, v12, WORD1(v12->Header.WaitListHead.Blink), 0LL) )
            {
              v16 = Event->Header.SignalState-- == 1;
              if ( v16 )
                goto LABEL_11;
            }
          }
          else
          {
            if ( Blink == 2 )
            {
              BYTE1(v12->Header.WaitListHead.Blink) = 5;
              v44 = *(_QWORD *)&v12[1].Header.Lock;
              *(_QWORD *)&v12->Header.Lock = 0LL;
              __writecr8(2uLL);
              v38 = KeGetCurrentPrcb();
              CurrentThread = v38->CurrentThread;
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                IsThreadRunning = KeIsThreadRunning(v38->CurrentThread);
                EtwTraceEnqueueWork(v33, v12, IsThreadRunning);
              }
              KiAcquireKobjectLockSafe(v44);
              v22 = (_QWORD *)(v44 + 8);
              v23 = v44;
              if ( (_QWORD *)*v22 == v22
                || *(_DWORD *)(v44 + 40) >= *(_DWORD *)(v44 + 44)
                || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v44 && CurrentThread->WaitReason == 15 )
              {
LABEL_37:
                v25 = *(_DWORD *)(v23 + 4);
                *(_DWORD *)(v23 + 4) = v25 + 1;
                v26 = *(struct _KEVENT ***)(v23 + 32);
                if ( *v26 != (struct _KEVENT *)(v23 + 24) )
                  __fastfail(3u);
                *(_QWORD *)&v12->Header.Lock = v23 + 24;
                v12->Header.WaitListHead.Flink = (struct _LIST_ENTRY *)v26;
                *v26 = v12;
                *(_QWORD *)(v23 + 32) = v12;
                if ( !v25 && (_QWORD *)*v22 != v22 )
                {
                  KiWakeOtherQueueWaiters(v38, v23);
                  v23 = v44;
                }
              }
              else
              {
                v24 = KiWakeQueueWaiter(v38, v44, v12);
                v23 = v44;
                if ( !v24 )
                {
                  v22 = (_QWORD *)(v44 + 8);
                  goto LABEL_37;
                }
              }
              _InterlockedAnd((volatile signed __int32 *)v23, 0xFFFFFF7F);
              v16 = Event->Header.SignalState-- == 1;
              if ( v16 )
                goto LABEL_11;
              goto LABEL_50;
            }
            KiTryUnwaitThread(CurrentPrcb, v12, 256LL, 0LL);
          }
LABEL_50:
          Flink = v41;
          if ( v41 == (struct _KEVENT *)&Event->Header.WaitListHead )
            goto LABEL_11;
        }
      }
      goto LABEL_11;
    }
    v18 = Event->Header.WaitListHead.Flink;
    p_WaitListHead = &Event->Header.WaitListHead;
    if ( v18 == &Event->Header.WaitListHead )
    {
LABEL_17:
      Event->Header.WaitListHead.Blink = &Event->Header.WaitListHead;
      p_WaitListHead->Flink = p_WaitListHead;
      goto LABEL_11;
    }
    while ( 1 )
    {
      v37 = v18;
      v43 = v18->Flink;
      v20 = (char)v18[1].Flink;
      if ( v20 == 1 )
      {
        v21 = WORD1(v18[1].Flink);
      }
      else
      {
        if ( v20 == 2 )
        {
          BYTE1(v18[1].Flink) = 5;
          v45 = v18[1].Blink;
          v18->Flink = 0LL;
          __writecr8(2uLL);
          v40 = KeGetCurrentPrcb();
          v42 = v40->CurrentThread;
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v34 = KeIsThreadRunning(v40->CurrentThread);
            EtwTraceEnqueueWork(v36, v35, v34);
          }
          KiAcquireKobjectLockSafe(v45);
          p_Blink = &v45->Blink;
          v28 = v45;
          if ( *p_Blink == (struct _LIST_ENTRY *)p_Blink
            || LODWORD(v45[2].Blink) >= HIDWORD(v45[2].Blink)
            || (struct _LIST_ENTRY *)v42->Queue == v45 && v42->WaitReason == 15 )
          {
LABEL_55:
            Flink_high = HIDWORD(v28->Flink);
            HIDWORD(v28->Flink) = Flink_high + 1;
            v31 = v28[2].Flink;
            if ( v31->Flink != (struct _LIST_ENTRY *)&v28[1].Blink )
              __fastfail(3u);
            v37->Flink = (struct _LIST_ENTRY *)((char *)v28 + 24);
            v37->Blink = v31;
            v31->Flink = v37;
            v28[2].Flink = v37;
            if ( !Flink_high && *p_Blink != (struct _LIST_ENTRY *)p_Blink )
            {
              KiWakeOtherQueueWaiters(v40, v28);
              v28 = v45;
            }
          }
          else
          {
            v29 = KiWakeQueueWaiter(v40, v45, v37);
            v28 = v45;
            if ( !v29 )
            {
              p_Blink = &v45->Blink;
              goto LABEL_55;
            }
          }
          _InterlockedAnd((volatile signed __int32 *)v28, 0xFFFFFF7F);
          goto LABEL_21;
        }
        v21 = 256LL;
      }
      KiTryUnwaitThread(CurrentPrcb, v18, v21, 0LL);
LABEL_21:
      v18 = v43;
      if ( v43 == p_WaitListHead )
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
