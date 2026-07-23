/*
 * XREFs of KeSetEvent @ 0x140055E50
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140002DC4 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmptyWorker @ 0x140002EA4 (SmKmStoreDeleteWhenEmptyWorker.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003B38 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperSendCommand @ 0x140003D80 (SmKmStoreHelperSendCommand.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003F7C (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PfSnDeactivateTrace @ 0x1400069E4 (PfSnDeactivateTrace.c)
 *     ExReleaseRundownProtectionCacheAwareEx @ 0x1400073F0 (ExReleaseRundownProtectionCacheAwareEx.c)
 *     ExNotifyWithProcessing @ 0x1400098E0 (ExNotifyWithProcessing.c)
 *     PopQueueTargetDpc @ 0x14000D1D4 (PopQueueTargetDpc.c)
 *     ExReferenceCallBackBlock @ 0x140013B00 (ExReferenceCallBackBlock.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiInsertLargePageInNodeListHelper @ 0x14001B2E0 (MiInsertLargePageInNodeListHelper.c)
 *     MiIncreaseAvailablePages @ 0x14001B700 (MiIncreaseAvailablePages.c)
 *     MiIssueHardFaultIo @ 0x140023324 (MiIssueHardFaultIo.c)
 *     MiCopyDataPageToImagePage @ 0x1400235C0 (MiCopyDataPageToImagePage.c)
 *     MiInsertUnusedSubsection @ 0x14002694C (MiInsertUnusedSubsection.c)
 *     MiEmptyPageAccessLog @ 0x1400271C0 (MiEmptyPageAccessLog.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     MiFinishVadDeletion @ 0x140029160 (MiFinishVadDeletion.c)
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcFreeVirtualAddress @ 0x140032AA0 (CcFreeVirtualAddress.c)
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     MiResolveTransitionFault @ 0x140035B10 (MiResolveTransitionFault.c)
 *     MiCompleteProtoPteFault @ 0x140039670 (MiCompleteProtoPteFault.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     IopCompleteRequest @ 0x1400543C0 (IopCompleteRequest.c)
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     AlpcpSignal @ 0x14005DED0 (AlpcpSignal.c)
 *     NtWaitForWorkViaWorkerFactory @ 0x14005E490 (NtWaitForWorkViaWorkerFactory.c)
 *     KiReadyThread @ 0x14005F76C (KiReadyThread.c)
 *     ExpQueueWorkItem @ 0x14005F840 (ExpQueueWorkItem.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiUnlinkFreeOrZeroedPage @ 0x140066880 (MiUnlinkFreeOrZeroedPage.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     CcPurgeAndClearCacheSection @ 0x14006C3C0 (CcPurgeAndClearCacheSection.c)
 *     CcPostWorkQueueAsyncRead @ 0x14006D8B8 (CcPostWorkQueueAsyncRead.c)
 *     MiInsertProtectedStandbyPage @ 0x14006FD40 (MiInsertProtectedStandbyPage.c)
 *     CcUninitializeCacheMap @ 0x140070140 (CcUninitializeCacheMap.c)
 *     CcWorkerThread @ 0x140071500 (CcWorkerThread.c)
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     PnpDeviceActionWorker @ 0x1400865A0 (PnpDeviceActionWorker.c)
 *     MiQueuePageAccessLog @ 0x140088894 (MiQueuePageAccessLog.c)
 *     MiDecreaseAvailablePages @ 0x14008A420 (MiDecreaseAvailablePages.c)
 *     KiProcessThreadWaitList @ 0x14008D420 (KiProcessThreadWaitList.c)
 *     MiWriteComplete @ 0x14008E140 (MiWriteComplete.c)
 *     ExfReleaseRundownProtection @ 0x140090490 (ExfReleaseRundownProtection.c)
 *     ExReleaseRundownProtectionCacheAware @ 0x140091FB0 (ExReleaseRundownProtectionCacheAware.c)
 *     IoReleaseRemoveLockEx @ 0x14009D57C (IoReleaseRemoveLockEx.c)
 *     MiReclaimSystemVa @ 0x1400A221C (MiReclaimSystemVa.c)
 *     MiFreeExcessSegments @ 0x1400A2238 (MiFreeExcessSegments.c)
 *     KiBalanceSetManagerDeferredRoutine @ 0x1400A7C10 (KiBalanceSetManagerDeferredRoutine.c)
 *     SmKmGenericCompletion @ 0x1400A9E30 (SmKmGenericCompletion.c)
 *     CcNotifyWriteBehind @ 0x1400A9F48 (CcNotifyWriteBehind.c)
 *     IopCancelIrpsInCurrentThreadListSpecialApc @ 0x1400AB68C (IopCancelIrpsInCurrentThreadListSpecialApc.c)
 *     MiAllocatePfnRepurposeLogDispatch @ 0x1400AD040 (MiAllocatePfnRepurposeLogDispatch.c)
 *     FlushWorkItemRoutineKernelMode @ 0x1400AD574 (FlushWorkItemRoutineKernelMode.c)
 *     LZNT1DecompressChunkWorkItem @ 0x1400AD880 (LZNT1DecompressChunkWorkItem.c)
 *     CmpLazyFlushDpcRoutine @ 0x1400ADEC4 (CmpLazyFlushDpcRoutine.c)
 *     PfpReturnAccessBuffer @ 0x1400AEA04 (PfpReturnAccessBuffer.c)
 *     CcPrepareMdlWrite @ 0x1400AF55C (CcPrepareMdlWrite.c)
 *     SepRmCallLsa @ 0x1400AF870 (SepRmCallLsa.c)
 *     ExpEnumerateCallback @ 0x1400B0C40 (ExpEnumerateCallback.c)
 *     ExpSetThreadReaperEvents @ 0x1400B0E50 (ExpSetThreadReaperEvents.c)
 *     PopUserPresentSet @ 0x1400B2C00 (PopUserPresentSet.c)
 *     KeRetryOutswapProcess @ 0x1400B3328 (KeRetryOutswapProcess.c)
 *     PnpRemoveDeviceActionRequests @ 0x1400B37D8 (PnpRemoveDeviceActionRequests.c)
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MiWorkingSetManager @ 0x1400BBD98 (MiWorkingSetManager.c)
 *     MiStoreUpdateMemoryConditions @ 0x1400BCED8 (MiStoreUpdateMemoryConditions.c)
 *     IoAcquireRemoveLockEx @ 0x1400BF5C0 (IoAcquireRemoveLockEx.c)
 *     PopFxCompleteComponentActivation @ 0x1400BF8F4 (PopFxCompleteComponentActivation.c)
 *     ExTryQueueWorkItem @ 0x1400C0F70 (ExTryQueueWorkItem.c)
 *     WmipUnreferenceRegEntry @ 0x1400C2770 (WmipUnreferenceRegEntry.c)
 *     ExpWakePushLock @ 0x1400C6600 (ExpWakePushLock.c)
 *     CcDeleteSharedCacheMap @ 0x1400CABD4 (CcDeleteSharedCacheMap.c)
 *     MiProcessWorkingSets @ 0x1400CB4E0 (MiProcessWorkingSets.c)
 *     KiDetachProcess @ 0x1400CC300 (KiDetachProcess.c)
 *     KiDecrementProcessStackCount @ 0x1400CC9C0 (KiDecrementProcessStackCount.c)
 *     KiRequestProcessInSwap @ 0x1400CCB40 (KiRequestProcessInSwap.c)
 *     CcUnpinFileDataEx @ 0x1400CD700 (CcUnpinFileDataEx.c)
 *     PpmCheckRun @ 0x1400D24B0 (PpmCheckRun.c)
 *     PpmReleaseLock @ 0x1400D2574 (PpmReleaseLock.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     ExpWorkerThread @ 0x1400E55A0 (ExpWorkerThread.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 *     CcFlushCachePriv @ 0x1400E6CB0 (CcFlushCachePriv.c)
 *     EtwpSwitchBuffer @ 0x1400EB250 (EtwpSwitchBuffer.c)
 *     PfFileInfoNotify @ 0x1400EC950 (PfFileInfoNotify.c)
 *     PfpEventHandleFullBuffer @ 0x1400EE2A0 (PfpEventHandleFullBuffer.c)
 *     PfSnReferenceProcessTrace @ 0x1400EE760 (PfSnReferenceProcessTrace.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiPrivateFixup @ 0x140109170 (MiPrivateFixup.c)
 *     ExpUnblockPushLock @ 0x14010B740 (ExpUnblockPushLock.c)
 *     ExTryQueueWorkItemFromIo @ 0x14010DC50 (ExTryQueueWorkItemFromIo.c)
 *     MiTrimUnusedPageFileRegionsApc @ 0x14010F784 (MiTrimUnusedPageFileRegionsApc.c)
 *     MiIrpCompletionApcRoutine @ 0x14010F898 (MiIrpCompletionApcRoutine.c)
 *     PnpUnlockDeviceActionQueue @ 0x140110C5C (PnpUnlockDeviceActionQueue.c)
 *     CcDeleteBcbs @ 0x1401122D8 (CcDeleteBcbs.c)
 *     PopUnregisterPowerSettingCallback @ 0x1401123E4 (PopUnregisterPowerSettingCallback.c)
 *     MiFlushAllPages @ 0x1401136F8 (MiFlushAllPages.c)
 *     MiWakeModifiedPageWriter @ 0x1401137B8 (MiWakeModifiedPageWriter.c)
 *     ?SmFeEvictComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z @ 0x140117DCC (-SmFeEvictComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@PEAT_SM_PAGE_KEY@@KK@Z.c)
 *     ?SmStWorkItemQueue@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z @ 0x14011A894 (-SmStWorkItemQueue@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@PEAU_ST_WORK_ITEM_HDR@@K@Z.c)
 *     ?SmIoCtxWorkItemComplete@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@J@Z @ 0x14011B110 (-SmIoCtxWorkItemComplete@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAKPEAU_ST_WORK_ITEM_HDR@@PEAU1@PEAU-$SM.c)
 *     SmFpFree @ 0x14011B318 (SmFpFree.c)
 *     MiFinishResume @ 0x140120AE0 (MiFinishResume.c)
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 *     MiPfIssueCoalescedSupport @ 0x140125790 (MiPfIssueCoalescedSupport.c)
 *     MiPfCompleteCoalescedIo @ 0x140126130 (MiPfCompleteCoalescedIo.c)
 *     PopTimestampTargetProcessor @ 0x140127060 (PopTimestampTargetProcessor.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1401270D4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PfpScenCtxWaiterTimedOut @ 0x140127128 (PfpScenCtxWaiterTimedOut.c)
 *     PopBatteryWakeDpc @ 0x140127144 (PopBatteryWakeDpc.c)
 *     PopFxReleasePowerIrp @ 0x14012BFB8 (PopFxReleasePowerIrp.c)
 *     PopIrpWorker @ 0x14012C0E4 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14012C8E4 (PopPepUpdateConstraints.c)
 *     VfPoolDelayFreeIfPossible @ 0x14012F484 (VfPoolDelayFreeIfPossible.c)
 *     PopPepCompleteComponentIdleStateChangeActivity @ 0x140130CB8 (PopPepCompleteComponentIdleStateChangeActivity.c)
 *     MiQueueWorkingSetRequest @ 0x1401318CC (MiQueueWorkingSetRequest.c)
 *     EtwpLoggerDpc @ 0x1401319B8 (EtwpLoggerDpc.c)
 *     ExCompareExchangeCallBack @ 0x140136BF8 (ExCompareExchangeCallBack.c)
 *     MiZeroNodePages @ 0x14013ADA0 (MiZeroNodePages.c)
 *     MiUpdateAvailableEvents @ 0x14013CD68 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14013CE24 (MiSignalNonPagedPoolWatchers.c)
 *     KeBalanceSetManager @ 0x14013F4AC (KeBalanceSetManager.c)
 *     MiZeroLargePages @ 0x14013F840 (MiZeroLargePages.c)
 *     MiReassessZeroThreads @ 0x14013FA44 (MiReassessZeroThreads.c)
 *     MiModifiedPageWriter @ 0x140142A78 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x14014309C (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x14014398C (MiStoreEvictThread.c)
 *     PnpCompleteSystemStartProcess @ 0x1401457A8 (PnpCompleteSystemStartProcess.c)
 *     WheapAddErrorSource @ 0x1401477D8 (WheapAddErrorSource.c)
 *     CcCancelMmWaitForUninitializeCacheMap @ 0x1401B1274 (CcCancelMmWaitForUninitializeCacheMap.c)
 *     CcPostDeferredWrites @ 0x1401B19E8 (CcPostDeferredWrites.c)
 *     FsFilterFreeCompletionStack @ 0x1401B9C88 (FsFilterFreeCompletionStack.c)
 *     FsRtlStackOverflowRead @ 0x1401BA61C (FsRtlStackOverflowRead.c)
 *     IopFreeBackpocketIrp @ 0x1401C4C18 (IopFreeBackpocketIrp.c)
 *     IopFreeReserveIrp @ 0x1401C4C78 (IopFreeReserveIrp.c)
 *     PnpUnlockMountableDevice @ 0x1401CDCE8 (PnpUnlockMountableDevice.c)
 *     PnprQuiesce @ 0x1401D0400 (PnprQuiesce.c)
 *     PnpDiagnosticCompletionRoutine @ 0x1401D0F78 (PnpDiagnosticCompletionRoutine.c)
 *     KiReleaseSecondaryPassiveConnectLock @ 0x1401D5DB4 (KiReleaseSecondaryPassiveConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D87C0 (KiInvokeInterruptServiceRoutine.c)
 *     KiPassiveIsrWatchdog @ 0x1401D8A3C (KiPassiveIsrWatchdog.c)
 *     KiProcessDisconnectList @ 0x1401D8A70 (KiProcessDisconnectList.c)
 *     KiSignalWaitDisconnectLock @ 0x1401D8B38 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1401D8B64 (KiSynchronizePassiveInterruptExecution.c)
 *     KiBlockAndActivateUmsThread @ 0x1401DBF54 (KiBlockAndActivateUmsThread.c)
 *     MiProcessingPageExtendComplete @ 0x1401DEE34 (MiProcessingPageExtendComplete.c)
 *     MiQueueControlAreaDelete @ 0x1401DF114 (MiQueueControlAreaDelete.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401E045C (MiReAcquireOutSwappedProcessCommit.c)
 *     MiReleaseCommitForResetPages @ 0x1401E0760 (MiReleaseCommitForResetPages.c)
 *     MiZeroPageFile @ 0x1401E1730 (MiZeroPageFile.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MiMarkMdlComplete @ 0x1401E879C (MiMarkMdlComplete.c)
 *     MiObtainFreePages @ 0x1401E9934 (MiObtainFreePages.c)
 *     MiFlushComplete @ 0x1401EAB6C (MiFlushComplete.c)
 *     MiFreeOverlappedFlushEntry @ 0x1401EAC74 (MiFreeOverlappedFlushEntry.c)
 *     MiAttemptPageFileReductionApc @ 0x1401EDD3C (MiAttemptPageFileReductionApc.c)
 *     MiFinishPageFileExtension @ 0x1401EE474 (MiFinishPageFileExtension.c)
 *     MiFlushAllHintedStorePages @ 0x1401EE540 (MiFlushAllHintedStorePages.c)
 *     MiDeletePartitionResources @ 0x1401F11FC (MiDeletePartitionResources.c)
 *     MiPageNotZero @ 0x1401F2AB8 (MiPageNotZero.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401F4C7C (MmStoreFlushOutstandingEvictions.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401FE888 (NtSignalAndWaitForSingleObject.c)
 *     PopPropogateCoolingChange @ 0x140201B58 (PopPropogateCoolingChange.c)
 *     PopDeviceIdleCompletion @ 0x140201F24 (PopDeviceIdleCompletion.c)
 *     PopFxCompleteComponentPerfState @ 0x1402024D8 (PopFxCompleteComponentPerfState.c)
 *     PopUpdateWakeSourceWorker @ 0x140205844 (PopUpdateWakeSourceWorker.c)
 *     PopBatteryIrpComplete @ 0x140205B64 (PopBatteryIrpComplete.c)
 *     PopPepStartDeviceUnregisterActivity @ 0x140206E00 (PopPepStartDeviceUnregisterActivity.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14020B5AC (PopUpdateWatchdogNoWorkersEvent.c)
 *     ?SmpFlushStorePages@@YAXPEAX@Z @ 0x14021D410 (-SmpFlushStorePages@@YAXPEAX@Z.c)
 *     ?SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x140221C60 (-SmpDeviceIoCompletion@@YAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z @ 0x140221D20 (-SmpIoCompletionApc@@YAXPEAXPEAU_IO_STATUS_BLOCK@@K@Z.c)
 *     EtwSendTraceBuffer @ 0x140224F50 (EtwSendTraceBuffer.c)
 *     EtwpThreadRundownApc @ 0x140228E90 (EtwpThreadRundownApc.c)
 *     ExNotifyBootDeviceRemoval @ 0x14022CFA4 (ExNotifyBootDeviceRemoval.c)
 *     ExRegisterBootDevice @ 0x14022CFF0 (ExRegisterBootDevice.c)
 *     ExReleaseRundownProtectionEx @ 0x14022DAD4 (ExReleaseRundownProtectionEx.c)
 *     ExpQueueWorkItemNode @ 0x14022E8B8 (ExpQueueWorkItemNode.c)
 *     WheapProcessWorkQueueItem @ 0x140230700 (WheapProcessWorkQueueItem.c)
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
 *     CmpPostApc @ 0x1403E354C (CmpPostApc.c)
 *     CmpSignalDeferredPosts @ 0x1403E3810 (CmpSignalDeferredPosts.c)
 *     CmpPostNotify @ 0x1403E38F4 (CmpPostNotify.c)
 *     PfGetCompletedTrace @ 0x1403E80E4 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1403E8368 (PfTTraceListAdd.c)
 *     PfTReplaceCurrentBuffer @ 0x1403EA09C (PfTReplaceCurrentBuffer.c)
 *     PfSnEndTrace @ 0x1403EA594 (PfSnEndTrace.c)
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 *     IopAcquireFileObjectLock @ 0x1403EE090 (IopAcquireFileObjectLock.c)
 *     PiDrvDbLoadNodeWorkerCallback @ 0x1403F0C88 (PiDrvDbLoadNodeWorkerCallback.c)
 *     CmpWakeWriteQueueWaiters @ 0x1403F7ED0 (CmpWakeWriteQueueWaiters.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     MiPfExecuteReadList @ 0x14042B724 (MiPfExecuteReadList.c)
 *     CmpDeleteKeyObject @ 0x14043B2D0 (CmpDeleteKeyObject.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     NtSetEvent @ 0x1404468D0 (NtSetEvent.c)
 *     AlpcpCompleteDispatchMessage @ 0x14044A860 (AlpcpCompleteDispatchMessage.c)
 *     ExpWnfNotifyNameSubscribers @ 0x140461F84 (ExpWnfNotifyNameSubscribers.c)
 *     PspEvaluateAndNotifyEmptyJob @ 0x140468E34 (PspEvaluateAndNotifyEmptyJob.c)
 *     NtLockFile @ 0x140469D2C (NtLockFile.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140483F08 (PopFxUnregisterDeviceOrWait.c)
 *     PiUEventDereferenceEventEntry @ 0x1404898C4 (PiUEventDereferenceEventEntry.c)
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
 *     PnpCompleteDeviceEvent @ 0x14048D49C (PnpCompleteDeviceEvent.c)
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 *     EtwpRealtimeUpdateConsumers @ 0x140490ECC (EtwpRealtimeUpdateConsumers.c)
 *     EtwpQueueNotification @ 0x140491640 (EtwpQueueNotification.c)
 *     EtwpRealtimeInjectEtwBuffer @ 0x1404921F0 (EtwpRealtimeInjectEtwBuffer.c)
 *     EtwpSynchronizeWithLogger @ 0x140493540 (EtwpSynchronizeWithLogger.c)
 *     EtwpDisassociateConsumer @ 0x140493610 (EtwpDisassociateConsumer.c)
 *     EtwpShutdownConsumers @ 0x1404944FC (EtwpShutdownConsumers.c)
 *     EtwpRealtimeDisconnectAllConsumers @ 0x1404945AC (EtwpRealtimeDisconnectAllConsumers.c)
 *     EtwpStopLoggerInstance @ 0x1404945E0 (EtwpStopLoggerInstance.c)
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404A9848 (NtReadFileScatter.c)
 *     IopTrackLink @ 0x1404B0AB8 (IopTrackLink.c)
 *     IopCancelIrpsInCurrentThreadListApcRoutine @ 0x1404B22A8 (IopCancelIrpsInCurrentThreadListApcRoutine.c)
 *     ExpWnfNotifySubscription @ 0x1404B9474 (ExpWnfNotifySubscription.c)
 *     AlpcpTrackPortReferences @ 0x1404C0BB0 (AlpcpTrackPortReferences.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1404C4344 (RtlDecompressFragmentLZNT1.c)
 *     IopLoadUnloadDriver @ 0x1404C8FAC (IopLoadUnloadDriver.c)
 *     IoSetInformation @ 0x1404CA404 (IoSetInformation.c)
 *     CmpGetVolumeClusterSizeCompletion @ 0x1404CFC00 (CmpGetVolumeClusterSizeCompletion.c)
 *     NtNotifyChangeSession @ 0x1404D04B0 (NtNotifyChangeSession.c)
 *     PopUserPresentSetWorker @ 0x1404D2578 (PopUserPresentSetWorker.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1404D350C (PfSnTracingStateExWorkerRoutine.c)
 *     MiInSwapStoreWorker @ 0x1404D3998 (MiInSwapStoreWorker.c)
 *     RtlDecompressBufferLZNT1 @ 0x1404E9BE0 (RtlDecompressBufferLZNT1.c)
 *     IopQueryXxxInformation @ 0x1404ED0B8 (IopQueryXxxInformation.c)
 *     NtQueryVolumeInformationFile @ 0x1404F4F20 (NtQueryVolumeInformationFile.c)
 *     CmNotifyRunDown @ 0x1404F86A8 (CmNotifyRunDown.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     CmpSignalUnloadEventArrayForHive @ 0x140518034 (CmpSignalUnloadEventArrayForHive.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     PiUEventHandleVetoEvent @ 0x1405296AC (PiUEventHandleVetoEvent.c)
 *     PopReleaseTransitionLock @ 0x14052EF44 (PopReleaseTransitionLock.c)
 *     PfGenerateTrace @ 0x140530264 (PfGenerateTrace.c)
 *     PopCompleteAction @ 0x140530C60 (PopCompleteAction.c)
 *     MiDereferenceSessionFinal @ 0x140532010 (MiDereferenceSessionFinal.c)
 *     PopFinalizeWakeInfo @ 0x140533570 (PopFinalizeWakeInfo.c)
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipQueueNotification @ 0x1405385DC (WmipQueueNotification.c)
 *     IopDestroyActiveConnectBlock @ 0x14053A4D8 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14053A684 (IopAcquireReleaseConnectLockInternal.c)
 *     MmSetSessionObjectIoEvent @ 0x140547384 (MmSetSessionObjectIoEvent.c)
 *     RtlRunOnceComplete @ 0x14054D318 (RtlRunOnceComplete.c)
 *     WmipReleaseCollectionEnabled @ 0x14054D464 (WmipReleaseCollectionEnabled.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     ArbArbiterHandler @ 0x14055857C (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x140558F8C (ArbBuildAssignmentOrdering.c)
 *     PfTLoggingWorker @ 0x14055B69C (PfTLoggingWorker.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     MUIRegistrySystemRoutine @ 0x1405615E0 (MUIRegistrySystemRoutine.c)
 *     MmStoreRegister @ 0x140568500 (MmStoreRegister.c)
 *     MiInsertPageFileInList @ 0x1405690A4 (MiInsertPageFileInList.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14056C598 (PopNotifyPolicyDevice.c)
 *     PopThermalWorker @ 0x140574480 (PopThermalWorker.c)
 *     CmpWaitForHiveMount @ 0x14057581C (CmpWaitForHiveMount.c)
 *     ExAllocatePrivateWorkerPool @ 0x140575A48 (ExAllocatePrivateWorkerPool.c)
 *     CmpInitializeSystemHivesLoad @ 0x140577634 (CmpInitializeSystemHivesLoad.c)
 *     DbgkRegisterErrorPort @ 0x14057BE30 (DbgkRegisterErrorPort.c)
 *     WheapEtwEnableCallback @ 0x14057F8D0 (WheapEtwEnableCallback.c)
 *     CmThawRegistry @ 0x140602E94 (CmThawRegistry.c)
 *     CmpPostApcRunDown @ 0x140606B60 (CmpPostApcRunDown.c)
 *     DbgkpCloseObject @ 0x14061822C (DbgkpCloseObject.c)
 *     DbgkpQueueMessage @ 0x140619050 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140619330 (DbgkpSetProcessDebugObject.c)
 *     DbgkpWakeTarget @ 0x140619650 (DbgkpWakeTarget.c)
 *     NtDebugContinue @ 0x140619A4C (NtDebugContinue.c)
 *     DbgkpLkmdSnapThreadApc @ 0x14061B6EC (DbgkpLkmdSnapThreadApc.c)
 *     FsRtlpOplockWaitCompleteRoutine @ 0x14061E9B8 (FsRtlpOplockWaitCompleteRoutine.c)
 *     IopAllocateIrpCleanup @ 0x140620E74 (IopAllocateIrpCleanup.c)
 *     IopConnectLinkTrackingPort @ 0x140621348 (IopConnectLinkTrackingPort.c)
 *     IopExceptionCleanup @ 0x140621488 (IopExceptionCleanup.c)
 *     IopInvalidateVolumesForDevice @ 0x140621B70 (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x1406225A0 (IopSendMessageToTrackService.c)
 *     IoVerifyVolume @ 0x140623DA4 (IoVerifyVolume.c)
 *     PnpShutdownDevices @ 0x140629AD4 (PnpShutdownDevices.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14062D0A8 (IopAcquireReleaseDispatcherLock.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 *     IopWarmEjectDevice @ 0x14064C6D0 (IopWarmEjectDevice.c)
 *     KeUpdateUmsThreadState @ 0x140650830 (KeUpdateUmsThreadState.c)
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 *     PfpParametersWatcher @ 0x140669FB8 (PfpParametersWatcher.c)
 *     PopFxUnregisterDevice @ 0x14066D670 (PopFxUnregisterDevice.c)
 *     PopBatteryReadTag @ 0x14066F384 (PopBatteryReadTag.c)
 *     PopFanWorker @ 0x14067324C (PopFanWorker.c)
 *     TtmiCloseEventQueue @ 0x140679EFC (TtmiCloseEventQueue.c)
 *     TtmiWriteEventToSingleQueue @ 0x14067A210 (TtmiWriteEventToSingleQueue.c)
 *     PspDeferredWorkerRoutine @ 0x14067E840 (PspDeferredWorkerRoutine.c)
 *     PspDeleteServerSiloGlobals @ 0x14067E868 (PspDeleteServerSiloGlobals.c)
 *     SmcCacheAdd @ 0x140699DE4 (SmcCacheAdd.c)
 *     SmcCacheDelete @ 0x140699F98 (SmcCacheDelete.c)
 *     CMFSystemThreadRoutine @ 0x1406B96D8 (CMFSystemThreadRoutine.c)
 *     WheapAttemptPhysicalPageOfflineWorker @ 0x1406BAA94 (WheapAttemptPhysicalPageOfflineWorker.c)
 *     SbpVmbusNotificationHandler @ 0x1406E5728 (SbpVmbusNotificationHandler.c)
 *     KdpTimeSlipWork @ 0x1406F3064 (KdpTimeSlipWork.c)
 *     ViIrpSynchronousCompletionRoutine @ 0x14070C2FC (ViIrpSynchronousCompletionRoutine.c)
 *     ViPendingQueuePassiveLevelCompletion @ 0x14070D54C (ViPendingQueuePassiveLevelCompletion.c)
 *     ViFilterRemoveNotificationCompletion @ 0x14071B154 (ViFilterRemoveNotificationCompletion.c)
 *     AnFwpFadeAnimationTimer @ 0x140726E84 (AnFwpFadeAnimationTimer.c)
 *     sub_140778D9C @ 0x140778D9C (sub_140778D9C.c)
 *     MiInitializePagedPoolEvents @ 0x1407A51FC (MiInitializePagedPoolEvents.c)
 * Callees:
 *     KiExitDispatcher @ 0x140056280 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x140057920 (KiTryUnwaitThread.c)
 *     KiAcquireKobjectLockSafe @ 0x1400EC640 (KiAcquireKobjectLockSafe.c)
 *     KiWakeQueueWaiter @ 0x1400EC680 (KiWakeQueueWaiter.c)
 *     KiWakeOtherQueueWaiters @ 0x1400F7B48 (KiWakeOtherQueueWaiters.c)
 *     KeIsThreadRunning @ 0x1401D2AA4 (KeIsThreadRunning.c)
 *     EtwTraceEnqueueWork @ 0x140225A4C (EtwTraceEnqueueWork.c)
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
