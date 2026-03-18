/*
 * XREFs of ExQueueWorkItem @ 0x14000D2F0
 * Callers:
 *     IopCompleteUnloadOrDelete @ 0x140007694 (IopCompleteUnloadOrDelete.c)
 *     PspRequestDeferredJobNotification @ 0x1400086CC (PspRequestDeferredJobNotification.c)
 *     ObpDeferObjectDeletion @ 0x14000C780 (ObpDeferObjectDeletion.c)
 *     IoQueueWorkItem @ 0x14000D2A4 (IoQueueWorkItem.c)
 *     IoQueueWorkItemEx @ 0x14000D2C8 (IoQueueWorkItemEx.c)
 *     MiWorkingSetManager @ 0x1400124C4 (MiWorkingSetManager.c)
 *     MiSignalLargePageRebuild @ 0x140012694 (MiSignalLargePageRebuild.c)
 *     PfSnTraceTimerRoutine @ 0x14001A000 (PfSnTraceTimerRoutine.c)
 *     PfSnTraceGetLogEntry @ 0x14001A3A8 (PfSnTraceGetLogEntry.c)
 *     MiDeleteKernelStack @ 0x14002517C (MiDeleteKernelStack.c)
 *     IoReportTargetDeviceChangeAsynchronous @ 0x140026540 (IoReportTargetDeviceChangeAsynchronous.c)
 *     PnpRequestDeviceAction @ 0x1400268B0 (PnpRequestDeviceAction.c)
 *     CcUninitializeCacheMap @ 0x140030770 (CcUninitializeCacheMap.c)
 *     CcWriteBehind @ 0x1400326B0 (CcWriteBehind.c)
 *     CcWorkerThread @ 0x1400328D0 (CcWorkerThread.c)
 *     CcPostWorkQueue @ 0x14003F5E0 (CcPostWorkQueue.c)
 *     IopfCompleteRequest @ 0x140048F80 (IopfCompleteRequest.c)
 *     NtReleaseWorkerFactoryWorker @ 0x14006BE00 (NtReleaseWorkerFactoryWorker.c)
 *     NtSetInformationWorkerFactory @ 0x14006CC00 (NtSetInformationWorkerFactory.c)
 *     MiWriteComplete @ 0x14008247C (MiWriteComplete.c)
 *     PfSnGetFileInformation @ 0x1400B7EF0 (PfSnGetFileInformation.c)
 *     MiCompleteProtoPteFault @ 0x1400BA8F0 (MiCompleteProtoPteFault.c)
 *     MiGetFreeOrZeroPage @ 0x1400BD9E0 (MiGetFreeOrZeroPage.c)
 *     PopCheckForWork @ 0x1400D01A4 (PopCheckForWork.c)
 *     PopQueuePowerRequestCallbacks @ 0x1400D129C (PopQueuePowerRequestCallbacks.c)
 *     LZNT1DecompressChunkNewThread @ 0x1400D59B4 (LZNT1DecompressChunkNewThread.c)
 *     MmInSwapWorkingSet @ 0x1400DE740 (MmInSwapWorkingSet.c)
 *     PsDereferenceMonitorContextServerSilo @ 0x1400F0720 (PsDereferenceMonitorContextServerSilo.c)
 *     MmSetAccessLogging @ 0x140100EDC (MmSetAccessLogging.c)
 *     IopCheckInitiatorHint @ 0x140111C20 (IopCheckInitiatorHint.c)
 *     SepQueueWorkItem @ 0x140117380 (SepQueueWorkItem.c)
 *     PspDereferenceMonitorContextServerSilo @ 0x1401178C4 (PspDereferenceMonitorContextServerSilo.c)
 *     CcAsyncReadWorker @ 0x14011D044 (CcAsyncReadWorker.c)
 *     CcPostWorkQueueAsyncRead @ 0x14011DF64 (CcPostWorkQueueAsyncRead.c)
 *     IoWMIWriteEvent @ 0x1401226E4 (IoWMIWriteEvent.c)
 *     SmKmStoreDeleteWhenEmpty @ 0x14012A8A0 (SmKmStoreDeleteWhenEmpty.c)
 *     CmpDelayDerefKCBTimerRoutine @ 0x14012C47C (CmpDelayDerefKCBTimerRoutine.c)
 *     PopUserPresentSet @ 0x14012DEE4 (PopUserPresentSet.c)
 *     WdipTimeoutDpcRoutine @ 0x140130F28 (WdipTimeoutDpcRoutine.c)
 *     PiDrvDbUnloadNodeDpcRoutine @ 0x140130F74 (PiDrvDbUnloadNodeDpcRoutine.c)
 *     ExpCenturyDpcRoutine @ 0x1401311FC (ExpCenturyDpcRoutine.c)
 *     ?SmHighMemPriorityWatchdogDpc@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KDPC@@PEAX11@Z @ 0x1401318B0 (-SmHighMemPriorityWatchdogDpc@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU_KDPC@@PEAX11@Z.c)
 *     CmpDelayFreeRMDpcRoutine @ 0x140131BD8 (CmpDelayFreeRMDpcRoutine.c)
 *     PfSnTracingStateDpcRoutine @ 0x140131BEC (PfSnTracingStateDpcRoutine.c)
 *     PoNotifyMediaBuffering @ 0x1401326CC (PoNotifyMediaBuffering.c)
 *     CcReEngageWorkerThreads @ 0x1401338C0 (CcReEngageWorkerThreads.c)
 *     PoLatencySensitivityHint @ 0x14013942C (PoLatencySensitivityHint.c)
 *     ExpTimeRefreshDpcRoutine @ 0x1401397F8 (ExpTimeRefreshDpcRoutine.c)
 *     ExpTimeZoneDpcRoutine @ 0x140139CAC (ExpTimeZoneDpcRoutine.c)
 *     PopWakeInfoDereference @ 0x140149020 (PopWakeInfoDereference.c)
 *     PfpPowerActionDpcRoutine @ 0x14014C4D8 (PfpPowerActionDpcRoutine.c)
 *     PopWakeSourceTimeoutDpc @ 0x14014C974 (PopWakeSourceTimeoutDpc.c)
 *     PopBatteryQueueWork @ 0x14014FB80 (PopBatteryQueueWork.c)
 *     PnpUnlockDeviceActionQueue @ 0x140156FFC (PnpUnlockDeviceActionQueue.c)
 *     IoWriteErrorLogEntry @ 0x1401595B8 (IoWriteErrorLogEntry.c)
 *     EmpQueueRuleUpdateState @ 0x14016183C (EmpQueueRuleUpdateState.c)
 *     KeBalanceSetManager @ 0x140165F30 (KeBalanceSetManager.c)
 *     SepAdtDetermineInsertQueue @ 0x140168D80 (SepAdtDetermineInsertQueue.c)
 *     ExpDebuggerDpcRoutine @ 0x140170954 (ExpDebuggerDpcRoutine.c)
 *     PopThermalIrpComplete @ 0x14017152C (PopThermalIrpComplete.c)
 *     CcBcbProfiler @ 0x14017B2D0 (CcBcbProfiler.c)
 *     CcIncrementWriteBehindPriority @ 0x1401DC810 (CcIncrementWriteBehindPriority.c)
 *     CmpFreezeThawDpcRoutine @ 0x1401DFE30 (CmpFreezeThawDpcRoutine.c)
 *     CmpLazyCommitDpcRoutine @ 0x1401DFE58 (CmpLazyCommitDpcRoutine.c)
 *     CmpCoalescingCallback @ 0x1401DFE7C (CmpCoalescingCallback.c)
 *     IoRaiseHardError @ 0x1401F60B8 (IoRaiseHardError.c)
 *     IoRaiseInformationalHardError @ 0x1401F6358 (IoRaiseInformationalHardError.c)
 *     IoDecrementKeepAliveCount @ 0x1401F6E78 (IoDecrementKeepAliveCount.c)
 *     IoIncrementKeepAliveCount @ 0x1401F6FAC (IoIncrementKeepAliveCount.c)
 *     IopErrorLogDpc @ 0x1401F8D60 (IopErrorLogDpc.c)
 *     IopRunIoQosWorkItem @ 0x1401F9438 (IopRunIoQosWorkItem.c)
 *     IoRequestDeviceEjectEx @ 0x1401FA174 (IoRequestDeviceEjectEx.c)
 *     IopDeviceEjectComplete @ 0x1401FD6CC (IopDeviceEjectComplete.c)
 *     MiReAcquireOutSwappedProcessCommit @ 0x14020FF64 (MiReAcquireOutSwappedProcessCommit.c)
 *     MiFlushControlArea @ 0x140211468 (MiFlushControlArea.c)
 *     MiPageNotZero @ 0x1402262F4 (MiPageNotZero.c)
 *     MiFreeCombineBlock @ 0x14022A730 (MiFreeCombineBlock.c)
 *     MiNoPagesLastChance @ 0x14022DB04 (MiNoPagesLastChance.c)
 *     ObpProcessRemoveObjectDpcWorker @ 0x140233024 (ObpProcessRemoveObjectDpcWorker.c)
 *     ObpDeferPushRefDerefInfo @ 0x140233478 (ObpDeferPushRefDerefInfo.c)
 *     PfSnPowerBoostDpc @ 0x140233678 (PfSnPowerBoostDpc.c)
 *     PopQueueWorkItem @ 0x140233B20 (PopQueueWorkItem.c)
 *     PopExecutionRequiredTimeoutCallback @ 0x140233D10 (PopExecutionRequiredTimeoutCallback.c)
 *     PoIssueCoalescingNotification @ 0x14023AB10 (PoIssueCoalescingNotification.c)
 *     PopUpdateWakeSource @ 0x14023AD90 (PopUpdateWakeSource.c)
 *     PopUserShutdownDelayDpcCallback @ 0x14023B1D8 (PopUserShutdownDelayDpcCallback.c)
 *     PopWdiTimerCallback @ 0x14023F3E0 (PopWdiTimerCallback.c)
 *     PopFanIrpComplete @ 0x14024057C (PopFanIrpComplete.c)
 *     PpmWmiIdleAccountingProcedure @ 0x140240754 (PpmWmiIdleAccountingProcedure.c)
 *     PopIdleAoAcDozeS4TimerCallback @ 0x140241BF8 (PopIdleAoAcDozeS4TimerCallback.c)
 *     PsSetSiloObjectServerPropertyByPointer @ 0x14024411C (PsSetSiloObjectServerPropertyByPointer.c)
 *     PsTerminateServerSilo @ 0x1402443F4 (PsTerminateServerSilo.c)
 *     SepAuditFailedRaisedIrql @ 0x140250868 (SepAuditFailedRaisedIrql.c)
 *     ?SmEmptyStore@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z @ 0x140251834 (-SmEmptyStore@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAXPEAU1@KK@Z.c)
 *     ?SmStoreTerminate@?$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU?$SMKM_STORE@USM_TRAITS@@@@W4_ST_ETW_TERMINATION_REASON@@J@Z @ 0x14025987C (-SmStoreTerminate@-$SMKM_STORE_MGR@USM_TRAITS@@@@SAJPEAU1@PEAU-$SMKM_STORE@USM_TRAITS@@@@W4_ST_E.c)
 *     EtwpQueuePerfMemInfoWorkItem @ 0x14025E184 (EtwpQueuePerfMemInfoWorkItem.c)
 *     ExpNextYearDpcRoutine @ 0x1402626F8 (ExpNextYearDpcRoutine.c)
 *     ExpSvmDpcRoutine @ 0x140265598 (ExpSvmDpcRoutine.c)
 *     WheapDeferredRecoveryServiceDpcRoutine @ 0x14026743C (WheapDeferredRecoveryServiceDpcRoutine.c)
 *     WheapWorkQueueAddItem @ 0x140267F68 (WheapWorkQueueAddItem.c)
 *     WheapWorkQueueDpcRoutine @ 0x140267FC0 (WheapWorkQueueDpcRoutine.c)
 *     WheapSqmWaitDpcRoutine @ 0x14026821C (WheapSqmWaitDpcRoutine.c)
 *     NtSetSystemPowerState @ 0x1403ED18C (NtSetSystemPowerState.c)
 *     MmDuplicateMemory @ 0x1403F0578 (MmDuplicateMemory.c)
 *     PnprInitiateReplaceOperation @ 0x1403FFF60 (PnprInitiateReplaceOperation.c)
 *     MiZeroAllPageFiles @ 0x140402E6C (MiZeroAllPageFiles.c)
 *     PspRundownProcess @ 0x14040A4F4 (PspRundownProcess.c)
 *     PfSnPrefetchSections @ 0x140420658 (PfSnPrefetchSections.c)
 *     CmpSignalDeferredPosts @ 0x1404293F0 (CmpSignalDeferredPosts.c)
 *     PfSnEndProcessTrace @ 0x14044540C (PfSnEndProcessTrace.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x14045D730 (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventNotifyUserMode @ 0x14046027C (PiUEventNotifyUserMode.c)
 *     PnpInsertEventInQueue @ 0x14046093C (PnpInsertEventInQueue.c)
 *     HvpMarkDirty @ 0x14049F900 (HvpMarkDirty.c)
 *     CmpClaimGlobalQuota @ 0x1404A0314 (CmpClaimGlobalQuota.c)
 *     CmpCanGrowHive @ 0x1404AF554 (CmpCanGrowHive.c)
 *     CmpDeleteKeyObject @ 0x1404C1BA0 (CmpDeleteKeyObject.c)
 *     CmpDereferenceKeyControlBlockWithLock @ 0x1404C87E0 (CmpDereferenceKeyControlBlockWithLock.c)
 *     PiDrvDbLoadNode @ 0x1404DE2D8 (PiDrvDbLoadNode.c)
 *     PfSnPrefetchScenario @ 0x1404F502C (PfSnPrefetchScenario.c)
 *     PfSnPrefetchSectionsCleanup @ 0x1404F58F0 (PfSnPrefetchSectionsCleanup.c)
 *     MiContractWsSwapPageFile @ 0x1404FB15C (MiContractWsSwapPageFile.c)
 *     EtwpCrimsonProvEnableCallback @ 0x1404FB194 (EtwpCrimsonProvEnableCallback.c)
 *     PopUmpoProcessPowerMessage @ 0x1404FFB68 (PopUmpoProcessPowerMessage.c)
 *     SepInformFileSystemsOfDeletedLogon @ 0x14052EB48 (SepInformFileSystemsOfDeletedLogon.c)
 *     PnpChainDereferenceComplete @ 0x140538F00 (PnpChainDereferenceComplete.c)
 *     IopUnloadDriver @ 0x140539658 (IopUnloadDriver.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x140542A88 (PiDqObjectManagerHandleObjectEvent.c)
 *     EtwpAddKmRegEntry @ 0x14054C94C (EtwpAddKmRegEntry.c)
 *     CmWorkerEngineQueueWorkItem @ 0x140556428 (CmWorkerEngineQueueWorkItem.c)
 *     NtNotifyChangeSession @ 0x140559524 (NtNotifyChangeSession.c)
 *     PiDrvDbUnloadNodeWorkerCallback @ 0x140559C84 (PiDrvDbUnloadNodeWorkerCallback.c)
 *     WmipQueueLegacyEtwWork @ 0x14055C1CC (WmipQueueLegacyEtwWork.c)
 *     PerfDiagpRequestState @ 0x14055CC7C (PerfDiagpRequestState.c)
 *     MiInSwapStore @ 0x14055D380 (MiInSwapStore.c)
 *     ExpWnfStartKernelDispatcher @ 0x140561FD8 (ExpWnfStartKernelDispatcher.c)
 *     PopBatteryApplyCompositeState @ 0x14056B6B4 (PopBatteryApplyCompositeState.c)
 *     NtLoadDriver @ 0x14057157C (NtLoadDriver.c)
 *     WmipQueueRegWork @ 0x14057E640 (WmipQueueRegWork.c)
 *     SepScheduleImageVerificationCallbacks @ 0x1405810DC (SepScheduleImageVerificationCallbacks.c)
 *     PsStartMonitorServerSilo @ 0x14059391C (PsStartMonitorServerSilo.c)
 *     WdipSemStartTimeoutCheck @ 0x1405ADDBC (WdipSemStartTimeoutCheck.c)
 *     PopEsPowerSettingBatteryThresholdCallback @ 0x1405BFEBC (PopEsPowerSettingBatteryThresholdCallback.c)
 *     PopThermalZoneAdd @ 0x1405C343C (PopThermalZoneAdd.c)
 *     CmpDoQueueSystemHiveHysteresis @ 0x140653A1C (CmpDoQueueSystemHiveHysteresis.c)
 *     CmpDiskFullWarning @ 0x14065AE40 (CmpDiskFullWarning.c)
 *     DbgkpWerCaptureLiveFullDump @ 0x14066A7D8 (DbgkpWerCaptureLiveFullDump.c)
 *     EmRemoveBadS3PagesCallback @ 0x14066BDC0 (EmRemoveBadS3PagesCallback.c)
 *     IopSendMessageToTrackService @ 0x1406725FC (IopSendMessageToTrackService.c)
 *     IoReplacePartitionUnit @ 0x14067AA18 (IoReplacePartitionUnit.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x1406820AC (PiDqObjectManagerMakeInconsistent.c)
 *     PiProfileUpdateDeviceTree @ 0x14068D5C0 (PiProfileUpdateDeviceTree.c)
 *     IopEjectDevice @ 0x1406940A4 (IopEjectDevice.c)
 *     PopFanAdd @ 0x1406BAFCC (PopFanAdd.c)
 *     PopEsWnfSubscriptionOverrideCallback @ 0x1406BBA88 (PopEsWnfSubscriptionOverrideCallback.c)
 *     PsUnregisterMonitorServerSilo @ 0x1406C16A8 (PsUnregisterMonitorServerSilo.c)
 *     PspScheduleEnforcementWorker @ 0x1406C4A10 (PspScheduleEnforcementWorker.c)
 *     SmStoreCompressionStop @ 0x1406D9FF0 (SmStoreCompressionStop.c)
 *     WheaAttemptPhysicalPageOffline @ 0x1406FC5FC (WheaAttemptPhysicalPageOffline.c)
 *     KdpTimeSlipDpcRoutine @ 0x14072C8B4 (KdpTimeSlipDpcRoutine.c)
 *     IovpUnloadDriver @ 0x140735BD8 (IovpUnloadDriver.c)
 *     VfIrpLogRecordEvent @ 0x14074E138 (VfIrpLogRecordEvent.c)
 *     LogFwReport @ 0x14075CB0C (LogFwReport.c)
 *     WmipInitializeRegistration @ 0x1407BA2F8 (WmipInitializeRegistration.c)
 *     IoInitSystemPreDrivers @ 0x1407C116C (IoInitSystemPreDrivers.c)
 *     FsRtlInitializeSmssEvent @ 0x1407E13D0 (FsRtlInitializeSmssEvent.c)
 *     PopEsInit @ 0x1407E7D84 (PopEsInit.c)
 * Callees:
 *     ExpQueueWorkItemNode @ 0x14000D530 (ExpQueueWorkItemNode.c)
 *     MmGetNextNode @ 0x1400E70A8 (MmGetNextNode.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __stdcall ExQueueWorkItem(PWORK_QUEUE_ITEM WorkItem, WORK_QUEUE_TYPE QueueType)
{
  ULONG_PTR v3; // rbx
  void (__fastcall *WorkerRoutine)(void *); // r9
  unsigned __int32 v5; // esi
  char v6; // bp
  unsigned __int8 CurrentIrql; // r14
  _KNODE *ParentNode; // r11
  unsigned int v9; // r10d
  unsigned int NextNode; // eax
  __int64 v11; // r8
  __int64 v12; // r9
  int v13; // edx
  unsigned __int16 v14; // r9
  int v15; // [rsp+60h] [rbp+8h] BYREF

  v3 = QueueType;
  if ( WorkItem->List.Flink )
    KeBugCheckEx(0xE4u, 1uLL, (ULONG_PTR)WorkItem, QueueType, 0LL);
  if ( (unsigned int)(QueueType - 7) <= 0x18 || QueueType >= 64 )
    KeBugCheckEx(0xE4u, 6uLL, (ULONG_PTR)WorkItem, QueueType, 0LL);
  WorkerRoutine = WorkItem->WorkerRoutine;
  if ( (unsigned __int64)WorkerRoutine <= MmUserProbeAddress )
    KeBugCheckEx(0xE4u, 7uLL, (ULONG_PTR)WorkItem, (ULONG_PTR)WorkerRoutine, 0LL);
  if ( (unsigned int)QueueType >= MaximumWorkQueue )
    v5 = QueueType - 32;
  else
    v5 = ExpBuiltinPriorities[QueueType];
  v15 = 0;
  v6 = 0;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  ParentNode = KeGetCurrentPrcb()->ParentNode;
  v9 = ParentNode->Affinity.Reserved[0];
  LOWORD(NextNode) = ParentNode->Affinity.Reserved[0];
  if ( v9 >= (unsigned __int16)KeNumberNodes )
  {
LABEL_18:
    if ( (_UNKNOWN *)KeNodeBlock[ParentNode->Affinity.Reserved[0]] == (_UNKNOWN *)((char *)&KiNodeInit
                                                                                 + 256
                                                                                 * (unsigned __int64)ParentNode->Affinity.Reserved[0])
      || (*((_DWORD *)&ParentNode[5].IdleCpuSet + 3) & 2) == 0 )
    {
      goto LABEL_22;
    }
    v11 = (__int64)ParentNode;
  }
  else
  {
    while ( 1 )
    {
      v11 = KeNodeBlock[(unsigned __int16)NextNode];
      if ( (_UNKNOWN *)v11 != (_UNKNOWN *)((char *)&KiNodeInit + 256 * (unsigned __int64)(unsigned __int16)NextNode) )
      {
        if ( v11 )
        {
          if ( (*(_DWORD *)(v11 + 1308) & 1) != 0 )
          {
            v12 = *(_QWORD *)(v11 + 256);
            if ( (v12 & 1) == 0 )
            {
              if ( v12 )
              {
                v13 = *(_DWORD *)(v12 + 704) & 0x3FFF;
                if ( (*(_DWORD *)(v12 + 704) & 0x4000) != 0 )
                  v13 = (*(_DWORD *)(v12 + 704) & 0x3FFF) - 1;
                if ( v13 >= (2 * *(_DWORD *)(v12 + 708)) >> 1 )
                  break;
              }
            }
          }
        }
      }
      NextNode = MmGetNextNode(v9, &v15);
      if ( NextNode >= v14 )
        goto LABEL_18;
    }
  }
  ExpQueueWorkItemNode(WorkItem, v5, v11, 0LL);
  v6 = 1;
LABEL_22:
  __writecr8(CurrentIrql);
  if ( !v6 )
    KeBugCheckEx(0xE4u, 5uLL, (ULONG_PTR)WorkItem, v3, 0xFFFFFFFFFFFFFFFFuLL);
}
