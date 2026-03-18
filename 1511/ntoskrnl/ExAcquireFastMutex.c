/*
 * XREFs of ExAcquireFastMutex @ 0x14003D1D0
 * Callers:
 *     CcDeleteMbcb @ 0x14000D6AC (CcDeleteMbcb.c)
 *     CcAcquireByteRangeForWrite @ 0x14000DA70 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPages @ 0x14003B4D0 (CcGetDirtyPages.c)
 *     CcZeroEndOfLastPage @ 0x14003D0A0 (CcZeroEndOfLastPage.c)
 *     ExpAllocateBigPool @ 0x140041130 (ExpAllocateBigPool.c)
 *     ExFreeLargePool @ 0x1400892D0 (ExFreeLargePool.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcGetVacbMiss @ 0x1400AEA80 (CcGetVacbMiss.c)
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 *     CcUnmapVacbArray @ 0x1400B1DF0 (CcUnmapVacbArray.c)
 *     RawCompletionRoutine @ 0x1400C3328 (RawCompletionRoutine.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400C90E0 (FsRtlpCancelOplockRHIrp.c)
 *     FsRtlpWaitOnIrp @ 0x1400CC9E8 (FsRtlpWaitOnIrp.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400CEC98 (FsRtlPrivateInitializeFileLock.c)
 *     RawInitiateDeleteVolume @ 0x1400D0B18 (RawInitiateDeleteVolume.c)
 *     IoDeleteDevice @ 0x1400D0DC8 (IoDeleteDevice.c)
 *     CmpWaitForLateUnloadWorker @ 0x1400D2698 (CmpWaitForLateUnloadWorker.c)
 *     FsRtlAddLargeMcbEntry @ 0x1400D6C74 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x1400D6CD8 (FsRtlTruncateLargeMcb.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400E115C (CcAcquireBcbLockAndVacbLock.c)
 *     CcGetFlushedValidData @ 0x1400E9118 (CcGetFlushedValidData.c)
 *     PopGetPowerSettingValue @ 0x1400F0410 (PopGetPowerSettingValue.c)
 *     CcPrepareMdlWrite @ 0x1400F04A8 (CcPrepareMdlWrite.c)
 *     FsRtlpWaitForIoAtEof @ 0x140101EB4 (FsRtlpWaitForIoAtEof.c)
 *     FsRtlpCancelExclusiveIrp @ 0x140103A90 (FsRtlpCancelExclusiveIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x1401071B4 (PnpUnregisterPlugPlayNotification.c)
 *     PopRunNormalIrpWorkers @ 0x140118348 (PopRunNormalIrpWorkers.c)
 *     PopRunMaximumIrpWorkers @ 0x140119E0C (PopRunMaximumIrpWorkers.c)
 *     PopIrpWorker @ 0x1401212D0 (PopIrpWorker.c)
 *     PopCreateDynamicIrpWorker @ 0x140125DA8 (PopCreateDynamicIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x140136C9C (PopInitilizeAcDcSettings.c)
 *     CcUnmapInactiveViews @ 0x140138B9C (CcUnmapInactiveViews.c)
 *     PopNotifyBrightnessChangesWorker @ 0x140140F3C (PopNotifyBrightnessChangesWorker.c)
 *     PopIrpWorkerControl @ 0x140141DB8 (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x1401A90D8 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x1401A932C (CcGetLsnForFileObject.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1401AC4DC (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1401AC5A4 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1401AC644 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1401AC6B4 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1401AC7F0 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1401AC828 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1401AC89C (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x1401ACA44 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401AD1A4 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401AD27C (FsRtlpCancelWaitingIrp.c)
 *     FsRtlInsertPerStreamContext @ 0x1401AD958 (FsRtlInsertPerStreamContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401ADB20 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlRemovePerStreamContext @ 0x1401ADD3C (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x1401BF9A4 (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x1401CB744 (KiOpPatchCode.c)
 *     RawVerifyVolume @ 0x1401F6204 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x1401FBBE8 (RtlpTraceDatabaseAcquireLock.c)
 *     ExDeferredFreePool @ 0x140238000 (ExDeferredFreePool.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     PopFlushVolumes @ 0x1403A39C4 (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x1403A3C40 (PopFlushVolumeWorker.c)
 *     NtSetSystemPowerState @ 0x1403A3E04 (NtSetSystemPowerState.c)
 *     PopGracefulShutdown @ 0x1403B2154 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403B2740 (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x1403B3AC8 (WheapCreateTriageDumpFromPreviousSession.c)
 *     CmpGetMappingHiveForString @ 0x1403BC7AC (CmpGetMappingHiveForString.c)
 *     PiUEventHandleUnregisterClient @ 0x1403BDBA0 (PiUEventHandleUnregisterClient.c)
 *     PiUEventHandleGetEvent @ 0x1403BF838 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleRegistration @ 0x1403BFB78 (PiUEventHandleRegistration.c)
 *     PiUEventFreeClientRegistrationContext @ 0x1403C10AC (PiUEventFreeClientRegistrationContext.c)
 *     DbgkCopyProcessDebugPort @ 0x1403E38B4 (DbgkCopyProcessDebugPort.c)
 *     PfGetCompletedTrace @ 0x1403E7018 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1403E725C (PfTTraceListAdd.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x1403F9080 (FsRtlAcquireToCreateMappedSection.c)
 *     CmpDelayDerefKeyControlBlock @ 0x1403F9D0C (CmpDelayDerefKeyControlBlock.c)
 *     CmpDelayCloseWorker @ 0x1403F9EB0 (CmpDelayCloseWorker.c)
 *     CmpAddToDelayedClose @ 0x1403FB440 (CmpAddToDelayedClose.c)
 *     CmpDelayDerefKCBWorker @ 0x1403FB530 (CmpDelayDerefKCBWorker.c)
 *     EtwpReleaseProviderTraitsReference @ 0x140438D8C (EtwpReleaseProviderTraitsReference.c)
 *     PopSetPowerSettingValue @ 0x140448F44 (PopSetPowerSettingValue.c)
 *     PopUmpoProcessPowerMessage @ 0x1404496B8 (PopUmpoProcessPowerMessage.c)
 *     PopGetSettingNotificationName @ 0x14045429C (PopGetSettingNotificationName.c)
 *     PopGetSettingValue @ 0x140454584 (PopGetSettingValue.c)
 *     IopDestroyDeviceNode @ 0x140455E40 (IopDestroyDeviceNode.c)
 *     PoRegisterPowerSettingCallback @ 0x1404568F0 (PoRegisterPowerSettingCallback.c)
 *     PopDispatchPowerSettingCallbacks @ 0x140456D10 (PopDispatchPowerSettingCallbacks.c)
 *     PopCallPowerSettingCallback @ 0x140456E2C (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x140457DDC (PopLogDisabledSleepReason.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x140458C7C (PnpDeviceObjectFromDeviceInstance.c)
 *     IoGetDeviceProperty @ 0x1404596E0 (IoGetDeviceProperty.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14045D768 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14045E118 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x14045F638 (PiDqObjectManagerUnregisterQuery.c)
 *     EtwpSetProviderTraitsCommon @ 0x14046CAE8 (EtwpSetProviderTraitsCommon.c)
 *     RawMountVolume @ 0x140491570 (RawMountVolume.c)
 *     RawScanDeletedList @ 0x140491E64 (RawScanDeletedList.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x140491EA4 (FsRtlDeleteKeyFromTunnelCache.c)
 *     FsRtlFindInTunnelCache @ 0x140492444 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x140492590 (FsRtlAddToTunnelCache.c)
 *     RawCreate @ 0x1404936D4 (RawCreate.c)
 *     RawCleanup @ 0x140493A2C (RawCleanup.c)
 *     RawClose @ 0x140494064 (RawClose.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1404941A4 (FsRtlTeardownPerStreamContexts.c)
 *     CmpWorkerEngineWorker @ 0x140498C90 (CmpWorkerEngineWorker.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x140499880 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpDelayFreeCmRm @ 0x14049B2B0 (CmpDelayFreeCmRm.c)
 *     PnpOrphanNotification @ 0x1404A074C (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1404A078C (PnpCleanupDeviceRegistryValues.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1404AE288 (KeSynchronizeWithDynamicProcessors.c)
 *     PnpProcessAssignResources @ 0x1404B1780 (PnpProcessAssignResources.c)
 *     PfSnGetCompletedTrace @ 0x1404B38B8 (PfSnGetCompletedTrace.c)
 *     PopDispatchNotificationsToList @ 0x1404B4D24 (PopDispatchNotificationsToList.c)
 *     CmpRemoveFromDelayedDeref @ 0x1404BAD8C (CmpRemoveFromDelayedDeref.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1404BECFC (PiUEventNotifyDeviceInstanceChange.c)
 *     CmpRemoveFromDelayedClose @ 0x1404C082C (CmpRemoveFromDelayedClose.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404C1AE8 (PiUEventQueueBroadcastEventEntry.c)
 *     PnpFreeDeviceInstancePath @ 0x1404C21BC (PnpFreeDeviceInstancePath.c)
 *     CmpDelayFreeRMWorker @ 0x1404C2A84 (CmpDelayFreeRMWorker.c)
 *     PnpBusTypeGuidGet @ 0x1404C2D34 (PnpBusTypeGuidGet.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1404C6650 (PfSnTracingStateExWorkerRoutine.c)
 *     EtwpDisallowedGuidAddition @ 0x1404CFA30 (EtwpDisallowedGuidAddition.c)
 *     PfSnEndTrace @ 0x1404D2B18 (PfSnEndTrace.c)
 *     RawDispatch @ 0x1404D5D20 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x1404D5F20 (RawReadWriteDeviceControl.c)
 *     PnpInsertEventInQueue @ 0x1404DEFD8 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1404E03C8 (PiDqObjectManagerHandleObjectEvent.c)
 *     PnpDeviceEventWorker @ 0x1404E0578 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x1404E083C (PnpProcessDeferredRegistrations.c)
 *     PiUEventNotifyUserMode @ 0x1404E09F4 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x1404E0E88 (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1404E1078 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x1404E12F8 (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1404E13D0 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x1404E1464 (PiUEventReferenceEventEntry.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1404E17A0 (CmWorkerEngineQueueWorkItem.c)
 *     PiUEventProcessEventWorker @ 0x1404E1828 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x1404E19A8 (PiUEventDereferenceEventEntry.c)
 *     PnpNotifyDeviceClassChange @ 0x1404E1E04 (PnpNotifyDeviceClassChange.c)
 *     PiUEventBroadcastEventWorker @ 0x1404E24F4 (PiUEventBroadcastEventWorker.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1404E2ACC (PiUEventNotifyDeviceInterfaceChange.c)
 *     IoRegisterPlugPlayNotification @ 0x1404E90BC (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x1404E9464 (PnpDeferNotification.c)
 *     PiUEventHandleVetoEvent @ 0x1404EA320 (PiUEventHandleVetoEvent.c)
 *     RawUserFsCtrl @ 0x1404EB368 (RawUserFsCtrl.c)
 *     PoUnregisterPowerSettingCallback @ 0x1404EC230 (PoUnregisterPowerSettingCallback.c)
 *     PiQueryResourceRequirements @ 0x1404EFC24 (PiQueryResourceRequirements.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404F0CA0 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpBusTypeGuidGetIndex @ 0x1404F1620 (PnpBusTypeGuidGetIndex.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1404F189C (PnpGetResourceRequirementsForAssignTable.c)
 *     DbgkClearProcessDebugObject @ 0x1404F48C4 (DbgkClearProcessDebugObject.c)
 *     PopFreeSessionState @ 0x1404F49CC (PopFreeSessionState.c)
 *     ExSwapinWorkerThreads @ 0x1404F5C2C (ExSwapinWorkerThreads.c)
 *     PoDisableSleepStates @ 0x14051AEE4 (PoDisableSleepStates.c)
 *     PnpBuildCmResourceLists @ 0x140529948 (PnpBuildCmResourceLists.c)
 *     KeRegisterProcessorChangeCallback @ 0x140530BBC (KeRegisterProcessorChangeCallback.c)
 *     PopRequestShutdownWait @ 0x14053C988 (PopRequestShutdownWait.c)
 *     PfTInitialize @ 0x14054089C (PfTInitialize.c)
 *     PoVolumeDevice @ 0x140541E38 (PoVolumeDevice.c)
 *     CmpAddStringToMapping @ 0x140549E4C (CmpAddStringToMapping.c)
 *     WheaCrashDumpInitializationComplete @ 0x14054B4F4 (WheaCrashDumpInitializationComplete.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x14054CC98 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     PfTStart @ 0x14054CD4C (PfTStart.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1405DEDF0 (CmWorkerEngineDequeueWorkItem.c)
 *     CmpRemoveHiveFromMapping @ 0x1405E28F4 (CmpRemoveHiveFromMapping.c)
 *     DbgkOpenProcessDebugPort @ 0x1405EE178 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x1405EE548 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x1405EE810 (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x1405EF390 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x1405EF678 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x1405EFD9C (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x1405F00C8 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x1405F0234 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x1405F7484 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x1405F8D44 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x140601AB8 (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x14060388C (PnpRestartDeviceNode.c)
 *     IopReleaseResources @ 0x140603E54 (IopReleaseResources.c)
 *     IopLegacyResourceAllocation @ 0x1406045CC (IopLegacyResourceAllocation.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140607388 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x14060DCB4 (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x14060DEC0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14060DF40 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x14060DFE0 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x14060E128 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x14060E1DC (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x14060E224 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x14060E844 (PnpRemoveEventFromQueue.c)
 *     PfTCleanup @ 0x14063154C (PfTCleanup.c)
 *     PoReenableSleepStates @ 0x140633A24 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x140635A0C (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x14066CC94 (ExpUpdateDebugInfo.c)
 *     ViExAcquireFastMutexCommon @ 0x1406CE514 (ViExAcquireFastMutexCommon.c)
 * Callees:
 *     KiCheckForKernelApcDelivery @ 0x140020550 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400209FC (ExpAcquireFastMutexContended.c)
 *     MmGetSessionIdEx @ 0x14003AFB0 (MmGetSessionIdEx.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14014FFF8 (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  ULONG_PTR v1; // rdi
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v4; // rcx
  char *v5; // rsi
  int SessionId; // eax
  __int16 v7; // ax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 AbOrphanedEntrySummary; // si

  v1 = (ULONG_PTR)FastMutex;
  if ( !KiAbEnabled )
  {
    v5 = 0LL;
    goto LABEL_11;
  }
  CurrentThread = KeGetCurrentThread();
  if ( (KeGetPcr()->Prcb.DpcRequestSummary & 0x10001) != 0 )
    KeBugCheckEx(0x192u, (ULONG_PTR)CurrentThread, (ULONG_PTR)FastMutex, KeGetCurrentIrql(), 0LL);
  --CurrentThread->SpecialApcDisable;
  if ( !CurrentThread->AbEntrySummary )
  {
    v5 = 0LL;
    if ( !CurrentThread->AbOrphanedEntrySummary )
    {
      if ( (WORD2(PerfGlobalGroupMask) & 0x200) != 0 )
        EtwTraceAutoBoostEntryExhaustion(CurrentThread, FastMutex);
      goto LABEL_21;
    }
    AbOrphanedEntrySummary = CurrentThread->AbOrphanedEntrySummary;
    CurrentThread->AbOrphanedEntrySummary = 0;
    CurrentThread->AbEntrySummary |= AbOrphanedEntrySummary;
  }
  AbEntrySummary = CurrentThread->AbEntrySummary;
  _BitScanForward((unsigned int *)&v4, AbEntrySummary);
  CurrentThread->AbEntrySummary = AbEntrySummary & ~(1 << v4);
  FastMutex = (PFAST_MUTEX)(96 * v4);
  v5 = (char *)CurrentThread->LockEntries + (_QWORD)FastMutex;
  if ( !v5 )
  {
LABEL_21:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_8;
  }
  if ( v1 + 0x70000000000LL <= 0x7FFFFFFFFFLL )
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  else
    SessionId = -1;
  *((_DWORD *)v5 + 10) = SessionId;
  FastMutex = (PFAST_MUTEX)0x7FFFFFFFFFFFFFFCLL;
  *((_QWORD *)v5 + 4) = v1 & 0x7FFFFFFFFFFFFFFCLL;
LABEL_8:
  v7 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v7;
  if ( !v7 && ($E81C3296F15336D9BF9B2D43BB137B25 *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery((__int64)FastMutex);
LABEL_11:
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v1, 0) )
    ExpAcquireFastMutexContended(v1, (__int64)v5);
  if ( v5 )
    v5[26] |= 1u;
  *(_QWORD *)(v1 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v1 + 48) = CurrentIrql;
}
