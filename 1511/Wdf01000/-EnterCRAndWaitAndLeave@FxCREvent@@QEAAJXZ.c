/*
 * XREFs of ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C0019D48
 * Callers:
 *     imp_WdfTimerStop @ 0x1C0001500 (imp_WdfTimerStop.c)
 *     ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x1C000F310 (-FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C0012070 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0012D90 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C00142DC (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C0018B30 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAXXZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C0019A70 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C0019F50 (FxIoTargetSendIoctl.c)
 *     ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C0025CE0 (-SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z.c)
 *     ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x1C00293E0 (-Dispose@FxSystemWorkItem@@EEAAEXZ.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C00294F4 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     imp_WdfFdoQueryForInterface @ 0x1C002C870 (imp_WdfFdoQueryForInterface.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C00558D4 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C00562E4 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C00620A4 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C00766B0 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ @ 0x1C0076760 (-WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0077554 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x1C00804B0 (-WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C00880E0 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C008944C (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C008CF9C (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C008DE30 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
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
