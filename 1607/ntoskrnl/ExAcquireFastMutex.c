/*
 * XREFs of ExAcquireFastMutex @ 0x14002D0A0
 * Callers:
 *     RawCompletionRoutine @ 0x1400071BC (RawCompletionRoutine.c)
 *     RawInitiateDeleteVolume @ 0x1400072F8 (RawInitiateDeleteVolume.c)
 *     PopGetPowerSettingValue @ 0x1400089A8 (PopGetPowerSettingValue.c)
 *     ExFreeLargePool @ 0x140010BE0 (ExFreeLargePool.c)
 *     ExpAllocateBigPool @ 0x140011AD0 (ExpAllocateBigPool.c)
 *     CcUnmapVacbArray @ 0x140017FC0 (CcUnmapVacbArray.c)
 *     CcAcquireBcbLockAndVacbLock @ 0x1400189B4 (CcAcquireBcbLockAndVacbLock.c)
 *     CcZeroEndOfLastPage @ 0x140024850 (CcZeroEndOfLastPage.c)
 *     CcPinFileData @ 0x140031DE0 (CcPinFileData.c)
 *     IoDeleteDevice @ 0x14007F30C (IoDeleteDevice.c)
 *     CmpWaitForLateUnloadWorker @ 0x140087264 (CmpWaitForLateUnloadWorker.c)
 *     CcDeleteMbcb @ 0x140088410 (CcDeleteMbcb.c)
 *     FsRtlAddLargeMcbEntry @ 0x14008C688 (FsRtlAddLargeMcbEntry.c)
 *     FsRtlTruncateLargeMcb @ 0x14008C6EC (FsRtlTruncateLargeMcb.c)
 *     FsRtlpCancelOplockRHIrp @ 0x1400A2450 (FsRtlpCancelOplockRHIrp.c)
 *     CcGetFlushedValidData @ 0x1400A96D8 (CcGetFlushedValidData.c)
 *     CcPrepareMdlWrite @ 0x1400B161C (CcPrepareMdlWrite.c)
 *     FsRtlPrivateInitializeFileLock @ 0x1400B25C0 (FsRtlPrivateInitializeFileLock.c)
 *     FsRtlpWaitOnIrp @ 0x1400B42DC (FsRtlpWaitOnIrp.c)
 *     CcAcquireByteRangeForWrite @ 0x1400CBDC0 (CcAcquireByteRangeForWrite.c)
 *     CcGetDirtyPages @ 0x1400CF5A0 (CcGetDirtyPages.c)
 *     CcWriteBehindInternal @ 0x1400E7F30 (CcWriteBehindInternal.c)
 *     FsRtlpCancelExclusiveIrp @ 0x14010EEC0 (FsRtlpCancelExclusiveIrp.c)
 *     PnpUnregisterPlugPlayNotification @ 0x140111A40 (PnpUnregisterPlugPlayNotification.c)
 *     PopRunNormalIrpWorkers @ 0x140112944 (PopRunNormalIrpWorkers.c)
 *     PopRunMaximumIrpWorkers @ 0x140124C9C (PopRunMaximumIrpWorkers.c)
 *     PopCreateDynamicIrpWorker @ 0x140124D50 (PopCreateDynamicIrpWorker.c)
 *     PopIrpWorker @ 0x14012BB74 (PopIrpWorker.c)
 *     PopInitilizeAcDcSettings @ 0x140139B7C (PopInitilizeAcDcSettings.c)
 *     CcUnmapInactiveViews @ 0x14014199C (CcUnmapInactiveViews.c)
 *     PopNotifyBrightnessChangesWorker @ 0x14014A420 (PopNotifyBrightnessChangesWorker.c)
 *     PopIrpWorkerControl @ 0x14014C7BC (PopIrpWorkerControl.c)
 *     CcRepinBcb @ 0x1401B1C9C (CcRepinBcb.c)
 *     CcGetLsnForFileObject @ 0x1401B2070 (CcGetLsnForFileObject.c)
 *     FsRtlGetNextLargeMcbEntry @ 0x1401B8474 (FsRtlGetNextLargeMcbEntry.c)
 *     FsRtlLookupLargeMcbEntry @ 0x1401B853C (FsRtlLookupLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntry @ 0x1401B85DC (FsRtlLookupLastLargeMcbEntry.c)
 *     FsRtlLookupLastLargeMcbEntryAndIndex @ 0x1401B864C (FsRtlLookupLastLargeMcbEntryAndIndex.c)
 *     FsRtlNumberOfRunsInLargeMcb @ 0x1401B8788 (FsRtlNumberOfRunsInLargeMcb.c)
 *     FsRtlRemoveLargeMcbEntry @ 0x1401B87C0 (FsRtlRemoveLargeMcbEntry.c)
 *     FsRtlResetLargeMcb @ 0x1401B8834 (FsRtlResetLargeMcb.c)
 *     FsRtlSplitLargeMcb @ 0x1401B89DC (FsRtlSplitLargeMcb.c)
 *     FsRtlpCancelReadOnlyOplockIrp @ 0x1401B96F8 (FsRtlpCancelReadOnlyOplockIrp.c)
 *     FsRtlpCancelWaitingIrp @ 0x1401B97D0 (FsRtlpCancelWaitingIrp.c)
 *     FsRtlInsertPerStreamContext @ 0x1401BA118 (FsRtlInsertPerStreamContext.c)
 *     FsRtlLookupPerStreamContextInternal @ 0x1401BA2E0 (FsRtlLookupPerStreamContextInternal.c)
 *     FsRtlRemovePerStreamContext @ 0x1401BA5D0 (FsRtlRemovePerStreamContext.c)
 *     PnpDisableUserModeNotifications @ 0x1401CDF2C (PnpDisableUserModeNotifications.c)
 *     KiOpPatchCode @ 0x1401DB360 (KiOpPatchCode.c)
 *     RawVerifyVolume @ 0x140210550 (RawVerifyVolume.c)
 *     RtlpTraceDatabaseAcquireLock @ 0x140215E90 (RtlpTraceDatabaseAcquireLock.c)
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
 *     PfGetCompletedTrace @ 0x1403E6AB4 (PfGetCompletedTrace.c)
 *     PfTTraceListAdd @ 0x1403E6D38 (PfTTraceListAdd.c)
 *     PfSnEndTrace @ 0x1403E8F64 (PfSnEndTrace.c)
 *     RawDispatch @ 0x1403E98F8 (RawDispatch.c)
 *     RawReadWriteDeviceControl @ 0x1403E9AF8 (RawReadWriteDeviceControl.c)
 *     RawClose @ 0x1403EB960 (RawClose.c)
 *     RawCreate @ 0x1403EB9E4 (RawCreate.c)
 *     RawCleanup @ 0x1403EBB4C (RawCleanup.c)
 *     FsRtlTeardownPerStreamContexts @ 0x1403EE4E8 (FsRtlTeardownPerStreamContexts.c)
 *     RawMountVolume @ 0x1403EE6BC (RawMountVolume.c)
 *     PiUEventNotifyDeviceInterfaceChange @ 0x1403EF058 (PiUEventNotifyDeviceInterfaceChange.c)
 *     PiUEventProcessEventWorker @ 0x1403EF31C (PiUEventProcessEventWorker.c)
 *     PiUEventDereferenceEventEntry @ 0x1403EF49C (PiUEventDereferenceEventEntry.c)
 *     PiUEventNotifyDeviceInstanceChange @ 0x1403EF800 (PiUEventNotifyDeviceInstanceChange.c)
 *     PnpDeviceEventWorker @ 0x1403EF9F0 (PnpDeviceEventWorker.c)
 *     PnpProcessDeferredRegistrations @ 0x1403EFCC0 (PnpProcessDeferredRegistrations.c)
 *     PiUEventNotifyUserMode @ 0x1403EFE78 (PiUEventNotifyUserMode.c)
 *     PnpNotifyTargetDeviceChange @ 0x1403F0314 (PnpNotifyTargetDeviceChange.c)
 *     PiUEventNotifyTargetDeviceChange @ 0x1403F0500 (PiUEventNotifyTargetDeviceChange.c)
 *     PiUEventNotifyClient @ 0x1403F0784 (PiUEventNotifyClient.c)
 *     PiUEventNotifyClientPendingEvent @ 0x1403F0858 (PiUEventNotifyClientPendingEvent.c)
 *     PiUEventReferenceEventEntry @ 0x1403F08EC (PiUEventReferenceEventEntry.c)
 *     PnpInsertEventInQueue @ 0x1403F0BD4 (PnpInsertEventInQueue.c)
 *     PnpNotifyDeviceClassChange @ 0x1403F0E40 (PnpNotifyDeviceClassChange.c)
 *     PnpProcessAssignResources @ 0x1403F2054 (PnpProcessAssignResources.c)
 *     IopDestroyDeviceNode @ 0x1403F2CD4 (IopDestroyDeviceNode.c)
 *     PoRegisterPowerSettingCallback @ 0x1403F2E38 (PoRegisterPowerSettingCallback.c)
 *     PopCallPowerSettingCallback @ 0x1403F36FC (PopCallPowerSettingCallback.c)
 *     PopLogDisabledSleepReason @ 0x1403F3C04 (PopLogDisabledSleepReason.c)
 *     PnpDeviceObjectFromDeviceInstance @ 0x1403F4A34 (PnpDeviceObjectFromDeviceInstance.c)
 *     PopDispatchPowerSettingCallbacks @ 0x1403F5FEC (PopDispatchPowerSettingCallbacks.c)
 *     PopUmpoProcessPowerMessage @ 0x1403F7C58 (PopUmpoProcessPowerMessage.c)
 *     PopSetPowerSettingValue @ 0x1403F80D0 (PopSetPowerSettingValue.c)
 *     CmpDelayDerefKCBWorker @ 0x140401510 (CmpDelayDerefKCBWorker.c)
 *     EtwpSetProviderTraitsCommon @ 0x140409934 (EtwpSetProviderTraitsCommon.c)
 *     EtwpReleaseProviderTraitsReference @ 0x14040DA54 (EtwpReleaseProviderTraitsReference.c)
 *     CmpDelayCloseWorker @ 0x1404256F0 (CmpDelayCloseWorker.c)
 *     FsRtlAcquireToCreateMappedSection @ 0x14042DD98 (FsRtlAcquireToCreateMappedSection.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14043735C (CmpDelayDerefKeyControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x140437410 (CmpAllocateKeyControlBlock.c)
 *     CmpFreeKeyControlBlock @ 0x1404375A0 (CmpFreeKeyControlBlock.c)
 *     DbgkCopyProcessDebugPort @ 0x14045F874 (DbgkCopyProcessDebugPort.c)
 *     PiUEventHandleUnregisterClient @ 0x14048A3D8 (PiUEventHandleUnregisterClient.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14048A41C (PiUEventFreeClientRegistrationContext.c)
 *     PiDqObjectManagerEnumerateAndRegisterQuery @ 0x14048AD7C (PiDqObjectManagerEnumerateAndRegisterQuery.c)
 *     PiDqObjectManagerServiceActionQueue @ 0x14048B654 (PiDqObjectManagerServiceActionQueue.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x14048CAD8 (PiDqObjectManagerUnregisterQuery.c)
 *     PiUEventHandleGetEvent @ 0x14048CB44 (PiUEventHandleGetEvent.c)
 *     PiUEventHandleRegistration @ 0x14048D21C (PiUEventHandleRegistration.c)
 *     CmpRunDownDelayDerefKCBEngine @ 0x14049B1B4 (CmpRunDownDelayDerefKCBEngine.c)
 *     CmpWorkerEngineWorker @ 0x14049F5BC (CmpWorkerEngineWorker.c)
 *     CmpRemoveFromDelayedDeref @ 0x1404A0ECC (CmpRemoveFromDelayedDeref.c)
 *     CmpRemoveFromDelayedClose @ 0x1404A0F40 (CmpRemoveFromDelayedClose.c)
 *     CmpAddToDelayedClose @ 0x1404BCE64 (CmpAddToDelayedClose.c)
 *     PnpOrphanNotification @ 0x1404C7BE0 (PnpOrphanNotification.c)
 *     PnpCleanupDeviceRegistryValues @ 0x1404C7C20 (PnpCleanupDeviceRegistryValues.c)
 *     PnpGetResourceRequirementsForAssignTable @ 0x1404C866C (PnpGetResourceRequirementsForAssignTable.c)
 *     PiQueryResourceRequirements @ 0x1404C90AC (PiQueryResourceRequirements.c)
 *     KeSynchronizeWithDynamicProcessors @ 0x1404D22CC (KeSynchronizeWithDynamicProcessors.c)
 *     PfSnGetCompletedTrace @ 0x1404D8B44 (PfSnGetCompletedTrace.c)
 *     FsRtlDeleteKeyFromTunnelCache @ 0x1404D9130 (FsRtlDeleteKeyFromTunnelCache.c)
 *     CmpDelayFreeCmRm @ 0x1404D9A50 (CmpDelayFreeCmRm.c)
 *     PiDqObjectManagerHandleObjectEvent @ 0x1404DE2A0 (PiDqObjectManagerHandleObjectEvent.c)
 *     PnpBusTypeGuidGetIndex @ 0x1404E8F9C (PnpBusTypeGuidGetIndex.c)
 *     CmWorkerEngineQueueWorkItem @ 0x1404E9AA4 (CmWorkerEngineQueueWorkItem.c)
 *     PnpFreeDeviceInstancePath @ 0x1404E9C44 (PnpFreeDeviceInstancePath.c)
 *     CmpDelayFreeRMWorker @ 0x1404EB204 (CmpDelayFreeRMWorker.c)
 *     PiUEventQueueBroadcastEventEntry @ 0x1404EB59C (PiUEventQueueBroadcastEventEntry.c)
 *     PnpMapDeviceObjectToDeviceInstance @ 0x1404EDDBC (PnpMapDeviceObjectToDeviceInstance.c)
 *     PnpBusTypeGuidGet @ 0x1404EDF74 (PnpBusTypeGuidGet.c)
 *     RawScanDeletedList @ 0x1404EF3DC (RawScanDeletedList.c)
 *     DbgkClearProcessDebugObject @ 0x1404F0FB8 (DbgkClearProcessDebugObject.c)
 *     PfSnTracingStateExWorkerRoutine @ 0x1404F1418 (PfSnTracingStateExWorkerRoutine.c)
 *     IoGetDeviceProperty @ 0x1404F936C (IoGetDeviceProperty.c)
 *     FsRtlFindInTunnelCache @ 0x140501A80 (FsRtlFindInTunnelCache.c)
 *     FsRtlAddToTunnelCache @ 0x1405030D8 (FsRtlAddToTunnelCache.c)
 *     PopGetSettingValue @ 0x14051E398 (PopGetSettingValue.c)
 *     PopGetSettingNotificationName @ 0x14051FCC4 (PopGetSettingNotificationName.c)
 *     PiUEventBroadcastEventWorker @ 0x140528030 (PiUEventBroadcastEventWorker.c)
 *     PiUEventHandleVetoEvent @ 0x14052916C (PiUEventHandleVetoEvent.c)
 *     RawUserFsCtrl @ 0x140529A54 (RawUserFsCtrl.c)
 *     PopDispatchNotificationsToList @ 0x14052AA70 (PopDispatchNotificationsToList.c)
 *     PopDiagTraceControlCallback @ 0x14052B2D0 (PopDiagTraceControlCallback.c)
 *     IoRegisterPlugPlayNotification @ 0x14052BB14 (IoRegisterPlugPlayNotification.c)
 *     PnpDeferNotification @ 0x14052BEB4 (PnpDeferNotification.c)
 *     PoUnregisterPowerSettingCallback @ 0x14052DE48 (PoUnregisterPowerSettingCallback.c)
 *     ExSwapinWorkerThreads @ 0x14052ECF0 (ExSwapinWorkerThreads.c)
 *     PopFreeSessionState @ 0x140533988 (PopFreeSessionState.c)
 *     IopLegacyResourceAllocation @ 0x1405549AC (IopLegacyResourceAllocation.c)
 *     IopReleaseResources @ 0x140554B14 (IopReleaseResources.c)
 *     PnpBuildCmResourceLists @ 0x140555BD8 (PnpBuildCmResourceLists.c)
 *     PopRequestShutdownWait @ 0x14056BC80 (PopRequestShutdownWait.c)
 *     PoVolumeDevice @ 0x14056C464 (PoVolumeDevice.c)
 *     PfTInitialize @ 0x140571904 (PfTInitialize.c)
 *     PfTStart @ 0x1405724A0 (PfTStart.c)
 *     PiUEventNotifyDeviceInstancePropertyChange @ 0x140575A40 (PiUEventNotifyDeviceInstancePropertyChange.c)
 *     KeRegisterProcessorChangeCallback @ 0x140578064 (KeRegisterProcessorChangeCallback.c)
 *     CmpAddStringToMapping @ 0x14057F170 (CmpAddStringToMapping.c)
 *     WheaCrashDumpInitializationComplete @ 0x1405812AC (WheaCrashDumpInitializationComplete.c)
 *     CmWorkerEngineDequeueWorkItem @ 0x1405FCC88 (CmWorkerEngineDequeueWorkItem.c)
 *     DbgkOpenProcessDebugPort @ 0x140617DA0 (DbgkOpenProcessDebugPort.c)
 *     DbgkpCloseObject @ 0x140618178 (DbgkpCloseObject.c)
 *     DbgkpMarkProcessPeb @ 0x140618440 (DbgkpMarkProcessPeb.c)
 *     DbgkpQueueMessage @ 0x140618F9C (DbgkpQueueMessage.c)
 *     DbgkpSetProcessDebugObject @ 0x14061927C (DbgkpSetProcessDebugObject.c)
 *     NtDebugContinue @ 0x140619998 (NtDebugContinue.c)
 *     NtSetInformationDebugObject @ 0x140619CC0 (NtSetInformationDebugObject.c)
 *     NtWaitForDebugEvent @ 0x140619E34 (NtWaitForDebugEvent.c)
 *     IopCleanupFileObjectIosbRange @ 0x14062118C (IopCleanupFileObjectIosbRange.c)
 *     IopSetFileObjectIosbRange @ 0x140622BE4 (IopSetFileObjectIosbRange.c)
 *     PnpNotifyHwProfileChange @ 0x14062BB04 (PnpNotifyHwProfileChange.c)
 *     PnpRestartDeviceNode @ 0x14062DC88 (PnpRestartDeviceNode.c)
 *     PiDqObjectManagerMakeInconsistent @ 0x140631C7C (PiDqObjectManagerMakeInconsistent.c)
 *     PnpProfileUpdateHardwareProfile @ 0x1406420C0 (PnpProfileUpdateHardwareProfile.c)
 *     PpProfileCancelHardwareProfileTransition @ 0x1406422CC (PpProfileCancelHardwareProfileTransition.c)
 *     PpProfileCancelTransitioningDock @ 0x14064234C (PpProfileCancelTransitioningDock.c)
 *     PpProfileCommitTransitioningDock @ 0x1406423EC (PpProfileCommitTransitioningDock.c)
 *     PpProfileIncludeInHardwareProfileTransition @ 0x140642534 (PpProfileIncludeInHardwareProfileTransition.c)
 *     PpProfileMarkAllTransitioningDocksEjected @ 0x1406425E8 (PpProfileMarkAllTransitioningDocksEjected.c)
 *     PpProfileQueryHardwareProfileChange @ 0x140642630 (PpProfileQueryHardwareProfileChange.c)
 *     PnpRemoveEventFromQueue @ 0x140642C50 (PnpRemoveEventFromQueue.c)
 *     PfTCleanup @ 0x140669770 (PfTCleanup.c)
 *     PoDisableSleepStates @ 0x14066BE6C (PoDisableSleepStates.c)
 *     PoReenableSleepStates @ 0x14066BF28 (PoReenableSleepStates.c)
 *     PoQueueShutdownWorkItem @ 0x14066DEA0 (PoQueueShutdownWorkItem.c)
 *     ExpUpdateDebugInfo @ 0x1406AD814 (ExpUpdateDebugInfo.c)
 * Callees:
 *     MmGetSessionIdEx @ 0x140024FEC (MmGetSessionIdEx.c)
 *     KiCheckForKernelApcDelivery @ 0x1400C7DE0 (KiCheckForKernelApcDelivery.c)
 *     ExpAcquireFastMutexContended @ 0x1400C7E28 (ExpAcquireFastMutexContended.c)
 *     EtwTraceAutoBoostEntryExhaustion @ 0x14015964C (EtwTraceAutoBoostEntryExhaustion.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
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
  if ( (unsigned __int64)FastMutex < qword_140326910 || (unsigned __int64)FastMutex >= qword_140326910 + 0x8000000000LL )
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
