/*
 * XREFs of IoGetRequestorProcess @ 0x1400CD110
 * Callers:
 *     FsRtlProcessFileLock @ 0x1400CCCBC (FsRtlProcessFileLock.c)
 *     FsRtlCheckLockForWriteAccess @ 0x1400CCDE4 (FsRtlCheckLockForWriteAccess.c)
 *     IoGetRequestorProcessId @ 0x1400CCF84 (IoGetRequestorProcessId.c)
 *     FsRtlCheckLockForReadAccess @ 0x1400CCFA0 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400CD16C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x1400CEB78 (FsRtlPrivateCheckWaitingLocks.c)
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
