/*
 * XREFs of FsRtlProcessFileLock @ 0x1401331B8
 * Callers:
 *     <none>
 * Callees:
 *     FsRtlFastUnlockAll @ 0x1400A970C (FsRtlFastUnlockAll.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400A9728 (FsRtlPrivateFastUnlockAll.c)
 *     IoGetRequestorProcess @ 0x1400C1700 (IoGetRequestorProcess.c)
 *     FsRtlPrivateLock @ 0x1400C2A48 (FsRtlPrivateLock.c)
 *     FsRtlFastUnlockSingle @ 0x1400C2F78 (FsRtlFastUnlockSingle.c)
 *     FsRtlCompleteLockIrpReal @ 0x1401332E0 (FsRtlCompleteLockIrpReal.c)
 */

NTSTATUS __stdcall FsRtlProcessFileLock(PFILE_LOCK FileLock, PIRP Irp, PVOID Context)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  struct _KPROCESS *ProcessId; // rax
  NTSTATUS v8; // eax
  PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine; // rcx
  BOOLEAN v11; // di
  BOOLEAN v12; // bl
  struct _KPROCESS *RequestorProcess; // rax
  struct _KPROCESS *v14; // rax
  struct _KPROCESS *v15; // rax
  struct _IO_STATUS_BLOCK Iosb; // [rsp+60h] [rbp-10h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+A8h] [rbp+38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Iosb.Information = 0LL;
  if ( CurrentStackLocation->MinorFunction == 1 )
  {
    v11 = CurrentStackLocation->Flags & 1;
    v12 = (CurrentStackLocation->Flags & 2) != 0;
    FileOffset = CurrentStackLocation->Parameters.Read.ByteOffset;
    RequestorProcess = IoGetRequestorProcess(Irp);
    FsRtlPrivateLock(
      FileLock,
      CurrentStackLocation->FileObject,
      &FileOffset,
      CurrentStackLocation->Parameters.LockControl.Length,
      RequestorProcess,
      CurrentStackLocation->Parameters.Create.Options,
      v11,
      v12,
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
        ProcessId = IoGetRequestorProcess(Irp);
        v8 = FsRtlFastUnlockSingle(
               FileLock,
               CurrentStackLocation->FileObject,
               &FileOffset,
               CurrentStackLocation->Parameters.LockControl.Length,
               ProcessId,
               CurrentStackLocation->Parameters.Create.Options,
               Context,
               0);
        break;
      case 3u:
        v15 = IoGetRequestorProcess(Irp);
        v8 = FsRtlFastUnlockAll(FileLock, CurrentStackLocation->FileObject, v15, Context);
        break;
      case 4u:
        v14 = IoGetRequestorProcess(Irp);
        v8 = FsRtlPrivateFastUnlockAll(
               (__int64)FileLock,
               (_RTL_SPLAY_LINKS *)CurrentStackLocation->FileObject,
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
    Iosb.Status = v8;
    FsRtlCompleteLockIrpReal((_DWORD)CompleteLockIrpRoutine, (_DWORD)Context, (_DWORD)Irp, v8, (__int64)&Iosb, 0LL);
  }
  return Iosb.Status;
}
