/*
 * XREFs of ?_DispatchQueryPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C00060C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall FxPkgFdo::_DispatchQueryPower(FxPkgFdo *This, FxIrp *Irp)
{
  if ( !Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return FxPkgFdo::DispatchSystemQueryPower(This, Irp);
  Irp->m_Irp->IoStatus.Status = 0;
  return FxPkgFdo::_PowerPassDown(This, Irp);
}
