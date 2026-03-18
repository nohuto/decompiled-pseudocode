/*
 * XREFs of ?PowerPolWaitingArmedQueryIdle@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C0030A10
 * Callers:
 *     <none>
 * Callees:
 *     ?QueryReturnToIdle@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0016FA8 (-QueryReturnToIdle@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWaitingArmedQueryIdle(FxPkgPnp *This)
{
  return FxPowerIdleMachine::QueryReturnToIdle(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine) ? 1342 : 1407;
}
