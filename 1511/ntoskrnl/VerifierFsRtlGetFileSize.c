/*
 * XREFs of VerifierFsRtlGetFileSize @ 0x1406C0508
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlGetFileSize(PFILE_OBJECT FileObject, PLARGE_INTEGER FileSize)
{
  return pXdvFsRtlGetFileSize(FileObject, FileSize);
}
