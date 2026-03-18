/*
 * XREFs of ?PowerPolWaitingArmedStoppingCancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C009F4D0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C0012ED4 (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 *     ?DisableTimer@FxPowerIdleMachine@@QEAAEXZ @ 0x1C0022DA4 (-DisableTimer@FxPowerIdleMachine@@QEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolWaitingArmedStoppingCancelUsbSS(FxPkgPnp *This)
{
  FxPowerIdleMachine::DisableTimer(&This->m_PowerPolicyMachine.m_Owner->m_PowerIdleMachine);
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1433 : 1378;
}
