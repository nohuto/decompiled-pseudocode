/*
 * XREFs of FsRtlFastUnlockAll @ 0x14010457C
 * Callers:
 *     FsRtlProcessFileLock @ 0x140103F60 (FsRtlProcessFileLock.c)
 *     VerifierFsRtlFastUnlockAll @ 0x140741CDC (VerifierFsRtlFastUnlockAll.c)
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x140104598 (FsRtlPrivateFastUnlockAll.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAll(PFILE_LOCK FileLock, PFILE_OBJECT FileObject, PEPROCESS ProcessId, PVOID Context)
{
  return FsRtlPrivateFastUnlockAll((_DWORD)FileLock, (_DWORD)FileObject, (_DWORD)ProcessId, 0, 0, (__int64)Context);
}
