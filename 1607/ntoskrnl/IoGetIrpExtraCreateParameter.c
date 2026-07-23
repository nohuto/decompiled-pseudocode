/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x14046A400
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A100 (FsRtlCheckOplockEx.c)
 *     FsRtlpAttachOplockKey @ 0x14007BA34 (FsRtlpAttachOplockKey.c)
 *     IopParseDevice @ 0x14043F7C0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x140541110 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x1405414C4 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x140541568 (IopGraftName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall IoGetIrpExtraCreateParameter(PIRP Irp, struct _ECP_LIST **ExtraCreateParameter)
{
  if ( (Irp->Flags & 0x80u) == 0 )
    return -1073741811;
  *ExtraCreateParameter = (struct _ECP_LIST *)Irp->UserBuffer;
  return 0;
}
