/*
 * XREFs of WPP_IFR_SF_qq @ 0x1C00277B0
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0001500 (imp_WdfTimerStop.c)
 *     imp_WdfSpinLockRelease @ 0x1C00020B0 (imp_WdfSpinLockRelease.c)
 *     ?Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z @ 0x1C00023A0 (-Start@FxTimer@@QEAAET_LARGE_INTEGER@@@Z.c)
 *     ?QueueToThreadWorker@FxEventQueue@@IEAAEXZ @ 0x1C00041A0 (-QueueToThreadWorker@FxEventQueue@@IEAAEXZ.c)
 *     ?_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z @ 0x1C0005730 (-_RequestCompletionRoutine@FxIoTarget@@KAJPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX@Z.c)
 *     ?ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z @ 0x1C0005CC0 (-ValidateTarget@FxRequestBase@@QEAAJPEAVFxIoTarget@@@Z.c)
 *     ?RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z @ 0x1C0005D90 (-RemoveCompletedRequestLocked@FxIoTarget@@IEAAEPEAVFxRequestBase@@@Z.c)
 *     ?FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject@@@Z @ 0x1C0006070 (-FormatIoctlRequest@FxIoTarget@@QEAAJPEAVFxRequestBase@@KEPEAUFxRequestBuffer@@1PEAVFxFileObject.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0007600 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?CompleteInternal@FxRequest@@AEAAJJ@Z @ 0x1C0007DA0 (-CompleteInternal@FxRequest@@AEAAJJ@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0009B30 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z @ 0x1C000AC10 (-DispatchRequestToDriver@FxIoQueue@@QEAAXPEAVFxRequest@@@Z.c)
 *     ?GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z @ 0x1C000B6C0 (-GetRequest@FxIoQueue@@QEAAJPEAU_FILE_OBJECT@@PEAVFxRequest@@PEAPEAV3@@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C000C0A0 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C000D120 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C000EC1C (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     imp_WdfWorkItemFlush @ 0x1C000F4B0 (imp_WdfWorkItemFlush.c)
 *     ?_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STATUS_BLOCK@@@Z @ 0x1C000F5E0 (-_PowerPolDevicePowerUpComplete@FxPkgPnp@@KAXPEAU_DEVICE_OBJECT@@ET_POWER_STATE@@PEAXPEAU_IO_STA.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0012D90 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0012FB0 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0013AF0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z @ 0x1C0013E20 (-PowerProcessEvent@FxPkgPnp@@QEAAXW4FxPowerEvent@@E@Z.c)
 *     ?DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C001491C (-DispatchWaitWake@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z @ 0x1C00151C0 (-PowerPolicyProcessEvent@FxPkgPnp@@QEAAXW4FxPowerPolicyEvent@@E@Z.c)
 *     ?HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C0016D00 (-HandleQueryBusRelations@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z @ 0x1C0019614 (-DrainPendedRequestsLocked@FxIoTarget@@IEAAXPEAU_LIST_ENTRY@@E@Z.c)
 *     ?CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00197F0 (-CompleteCanceledRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     ?AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z @ 0x1C001BF80 (-AddDmaEnabler@FxDevice@@UEAAXPEAVFxDmaEnabler@@@Z.c)
 *     ?AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z @ 0x1C001BFF0 (-AddChildList@FxDevice@@UEAAXPEAVFxChildList@@@Z.c)
 *     imp_WdfIoQueueCreate @ 0x1C001D870 (imp_WdfIoQueueCreate.c)
 *     ?ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001E4F8 (-ProcessPowerEvents@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z @ 0x1C001E920 (-ProcessCancelledRequests@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ??_EFxDriver@@UEAAPEAXI@Z @ 0x1C001FEB0 (--_EFxDriver@@UEAAPEAXI@Z.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0022200 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C00229D0 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     ?_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z @ 0x1C0024438 (-_SearchForDevice@FxDeviceBase@@SAPEAV1@PEAVFxObject@@PEAPEAVIFxHasCallbacks@@@Z.c)
 *     ?OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpenParams@@@Z @ 0x1C002576C (-OpenTargetHandle@FxIoTargetRemote@@QEAAJPEAU_WDF_IO_TARGET_OPEN_PARAMS@@PEAUFxIoTargetRemoveOpe.c)
 *     ?PowerPolStartingPoweredUp@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0025D60 (-PowerPolStartingPoweredUp@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z.c)
 *     ?ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z @ 0x1C0026490 (-ProcessBusRelations@FxChildList@@QEAAJPEAPEAU_DEVICE_RELATIONS@@@Z.c)
 *     ?ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z @ 0x1C00269E0 (-ProcessModificationsLocked@FxChildList@@IEAAXPEAU_LIST_ENTRY@@@Z.c)
 *     ?EndScan@FxChildList@@QEAAXPEAK@Z @ 0x1C0026DE4 (-EndScan@FxChildList@@QEAAXPEAK@Z.c)
 *     ?_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z @ 0x1C0028ED0 (-_WdmCancelRoutineInternal@FxIrpQueue@@CAXPEAU_DEVICE_OBJECT@@PEAU_IRP@@@Z.c)
 *     ?EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z @ 0x1C0029338 (-EnqueueWorker@FxSystemWorkItem@@AEAAEP6AXPEAX@Z0E@Z.c)
 *     imp_WdfIoTargetGetDevice @ 0x1C002A4D0 (imp_WdfIoTargetGetDevice.c)
 *     imp_WdfIoTargetWdmGetTargetDeviceObject @ 0x1C002A560 (imp_WdfIoTargetWdmGetTargetDeviceObject.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C002A650 (imp_WdfDmaEnablerCreate.c)
 *     ?SelfDestruct@FxSyncRequest@@UEAAXXZ @ 0x1C0030A40 (-SelfDestruct@FxSyncRequest@@UEAAXXZ.c)
 *     ?Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z @ 0x1C0032FA0 (-Unload@FxDriver@@SAXPEAU_DRIVER_OBJECT@@@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00558D4 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z @ 0x1C0055DB0 (-CancelForQueue@FxIoQueue@@QEAAXPEAVFxRequest@@E@Z.c)
 *     ?QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z @ 0x1C0055FBC (-QueueRequest@FxIoQueue@@QEAAJPEAVFxRequest@@@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C00562E4 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C00565C8 (-RequestCompletionRoutine@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     imp_WdfDmaTransactionFreeResources @ 0x1C00583D0 (imp_WdfDmaTransactionFreeResources.c)
 *     imp_WdfDmaTransactionSetImmediateExecution @ 0x1C0058CD0 (imp_WdfDmaTransactionSetImmediateExecution.c)
 *     imp_WdfDmaTransactionWdmGetTransferContext @ 0x1C0058F00 (imp_WdfDmaTransactionWdmGetTransferContext.c)
 *     ?_AdapterControl@FxDmaPacketTransaction@@KA?AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAX2@Z @ 0x1C005C400 (-_AdapterControl@FxDmaPacketTransaction@@KA-AW4_IO_ALLOCATION_ACTION@@PEAU_DEVICE_OBJECT@@PEAU_I.c)
 *     imp_WdfChildListRequestChildEject @ 0x1C005EB90 (imp_WdfChildListRequestChildEject.c)
 *     ?ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z @ 0x1C00601CC (-ReenumerateEntryLocked@FxChildList@@IEAAEPEAUFxDeviceDescriptionEntry@@E@Z.c)
 *     ?QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z @ 0x1C00615D0 (-QueryInstance@FxWmiInstanceExternal@@MEAAJKPEAXPEAK@Z.c)
 *     ??1FxDevice@@UEAA@XZ @ 0x1C006ADD8 (--1FxDevice@@UEAA@XZ.c)
 *     ?FlushAndRundown@FxTimer@@AEAAXXZ @ 0x1C006C088 (-FlushAndRundown@FxTimer@@AEAAXXZ.c)
 *     ?ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z @ 0x1C006F5D0 (-ReleaseOrReplaceThreadTableEntry@FxVerifierLock@@SAXPEAU_KTHREAD@@PEAV1@@Z.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C006F710 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     FxIoTargetSendIo @ 0x1C0073D34 (FxIoTargetSendIo.c)
 *     imp_WdfIoTargetSendInternalIoctlOthersSynchronously @ 0x1C0074930 (imp_WdfIoTargetSendInternalIoctlOthersSynchronously.c)
 *     imp_WdfIoTargetWdmGetTargetFileHandle @ 0x1C0074E10 (imp_WdfIoTargetWdmGetTargetFileHandle.c)
 *     imp_WdfIoTargetWdmGetTargetFileObject @ 0x1C0075240 (imp_WdfIoTargetWdmGetTargetFileObject.c)
 *     imp_WdfIoTargetWdmGetTargetPhysicalDevice @ 0x1C0075300 (imp_WdfIoTargetWdmGetTargetPhysicalDevice.c)
 *     ?HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z @ 0x1C0075DF0 (-HandleFailedResubmit@FxIoTarget@@IEAAXPEAVFxRequestBase@@@Z.c)
 *     ?PrintDisposeMessage@FxIoTarget@@IEAAXXZ @ 0x1C0075FA0 (-PrintDisposeMessage@FxIoTarget@@IEAAXXZ.c)
 *     ?SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00762E8 (-SubmitPendedRequest@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z @ 0x1C00764C4 (-TimerCallback@FxIoTarget@@QEAAXPEAVFxRequestBase@@@Z.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C00766B0 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0077554 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     imp_WdfUsbTargetDeviceSendControlTransferSynchronously @ 0x1C00790B0 (imp_WdfUsbTargetDeviceSendControlTransferSynchronously.c)
 *     imp_WdfUsbTargetDeviceSendUrbSynchronously @ 0x1C0079990 (imp_WdfUsbTargetDeviceSendUrbSynchronously.c)
 *     imp_WdfUsbTargetPipeAbortSynchronously @ 0x1C0079BA0 (imp_WdfUsbTargetPipeAbortSynchronously.c)
 *     imp_WdfUsbTargetPipeFormatRequestForAbort @ 0x1C0079FB0 (imp_WdfUsbTargetPipeFormatRequestForAbort.c)
 *     imp_WdfUsbTargetPipeFormatRequestForReset @ 0x1C007A090 (imp_WdfUsbTargetPipeFormatRequestForReset.c)
 *     imp_WdfUsbTargetPipeResetSynchronously @ 0x1C007A320 (imp_WdfUsbTargetPipeResetSynchronously.c)
 *     imp_WdfUsbTargetPipeSendUrbSynchronously @ 0x1C007A4D0 (imp_WdfUsbTargetPipeSendUrbSynchronously.c)
 *     ?_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAU_WDF_MEMORY_DESCRIPTOR@@PEAKK@Z @ 0x1C0080698 (-_SendTransfer@FxUsbPipe@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFUSBPIPE__@@PEAUWDFREQUEST__@@PEAU_WD.c)
 *     ?ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z @ 0x1C00824D4 (-ProcessCancelledRequestsOnQueue@FxIoQueue@@AEAAEPEAE@Z.c)
 *     ?QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0082940 (-QueueIdle@FxIoQueue@@QEAAJEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0084460 (-PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0084670 (-PnpEventPdoRemovedOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ @ 0x1C00863EC (-DisconnectInterruptNP@FxPkgPnp@@AEAAXXZ.c)
 *     ?PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0087470 (-PowerWakingConnectInterruptFailedNP@FxPkgPnp@@KA-AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z.c)
 *     ?AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z @ 0x1C0087DD0 (-AssignPowerFrameworkSettings@FxPkgPnp@@QEAAJPEAU_WDF_POWER_FRAMEWORK_SETTINGS@@@Z.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C00880E0 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ @ 0x1C00893E4 (-ProcessDelayedDeletion@FxPkgPnp@@QEAAXXZ.c)
 *     ?RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z @ 0x1C00894F0 (-RemoveChildList@FxPkgPnp@@QEAAXPEAVFxChildList@@@Z.c)
 *     ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C0089940 (-_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z.c)
 *     ?RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z @ 0x1C008A664 (-RemoveDmaEnabler@FxPkgPnp@@QEAAXPEAVFxDmaEnabler@@@Z.c)
 *     ?SetDelayedDeletion@FxEventQueue@@QEAAXXZ @ 0x1C008D30C (-SetDelayedDeletion@FxEventQueue@@QEAAXXZ.c)
 *     ?ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008E300 (-ComponentActiveCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z @ 0x1C008E400 (-ComponentIdleCallback@FxPoxInterface@@CAXPEAXK@Z.c)
 *     ?PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z @ 0x1C008E510 (-PowerControlCallback@FxPoxInterface@@CAJPEAXPEBU_GUID@@0_K02PEA_K@Z.c)
 *     ?StateCallback@FxPoxInterface@@CAXPEAXKK@Z @ 0x1C008E7F0 (-StateCallback@FxPoxInterface@@CAXPEAXKK@Z.c)
 *     ?Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00B9BA8 (-Vf_VerifyPreProcessSendAndForget@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00BA340 (-Vf_VerifyDispose@FxRequestBase@@IEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BA77C (-Vf_VerifyCancelForDriver@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 *     ?Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00BAF6C (-Vf_VerifyValidateCompletedRequest@FxIoQueue@@QEAAXPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     FxIFR @ 0x1C0009960 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C005F3FC (FxWmiTraceMessage.c)
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
