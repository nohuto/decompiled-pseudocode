/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x1400E90A8
 * Callers:
 *     VerifierFsRtlMdlReadCompleteDev @ 0x1406C0538 (VerifierFsRtlMdlReadCompleteDev.c)
 * Callees:
 *     CcMdlReadComplete2 @ 0x1404B0788 (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
