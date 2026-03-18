/*
 * XREFs of ?_PnpRemoveDevice@FxPkgPnp@@KAJPEAV1@PEAVFxIrp@@@Z @ 0x1C009EC60
 * Callers:
 *     <none>
 * Callees:
 *     WPP_IFR_SF_qq @ 0x1C000A3FC (WPP_IFR_SF_qq.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C00187A0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

__int64 __fastcall FxPkgPnp::_PnpRemoveDevice(FxPkgPnp *This, FxIrp *Irp)
{
  FxDeviceBase *m_DeviceBase; // rax
  _IRP *m_Irp; // rdx
  unsigned __int8 v6; // r8
  unsigned int RefCount; // edx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *); // rcx
  FxDeviceBase *v9; // rax
  _DEVICE_OBJECT *_a2; // rcx
  const void *v11; // rax
  FxPkgPnp_vtbl *v12; // rax
  unsigned int v13; // ebx
  MxEvent eventOnStack; // [rsp+40h] [rbp-28h] BYREF

  eventOnStack.m_DbgFlagIsInitialized = 0;
  KeInitializeEvent(&eventOnStack.m_Event, SynchronizationEvent, 0);
  m_DeviceBase = This->m_DeviceBase;
  m_Irp = Irp->m_Irp;
  eventOnStack.m_DbgFlagIsInitialized = 1;
  IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)&m_DeviceBase->m_DeviceObject.m_DeviceObject[1], m_Irp, &a5, 1u, 0x20u);
  RefCount = _InterlockedIncrement(&This->m_Refcnt);
  if ( SLOBYTE(This->m_ObjectFlags) >= 0 )
    m_Method = 0LL;
  else
    m_Method = This[-1].m_DeviceReleaseHardware.m_Method;
  if ( m_Method )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_Method,
      Irp,
      2323,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
      TagAddRef,
      RefCount);
  Irp->m_Irp->IoStatus.Status = 0;
  This->m_DeviceRemoveProcessed = &eventOnStack;
  FxPkgPnp::PnpProcessEvent(This, PnpEventRemove, v6);
  v9 = This->m_DeviceBase;
  _a2 = v9->m_DeviceObject.m_DeviceObject;
  if ( v9->m_ObjectSize )
    v11 = (const void *)((unsigned __int64)v9 ^ 0xFFFFFFFFFFFFFFF8uLL);
  else
    v11 = 0LL;
  WPP_IFR_SF_qq(This->m_Globals, 4u, 0xCu, 0x27u, WPP_FxPkgPnp_cpp_Traceguids, v11, _a2);
  KeWaitForSingleObject(&eventOnStack, Executive, 0, 0, 0LL);
  v12 = This->__vftable;
  This->m_DeviceRemoveProcessed = 0LL;
  v13 = v12->ProcessRemoveDeviceOverload(This, Irp);
  This->Release(This, Irp, 2359, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  return v13;
}
