/*
 * XREFs of KeWaitForSingleObject @ 0x140081870
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140003C9C (IopCompleteUnloadOrDelete.c)
 *     MiRetryNonPagedAllocation @ 0x140019AF0 (MiRetryNonPagedAllocation.c)
 *     PopFxActivateDevice @ 0x14001AA18 (PopFxActivateDevice.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x14001AB74 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     CcSetValidData @ 0x14001AE4C (CcSetValidData.c)
 *     WmipFindRegEntryByProviderId @ 0x14001AF58 (WmipFindRegEntryByProviderId.c)
 *     CmpFileReadEx @ 0x14001B248 (CmpFileReadEx.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x140020CE0 (ExfAcquirePushLockExclusiveEx.c)
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x14002C660 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     CcCanIWrite @ 0x14002F540 (CcCanIWrite.c)
 *     CcWaitForUninitializeCacheMap @ 0x14003897C (CcWaitForUninitializeCacheMap.c)
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     PpmCheckPeriodicStart @ 0x140075C50 (PpmCheckPeriodicStart.c)
 *     AlpcpSignalAndWait @ 0x14007E970 (AlpcpSignalAndWait.c)
 *     ExpWaitForResource @ 0x14007F400 (ExpWaitForResource.c)
 *     KeWaitForMultipleObjects @ 0x1400810B0 (KeWaitForMultipleObjects.c)
 *     IopWaitForSynchronousIo @ 0x14008E3A0 (IopWaitForSynchronousIo.c)
 *     NtSetInformationFile @ 0x14008E8E0 (NtSetInformationFile.c)
 *     PpmAcquireLock @ 0x140097354 (PpmAcquireLock.c)
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     CcInitializeCacheMap @ 0x1400AF300 (CcInitializeCacheMap.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     FsRtlpWaitOnIrp @ 0x1400CC9E8 (FsRtlpWaitOnIrp.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D0320 (ExfWaitForRundownProtectionRelease.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400D27AC (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1400D2A8C (ExpUnblockPushLock.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x1400D952C (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     PopFxActivateComponent @ 0x1400DAE60 (PopFxActivateComponent.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1400DD174 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x1400DD36C (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x1400DDE90 (LdrpGetFromMUIMemCache.c)
 *     MiZeroPageWrite @ 0x1400E0134 (MiZeroPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x1400E03C0 (MiIssueSynchronousFlush.c)
 *     AlpcpWaitForSingleObject @ 0x1400E38BC (AlpcpWaitForSingleObject.c)
 *     IopWaitForLockAlertable @ 0x1400E73A4 (IopWaitForLockAlertable.c)
 *     WmipDeregisterRegEntry @ 0x1400EA5DC (WmipDeregisterRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x1400EA788 (WmipFindRegEntryByDevice.c)
 *     IoSynchronousCallDriver @ 0x1400EB0E0 (IoSynchronousCallDriver.c)
 *     HvlpEnterIumSecureMode @ 0x1400EB69C (HvlpEnterIumSecureMode.c)
 *     WmipReceiveNotifications @ 0x1400EE5C4 (WmipReceiveNotifications.c)
 *     ExUnregisterCallback @ 0x1400F4408 (ExUnregisterCallback.c)
 *     SmKmStoreHelperWorker @ 0x1400F71C0 (SmKmStoreHelperWorker.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400F7B0C (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x1400F7D54 (SmKmStoreHelperCleanup.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z @ 0x1400F9450 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z.c)
 *     CcAsyncReadWorker @ 0x1400FB99C (CcAsyncReadWorker.c)
 *     CcWriteBehind @ 0x140101160 (CcWriteBehind.c)
 *     FsRtlpWaitForIoAtEof @ 0x140101EB4 (FsRtlpWaitForIoAtEof.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140103C60 (CcWaitForCurrentLazyWriterActivity.c)
 *     HalExamineMBR @ 0x140105C4C (HalExamineMBR.c)
 *     PpmTryAcquireLock @ 0x140105EAC (PpmTryAcquireLock.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140106754 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14010BA28 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140110EE4 (SmKmStoreHelperWaitForCommand.c)
 *     MiPfCompleteCoalescedIo @ 0x140116FD4 (MiPfCompleteCoalescedIo.c)
 *     PopRunMaximumIrpWorkers @ 0x140119E0C (PopRunMaximumIrpWorkers.c)
 *     PopHaltDeviceIdle @ 0x140119EC0 (PopHaltDeviceIdle.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140119F04 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x140119F3C (PopIgnoreBatteryStatusChange.c)
 *     PopTimeoutWakeTracking @ 0x14011A6EC (PopTimeoutWakeTracking.c)
 *     MiQueueWorkingSetRequest @ 0x14011B7BC (MiQueueWorkingSetRequest.c)
 *     PopIrpWorker @ 0x1401212D0 (PopIrpWorker.c)
 *     WmipAllocRegEntry @ 0x140123DB8 (WmipAllocRegEntry.c)
 *     PnpLockDeviceActionQueue @ 0x1401246B4 (PnpLockDeviceActionQueue.c)
 *     WmipBuildTraceDeviceList @ 0x1401252F0 (WmipBuildTraceDeviceList.c)
 *     WmiQueryTraceProviderCount @ 0x140125904 (WmiQueryTraceProviderCount.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x140125C38 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     PopPepUpdateConstraints @ 0x14012F4AC (PopPepUpdateConstraints.c)
 *     PspQueueDeferredWorkAndWait @ 0x1401343C4 (PspQueueDeferredWorkAndWait.c)
 *     KeSwapProcessOrStack @ 0x140136234 (KeSwapProcessOrStack.c)
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 *     CmpLazyWriteWorker @ 0x14013CADC (CmpLazyWriteWorker.c)
 *     WheapAddErrorSource @ 0x14013E604 (WheapAddErrorSource.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14013FDE8 (LdrpSetAlternateResourceModuleHandle.c)
 *     PopIrpWorkerControl @ 0x140141DB8 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x140141EF4 (PnpSerializeBoot.c)
 *     MiStoreEvictThread @ 0x140142B00 (MiStoreEvictThread.c)
 *     FsRtlGetFileExtentsFsctl @ 0x1401AC318 (FsRtlGetFileExtentsFsctl.c)
 *     FsFilterAllocateCompletionStack @ 0x1401AD5D8 (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1401ADF50 (FsRtlpPostStackOverflow.c)
 *     xHalGetPartialGeometry @ 0x1401AE034 (xHalGetPartialGeometry.c)
 *     IopAllocateBackpocketIrp @ 0x1401B6964 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401B6C44 (IopAllocateReserveIrp.c)
 *     IopRunIoQosWorkItem @ 0x1401BDB5C (IopRunIoQosWorkItem.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401BE854 (IoReleaseRemoveLockAndWaitEx.c)
 *     PnpLockMountableDevice @ 0x1401BF7E4 (PnpLockMountableDevice.c)
 *     PnpProcessRebalance @ 0x1401BFE4C (PnpProcessRebalance.c)
 *     PnprQuiesce @ 0x1401C1090 (PnprQuiesce.c)
 *     KiAcquireSecondaryPassiveConnectLock @ 0x1401C68CC (KiAcquireSecondaryPassiveConnectLock.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1401CA1C8 (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x1401CA538 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x1401CA564 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x1401CC5D8 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x1401CFB54 (MiMakeOutswappedPageResident.c)
 *     MiIssuePageExtendRequest @ 0x1401DCCB8 (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x1401DD0B0 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1401DD1DC (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiContractWsSwapPageFileWorker @ 0x1401E13D8 (MiContractWsSwapPageFileWorker.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401E5784 (MmStoreFlushOutstandingEvictions.c)
 *     NtSignalAndWaitForSingleObject @ 0x1401E61A0 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1401EA3E4 (PopFxIssueComponentPerfStateChanges.c)
 *     PopWdiTimerWorkerThread @ 0x1401F114C (PopWdiTimerWorkerThread.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140202CD4 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmpFpWaitForResource @ 0x140209A78 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x14020A300 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x14020A97C (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x140210B28 (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x1402130EC (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x1402132EC (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x14021675C (WheapProcessWorkQueueItem.c)
 *     sub_140217EA0 @ 0x140217EA0 (sub_140217EA0.c)
 *     PopTransitionToSleep @ 0x14039E084 (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x14039EAC4 (PopEndMirroring.c)
 *     PopBuildDeviceNotifyList @ 0x1403A32E0 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x1403A39C4 (PopFlushVolumes.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopWakeDeviceList @ 0x1403A4EC8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403A503C (PopSleepDeviceList.c)
 *     PfpScenCtxPrefetchWait @ 0x1403A5454 (PfpScenCtxPrefetchWait.c)
 *     PopCaptureTimeOnProcZero @ 0x1403A58B0 (PopCaptureTimeOnProcZero.c)
 *     IoShutdownSystem @ 0x1403ADE5C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403AE170 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1403AF974 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1403B0C00 (PnprQuiesceWorker.c)
 *     MiZeroAllPageFiles @ 0x1403B1D84 (MiZeroAllPageFiles.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     MiInSwapStore @ 0x1403B59C8 (MiInSwapStore.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     MmAcquireLoadLock @ 0x1403CF8F0 (MmAcquireLoadLock.c)
 *     WmipDSCleanup @ 0x1403D1BEC (WmipDSCleanup.c)
 *     WmipProcessEvent @ 0x1403D1CFC (WmipProcessEvent.c)
 *     CmpGetVolumeClusterSize @ 0x1403D210C (CmpGetVolumeClusterSize.c)
 *     WmipSendEnableDisableRequest @ 0x1403D2308 (WmipSendEnableDisableRequest.c)
 *     CmpFileFlushAndPurge @ 0x1403D2B0C (CmpFileFlushAndPurge.c)
 *     IopSynchronousCall @ 0x1403D2C78 (IopSynchronousCall.c)
 *     WmipUnreferenceEntry @ 0x1403D3420 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1403D34E8 (WmipForwardWmiIrp.c)
 *     WmipFindGEByGuid @ 0x1403D370C (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x1403D37EC (WmipPrepareForWnodeAD.c)
 *     CmLoadAppKey @ 0x1403DC3A0 (CmLoadAppKey.c)
 *     CmpOpenHiveFile @ 0x1403DD4E4 (CmpOpenHiveFile.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     MmCleanProcessAddressSpace @ 0x1403E7980 (MmCleanProcessAddressSpace.c)
 *     PspExitThread @ 0x1403F0588 (PspExitThread.c)
 *     FsRtlGetFileSize @ 0x1403F7C1C (FsRtlGetFileSize.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     NtWaitForSingleObject @ 0x14042F250 (NtWaitForSingleObject.c)
 *     IopGetSetSecurityObject @ 0x140438940 (IopGetSetSecurityObject.c)
 *     PiDrvDbLoadNode @ 0x140444A94 (PiDrvDbLoadNode.c)
 *     PspUserThreadStartup @ 0x140445974 (PspUserThreadStartup.c)
 *     NtPowerInformation @ 0x140452E2C (NtPowerInformation.c)
 *     PiControlGetSetDeviceStatus @ 0x140458AB4 (PiControlGetSetDeviceStatus.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x14046D240 (EtwpAcquireLoggerContextByLoggerId.c)
 *     RawQueryFsSizeInfo @ 0x140484B94 (RawQueryFsSizeInfo.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14048BD50 (FsRtlCancellableWaitForMultipleObjects.c)
 *     AlpcpWaitForPortReferences @ 0x14048C354 (AlpcpWaitForPortReferences.c)
 *     WmipDeleteMethod @ 0x14048C524 (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x14048C614 (WmipDisableCollectOrEvent.c)
 *     IopCancelIrpsInThreadList @ 0x14048FFEC (IopCancelIrpsInThreadList.c)
 *     IopSynchronousApiServiceTail @ 0x140490974 (IopSynchronousApiServiceTail.c)
 *     NtLoadDriver @ 0x140493C20 (NtLoadDriver.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 *     sub_1404964E4 @ 0x1404964E4 (sub_1404964E4.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     IopUncacheInterfaceInformation @ 0x1404A0F04 (IopUncacheInterfaceInformation.c)
 *     PopFxUnregisterDeviceOrWait @ 0x1404A1280 (PopFxUnregisterDeviceOrWait.c)
 *     FsRtlSetFileSize @ 0x1404A2234 (FsRtlSetFileSize.c)
 *     FsRtlSetKernelEaFile @ 0x1404A233C (FsRtlSetKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1404A249C (FsRtlKernelFsControlFile.c)
 *     FsRtlQueryKernelEaFile @ 0x1404A2780 (FsRtlQueryKernelEaFile.c)
 *     DbgkpSendErrorMessage @ 0x1404A403C (DbgkpSendErrorMessage.c)
 *     NtGetMUIRegistryInfo @ 0x1404AAE1C (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x1404AB19C (NtMapCMFModule.c)
 *     IoWMIRegistrationControl @ 0x1404B3074 (IoWMIRegistrationControl.c)
 *     WmipDeregisterDevice @ 0x1404B3148 (WmipDeregisterDevice.c)
 *     EtwpSynchronizeWithLogger @ 0x1404B666C (EtwpSynchronizeWithLogger.c)
 *     EtwpUpdateKernelGroupMasks @ 0x1404B8124 (EtwpUpdateKernelGroupMasks.c)
 *     NtReleaseKeyedEvent @ 0x1404BBDF0 (NtReleaseKeyedEvent.c)
 *     NtWaitForKeyedEvent @ 0x1404BBFA0 (NtWaitForKeyedEvent.c)
 *     IopGetSetObjectId @ 0x1404BCDCC (IopGetSetObjectId.c)
 *     WmipEnumerateMofResources @ 0x1404BE074 (WmipEnumerateMofResources.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1404C1BE4 (WmipDisableCollectionForRemovedGuid.c)
 *     NtNotifyChangeSession @ 0x1404C2F6C (NtNotifyChangeSession.c)
 *     FsRtlQueryCachedVdl @ 0x1404C34E0 (FsRtlQueryCachedVdl.c)
 *     IoSetInformation @ 0x1404C362C (IoSetInformation.c)
 *     WmipLegacyEtwWorker @ 0x1404C4D60 (WmipLegacyEtwWorker.c)
 *     WmipQueryGuidInfo @ 0x1404C530C (WmipQueryGuidInfo.c)
 *     IopCancelAlertedRequest @ 0x1404C5FBC (IopCancelAlertedRequest.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x1404C67B4 (PnpSynchronizeDeviceEventQueue.c)
 *     WmipOpenBlock @ 0x1404C8168 (WmipOpenBlock.c)
 *     WmipEnableCollectOrEvent @ 0x1404C9514 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1404C9838 (WmipIsQuerySetGuid.c)
 *     EtwpStartTrace @ 0x1404CA194 (EtwpStartTrace.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     EtwpStartLogger @ 0x1404CB420 (EtwpStartLogger.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404CC19C (EtwpAcquireLoggerContextByLoggerName.c)
 *     EtwpDisableTraceProviders @ 0x1404CCDA8 (EtwpDisableTraceProviders.c)
 *     EtwpUpdateDisallowedGuids @ 0x1404CF680 (EtwpUpdateDisallowedGuids.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404D00D4 (EtwpCrimsonProvEnableCallback.c)
 *     IoVolumeDeviceToDosName @ 0x1404D7FD4 (IoVolumeDeviceToDosName.c)
 *     IopGetFileInformation @ 0x1404D8FD0 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x1404DB258 (IopQueryXxxInformation.c)
 *     RtlDecompressBufferLZNT1 @ 0x1404DF1E4 (RtlDecompressBufferLZNT1.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1404DF384 (RtlDecompressFragmentLZNT1.c)
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 *     PnpDeviceEventWorker @ 0x1404E0578 (PnpDeviceEventWorker.c)
 *     IoSetPartitionInformation @ 0x1404E3140 (IoSetPartitionInformation.c)
 *     IoVolumeDeviceToGuidPath @ 0x1404E7D88 (IoVolumeDeviceToGuidPath.c)
 *     IoVolumeDeviceNameToGuidPath @ 0x1404E7ED0 (IoVolumeDeviceNameToGuidPath.c)
 *     FstubReadSectors @ 0x1404E857C (FstubReadSectors.c)
 *     FstubGetDiskGeometry @ 0x1404E86F4 (FstubGetDiskGeometry.c)
 *     IoReadPartitionTable @ 0x1404E89A8 (IoReadPartitionTable.c)
 *     HalpGetFullGeometry @ 0x1404E8F68 (HalpGetFullGeometry.c)
 *     FsRtlIssueDeviceIoControl @ 0x1404E9A1C (FsRtlIssueDeviceIoControl.c)
 *     IoReportTargetDeviceChange @ 0x1404EABBC (IoReportTargetDeviceChange.c)
 *     FsRtlBalanceReads @ 0x1404EC1B0 (FsRtlBalanceReads.c)
 *     PoUnregisterPowerSettingCallback @ 0x1404EC230 (PoUnregisterPowerSettingCallback.c)
 *     PnpQueryInterface @ 0x1404F0558 (PnpQueryInterface.c)
 *     IopFilterResourceRequirementsCall @ 0x1404F179C (IopFilterResourceRequirementsCall.c)
 *     PnpAllocateResources @ 0x1404F213C (PnpAllocateResources.c)
 *     PnpStartDeviceNode @ 0x1404F2A48 (PnpStartDeviceNode.c)
 *     IoDisconnectInterrupt @ 0x1404F405C (IoDisconnectInterrupt.c)
 *     ObWaitForSingleObject @ 0x1404F546C (ObWaitForSingleObject.c)
 *     ExSwapinWorkerThreads @ 0x1404F5C2C (ExSwapinWorkerThreads.c)
 *     PopResizeHiberFile @ 0x1404F5DF0 (PopResizeHiberFile.c)
 *     PopAcquireTransitionLock @ 0x1404F6A8C (PopAcquireTransitionLock.c)
 *     NtInitiatePowerAction @ 0x1404F6BCC (NtInitiatePowerAction.c)
 *     PopInitSystemSleeperThread @ 0x1404F7478 (PopInitSystemSleeperThread.c)
 *     EmPowerPagingEnabled @ 0x1404F7D3C (EmPowerPagingEnabled.c)
 *     PopGetWakeSource @ 0x1404F8AF0 (PopGetWakeSource.c)
 *     PopBatteryWorker @ 0x1404F9510 (PopBatteryWorker.c)
 *     PopSanityCheckHiberFile @ 0x1404F9F38 (PopSanityCheckHiberFile.c)
 *     PopUmpoSendLegacyEvent @ 0x1404FA078 (PopUmpoSendLegacyEvent.c)
 *     PopClearHiberFileSignature @ 0x1404FA16C (PopClearHiberFileSignature.c)
 *     WmipPrepareWnodeSI @ 0x140501720 (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x140501BD8 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14050220C (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x1405023C0 (WmipFindISinGEbyName.c)
 *     IopDestroyActiveConnectBlock @ 0x1405036E8 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x1405038C4 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipEnableCollectionForNewGuid @ 0x140506FE4 (WmipEnableCollectionForNewGuid.c)
 *     WmipRegisterDevice @ 0x140507C3C (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x140507DA4 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x140507E74 (WmipUpdateDeviceStackSize.c)
 *     WmipRegistrationWorker @ 0x140508288 (WmipRegistrationWorker.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x140509C08 (WmipSendWmiIrpToTraceDeviceList.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x14050B644 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x14050C180 (FsRtlIssueFileNotificationFsctl.c)
 *     EtwpFreeSystemLoggerIndex @ 0x14050CFA8 (EtwpFreeSystemLoggerIndex.c)
 *     FstubWriteSector @ 0x140516724 (FstubWriteSector.c)
 *     SmStoreCompressionStop @ 0x140517730 (SmStoreCompressionStop.c)
 *     RawQueryFileSystemInformation @ 0x140518FE0 (RawQueryFileSystemInformation.c)
 *     RawPerformDevIoCtrl @ 0x140519170 (RawPerformDevIoCtrl.c)
 *     IopLoadFileSystemDriver @ 0x14051AFA0 (IopLoadFileSystemDriver.c)
 *     CmpFinishSystemHivesLoad @ 0x14051F09C (CmpFinishSystemHivesLoad.c)
 *     CmpLoadHiveThread @ 0x140520FE4 (CmpLoadHiveThread.c)
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x140522A58 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x140522A7C (PnpWaitForEmptyDeviceActionQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140522AA0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     WmipAddMofResource @ 0x1405234A4 (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x1405236DC (WmipFindMRByNames.c)
 *     IopAllocateBootResources @ 0x140529F08 (IopAllocateBootResources.c)
 *     ArbArbiterHandler @ 0x14052BCF4 (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x14052C010 (ArbBuildAssignmentOrdering.c)
 *     MiZeroPageFileFirstPage @ 0x140538820 (MiZeroPageFileFirstPage.c)
 *     SepRmCommandServerThread @ 0x14053C31C (SepRmCommandServerThread.c)
 *     CmpWaitForHiveMount @ 0x14053FF80 (CmpWaitForHiveMount.c)
 *     IopInsertLegacyBusDeviceNode @ 0x14054214C (IopInsertLegacyBusDeviceNode.c)
 *     WmipSetTraceNotify @ 0x140542638 (WmipSetTraceNotify.c)
 *     FsRtlpRegisterUncProvider @ 0x140544B70 (FsRtlpRegisterUncProvider.c)
 *     WmipProcessLegacyEtwRegister @ 0x140544F90 (WmipProcessLegacyEtwRegister.c)
 *     PoInitHiberServices @ 0x1405466A8 (PoInitHiberServices.c)
 *     PiPagePathSetState @ 0x1405493FC (PiPagePathSetState.c)
 *     IoWMISetNotificationCallback @ 0x140549BD4 (IoWMISetNotificationCallback.c)
 *     WheapEtwEnableCallback @ 0x14054A064 (WheapEtwEnableCallback.c)
 *     FsRtlWaitForSmssEvent @ 0x14054B824 (FsRtlWaitForSmssEvent.c)
 *     PopCreateHiberFile @ 0x14054BA2C (PopCreateHiberFile.c)
 *     PopNotifyPolicyDevice @ 0x14054BEDC (PopNotifyPolicyDevice.c)
 *     WmipLegacyEtwCallback @ 0x14054DFB4 (WmipLegacyEtwCallback.c)
 *     CmpWaitOnHiveWriteQueue @ 0x1405E3728 (CmpWaitOnHiveWriteQueue.c)
 *     CmpTouchFile @ 0x1405E4E8C (CmpTouchFile.c)
 *     DbgkpQueueMessage @ 0x1405EF390 (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x1405F0234 (NtWaitForDebugEvent.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x1405F1178 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlDeregisterUncProvider @ 0x1405F4094 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x1405F46E4 (FsRtlQueryInformationFile.c)
 *     IoWritePartitionTable @ 0x1405F5BF8 (IoWritePartitionTable.c)
 *     IopGetVolumeId @ 0x1405F78EC (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x1405F7A20 (IopHardErrorThread.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F7CFC (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x1405F8664 (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x1405F91FC (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x1405F99D8 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x1405FA2C0 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x1405FEC4C (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x1405FF3C8 (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x1405FF9D0 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x1405FFE34 (IoReplacePartitionUnit.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x140600254 (IoSynchronousInvalidateDeviceRelations.c)
 *     PnpRequestHwProfileChangeNotification @ 0x140601D58 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x140602C78 (IopAcquireReleaseDispatcherLock.c)
 *     IopLegacyResourceAllocation @ 0x1406045CC (IopLegacyResourceAllocation.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14060DE98 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x14060ECC8 (PnpReplacePartitionUnit.c)
 *     PiIrpQueryRemoveDevice @ 0x140615674 (PiIrpQueryRemoveDevice.c)
 *     PiQueueDeviceRequest @ 0x1406168D0 (PiQueueDeviceRequest.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x1406169A8 (PnpQueueQueryAndRemoveEvent.c)
 *     PnpReallocateResources @ 0x140617258 (PnpReallocateResources.c)
 *     IopWarmEjectDevice @ 0x1406178CC (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x1406193B4 (IopQueryConflictList.c)
 *     PfTCleanup @ 0x14063154C (PfTCleanup.c)
 *     PopCoolingExtensionPnpNotification @ 0x140633430 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x140633588 (PopDeactiveThermalRequest.c)
 *     PopFxUnregisterDevice @ 0x14063517C (PopFxUnregisterDevice.c)
 *     PopSetSystemAwayMode @ 0x1406366F8 (PopSetSystemAwayMode.c)
 *     PopBatteryRemove @ 0x140636F3C (PopBatteryRemove.c)
 *     PopPepUnregisterDevice @ 0x14063749C (PopPepUnregisterDevice.c)
 *     PopThermalZoneRemove @ 0x140638118 (PopThermalZoneRemove.c)
 *     PopDiagNextSleepStudySession @ 0x14063861C (PopDiagNextSleepStudySession.c)
 *     PopFanRemove @ 0x14063BC9C (PopFanRemove.c)
 *     PsWaitForAllProcesses @ 0x140641720 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1406419A4 (PspWaitForUsermodeExit.c)
 *     RtlpRunOnceWaitForInit @ 0x14064C894 (RtlpRunOnceWaitForInit.c)
 *     SmProcessResizeRequest @ 0x1406578DC (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1406579D0 (SmProcessStatsRequest.c)
 *     SmStorePhysicalRequestIssue @ 0x140657E9C (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x14065A4DC (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x14065AD50 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x14065AE00 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x14065AEBC (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x14065B5B0 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x14065B648 (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x14065BCA4 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x14065D3E0 (IoWMIAllocateInstanceIds.c)
 *     WmipDereferenceEvent @ 0x14065DB8C (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x14065DDAC (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x14065DF34 (WmipIncludeStaticNames.c)
 *     WmipGetSysIds @ 0x14065F02C (WmipGetSysIds.c)
 *     WmipUpdateDataSource @ 0x14065F670 (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x14065FBD4 (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x14065FE08 (EtwpEnableDisableUMGL.c)
 *     EtwpUpdatePerProcessTracing @ 0x14065FFB0 (EtwpUpdatePerProcessTracing.c)
 *     EtwpSetPmcProfileSource @ 0x140662118 (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x140662F28 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x140664D38 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x140664D88 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x140666490 (EtwpSampledProfileRunDown.c)
 *     NtStartProfile @ 0x1406758E4 (NtStartProfile.c)
 *     NtStopProfile @ 0x140675B3C (NtStopProfile.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140677DE0 (WheaAttemptPhysicalPageOffline.c)
 *     VhdiVerifyBootDisk @ 0x14069E8FC (VhdiVerifyBootDisk.c)
 *     VfDriverLock @ 0x1406B26C0 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x1406B58F4 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x1406BFEA8 (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x1406C121C (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x1406C1560 (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x1406C4AA8 (ViPoolDelayFreeTrimThreadRoutine.c)
 *     ViKeWaitForSingleObjectCommon @ 0x1406C730C (ViKeWaitForSingleObjectCommon.c)
 *     ViFilterDispatchPnp @ 0x1406CED10 (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x1406DAE6C (AnFwFadeCompletion.c)
 *     IopCreateArcNamesCd @ 0x14074F274 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1407538E4 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x140782D38 (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x140786C50 (VhdiMountVhdFile.c)
 *     SbpAddTransportToInstance @ 0x14078750C (SbpAddTransportToInstance.c)
 *     SbpStartLanman @ 0x1407876E4 (SbpStartLanman.c)
 *     SbpWaitForVmbus @ 0x140787A64 (SbpWaitForVmbus.c)
 * Callees:
 *     RtlRaiseStatus @ 0x140023A24 (RtlRaiseStatus.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiFastExitThreadWait @ 0x14002ABE8 (KiFastExitThreadWait.c)
 *     KiCheckForThreadDispatch @ 0x14002AD14 (KiCheckForThreadDispatch.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiProcessDeferredReadyList @ 0x14007DC70 (KiProcessDeferredReadyList.c)
 *     KiCommitThreadWait @ 0x140081ED0 (KiCommitThreadWait.c)
 *     KiDeliverApc @ 0x140083D40 (KiDeliverApc.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
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
  KPROCESSOR_MODE v6; // r15
  unsigned __int8 CurrentIrql; // al
  LARGE_INTEGER *QuadPart; // r13
  unsigned __int8 WaitIrql; // si
  unsigned __int8 *v11; // rcx
  NTSTATUS v12; // edi
  __int64 v13; // r8
  volatile __int64 WaitStatus; // rbp
  unsigned int v15; // edi
  $7206FD56FFE06BF40DFFA5887EA6BE2A *v16; // rdx
  struct _KPRCB *CurrentPrcb; // rsi
  int v18; // eax
  int v19; // eax
  unsigned __int64 v20; // rcx
  PVOID *v21; // rcx
  NTSTATUS result; // eax
  unsigned __int8 v23; // al
  volatile unsigned __int8 DpcRoutineActive; // cl
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v26; // rcx
  __int64 v27; // r8
  unsigned __int8 v28; // di
  _KWAIT_STATUS_REGISTER v29; // al
  _KWAIT_STATUS_REGISTER v30; // al
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
  v6 = WaitMode;
  WaitMode = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  v42 = WaitMode;
  if ( !WaitMode )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      QuadPart = (LARGE_INTEGER *)Timeout->QuadPart;
      v43 = 1;
    }
    else
    {
      v43 = 2;
      QuadPart = (LARGE_INTEGER *)(MEMORY[0xFFFFF78000000008]
                                 - MEMORY[0xFFFFF780000003B0]
                                 - (Timeout->QuadPart
                                  + CurrentThread->RelativeTimerBias));
    }
    Timeout = QuadPart;
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
      CurrentThread->WaitMode = v6;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v35 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
          KeYieldProcessorEx(&v35, *(__int64 *)&WaitReason, WaitMode);
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    if ( Alertable )
    {
      v11 = &CurrentThread->Alerted[v6];
      if ( *v11 )
      {
        *v11 = 0;
        v12 = 257;
        goto LABEL_57;
      }
      if ( v6 && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPending = 1;
LABEL_56:
        v12 = 192;
LABEL_57:
        CurrentThread->ThreadLock = 0LL;
        KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
        return v12;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v12 = 257;
        goto LABEL_57;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPending & (unsigned __int8)v6) != 0 )
    {
      goto LABEL_56;
    }
    v13 = 0LL;
    CurrentThread->WaitBlockFill6[68] = 5;
    LODWORD(WaitStatus) = 0;
    CurrentThread->WaitReason = v41;
    v15 = 0;
    CurrentThread->ThreadLock = 0LL;
    v16 = &CurrentThread->320;
    CurrentThread->WaitBlock[2].SpareLong = MEMORY[0xFFFFF78000000320];
    CurrentPrcb = KeGetCurrentPrcb();
    CurrentThread->WaitBlock[0].WaitType = 1;
    CurrentThread->WaitBlockFill4[17] = 4;
    CurrentThread->WaitBlock[0].WaitKey = 0;
    CurrentThread->WaitBlock[0].Object = Object;
    if ( _interlockedbittestandset((volatile signed __int32 *)Object, 7u) )
    {
      do
      {
        if ( (++v15 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v15, v16, v13);
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
      v16 = &CurrentThread->320;
      v13 = 0LL;
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
      goto LABEL_88;
    }
LABEL_46:
    if ( v43 == 2 )
    {
      v20 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( !v43 )
        goto LABEL_52;
      if ( !Timeout )
        goto LABEL_82;
      v20 = MEMORY[0xFFFFF78000000014];
    }
    if ( v20 > (unsigned __int64)Timeout )
    {
LABEL_82:
      LODWORD(WaitStatus) = 258;
      goto LABEL_88;
    }
LABEL_52:
    v21 = (PVOID *)*((_QWORD *)Object + 2);
    v16->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    v16->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v21;
    if ( *v21 != (char *)Object + 8 )
      __fastfail(3u);
    *v21 = v16;
    *((_QWORD *)Object + 2) = v16;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(CurrentThread, v16, v43, Timeout);
    if ( result != 256 )
      return result;
    v42 = 0;
    v23 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v23;
  }
  if ( *((int *)Object + 1) <= 0
    && (CurrentThread != *((struct _KTHREAD **)Object + 5) || *((_BYTE *)Object + 2) != CurrentPrcb->DpcRoutineActive) )
  {
    goto LABEL_46;
  }
  v18 = *((_DWORD *)Object + 1);
  if ( v18 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    KiFastExitThreadWait((__int64)CurrentPrcb, (__int64)CurrentThread, v42);
    RtlRaiseStatus(-1073741423);
  }
  v19 = v18 - 1;
  *((_DWORD *)Object + 1) = v19;
  if ( !v19 )
  {
    CurrentThread->WaitStatus = 0LL;
    v34 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v34, (__int64)v16, v13);
      while ( CurrentThread->ThreadLock );
    }
    CurrentThread->KernelApcDisable -= *((unsigned __int8 *)Object + 49);
    if ( CurrentPrcb->CurrentThread == CurrentThread )
      DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
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
    v26 = (struct _LIST_ENTRY *)((char *)Object + 24);
    *((_QWORD *)Object + 3) = &CurrentThread->MutantListHead;
    *((_QWORD *)Object + 4) = Blink;
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    Blink->Flink = v26;
    CurrentThread->MutantListHead.Blink = v26;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    v27 = 0LL;
    CurrentThread->ThreadLock = 0LL;
    WaitStatus = CurrentThread->WaitStatus;
    v28 = CurrentThread->WaitIrql;
    v29.Flags = (unsigned __int8)CurrentThread->WaitRegister;
    if ( (v29.Flags & 0x38) != 0 )
    {
      if ( (v29.Flags & 0x18) != 0 )
      {
        if ( (v29.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
        v37 = 0LL;
        v36 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
            KeYieldProcessorEx(&v36, (__int64)Blink, v27);
          while ( CurrentPrcb->PrcbLock );
        }
        if ( !CurrentPrcb->NextThread )
          KiSelectNextThread((__int64)CurrentPrcb, &v37);
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v37, v28);
        return WaitStatus;
      }
LABEL_78:
      KiCheckForThreadDispatch((__int64)CurrentPrcb, 1u);
      KiDeliverApc(0LL, 0LL, 0LL);
      __writecr8(0LL);
      return WaitStatus;
    }
    if ( !v42 )
    {
LABEL_80:
      __writecr8(v28);
      return WaitStatus;
    }
LABEL_81:
    KiCheckForThreadDispatch((__int64)CurrentPrcb, v28);
    return WaitStatus;
  }
LABEL_88:
  _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  _InterlockedOr(v31, 0);
  if ( CurrentThread->ThreadLock )
  {
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
        KeYieldProcessorEx(&v32, (__int64)v16, v13);
      while ( CurrentThread->ThreadLock );
    }
    v13 = 0LL;
    CurrentThread->ThreadLock = 0LL;
  }
  v28 = CurrentThread->WaitIrql;
  v30.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v30.Flags & 0x38) == 0 )
  {
    if ( !v42 )
      goto LABEL_80;
    goto LABEL_81;
  }
  if ( (v30.Flags & 0x18) == 0 )
    goto LABEL_78;
  if ( (v30.Flags & 8) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
  v38 = 0LL;
  v33 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    do
      KeYieldProcessorEx(&v33, (__int64)v16, v13);
    while ( CurrentPrcb->PrcbLock );
  }
  if ( !CurrentPrcb->NextThread )
    KiSelectNextThread((__int64)CurrentPrcb, &v38);
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  KiProcessDeferredReadyList((__int64)CurrentPrcb, (__int64)&v38, v28);
  return WaitStatus;
}
