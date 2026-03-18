/*
 * XREFs of FsRtlMdlReadCompleteDev @ 0x140031604
 * Callers:
 *     VerifierFsRtlMdlReadCompleteDev @ 0x140741D2C (VerifierFsRtlMdlReadCompleteDev.c)
 * Callees:
 *     CcMdlReadComplete2 @ 0x140474C68 (CcMdlReadComplete2.c)
 */

BOOLEAN __stdcall FsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  CcMdlReadComplete2(FileObject, MdlChain, DeviceObject);
  return 1;
}
