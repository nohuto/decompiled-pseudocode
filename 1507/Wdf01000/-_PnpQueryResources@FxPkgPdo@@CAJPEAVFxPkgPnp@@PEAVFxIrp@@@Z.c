/*
 * XREFs of ?_PnpQueryResources@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0030A60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
int __fastcall FxPkgPdo::_PnpQueryResources(FxPkgPdo *This, FxIrp *Irp, FxDevice *a3, _WDF_OBJECT_ATTRIBUTES *a4)
{
  return FxPkgPdo::PnpQueryResources(This, Irp, a3, a4);
}
