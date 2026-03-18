/*
 * XREFs of ??0FxCREvent@@QEAA@E@Z @ 0x1C00154B4
 * Callers:
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C0020D24 (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x1C002F304 (-PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z.c)
 *     ??0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z @ 0x1C005C450 (--0FxSyncRequest@@QEAA@PEAU_FX_DRIVER_GLOBALS@@PEAUFxRequestContext@@PEAUWDFREQUEST__@@@Z.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C0069F94 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x1C006AB20 (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 *     ??0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z @ 0x1C008384C (--0FxIoTarget@@QEAA@PEAU_FX_DRIVER_GLOBALS@@GG@Z.c)
 *     ?WaitForDisposeEvent@FxIoTarget@@MEAAXXZ @ 0x1C0084AE0 (-WaitForDisposeEvent@FxIoTarget@@MEAAXXZ.c)
 *     ?CleanupStateMachines@FxPkgPnp@@QEAAXE@Z @ 0x1C009D394 (-CleanupStateMachines@FxPkgPnp@@QEAAXE@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C009DC84 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C009E738 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 *     ?SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z @ 0x1C00A2C40 (-SendDeviceUsageNotification@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@PEAVMxWorkItem@@1E@Z.c)
 *     ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1C00A2CE4 (-SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z.c)
 *     ?_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z @ 0x1C00A3B40 (-_UsbIdleCallback@FxUsbIdleInfo@@CAXPEAX@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxCREvent::FxCREvent(FxCREvent *this, unsigned __int8 InitialState)
{
  this->m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&this->m_Event.m_Event, SynchronizationEvent, 0);
  this->m_Event.m_DbgFlagIsInitialized = 1;
}
