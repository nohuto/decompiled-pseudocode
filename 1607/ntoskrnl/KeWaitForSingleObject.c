/*
 * XREFs of KeWaitForSingleObject @ 0x14005C400
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140002DC4 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140002FD0 (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x140003B38 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x140003D38 (SmKmStoreHelperCleanup.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140004F84 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     IopWaitForLockAlertable @ 0x1400078E4 (IopWaitForLockAlertable.c)
 *     PopFxActivateDevice @ 0x140007BFC (PopFxActivateDevice.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140007F38 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PpmAcquireLock @ 0x14000A0A8 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     CcCanIWrite @ 0x140020570 (CcCanIWrite.c)
 *     CcWaitForUninitializeCacheMap @ 0x140021E00 (CcWaitForUninitializeCacheMap.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     AlpcpSignalAndWait @ 0x14005DBA0 (AlpcpSignalAndWait.c)
 *     MiZeroPageWrite @ 0x14006AE64 (MiZeroPageWrite.c)
 *     CcWriteBehind @ 0x14007119C (CcWriteBehind.c)
 *     ExfWaitForRundownProtectionRelease @ 0x140074DD0 (ExfWaitForRundownProtectionRelease.c)
 *     NtSetInformationFile @ 0x1400793E0 (NtSetInformationFile.c)
 *     IopCompleteUnloadOrDelete @ 0x14007F22C (IopCompleteUnloadOrDelete.c)
 *     CmpFileReadEx @ 0x140082A00 (CmpFileReadEx.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400876D8 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     WmipBuildTraceDeviceList @ 0x14009CAC4 (WmipBuildTraceDeviceList.c)
 *     ExTimedWaitForUnblockPushLock @ 0x14009DD08 (ExTimedWaitForUnblockPushLock.c)
 *     AlpcpWaitForSingleObject @ 0x14009F8C8 (AlpcpWaitForSingleObject.c)
 *     MiIssueSynchronousFlush @ 0x1400A00C0 (MiIssueSynchronousFlush.c)
 *     VslpEnterIumSecureMode @ 0x1400A86F4 (VslpEnterIumSecureMode.c)
 *     IoSynchronousCallDriver @ 0x1400AAB98 (IoSynchronousCallDriver.c)
 *     WmipReceiveNotifications @ 0x1400AD93C (WmipReceiveNotifications.c)
 *     FsRtlpWaitOnIrp @ 0x1400B215C (FsRtlpWaitOnIrp.c)
 *     PoFxActivateComponent @ 0x1400BEF70 (PoFxActivateComponent.c)
 *     WmipFindRegEntryByProviderId @ 0x1400C26D8 (WmipFindRegEntryByProviderId.c)
 *     CcSetValidData @ 0x1400C3EC4 (CcSetValidData.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400C508C (FsRtlpWaitForIoAtEof.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     IopWaitForSynchronousIo @ 0x1400C8360 (IopWaitForSynchronousIo.c)
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     PpmCheckPeriodicStart @ 0x1400D5130 (PpmCheckPeriodicStart.c)
 *     MiRetryNonPagedAllocation @ 0x1400E5D38 (MiRetryNonPagedAllocation.c)
 *     CcInitializeCacheMapEx @ 0x1400E62E0 (CcInitializeCacheMapEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400EF0F0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400F8308 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400F8A28 (LdrpGetFromMUIMemCache.c)
 *     ExpUnblockPushLock @ 0x14010B740 (ExpUnblockPushLock.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14010DBB0 (MiQueueSyncModifiedWriterApc.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14010F574 (CcWaitForCurrentLazyWriterActivity.c)
 *     PnpLockDeviceActionQueue @ 0x140110CE8 (PnpLockDeviceActionQueue.c)
 *     PpmTryAcquireLock @ 0x140111994 (PpmTryAcquireLock.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x1401120C8 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14011A480 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14011F350 (SmKmStoreHelperWaitForCommand.c)
 *     PopHaltDeviceIdle @ 0x140123A38 (PopHaltDeviceIdle.c)
 *     PopRunMaximumIrpWorkers @ 0x14012520C (PopRunMaximumIrpWorkers.c)
 *     WmipDeregisterRegEntry @ 0x1401255D0 (WmipDeregisterRegEntry.c)
 *     PopTimeoutWakeTracking @ 0x140125C00 (PopTimeoutWakeTracking.c)
 *     MiPfCompleteCoalescedIo @ 0x140126130 (MiPfCompleteCoalescedIo.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x1401270D4 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x1401271AC (PopIgnoreBatteryStatusChange.c)
 *     PopIrpWorker @ 0x14012C0E4 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14012C8E4 (PopPepUpdateConstraints.c)
 *     WmipFindRegEntryByDevice @ 0x14012E36C (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x14012E408 (WmipAllocRegEntry.c)
 *     WmiQueryTraceProviderCount @ 0x140130638 (WmiQueryTraceProviderCount.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x140130F1C (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140131114 (LdrUnloadAlternateResourceModuleEx.c)
 *     MiQueueWorkingSetRequest @ 0x1401318CC (MiQueueWorkingSetRequest.c)
 *     ExUnregisterCallback @ 0x140131CC8 (ExUnregisterCallback.c)
 *     KeSwapProcessOrStack @ 0x14013D844 (KeSwapProcessOrStack.c)
 *     CcAsyncReadWorker @ 0x14013DE8C (CcAsyncReadWorker.c)
 *     MiOkToZeroNextLargePage @ 0x14013F988 (MiOkToZeroNextLargePage.c)
 *     PopFxActivateComponent @ 0x1401426E4 (PopFxActivateComponent.c)
 *     MiModifiedPageWriter @ 0x140142A78 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14014398C (MiStoreEvictThread.c)
 *     CmpLazyWriteWorker @ 0x140143B04 (CmpLazyWriteWorker.c)
 *     WheapAddErrorSource @ 0x1401477D8 (WheapAddErrorSource.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014978C (LdrpSetAlternateResourceModuleHandle.c)
 *     PnpSerializeBoot @ 0x14014C114 (PnpSerializeBoot.c)
 *     PopIrpWorkerControl @ 0x14014CD2C (PopIrpWorkerControl.c)
 *     FsFilterAllocateCompletionStack @ 0x1401B9BB0 (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1401BA684 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x1401C4320 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401C4600 (IopAllocateReserveIrp.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401CCC38 (IoReleaseRemoveLockAndWaitEx.c)
 *     PnpLockMountableDevice @ 0x1401CDBB8 (PnpLockMountableDevice.c)
 *     PnpProcessRebalance @ 0x1401CE42C (PnpProcessRebalance.c)
 *     PnprQuiesce @ 0x1401D0400 (PnprQuiesce.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1401D5868 (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D87C0 (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x1401D8B38 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1401D8B64 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x1401DC090 (KiParkUmsThread.c)
 *     MiProcessDeleteOnClose @ 0x1401DECE4 (MiProcessDeleteOnClose.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFC0C (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x1401E0E70 (MmReleaseCommitForMemResetPages.c)
 *     MiIssuePageExtendRequest @ 0x1401EE7B4 (MiIssuePageExtendRequest.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401F4C7C (MmStoreFlushOutstandingEvictions.c)
 *     MiContractWsSwapPageFileWorker @ 0x1401F75E8 (MiContractWsSwapPageFileWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401FE888 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140202BE8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopWdiTimerWorkerThread @ 0x14020A084 (PopWdiTimerWorkerThread.c)
 *     PopSetWatchdog @ 0x14020B2F8 (PopSetWatchdog.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14021C828 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmpFpWaitForResource @ 0x140221338 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140221A74 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x140222250 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140228EC4 (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x14022CFF0 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x14022D1F0 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x140230700 (WheapProcessWorkQueueItem.c)
 *     sub_140231EA8 @ 0x140231EA8 (sub_140231EA8.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14023CC48 (CancelTimerCallbacksAndDeleteTimer.c)
 *     PopTransitionToSleep @ 0x1403C9804 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x1403C9918 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x1403CA628 (PopEndMirroring.c)
 *     PopWakeDeviceList @ 0x1403CF194 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403CF2F0 (PopSleepDeviceList.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PfpScenCtxPrefetchWait @ 0x1403D02EC (PfpScenCtxPrefetchWait.c)
 *     PopCaptureTimeOnProcZero @ 0x1403D058C (PopCaptureTimeOnProcZero.c)
 *     PopFlushVolumes @ 0x1403D0D4C (PopFlushVolumes.c)
 *     PopBuildDeviceNotifyList @ 0x1403D1784 (PopBuildDeviceNotifyList.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403DA1F0 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1403DBA90 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1403DCD24 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1403DEA58 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 *     PnpStartDeviceNode @ 0x1403EFF98 (PnpStartDeviceNode.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F3760 (PiControlGetSetDeviceStatus.c)
 *     CmpOpenHiveFile @ 0x1403F82C0 (CmpOpenHiveFile.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     CmLoadAppKey @ 0x1403FAFD0 (CmLoadAppKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     EtwpDisableTraceProviders @ 0x14040A3AC (EtwpDisableTraceProviders.c)
 *     FsRtlGetFileSize @ 0x14042B324 (FsRtlGetFileSize.c)
 *     CmpParseKey @ 0x14043ADD0 (CmpParseKey.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140442010 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x140444680 (IopSynchronousServiceTail.c)
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 *     NtWaitForSingleObject @ 0x1404469A0 (NtWaitForSingleObject.c)
 *     PspUserThreadStartup @ 0x140457F30 (PspUserThreadStartup.c)
 *     MmCleanProcessAddressSpace @ 0x14045DCCC (MmCleanProcessAddressSpace.c)
 *     WmipOpenBlock @ 0x1404733AC (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1404735A0 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x140473680 (WmipPrepareForWnodeAD.c)
 *     WmipEnableCollectOrEvent @ 0x140473E70 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x140473F5C (WmipIsQuerySetGuid.c)
 *     CmpGetVolumeClusterSize @ 0x140480CE4 (CmpGetVolumeClusterSize.c)
 *     MmAcquireLoadLock @ 0x140482180 (MmAcquireLoadLock.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140483F08 (PopFxUnregisterDeviceOrWait.c)
 *     IopUncacheInterfaceInformation @ 0x140484758 (IopUncacheInterfaceInformation.c)
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
 *     EtwpStartLogger @ 0x14048F924 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x140490580 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140490B4C (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpSynchronizeWithLogger @ 0x140493540 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 *     EtwpFreeSystemLoggerIndex @ 0x140495AAC (EtwpFreeSystemLoggerIndex.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404967A0 (EtwpUpdateKernelGroupMasks.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x140499178 (FsRtlCancellableWaitForMultipleObjects.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404AC964 (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopSynchronousApiServiceTail @ 0x1404AF418 (IopSynchronousApiServiceTail.c)
 *     IopGetSetObjectId @ 0x1404B13DC (IopGetSetObjectId.c)
 *     WmipDeleteMethod @ 0x1404B1DAC (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x1404B1E9C (WmipDisableCollectOrEvent.c)
 *     IopCancelIrpsInThreadList @ 0x1404B22E8 (IopCancelIrpsInThreadList.c)
 *     FsRtlQueryKernelEaFile @ 0x1404B33F8 (FsRtlQueryKernelEaFile.c)
 *     NtGetMUIRegistryInfo @ 0x1404B3868 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404B3BEC (NtMapCMFModule.c)
 *     FsRtlKernelFsControlFile @ 0x1404B5000 (FsRtlKernelFsControlFile.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1404C4344 (RtlDecompressFragmentLZNT1.c)
 *     FsRtlQueryCachedVdl @ 0x1404C5AF0 (FsRtlQueryCachedVdl.c)
 *     NtReleaseKeyedEvent @ 0x1404C86E4 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1404C8890 (NtWaitForKeyedEvent.c)
 *     NtLoadDriver @ 0x1404C8DFC (NtLoadDriver.c)
 *     WmipEnumerateMofResources @ 0x1404C9900 (WmipEnumerateMofResources.c)
 *     IoSetInformation @ 0x1404CA404 (IoSetInformation.c)
 *     FsRtlSetKernelEaFile @ 0x1404CB0F8 (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1404CF4EC (FsRtlSetFileSize.c)
 *     AlpcpWaitForPortReferences @ 0x1404CF5F4 (AlpcpWaitForPortReferences.c)
 *     NtNotifyChangeSession @ 0x1404D04B0 (NtNotifyChangeSession.c)
 *     EtwpStartTrace @ 0x1404D0FB8 (EtwpStartTrace.c)
 *     IopCancelAlertedRequest @ 0x1404D2CCC (IopCancelAlertedRequest.c)
 *     MiInSwapStore @ 0x1404D38C4 (MiInSwapStore.c)
 *     PiDrvDbLoadNode @ 0x1404DD294 (PiDrvDbLoadNode.c)
 *     WmipUnreferenceEntry @ 0x1404E8014 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1404E80DC (WmipForwardWmiIrp.c)
 *     IopSynchronousCall @ 0x1404E8B2C (IopSynchronousCall.c)
 *     CmpFileFlushAndPurge @ 0x1404E99BC (CmpFileFlushAndPurge.c)
 *     RtlDecompressBufferLZNT1 @ 0x1404E9BE0 (RtlDecompressBufferLZNT1.c)
 *     IoVolumeDeviceToDosName @ 0x1404EB0DC (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x1404ECF60 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x1404ED0B8 (IopQueryXxxInformation.c)
 *     PspExitThread @ 0x1404F950C (PspExitThread.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x140500D54 (ExpHwidSendSynchronousIrpToDevice.c)
 *     NtPowerInformation @ 0x14050189C (NtPowerInformation.c)
 *     IopGetSetSecurityObject @ 0x1405044D0 (IopGetSetSecurityObject.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 *     PnpAllocateResources @ 0x14050B1A0 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x14050D21C (IopFilterResourceRequirementsCall.c)
 *     PnpQueryInterface @ 0x14050E494 (PnpQueryInterface.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     IoReportTargetDeviceChange @ 0x140529E58 (IoReportTargetDeviceChange.c)
 *     WmipPrepareWnodeSI @ 0x14052B370 (WmipPrepareWnodeSI.c)
 *     FsRtlIssueDeviceIoControl @ 0x14052D0B8 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x14052D58C (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D6D4 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052DA3C (EtwpUpdateDisallowedGuids.c)
 *     PoUnregisterPowerSettingCallback @ 0x14052E388 (PoUnregisterPowerSettingCallback.c)
 *     FsRtlBalanceReads @ 0x14052E4F0 (FsRtlBalanceReads.c)
 *     ExSwapinWorkerThreads @ 0x14052F230 (ExSwapinWorkerThreads.c)
 *     PopResizeHiberFile @ 0x14052F3EC (PopResizeHiberFile.c)
 *     EmPowerPagingEnabled @ 0x140530930 (EmPowerPagingEnabled.c)
 *     NtInitiatePowerAction @ 0x140531044 (NtInitiatePowerAction.c)
 *     PopInitSystemSleeperThread @ 0x140531EE0 (PopInitSystemSleeperThread.c)
 *     WmipDSCleanup @ 0x140532730 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532884 (WmipDisableCollectionForRemovedGuid.c)
 *     IoDisconnectInterrupt @ 0x140532A34 (IoDisconnectInterrupt.c)
 *     WmipDeregisterDevice @ 0x140533294 (WmipDeregisterDevice.c)
 *     PopGetWakeSource @ 0x1405333F8 (PopGetWakeSource.c)
 *     ObWaitForSingleObject @ 0x1405348D4 (ObWaitForSingleObject.c)
 *     PopAcquireTransitionLock @ 0x140534EB8 (PopAcquireTransitionLock.c)
 *     WmipAddDataSource @ 0x1405375B4 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140537BD0 (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x140537E28 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140538080 (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x1405384EC (WmipFindISinGEbyName.c)
 *     IopDestroyActiveConnectBlock @ 0x14053A4D8 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14053A684 (IopAcquireReleaseConnectLockInternal.c)
 *     IoWMIRegistrationControl @ 0x14053A994 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14053AA68 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14053ABD0 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14053ACA0 (WmipUpdateDeviceStackSize.c)
 *     WmipRegistrationWorker @ 0x1405435C8 (WmipRegistrationWorker.c)
 *     PopBatteryWorker @ 0x1405440D0 (PopBatteryWorker.c)
 *     IopUnloadDriver @ 0x140545368 (IopUnloadDriver.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140546AF0 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140547288 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x140547F0C (PopSanityCheckHiberFile.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140548410 (PnpSynchronizeDeviceEventQueue.c)
 *     PopClearHiberFileSignature @ 0x140548A34 (PopClearHiberFileSignature.c)
 *     WmipSendEnableDisableRequest @ 0x140549D74 (WmipSendEnableDisableRequest.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14054B3D8 (EtwpCrimsonProvEnableCallback.c)
 *     SmStoreCompressionStop @ 0x14054C23C (SmStoreCompressionStop.c)
 *     CmpLoadHiveThread @ 0x14054D948 (CmpLoadHiveThread.c)
 *     IopCreateArcName @ 0x1405501C4 (IopCreateArcName.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140550BC8 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140550BEC (PnpWaitForEmptyDeviceActionQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140550C10 (IoRegisterFsRegistrationChangeMountAware.c)
 *     WmipAddMofResource @ 0x140551180 (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1405513B8 (WmipFindMRByNames.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140556678 (IopAllocateBootResources.c)
 *     ArbArbiterHandler @ 0x14055857C (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x140558F8C (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D650 (CmpFinishSystemHivesLoad.c)
 *     MiZeroPageFileFirstPage @ 0x1405695D0 (MiZeroPageFileFirstPage.c)
 *     SepRmCommandServerThread @ 0x14056BA4C (SepRmCommandServerThread.c)
 *     PoInitHiberServices @ 0x14056C3E8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14056C598 (PopNotifyPolicyDevice.c)
 *     PopCreateHiberFile @ 0x14056D474 (PopCreateHiberFile.c)
 *     ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x1405752C4 (-Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z.c)
 *     WmipLegacyEtwWorker @ 0x140575384 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405754B0 (WmipProcessLegacyEtwRegister.c)
 *     WmipLegacyEtwCallback @ 0x140576238 (WmipLegacyEtwCallback.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140578274 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x140578790 (FsRtlpRegisterUncProvider.c)
 *     WmipSetTraceNotify @ 0x14057A6A4 (WmipSetTraceNotify.c)
 *     IoWMISetNotificationCallback @ 0x14057D350 (IoWMISetNotificationCallback.c)
 *     PiPagePathSetState @ 0x14057D7D0 (PiPagePathSetState.c)
 *     WheapEtwEnableCallback @ 0x14057F8D0 (WheapEtwEnableCallback.c)
 *     FsRtlWaitForSmssEvent @ 0x140581A90 (FsRtlWaitForSmssEvent.c)
 *     CmpWaitOnHiveWriteQueue @ 0x140603194 (CmpWaitOnHiveWriteQueue.c)
 *     CmpTouchFile @ 0x140604498 (CmpTouchFile.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140617ADC (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x140619050 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140619EE8 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x14061A5D8 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14061B484 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14061DB44 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14061E4A0 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14061EAFC (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x140621760 (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x140621894 (IopHardErrorThread.c)
 *     IopInvalidateVolumesForDevice @ 0x140621B70 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x140621FF8 (IopLoadFileSystemDriver.c)
 *     IopSendMessageToTrackService @ 0x1406225A0 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140623158 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x1406233F0 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140623DA4 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140628D34 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x140629438 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x140629AD4 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x140629F3C (IoReplacePartitionUnit.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x14062A35C (IoSynchronousInvalidateDeviceRelations.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14062BE58 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14062D0A8 (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x140642388 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1406431B8 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x14064A1AC (PiIrpQueryRemoveDevice.c)
 *     PiQueueDeviceRequest @ 0x14064B3D8 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B4B0 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpReallocateResources @ 0x14064BD60 (PnpReallocateResources.c)
 *     IopWarmEjectDevice @ 0x14064C6D0 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x14064E648 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 *     PopCoolingExtensionPnpNotification @ 0x14066BA0C (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14066BB64 (PopDeactiveThermalRequest.c)
 *     PopFxUnregisterDevice @ 0x14066D670 (PopFxUnregisterDevice.c)
 *     PopSetSystemAwayMode @ 0x14066EB8C (PopSetSystemAwayMode.c)
 *     PopBatteryRemove @ 0x14066F404 (PopBatteryRemove.c)
 *     PopPepUnregisterDevice @ 0x14066F9A4 (PopPepUnregisterDevice.c)
 *     PopThermalZoneRemove @ 0x140670634 (PopThermalZoneRemove.c)
 *     PopDiagNextCsSleepStudySession @ 0x1406708E8 (PopDiagNextCsSleepStudySession.c)
 *     PopFanRemove @ 0x14067310C (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x14067EAB8 (PspQueueDeferredWorkAndWait.c)
 *     PsWaitForAllProcesses @ 0x14067FC00 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14067FEE0 (PspWaitForUsermodeExit.c)
 *     RawPerformDevIoCtrl @ 0x140683034 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140683168 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x140683588 (RawQueryFileSystemInformation.c)
 *     RtlpRunOnceWaitForInit @ 0x14068C1D4 (RtlpRunOnceWaitForInit.c)
 *     SmProcessResizeRequest @ 0x140696C5C (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x140696D50 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x14069722C (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x1406981EC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x140698A60 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x140698B10 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x140698BCC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1406992C0 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x140699358 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1406999B0 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x14069C98C (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x14069D774 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14069DEEC (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x14069E10C (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x14069E290 (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x14069E848 (WmipQueryGuidInfo.c)
 *     WmipUpdateDataSource @ 0x14069F4A4 (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x14069FA08 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x14069FE60 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x14069FFEC (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1406A2BB0 (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3A4C (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406A56B0 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406A5700 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1406A8034 (EtwpSampledProfileRunDown.c)
 *     EtwpKsrCallback @ 0x1406A9EBC (EtwpKsrCallback.c)
 *     NtStartProfile @ 0x1406B8374 (NtStartProfile.c)
 *     NtStopProfile @ 0x1406B85CC (NtStopProfile.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1406BA650 (WheaAttemptPhysicalPageOffline.c)
 *     VhdiVerifyBootDisk @ 0x1406E55F4 (VhdiVerifyBootDisk.c)
 *     VfDriverLock @ 0x1406FE42C (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x14070175C (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF30 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x14070D2B4 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x14070D5F8 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140710B60 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViFilterDispatchPnp @ 0x14071ADC8 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x140726D9C (AnFwFadeCompletion.c)
 *     IopCreateArcNamesCd @ 0x140798420 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x140798A1C (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1407D2DF0 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x1407D36AC (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407D3884 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x1407D3C00 (SbpWaitForVmbus.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14005A850 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x14005D750 (KiDeliverApc.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D12F0 (KiProcessDeferredReadyList.c)
 *     KiFastExitThreadWait @ 0x1400F0678 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1400F07B0 (KiCheckForThreadDispatch.c)
 *     RtlRaiseStatus @ 0x1400F4588 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 */

// local variable allocation has failed, the output may be wrong!
NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rbx
  KPROCESSOR_MODE v7; // r12
  unsigned __int8 CurrentIrql; // al
  PLARGE_INTEGER v9; // r9
  unsigned __int8 WaitIrql; // si
  __int64 *v11; // rdx
  __int64 v12; // r8
  NTSTATUS v13; // esi
  unsigned int v14; // ebp
  struct _KPRCB *v15; // r15
  unsigned __int8 v16; // di
  _KWAIT_STATUS_REGISTER v17; // al
  NTSTATUS result; // eax
  int v19; // eax
  int v20; // eax
  volatile unsigned __int8 DpcRoutineActive; // cl
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v23; // rcx
  volatile __int64 WaitStatus; // rdi
  _KWAIT_STATUS_REGISTER v25; // al
  unsigned __int64 v26; // rcx
  PVOID *v27; // rcx
  unsigned __int8 v28; // al
  unsigned __int8 *v29; // rcx
  struct _KPRCB *CurrentPrcb; // rcx
  signed __int32 v31[8]; // [rsp+0h] [rbp-A8h] BYREF
  int v32; // [rsp+20h] [rbp-88h] BYREF
  int v33; // [rsp+24h] [rbp-84h] BYREF
  int v34; // [rsp+28h] [rbp-80h] BYREF
  int v35; // [rsp+2Ch] [rbp-7Ch] BYREF
  int v36; // [rsp+30h] [rbp-78h] BYREF
  __int64 v37; // [rsp+38h] [rbp-70h] BYREF
  __int64 v38; // [rsp+40h] [rbp-68h] BYREF
  int v39; // [rsp+48h] [rbp-60h]
  unsigned __int8 v41; // [rsp+B8h] [rbp+10h]
  unsigned __int8 v42; // [rsp+C0h] [rbp+18h]
  unsigned int v43; // [rsp+C8h] [rbp+20h]

  v41 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v7 = WaitMode;
  v42 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v42 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v9 = (PLARGE_INTEGER)0xFFFFF780000003B0LL;
  if ( Timeout )
  {
    if ( Timeout->HighPart < 0 )
    {
      v43 = 2;
      Timeout = (PLARGE_INTEGER)(MEMORY[0xFFFFF78000000008]
                               - MEMORY[0xFFFFF780000003B0]
                               - (Timeout->QuadPart
                                + CurrentThread->RelativeTimerBias));
    }
    else
    {
      Timeout = (PLARGE_INTEGER)Timeout->QuadPart;
      v43 = 1;
    }
  }
  else
  {
    v43 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = v7;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v32 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v32);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || WaitIrql || CurrentThread->SpecialApcDisable )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    if ( Alertable )
    {
      v29 = &CurrentThread->Alerted[v7];
      if ( *v29 )
      {
        *v29 = 0;
        LODWORD(WaitStatus) = 257;
        goto LABEL_68;
      }
      if ( v7 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPending = 1;
LABEL_67:
        LODWORD(WaitStatus) = 192;
LABEL_68:
        CurrentThread->ThreadLock = 0LL;
        CurrentPrcb = KeGetCurrentPrcb();
LABEL_69:
        KiCheckForThreadDispatch(CurrentPrcb, WaitIrql, WaitMode, v9);
        return WaitStatus;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        LODWORD(WaitStatus) = 257;
        goto LABEL_68;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPending & (unsigned __int8)v7) != 0 )
    {
      goto LABEL_67;
    }
    v11 = (__int64 *)&CurrentThread->320;
    CurrentThread->WaitBlockFill6[68] = 5;
    v12 = 0LL;
    CurrentThread->WaitReason = v41;
    v13 = 0;
    CurrentThread->ThreadLock = 0LL;
    v14 = 0;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    v15 = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v14);
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
      v11 = (__int64 *)&CurrentThread->320;
      v12 = 0LL;
    }
    if ( (*(_BYTE *)Object & 0x7F) == 2 )
      break;
    if ( *((int *)Object + 1) > 0 )
    {
      if ( (*(_BYTE *)Object & 7) == 1 )
      {
        *((_DWORD *)Object + 1) = 0;
      }
      else if ( (*(_BYTE *)Object & 0x7F) == 5 )
      {
        --*((_DWORD *)Object + 1);
      }
      goto LABEL_23;
    }
LABEL_16:
    v9 = Timeout;
    if ( v43 == 2 )
    {
      v26 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( !v43 )
        goto LABEL_48;
      if ( !Timeout )
        goto LABEL_19;
      v26 = MEMORY[0xFFFFF78000000014];
    }
    if ( v26 > (unsigned __int64)Timeout )
    {
LABEL_19:
      _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
      v13 = 258;
      v12 = 0LL;
      goto LABEL_24;
    }
LABEL_48:
    v27 = (PVOID *)*((_QWORD *)Object + 2);
    if ( *v27 != (char *)Object + 8 )
      __fastfail(3u);
    *v11 = (__int64)Object + 8;
    v11[1] = (__int64)v27;
    *v27 = v11;
    *((_QWORD *)Object + 2) = v11;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait((__int64)CurrentThread, v11, v43, (__int64)Timeout);
    if ( result != 256 )
      return result;
    v42 = 0;
    v28 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v28;
  }
  if ( *((int *)Object + 1) <= 0
    && (CurrentThread != *((struct _KTHREAD **)Object + 5) || *((_BYTE *)Object + 2) != v15->DpcRoutineActive) )
  {
    goto LABEL_16;
  }
  v19 = *((_DWORD *)Object + 1);
  if ( v19 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    KiFastExitThreadWait(v15, CurrentThread, v42, v9);
    RtlRaiseStatus(-1073741423);
  }
  v20 = v19 - 1;
  *((_DWORD *)Object + 1) = v20;
  if ( !v20 )
  {
    CurrentThread->WaitStatus = 0LL;
    v33 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v33);
      while ( CurrentThread->ThreadLock );
    }
    CurrentThread->KernelApcDisable -= *((unsigned __int8 *)Object + 49);
    if ( v15->CurrentThread == CurrentThread )
      DpcRoutineActive = v15->DpcRoutineActive;
    else
      DpcRoutineActive = 0;
    v39 = *(_DWORD *)Object;
    BYTE2(v39) = DpcRoutineActive;
    *(_DWORD *)Object = v39;
    *((_QWORD *)Object + 5) = CurrentThread;
    if ( *((_BYTE *)Object + 48) )
    {
      *((_BYTE *)Object + 48) = 0;
      CurrentThread->WaitStatus |= 0x80uLL;
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v23 = (struct _LIST_ENTRY *)((char *)Object + 24);
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    v23->Flink = &CurrentThread->MutantListHead;
    *((_QWORD *)Object + 4) = Blink;
    Blink->Flink = v23;
    CurrentThread->MutantListHead.Blink = v23;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    *(_QWORD *)&WaitMode = 0LL;
    CurrentThread->ThreadLock = 0LL;
    WaitStatus = CurrentThread->WaitStatus;
    WaitIrql = CurrentThread->WaitIrql;
    v25.Flags = (unsigned __int8)CurrentThread->WaitRegister;
    if ( (v25.Flags & 0x38) != 0 )
    {
      if ( (v25.Flags & 0x18) != 0 )
      {
        if ( (v25.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
        v37 = 0LL;
        v34 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&v15->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v34);
          while ( v15->PrcbLock );
        }
        if ( !v15->NextThread )
          KiSelectNextThread(v15, &v37, WaitMode, v9);
        _InterlockedAnd64((volatile signed __int64 *)&v15->PrcbLock, 0LL);
        KiProcessDeferredReadyList(v15, &v37, WaitIrql);
      }
      else
      {
        LOBYTE(Blink) = 1;
        KiCheckForThreadDispatch(v15, Blink, 0LL, v9);
        KiDeliverApc(0LL, 0LL, 0LL);
        __writecr8(0LL);
      }
    }
    else
    {
      if ( v42 )
      {
        CurrentPrcb = v15;
        goto LABEL_69;
      }
      __writecr8(WaitIrql);
    }
    return WaitStatus;
  }
LABEL_23:
  _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
LABEL_24:
  CurrentThread->WaitBlockFill6[68] = 2;
  _InterlockedOr(v31, 0);
  if ( CurrentThread->ThreadLock )
  {
    v35 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v35);
      while ( CurrentThread->ThreadLock );
    }
    v12 = 0LL;
    CurrentThread->ThreadLock = 0LL;
  }
  v16 = CurrentThread->WaitIrql;
  v17.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v17.Flags & 0x38) != 0 )
  {
    if ( (v17.Flags & 0x18) != 0 )
    {
      if ( (v17.Flags & 8) != 0 )
        _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
      v38 = 0LL;
      v36 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&v15->PrcbLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v36);
        while ( v15->PrcbLock );
      }
      if ( !v15->NextThread )
        KiSelectNextThread(v15, &v38, v12, v9);
      _InterlockedAnd64((volatile signed __int64 *)&v15->PrcbLock, 0LL);
      KiProcessDeferredReadyList(v15, &v38, v16);
    }
    else
    {
      LOBYTE(v11) = 1;
      KiCheckForThreadDispatch(v15, v11, 0LL, v9);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
    }
  }
  else if ( v42 )
  {
    KiCheckForThreadDispatch(v15, v16, 0LL, v9);
  }
  else
  {
    __writecr8(v16);
  }
  return v13;
}
