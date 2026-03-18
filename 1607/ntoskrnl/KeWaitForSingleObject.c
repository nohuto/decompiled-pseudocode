/*
 * XREFs of KeWaitForSingleObject @ 0x14005C880
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140002C50 (SmKmStoreHelperWorker.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x140002E5C (SmKmStoreDeleteWhenEmpty.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400039C4 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x140003BC4 (SmKmStoreHelperCleanup.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z @ 0x140004E10 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@PEAXP6AX1@ZPEAPEAU_ETHREAD@@@Z.c)
 *     IopWaitForLockAlertable @ 0x140007774 (IopWaitForLockAlertable.c)
 *     PopFxActivateDevice @ 0x140008088 (PopFxActivateDevice.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x1400083C4 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PpmAcquireLock @ 0x14000A528 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x14000D578 (PopExecuteOnTargetProcessors.c)
 *     CcUnmapVacbArray @ 0x140017FC0 (CcUnmapVacbArray.c)
 *     CcCanIWrite @ 0x1400209F0 (CcCanIWrite.c)
 *     CcWaitForUninitializeCacheMap @ 0x140022280 (CcWaitForUninitializeCacheMap.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     AlpcpSignalAndWait @ 0x14005E020 (AlpcpSignalAndWait.c)
 *     MiZeroPageWrite @ 0x14006B2E4 (MiZeroPageWrite.c)
 *     CcWriteBehind @ 0x14007161C (CcWriteBehind.c)
 *     ExfWaitForRundownProtectionRelease @ 0x140074D50 (ExfWaitForRundownProtectionRelease.c)
 *     NtSetInformationFile @ 0x140079360 (NtSetInformationFile.c)
 *     IopCompleteUnloadOrDelete @ 0x14007F1AC (IopCompleteUnloadOrDelete.c)
 *     CmpFileReadEx @ 0x1400848A0 (CmpFileReadEx.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x140085DE8 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     ExTimedWaitForUnblockPushLock @ 0x140087378 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x140087548 (ExpUnblockPushLock.c)
 *     WmipBuildTraceDeviceList @ 0x14009D2C4 (WmipBuildTraceDeviceList.c)
 *     AlpcpWaitForSingleObject @ 0x1400A0FA0 (AlpcpWaitForSingleObject.c)
 *     MiIssueSynchronousFlush @ 0x1400A1798 (MiIssueSynchronousFlush.c)
 *     VslpEnterIumSecureMode @ 0x1400AA174 (VslpEnterIumSecureMode.c)
 *     IoSynchronousCallDriver @ 0x1400AC630 (IoSynchronousCallDriver.c)
 *     WmipReceiveNotifications @ 0x1400AF3D4 (WmipReceiveNotifications.c)
 *     FsRtlpWaitOnIrp @ 0x1400B42DC (FsRtlpWaitOnIrp.c)
 *     PoFxActivateComponent @ 0x1400C10E0 (PoFxActivateComponent.c)
 *     WmipFindRegEntryByProviderId @ 0x1400C4838 (WmipFindRegEntryByProviderId.c)
 *     CcSetValidData @ 0x1400C6024 (CcSetValidData.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C61A4 (MiWaitForCollidedFaultComplete.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400C71EC (FsRtlpWaitForIoAtEof.c)
 *     ExpAcquireFastMutexContended @ 0x1400C7E28 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C8070 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C8280 (ExfAcquirePushLockSharedEx.c)
 *     IopWaitForSynchronousIo @ 0x1400CA4C0 (IopWaitForSynchronousIo.c)
 *     KiSchedulerApc @ 0x1400CB720 (KiSchedulerApc.c)
 *     PpmCheckPeriodicStart @ 0x1400D7290 (PpmCheckPeriodicStart.c)
 *     MiRetryNonPagedAllocation @ 0x1400E7E98 (MiRetryNonPagedAllocation.c)
 *     CcInitializeCacheMapEx @ 0x1400E8440 (CcInitializeCacheMapEx.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400F12A0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400FA57C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400FAC9C (LdrpGetFromMUIMemCache.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiQueueSyncModifiedWriterApc @ 0x14010D64C (MiQueueSyncModifiedWriterApc.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x14010F010 (CcWaitForCurrentLazyWriterActivity.c)
 *     PnpLockDeviceActionQueue @ 0x140110784 (PnpLockDeviceActionQueue.c)
 *     PpmTryAcquireLock @ 0x140111430 (PpmTryAcquireLock.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140111B64 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x140119F10 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14011EDE0 (SmKmStoreHelperWaitForCommand.c)
 *     PopHaltDeviceIdle @ 0x1401234C8 (PopHaltDeviceIdle.c)
 *     PopRunMaximumIrpWorkers @ 0x140124C9C (PopRunMaximumIrpWorkers.c)
 *     WmipDeregisterRegEntry @ 0x140125060 (WmipDeregisterRegEntry.c)
 *     PopTimeoutWakeTracking @ 0x140125690 (PopTimeoutWakeTracking.c)
 *     MiPfCompleteCoalescedIo @ 0x140125BC0 (MiPfCompleteCoalescedIo.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140126B64 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x140126C3C (PopIgnoreBatteryStatusChange.c)
 *     PopIrpWorker @ 0x14012BB74 (PopIrpWorker.c)
 *     PopPepUpdateConstraints @ 0x14012C374 (PopPepUpdateConstraints.c)
 *     WmipFindRegEntryByDevice @ 0x14012DDFC (WmipFindRegEntryByDevice.c)
 *     WmipAllocRegEntry @ 0x14012DE98 (WmipAllocRegEntry.c)
 *     WmiQueryTraceProviderCount @ 0x1401300C8 (WmiQueryTraceProviderCount.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x1401309AC (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140130BA4 (LdrUnloadAlternateResourceModuleEx.c)
 *     MiQueueWorkingSetRequest @ 0x14013135C (MiQueueWorkingSetRequest.c)
 *     ExUnregisterCallback @ 0x140131758 (ExUnregisterCallback.c)
 *     KeSwapProcessOrStack @ 0x14013D2D4 (KeSwapProcessOrStack.c)
 *     CcAsyncReadWorker @ 0x14013D91C (CcAsyncReadWorker.c)
 *     MiOkToZeroNextLargePage @ 0x14013F418 (MiOkToZeroNextLargePage.c)
 *     PopFxActivateComponent @ 0x140142174 (PopFxActivateComponent.c)
 *     MiModifiedPageWriter @ 0x140142508 (MiModifiedPageWriter.c)
 *     MiStoreEvictThread @ 0x14014341C (MiStoreEvictThread.c)
 *     CmpLazyWriteWorker @ 0x140143594 (CmpLazyWriteWorker.c)
 *     WheapAddErrorSource @ 0x140147268 (WheapAddErrorSource.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14014921C (LdrpSetAlternateResourceModuleHandle.c)
 *     PnpSerializeBoot @ 0x14014BBA4 (PnpSerializeBoot.c)
 *     PopIrpWorkerControl @ 0x14014C7BC (PopIrpWorkerControl.c)
 *     FsFilterAllocateCompletionStack @ 0x1401B9CCC (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1401BA7A0 (FsRtlpPostStackOverflow.c)
 *     IopAllocateBackpocketIrp @ 0x1401C443C (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401C471C (IopAllocateReserveIrp.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401CCDEC (IoReleaseRemoveLockAndWaitEx.c)
 *     PnpLockMountableDevice @ 0x1401CDD6C (PnpLockMountableDevice.c)
 *     PnpProcessRebalance @ 0x1401CE5E0 (PnpProcessRebalance.c)
 *     PnprQuiesce @ 0x1401D05D4 (PnprQuiesce.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1401D5A3C (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401D8994 (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x1401D8D0C (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1401D8D38 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x1401DC264 (KiParkUmsThread.c)
 *     MiProcessDeleteOnClose @ 0x1401DEEB8 (MiProcessDeleteOnClose.c)
 *     MiMakeOutswappedPageResident @ 0x1401DFDE0 (MiMakeOutswappedPageResident.c)
 *     MmReleaseCommitForMemResetPages @ 0x1401E1044 (MmReleaseCommitForMemResetPages.c)
 *     MiIssuePageExtendRequest @ 0x1401EE988 (MiIssuePageExtendRequest.c)
 *     MiWaitForFreePage @ 0x1401F41DC (MiWaitForFreePage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401F4E50 (MmStoreFlushOutstandingEvictions.c)
 *     MiContractWsSwapPageFileWorker @ 0x1401F77BC (MiContractWsSwapPageFileWorker.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401FEA5C (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140202DBC (PopFxIssueComponentPerfStateChanges.c)
 *     PopWdiTimerWorkerThread @ 0x14020A258 (PopWdiTimerWorkerThread.c)
 *     PopSetWatchdog @ 0x14020B4CC (PopSetWatchdog.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x14021C9FC (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmpFpWaitForResource @ 0x14022150C (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140221C48 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x140222424 (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140229098 (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x14022D1C4 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x14022D3C4 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x1402308D4 (WheapProcessWorkQueueItem.c)
 *     sub_14023207C @ 0x14023207C (sub_14023207C.c)
 *     CancelTimerCallbacksAndDeleteTimer @ 0x14023CD64 (CancelTimerCallbacksAndDeleteTimer.c)
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
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     PnpDeviceEventWorker @ 0x1403EF9F0 (PnpDeviceEventWorker.c)
 *     PnpStartDeviceNode @ 0x1403F10D4 (PnpStartDeviceNode.c)
 *     PiControlGetSetDeviceStatus @ 0x1403F489C (PiControlGetSetDeviceStatus.c)
 *     CmpOpenHiveFile @ 0x1403F9400 (CmpOpenHiveFile.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FB854 (CmpLockRegistryFreezeAware.c)
 *     CmLoadAppKey @ 0x1403FC110 (CmLoadAppKey.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     EtwpDisableTraceProviders @ 0x14040B4EC (EtwpDisableTraceProviders.c)
 *     FsRtlGetFileSize @ 0x14042C454 (FsRtlGetFileSize.c)
 *     CmpParseKey @ 0x14043BF00 (CmpParseKey.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     IopSynchronousServiceTail @ 0x1404457B0 (IopSynchronousServiceTail.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     NtWaitForSingleObject @ 0x140447AD0 (NtWaitForSingleObject.c)
 *     PspUserThreadStartup @ 0x140459060 (PspUserThreadStartup.c)
 *     MmCleanProcessAddressSpace @ 0x14045EDFC (MmCleanProcessAddressSpace.c)
 *     WmipOpenBlock @ 0x1404744DC (WmipOpenBlock.c)
 *     WmipFindGEByGuid @ 0x1404746D0 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x1404747B0 (WmipPrepareForWnodeAD.c)
 *     WmipEnableCollectOrEvent @ 0x140474FA0 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x14047508C (WmipIsQuerySetGuid.c)
 *     CmpGetVolumeClusterSize @ 0x140481F90 (CmpGetVolumeClusterSize.c)
 *     MmAcquireLoadLock @ 0x14048342C (MmAcquireLoadLock.c)
 *     EtwpStartLogger @ 0x14048EE94 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x14048FAF0 (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpLogger @ 0x14048FBA8 (EtwpLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x1404900BC (EtwpAcquireLoggerContextByLoggerId.c)
 *     EtwpSynchronizeWithLogger @ 0x140492AB0 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 *     EtwpFreeSystemLoggerIndex @ 0x14049501C (EtwpFreeSystemLoggerIndex.c)
 *     EtwpUpdateKernelGroupMasks @ 0x140495D10 (EtwpUpdateKernelGroupMasks.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x1404986E8 (FsRtlCancellableWaitForMultipleObjects.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1404C0C34 (WmipSendWmiIrpToTraceDeviceList.c)
 *     IopUncacheInterfaceInformation @ 0x1404C7A00 (IopUncacheInterfaceInformation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1404C7B8C (PopFxUnregisterDeviceOrWait.c)
 *     PnpAllocateResources @ 0x1404C82A4 (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x1404C8FAC (IopFilterResourceRequirementsCall.c)
 *     IopSynchronousApiServiceTail @ 0x1404C9698 (IopSynchronousApiServiceTail.c)
 *     IopGetSetObjectId @ 0x1404CB9B0 (IopGetSetObjectId.c)
 *     WmipDeleteMethod @ 0x1404CC380 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x1404CC470 (WmipDisableCollectOrEvent.c)
 *     IopCancelIrpsInThreadList @ 0x1404CC8BC (IopCancelIrpsInThreadList.c)
 *     PnpQueryInterface @ 0x1404CDDFC (PnpQueryInterface.c)
 *     FsRtlQueryKernelEaFile @ 0x1404CE198 (FsRtlQueryKernelEaFile.c)
 *     NtGetMUIRegistryInfo @ 0x1404CFDC8 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404D014C (NtMapCMFModule.c)
 *     FsRtlKernelFsControlFile @ 0x1404D1560 (FsRtlKernelFsControlFile.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1404E0D40 (RtlDecompressFragmentLZNT1.c)
 *     FsRtlQueryCachedVdl @ 0x1404E2B8C (FsRtlQueryCachedVdl.c)
 *     NtReleaseKeyedEvent @ 0x1404E5CB0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1404E5E5C (NtWaitForKeyedEvent.c)
 *     NtLoadDriver @ 0x1404E648C (NtLoadDriver.c)
 *     WmipEnumerateMofResources @ 0x1404E738C (WmipEnumerateMofResources.c)
 *     IoSetInformation @ 0x1404E8078 (IoSetInformation.c)
 *     FsRtlSetKernelEaFile @ 0x1404E8D6C (FsRtlSetKernelEaFile.c)
 *     FsRtlSetFileSize @ 0x1404ED434 (FsRtlSetFileSize.c)
 *     AlpcpWaitForPortReferences @ 0x1404ED53C (AlpcpWaitForPortReferences.c)
 *     NtNotifyChangeSession @ 0x1404EE3E8 (NtNotifyChangeSession.c)
 *     EtwpStartTrace @ 0x1404EEEF0 (EtwpStartTrace.c)
 *     IopCancelAlertedRequest @ 0x1404F0BD8 (IopCancelAlertedRequest.c)
 *     MiInSwapStore @ 0x1404F17D0 (MiInSwapStore.c)
 *     PiDrvDbLoadNode @ 0x1404FA308 (PiDrvDbLoadNode.c)
 *     WmipUnreferenceEntry @ 0x140505084 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x14050514C (WmipForwardWmiIrp.c)
 *     IopSynchronousCall @ 0x140505B9C (IopSynchronousCall.c)
 *     CmpFileFlushAndPurge @ 0x140506A2C (CmpFileFlushAndPurge.c)
 *     RtlDecompressBufferLZNT1 @ 0x140506C50 (RtlDecompressBufferLZNT1.c)
 *     IoVolumeDeviceToDosName @ 0x14050814C (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x140509FD0 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
 *     PspExitThread @ 0x14051611C (PspExitThread.c)
 *     ExpHwidSendSynchronousIrpToDevice @ 0x14051DCA4 (ExpHwidSendSynchronousIrpToDevice.c)
 *     NtPowerInformation @ 0x14051E834 (NtPowerInformation.c)
 *     IopGetSetSecurityObject @ 0x140521470 (IopGetSetSecurityObject.c)
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 *     IoReportTargetDeviceChange @ 0x140529918 (IoReportTargetDeviceChange.c)
 *     WmipPrepareWnodeSI @ 0x14052A720 (WmipPrepareWnodeSI.c)
 *     FsRtlIssueDeviceIoControl @ 0x14052CB78 (FsRtlIssueDeviceIoControl.c)
 *     IoVolumeDeviceToGuidPath @ 0x14052D04C (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x14052D194 (IoVolumeDeviceNameToGuidPath.c)
 *     EtwpUpdateDisallowedGuids @ 0x14052D4FC (EtwpUpdateDisallowedGuids.c)
 *     PoUnregisterPowerSettingCallback @ 0x14052DE48 (PoUnregisterPowerSettingCallback.c)
 *     FsRtlBalanceReads @ 0x14052DFB0 (FsRtlBalanceReads.c)
 *     ExSwapinWorkerThreads @ 0x14052ECF0 (ExSwapinWorkerThreads.c)
 *     PopResizeHiberFile @ 0x14052EEAC (PopResizeHiberFile.c)
 *     EmPowerPagingEnabled @ 0x1405303F0 (EmPowerPagingEnabled.c)
 *     NtInitiatePowerAction @ 0x140530B04 (NtInitiatePowerAction.c)
 *     PopInitSystemSleeperThread @ 0x1405319A0 (PopInitSystemSleeperThread.c)
 *     WmipDSCleanup @ 0x1405321F0 (WmipDSCleanup.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x140532344 (WmipDisableCollectionForRemovedGuid.c)
 *     IoDisconnectInterrupt @ 0x1405324F4 (IoDisconnectInterrupt.c)
 *     WmipDeregisterDevice @ 0x140532D54 (WmipDeregisterDevice.c)
 *     PopGetWakeSource @ 0x140532EB8 (PopGetWakeSource.c)
 *     ObWaitForSingleObject @ 0x140534394 (ObWaitForSingleObject.c)
 *     PopAcquireTransitionLock @ 0x140534978 (PopAcquireTransitionLock.c)
 *     WmipAddDataSource @ 0x140537074 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x140537690 (WmipDetermineInstanceBaseIndex.c)
 *     WmipEnableCollectionForNewGuid @ 0x1405378E8 (WmipEnableCollectionForNewGuid.c)
 *     WmipProcessEvent @ 0x140537B40 (WmipProcessEvent.c)
 *     WmipFindISinGEbyName @ 0x140537FAC (WmipFindISinGEbyName.c)
 *     IopDestroyActiveConnectBlock @ 0x140539F98 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14053A144 (IopAcquireReleaseConnectLockInternal.c)
 *     IoWMIRegistrationControl @ 0x14053A454 (IoWMIRegistrationControl.c)
 *     WmipRegisterDevice @ 0x14053A528 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14053A690 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14053A760 (WmipUpdateDeviceStackSize.c)
 *     WmipRegistrationWorker @ 0x140543088 (WmipRegistrationWorker.c)
 *     PopBatteryWorker @ 0x140543B90 (PopBatteryWorker.c)
 *     IopUnloadDriver @ 0x140544E28 (IopUnloadDriver.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x1405465B0 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140546D48 (FsRtlIssueFileNotificationFsctl.c)
 *     PopSanityCheckHiberFile @ 0x1405479CC (PopSanityCheckHiberFile.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140547ED0 (PnpSynchronizeDeviceEventQueue.c)
 *     PopClearHiberFileSignature @ 0x1405484F4 (PopClearHiberFileSignature.c)
 *     WmipSendEnableDisableRequest @ 0x140549834 (WmipSendEnableDisableRequest.c)
 *     EtwpCrimsonProvEnableCallback @ 0x14054AE98 (EtwpCrimsonProvEnableCallback.c)
 *     SmStoreCompressionStop @ 0x14054BCFC (SmStoreCompressionStop.c)
 *     CmpLoadHiveThread @ 0x14054D5A8 (CmpLoadHiveThread.c)
 *     IopCreateArcName @ 0x14054FC84 (IopCreateArcName.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140550688 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x1405506AC (PnpWaitForEmptyDeviceActionQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405506D0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     WmipAddMofResource @ 0x140550C40 (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x140550E78 (WmipFindMRByNames.c)
 *     IopLegacyResourceAllocation @ 0x1405549AC (IopLegacyResourceAllocation.c)
 *     IopAllocateBootResources @ 0x140556138 (IopAllocateBootResources.c)
 *     ArbArbiterHandler @ 0x14055803C (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x140558A4C (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x14055D110 (CmpFinishSystemHivesLoad.c)
 *     MiZeroPageFileFirstPage @ 0x140569090 (MiZeroPageFileFirstPage.c)
 *     SepRmCommandServerThread @ 0x14056B50C (SepRmCommandServerThread.c)
 *     PoInitHiberServices @ 0x14056BEA8 (PoInitHiberServices.c)
 *     PopNotifyPolicyDevice @ 0x14056C058 (PopNotifyPolicyDevice.c)
 *     PopCreateHiberFile @ 0x14056CF34 (PopCreateHiberFile.c)
 *     ?Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z @ 0x140574D84 (-Control@PC_ENVIRONMENT@@SAJPEAXK0K0K@Z.c)
 *     WmipLegacyEtwWorker @ 0x140574E44 (WmipLegacyEtwWorker.c)
 *     WmipProcessLegacyEtwRegister @ 0x140574F70 (WmipProcessLegacyEtwRegister.c)
 *     WmipLegacyEtwCallback @ 0x140575CF8 (WmipLegacyEtwCallback.c)
 *     IopInsertLegacyBusDeviceNode @ 0x140577D34 (IopInsertLegacyBusDeviceNode.c)
 *     FsRtlpRegisterUncProvider @ 0x140578250 (FsRtlpRegisterUncProvider.c)
 *     WmipSetTraceNotify @ 0x14057A164 (WmipSetTraceNotify.c)
 *     IoWMISetNotificationCallback @ 0x14057CEA4 (IoWMISetNotificationCallback.c)
 *     PiPagePathSetState @ 0x14057D324 (PiPagePathSetState.c)
 *     WheapEtwEnableCallback @ 0x14057F424 (WheapEtwEnableCallback.c)
 *     FsRtlWaitForSmssEvent @ 0x1405815E4 (FsRtlWaitForSmssEvent.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1406030E0 (CmpWaitOnHiveWriteQueue.c)
 *     CmpTouchFile @ 0x1406043E4 (CmpTouchFile.c)
 *     VrpWaitForDiffHiveEntryTransitionOwnerToLeave @ 0x140617A28 (VrpWaitForDiffHiveEntryTransitionOwnerToLeave.c)
 *     DbgkpQueueMessage @ 0x140618F9C (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140619E34 (NtWaitForDebugEvent.c)
 *     DbgkpSendErrorMessage @ 0x14061A524 (DbgkpSendErrorMessage.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x14061B3D0 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlGetDirectImageOriginalBase @ 0x14061DA90 (FsRtlGetDirectImageOriginalBase.c)
 *     FsRtlDeregisterUncProvider @ 0x14061E3EC (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14061EA48 (FsRtlQueryInformationFile.c)
 *     IopGetVolumeId @ 0x1406216AC (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x1406217E0 (IopHardErrorThread.c)
 *     IopInvalidateVolumesForDevice @ 0x140621ABC (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x140621F44 (IopLoadFileSystemDriver.c)
 *     IopSendMessageToTrackService @ 0x1406224EC (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x1406230A4 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x14062333C (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140623CF0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140628C80 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x140629384 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x140629A20 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x140629E88 (IoReplacePartitionUnit.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x14062A2A8 (IoSynchronousInvalidateDeviceRelations.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14062BDA4 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14062CFF4 (IopAcquireReleaseDispatcherLock.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x1406422A4 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x1406430D4 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x14064A0C8 (PiIrpQueryRemoveDevice.c)
 *     PiQueueDeviceRequest @ 0x14064B2F4 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14064B3CC (PnpQueueQueryAndRemoveEvent.c)
 *     PnpReallocateResources @ 0x14064BC7C (PnpReallocateResources.c)
 *     IopWarmEjectDevice @ 0x14064C5EC (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x14064E564 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x140669770 (PfTCleanup.c)
 *     PopCoolingExtensionPnpNotification @ 0x14066B928 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x14066BA80 (PopDeactiveThermalRequest.c)
 *     PopFxUnregisterDevice @ 0x14066D58C (PopFxUnregisterDevice.c)
 *     PopSetSystemAwayMode @ 0x14066EAA8 (PopSetSystemAwayMode.c)
 *     PopBatteryRemove @ 0x14066F320 (PopBatteryRemove.c)
 *     PopPepUnregisterDevice @ 0x14066F8C0 (PopPepUnregisterDevice.c)
 *     PopThermalZoneRemove @ 0x140670550 (PopThermalZoneRemove.c)
 *     PopDiagNextCsSleepStudySession @ 0x140670804 (PopDiagNextCsSleepStudySession.c)
 *     PopFanRemove @ 0x140673028 (PopFanRemove.c)
 *     PspQueueDeferredWorkAndWait @ 0x14067E9D4 (PspQueueDeferredWorkAndWait.c)
 *     PsWaitForAllProcesses @ 0x14067FB1C (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x14067FDFC (PspWaitForUsermodeExit.c)
 *     RawPerformDevIoCtrl @ 0x140682F50 (RawPerformDevIoCtrl.c)
 *     RawQueryFsSizeInfo @ 0x140683084 (RawQueryFsSizeInfo.c)
 *     RawQueryFileSystemInformation @ 0x1406834A4 (RawQueryFileSystemInformation.c)
 *     RtlpRunOnceWaitForInit @ 0x14068C0F0 (RtlpRunOnceWaitForInit.c)
 *     SmProcessResizeRequest @ 0x140696B78 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x140696C6C (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x140697148 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x140698108 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14069897C (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x140698A2C (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x140698AE8 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1406991DC (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x140699274 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1406998CC (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x14069C8A8 (IoWMIAllocateInstanceIds.c)
 *     WmipGetSysIds @ 0x14069D690 (WmipGetSysIds.c)
 *     WmipDereferenceEvent @ 0x14069DE08 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x14069E028 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x14069E1AC (WmipIncludeStaticNames.c)
 *     WmipQueryGuidInfo @ 0x14069E748 (WmipQueryGuidInfo.c)
 *     WmipUpdateDataSource @ 0x14069F36C (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x14069F8D0 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x14069FD28 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x14069FEB4 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x1406A2A78 (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406A3914 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406A5578 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406A55C8 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1406A7EFC (EtwpSampledProfileRunDown.c)
 *     EtwpKsrCallback @ 0x1406A9D84 (EtwpKsrCallback.c)
 *     NtStartProfile @ 0x1406B823C (NtStartProfile.c)
 *     NtStopProfile @ 0x1406B8494 (NtStopProfile.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1406BA518 (WheaAttemptPhysicalPageOffline.c)
 *     VhdiVerifyBootDisk @ 0x1406E54BC (VhdiVerifyBootDisk.c)
 *     VfDriverLock @ 0x1406FE42C (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x14070172C (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x14070BF00 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x14070D284 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x14070D5C8 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x140710B30 (ViPoolDelayFreeTrimThreadRoutine.c)
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
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 *     KiCommitThreadWait @ 0x14005ACD0 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x14005DBD0 (KiDeliverApc.c)
 *     KiSelectNextThread @ 0x1400CA5B0 (KiSelectNextThread.c)
 *     KiProcessDeferredReadyList @ 0x1400D3450 (KiProcessDeferredReadyList.c)
 *     KiFastExitThreadWait @ 0x1400F2828 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x1400F2960 (KiCheckForThreadDispatch.c)
 *     RtlRaiseStatus @ 0x1400F6738 (RtlRaiseStatus.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAE68 (HvlNotifyLongSpinWait.c)
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
