/*
 * XREFs of IoSetIrpExtraCreateParameter @ 0x1404BCD20
 * Callers:
 *     IopSymlinkAllocateAndAddECP @ 0x140540F84 (IopSymlinkAllocateAndAddECP.c)
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
