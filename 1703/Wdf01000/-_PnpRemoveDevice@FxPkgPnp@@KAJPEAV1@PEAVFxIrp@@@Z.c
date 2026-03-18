/*
 * XREFs of ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009C4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEBD@Z @ 0x1C001CE64 (-AddRef@FxObject@@QEAAKPEAXJPEBD@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0023450 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     WPP_IFR_SF_qq @ 0x1C002F010 (WPP_IFR_SF_qq.c)
 */

__int64 __fastcall FxPkgPnp::_PnpRemoveDevice(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // rax
  _IRP *m_Irp; // rdx
  unsigned __int8 v6; // r8
  FxDeviceBase *v7; // rdx
  _DEVICE_OBJECT *_a2; // rcx
  unsigned __int16 m_ObjectSize; // ax
  const void *_a1; // rdx
  FxPkgPnp_vtbl *v11; // rax
  unsigned int v12; // ebx
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, SynchronizationEvent, 0);
  m_DeviceBase = This->m_DeviceBase;
  m_Irp = Irp->m_Irp;
  eventOnStack.m_DbgFlagIsInitialized = 1;
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, a5, 1u, 0x20u);
  FxObject::AddRef(This, Irp, 2339, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  Irp->m_Irp->IoStatus.Status = 0;
  This->m_DeviceRemoveProcessed = &eventOnStack;
  FxPkgPnp::PnpProcessEvent(This, PnpEventRemove, v6);
  v7 = This->m_DeviceBase;
  _a2 = v7->m_DeviceObject.m_DeviceObject;
  m_ObjectSize = v7->m_ObjectSize;
  _a1 = (const void *)((unsigned __int64)v7 ^ 0xFFFFFFFFFFFFFFF8uLL);
  if ( !m_ObjectSize )
    _a1 = 0LL;
  WPP_IFR_SF_qq(This->m_Globals, 4u, 0xCu, 0x27u, WPP_FxPkgPnp_cpp_Traceguids, _a1, _a2);
  KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
  v11 = This->__vftable;
  This->m_DeviceRemoveProcessed = 0LL;
  v12 = v11->ProcessRemoveDeviceOverload(This, Irp);
  This->Release(This, Irp, 2375, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  return v12;
}
