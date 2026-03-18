/*
 * XREFs of ?PnpEventStopped@FxPkgPnp@@KA?AW4_WDF_DEVICE_PNP_STATE@@PEAV1@@Z @ 0x1C0093640
 * Callers:
 *     <none>
 * Callees:
 *     ?PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z @ 0x1C006292C (-PnpFinishProcessingIrp@FxPkgPnp@@IEAAXE@Z.c)
 *     ?PnpReleaseHardware@FxPkgPnp@@IEAAJXZ @ 0x1C0093A90 (-PnpReleaseHardware@FxPkgPnp@@IEAAJXZ.c)
 *     ?NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ @ 0x1C0097014 (-NotifyResourceobjectsToReleaseResources@FxPkgPnp@@AEAAXXZ.c)
 *     ?SetInternalFailure@FxPkgPnp@@IEAAXXZ @ 0x1C0097D74 (-SetInternalFailure@FxPkgPnp@@IEAAXXZ.c)
 */

__int64 __fastcall FxPkgPnp::PnpEventStopped(FxPkgPnp *This)
{
  unsigned __int8 v2; // dl
  unsigned int v3; // edi

  if ( FxPkgPnp::PnpReleaseHardware(This) < 0 )
  {
    FxPkgPnp::SetInternalFailure(This);
    v3 = 299;
  }
  else
  {
    FxPkgPnp::NotifyResourceobjectsToReleaseResources(This);
    v3 = 314;
  }
  FxPkgPnp::PnpFinishProcessingIrp(This, v2);
  return v3;
}
