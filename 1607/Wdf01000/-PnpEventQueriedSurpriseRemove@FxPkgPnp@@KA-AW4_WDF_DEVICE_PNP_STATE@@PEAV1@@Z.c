/*
 * XREFs of ?PnpEventQueriedSurpriseRemove@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0092DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ @ 0x1C0097A48 (-PnpPowerDereferenceSelf@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventQueriedSurpriseRemove(FxPkgPnp *This)
{
  FxPkgPnp::PnpPowerDereferenceSelf(This);
  return 295LL;
}
