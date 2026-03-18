/*
 * XREFs of ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0084A4C
 * Callers:
 *     ?PnpEventFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084B50 (-PnpEventFailed@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 *     ?PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0085680 (-PnpEventRemovingDisableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C0011238 (-ReleaseLock@FxWaitLockInternal@@QEAAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     ?AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z @ 0x1C0011258 (-AcquireLock@FxWaitLockInternal@@QEAAJPEAU_FX_DRIVER_GLOBALS@@PEA_J@Z.c)
 *     ?ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z @ 0x1C0012394 (-ProcessEvent@FxSelfManagedIoMachine@@IEAAJW4FxSelfManagedIoEvents@@@Z.c)
 *     ?SaveState@FxPkgPnp@@IEAAXE@Z @ 0x1C0015568 (-SaveState@FxPkgPnp@@IEAAXE@Z.c)
 *     ?StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z @ 0x1C001DCA0 (-StopProcessingForPower@FxPkgIo@@QEAAJW4FxIoStopProcessingForPowerAction@@@Z.c)
 *     ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x1C0056BB4 (-SetState@FxDeviceInterface@@QEAAXE@Z.c)
 *     ?Deregister@FxWmiIrpHandler@@QEAAXXZ @ 0x1C00620A4 (-Deregister@FxWmiIrpHandler@@QEAAXXZ.c)
 *     ?PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z @ 0x1C0086D90 (-PowerIndicateWaitWakeStatus@FxPkgPnp@@QEAAEJ@Z.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0088928 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
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
    FxSelfManagedIoMachine::ProcessEvent(m_SelfManagedIoMachine, (_FX_DRIVER_GLOBALS *)8);
  FxPkgPnp::NotifyResourceobjectsToReleaseResources(this);
  FxPkgPnp::SaveState(this, 0);
  if ( this->m_SharedPower.m_WaitWakeOwner )
    FxPkgPnp::PowerIndicateWaitWakeStatus(this, -1073741810);
}
