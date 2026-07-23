/*
 * XREFs of KeResetEvent @ 0x14002E1B0
 * Callers:
 *     SmKmStoreHelperWorker @ 0x140002DC4 (SmKmStoreHelperWorker.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400037A8 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x140003F7C (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiFreePagedPoolPages @ 0x14004B720 (MiFreePagedPoolPages.c)
 *     PnpRequestDeviceAction @ 0x1400861B8 (PnpRequestDeviceAction.c)
 *     MiIssueSynchronousFlush @ 0x1400A00C0 (MiIssueSynchronousFlush.c)
 *     PopFxIdleWorker @ 0x1400BF61C (PopFxIdleWorker.c)
 *     MiAllocatePagedPoolPages @ 0x1400DC810 (MiAllocatePagedPoolPages.c)
 *     MiRetryNonPagedAllocation @ 0x1400E5D38 (MiRetryNonPagedAllocation.c)
 *     MiInsertInSystemSpace @ 0x1400FD020 (MiInsertInSystemSpace.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x14010D8E0 (MiTrimUnusedPageFileRegionsWorker.c)
 *     PnpLockDeviceActionQueue @ 0x140110CE8 (PnpLockDeviceActionQueue.c)
 *     SmKmStoreHelperWaitForCommand @ 0x14011F350 (SmKmStoreHelperWaitForCommand.c)
 *     MiProcessDereferenceList @ 0x140122B0C (MiProcessDereferenceList.c)
 *     PopFxAllocatePowerIrp @ 0x14012B9B0 (PopFxAllocatePowerIrp.c)
 *     PopPepUpdateConstraints @ 0x14012C8E4 (PopPepUpdateConstraints.c)
 *     MiQueueWorkingSetRequest @ 0x1401318CC (MiQueueWorkingSetRequest.c)
 *     ExUnregisterCallback @ 0x140131CC8 (ExUnregisterCallback.c)
 *     MiZeroPageThread @ 0x14013A1B0 (MiZeroPageThread.c)
 *     MiUpdateAvailableEvents @ 0x14013CD68 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14013CE24 (MiSignalNonPagedPoolWatchers.c)
 *     MiOkToZeroNextLargePage @ 0x14013F988 (MiOkToZeroNextLargePage.c)
 *     MiDereferenceSegmentThread @ 0x140141AC4 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x140142A78 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x14014309C (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x14014398C (MiStoreEvictThread.c)
 *     MiMarkMdlComplete @ 0x1401E879C (MiMarkMdlComplete.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401F4C7C (MmStoreFlushOutstandingEvictions.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140202BE8 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x140207300 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     PopUpdateWatchdogNoWorkersEvent @ 0x14020B5AC (PopUpdateWatchdogNoWorkersEvent.c)
 *     sub_140231EA8 @ 0x140231EA8 (sub_140231EA8.c)
 *     PfpScenCtxPrefetchWait @ 0x1403D02EC (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x1403D0BE4 (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x1403D1EAC (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1403D9EDC (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403DA1F0 (IopShutdownBaseFileSystems.c)
 *     NtUnloadKeyEx @ 0x1403E3100 (NtUnloadKeyEx.c)
 *     IopMountVolume @ 0x1403ED8DC (IopMountVolume.c)
 *     CmpLockRegistryFreezeAware @ 0x1403FA714 (CmpLockRegistryFreezeAware.c)
 *     NtNotifyChangeMultipleKeys @ 0x1403FF884 (NtNotifyChangeMultipleKeys.c)
 *     NtReadFile @ 0x1404424F0 (NtReadFile.c)
 *     IopXxxControlFile @ 0x140442DD0 (IopXxxControlFile.c)
 *     NtQueryInformationFile @ 0x140443C00 (NtQueryInformationFile.c)
 *     IopDeleteFile @ 0x140445270 (IopDeleteFile.c)
 *     NtWriteFile @ 0x1404454D0 (NtWriteFile.c)
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     NtLockFile @ 0x140469D2C (NtLockFile.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 *     EtwpLogger @ 0x140490638 (EtwpLogger.c)
 *     EtwpSynchronizeWithLogger @ 0x140493540 (EtwpSynchronizeWithLogger.c)
 *     EtwpStopTrace @ 0x1404946E0 (EtwpStopTrace.c)
 *     NtClearEvent @ 0x1404A72E0 (NtClearEvent.c)
 *     NtWriteFileGather @ 0x1404A917C (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404A9848 (NtReadFileScatter.c)
 *     IopCancelIrpsInThreadList @ 0x1404B22E8 (IopCancelIrpsInThreadList.c)
 *     NtResetEvent @ 0x1404B773C (NtResetEvent.c)
 *     NtNotifyChangeDirectoryFile @ 0x1404B87E8 (NtNotifyChangeDirectoryFile.c)
 *     IoSetInformation @ 0x1404CA404 (IoSetInformation.c)
 *     IopQueryXxxInformation @ 0x1404ED0B8 (IopQueryXxxInformation.c)
 *     BuildQueryDirectoryIrp @ 0x1404F0410 (BuildQueryDirectoryIrp.c)
 *     MiCreateImageFileMap @ 0x140505A1C (MiCreateImageFileMap.c)
 *     CmpLinkHiveToMaster @ 0x1405194C0 (CmpLinkHiveToMaster.c)
 *     sub_14051F200 @ 0x14051F200 (sub_14051F200.c)
 *     PoUnregisterPowerSettingCallback @ 0x14052E388 (PoUnregisterPowerSettingCallback.c)
 *     ExSwapinWorkerThreads @ 0x14052F230 (ExSwapinWorkerThreads.c)
 *     PfGenerateTrace @ 0x140530264 (PfGenerateTrace.c)
 *     PopQueueBatteryStatusTimeout @ 0x140531E98 (PopQueueBatteryStatusTimeout.c)
 *     WmipCopyFromEventQueues @ 0x140543F24 (WmipCopyFromEventQueues.c)
 *     IopCreateArcName @ 0x1405501C4 (IopCreateArcName.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140550C10 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ArbArbiterHandler @ 0x14055857C (ArbArbiterHandler.c)
 *     PfTLoggingWorker @ 0x14055B69C (PfTLoggingWorker.c)
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 *     NtWaitForDebugEvent @ 0x140619EE8 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x14061A2C4 (DbgkpRemoveErrorPort.c)
 *     IopInvalidateVolumesForDevice @ 0x140621B70 (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x1406225A0 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x1406233F0 (IoCancelFileOpen.c)
 *     PopSetSystemAwayMode @ 0x14066EB8C (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x140670530 (PopThermalReadCounters.c)
 *     TtmiRetrieveEventFromQueue @ 0x14067A0C0 (TtmiRetrieveEventFromQueue.c)
 *     RawQueryFsSizeInfo @ 0x140683168 (RawQueryFsSizeInfo.c)
 *     AnFwDisplayFade @ 0x14072664C (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x1407A51FC (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x1407CE504 (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
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
