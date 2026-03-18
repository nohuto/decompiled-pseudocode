/*
 * XREFs of ?SetState@FxDeviceInterface@@QEAAXE@Z @ 0x1C0056BB4
 * Callers:
 *     imp_WdfDeviceSetDeviceInterfaceState @ 0x1C0072630 (imp_WdfDeviceSetDeviceInterfaceState.c)
 *     ?PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z @ 0x1C0084A4C (-PnpCleanupForRemove@FxPkgPnp@@AEAAXE@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall FxDeviceInterface::SetState(FxDeviceInterface *this, unsigned __int8 State)
{
  bool v2; // zf

  v2 = this->m_SymbolicLinkName.Buffer == 0LL;
  this->m_State = State;
  if ( !v2 )
    IoSetDeviceInterfaceState(&this->m_SymbolicLinkName, State);
}
