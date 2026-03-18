/*
 * XREFs of FsRtlFreeFileLock @ 0x1400B4128
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlUninitializeFileLock @ 0x1400B414C (FsRtlUninitializeFileLock.c)
 */

void __stdcall FsRtlFreeFileLock(PFILE_LOCK FileLock)
{
  FsRtlUninitializeFileLock(FileLock);
  ExFreeToNPagedLookasideList(&FsRtlFileLockLookasideList, FileLock);
}
