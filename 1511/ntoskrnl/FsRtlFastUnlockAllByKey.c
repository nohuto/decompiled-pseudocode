/*
 * XREFs of FsRtlFastUnlockAllByKey @ 0x1401ACAF8
 * Callers:
 *     VerifierFsRtlFastUnlockAllByKey @ 0x1406C04F0 (VerifierFsRtlFastUnlockAllByKey.c)
 * Callees:
 *     FsRtlPrivateFastUnlockAll @ 0x1400CD16C (FsRtlPrivateFastUnlockAll.c)
 */

NTSTATUS __stdcall FsRtlFastUnlockAllByKey(
        PFILE_LOCK FileLock,
        PFILE_OBJECT FileObject,
        PEPROCESS ProcessId,
        ULONG Key,
        PVOID Context)
{
  return FsRtlPrivateFastUnlockAll(
           (__int64)FileLock,
           (_RTL_SPLAY_LINKS *)FileObject,
           ProcessId,
           Key,
           1,
           (__int64)Context);
}
