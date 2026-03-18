/*
 * XREFs of ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0092864
 * Callers:
 *     ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0092970 (-PnpEventFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00934B0 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001CB10 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0026114 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C002CA28 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C002CA48 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@Z @ 0x1C002DBBC (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@PEAW4FxCxCallbackProgress@@@.c)
 *     ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x1C0063EA0 (-SetState@FxDeviceInterface@@QEAAXE@Z.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C0070904 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C00953C0 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0097014 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 */

void __fastcall FxPkgPnp::PnpCleanupForRemove(FxPkgPnp *this, unsigned __int8 GracefulRemove)
{
  _FX_DRIVER_GLOBALS *v4; // rdx
  _FX_DRIVER_GLOBALS *v5; // rdx
  _SINGLE_LIST_ENTRY *Next; // rdi
  __int64 v7; // rdx
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  FxSelfManagedIoMachine *m_SelfManagedIoMachine; // rcx

  FxWmiIrpHandler::Deregister((FxWmiIrpHandler *)this->m_DeviceBase[3].m_ParentObject, GracefulRemove);
  FxWaitLockInternal::AcquireLock(&this->m_DeviceInterfaceLock, v4, 0LL);
  Next = this->m_DeviceInterfaceHead.Next;
  this->m_DeviceInterfacesCanBeEnabled = 0;
  while ( Next )
  {
    FxDeviceInterface::SetState((FxDeviceInterface *)&Next[-6], 0);
    Next = Next->Next;
  }
  FxWaitLockInternal::ReleaseLock(&this->m_DeviceInterfaceLock, v5);
  LOBYTE(v7) = GracefulRemove;
  this->DeleteSymbolicLinkOverload(this, v7);
  FxPkgIo::StopProcessingForPower((FxPkgIo *)this->m_DeviceBase[3].m_ChildListHead.Blink, 2, v8, v9);
  m_SelfManagedIoMachine = this->m_SelfManagedIoMachine;
  if ( m_SelfManagedIoMachine )
    FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)8, 0LL);
  FxPkgPnp::NotifyResourceobjectsToReleaseResources(this);
  FxPkgPnp::SaveState(this, 0);
  if ( this->m_SharedPower.m_WaitWakeOwner )
    FxPkgPnp::PowerIndicateWaitWakeStatus(this, -1073741810);
}
