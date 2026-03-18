/*
 * XREFs of ?PnpEventEnableInterfaces@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C002FAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?Register@FxWmiIrpHandler@@QEAAJXZ @ 0x1C002AE38 (-Register@FxWmiIrpHandler@@QEAAJXZ.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C0089634 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventEnableInterfaces(FxPkgPnp *This)
{
  FxWaitLockInternal *p_m_DeviceInterfaceLock; // rsi
  _SINGLE_LIST_ENTRY *Next; // rbx
  __int64 v4; // rdx
  unsigned __int8 v5; // r8
  int v6; // ebx
  __int64 result; // rax
  bool v8; // zf

  p_m_DeviceInterfaceLock = &This->m_DeviceInterfaceLock;
  KeEnterCriticalRegion();
  if ( KeWaitForSingleObject(p_m_DeviceInterfaceLock, Executive, 0, 0, 0LL) == 258 )
    KeLeaveCriticalRegion();
  else
    p_m_DeviceInterfaceLock->m_OwningThread = KeGetCurrentThread();
  Next = This->m_DeviceInterfaceHead.Next;
  This->m_DeviceInterfacesCanBeEnabled = 1;
  while ( Next )
  {
    v8 = Next[-1].Next == 0LL;
    LOBYTE(Next[1].Next) = 1;
    if ( !v8 )
      IoSetDeviceInterfaceState((PUNICODE_STRING)&Next[-2], 1u);
    Next = Next->Next;
  }
  p_m_DeviceInterfaceLock->m_OwningThread = 0LL;
  KeSetEvent(&p_m_DeviceInterfaceLock->m_Event.m_Event, 0, 0);
  KeLeaveCriticalRegion();
  v6 = FxWmiIrpHandler::Register((FxWmiIrpHandler *)This->m_DeviceBase[3].m_ParentObject, v4, v5);
  if ( v6 >= 0 )
    return 281LL;
  FxPkgPnp::SetInternalFailure(This);
  result = 296LL;
  This->m_PendingPnPIrp->IoStatus.Status = v6;
  return result;
}
