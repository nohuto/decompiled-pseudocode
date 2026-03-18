/*
 * XREFs of ?IsVersionGreaterThanOrEqualTo@_FX_DRIVER_GLOBALS@@QEAAEKK@Z @ 0x1C0021E18
 * Callers:
 *     imp_WdfDeviceWdmDispatchPreprocessedIrp @ 0x1C0001DC0 (imp_WdfDeviceWdmDispatchPreprocessedIrp.c)
 *     imp_WdfRequestGetFileObject @ 0x1C0002190 (imp_WdfRequestGetFileObject.c)
 *     ?_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@@PEAPEAV1@@Z @ 0x1C0002290 (-_GetFileObjectFromWdm@FxFileObject@@SAJPEAVFxDevice@@W4_WDF_FILEOBJECT_CLASS@@PEAU_FILE_OBJECT@.c)
 *     ?OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C00023C0 (-OnClose@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0007D00 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     imp_WdfDmaEnablerCreate @ 0x1C0008B20 (imp_WdfDmaEnablerCreate.c)
 *     ?ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CONFIG@@@Z @ 0x1C00093BC (-ConfigureBusMasterAdapters@FxDmaEnabler@@AEAAJPEAU_DEVICE_DESCRIPTION@@PEAU_WDF_DMA_ENABLER_CON.c)
 *     ?AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z @ 0x1C000CA34 (-AssignForwardProgressPolicy@FxIoQueue@@QEAAJPEAU_WDF_IO_QUEUE_FORWARD_PROGRESS_POLICY@@@Z.c)
 *     ?ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z @ 0x1C000F578 (-ConfigureConstraints@FxPkgGeneral@@AEAAJPEAU_LIST_ENTRY@@@Z.c)
 *     ??0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestConstructorCaller@@W4FxObjectType@@@Z @ 0x1C00140E4 (--0FxRequestBase@@IEAA@PEAU_FX_DRIVER_GLOBALS@@GPEAU_IRP@@W4FxRequestIrpOwnership@@W4FxRequestCo.c)
 *     ?GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z @ 0x1C0014700 (-GotoStartState@FxIoTarget@@MEAAJPEAU_LIST_ENTRY@@E@Z.c)
 *     ?IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z @ 0x1C0017540 (-IoDecrement@FxPowerIdleMachine@@QEAAXPEAXJPEAD@Z.c)
 *     ?PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA?AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POWER_STATE@@@Z @ 0x1C0019120 (-PowerPolicyGetDeviceDeepestDeviceWakeState@FxPkgPnp@@IEAA-AW4_DEVICE_POWER_STATE@@W4_SYSTEM_POW.c)
 *     ?PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z @ 0x1C001A730 (-PnpPrepareHardware@FxPkgPnp@@IEAAJPEAE@Z.c)
 *     ?Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z @ 0x1C0020590 (-Reuse@FxRequest@@QEAAJPEAU_WDF_REQUEST_REUSE_PARAMS@@@Z.c)
 *     imp_WdfIoTargetOpen @ 0x1C00214A0 (imp_WdfIoTargetOpen.c)
 *     FxRegistrySettingsInitialize @ 0x1C00226F0 (FxRegistrySettingsInitialize.c)
 *     ?FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z @ 0x1C0022FE4 (-FxObjectAllocateContext@@YAJPEAVFxObject@@PEAU_WDF_OBJECT_ATTRIBUTES@@EPEAPEAX@Z.c)
 *     ?Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPEAUWDFTIMER__@@@Z @ 0x1C0023B0C (-Initialize@FxTimer@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_TIMER_CONFIG@@PEAVFxObject@@PEAPE.c)
 *     imp_WdfTimerCreate @ 0x1C0023E50 (imp_WdfTimerCreate.c)
 *     imp_WdfInterruptCreate @ 0x1C0029630 (imp_WdfInterruptCreate.c)
 *     ?BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@@PEAU_IRP@@PEAU_SCATTER_GATHER_LIST@@PEAX@Z55K@Z @ 0x1C0060788 (-BuildScatterGatherList@FxDmaScatterGatherTransaction@@AEAAJPEAU_MDL@@_KKP6AXPEAU_DEVICE_OBJECT@.c)
 *     ?Dispose@FxDmaTransactionBase@@UEAAEXZ @ 0x1C0060BF0 (-Dispose@FxDmaTransactionBase@@UEAAEXZ.c)
 *     ?ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z @ 0x1C0061CE0 (-ReleaseForReuse@FxDmaTransactionBase@@QEAAXE@Z.c)
 *     ?StopTransfer@FxDmaSystemTransaction@@QEAAXXZ @ 0x1C0062FC0 (-StopTransfer@FxDmaSystemTransaction@@QEAAXXZ.c)
 *     imp_WdfRequestProbeAndLockUserBufferForRead @ 0x1C006EC80 (imp_WdfRequestProbeAndLockUserBufferForRead.c)
 *     imp_WdfRequestProbeAndLockUserBufferForWrite @ 0x1C006EEC0 (imp_WdfRequestProbeAndLockUserBufferForWrite.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0085BB4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY@@EPEAE@Z @ 0x1C0090E20 (-GotoRemoveState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_STATE@@PEAU_LIST_ENTRY@@PEAU_SINGLE_LIST_ENTRY.c)
 *     ?GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z @ 0x1C0091140 (-GotoStopState@FxUsbPipe@@UEAAXW4_WDF_IO_TARGET_SENT_IO_ACTION@@PEAU_SINGLE_LIST_ENTRY@@PEAEE@Z.c)
 *     ?_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z @ 0x1C0091F90 (-_FxUsbPipeRequestWorkItemThunk@FxUsbPipeContinuousReader@@KAXPEAX@Z.c)
 *     ?QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0096EEC (-QueuePurge@FxIoQueue@@QEAAJEEP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z.c)
 *     ?PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA?AW4_WDF_DEVICE_PNP_STATE@@XZ @ 0x1C0099460 (-PnpEventEjectHardwareOverload@FxPkgPdo@@EEAA-AW4_WDF_DEVICE_PNP_STATE@@XZ.c)
 *     ?PnpEventQueryRemoveAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009A0F0 (-PnpEventQueryRemoveAskDriver@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventQueryStopAskDriver@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C009A370 (-PnpEventQueryStopAskDriver@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C009AE4C (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     Vf_VerifyWdfRequestForwardToIoQueue @ 0x1C00D0504 (Vf_VerifyWdfRequestForwardToIoQueue.c)
 *     Vf_VerifyWdfRequestForwardToParentDeviceIoQueue @ 0x1C00D05D0 (Vf_VerifyWdfRequestForwardToParentDeviceIoQueue.c)
 *     ?Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D07AC (-Vf_VerifierBreakpoint_RequestEarlyDisposeDeferred@FxRequest@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D0CD8 (-Vf_VerifyRequestCanBeCompleted@FxRequest@@QEAAJPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_CONTEXT@@@Z @ 0x1C00D1698 (-Vf_VerifyRemoveIrpFromQueueByContext@FxIrpQueue@@AEAAXPEAU_FX_DRIVER_GLOBALS@@PEAU_IO_CSQ_IRP_C.c)
 *     ?Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z @ 0x1C00D20BC (-Vf_VerifyGetRequestUpdateFlags@FxIoQueue@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxRequest@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall _FX_DRIVER_GLOBALS::IsVersionGreaterThanOrEqualTo(
        _FX_DRIVER_GLOBALS *this,
        unsigned int Minor,
        unsigned int a3)
{
  _WDF_BIND_INFO *WdfBindInfo; // rax
  unsigned int Major; // ecx

  WdfBindInfo = this->WdfBindInfo;
  Major = WdfBindInfo->Version.Major;
  return Major > 1 || Major == 1 && WdfBindInfo->Version.Minor >= a3;
}
