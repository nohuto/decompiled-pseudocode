/*
 * XREFs of ?_PnpFilterResourceRequirements@FxPkgPdo@@CAJPEAVFxPkgPnp@@PEAVFxIrp@@@Z @ 0x1C003AE70
 * Callers:
 *     <none>
 * Callees:
 *     ?FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z @ 0x1C0024238 (-FilterResourceRequirements@FxPkgPnp@@IEAAJPEAPEAU_IO_RESOURCE_REQUIREMENTS_LIST@@@Z.c)
 */

__int64 __fastcall FxPkgPdo::_PnpFilterResourceRequirements(FxPkgPnp *This, FxIrp *Irp)
{
  signed int Status; // r8d
  _IRP *m_Irp; // rax

  Status = FxPkgPnp::FilterResourceRequirements(
             This,
             (_IO_RESOURCE_REQUIREMENTS_LIST **)&Irp->m_Irp->IoStatus.Information);
  m_Irp = Irp->m_Irp;
  if ( Status < 0 )
    m_Irp->IoStatus.Status = Status;
  else
    Status = m_Irp->IoStatus.Status;
  return FxPkgPnp::CompletePnpRequest(This, Irp, Status);
}
