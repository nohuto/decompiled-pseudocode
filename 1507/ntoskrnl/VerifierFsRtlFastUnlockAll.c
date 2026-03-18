/*
 * XREFs of VerifierFsRtlFastUnlockAll @ 0x140741CDC
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
