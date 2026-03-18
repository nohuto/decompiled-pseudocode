/*
 * XREFs of FsRtlFastUnlockAll @ 0x1400AB18C
 * Callers:
 *     FsRtlProcessFileLock @ 0x140132C48 (FsRtlProcessFileLock.c)
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x1400AB1A8 (FsRtlPrivateFastUnlockAll.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAll(PFILE_LOCK FileLock, PFILE_OBJECT FileObject, PEPROCESS ProcessId, PVOID Context)
{
  return FsRtlPrivateFastUnlockAll((_DWORD)FileLock, (_DWORD)FileObject, (_DWORD)ProcessId, 0, 0, (__int64)Context);
}
