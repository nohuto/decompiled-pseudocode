/*
 * XREFs of ?PowerPolSystemAsleepNoWake@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00060A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ @ 0x1C00064C4 (-PowerPolicyCompleteSystemPowerIrp@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSystemAsleepNoWake(FxPkgPnp *This)
{
  FxPkgPnp::PowerPolicyCompleteSystemPowerIrp(This);
  return 1433LL;
}
