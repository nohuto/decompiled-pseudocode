/*
 * XREFs of ?_DispatchSetPower@FxPkgFdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C0031D90
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

NTSTATUS __fastcall FxPkgFdo::_DispatchSetPower(FxPkgFdo *This, FxIrp *Irp)
{
  if ( Irp->m_Irp->Tail.Overlay.CurrentStackLocation->Parameters.Create.Options )
    return FxPkgFdo::DispatchDeviceSetPower(This, Irp);
  else
    return FxPkgFdo::DispatchSystemSetPower(This, Irp);
}
