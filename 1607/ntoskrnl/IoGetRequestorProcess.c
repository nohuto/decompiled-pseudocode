/*
 * XREFs of IoGetRequestorProcess @ 0x1400C3870
 * Callers:
 *     FsRtlCheckLockForReadAccess @ 0x1400A8AD0 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400AB1A8 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400AB4CC (FsRtlPrivateCheckWaitingLocks.c)
 *     FsRtlCheckLockForWriteAccess @ 0x1400ACDE8 (FsRtlCheckLockForWriteAccess.c)
 *     IoGetRequestorProcessId @ 0x1400B5BEC (IoGetRequestorProcessId.c)
 *     IoIs32bitProcess @ 0x1400C3800 (IoIs32bitProcess.c)
 *     FsRtlProcessFileLock @ 0x140132C48 (FsRtlProcessFileLock.c)
 * Callees:
 *     <none>
 */

PEPROCESS __stdcall IoGetRequestorProcess(PIRP Irp)
{
  PETHREAD Thread; // rdx
  CCHAR ApcEnvironment; // al

  Thread = Irp->Tail.Overlay.Thread;
  if ( (Irp->Flags & 0x2000) != 0 )
    return (PEPROCESS)(Irp->Overlay.AllocationSize.QuadPart & 0xFFFFFFFFFFFFFFF9uLL);
  if ( !Thread )
    return 0LL;
  ApcEnvironment = Irp->ApcEnvironment;
  if ( !ApcEnvironment )
    return Thread->Process;
  if ( ApcEnvironment == 1 )
    return Thread->ApcState.Process;
  else
    return 0LL;
}
