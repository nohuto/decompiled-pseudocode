/*
 * XREFs of ?_PnpCompleteIrp@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0099830
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPdo::_PnpCompleteIrp(FxPkgPnp *This, FxIrp *Irp)
{
  return FxPkgPnp::CompletePnpRequest(This, Irp, Irp->m_Irp->IoStatus.Status);
}
