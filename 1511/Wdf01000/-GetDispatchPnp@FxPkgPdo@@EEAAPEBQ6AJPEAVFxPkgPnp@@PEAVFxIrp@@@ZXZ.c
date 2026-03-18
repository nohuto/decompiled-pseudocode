/*
 * XREFs of ?GetDispatchPnp@FxPkgPdo@@EEAAPEBQ6AJPEAVFxPkgPnp@@PEAVFxIrp@@@ZXZ @ 0x1C0036FD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int (__fastcall *const *__fastcall FxPkgPdo::GetDispatchPnp(FxPkgPdo *this))(FxPkgPnp *, FxIrp *)
{
  return FxPkgPdo::m_PdoPnpFunctionTable;
}
