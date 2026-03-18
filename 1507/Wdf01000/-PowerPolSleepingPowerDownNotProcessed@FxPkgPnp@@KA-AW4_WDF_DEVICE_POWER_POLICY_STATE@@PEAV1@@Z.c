/*
 * XREFs of ?PowerPolSleepingPowerDownNotProcessed@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0550
 * Callers:
 *     <none>
 * Callees:
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C009E930 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolSleepingPowerDownNotProcessed(FxPkgPnp *This)
{
  FxPkgPnp::SetInternalFailure(This);
  return 1295LL;
}
