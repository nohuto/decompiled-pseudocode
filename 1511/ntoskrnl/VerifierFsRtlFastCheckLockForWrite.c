/*
 * XREFs of VerifierFsRtlFastCheckLockForWrite @ 0x1406C04E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierFsRtlFastCheckLockForWrite(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PVOID FileObject,
        PVOID ProcessId)
{
  return pXdvFsRtlFastCheckLockForWrite(FileLock, StartingByte, Length, Key, FileObject, ProcessId);
}
