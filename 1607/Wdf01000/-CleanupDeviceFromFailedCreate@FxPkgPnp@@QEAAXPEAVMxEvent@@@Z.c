/*
 * XREFs of ?CleanupDeviceFromFailedCreate@FxPkgPnp@@QEAAXPEAVMxEvent@@@Z @ 0x1C0096730
 * Callers:
 *     ?DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z @ 0x1C00798E8 (-DeleteDeviceFromFailedCreateNoDelete@FxDevice@@AEAAJJE@Z.c)
 * Callees:
 *     ?AddRef@FxObject@@QEAAKPEAXJPEAD@Z @ 0x1C001C1A0 (-AddRef@FxObject@@QEAAKPEAXJPEAD@Z.c)
 *     ?PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z @ 0x1C0024050 (-PnpProcessEvent@FxPkgPnp@@QEAAXW4FxPnpEvent@@E@Z.c)
 */

void __fastcall FxPkgPnp::CleanupDeviceFromFailedCreate(FxPkgPnp *this, MxEvent *WaitEvent)
{
  unsigned __int8 v4; // r8
  FxPkgPnp_vtbl *v5; // rax

  KeClearEvent(&WaitEvent->m_Event);
  FxObject::AddRef(this, WaitEvent, 2227, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
  this->m_DeviceRemoveProcessed = WaitEvent;
  FxPkgPnp::PnpProcessEvent(this, PnpEventRemove, v4);
  KeWaitForSingleObject(WaitEvent, Executive, 0, 0, 0LL);
  v5 = this->__vftable;
  this->m_DeviceRemoveProcessed = 0LL;
  v5->Release(this, WaitEvent, 2245, "minkernel\\wdf\\framework\\shared\\irphandlers\\pnp\\fxpkgpnp.cpp");
}
