/*
 * XREFs of VerifierFsRtlProcessFileLock @ 0x140741E78
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
