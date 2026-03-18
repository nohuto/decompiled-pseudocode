/*
 * XREFs of FsRtlFastUnlockAll @ 0x1400CD150
 * Callers:
 *     FsRtlProcessFileLock @ 0x1400CCCBC (FsRtlProcessFileLock.c)
 *     VerifierFsRtlFastUnlockAll @ 0x1406C04E8 (VerifierFsRtlFastUnlockAll.c)
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x1400CD16C (FsRtlPrivateFastUnlockAll.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAll(PFILE_LOCK FileLock, PFILE_OBJECT FileObject, PEPROCESS ProcessId, PVOID Context)
{
  return FsRtlPrivateFastUnlockAll((_DWORD)FileLock, (_DWORD)FileObject, (_DWORD)ProcessId, 0, 0, (__int64)Context);
}
