/*
 * XREFs of KeResetEvent @ 0x1400484D0
 * Callers:
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     PopFxIdleWorker @ 0x140027888 (PopFxIdleWorker.c)
 *     MiFreePagedPoolPages @ 0x14003E5F0 (MiFreePagedPoolPages.c)
 *     NtSetInformationFile @ 0x14006DCE0 (NtSetInformationFile.c)
 *     CcUnmapVacbArray @ 0x140086690 (CcUnmapVacbArray.c)
 *     MiAllocatePagedPoolPages @ 0x1400AC600 (MiAllocatePagedPoolPages.c)
 *     SmKmStoreHelperWorker @ 0x1400DACBC (SmKmStoreHelperWorker.c)
 *     ?SmStReadThread@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DAD90 (-SmStReadThread@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     ?SmStWorker@?$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z @ 0x1400DB094 (-SmStWorker@-$SMKM_STORE@USM_TRAITS@@@@SAXPEAX@Z.c)
 *     MiIssueSynchronousFlush @ 0x140112590 (MiIssueSynchronousFlush.c)
 *     ExUnregisterCallback @ 0x14013169C (ExUnregisterCallback.c)
 *     PopPepUpdateConstraints @ 0x140136D3C (PopPepUpdateConstraints.c)
 *     PopFxAllocatePowerIrp @ 0x140137708 (PopFxAllocatePowerIrp.c)
 *     MiProcessDereferenceList @ 0x140145AB0 (MiProcessDereferenceList.c)
 *     SmKmStoreHelperWaitForCommand @ 0x140147A68 (SmKmStoreHelperWaitForCommand.c)
 *     PnpLockDeviceActionQueue @ 0x1401570B4 (PnpLockDeviceActionQueue.c)
 *     MiQueueWorkingSetRequest @ 0x14015A008 (MiQueueWorkingSetRequest.c)
 *     MiUpdateAvailableEvents @ 0x14015FA18 (MiUpdateAvailableEvents.c)
 *     MiSignalNonPagedPoolWatchers @ 0x14015FBE0 (MiSignalNonPagedPoolWatchers.c)
 *     MiZeroPageThread @ 0x14015FE90 (MiZeroPageThread.c)
 *     MiDereferenceSegmentThread @ 0x140167DD0 (MiDereferenceSegmentThread.c)
 *     MiModifiedPageWriter @ 0x140169194 (MiModifiedPageWriter.c)
 *     MiSyncCommitSignals @ 0x14016BDFC (MiSyncCommitSignals.c)
 *     MiStoreEvictThread @ 0x140170980 (MiStoreEvictThread.c)
 *     KeClearEvent @ 0x1402018CC (KeClearEvent.c)
 *     MiMarkMdlComplete @ 0x140219754 (MiMarkMdlComplete.c)
 *     MiTrimUnusedPageFileRegionsWorker @ 0x140222374 (MiTrimUnusedPageFileRegionsWorker.c)
 *     MiWaitForFreePage @ 0x14022ECFC (MiWaitForFreePage.c)
 *     MmStoreFlushOutstandingEvictions @ 0x140231A58 (MmStoreFlushOutstandingEvictions.c)
 *     PopFxIssueComponentPerfStateChanges @ 0x140238164 (PopFxIssueComponentPerfStateChanges.c)
 *     PopCheckPowerSourceAfterRtcWakeSet @ 0x14023D080 (PopCheckPowerSourceAfterRtcWakeSet.c)
 *     sub_1402685C8 @ 0x1402685C8 (sub_1402685C8.c)
 *     PfpScenCtxPrefetchWait @ 0x1403EED74 (PfpScenCtxPrefetchWait.c)
 *     PopNewWakeInfo @ 0x1403EF2D0 (PopNewWakeInfo.c)
 *     PfpScenCtxQueryScenarioInformation @ 0x1403EF9D0 (PfpScenCtxQueryScenarioInformation.c)
 *     IoShutdownSystem @ 0x1403FE27C (IoShutdownSystem.c)
 *     IopShutdownBaseFileSystems @ 0x1403FE590 (IopShutdownBaseFileSystems.c)
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 *     RawQueryFsSizeInfo @ 0x14040C604 (RawQueryFsSizeInfo.c)
 *     EtwpStopTrace @ 0x14040EAB0 (EtwpStopTrace.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 *     IopQueryXxxInformation @ 0x14042A8D8 (IopQueryXxxInformation.c)
 *     NtNotifyChangeMultipleKeys @ 0x14042B804 (NtNotifyChangeMultipleKeys.c)
 *     CmpLockRegistryFreezeAware @ 0x14044620C (CmpLockRegistryFreezeAware.c)
 *     NtQueryVolumeInformationFile @ 0x140457400 (NtQueryVolumeInformationFile.c)
 *     NtFlushBuffersFileEx @ 0x140459AD0 (NtFlushBuffersFileEx.c)
 *     PnpInsertEventInQueue @ 0x14046093C (PnpInsertEventInQueue.c)
 *     IopGetSetSecurityObject @ 0x140467180 (IopGetSetSecurityObject.c)
 *     IopDeleteFile @ 0x1404886E0 (IopDeleteFile.c)
 *     IopXxxControlFile @ 0x14048DB80 (IopXxxControlFile.c)
 *     NtReadFile @ 0x14048EFE0 (NtReadFile.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     NtQueryInformationFile @ 0x140490C50 (NtQueryInformationFile.c)
 *     EtwpLogger @ 0x1404A17E4 (EtwpLogger.c)
 *     NtLockFile @ 0x1404A4FE4 (NtLockFile.c)
 *     IopCancelIrpsInThreadList @ 0x1404A8064 (IopCancelIrpsInThreadList.c)
 *     BuildQueryDirectoryIrp @ 0x1404BC130 (BuildQueryDirectoryIrp.c)
 *     NtWriteFile @ 0x1404BCA70 (NtWriteFile.c)
 *     CmpLinkHiveToMaster @ 0x1404E9E8C (CmpLinkHiveToMaster.c)
 *     NtUnloadKeyEx @ 0x1404ED38C (NtUnloadKeyEx.c)
 *     MiCreateImageFileMap @ 0x1404FCC48 (MiCreateImageFileMap.c)
 *     sub_140511D20 @ 0x140511D20 (sub_140511D20.c)
 *     NtClearEvent @ 0x140524040 (NtClearEvent.c)
 *     NtQueryEaFile @ 0x140534134 (NtQueryEaFile.c)
 *     NtUnlockFile @ 0x14053C750 (NtUnlockFile.c)
 *     NtNotifyChangeDirectoryFile @ 0x14053E7A0 (NtNotifyChangeDirectoryFile.c)
 *     NtWriteFileGather @ 0x140540320 (NtWriteFileGather.c)
 *     NtResetEvent @ 0x140541318 (NtResetEvent.c)
 *     NtReadFileScatter @ 0x140549CBC (NtReadFileScatter.c)
 *     EtwpSynchronizeWithLogger @ 0x14054D790 (EtwpSynchronizeWithLogger.c)
 *     IoSetInformation @ 0x14055B32C (IoSetInformation.c)
 *     NtSetVolumeInformationFile @ 0x14055F21C (NtSetVolumeInformationFile.c)
 *     IoSetPartitionInformation @ 0x14055FBF8 (IoSetPartitionInformation.c)
 *     PoUnregisterPowerSettingCallback @ 0x14055FEC4 (PoUnregisterPowerSettingCallback.c)
 *     HalpGetFullGeometry @ 0x1405630A4 (HalpGetFullGeometry.c)
 *     FstubGetDiskGeometry @ 0x1405633DC (FstubGetDiskGeometry.c)
 *     ExSwapinWorkerThreads @ 0x140564D10 (ExSwapinWorkerThreads.c)
 *     PopQueueBatteryStatusTimeout @ 0x140565DF8 (PopQueueBatteryStatusTimeout.c)
 *     PfGenerateTrace @ 0x1405668C4 (PfGenerateTrace.c)
 *     WmipCopyFromEventQueues @ 0x140581224 (WmipCopyFromEventQueues.c)
 *     IopCreateArcName @ 0x14058ED40 (IopCreateArcName.c)
 *     IoRegisterFsRegistrationChangeMountAware @ 0x14058FA68 (IoRegisterFsRegistrationChangeMountAware.c)
 *     ArbArbiterHandler @ 0x14059E62C (ArbArbiterHandler.c)
 *     PfTInitialize @ 0x1405B64DC (PfTInitialize.c)
 *     PfTLoggingWorker @ 0x1405C2D20 (PfTLoggingWorker.c)
 *     NtWaitForDebugEvent @ 0x140668D6C (NtWaitForDebugEvent.c)
 *     DbgkpRemoveErrorPort @ 0x1406691E8 (DbgkpRemoveErrorPort.c)
 *     IopInvalidateVolumesForDevice @ 0x140671B84 (IopInvalidateVolumesForDevice.c)
 *     IopSendMessageToTrackService @ 0x1406725FC (IopSendMessageToTrackService.c)
 *     IopSetEaOrQuotaInformationFile @ 0x1406728FC (IopSetEaOrQuotaInformationFile.c)
 *     IoCancelFileOpen @ 0x140673C54 (IoCancelFileOpen.c)
 *     NtSetEaFile @ 0x140675B58 (NtSetEaFile.c)
 *     NtQueryQuotaInformationFile @ 0x140676310 (NtQueryQuotaInformationFile.c)
 *     IopFreeBandwidthContract @ 0x140679EEC (IopFreeBandwidthContract.c)
 *     PopSetSystemAwayMode @ 0x1406B602C (PopSetSystemAwayMode.c)
 *     PopThermalReadCounters @ 0x1406B7E10 (PopThermalReadCounters.c)
 *     PspAddProcessToSilo @ 0x1406C17F8 (PspAddProcessToSilo.c)
 *     PspCreateSilo @ 0x1406C18E8 (PspCreateSilo.c)
 *     VerifierKeResetEvent @ 0x140748D18 (VerifierKeResetEvent.c)
 *     AnFwDisplayFade @ 0x14075D0A8 (AnFwDisplayFade.c)
 *     MiInitializePagedPoolEvents @ 0x1407CBB28 (MiInitializePagedPoolEvents.c)
 *     IopGetBootDiskInformation @ 0x1407F94BC (IopGetBootDiskInformation.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

LONG __stdcall KeResetEvent(PRKEVENT Event)
{
  unsigned __int8 CurrentIrql; // di
  unsigned int v3; // esi
  LONG result; // eax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v3 = 0;
  if ( _interlockedbittestandset(&Event->Header.Lock, 7u) )
  {
    do
    {
      if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v3);
    }
    while ( (Event->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Event->Header.Lock, 7u) );
  }
  result = Event->Header.SignalState;
  Event->Header.SignalState = 0;
  _InterlockedAnd(&Event->Header.Lock, 0xFFFFFF7F);
  __writecr8(CurrentIrql);
  return result;
}
