/*
 * XREFs of IoGetRequestorProcess @ 0x140019FC0
 * Callers:
 *     IoIs32bitProcess @ 0x140019F50 (IoIs32bitProcess.c)
 *     FsRtlProcessFileLock @ 0x140103F60 (FsRtlProcessFileLock.c)
 *     FsRtlCheckLockForReadAccess @ 0x140104088 (FsRtlCheckLockForReadAccess.c)
 *     FsRtlCheckLockForWriteAccess @ 0x140104110 (FsRtlCheckLockForWriteAccess.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140104598 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateCheckWaitingLocks @ 0x140106130 (FsRtlPrivateCheckWaitingLocks.c)
 *     IoGetRequestorProcessId @ 0x1401310E8 (IoGetRequestorProcessId.c)
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
