/*
 * XREFs of VerifierFsRtlCheckLockForReadAccess @ 0x1406C0490
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
BOOLEAN __stdcall VerifierFsRtlCheckLockForReadAccess(PFILE_LOCK FileLock, PIRP Irp)
{
  return pXdvFsRtlCheckLockForReadAccess(FileLock, Irp);
}
