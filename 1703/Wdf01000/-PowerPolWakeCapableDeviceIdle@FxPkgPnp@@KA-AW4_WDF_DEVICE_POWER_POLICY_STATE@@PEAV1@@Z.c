/*
 * XREFs of ?PowerPolWakeCapableDeviceIdle@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C003C170
 * Callers:
 *     <none>
 * Callees:
 *     ?DeclareComponentIdle@FxPoxInterface@@QEAAEXZ @ 0x1C002DDB4 (-DeclareComponentIdle@FxPoxInterface@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWakeCapableDeviceIdle(FxPkgPnp *This)
{
  return FxPoxInterface::DeclareComponentIdle(&This->m_PowerPolicyMachine.m_Owner->m_PoxInterface) != 0 ? 1330 : 1433;
}
