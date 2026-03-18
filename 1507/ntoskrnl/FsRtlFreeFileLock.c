/*
 * XREFs of FsRtlFreeFileLock @ 0x14012EC44
 * Callers:
 *     VerifierFsRtlFreeFileLock @ 0x140741CF4 (VerifierFsRtlFreeFileLock.c)
 * Callees:
 *     FsRtlUninitializeFileLock @ 0x14012EC68 (FsRtlUninitializeFileLock.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToNPagedLookasideList(&FsRtlFileLockLookasideList, FileLock);
}
