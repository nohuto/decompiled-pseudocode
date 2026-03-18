/*
 * XREFs of VerifierFsRtlMdlReadCompleteDev @ 0x1406C0538
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierFsRtlMdlReadCompleteDev(PFILE_OBJECT FileObject, PMDL MdlChain, PDEVICE_OBJECT DeviceObject)
{
  return pXdvFsRtlMdlReadCompleteDev(FileObject, MdlChain, DeviceObject);
}
