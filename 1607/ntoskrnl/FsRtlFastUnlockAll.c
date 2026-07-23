/*
 * XREFs of FsRtlFastUnlockAll @ 0x1400A970C
 * Callers:
 *     FsRtlProcessFileLock @ 0x1401331B8 (FsRtlProcessFileLock.c)
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x1400A9728 (FsRtlPrivateFastUnlockAll.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAll(PFILE_LOCK FileLock, PFILE_OBJECT FileObject, PEPROCESS ProcessId, PVOID Context)
{
  return FsRtlPrivateFastUnlockAll((_DWORD)FileLock, (_DWORD)FileObject, (_DWORD)ProcessId, 0, 0, (__int64)Context);
}
