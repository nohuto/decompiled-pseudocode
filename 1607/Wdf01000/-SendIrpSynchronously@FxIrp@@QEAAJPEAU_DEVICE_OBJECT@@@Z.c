/*
 * XREFs of ?SendIrpSynchronously@FxIrp@@QEAAJPEAU_DEVICE_OBJECT@@@Z @ 0x1C002B42C
 * Callers:
 *     ?HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z @ 0x1C0027310 (-HandleQueryInterface@FxPkgPnp@@IEAAJPEAVFxIrp@@PEAE@Z.c)
 *     ?QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ @ 0x1C0029E60 (-QueryForReenumerationInterface@FxPkgFdo@@EEAAJXZ.c)
 *     ?GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z @ 0x1C002CDBC (-GetTargetDeviceRelations@FxIoTargetRemote@@QEAAJPEAE@Z.c)
 *     ?_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z @ 0x1C0071410 (-_QueryForInterface@FxQueryInterface@@SAJPEAU_DEVICE_OBJECT@@PEBU_GUID@@PEAU_INTERFACE@@GGPEAX@Z.c)
 *     ?PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z @ 0x1C00970C0 (-PnpDeviceUsageNotification@FxPkgPnp@@IEAAJPEAVFxIrp@@@Z.c)
 *     ?PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z @ 0x1C0098F84 (-PnpPassThroughQIWorker@@YAXPEAVMxDeviceObject@@PEAVFxIrp@@1@Z.c)
 *     ?SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z @ 0x1C009BB5C (-SendDeviceUsageNotificationWorker@@YAJPEAVMxDeviceObject@@PEAVFxIrp@@1E@Z.c)
 * Callees:
 *     ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ @ 0x1C002B1C8 (-EnterCRAndWaitAndLeave@FxCREvent@@QEAAJXZ.c)
 */

NTSTATUS __fastcall FxIrp::SendIrpSynchronously(FxIrp *this, _DEVICE_OBJECT *DeviceObject)
{
  _IRP *m_Irp; // rax
  _IO_STACK_LOCATION *CurrentStackLocation; // r8
  NTSTATUS result; // eax
  FxCREvent event; // [rsp+20h] [rbp-28h] BYREF

  event.m_Event.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&event.m_Event.m_Event, SynchronizationEvent, 0);
  m_Irp = this->m_Irp;
  event.m_Event.m_DbgFlagIsInitialized = 1;
  CurrentStackLocation = m_Irp->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].CompletionRoutine = FxIrp::_IrpSynchronousCompletion;
  CurrentStackLocation[-1].Context = &event;
  CurrentStackLocation[-1].Control = -32;
  result = IofCallDriver(DeviceObject, this->m_Irp);
  if ( result == 259 )
  {
    FxCREvent::EnterCRAndWaitAndLeave(&event);
    return this->m_Irp->IoStatus.Status;
  }
  return result;
}
