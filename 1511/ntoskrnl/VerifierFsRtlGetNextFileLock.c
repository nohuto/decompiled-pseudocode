/*
 * XREFs of VerifierFsRtlGetNextFileLock @ 0x1406C0510
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
