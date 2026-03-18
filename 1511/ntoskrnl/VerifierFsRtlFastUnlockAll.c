/*
 * XREFs of VerifierFsRtlFastUnlockAll @ 0x1406C04E8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlFastUnlockAll(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PEPROCESS ProcessId,
        PVOID Context)
{
  return pXdvFsRtlFastUnlockAll(FileLock, FileObject, ProcessId, Context);
}
