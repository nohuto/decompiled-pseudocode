/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x14046B530
 * Callers:
 *     FsRtlCheckOplockEx @ 0x14007A080 (FsRtlCheckOplockEx.c)
 *     FsRtlpAttachOplockKey @ 0x14007B9B4 (FsRtlpAttachOplockKey.c)
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x140540BD0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140540F84 (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x140541028 (IopGraftName.c)
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
