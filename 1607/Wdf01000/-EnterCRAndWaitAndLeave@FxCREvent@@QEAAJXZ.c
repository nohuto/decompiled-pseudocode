/*
 * XREFs of ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C002B1C8
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0001000 (imp_WdfTimerStop.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C000E4C0 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x1C0013910 (-FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C0024D60 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     FxIoTargetSendIoctl @ 0x1C0029020 (FxIoTargetSendIoctl.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C002A610 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C002B200 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002B42C (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     imp_WdfFdoQueryForInterface @ 0x1C002B4A0 (imp_WdfFdoQueryForInterface.c)
 *     ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x1C0030440 (-Dispose@FxSystemWorkItem@@EEAAEXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0038554 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C0063064 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C00637A0 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C0070904 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0084650 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ @ 0x1C0084700 (-WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0084FF4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x1C0089D00 (-WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C00967C0 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C0097B88 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C009BAB8 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C009C8A0 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxCREvent::EnterCRAndWaitAndLeave(FxCREvent *this)
{
  KeEnterCriticalRegion();
  LODWORD(this) = KeWaitForSingleObject(this, Executive, 0, 0, 0LL);
  KeLeaveCriticalRegion();
  return (unsigned int)this;
}
