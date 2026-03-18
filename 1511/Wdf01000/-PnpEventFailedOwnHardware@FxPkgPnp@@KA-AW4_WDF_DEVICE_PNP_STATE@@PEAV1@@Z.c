/*
 * XREFs of ?PnpEventFailedOwnHardware@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0084BE0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C0085CD4 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedOwnHardware(FxPkgPnp *This)
{
  FxPkgPnp::PnpReleaseHardware(This);
  return 299LL;
}
