/*
 * XREFs of WPP_IFR_SF_qq @ 0x1C002F548
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0001000 (imp_WdfTimerStop.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002FB0 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0004C90 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C00057E0 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C00066C0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000B380 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000BFD0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C000CB30 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C000CF00 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C000D920 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C000DC00 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C000E4C0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C000FF80 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     imp_WdfSpinLockRelease @ 0x1C00103A0 (imp_WdfSpinLockRelease.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0012130 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0012284 (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfWorkItemFlush @ 0x1C0013AF0 (imp_WdfWorkItemFlush.c)
 *     ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C0013C00 (-_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STA.c)
 *     ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C0013FB0 (-ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C001AE18 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C001AFB0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C001B770 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     imp_WdfIoQueueCreate @ 0x1C001C5E0 (imp_WdfIoQueueCreate.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001D3D4 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001D7FC (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C001F860 (-AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 *     ?AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C001F8D0 (-AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z.c)
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C0020E90 (--_EFxDriver@@UEAAPEAXI@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0021900 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C0021E50 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C00222F4 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0023B60 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0024050 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0024450 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0025438 (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C0025E40 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0027610 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0029020 (FxIoTargetSendIoctl.c)
 *     ?SelfDestruct@FxSyncRequest@@UEAAXXZ @ 0x1C00297D0 (-SelfDestruct@FxSyncRequest@@UEAAXXZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C002AB5C (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C002ADC8 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C002CE98 (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpe.c)
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C002E5A4 (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     imp_WdfIoTargetGetDevice @ 0x1C002F150 (imp_WdfIoTargetGetDevice.c)
 *     imp_WdfIoTargetWdmGetTargetDeviceObject @ 0x1C002F1E0 (imp_WdfIoTargetWdmGetTargetDeviceObject.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C003039C (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0030700 (imp_WdfDmaEnablerCreate.c)
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0034790 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0034AB0 (-_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0037800 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C00389B0 (-ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C003BAB8 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0063064 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C006347C (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C00637A0 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0063AE4 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     imp_WdfDmaTransactionFreeResources @ 0x1C0065870 (imp_WdfDmaTransactionFreeResources.c)
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x1C0066170 (imp_WdfDmaTransactionSetImmediateExecution.c)
 *     imp_WdfDmaTransactionSetSingleTransferRequirement @ 0x1C0066260 (imp_WdfDmaTransactionSetSingleTransferRequirement.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1C00664A0 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C00685D0 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C006C290 (imp_WdfChildListRequestChildEject.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C006DE4C (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C006FCF0 (-QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C0079588 (--1FxDevice@@UEAA@XZ.c)
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C007A838 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 *     ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C007DAA4 (-ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z.c)
 *     FxIoTargetSendIo @ 0x1C0081CD4 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C00828D0 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfIoTargetWdmGetTargetFileHandle @ 0x1C0082DB0 (imp_WdfIoTargetWdmGetTargetFileHandle.c)
 *     imp_WdfIoTargetWdmGetTargetFileObject @ 0x1C00831E0 (imp_WdfIoTargetWdmGetTargetFileObject.c)
 *     imp_WdfIoTargetWdmGetTargetPhysicalDevice @ 0x1C00832A0 (imp_WdfIoTargetWdmGetTargetPhysicalDevice.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0083D90 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C0083F40 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084288 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C0084464 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0084650 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0084FF4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0085C80 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x1C0086090 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x1C0086170 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C0086400 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C00865B0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0086AB0 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C0088530 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0089EE8 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C0090444 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C00908B0 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00922B0 (-PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C00924C0 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C0094B44 (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0095BD0 (-PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C00964B0 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C00967C0 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C0097B20 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C0097C2C (-RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0098080 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C0099024 (-RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z.c)
 *     ?SetDelayedDeletion@FxEventQueue@@QEAAXXZ @ 0x1C009BC74 (-SetDelayedDeletion@FxEventQueue@@QEAAXXZ.c)
 *     ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C009C9F0 (-PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C009CB20 (-StateCallback@FxPoxInterface@@CAXPEAXKK@Z.c)
 *     ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C8BC8 (-Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00C9360 (-Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C979C (-Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00C9F8C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C000A230 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C006CD0C (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_qq(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 level,
        unsigned int flags,
        unsigned __int16 id,
        const _GUID *traceGuid,
        const void *_a1,
        const void *_a2)
{
  int v11; // eax
  unsigned __int64 v12; // rbx

  v11 = *(&WPP_GLOBAL_WDF_Control.Characteristics + 16 * ((unsigned __int64)flags >> 16) + (((flags - 1) >> 5) & 0x7FF));
  if ( _bittest(&v11, (flags - 1) & 0x1F) )
  {
    v12 = (unsigned __int64)flags >> 16 << 6;
    if ( *((_BYTE *)&WPP_GLOBAL_WDF_Control.Flags + v12 + 1) >= level )
      FxWmiTraceMessage(
        *(unsigned __int64 *)((char *)&WPP_GLOBAL_WDF_Control.CurrentIrp + v12),
        0x2Bu,
        traceGuid,
        id,
        &_a1,
        8LL,
        &_a2,
        8LL,
        0LL);
  }
  FxIFR(globals, level, flags, traceGuid, id, &_a1, 8LL, &_a2, 8LL, 0LL);
}
