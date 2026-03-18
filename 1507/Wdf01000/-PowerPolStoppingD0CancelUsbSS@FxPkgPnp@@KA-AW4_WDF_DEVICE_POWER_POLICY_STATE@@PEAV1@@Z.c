/*
 * XREFs of ?PowerPolStoppingD0CancelUsbSS@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_POLICY_STATE@@PEAV1@@Z @ 0x1C00A0D90
 * Callers:
 *     <none>
 * Callees:
 *     ?PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ @ 0x1C00063FC (-PowerPolicyCancelUsbSSIfCapable@FxPkgPnp@@IEAAEXZ.c)
 */

__int64 __fastcall FxPkgPnp::PowerPolStoppingD0CancelUsbSS(FxPkgPnp *This)
{
  return FxPkgPnp::PowerPolicyCancelUsbSSIfCapable(This) != 0 ? 1433 : 1366;
}
