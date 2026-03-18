/*
 * XREFs of IoGetIrpExtraCreateParameter @ 0x1404A5730
 * Callers:
 *     FsRtlpAttachOplockKey @ 0x14006DA88 (FsRtlpAttachOplockKey.c)
 *     FsRtlCheckOplockEx @ 0x140070120 (FsRtlCheckOplockEx.c)
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 *     IopSymlinkUpdateECP @ 0x140548AC0 (IopSymlinkUpdateECP.c)
 *     IopSymlinkAllocateAndAddECP @ 0x140548E7C (IopSymlinkAllocateAndAddECP.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
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
