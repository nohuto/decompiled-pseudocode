/*
 * XREFs of VerifierFsRtlFastUnlockAllByKey @ 0x140741CE4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __stdcall VerifierFsRtlFastUnlockAllByKey(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PEPROCESS ProcessId,
        ULONG Key,
        PVOID Context)
{
  return pXdvFsRtlFastUnlockAllByKey(FileLock, FileObject, ProcessId, Key, Context);
}
