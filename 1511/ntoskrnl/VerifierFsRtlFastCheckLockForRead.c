/*
 * XREFs of VerifierFsRtlFastCheckLockForRead @ 0x1406C04D8
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierFsRtlFastCheckLockForRead(
        PFILE_LOCK FileLock,
        PLARGE_INTEGER StartingByte,
        PLARGE_INTEGER Length,
        ULONG Key,
        PFILE_OBJECT FileObject,
        PVOID ProcessId)
{
  return pXdvFsRtlFastCheckLockForRead(FileLock, StartingByte, Length, Key, FileObject, ProcessId);
}
