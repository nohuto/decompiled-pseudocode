/*
 * XREFs of ?SendIrpSynchronously@FxPkgPdo@@EEAAJPEAVFxIrp@@@Z @ 0x1C0037010
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall FxPkgPdo::SendIrpSynchronously(FxPkgPdo *this, FxIrp *Irp)
{
  return (unsigned int)Irp->m_Irp->IoStatus.Status;
}
