/*
 * XREFs of ExQueueWorkItem @ 0x140101400
 * Callers:
 *     ExpCenturyDpcRoutine @ 0x14000163C (ExpCenturyDpcRoutine.c)
 *     MmInSwapWorkingSet @ 0x140001BC8 (MmInSwapWorkingSet.c)
 *     IopCompleteUnloadOrDelete @ 0x140003C9C (IopCompleteUnloadOrDelete.c)
 *     MiWorkingSetManager @ 0x1400131F4 (MiWorkingSetManager.c)
 *     MiSignalLargePageRebuild @ 0x1400133E0 (MiSignalLargePageRebuild.c)
 *     MiScanPagefiles @ 0x1400135C0 (MiScanPagefiles.c)
 *     MiWriteComplete @ 0x1400300AC (MiWriteComplete.c)
 *     MiGetFreeOrZeroPage @ 0x140054B20 (MiGetFreeOrZeroPage.c)
 *     MiCompleteProtoPteFault @ 0x140054EB0 (MiCompleteProtoPteFault.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400775C0 (PsDereferenceMonitorContextServerSilo.c)
 *     PfSnGetFileInformation @ 0x140079990 (PfSnGetFileInformation.c)
 *     PfSnTraceGetLogEntry @ 0x140079C34 (PfSnTraceGetLogEntry.c)
 *     PopQueuePowerRequestCallbacks @ 0x140098FC4 (PopQueuePowerRequestCallbacks.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x14009FBBC (PspDereferenceMonitorContextServerSilo.c)
 *     CcWorkerThread @ 0x1400B2610 (CcWorkerThread.c)
 *     PnpRequestDeviceAction @ 0x1400D1618 (PnpRequestDeviceAction.c)
 *     SepQueueWorkItem @ 0x1400D52DC (SepQueueWorkItem.c)
 *     MiDeleteKernelStack @ 0x1400E1C30 (MiDeleteKernelStack.c)
 *     IoWMIWriteEvent @ 0x1400E2250 (IoWMIWriteEvent.c)
 *     CcReEngageWorkerThreads @ 0x1400E8524 (CcReEngageWorkerThreads.c)
 *     PopUserPresentSet @ 0x1400F1E14 (PopUserPresentSet.c)
 *     ExpTimeZoneDpcRoutine @ 0x1400F2540 (ExpTimeZoneDpcRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x1400F2F70 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     ?SmHighMemPriorityWatchdogDpc@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1400F3FEC (-SmHighMemPriorityWatchdogDpc@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KDPC@@PEAX11@Z.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x1400F4364 (CmpDelayFreeRMDpcRoutine.c)
 *     PfSnTracingStateDpcRoutine @ 0x1400F4650 (PfSnTracingStateDpcRoutine.c)
 *     CcAsyncReadWorker @ 0x1400FB99C (CcAsyncReadWorker.c)
 *     PspRequestDeferredJobNotification @ 0x1400FF078 (PspRequestDeferredJobNotification.c)
 *     PopCheckForWork @ 0x1400FF0E8 (PopCheckForWork.c)
 *     CcPostWorkQueueAsyncRead @ 0x1400FF968 (CcPostWorkQueueAsyncRead.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400FFF44 (LZNT1DecompressChunkNewThread.c)
 *     CmpDelayDerefKCBTimerRoutine @ 0x140100010 (CmpDelayDerefKCBTimerRoutine.c)
 *     ObpDeferObjectDeletion @ 0x14010002C (ObpDeferObjectDeletion.c)
 *     CcPostWorkQueue @ 0x140100FF0 (CcPostWorkQueue.c)
 *     CcWriteBehind @ 0x140101160 (CcWriteBehind.c)
 *     IoQueueWorkItem @ 0x1401013B4 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x1401013D8 (IoQueueWorkItemEx.c)
 *     PfSnTraceTimerRoutine @ 0x1401022D0 (PfSnTraceTimerRoutine.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140102528 (IoReportTargetDeviceChangeAsynchronous.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14010267C (SmKmStoreDeleteWhenEmpty.c)
 *     WdipTimeoutDpcRoutine @ 0x140102740 (WdipTimeoutDpcRoutine.c)
 *     PoNotifyMediaBuffering @ 0x14010541C (PoNotifyMediaBuffering.c)
 *     PoLatencySensitivityHint @ 0x140105D7C (PoLatencySensitivityHint.c)
 *     PfpPowerActionDpcRoutine @ 0x140117534 (PfpPowerActionDpcRoutine.c)
 *     PopWakeSourceTimeoutDpc @ 0x1401179F8 (PopWakeSourceTimeoutDpc.c)
 *     PopWakeInfoDereference @ 0x14011A63C (PopWakeInfoDereference.c)
 *     MmSetAccessLogging @ 0x14011B6E8 (MmSetAccessLogging.c)
 *     PopBatteryQueueWork @ 0x14011B90C (PopBatteryQueueWork.c)
 *     EtwTraceContextSwap @ 0x14011EA60 (EtwTraceContextSwap.c)
 *     PnpUnlockDeviceActionQueue @ 0x140124628 (PnpUnlockDeviceActionQueue.c)
 *     IoWriteErrorLogEntry @ 0x1401262CC (IoWriteErrorLogEntry.c)
 *     MiFreeCombineBlock @ 0x14012B6C8 (MiFreeCombineBlock.c)
 *     ExpTimeRefreshDpcRoutine @ 0x14012E69C (ExpTimeRefreshDpcRoutine.c)
 *     MiFreeUnusedPfnPages @ 0x1401322A8 (MiFreeUnusedPfnPages.c)
 *     PspQueueDeferredWorkAndWait @ 0x1401343C4 (PspQueueDeferredWorkAndWait.c)
 *     EmpQueueRuleUpdateState @ 0x1401350F4 (EmpQueueRuleUpdateState.c)
 *     KeBalanceSetManager @ 0x1401373C4 (KeBalanceSetManager.c)
 *     SepAdtDetermineInsertQueue @ 0x140140EF4 (SepAdtDetermineInsertQueue.c)
 *     ExpDebuggerDpcRoutine @ 0x140142AD4 (ExpDebuggerDpcRoutine.c)
 *     PopThermalIrpComplete @ 0x1401434C4 (PopThermalIrpComplete.c)
 *     CcBcbProfiler @ 0x14014D260 (CcBcbProfiler.c)
 *     CcIncrementWriteBehindPriority @ 0x1401A8AD8 (CcIncrementWriteBehindPriority.c)
 *     CmpFreezeThawDpcRoutine @ 0x1401A9F4C (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x1401A9F74 (CmpLazyCommitDpcRoutine.c)
 *     IoRaiseHardError @ 0x1401BAE90 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401BB0F8 (IoRaiseInformationalHardError.c)
 *     IoDecrementKeepAliveCount @ 0x1401BB9D0 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1401BBABC (IoIncrementKeepAliveCount.c)
 *     IopErrorLogDpc @ 0x1401BD4D4 (IopErrorLogDpc.c)
 *     IopRunIoQosWorkItem @ 0x1401BDB5C (IopRunIoQosWorkItem.c)
 *     IoRequestDeviceEjectEx @ 0x1401BE90C (IoRequestDeviceEjectEx.c)
 *     IopDeviceEjectComplete @ 0x1401C1AE4 (IopDeviceEjectComplete.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x1401D03B4 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiFlushControlArea @ 0x1401D0FFC (MiFlushControlArea.c)
 *     MiPageNotZero @ 0x1401DFFEC (MiPageNotZero.c)
 *     MiClearFileOnlyPfn @ 0x1401E3318 (MiClearFileOnlyPfn.c)
 *     MiNoPagesLastChance @ 0x1401E3DB0 (MiNoPagesLastChance.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x1401E6190 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x1401E6408 (ObpDeferPushRefDerefInfo.c)
 *     PfSnPowerBoostDpc @ 0x1401E6614 (PfSnPowerBoostDpc.c)
 *     PopQueueWorkItem @ 0x1401E69E8 (PopQueueWorkItem.c)
 *     PopExecutionRequiredTimeoutCallback @ 0x1401E6B54 (PopExecutionRequiredTimeoutCallback.c)
 *     PoIssueCoalescingNotification @ 0x1401EC7F4 (PoIssueCoalescingNotification.c)
 *     PopUpdateWakeSource @ 0x1401ECAD4 (PopUpdateWakeSource.c)
 *     PopUserShutdownDelayDpcCallback @ 0x1401ECEC4 (PopUserShutdownDelayDpcCallback.c)
 *     PopWdiTimerCallback @ 0x1401F1138 (PopWdiTimerCallback.c)
 *     PopFanIrpComplete @ 0x1401F36B8 (PopFanIrpComplete.c)
 *     PpmWmiIdleAccountingProcedure @ 0x1401F3890 (PpmWmiIdleAccountingProcedure.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x1401F39BC (PopIdleAoAcDozeS4TimerCallback.c)
 *     SepAuditFailedRaisedIrql @ 0x140201890 (SepAuditFailedRaisedIrql.c)
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140202784 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14020A408 (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14020EE5C (EtwpQueuePerfMemInfoWorkItem.c)
 *     ExpNextYearDpcRoutine @ 0x140212FC0 (ExpNextYearDpcRoutine.c)
 *     ExpSvmDpcRoutine @ 0x140215434 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x140216DEC (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x14021785C (WheapWorkQueueAddItem.c)
 *     WheapWorkQueueDpcRoutine @ 0x1402178B4 (WheapWorkQueueDpcRoutine.c)
 *     WheapSqmWaitDpcRoutine @ 0x140217B10 (WheapSqmWaitDpcRoutine.c)
 *     MmDuplicateMemory @ 0x14039E1A0 (MmDuplicateMemory.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PnprInitiateReplaceOperation @ 0x1403AF974 (PnprInitiateReplaceOperation.c)
 *     MiZeroAllPageFiles @ 0x1403B1D84 (MiZeroAllPageFiles.c)
 *     MiContractWsSwapPageFile @ 0x1403B592C (MiContractWsSwapPageFile.c)
 *     MiInSwapStore @ 0x1403B59C8 (MiInSwapStore.c)
 *     CmpCanGrowHive @ 0x1403D50E4 (CmpCanGrowHive.c)
 *     CmpClaimGlobalQuota @ 0x1403D8F60 (CmpClaimGlobalQuota.c)
 *     CmpAddToDelayedClose @ 0x1403FB440 (CmpAddToDelayedClose.c)
 *     CmpParseKey @ 0x1404014E0 (CmpParseKey.c)
 *     CmpDeleteKeyObject @ 0x1404036E0 (CmpDeleteKeyObject.c)
 *     CmpSignalDeferredPosts @ 0x1404218C4 (CmpSignalDeferredPosts.c)
 *     PiDrvDbLoadNode @ 0x140444A94 (PiDrvDbLoadNode.c)
 *     PopUmpoProcessPowerMessage @ 0x1404496B8 (PopUmpoProcessPowerMessage.c)
 *     NtLoadDriver @ 0x140493C20 (NtLoadDriver.c)
 *     IopUnloadDriver @ 0x140493DE4 (IopUnloadDriver.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14049BCFC (SepInformFileSystemsOfDeletedLogon.c)
 *     PnpChainDereferenceComplete @ 0x14049F4C8 (PnpChainDereferenceComplete.c)
 *     PspRundownProcess @ 0x1404A3FD8 (PspRundownProcess.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1404AF334 (SepScheduleImageVerificationCallbacks.c)
 *     ExpWnfStartKernelDispatcher @ 0x1404B78D8 (ExpWnfStartKernelDispatcher.c)
 *     PspTerminateProcessesJobCallback @ 0x1404BD074 (PspTerminateProcessesJobCallback.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404C1AE8 (PiUEventQueueBroadcastEventEntry.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x1404C25EC (PiDrvDbUnloadNodeWorkerCallback.c)
 *     NtNotifyChangeSession @ 0x1404C2F6C (NtNotifyChangeSession.c)
 *     WmipQueueLegacyEtwWork @ 0x1404C5A20 (WmipQueueLegacyEtwWork.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404D00D4 (EtwpCrimsonProvEnableCallback.c)
 *     PfSnEndProcessTrace @ 0x1404D62A0 (PfSnEndProcessTrace.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404DF5E4 (PfSnPrefetchSectionsCleanup.c)
 *     PfSnPrefetchSections @ 0x1404DF6C8 (PfSnPrefetchSections.c)
 *     PfSnPrefetchScenario @ 0x1404DFA78 (PfSnPrefetchScenario.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1404E03C8 (PiDqObjectManagerHandleObjectEvent.c)
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1404E17A0 (CmWorkerEngineQueueWorkItem.c)
 *     WmipQueueRegWork @ 0x140507DA4 (WmipQueueRegWork.c)
 *     PerfDiagpRequestState @ 0x14050C404 (PerfDiagpRequestState.c)
 *     PopEsWorkItemSchedule @ 0x14050CF68 (PopEsWorkItemSchedule.c)
 *     SmStoreCompressionStop @ 0x140517730 (SmStoreCompressionStop.c)
 *     WdipSemStartTimeoutCheck @ 0x1405328D8 (WdipSemStartTimeoutCheck.c)
 *     PopThermalZoneAdd @ 0x14054C0D8 (PopThermalZoneAdd.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x1405DE4F0 (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x1405E3D10 (CmpDiskFullWarning.c)
 *     CmpForceFlushForCoalescing @ 0x1405E3DB4 (CmpForceFlushForCoalescing.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x1405F1AE0 (DbgkpWerCaptureLiveFullDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x1405F3094 (EmRemoveBadS3PagesCallback.c)
 *     IopSendMessageToTrackService @ 0x1405F8664 (IopSendMessageToTrackService.c)
 *     IoReplacePartitionUnit @ 0x1405FFE34 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140607388 (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x14060DB84 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x14061532C (IopEjectDevice.c)
 *     MiRemovePhysicalMemory @ 0x140622D58 (MiRemovePhysicalMemory.c)
 *     PopFanAdd @ 0x14063BBD8 (PopFanAdd.c)
 *     PspScheduleEnforcementWorker @ 0x140642464 (PspScheduleEnforcementWorker.c)
 *     WheaAttemptPhysicalPageOffline @ 0x140677DE0 (WheaAttemptPhysicalPageOffline.c)
 *     KdpTimeSlipDpcRoutine @ 0x1406AC854 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x1406B58F4 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x1406CAA5C (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x1406D9AC4 (LogFwReport.c)
 *     WmipInitializeRegistration @ 0x140753170 (WmipInitializeRegistration.c)
 *     IoInitSystemPreDrivers @ 0x140757B24 (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x14076C1BC (FsRtlInitializeSmssEvent.c)
 * Callees:
 *     MmGetNextNode @ 0x140033000 (MmGetNextNode.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     ExpQueueWorkItemNode @ 0x14010075C (ExpQueueWorkItemNode.c)
 *     ExpValidateWorkItem @ 0x140101574 (ExpValidateWorkItem.c)
 *     KeInsertPriQueue @ 0x1401015B0 (KeInsertPriQueue.c)
 *     ExpIsPoolReadyForWork @ 0x140101A20 (ExpIsPoolReadyForWork.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __stdcall ExQueueWorkItem(PWORK_QUEUE_ITEM WorkItem, WORK_QUEUE_TYPE QueueType)
{
  ULONG_PTR v3; // rdi
  int v4; // r15d
  char v5; // r10
  unsigned __int8 CurrentIrql; // bp
  _KNODE *ParentNode; // r11
  unsigned __int16 v8; // dx
  __int64 v9; // r14
  int v10; // r9d
  __int64 v11; // rbx
  int v12; // ecx
  unsigned int NextNode; // eax
  int v14; // [rsp+68h] [rbp+10h] BYREF

  v3 = QueueType;
  ExpValidateWorkItem((ULONG_PTR)WorkItem);
  if ( (unsigned int)v3 >= 7 )
    v4 = v3 - 32;
  else
    v4 = ExpBuiltinPriorities[v3];
  v5 = 0;
  v14 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  v8 = ParentNode->Affinity.Reserved[0];
  if ( v8 >= (unsigned int)(unsigned __int16)KeNumberNodes )
  {
LABEL_20:
    if ( (_UNKNOWN *)KeNodeBlock[ParentNode->Affinity.Reserved[0]] == (_UNKNOWN *)((char *)&KiNodeInit
                                                                                 + 256
                                                                                 * (unsigned __int64)ParentNode->Affinity.Reserved[0])
      || (*((_DWORD *)&ParentNode[5].IdleCpuSet + 3) & 2) == 0 )
    {
      goto LABEL_13;
    }
    ExpQueueWorkItemNode((int)WorkItem, v4, (__int64)ParentNode, 0);
  }
  else
  {
    while ( 1 )
    {
      v9 = KeNodeBlock[v8];
      if ( (_UNKNOWN *)v9 == (_UNKNOWN *)((char *)&KiNodeInit + 256 * (unsigned __int64)v8) )
        v9 = 0LL;
      if ( (unsigned __int8)ExpIsPoolReadyForWork(v9, 0LL) )
        break;
      NextNode = MmGetNextNode(v10, &v14);
      v8 = NextNode;
      if ( NextNode >= (unsigned __int16)KeNumberNodes )
        goto LABEL_20;
    }
    v11 = *(_QWORD *)(v9 + 256);
    if ( (v11 & 1) != 0 )
      v11 = 0LL;
    KeInsertPriQueue(v11, (_DWORD)WorkItem, v4, v10, 0);
    v12 = *(_DWORD *)(v11 + 704);
    if ( v12 < (2 * *(_DWORD *)(v11 + 708)) >> 1
      || v12 < *(_DWORD *)(v11 + 712)
      && *(_QWORD *)(v11 + 8) == v11 + 8
      && (*(_DWORD *)(v11 + 4) || *(int *)(v11 + 708) < 0) )
    {
      KeSetEvent((PRKEVENT)(v9 + 1040), 0, 0);
    }
  }
  v5 = 1;
LABEL_13:
  __writecr8(CurrentIrql);
  if ( !v5 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)WorkItem, v3, 0xFFFFFFFFFFFFFFFFuLL);
}
