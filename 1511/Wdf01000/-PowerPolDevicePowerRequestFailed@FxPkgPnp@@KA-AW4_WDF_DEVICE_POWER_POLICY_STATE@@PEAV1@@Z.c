/*
 * XREFs of ?PowerPolDevicePowerRequestFailed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C008AF70
 * Callers:
 *     <none>
 * Callees:
 *     ?DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ @ 0x1C0010A0C (-DeviceIsPoweredOn@FxPoxInterface@@QEAAXXZ.c)
 *     ?PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ @ 0x1C0054FB4 (-PowerPolicyChildrenCanPowerUp@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolDevicePowerRequestFailed(FxPkgPnp *This, _FX_DRIVER_GLOBALS *a2)
{
  FxPkgPnp::PowerPolicyChildrenCanPowerUp(This, a2);
  This->m_PowerPolicyMachine.m_Owner->m_PowerFailed = 1;
  FxPoxInterface::DeviceIsPoweredOn(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface);
  return 1433LL;
}
