/*
 * XREFs of ?_DispatchSetPower@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C002F690
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __fastcall FxPkgPdo::_DispatchSetPower(FxPkgPdo *This, FxIrp *Irp)
{
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return FxPkgPdo::DispatchDeviceSetPower(This, Irp);
  else
    return FxPkgPdo::DispatchSystemSetPower(This, Irp);
}
