/*
 * XREFs of VerifierFsRtlCheckLockForWriteAccess @ 0x140741C8C
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
