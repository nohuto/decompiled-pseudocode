/*
 * XREFs of ?PnpEnableInterfacesAndRegisterWmi@FxPkgPnp@@IEAAJXZ @ 0x1C00267F8
 * Callers:
 *     ?PnpEventEnableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0037350 (-PnpEventEnableInterfaces@FxPkgPnp@@KA-AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z.c)
 * Callees:
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C0030E90 (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C0097D74 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEnableInterfacesAndRegisterWmi(FxPkgPnp *this)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // rsi
  _SINGLE_LIST_ENTRY *Next; // rbx
  int v4; // ebx
  bool v6; // zf

  p_m_DeviceInterfaceLock = &this->m_DeviceInterfaceLock;
  KeEnterCriticalRegion();
  if ( KeWaitForSingleObject(p_m_DeviceInterfaceLock, Executive, 0, 0, 0LL) == 258 )
    KeLeaveCriticalRegion();
  else
    p_m_DeviceInterfaceLock->m_OwningThread = KeGetCurrentThread();
  Next = this->m_DeviceInterfaceHead.Next;
  this->m_DeviceInterfacesCanBeEnabled = 1;
  while ( Next )
  {
    v6 = Next[-1].Next == 0LL;
    LOBYTE(Next[1].Next) = 1;
    if ( !v6 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)&Next[-2], 1u);
    Next = Next->Next;
  }
  p_m_DeviceInterfaceLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_DeviceInterfaceLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  v4 = FxWmiIrpHandler::Register((FxWmiIrpHandler *)this->m_DeviceBase[3].m_ParentObject);
  if ( v4 < 0 )
  {
    FxPkgPnp::SetInternalFailure(this);
    this->m_PendingPnPIrp->IoStatus.Status = v4;
  }
  return (unsigned int)v4;
}
