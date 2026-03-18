/*
 * XREFs of ?PowerPolStoppingCancelTimer@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0C80
 * Callers:
 *     <none>
 * Callees:
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0017164 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppingCancelTimer(FxPkgPnp *This)
{
  return FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine) != 0 ? 1371 : 1375;
}
