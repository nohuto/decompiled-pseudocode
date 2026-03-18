/*
 * XREFs of FsRtlProcessFileLock @ 0x140103F60
 * Callers:
 *     VerifierFsRtlProcessFileLock @ 0x140741E78 (VerifierFsRtlProcessFileLock.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x140019FC0 (IoGetRequestorProcess.c)
 *     FsRtlFastUnlockAll @ 0x14010457C (FsRtlFastUnlockAll.c)
 *     FsRtlPrivateFastUnlockAll @ 0x140104598 (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateLock @ 0x14010499C (FsRtlPrivateLock.c)
 *     FsRtlFastUnlockSingle @ 0x140104FFC (FsRtlFastUnlockSingle.c)
 *     FsRtlCompleteLockIrpReal @ 0x140106380 (FsRtlCompleteLockIrpReal.c)
 */

NTSTATUS __stdcall FsRtlProcessFileLock(PFILE_LOCK FileLock, PIRP Irp, PVOID Context)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  BOOLEAN FailImmediately; // di
  BOOLEAN ExclusiveLock; // bl
  struct _KPROCESS *ProcessId; // rax
  struct _KPROCESS *RequestorProcess; // rax
  NTSTATUS v12; // eax
  PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine; // rcx
  unsigned int v14; // eax
  struct _KPROCESS *v15; // rax
  struct _IO_STATUS_BLOCK Iosb; // [rsp+60h] [rbp-10h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+A8h] [rbp+38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Iosb.Information = 0LL;
  if ( CurrentStackLocation->MinorFunction == 1 )
  {
    FailImmediately = CurrentStackLocation->Flags & 1;
    ExclusiveLock = (CurrentStackLocation->Flags & 2) != 0;
    FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    ProcessId = IoGetRequestorProcess(Irp);
    FsRtlPrivateLock(
      FileLock,
      CurrentStackLocation->FileObject,
      &FileOffset,
      CurrentStackLocation->Parameters.LockControl.Length,
      ProcessId,
      CurrentStackLocation->Parameters.Create.Options,
      FailImmediately,
      ExclusiveLock,
      &Iosb,
      Irp,
      Context,
      0);
  }
  else
  {
    switch ( CurrentStackLocation->MinorFunction )
    {
      case 2u:
        FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
        RequestorProcess = IoGetRequestorProcess(Irp);
        v12 = FsRtlFastUnlockSingle(
                FileLock,
                CurrentStackLocation->FileObject,
                &FileOffset,
                CurrentStackLocation->Parameters.LockControl.Length,
                RequestorProcess,
                CurrentStackLocation->Parameters.Create.Options,
                Context,
                0);
        break;
      case 3u:
        v15 = IoGetRequestorProcess(Irp);
        v12 = FsRtlFastUnlockAll(FileLock, CurrentStackLocation->FileObject, v15, Context);
        break;
      case 4u:
        v14 = (unsigned int)IoGetRequestorProcess(Irp);
        v12 = FsRtlPrivateFastUnlockAll(
                (_DWORD)FileLock,
                CurrentStackLocation->FileObject,
                v14,
                CurrentStackLocation->Parameters.Create.Options,
                1,
                (__int64)Context);
        break;
      default:
        Irp->IoStatus.Status = -1073741808;
        pIofCompleteRequest(Irp, 1);
        Iosb.Status = -1073741808;
        return Iosb.Status;
    }
    CompleteLockIrpRoutine = FileLock->CompleteLockIrpRoutine;
    Iosb.Status = v12;
    FsRtlCompleteLockIrpReal((_DWORD)CompleteLockIrpRoutine, (_DWORD)Context, (_DWORD)Irp, v12, (__int64)&Iosb, 0LL);
  }
  return Iosb.Status;
}
