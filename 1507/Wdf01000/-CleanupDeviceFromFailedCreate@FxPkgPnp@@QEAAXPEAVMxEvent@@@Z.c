/*
 * XREFs of ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C009D2DC
 * Callers:
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C0076668 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 * Callees:
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C00187A0 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 *     ?UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z @ 0x1C003244C (-UpdateTagHistory@FxTagTracker@@QEAAXPEAXJPEADW4FxTagRefType@@K@Z.c)
 */

void __fastcall FxPkgPnp::CleanupDeviceFromFailedCreate(FxPkgPnp *this, MxEvent *WaitEvent)
{
  unsigned __int8 v4; // r8
  unsigned int RefCount; // ecx
  int (__fastcall *m_Method)(WDFDEVICE__ *, WDFCMRESLIST__ *); // rax
  FxPkgPnp_vtbl *v7; // rax

  KeClearEvent(&WaitEvent->m_Event);
  RefCount = _InterlockedIncrement(&this->m_Refcnt);
  if ( SLOBYTE(this->m_ObjectFlags) >= 0 )
    m_Method = 0LL;
  else
    m_Method = this[-1].m_DeviceReleaseHardware.m_Method;
  if ( m_Method )
    FxTagTracker::UpdateTagHistory(
      (FxTagTracker *)m_Method,
      WaitEvent,
      2227,
      "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp",
      TagAddRef,
      RefCount);
  this->m_DeviceRemoveProcessed = WaitEvent;
  FxPkgPnp::PnpProcessEvent(this, PnpEventRemove, v4);
  KeWaitForSingleObject(WaitEvent, Executive, 0, 0, 0LL);
  v7 = this->__vftable;
  this->m_DeviceRemoveProcessed = 0LL;
  v7->Release(this, WaitEvent, 2245, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
}
