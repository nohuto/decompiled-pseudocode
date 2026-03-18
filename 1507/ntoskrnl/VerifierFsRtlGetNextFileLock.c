/*
 * XREFs of VerifierFsRtlGetNextFileLock @ 0x140741D04
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PFILE_LOCK_INFO __stdcall VerifierFsRtlGetNextFileLock(PFILE_LOCK FileLock, BOOLEAN Restart)
{
  return pXdvFsRtlGetNextFileLock(FileLock, Restart);
}
