/*
 * XREFs of FsRtlProcessFileLock @ 0x1400CCCBC
 * Callers:
 *     VerifierFsRtlProcessFileLock @ 0x1406C0684 (VerifierFsRtlProcessFileLock.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x1400CD110 (IoGetRequestorProcess.c)
 *     FsRtlFastUnlockAll @ 0x1400CD150 (FsRtlFastUnlockAll.c)
 *     FsRtlPrivateFastUnlockAll @ 0x1400CD16C (FsRtlPrivateFastUnlockAll.c)
 *     FsRtlPrivateLock @ 0x1400CD704 (FsRtlPrivateLock.c)
 *     FsRtlFastUnlockSingle @ 0x1400CDC38 (FsRtlFastUnlockSingle.c)
 *     FsRtlCompleteLockIrpReal @ 0x1400CED3C (FsRtlCompleteLockIrpReal.c)
 */

NTSTATUS __stdcall FsRtlProcessFileLock(PFILE_LOCK FileLock, PIRP Irp, PVOID Context)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  IRP *v5; // rsi
  struct _KPROCESS *ProcessId; // rax
  NTSTATUS v8; // eax
  PCOMPLETE_LOCK_IRP_ROUTINE CompleteLockIrpRoutine; // rcx
  BOOLEAN v11; // di
  BOOLEAN v12; // bl
  struct _KPROCESS *RequestorProcess; // rax
  PIRP v14; // rcx
  unsigned int v15; // eax
  struct _KPROCESS *v16; // rax
  struct _IO_STATUS_BLOCK Iosb; // [rsp+60h] [rbp-10h] BYREF
  LARGE_INTEGER FileOffset; // [rsp+A8h] [rbp+38h] BYREF

  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Iosb.Information = 0LL;
  v5 = Irp;
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
      v5,
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
        v16 = IoGetRequestorProcess(Irp);
        v8 = FsRtlFastUnlockAll(FileLock, CurrentStackLocation->FileObject, v16, Context);
        break;
      case 4u:
        v15 = (unsigned int)IoGetRequestorProcess(Irp);
        v8 = FsRtlPrivateFastUnlockAll(
               (_DWORD)FileLock,
               CurrentStackLocation->FileObject,
               v15,
               CurrentStackLocation->Parameters.Create.Options,
               1,
               (__int64)Context);
        break;
      default:
        v14 = Irp;
        Irp->IoStatus.Status = -1073741808;
        LOBYTE(Irp) = 1;
        pIofCompleteRequest(v14, Irp);
        Iosb.Status = -1073741808;
        return Iosb.Status;
    }
    CompleteLockIrpRoutine = FileLock->CompleteLockIrpRoutine;
    Iosb.Status = v8;
    FsRtlCompleteLockIrpReal((_DWORD)CompleteLockIrpRoutine, (_DWORD)Context, (_DWORD)v5, v8, (__int64)&Iosb, 0LL);
  }
  return Iosb.Status;
}
