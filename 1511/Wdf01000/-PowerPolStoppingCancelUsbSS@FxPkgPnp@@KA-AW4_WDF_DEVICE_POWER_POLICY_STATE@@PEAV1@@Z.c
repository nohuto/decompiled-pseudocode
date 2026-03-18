/*
 * XREFs of ?PowerPolStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008B710
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C001056C (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 *     ?RequestComponentActive@FxPoxInterface@@QEAAXXZ @ 0x1C00109CC (-RequestComponentActive@FxPoxInterface@@QEAAXXZ.c)
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0010A0C (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppingCancelUsbSS(FxPkgPnp *This)
{
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  FxPoxInterface::RequestComponentActive(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1377 : 1374;
}
