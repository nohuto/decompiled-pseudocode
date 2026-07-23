/*
 * XREFs of ExAcquireFastMutex @ 0x14002CC20
 * Callers:
 *     RawCompletionRoutine @ 0x14000732C (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x140007468 (RawInitiateDeleteVolume.c)
 *     PopGetPowerSettingValue @ 0x14000851C (PopGetPowerSettingValue.c)
 *     ExFreeLargePool @ 0x140010760 (ExFreeLargePool.c)
 *     ExpAllocateBigPool @ 0x140011650 (ExpAllocateBigPool.c)
 *     CcUnmapVacbArray @ 0x140017B40 (CcUnmapVacbArray.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x140018534 (CcAcquireBcbLockAndVacbLock.c)
 *     CcZeroEndOfLastPage @ 0x1400243D0 (CcZeroEndOfLastPage.c)
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     IoDeleteDevice @ 0x14007F38C (IoDeleteDevice.c)
 *     FsRtlAddLargeMcbEntry @ 0x14008BDE8 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x14008BE4C (FsRtlTruncateLargeMcb.c)
 *     CmpWaitForLateUnloadWorker @ 0x14009DBF4 (CmpWaitForLateUnloadWorker.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400A0D78 (FsRtlpCancelOplockRHIrp.c)
 *     CcGetFlushedValidData @ 0x1400A7C58 (CcGetFlushedValidData.c)
 *     CcPrepareMdlWrite @ 0x1400AF55C (CcPrepareMdlWrite.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400B0500 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlpWaitOnIrp @ 0x1400B215C (FsRtlpWaitOnIrp.c)
 *     CcAcquireByteRangeForWrite @ 0x1400C9C60 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPages @ 0x1400CD440 (CcGetDirtyPages.c)
 *     CcWriteBehindInternal @ 0x1400E5DD0 (CcWriteBehindInternal.c)
 *     CcDeleteMbcb @ 0x14010C600 (CcDeleteMbcb.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14010F424 (FsRtlpCancelExclusiveIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140111FA4 (PnpUnregisterPlugPlayNotification.c)
 *     PopRunNormalIrpWorkers @ 0x140112EB4 (PopRunNormalIrpWorkers.c)
 *     PopRunMaximumIrpWorkers @ 0x14012520C (PopRunMaximumIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x1401252C0 (PopCreateDynamicIrpWorker.c)
 *     PopIrpWorker @ 0x14012C0E4 (PopIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x14013A0EC (PopInitilizeAcDcSettings.c)
 *     CcUnmapInactiveViews @ 0x140141F0C (CcUnmapInactiveViews.c)
 *     PopNotifyBrightnessChangesWorker @ 0x14014A990 (PopNotifyBrightnessChangesWorker.c)
 *     PopIrpWorkerControl @ 0x14014CD2C (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x1401B1B80 (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x1401B1F54 (CcGetLsnForFileObject.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1401B8248 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1401B8310 (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1401B83B0 (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1401B8420 (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1401B855C (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1401B8594 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1401B8608 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x1401B87B0 (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401B944C (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401B9524 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlInsertPerStreamContext @ 0x1401B9FFC (FsRtlInsertPerStreamContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401BA1C4 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlRemovePerStreamContext @ 0x1401BA4B4 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x1401CDD78 (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x1401DB18C (KiOpPatchCode.c)
 *     RawVerifyVolume @ 0x14021037C (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x140215CBC (RtlpTraceDatabaseAcquireLock.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     ExDeferredFreePool @ 0x1402557B0 (ExDeferredFreePool.c)
 *     NtSetSystemPowerState @ 0x1403CF658 (NtSetSystemPowerState.c)
 *     PopFlushVolumes @ 0x1403D0D4C (PopFlushVolumes.c)
 *     PopFlushVolumeWorker @ 0x1403D0FC4 (PopFlushVolumeWorker.c)
 *     PopGracefulShutdown @ 0x1403DEE20 (PopGracefulShutdown.c)
 *     PopCheckPowerSourceAfterRtcWakeTimerWorker @ 0x1403DF42C (PopCheckPowerSourceAfterRtcWakeTimerWorker.c)
 *     WheapCreateTriageDumpFromPreviousSession @ 0x1403E07FC (WheapCreateTriageDumpFromPreviousSession.c)
 *     CmpGetMappingHiveForString @ 0x1403E1798 (CmpGetMappingHiveForString.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x1403E40D4 (CmpRunDownDelayDerefKCBEngine.c)
 *     PfGetCompletedTrace @ 0x1403E80E4 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1403E8368 (PfTTraceListAdd.c)
 *     PfSnEndTrace @ 0x1403EA594 (PfSnEndTrace.c)
 *     RawDispatch @ 0x1403EAF28 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x1403EB128 (RawReadWriteDeviceControl.c)
 *     RawClose @ 0x1403ECF90 (RawClose.c)
 *     RawCreate @ 0x1403ED014 (RawCreate.c)
 *     RawCleanup @ 0x1403ED17C (RawCleanup.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1403EFB18 (FsRtlTeardownPerStreamContexts.c)
 *     RawMountVolume @ 0x1403EFCEC (RawMountVolume.c)
 *     PnpProcessAssignResources @ 0x1403F0F18 (PnpProcessAssignResources.c)
 *     IopDestroyDeviceNode @ 0x1403F1B98 (IopDestroyDeviceNode.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F1CFC (PoRegisterPowerSettingCallback.c)
 *     PopCallPowerSettingCallback @ 0x1403F25C0 (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1403F2AC8 (PopLogDisabledSleepReason.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F38F8 (PnpDeviceObjectFromDeviceInstance.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1403F4EB0 (PopDispatchPowerSettingCallbacks.c)
 *     PopUmpoProcessPowerMessage @ 0x1403F6B18 (PopUmpoProcessPowerMessage.c)
 *     PopSetPowerSettingValue @ 0x1403F6F90 (PopSetPowerSettingValue.c)
 *     CmpDelayDerefKCBWorker @ 0x1404003D0 (CmpDelayDerefKCBWorker.c)
 *     EtwpSetProviderTraitsCommon @ 0x1404087F4 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14040C914 (EtwpReleaseProviderTraitsReference.c)
 *     CmpDelayCloseWorker @ 0x1404245C0 (CmpDelayCloseWorker.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14042CC68 (FsRtlAcquireToCreateMappedSection.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14043622C (CmpDelayDerefKeyControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x1404362E0 (CmpAllocateKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x140436470 (CmpFreeKeyControlBlock.c)
 *     DbgkCopyProcessDebugPort @ 0x14045E744 (DbgkCopyProcessDebugPort.c)
 *     PnpCleanupDeviceRegistryValues @ 0x140483B88 (PnpCleanupDeviceRegistryValues.c)
 *     PnpOrphanNotification @ 0x140483BDC (PnpOrphanNotification.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404887EC (PiUEventQueueBroadcastEventEntry.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x140488F5C (PiUEventNotifyDeviceInterfaceChange.c)
 *     PnpNotifyDeviceClassChange @ 0x1404891B8 (PnpNotifyDeviceClassChange.c)
 *     PiUEventProcessEventWorker @ 0x140489744 (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x1404898C4 (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x140489C70 (PiUEventNotifyDeviceInstanceChange.c)
 *     PiUEventHandleUnregisterClient @ 0x140489D60 (PiUEventHandleUnregisterClient.c)
 *     PiUEventFreeClientRegistrationContext @ 0x140489DA4 (PiUEventFreeClientRegistrationContext.c)
 *     PnpNotifyTargetDeviceChange @ 0x14048A58C (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x14048A778 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x14048A9FC (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x14048AAD0 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x14048AB64 (PiUEventReferenceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x14048AC64 (PnpInsertEventInQueue.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048B010 (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PnpDeviceEventWorker @ 0x14048B32C (PnpDeviceEventWorker.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048BBB8 (PiDqObjectManagerServiceActionQueue.c)
 *     PnpProcessDeferredRegistrations @ 0x14048CB60 (PnpProcessDeferredRegistrations.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x14048D0EC (PiDqObjectManagerUnregisterQuery.c)
 *     PiUEventHandleGetEvent @ 0x14048D158 (PiUEventHandleGetEvent.c)
 *     PiUEventNotifyUserMode @ 0x14048D5A4 (PiUEventNotifyUserMode.c)
 *     PiUEventHandleRegistration @ 0x14048DCAC (PiUEventHandleRegistration.c)
 *     CmpAddToDelayedClose @ 0x1404A8B94 (CmpAddToDelayedClose.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1404B5D6C (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x1404BC148 (PfSnGetCompletedTrace.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1404BC734 (FsRtlDeleteKeyFromTunnelCache.c)
 *     CmpDelayFreeCmRm @ 0x1404BD054 (CmpDelayFreeCmRm.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1404C18A4 (PiDqObjectManagerHandleObjectEvent.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1404CBD00 (CmWorkerEngineQueueWorkItem.c)
 *     CmpDelayFreeRMWorker @ 0x1404CD388 (CmpDelayFreeRMWorker.c)
 *     PnpBusTypeGuidGet @ 0x1404D0040 (PnpBusTypeGuidGet.c)
 *     RawScanDeletedList @ 0x1404D14A0 (RawScanDeletedList.c)
 *     DbgkClearProcessDebugObject @ 0x1404D30AC (DbgkClearProcessDebugObject.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1404D350C (PfSnTracingStateExWorkerRoutine.c)
 *     IoGetDeviceProperty @ 0x1404DC2F8 (IoGetDeviceProperty.c)
 *     FsRtlFindInTunnelCache @ 0x1404E4A10 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x1404E6068 (FsRtlAddToTunnelCache.c)
 *     PopGetSettingValue @ 0x140501400 (PopGetSettingValue.c)
 *     PopGetSettingNotificationName @ 0x140502D2C (PopGetSettingNotificationName.c)
 *     PnpBusTypeGuidGetIndex @ 0x14050B60C (PnpBusTypeGuidGetIndex.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x14050D06C (PnpGetResourceRequirementsForAssignTable.c)
 *     PnpFreeDeviceInstancePath @ 0x14050D434 (PnpFreeDeviceInstancePath.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x14050D7D8 (PnpMapDeviceObjectToDeviceInstance.c)
 *     PiQueryResourceRequirements @ 0x14050E808 (PiQueryResourceRequirements.c)
 *     CmpWorkerEngineWorker @ 0x1405179C8 (CmpWorkerEngineWorker.c)
 *     CmpRemoveFromDelayedDeref @ 0x1405192D8 (CmpRemoveFromDelayedDeref.c)
 *     CmpRemoveFromDelayedClose @ 0x14051934C (CmpRemoveFromDelayedClose.c)
 *     PiUEventBroadcastEventWorker @ 0x140528570 (PiUEventBroadcastEventWorker.c)
 *     PiUEventHandleVetoEvent @ 0x1405296AC (PiUEventHandleVetoEvent.c)
 *     RawUserFsCtrl @ 0x140529F94 (RawUserFsCtrl.c)
 *     IoRegisterPlugPlayNotification @ 0x14052A9FC (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x14052AD9C (PnpDeferNotification.c)
 *     PopDispatchNotificationsToList @ 0x14052B6C0 (PopDispatchNotificationsToList.c)
 *     PopDiagTraceControlCallback @ 0x14052BF20 (PopDiagTraceControlCallback.c)
 *     PoUnregisterPowerSettingCallback @ 0x14052E388 (PoUnregisterPowerSettingCallback.c)
 *     ExSwapinWorkerThreads @ 0x14052F230 (ExSwapinWorkerThreads.c)
 *     PopFreeSessionState @ 0x140533EC8 (PopFreeSessionState.c)
 *     IopLegacyResourceAllocation @ 0x140554EEC (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x140555054 (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140556118 (PnpBuildCmResourceLists.c)
 *     PopRequestShutdownWait @ 0x14056C1C0 (PopRequestShutdownWait.c)
 *     PoVolumeDevice @ 0x14056C9A4 (PoVolumeDevice.c)
 *     PfTInitialize @ 0x140571E44 (PfTInitialize.c)
 *     PfTStart @ 0x1405729E0 (PfTStart.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140575F80 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     KeRegisterProcessorChangeCallback @ 0x1405785A4 (KeRegisterProcessorChangeCallback.c)
 *     CmpAddStringToMapping @ 0x14057F61C (CmpAddStringToMapping.c)
 *     WheaCrashDumpInitializationComplete @ 0x140581758 (WheaCrashDumpInitializationComplete.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1405FCD3C (CmWorkerEngineDequeueWorkItem.c)
 *     DbgkOpenProcessDebugPort @ 0x140617E54 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x14061822C (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x1406184F4 (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140619050 (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x140619330 (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140619A4C (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140619D74 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140619EE8 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x140621240 (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140622C98 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14062BBB8 (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x14062DD3C (PnpRestartDeviceNode.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140631D30 (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1406421A4 (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1406423B0 (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x140642430 (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1406424D0 (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140642618 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1406426CC (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140642714 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x140642D34 (PnpRemoveEventFromQueue.c)
 *     PfTCleanup @ 0x140669854 (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x14066BF50 (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x14066C00C (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x14066DF84 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x1406AD94C (ExpUpdateDebugInfo.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024B6C (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C5C80 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C5CC8 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x140159BBC (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 */

void __stdcall ExAcquireFastMutex(PFAST_MUTEX FastMutex)
{
  struct _KTHREAD *CurrentThread; // rbx
  unsigned int AbEntrySummary; // edx
  __int64 v4; // rcx
  __int64 v5; // rsi
  int SessionId; // eax
  __int16 v7; // ax
  unsigned __int8 CurrentIrql; // bl
  unsigned __int8 AbOrphanedEntrySummary; // si

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
  v5 = (__int64)&CurrentThread->LockEntries[v4];
  if ( !v5 )
  {
LABEL_21:
    _interlockedbittestandset((volatile signed __int32 *)&CurrentThread->116 + 1, 0xFu);
    goto LABEL_7;
  }
  if ( (unsigned __int64)FastMutex < qword_140326950 || (unsigned __int64)FastMutex >= qword_140326950 + 0x8000000000LL )
    SessionId = -1;
  else
    SessionId = MmGetSessionIdEx(CurrentThread->ApcState.Process);
  *(_DWORD *)(v5 + 40) = SessionId;
  *(_QWORD *)(v5 + 32) = (unsigned __int64)FastMutex & 0x7FFFFFFFFFFFFFFCLL;
LABEL_7:
  v7 = CurrentThread->SpecialApcDisable + 1;
  CurrentThread->SpecialApcDisable = v7;
  if ( !v7 && ($2B8565053CDC740D4E4887693DD8AC9E *)CurrentThread->ApcState.ApcListHead[0].Flink != &CurrentThread->152 )
    KiCheckForKernelApcDelivery();
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( !_interlockedbittestandreset(&FastMutex->Count, 0) )
    ExpAcquireFastMutexContended((ULONG_PTR)FastMutex);
  if ( v5 )
    *(_BYTE *)(v5 + 26) |= 1u;
  FastMutex->Owner = KeGetCurrentThread();
  FastMutex->OldIrql = CurrentIrql;
}
