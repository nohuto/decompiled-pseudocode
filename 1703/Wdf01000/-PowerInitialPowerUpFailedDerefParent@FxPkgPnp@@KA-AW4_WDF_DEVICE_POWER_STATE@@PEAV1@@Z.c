/*
 * XREFs of ?PowerInitialPowerUpFailedDerefParent@FxPkgPnp@@KA?AW4_WDF_DEVICE_POWER_STATE@@PEAV1@@Z @ 0x1C0099930
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPnp::PowerInitialPowerUpFailedDerefParent(FxPkgPnp *This)
{
  This->PowerParentPowerDereference(This);
  return 837LL;
}
