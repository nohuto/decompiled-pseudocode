/*
 * XREFs of VerifierFsRtlProcessFileLock @ 0x1406C0684
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlProcessFileLock(PFILE_LOCK FileLock, PIRP Irp, PVOID Context)
{
  return pXdvFsRtlProcessFileLock(FileLock, Irp, Context);
}
