/*
 * XREFs of ?PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009AAA0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C0012CCC (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C00239D4 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWaitingArmedStoppingCancelUsbSS(FxPkgPnp *This)
{
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1433 : 1378;
}
