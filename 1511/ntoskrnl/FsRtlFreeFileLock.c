/*
 * XREFs of FsRtlFreeFileLock @ 0x1400F2900
 * Callers:
 *     VerifierFsRtlFreeFileLock @ 0x1406C0500 (VerifierFsRtlFreeFileLock.c)
 * Callees:
 *     FsRtlUninitializeFileLock @ 0x1400F2924 (FsRtlUninitializeFileLock.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToNPagedLookasideList(&FsRtlFileLockLookasideList, FileLock);
}
