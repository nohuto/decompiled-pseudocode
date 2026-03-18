/*
 * XREFs of KeResetEvent @ 0x14008E310
 * Callers:
 *     MiRetryNonPagedAllocation @ 0x140019AF0 (MiRetryNonPagedAllocation.c)
 *     MiFreePagedPoolPages @ 0x14003B820 (MiFreePagedPoolPages.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiAllocatePagedPoolPages @ 0x14005F630 (MiAllocatePagedPoolPages.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     PopFxIdleWorker @ 0x1400DB03C (PopFxIdleWorker.c)
 *     MiIssueSynchronousFlush @ 0x1400E03C0 (MiIssueSynchronousFlush.c)
 *     ExUnregisterCallback @ 0x1400F4408 (ExUnregisterCallback.c)
 *     SmKmStoreHelperWorker @ 0x1400F71C0 (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7294 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400F7568 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140110EE4 (SmKmStoreHelperWaitForCommand.c)
 *     MiProcessDereferenceList @ 0x140113D70 (MiProcessDereferenceList.c)
 *     MiQueueWorkingSetRequest @ 0x14011B7BC (MiQueueWorkingSetRequest.c)
 *     PopFxAllocatePowerIrp @ 0x1401223D0 (PopFxAllocatePowerIrp.c)
 *     PnpLockDeviceActionQueue @ 0x1401246B4 (PnpLockDeviceActionQueue.c)
 *     PopPepUpdateConstraints @ 0x14012F4AC (PopPepUpdateConstraints.c)
 *     MiZeroPageThread @ 0x1401307A0 (MiZeroPageThread.c)
 *     MiUpdateAvailableEvents @ 0x140133178 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x140133234 (MiSignalNonPagedPoolWatchers.c)
 *     MiModifiedPageWriter @ 0x1401384BC (MiModifiedPageWriter.c)
 *     MiDereferenceSegmentThread @ 0x1401389A0 (MiDereferenceSegmentThread.c)
 *     MiSyncCommitSignals @ 0x14013A478 (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x140142B00 (MiStoreEvictThread.c)
 *     KeClearEvent @ 0x1401C4ED0 (KeClearEvent.c)
 *     MiMarkMdlComplete @ 0x1401D6CB4 (MiMarkMdlComplete.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x1401DD1DC (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x1401E5784 (MmStoreFlushOutstandingEvictions.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x1401EA3E4 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x1401EE9C8 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     sub_140217EA0 @ 0x140217EA0 (sub_140217EA0.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x14039D62C (PfpScenCtxQueryScenarioInformation.c)
 *     PfpScenCtxPrefetchWait @ 0x1403A5454 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x1403A5AF0 (PopNewWakeInfo.c)
 *     IoShutdownSystem @ 0x1403ADE5C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403AE170 (IopShutdownBaseFileSystems.c)
 *     CmpLinkHiveToMaster @ 0x1403BAC9C (CmpLinkHiveToMaster.c)
 *     MiCreateImageFileMap @ 0x1403C9488 (MiCreateImageFileMap.c)
 *     CmpLockRegistryFreezeAware @ 0x1403DE460 (CmpLockRegistryFreezeAware.c)
 *     NtQueryInformationFile @ 0x14040F570 (NtQueryInformationFile.c)
 *     IopXxxControlFile @ 0x140410C30 (IopXxxControlFile.c)
 *     NtReadFile @ 0x140412000 (NtReadFile.c)
 *     IopDeleteFile @ 0x14042EA40 (IopDeleteFile.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     NtWriteFile @ 0x140436150 (NtWriteFile.c)
 *     BuildQueryDirectoryIrp @ 0x1404379F0 (BuildQueryDirectoryIrp.c)
 *     sub_1404667A0 @ 0x1404667A0 (sub_1404667A0.c)
 *     EtwpLogger @ 0x14046AE58 (EtwpLogger.c)
 *     RawQueryFsSizeInfo @ 0x140484B94 (RawQueryFsSizeInfo.c)
 *     NtSetInformationJobObject @ 0x1404855D8 (NtSetInformationJobObject.c)
 *     NtLockFile @ 0x14048F14C (NtLockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14048FA08 (NtNotifyChangeDirectoryFile.c)
 *     IopCancelIrpsInThreadList @ 0x14048FFEC (IopCancelIrpsInThreadList.c)
 *     NtWriteFileGather @ 0x140490124 (NtWriteFileGather.c)
 *     NtReadFileScatter @ 0x1404909FC (NtReadFileScatter.c)
 *     NtUnloadKeyEx @ 0x1404986A4 (NtUnloadKeyEx.c)
 *     NtNotifyChangeMultipleKeys @ 0x140499CD0 (NtNotifyChangeMultipleKeys.c)
 *     NtClearEvent @ 0x14049D230 (NtClearEvent.c)
 *     NtResetEvent @ 0x1404B0364 (NtResetEvent.c)
 *     EtwpSynchronizeWithLogger @ 0x1404B666C (EtwpSynchronizeWithLogger.c)
 *     IoSetInformation @ 0x1404C362C (IoSetInformation.c)
 *     EtwpStopTrace @ 0x1404CA4D8 (EtwpStopTrace.c)
 *     IopQueryXxxInformation @ 0x1404DB258 (IopQueryXxxInformation.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 *     IopMountVolume @ 0x1404DFC14 (IopMountVolume.c)
 *     IoSetPartitionInformation @ 0x1404E3140 (IoSetPartitionInformation.c)
 *     FstubGetDiskGeometry @ 0x1404E86F4 (FstubGetDiskGeometry.c)
 *     HalpGetFullGeometry @ 0x1404E8F68 (HalpGetFullGeometry.c)
 *     PoUnregisterPowerSettingCallback @ 0x1404EC230 (PoUnregisterPowerSettingCallback.c)
 *     ExSwapinWorkerThreads @ 0x1404F5C2C (ExSwapinWorkerThreads.c)
 *     PfGenerateTrace @ 0x1404F7C3C (PfGenerateTrace.c)
 *     PopQueueBatteryStatusTimeout @ 0x1404F8DF0 (PopQueueBatteryStatusTimeout.c)
 *     WmipCopyFromEventQueues @ 0x14050A4DC (WmipCopyFromEventQueues.c)
 *     IopCreateArcName @ 0x140522480 (IopCreateArcName.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x140522AA0 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ArbArbiterHandler @ 0x14052BCF4 (ArbArbiterHandler.c)
 *     PfTInitialize @ 0x14054089C (PfTInitialize.c)
 *     PfTLoggingWorker @ 0x14054BCF4 (PfTLoggingWorker.c)
 *     NtWaitForDebugEvent @ 0x1405F0234 (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x1405F0618 (DbgkpRemoveErrorPort.c)
 *     IopInvalidateVolumesForDevice @ 0x1405F7CFC (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x1405F8664 (IopSendMessageToTrackService.c)
 *     IoCancelFileOpen @ 0x1405F99D8 (IoCancelFileOpen.c)
 *     PopSetSystemAwayMode @ 0x1406366F8 (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x140638014 (PopThermalReadCounters.c)
 *     VerifierKeResetEvent @ 0x1406C65EC (VerifierKeResetEvent.c)
 *     AnFwDisplayFade @ 0x1406DA060 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x14074D8B0 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x140782D38 (IopGetBootDiskInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  __int64 v1; // rdx
  __int64 v2; // r8
  unsigned __int8 CurrentIrql; // di
  LONG result; // eax
  int v6; // [rsp+30h] [rbp+8h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v6 = 0;
  while ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
      KeYieldProcessorEx(&v6, v1, v2);
    while ( (Event->Header.LockNV & 0x80u) != 0 );
  }
  result = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return result;
}
