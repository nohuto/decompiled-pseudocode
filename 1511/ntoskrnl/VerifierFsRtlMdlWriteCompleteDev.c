/*
 * XREFs of VerifierFsRtlMdlWriteCompleteDev @ 0x1406C0540
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierFsRtlMdlWriteCompleteDev(
        PFILE_OBJECT FileObject,
        PLARGE_INTEGER FileOffset,
        PMDL MdlChain,
        PDEVICE_OBJECT DeviceObject)
{
  return pXdvFsRtlMdlWriteCompleteDev(FileObject, FileOffset, MdlChain, DeviceObject);
}
