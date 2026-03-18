/*
 * XREFs of KeResetEvent @ 0x14002E630
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140002C50 (SmKmStoreHelperWorker.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003634 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003E08 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     PnpRequestDeviceAction @ 0x14000794C (PnpRequestDeviceAction.c)
 *     CcUnmapVacbArray @ 0x140017FC0 (CcUnmapVacbArray.c)
 *     MmAccessFault @ 0x14003E7A0 (MmAccessFault.c)
 *     MiFreePagedPoolPages @ 0x14004BBA0 (MiFreePagedPoolPages.c)
 *     MiIssueSynchronousFlush @ 0x1400A1798 (MiIssueSynchronousFlush.c)
 *     PopFxIdleWorker @ 0x1400C178C (PopFxIdleWorker.c)
 *     MiAllocatePagedPoolPages @ 0x1400DE970 (MiAllocatePagedPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x1400E7E98 (MiRetryNonPagedAllocation.c)
 *     MiInsertInSystemSpace @ 0x1400FF2A0 (MiInsertInSystemSpace.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D37C (MiTrimUnusedPageFileRegionsWorker.c)
 *     PnpLockDeviceActionQueue @ 0x140110784 (PnpLockDeviceActionQueue.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14011EDE0 (SmKmStoreHelperWaitForCommand.c)
 *     MiProcessDereferenceList @ 0x14012259C (MiProcessDereferenceList.c)
 *     PopFxAllocatePowerIrp @ 0x14012B440 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x14012C374 (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x14013135C (MiQueueWorkingSetRequest.c)
 *     ExUnregisterCallback @ 0x140131758 (ExUnregisterCallback.c)
 *     MiZeroPageThread @ 0x140139C40 (MiZeroPageThread.c)
 *     MiUpdateAvailableEvents @ 0x14013C7F8 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14013C8B4 (MiSignalNonPagedPoolWatchers.c)
 *     MiOkToZeroNextLargePage @ 0x14013F418 (MiOkToZeroNextLargePage.c)
 *     MiDereferenceSegmentThread @ 0x140141554 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x140142508 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x140142B2C (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x14014341C (MiStoreEvictThread.c)
 *     MiMarkMdlComplete @ 0x1401E8970 (MiMarkMdlComplete.c)
 *     MiWaitForFreePage @ 0x1401F41DC (MiWaitForFreePage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401F4E50 (MmStoreFlushOutstandingEvictions.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140202DBC (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1402074D4 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14020B780 (PopUpdateWatchdogNoWorkersEvent.c)
 *     sub_14023207C @ 0x14023207C (sub_14023207C.c)
 *     PfpScenCtxPrefetchWait @ 0x1403D02EC (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x1403D0BE4 (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x1403D1EAC (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403DA1F0 (IopShutdownBaseFileSystems.c)
 *     IopMountVolume @ 0x1403EC2AC (IopMountVolume.c)
 *     PnpInsertEventInQueue @ 0x1403F0BD4 (PnpInsertEventInQueue.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FB854 (CmpLockRegistryFreezeAware.c)
 *     NtNotifyChangeMultipleKeys @ 0x1404009C4 (NtNotifyChangeMultipleKeys.c)
 *     NtReadFile @ 0x140443620 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140444D30 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x1404463A0 (IopDeleteFile.c)
 *     NtWriteFile @ 0x140446600 (NtWriteFile.c)
 *     NtSetInformationJobObject @ 0x140464BD8 (NtSetInformationJobObject.c)
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 *     EtwpLogger @ 0x14048FBA8 (EtwpLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x140492AB0 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x140493C50 (EtwpStopTrace.c)
 *     NtUnloadKeyEx @ 0x14049A1D4 (NtUnloadKeyEx.c)
 *     CmpLinkHiveToMaster @ 0x1404A10B4 (CmpLinkHiveToMaster.c)
 *     sub_1404A6E00 @ 0x1404A6E00 (sub_1404A6E00.c)
 *     NtClearEvent @ 0x1404BB5B0 (NtClearEvent.c)
 *     NtWriteFileGather @ 0x1404BD44C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404BDB18 (NtReadFileScatter.c)
 *     IopCancelIrpsInThreadList @ 0x1404CC8BC (IopCancelIrpsInThreadList.c)
 *     NtResetEvent @ 0x1404D3C9C (NtResetEvent.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404D51E4 (NtNotifyChangeDirectoryFile.c)
 *     IoSetInformation @ 0x1404E8078 (IoSetInformation.c)
 *     IopQueryXxxInformation @ 0x14050A128 (IopQueryXxxInformation.c)
 *     BuildQueryDirectoryIrp @ 0x14050D480 (BuildQueryDirectoryIrp.c)
 *     MiCreateImageFileMap @ 0x1405229BC (MiCreateImageFileMap.c)
 *     PoUnregisterPowerSettingCallback @ 0x14052DE48 (PoUnregisterPowerSettingCallback.c)
 *     ExSwapinWorkerThreads @ 0x14052ECF0 (ExSwapinWorkerThreads.c)
 *     PfGenerateTrace @ 0x14052FD24 (PfGenerateTrace.c)
 *     PopQueueBatteryStatusTimeout @ 0x140531958 (PopQueueBatteryStatusTimeout.c)
 *     WmipCopyFromEventQueues @ 0x1405439E4 (WmipCopyFromEventQueues.c)
 *     IopCreateArcName @ 0x14054FC84 (IopCreateArcName.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x1405506D0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ArbArbiterHandler @ 0x14055803C (ArbArbiterHandler.c)
 *     PfTLoggingWorker @ 0x14055B15C (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x140571904 (PfTInitialize.c)
 *     NtWaitForDebugEvent @ 0x140619E34 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x14061A210 (DbgkpRemoveErrorPort.c)
 *     IopInvalidateVolumesForDevice @ 0x140621ABC (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x1406224EC (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x14062333C (IoCancelFileOpen.c)
 *     PopSetSystemAwayMode @ 0x14066EAA8 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x14067044C (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x140679FDC (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x140683084 (RawQueryFsSizeInfo.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x1407A51FC (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002ECB0 (KeYieldProcessorEx.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // di
  LONG result; // eax
  int v4; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v4 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v4);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  result = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return result;
}
