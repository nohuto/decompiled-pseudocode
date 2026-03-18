/*
 * XREFs of ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C00154DC
 * Callers:
 *     ?FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ @ 0x1C0007B40 (-FlushQueuedWorkitem@FxInterrupt@@QEAAXXZ.c)
 *     ?Stop@FxTimer@@QEAAEE@Z @ 0x1C0007D00 (-Stop@FxTimer@@QEAAEE@Z.c)
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0009884 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 *     ?Dispose@FxSystemWorkItem@@EEAAEXZ @ 0x1C000A150 (-Dispose@FxSystemWorkItem@@EEAAEXZ.c)
 *     imp_WdfFdoQueryForInterface @ 0x1C0011E20 (imp_WdfFdoQueryForInterface.c)
 *     ?GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERFACE@@PEAU_STACK_DEVICE_CAPABILITIES@@@Z @ 0x1C0012450 (-GetStackCapabilities@@YAJPEAU_FX_DRIVER_GLOBALS@@PEAVMxDeviceObject@@PEAU_D3COLD_SUPPORT_INTERF.c)
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAXXZ @ 0x1C0013250 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAXXZ.c)
 *     ?SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z @ 0x1C00151E0 (-SubmitSync@FxIoTarget@@QEAAJPEAVFxRequestBase@@PEAU_WDF_REQUEST_SEND_OPTIONS@@PEAK@Z.c)
 *     FxIoTargetSendIoctl @ 0x1C00169F0 (FxIoTargetSendIoctl.c)
 *     ?PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z @ 0x1C0017320 (-PowerReferenceWorker@FxPowerIdleMachine@@IEAAJEW4FxPowerReferenceFlags@@PEAXJPEAD@Z.c)
 *     ?QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ @ 0x1C0018E00 (-QueryForD3ColdInterface@FxPkgPnp@@QEAAXXZ.c)
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C001BD10 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C0020D24 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x1C002F304 (-PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z.c)
 *     ??1FxSyncRequest@@UEAA@XZ @ 0x1C005C350 (--1FxSyncRequest@@UEAA@XZ.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C0069F94 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x1C006AB20 (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0084AE0 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ @ 0x1C0084B90 (-WaitForSentIoToComplete@FxIoTarget@@MEAAXXZ.c)
 *     ?Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z @ 0x1C0085BB4 (-Close@FxIoTargetRemote@@QEAAXW4FxIoTargetRemoteCloseReason@@@Z.c)
 *     ?WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ @ 0x1C0091A00 (-WaitForSentIoToComplete@FxUsbPipe@@UEAAXXZ.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C009D394 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009DC84 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C009E738 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C00A2C40 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1C00A2CE4 (-SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C00A3B40 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
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
