/*
 * XREFs of ?PnpEventFailedInit@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C00929A0
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006292C (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?ReleasePowerThread@FxPkgPnp@@AEAAXXZ @ 0x1C0097B88 (-ReleasePowerThread@FxPkgPnp@@AEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventFailedInit(FxPkgPnp *This)
{
  unsigned __int8 v2; // dl

  FxPkgPnp::ReleasePowerThread(This);
  This->ReleaseReenumerationInterface(This);
  FxPkgPnp::PnpFinishProcessingIrp(This, v2);
  return 261LL;
}
