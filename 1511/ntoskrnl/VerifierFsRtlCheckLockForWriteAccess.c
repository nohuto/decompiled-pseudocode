/*
 * XREFs of VerifierFsRtlCheckLockForWriteAccess @ 0x1406C0498
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierFsRtlCheckLockForWriteAccess(PFILE_LOCK FileLock, PIRP Irp)
{
  return pXdvFsRtlCheckLockForWriteAccess(FileLock, Irp);
}
