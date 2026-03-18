/*
 * XREFs of KeWaitForSingleObject @ 0x14004F100
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140007694 (IopCompleteUnloadOrDelete.c)
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     PopExecuteOnTargetProcessors @ 0x140013958 (PopExecuteOnTargetProcessors.c)
 *     NtTraceEvent @ 0x140016980 (NtTraceEvent.c)
 *     KiExpandKernelStackAndCalloutOnStackSegment @ 0x1400219C0 (KiExpandKernelStackAndCalloutOnStackSegment.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x140025AE4 (LdrUnloadAlternateResourceModuleEx.c)
 *     PnpDeviceCompletionQueueRemoveCompletedRequest @ 0x140026EF0 (PnpDeviceCompletionQueueRemoveCompletedRequest.c)
 *     PopFxActivateDevice @ 0x140026F98 (PopFxActivateDevice.c)
 *     PopFxActivateComponent @ 0x1400276B4 (PopFxActivateComponent.c)
 *     LdrpGetAlternateResourceModuleHandleEx @ 0x140029F54 (LdrpGetAlternateResourceModuleHandleEx.c)
 *     LdrpGetFromMUIMemCache @ 0x14002A698 (LdrpGetFromMUIMemCache.c)
 *     CcWriteBehind @ 0x1400326B0 (CcWriteBehind.c)
 *     CcInitializeCacheMap @ 0x140040D10 (CcInitializeCacheMap.c)
 *     AlpcpSignalAndWait @ 0x140044130 (AlpcpSignalAndWait.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     WmipReceiveNotifications @ 0x140074DAC (WmipReceiveNotifications.c)
 *     CmpFileReadEx @ 0x140075564 (CmpFileReadEx.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 *     WmipFindRegEntryByProviderId @ 0x1400CF03C (WmipFindRegEntryByProviderId.c)
 *     CcSetValidData @ 0x1400CF694 (CcSetValidData.c)
 *     ExTimedWaitForUnblockPushLock @ 0x1400D2BD0 (ExTimedWaitForUnblockPushLock.c)
 *     ExpUnblockPushLock @ 0x1400D2C68 (ExpUnblockPushLock.c)
 *     ExfWaitForRundownProtectionRelease @ 0x1400D4A70 (ExfWaitForRundownProtectionRelease.c)
 *     FsRtlpWaitForIoAtEof @ 0x1400D5A80 (FsRtlpWaitForIoAtEof.c)
 *     ?SmStWorkerThreadStartThread@?$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z @ 0x1400D9494 (-SmStWorkerThreadStartThread@-$SMKM_STORE@USM_TRAITS@@@@SAJPEAU1@P6AXPEAX@ZPEAPEAU_ETHREAD@@@Z.c)
 *     ?SmStCleanup@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z @ 0x1400DA708 (-SmStCleanup@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAU1@@Z.c)
 *     SmKmStoreHelperCleanup @ 0x1400DA9CC (SmKmStoreHelperCleanup.c)
 *     SmKmStoreHelperWorker @ 0x1400DACBC (SmKmStoreHelperWorker.c)
 *     CcCanIWrite @ 0x1400E4880 (CcCanIWrite.c)
 *     PpmCheckPeriodicStart @ 0x1400E7140 (PpmCheckPeriodicStart.c)
 *     PpmAcquireLock @ 0x1400ED5A0 (PpmAcquireLock.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExWaitForRundownProtectionReleaseCacheAware @ 0x14010CE20 (ExWaitForRundownProtectionReleaseCacheAware.c)
 *     MiZeroPageWrite @ 0x140112300 (MiZeroPageWrite.c)
 *     MiIssueSynchronousFlush @ 0x140112590 (MiIssueSynchronousFlush.c)
 *     WmipBuildTraceDeviceList @ 0x14011A6D4 (WmipBuildTraceDeviceList.c)
 *     CcAsyncReadWorker @ 0x14011D044 (CcAsyncReadWorker.c)
 *     CcWaitForUninitializeCacheMap @ 0x140122008 (CcWaitForUninitializeCacheMap.c)
 *     WmipDeregisterRegEntry @ 0x14012785C (WmipDeregisterRegEntry.c)
 *     WmipFindRegEntryByDevice @ 0x140127AA4 (WmipFindRegEntryByDevice.c)
 *     IoSynchronousCallDriver @ 0x140127F70 (IoSynchronousCallDriver.c)
 *     HvlpEnterIumSecureMode @ 0x1401289D4 (HvlpEnterIumSecureMode.c)
 *     ExUnregisterCallback @ 0x14013169C (ExUnregisterCallback.c)
 *     CcWaitForCurrentLazyWriterActivity @ 0x140133BA4 (CcWaitForCurrentLazyWriterActivity.c)
 *     PopPepUpdateConstraints @ 0x140136D3C (PopPepUpdateConstraints.c)
 *     HalExamineMBR @ 0x1401389D8 (HalExamineMBR.c)
 *     PpmTryAcquireLock @ 0x1401395AC (PpmTryAcquireLock.c)
 *     FsRtlGetVirtualDiskNestingLevel @ 0x140139A14 (FsRtlGetVirtualDiskNestingLevel.c)
 *     ?SmFeAddInitiate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTEXT@1@K@Z @ 0x14013E5E4 (-SmFeAddInitiate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAT_SM_PAGE_KEY@@KKPEAU_SM_QUEUE_CONTE.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140147A68 (SmKmStoreHelperWaitForCommand.c)
 *     PopRunMaximumIrpWorkers @ 0x140147CEC (PopRunMaximumIrpWorkers.c)
 *     PopHaltDeviceIdle @ 0x140147EFC (PopHaltDeviceIdle.c)
 *     PopCheckPowerSourceAfterRtcWakeCancel @ 0x140147F78 (PopCheckPowerSourceAfterRtcWakeCancel.c)
 *     PopIgnoreBatteryStatusChange @ 0x140147FB0 (PopIgnoreBatteryStatusChange.c)
 *     PopTimeoutWakeTracking @ 0x1401490D0 (PopTimeoutWakeTracking.c)
 *     WmiQueryTraceProviderCount @ 0x14014F95C (WmiQueryTraceProviderCount.c)
 *     PopIrpWorker @ 0x140156584 (PopIrpWorker.c)
 *     PnpLockDeviceActionQueue @ 0x1401570B4 (PnpLockDeviceActionQueue.c)
 *     WmipAllocRegEntry @ 0x140157134 (WmipAllocRegEntry.c)
 *     PnpDeviceCompletionQueueGetCompletedRequest @ 0x140158D00 (PnpDeviceCompletionQueueGetCompletedRequest.c)
 *     MiQueueWorkingSetRequest @ 0x14015A008 (MiQueueWorkingSetRequest.c)
 *     KeSwapProcessOrStack @ 0x140164CD4 (KeSwapProcessOrStack.c)
 *     CmpLazyWriteWorker @ 0x140168DC8 (CmpLazyWriteWorker.c)
 *     MiModifiedPageWriter @ 0x140169194 (MiModifiedPageWriter.c)
 *     WheapAddErrorSource @ 0x14016B998 (WheapAddErrorSource.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x14016D60C (LdrpSetAlternateResourceModuleHandle.c)
 *     FsRtlpWaitOnIrp @ 0x14016E528 (FsRtlpWaitOnIrp.c)
 *     PopIrpWorkerControl @ 0x14016ECA8 (PopIrpWorkerControl.c)
 *     PnpSerializeBoot @ 0x14016FE6C (PnpSerializeBoot.c)
 *     MiStoreEvictThread @ 0x140170980 (MiStoreEvictThread.c)
 *     FsFilterAllocateCompletionStack @ 0x1401E3824 (FsFilterAllocateCompletionStack.c)
 *     FsRtlpPostStackOverflow @ 0x1401E46B4 (FsRtlpPostStackOverflow.c)
 *     xHalGetPartialGeometry @ 0x1401E48AC (xHalGetPartialGeometry.c)
 *     IopAllocateBackpocketIrp @ 0x1401F1960 (IopAllocateBackpocketIrp.c)
 *     IopAllocateReserveIrp @ 0x1401F1C40 (IopAllocateReserveIrp.c)
 *     IopRunIoQosWorkItem @ 0x1401F9438 (IopRunIoQosWorkItem.c)
 *     IoReleaseRemoveLockAndWaitEx @ 0x1401FA0BC (IoReleaseRemoveLockAndWaitEx.c)
 *     PnpLockMountableDevice @ 0x1401FB32C (PnpLockMountableDevice.c)
 *     PnpProcessRebalance @ 0x1401FBA84 (PnpProcessRebalance.c)
 *     PnprQuiesce @ 0x1401FCC54 (PnprQuiesce.c)
 *     KiConnectSecondaryInterrupt @ 0x140203414 (KiConnectSecondaryInterrupt.c)
 *     KiDisconnectSecondaryInterrupt @ 0x1402035F8 (KiDisconnectSecondaryInterrupt.c)
 *     KiInvokeInterruptServiceRoutine @ 0x140207B64 (KiInvokeInterruptServiceRoutine.c)
 *     KiSignalWaitDisconnectLock @ 0x140207F08 (KiSignalWaitDisconnectLock.c)
 *     KiSynchronizePassiveInterruptExecution @ 0x140207F34 (KiSynchronizePassiveInterruptExecution.c)
 *     KiParkUmsThread @ 0x14020B7B4 (KiParkUmsThread.c)
 *     MiMakeOutswappedPageResident @ 0x14020F4C4 (MiMakeOutswappedPageResident.c)
 *     MiPfCompleteCoalescedIo @ 0x140218FB0 (MiPfCompleteCoalescedIo.c)
 *     MiIssuePageExtendRequest @ 0x140221B0C (MiIssuePageExtendRequest.c)
 *     MiQueueSyncModifiedWriterApc @ 0x140222054 (MiQueueSyncModifiedWriterApc.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140222374 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiContractWsSwapPageFileWorker @ 0x14022C9F8 (MiContractWsSwapPageFileWorker.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140231A58 (MmStoreFlushOutstandingEvictions.c)
 *     NtSignalAndWaitForSingleObject @ 0x1402331B0 (NtSignalAndWaitForSingleObject.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140238164 (PopFxIssueComponentPerfStateChanges.c)
 *     PopWdiTimerWorkerThread @ 0x14023F3F4 (PopWdiTimerWorkerThread.c)
 *     PsSetSiloObjectServerPropertyByPointer @ 0x14024411C (PsSetSiloObjectServerPropertyByPointer.c)
 *     ?SmPerformStoreMaintenance@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_MAINTENANCE_TYPE@@@Z @ 0x140251F38 (-SmPerformStoreMaintenance@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@.c)
 *     SmpFpWaitForResource @ 0x140258E30 (SmpFpWaitForResource.c)
 *     ?SmStoreContentsRundown@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@@Z @ 0x140259768 (-SmStoreContentsRundown@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@@.c)
 *     SmWaitForSyncIo @ 0x140259ECC (SmWaitForSyncIo.c)
 *     EtwpTraceThreadRundownWithStack @ 0x14025FEE8 (EtwpTraceThreadRundownWithStack.c)
 *     ExRegisterBootDevice @ 0x140262824 (ExRegisterBootDevice.c)
 *     ExpWaitForBootDevices @ 0x140262A78 (ExpWaitForBootDevices.c)
 *     WheapProcessWorkQueueItem @ 0x140266DAC (WheapProcessWorkQueueItem.c)
 *     sub_1402685C8 @ 0x1402685C8 (sub_1402685C8.c)
 *     PopBuildDeviceNotifyList @ 0x1403EC3B4 (PopBuildDeviceNotifyList.c)
 *     PopFlushVolumes @ 0x1403ECAA4 (PopFlushVolumes.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     PopWakeDeviceList @ 0x1403EE7E8 (PopWakeDeviceList.c)
 *     PopSleepDeviceList @ 0x1403EE95C (PopSleepDeviceList.c)
 *     PfpScenCtxPrefetchWait @ 0x1403EED74 (PfpScenCtxPrefetchWait.c)
 *     PopCaptureTimeOnProcZero @ 0x1403EF070 (PopCaptureTimeOnProcZero.c)
 *     PopTransitionToSleep @ 0x1403F045C (PopTransitionToSleep.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     PopEndMirroring @ 0x1403F1294 (PopEndMirroring.c)
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403FE590 (IopShutdownBaseFileSystems.c)
 *     PnprInitiateReplaceOperation @ 0x1403FFF60 (PnprInitiateReplaceOperation.c)
 *     PnprQuiesceWorker @ 0x1404012DC (PnprQuiesceWorker.c)
 *     PopGracefulShutdown @ 0x140403318 (PopGracefulShutdown.c)
 *     DbgkpSendErrorMessage @ 0x140408B68 (DbgkpSendErrorMessage.c)
 *     FsRtlQueryCachedVdl @ 0x14040AA88 (FsRtlQueryCachedVdl.c)
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 *     RawQueryFsSizeInfo @ 0x14040C604 (RawQueryFsSizeInfo.c)
 *     sub_14040C7E8 @ 0x14040C7E8 (sub_14040C7E8.c)
 *     IopGetSetObjectId @ 0x14040D278 (IopGetSetObjectId.c)
 *     IoVolumeDeviceToDosName @ 0x14040D36C (IoVolumeDeviceToDosName.c)
 *     PnpQueryInterface @ 0x14040DEB4 (PnpQueryInterface.c)
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     EtwpStopLoggerInstance @ 0x14040F284 (EtwpStopLoggerInstance.c)
 *     PspExitThread @ 0x140422830 (PspExitThread.c)
 *     IopGetFileInformation @ 0x140428218 (IopGetFileInformation.c)
 *     IopQueryXxxInformation @ 0x14042A8D8 (IopQueryXxxInformation.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     EtwpAcquireLoggerContextByLoggerId @ 0x140437A78 (EtwpAcquireLoggerContextByLoggerId.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     CmLoadAppKey @ 0x1404471C4 (CmLoadAppKey.c)
 *     CmpOpenHiveFile @ 0x14044B07C (CmpOpenHiveFile.c)
 *     PspUserThreadStartup @ 0x14044F770 (PspUserThreadStartup.c)
 *     MmAcquireLoadLock @ 0x140452794 (MmAcquireLoadLock.c)
 *     IopSynchronousApiServiceTail @ 0x140457B28 (IopSynchronousApiServiceTail.c)
 *     PnpAllocateResources @ 0x14045C42C (PnpAllocateResources.c)
 *     IopFilterResourceRequirementsCall @ 0x14045D284 (IopFilterResourceRequirementsCall.c)
 *     IopUncacheInterfaceInformation @ 0x14045E660 (IopUncacheInterfaceInformation.c)
 *     PnpStartDeviceNode @ 0x14045E860 (PnpStartDeviceNode.c)
 *     PnpDeviceEventWorker @ 0x14045FC1C (PnpDeviceEventWorker.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     FsRtlGetFileSize @ 0x1404711C4 (FsRtlGetFileSize.c)
 *     AlpcpReceiveSynchronousReply @ 0x14047A190 (AlpcpReceiveSynchronousReply.c)
 *     AlpcpReceiveMessagePort @ 0x14047F3A0 (AlpcpReceiveMessagePort.c)
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     NtWaitForSingleObject @ 0x140494560 (NtWaitForSingleObject.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     IopCancelIrpsInThreadList @ 0x1404A8064 (IopCancelIrpsInThreadList.c)
 *     WmipOpenBlock @ 0x1404A9494 (WmipOpenBlock.c)
 *     WmipDisableCollectionForRemovedGuid @ 0x1404A9688 (WmipDisableCollectionForRemovedGuid.c)
 *     WmipProcessEvent @ 0x1404A9A7C (WmipProcessEvent.c)
 *     WmipSendEnableDisableRequest @ 0x1404A9BE0 (WmipSendEnableDisableRequest.c)
 *     WmipFindGEByGuid @ 0x1404A9D94 (WmipFindGEByGuid.c)
 *     WmipPrepareForWnodeAD @ 0x1404A9E74 (WmipPrepareForWnodeAD.c)
 *     WmipEnableCollectOrEvent @ 0x1404AB4A8 (WmipEnableCollectOrEvent.c)
 *     WmipIsQuerySetGuid @ 0x1404AB7C8 (WmipIsQuerySetGuid.c)
 *     WmipEnumerateMofResources @ 0x1404AC0B4 (WmipEnumerateMofResources.c)
 *     CmpGetVolumeClusterSize @ 0x1404AE73C (CmpGetVolumeClusterSize.c)
 *     FsRtlSetFileSize @ 0x1404B1144 (FsRtlSetFileSize.c)
 *     MmCleanProcessAddressSpace @ 0x1404B2FA4 (MmCleanProcessAddressSpace.c)
 *     IopSynchronousServiceTail @ 0x1404BDDC0 (IopSynchronousServiceTail.c)
 *     CmpParseKey @ 0x1404BEE10 (CmpParseKey.c)
 *     EtwpRegisterUMGuid @ 0x1404CDCF0 (EtwpRegisterUMGuid.c)
 *     EtwpDeleteRegistrationObject @ 0x1404CDFEC (EtwpDeleteRegistrationObject.c)
 *     EtwpAddRegEntryToGroup @ 0x1404D1618 (EtwpAddRegEntryToGroup.c)
 *     EtwpClearSessionAndUnreferenceEntry @ 0x1404D196C (EtwpClearSessionAndUnreferenceEntry.c)
 *     WmipUnreferenceEntry @ 0x1404D2094 (WmipUnreferenceEntry.c)
 *     WmipForwardWmiIrp @ 0x1404D215C (WmipForwardWmiIrp.c)
 *     EtwpAcquireLoggerContextByLoggerName @ 0x1404D41A4 (EtwpAcquireLoggerContextByLoggerName.c)
 *     IopSynchronousCall @ 0x1404D457C (IopSynchronousCall.c)
 *     EtwpEnableGuid @ 0x1404D4AD0 (EtwpEnableGuid.c)
 *     CmpFileFlushAndPurge @ 0x1404D6564 (CmpFileFlushAndPurge.c)
 *     EtwpStartLogger @ 0x1404D66D0 (EtwpStartLogger.c)
 *     EtwpNotifyGuid @ 0x1404D8804 (EtwpNotifyGuid.c)
 *     PiDrvDbLoadNode @ 0x1404DE2D8 (PiDrvDbLoadNode.c)
 *     PiControlGetSetDeviceStatus @ 0x1404E1D68 (PiControlGetSetDeviceStatus.c)
 *     NtPowerInformation @ 0x1404E7B24 (NtPowerInformation.c)
 *     RtlDecompressFragmentLZNT1 @ 0x1404F59F8 (RtlDecompressFragmentLZNT1.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404FB194 (EtwpCrimsonProvEnableCallback.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     FsRtlCancellableWaitForMultipleObjects @ 0x14051F530 (FsRtlCancellableWaitForMultipleObjects.c)
 *     AlpcpWaitForPortReferences @ 0x14051FDBC (AlpcpWaitForPortReferences.c)
 *     EtwpFreeSystemLoggerIndex @ 0x14052489C (EtwpFreeSystemLoggerIndex.c)
 *     FsRtlQueryKernelEaFile @ 0x140530A5C (FsRtlQueryKernelEaFile.c)
 *     AlpcpCompleteDeferSignalRequestAndWait @ 0x14053250C (AlpcpCompleteDeferSignalRequestAndWait.c)
 *     WmipSendWmiIrpToTraceDeviceList @ 0x1405333A4 (WmipSendWmiIrpToTraceDeviceList.c)
 *     PopFxUnregisterDeviceOrWait @ 0x140538690 (PopFxUnregisterDeviceOrWait.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     NtGetMUIRegistryInfo @ 0x14053A748 (NtGetMUIRegistryInfo.c)
 *     NtMapCMFModule @ 0x14053AB00 (NtMapCMFModule.c)
 *     EtwpGetTraceGuidInfo @ 0x14053DADC (EtwpGetTraceGuidInfo.c)
 *     IopAcquireFileObjectLock @ 0x140540A5C (IopAcquireFileObjectLock.c)
 *     FsRtlKernelFsControlFile @ 0x140541F58 (FsRtlKernelFsControlFile.c)
 *     IoWMIRegistrationControl @ 0x140545FA0 (IoWMIRegistrationControl.c)
 *     WmipDeregisterDevice @ 0x140546074 (WmipDeregisterDevice.c)
 *     EtwpUpdateKernelGroupMasks @ 0x14054A8A8 (EtwpUpdateKernelGroupMasks.c)
 *     EtwpRegisterProvider @ 0x14054C6A8 (EtwpRegisterProvider.c)
 *     EtwpSynchronizeWithLogger @ 0x14054D790 (EtwpSynchronizeWithLogger.c)
 *     EtwpGetTraceGroupInfo @ 0x14054EAA8 (EtwpGetTraceGroupInfo.c)
 *     EtwpUpdateDisallowList @ 0x1405513E4 (EtwpUpdateDisallowList.c)
 *     NtWaitForKeyedEvent @ 0x1405534A0 (NtWaitForKeyedEvent.c)
 *     NtReleaseKeyedEvent @ 0x140553680 (NtReleaseKeyedEvent.c)
 *     FsRtlSetKernelEaFile @ 0x140554078 (FsRtlSetKernelEaFile.c)
 *     WmipDSCleanup @ 0x14055653C (WmipDSCleanup.c)
 *     WmipDeleteMethod @ 0x140556C0C (WmipDeleteMethod.c)
 *     WmipDisableCollectOrEvent @ 0x140556CFC (WmipDisableCollectOrEvent.c)
 *     EtwpTrackProviderBinary @ 0x140558080 (EtwpTrackProviderBinary.c)
 *     EtwUnregister @ 0x140558318 (EtwUnregister.c)
 *     NtNotifyChangeSession @ 0x140559524 (NtNotifyChangeSession.c)
 *     EtwpStartTrace @ 0x140559FF0 (EtwpStartTrace.c)
 *     WmipLegacyEtwWorker @ 0x14055AC9C (WmipLegacyEtwWorker.c)
 *     IoSetInformation @ 0x14055B32C (IoSetInformation.c)
 *     WmipQueryGuidInfo @ 0x14055B92C (WmipQueryGuidInfo.c)
 *     EtwpGetDisallowList @ 0x14055CFB0 (EtwpGetDisallowList.c)
 *     MiInSwapStore @ 0x14055D380 (MiInSwapStore.c)
 *     IoReportTargetDeviceChange @ 0x14055F648 (IoReportTargetDeviceChange.c)
 *     IoSetPartitionInformation @ 0x14055FBF8 (IoSetPartitionInformation.c)
 *     PoUnregisterPowerSettingCallback @ 0x14055FEC4 (PoUnregisterPowerSettingCallback.c)
 *     RtlDecompressBufferLZNT1 @ 0x1405607F0 (RtlDecompressBufferLZNT1.c)
 *     IoVolumeDeviceToGuidPath @ 0x14056254C (IoVolumeDeviceToGuidPath.c)
 *     IoReadPartitionTable @ 0x140562AE0 (IoReadPartitionTable.c)
 *     HalpGetFullGeometry @ 0x1405630A4 (HalpGetFullGeometry.c)
 *     FstubReadSectors @ 0x140563264 (FstubReadSectors.c)
 *     FstubGetDiskGeometry @ 0x1405633DC (FstubGetDiskGeometry.c)
 *     FsRtlIssueDeviceIoControl @ 0x140563D0C (FsRtlIssueDeviceIoControl.c)
 *     FsRtlBalanceReads @ 0x1405645F4 (FsRtlBalanceReads.c)
 *     PopAcquireTransitionLock @ 0x1405649F8 (PopAcquireTransitionLock.c)
 *     ExSwapinWorkerThreads @ 0x140564D10 (ExSwapinWorkerThreads.c)
 *     PopResizeHiberFile @ 0x140564F6C (PopResizeHiberFile.c)
 *     NtInitiatePowerAction @ 0x140565308 (NtInitiatePowerAction.c)
 *     PopInitSystemSleeperThread @ 0x140565D38 (PopInitSystemSleeperThread.c)
 *     EmPowerPagingEnabled @ 0x140566A18 (EmPowerPagingEnabled.c)
 *     PopGetWakeSource @ 0x1405677BC (PopGetWakeSource.c)
 *     IoDisconnectInterrupt @ 0x1405682D8 (IoDisconnectInterrupt.c)
 *     ObWaitForSingleObject @ 0x140569658 (ObWaitForSingleObject.c)
 *     PnpSynchronizeDeviceEventQueue @ 0x140569AC0 (PnpSynchronizeDeviceEventQueue.c)
 *     PopBatteryWorker @ 0x14056B280 (PopBatteryWorker.c)
 *     PopSanityCheckHiberFile @ 0x14056C0AC (PopSanityCheckHiberFile.c)
 *     PopUmpoSendLegacyEvent @ 0x14056C170 (PopUmpoSendLegacyEvent.c)
 *     PopClearHiberFileSignature @ 0x14056C368 (PopClearHiberFileSignature.c)
 *     NtLoadDriver @ 0x14057157C (NtLoadDriver.c)
 *     WmipPrepareWnodeSI @ 0x14057AFF4 (WmipPrepareWnodeSI.c)
 *     WmipAddDataSource @ 0x14057B770 (WmipAddDataSource.c)
 *     WmipDetermineInstanceBaseIndex @ 0x14057BD98 (WmipDetermineInstanceBaseIndex.c)
 *     WmipFindISinGEbyName @ 0x14057BF4C (WmipFindISinGEbyName.c)
 *     IopDestroyActiveConnectBlock @ 0x14057D290 (IopDestroyActiveConnectBlock.c)
 *     IopAcquireReleaseConnectLockInternal @ 0x14057D4A0 (IopAcquireReleaseConnectLockInternal.c)
 *     WmipEnableCollectionForNewGuid @ 0x14057D87C (WmipEnableCollectionForNewGuid.c)
 *     WmipRegistrationWorker @ 0x14057E3C4 (WmipRegistrationWorker.c)
 *     WmipRegisterDevice @ 0x14057E4D8 (WmipRegisterDevice.c)
 *     WmipQueueRegWork @ 0x14057E640 (WmipQueueRegWork.c)
 *     WmipUpdateDeviceStackSize @ 0x14057E710 (WmipUpdateDeviceStackSize.c)
 *     WmipGetGuidObjectInstanceInfo @ 0x140582C64 (WmipGetGuidObjectInstanceInfo.c)
 *     FsRtlIssueFileNotificationFsctl @ 0x140583464 (FsRtlIssueFileNotificationFsctl.c)
 *     PnpQueueQueryAndRemoveEvent @ 0x14058AA90 (PnpQueueQueryAndRemoveEvent.c)
 *     PiQueueDeviceRequest @ 0x14058AF74 (PiQueueDeviceRequest.c)
 *     PiIrpQueryRemoveDevice @ 0x14058DA8C (PiIrpQueryRemoveDevice.c)
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 *     IopCancelAlertedRequest @ 0x14058EC70 (IopCancelAlertedRequest.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     PnpWaitForEmptyDeviceEventQueue @ 0x14058FA20 (PnpWaitForEmptyDeviceEventQueue.c)
 *     PnpWaitForEmptyDeviceActionQueue @ 0x14058FA44 (PnpWaitForEmptyDeviceActionQueue.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14058FA68 (IoRegisterFsRegistrationChangeMountAware.c)
 *     WmipAddMofResource @ 0x1405905DC (WmipAddMofResource.c)
 *     WmipFindMRByNames @ 0x140590814 (WmipFindMRByNames.c)
 *     PsStartMonitorServerSilo @ 0x14059391C (PsStartMonitorServerSilo.c)
 *     CmpLoadHiveThread @ 0x140598084 (CmpLoadHiveThread.c)
 *     IopAllocateBootResources @ 0x14059C808 (IopAllocateBootResources.c)
 *     ArbArbiterHandler @ 0x14059E62C (ArbArbiterHandler.c)
 *     ArbBuildAssignmentOrdering @ 0x14059E96C (ArbBuildAssignmentOrdering.c)
 *     CmpFinishSystemHivesLoad @ 0x1405A3A54 (CmpFinishSystemHivesLoad.c)
 *     SepRmCommandServerThread @ 0x1405A7600 (SepRmCommandServerThread.c)
 *     MiZeroPageFileFirstPage @ 0x1405B5120 (MiZeroPageFileFirstPage.c)
 *     CmpWaitForHiveMount @ 0x1405B5F44 (CmpWaitForHiveMount.c)
 *     IopInsertLegacyBusDeviceNode @ 0x1405B8508 (IopInsertLegacyBusDeviceNode.c)
 *     WmipSetTraceNotify @ 0x1405BAA3C (WmipSetTraceNotify.c)
 *     FsRtlpRegisterUncProvider @ 0x1405BB718 (FsRtlpRegisterUncProvider.c)
 *     WmipProcessLegacyEtwRegister @ 0x1405BBEFC (WmipProcessLegacyEtwRegister.c)
 *     PoInitHiberServices @ 0x1405BD528 (PoInitHiberServices.c)
 *     PiPagePathSetState @ 0x1405C0A08 (PiPagePathSetState.c)
 *     IoWMISetNotificationCallback @ 0x1405C1250 (IoWMISetNotificationCallback.c)
 *     WheapEtwEnableCallback @ 0x1405C161C (WheapEtwEnableCallback.c)
 *     FsRtlWaitForSmssEvent @ 0x1405C2C10 (FsRtlWaitForSmssEvent.c)
 *     PopNotifyPolicyDevice @ 0x1405C3158 (PopNotifyPolicyDevice.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 *     WmipLegacyEtwCallback @ 0x1405C5E44 (WmipLegacyEtwCallback.c)
 *     CmpWaitOnHiveWriteQueue @ 0x14065A514 (CmpWaitOnHiveWriteQueue.c)
 *     CmpTouchFile @ 0x14065BDA0 (CmpTouchFile.c)
 *     DbgkpQueueMessage @ 0x140667B2C (DbgkpQueueMessage.c)
 *     NtWaitForDebugEvent @ 0x140668D6C (NtWaitForDebugEvent.c)
 *     DbgkpLkmdLaunchSnapApc @ 0x140669E08 (DbgkpLkmdLaunchSnapApc.c)
 *     FsRtlDeregisterUncProvider @ 0x14066D010 (FsRtlDeregisterUncProvider.c)
 *     FsRtlQueryInformationFile @ 0x14066D780 (FsRtlQueryInformationFile.c)
 *     IoWritePartitionTable @ 0x14066ED20 (IoWritePartitionTable.c)
 *     FstubWriteSector @ 0x140670158 (FstubWriteSector.c)
 *     IopGetVolumeId @ 0x140671774 (IopGetVolumeId.c)
 *     IopHardErrorThread @ 0x1406718A8 (IopHardErrorThread.c)
 *     IopInvalidateVolumesForDevice @ 0x140671B84 (IopInvalidateVolumesForDevice.c)
 *     IopLoadFileSystemDriver @ 0x140672054 (IopLoadFileSystemDriver.c)
 *     IopSendMessageToTrackService @ 0x1406725FC (IopSendMessageToTrackService.c)
 *     IopSetRemoteLink @ 0x140673358 (IopSetRemoteLink.c)
 *     IoCancelFileOpen @ 0x140673C54 (IoCancelFileOpen.c)
 *     IoVerifyVolume @ 0x140674678 (IoVerifyVolume.c)
 *     IopIssueSystemEnvironmentRequest @ 0x140679794 (IopIssueSystemEnvironmentRequest.c)
 *     IopFreeBandwidthContract @ 0x140679EEC (IopFreeBandwidthContract.c)
 *     PnpShutdownDevices @ 0x14067A594 (PnpShutdownDevices.c)
 *     IoReplacePartitionUnit @ 0x14067AA18 (IoReplacePartitionUnit.c)
 *     IoSynchronousInvalidateDeviceRelations @ 0x14067AE38 (IoSynchronousInvalidateDeviceRelations.c)
 *     PnpRequestHwProfileChangeNotification @ 0x14067CC00 (PnpRequestHwProfileChangeNotification.c)
 *     IopAcquireReleaseDispatcherLock @ 0x14067DAB4 (IopAcquireReleaseDispatcherLock.c)
 *     IopLegacyResourceAllocation @ 0x14067F1F4 (IopLegacyResourceAllocation.c)
 *     PpProfileBeginHardwareProfileTransition @ 0x14068D984 (PpProfileBeginHardwareProfileTransition.c)
 *     PnpReplacePartitionUnit @ 0x14068E9D4 (PnpReplacePartitionUnit.c)
 *     PnpReallocateResources @ 0x140695AF8 (PnpReallocateResources.c)
 *     IopWarmEjectDevice @ 0x140696190 (IopWarmEjectDevice.c)
 *     IopQueryConflictList @ 0x1406979A0 (IopQueryConflictList.c)
 *     PopCoolingExtensionPnpNotification @ 0x1406B2064 (PopCoolingExtensionPnpNotification.c)
 *     PopDeactiveThermalRequest @ 0x1406B23F8 (PopDeactiveThermalRequest.c)
 *     PopFxUnregisterDevice @ 0x1406B4870 (PopFxUnregisterDevice.c)
 *     PopSetSystemAwayMode @ 0x1406B602C (PopSetSystemAwayMode.c)
 *     PopBatteryRemove @ 0x1406B6CA8 (PopBatteryRemove.c)
 *     PopPepUnregisterDevice @ 0x1406B72FC (PopPepUnregisterDevice.c)
 *     PopThermalZoneRemove @ 0x1406B8088 (PopThermalZoneRemove.c)
 *     PopDiagNextSleepStudySession @ 0x1406B8720 (PopDiagNextSleepStudySession.c)
 *     PopFanRemove @ 0x1406BB090 (PopFanRemove.c)
 *     PsUnregisterMonitorServerSilo @ 0x1406C16A8 (PsUnregisterMonitorServerSilo.c)
 *     PspTerminateServerSiloDeferred @ 0x1406C2DDC (PspTerminateServerSiloDeferred.c)
 *     PsWaitForAllProcesses @ 0x1406C3C40 (PsWaitForAllProcesses.c)
 *     PspWaitForUsermodeExit @ 0x1406C3EC4 (PspWaitForUsermodeExit.c)
 *     RawQueryFileSystemInformation @ 0x1406C6C80 (RawQueryFileSystemInformation.c)
 *     RawPerformDevIoCtrl @ 0x1406C6E80 (RawPerformDevIoCtrl.c)
 *     RtlpRunOnceWaitForInit @ 0x1406CF988 (RtlpRunOnceWaitForInit.c)
 *     SmProcessResizeRequest @ 0x1406D9C08 (SmProcessResizeRequest.c)
 *     SmProcessStatsRequest @ 0x1406D9CFC (SmProcessStatsRequest.c)
 *     SmStoreCompressionStop @ 0x1406D9FF0 (SmStoreCompressionStop.c)
 *     SmStorePhysicalRequestIssue @ 0x1406DA294 (SmStorePhysicalRequestIssue.c)
 *     SmKmIsVolumeIoPossible @ 0x1406DCC20 (SmKmIsVolumeIoPossible.c)
 *     SmKmSendDeviceControl @ 0x1406DD5A4 (SmKmSendDeviceControl.c)
 *     SmKmSendUsageNotification @ 0x1406DD654 (SmKmSendUsageNotification.c)
 *     SmKmStoreFileCreate @ 0x1406DD710 (SmKmStoreFileCreate.c)
 *     SmKmStoreFileDelete @ 0x1406DDE04 (SmKmStoreFileDelete.c)
 *     SmKmStoreFileGetExtents @ 0x1406DDE9C (SmKmStoreFileGetExtents.c)
 *     SmKmStoreFileWriteHeader @ 0x1406DE4F8 (SmKmStoreFileWriteHeader.c)
 *     IoWMIAllocateInstanceIds @ 0x1406DFC88 (IoWMIAllocateInstanceIds.c)
 *     WmipDereferenceEvent @ 0x1406E0434 (WmipDereferenceEvent.c)
 *     WmipEnumerateGuids @ 0x1406E0654 (WmipEnumerateGuids.c)
 *     WmipIncludeStaticNames @ 0x1406E07DC (WmipIncludeStaticNames.c)
 *     WmipGetSysIds @ 0x1406E18D4 (WmipGetSysIds.c)
 *     WmipUpdateDataSource @ 0x1406E1F18 (WmipUpdateDataSource.c)
 *     WmipWaitForCollectionEnabled @ 0x1406E247C (WmipWaitForCollectionEnabled.c)
 *     EtwpEnableDisableUMGL @ 0x1406E26D4 (EtwpEnableDisableUMGL.c)
 *     EtwpSetPmcProfileSource @ 0x1406E51EC (EtwpSetPmcProfileSource.c)
 *     EtwSetPerformanceTraceInformation @ 0x1406E6024 (EtwSetPerformanceTraceInformation.c)
 *     EtwDereferenceSpinLockCounters @ 0x1406E7E10 (EtwDereferenceSpinLockCounters.c)
 *     EtwReferenceSpinLockCounters @ 0x1406E7E60 (EtwReferenceSpinLockCounters.c)
 *     EtwpSampledProfileRunDown @ 0x1406E9678 (EtwpSampledProfileRunDown.c)
 *     NtStartProfile @ 0x1406FA0A8 (NtStartProfile.c)
 *     NtStopProfile @ 0x1406FA30C (NtStopProfile.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1406FC5FC (WheaAttemptPhysicalPageOffline.c)
 *     VhdiVerifyBootDisk @ 0x14071EF58 (VhdiVerifyBootDisk.c)
 *     VfDriverLock @ 0x1407326C0 (VfDriverLock.c)
 *     IovpUnloadDriver @ 0x140735BD8 (IovpUnloadDriver.c)
 *     VfIrpSendSynchronousIrp @ 0x14074169C (VfIrpSendSynchronousIrp.c)
 *     ViPendingCompleteAfterWait @ 0x140742978 (ViPendingCompleteAfterWait.c)
 *     ViPendingWorkerThread @ 0x140742D8C (ViPendingWorkerThread.c)
 *     ViPoolDelayFreeTrimThreadRoutine @ 0x14074636C (ViPoolDelayFreeTrimThreadRoutine.c)
 *     VerifierKeWaitForSingleObject @ 0x140749448 (VerifierKeWaitForSingleObject.c)
 *     VerifierKeWaitForSingleObjectNoReboot @ 0x1407495C4 (VerifierKeWaitForSingleObjectNoReboot.c)
 *     ViFilterDispatchPnp @ 0x1407527DC (ViFilterDispatchPnp.c)
 *     AnFwFadeCompletion @ 0x14075DEB4 (AnFwFadeCompletion.c)
 *     IopCreateArcNamesCd @ 0x1407B5E18 (IopCreateArcNamesCd.c)
 *     IopAssignBootDriveLetter @ 0x1407B6270 (IopAssignBootDriveLetter.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 *     VhdiMountVhdFile @ 0x1407FCE1C (VhdiMountVhdFile.c)
 * Callees:
 *     KiCheckForThreadDispatch @ 0x14000DCB4 (KiCheckForThreadDispatch.c)
 *     RtlRaiseStatus @ 0x14001BB3C (RtlRaiseStatus.c)
 *     KiDeliverApc @ 0x140048670 (KiDeliverApc.c)
 *     KiProcessDeferredReadyList @ 0x14009BE20 (KiProcessDeferredReadyList.c)
 *     KiCommitThreadWait @ 0x1400A0220 (KiCommitThreadWait.c)
 *     KiExitThreadWait @ 0x1400A23E0 (KiExitThreadWait.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

NTSTATUS __stdcall KeWaitForSingleObject(
        PVOID Object,
        KWAIT_REASON WaitReason,
        KPROCESSOR_MODE WaitMode,
        BOOLEAN Alertable,
        PLARGE_INTEGER Timeout)
{
  struct _KTHREAD *CurrentThread; // rdi
  unsigned __int8 CurrentIrql; // al
  unsigned int v9; // r14d
  unsigned __int64 v10; // r9
  unsigned __int8 WaitIrql; // si
  unsigned int v12; // ebx
  unsigned __int8 *v13; // rcx
  NTSTATUS v14; // ebx
  volatile __int64 WaitStatus; // rsi
  unsigned int v16; // ebx
  $5F589360F986DA22318BA982CE57118F *v17; // rdx
  struct _KPRCB *CurrentPrcb; // rbp
  int v19; // eax
  int v20; // eax
  unsigned int v21; // ebx
  unsigned __int64 v22; // rcx
  PVOID *v23; // rcx
  NTSTATUS result; // eax
  unsigned __int8 v25; // al
  volatile unsigned __int8 DpcRoutineActive; // cl
  struct _LIST_ENTRY *Blink; // rdx
  struct _LIST_ENTRY *v28; // rcx
  unsigned __int8 v29; // bl
  _KWAIT_STATUS_REGISTER v30; // al
  unsigned int v31; // ebx
  unsigned int v32; // ebx
  _KWAIT_STATUS_REGISTER v33; // al
  signed __int32 v34[8]; // [rsp+0h] [rbp-98h] BYREF
  __int64 v35; // [rsp+20h] [rbp-78h] BYREF
  __int64 v36; // [rsp+28h] [rbp-70h] BYREF
  int v37; // [rsp+30h] [rbp-68h]
  unsigned __int8 v39; // [rsp+A8h] [rbp+10h]
  unsigned __int8 v40; // [rsp+B0h] [rbp+18h]
  unsigned int v41; // [rsp+B8h] [rbp+20h]

  v39 = WaitReason;
  CurrentThread = KeGetCurrentThread();
  v40 = _bittestandreset((signed __int32 *)&CurrentThread->116, 2u);
  if ( !v40 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = CurrentIrql;
  }
  v9 = 0;
  v10 = 0xFFFFF780000003B0uLL;
  if ( Timeout )
  {
    if ( Timeout->HighPart >= 0 )
    {
      Timeout = (PLARGE_INTEGER)Timeout->QuadPart;
      v41 = 1;
    }
    else
    {
      v41 = 2;
      Timeout = (PLARGE_INTEGER)(MEMORY[0xFFFFF78000000008]
                               - MEMORY[0xFFFFF780000003B0]
                               - (Timeout->QuadPart
                                + CurrentThread->RelativeTimerBias));
    }
  }
  else
  {
    v41 = 0;
  }
  while ( 1 )
  {
    WaitIrql = CurrentThread->WaitIrql;
    while ( 1 )
    {
      CurrentThread->MiscFlags &= ~0x10u;
      CurrentThread->WaitRegister.Flags = 0;
      CurrentThread->WaitMode = WaitMode;
      if ( Alertable )
        CurrentThread->MiscFlags |= 0x10u;
      v12 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v12 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v12);
        }
        while ( CurrentThread->ThreadLock );
      }
      if ( !CurrentThread->ApcState.KernelApcPending || CurrentThread->SpecialApcDisable || WaitIrql )
        break;
      CurrentThread->ThreadLock = 0LL;
      __writecr8(1uLL);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(2uLL);
      CurrentThread->WaitIrql = 0;
    }
    if ( Alertable )
    {
      v13 = &CurrentThread->Alerted[WaitMode];
      if ( *v13 )
      {
        *v13 = 0;
        v14 = 257;
        goto LABEL_61;
      }
      if ( WaitMode
        && (unsigned __int8 *)CurrentThread->ApcState.ApcListHead[1].Flink != &CurrentThread->ApcStateFill[16] )
      {
        CurrentThread->ApcState.UserApcPending = 1;
LABEL_60:
        v14 = 192;
LABEL_61:
        CurrentThread->ThreadLock = 0LL;
        KiCheckForThreadDispatch((__int64)KeGetCurrentPrcb(), WaitIrql);
        return v14;
      }
      if ( CurrentThread->Alerted[0] )
      {
        CurrentThread->Alerted[0] = 0;
        v14 = 257;
        goto LABEL_61;
      }
    }
    else if ( (CurrentThread->ApcState.UserApcPending & (unsigned __int8)WaitMode) != 0 )
    {
      goto LABEL_60;
    }
    LODWORD(WaitStatus) = 0;
    CurrentThread->WaitBlockFill6[68] = 5;
    v16 = 0;
    CurrentThread->WaitReason = v39;
    v17 = &CurrentThread->320;
    CurrentThread->ThreadLock = 0LL;
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
        if ( (++v16 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v16);
      }
      while ( (*(_DWORD *)Object & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)Object, 7u) );
      v17 = &CurrentThread->320;
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
      goto LABEL_109;
    }
LABEL_50:
    if ( v41 == 2 )
    {
      v22 = MEMORY[0xFFFFF78000000008] - CurrentThread->RelativeTimerBias - MEMORY[0xFFFFF780000003B0];
    }
    else
    {
      if ( !v41 )
        goto LABEL_56;
      if ( !Timeout )
        goto LABEL_103;
      v22 = MEMORY[0xFFFFF78000000014];
    }
    if ( v22 > (unsigned __int64)Timeout )
    {
LABEL_103:
      LODWORD(WaitStatus) = 258;
      goto LABEL_109;
    }
LABEL_56:
    v23 = (PVOID *)*((_QWORD *)Object + 2);
    v17->WaitBlock[0].WaitListEntry.Flink = (struct _LIST_ENTRY *)((char *)Object + 8);
    v17->WaitBlock[0].WaitListEntry.Blink = (struct _LIST_ENTRY *)v23;
    if ( *v23 != (char *)Object + 8 )
      __fastfail(3u);
    *v23 = v17;
    *((_QWORD *)Object + 2) = v17;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockCount = 1;
    result = KiCommitThreadWait(CurrentThread, v17, v41, Timeout);
    if ( result != 256 )
      return result;
    v40 = 0;
    v25 = KeGetCurrentIrql();
    __writecr8(2uLL);
    CurrentThread->WaitIrql = v25;
  }
  if ( *((int *)Object + 1) <= 0
    && (CurrentThread != *((struct _KTHREAD **)Object + 5) || *((_BYTE *)Object + 2) != CurrentPrcb->DpcRoutineActive) )
  {
    goto LABEL_50;
  }
  v19 = *((_DWORD *)Object + 1);
  if ( v19 == 0x80000000 )
  {
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    _InterlockedOr(v34, 0);
    if ( CurrentThread->ThreadLock )
    {
      v31 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
      {
        do
        {
          if ( (++v31 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v31);
        }
        while ( CurrentThread->ThreadLock );
      }
      CurrentThread->ThreadLock = 0LL;
    }
    KiExitThreadWait(CurrentPrcb, CurrentThread, v40, v10);
    RtlRaiseStatus(-1073741423);
  }
  v20 = v19 - 1;
  *((_DWORD *)Object + 1) = v20;
  if ( !v20 )
  {
    CurrentThread->WaitStatus = 0LL;
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v21);
      }
      while ( CurrentThread->ThreadLock );
    }
    CurrentThread->KernelApcDisable -= *((unsigned __int8 *)Object + 49);
    if ( CurrentPrcb->CurrentThread == CurrentThread )
      DpcRoutineActive = CurrentPrcb->DpcRoutineActive;
    else
      DpcRoutineActive = 0;
    v37 = *(_DWORD *)Object;
    BYTE2(v37) = DpcRoutineActive;
    *(_DWORD *)Object = v37;
    *((_QWORD *)Object + 5) = CurrentThread;
    if ( *((_BYTE *)Object + 48) )
    {
      *((_BYTE *)Object + 48) = 0;
      CurrentThread->WaitStatus |= 0x80uLL;
    }
    Blink = CurrentThread->MutantListHead.Blink;
    v28 = (struct _LIST_ENTRY *)((char *)Object + 24);
    *((_QWORD *)Object + 3) = &CurrentThread->MutantListHead;
    *((_QWORD *)Object + 4) = Blink;
    if ( Blink->Flink != &CurrentThread->MutantListHead )
      __fastfail(3u);
    Blink->Flink = v28;
    CurrentThread->MutantListHead.Blink = v28;
    _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
    CurrentThread->WaitBlockFill6[68] = 2;
    CurrentThread->ThreadLock = 0LL;
    WaitStatus = CurrentThread->WaitStatus;
    v29 = CurrentThread->WaitIrql;
    v30.Flags = (unsigned __int8)CurrentThread->WaitRegister;
    if ( (v30.Flags & 0x38) != 0 )
    {
      if ( (v30.Flags & 0x18) != 0 )
      {
        if ( (v30.Flags & 8) != 0 )
          _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
        v35 = 0LL;
        while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
        {
          do
          {
            if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v9);
          }
          while ( CurrentPrcb->PrcbLock );
        }
        if ( !CurrentPrcb->NextThread )
          KiSelectNextThread(CurrentPrcb, &v35);
        _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
        KiProcessDeferredReadyList(CurrentPrcb, &v35, v29);
        return WaitStatus;
      }
LABEL_89:
      KiCheckForThreadDispatch((__int64)CurrentPrcb, 1u);
      KiDeliverApc(0, 0, 0LL);
      __writecr8(0LL);
      return WaitStatus;
    }
LABEL_90:
    if ( v40 )
      KiCheckForThreadDispatch((__int64)CurrentPrcb, v29);
    else
      __writecr8(v29);
    return WaitStatus;
  }
LABEL_109:
  _InterlockedAnd((volatile signed __int32 *)Object, 0xFFFFFF7F);
  CurrentThread->WaitBlockFill6[68] = 2;
  _InterlockedOr(v34, 0);
  if ( CurrentThread->ThreadLock )
  {
    v32 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentThread->ThreadLock, 0LL) )
    {
      do
      {
        if ( (++v32 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v32);
      }
      while ( CurrentThread->ThreadLock );
    }
    CurrentThread->ThreadLock = 0LL;
  }
  v29 = CurrentThread->WaitIrql;
  v33.Flags = (unsigned __int8)CurrentThread->WaitRegister;
  if ( (v33.Flags & 0x38) == 0 )
    goto LABEL_90;
  if ( (v33.Flags & 0x18) == 0 )
    goto LABEL_89;
  if ( (v33.Flags & 8) != 0 )
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xBu);
  v36 = 0LL;
  while ( _interlockedbittestandset64((volatile signed __int32 *)&CurrentPrcb->PrcbLock, 0LL) )
  {
    do
    {
      if ( (++v9 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v9);
    }
    while ( CurrentPrcb->PrcbLock );
  }
  if ( !CurrentPrcb->NextThread )
    KiSelectNextThread(CurrentPrcb, &v36);
  _InterlockedAnd64((volatile signed __int64 *)&CurrentPrcb->PrcbLock, 0LL);
  KiProcessDeferredReadyList(CurrentPrcb, &v36, v29);
  return WaitStatus;
}
