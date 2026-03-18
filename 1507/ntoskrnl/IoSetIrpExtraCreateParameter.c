/*
 * XREFs of IoSetIrpExtraCreateParameter @ 0x1405496A8
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x140548E7C (IopSymlinkAllocateAndAddECP.c)
 *     FsRtlSetEcpListIntoIrp @ 0x1405496A0 (FsRtlSetEcpListIntoIrp.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoSetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST *ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741585;
  if ( Irp->UserBuffer )
    return -1073741584;
  Irp->UserBuffer = ExtraCreateParameter;
  return 0;
}
