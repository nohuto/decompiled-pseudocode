/*
 * XREFs of FsRtlCheckLockForWriteAccess @ 0x140104110
 * Callers:
 *     VerifierFsRtlCheckLockForWriteAccess @ 0x140741C8C (VerifierFsRtlCheckLockForWriteAccess.c)
 * Callees:
 *     IoGetRequestorProcess @ 0x140019FC0 (IoGetRequestorProcess.c)
 *     FsRtlFastCheckLockForWrite @ 0x1401041A4 (FsRtlFastCheckLockForWrite.c)
 */

BOOLEAN __stdcall FsRtlCheckLockForWriteAccess(PFILE_LOCK FileLock, PIRP Irp)
{
  _QWORD *LockInformation; // r8
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  LARGE_INTEGER v5; // rax
  ULONG Options; // edi
  PFILE_OBJECT FileObject; // rbx
  PEPROCESS ProcessId; // rax
  LARGE_INTEGER Length; // [rsp+40h] [rbp+8h] BYREF
  LARGE_INTEGER StartingByte; // [rsp+50h] [rbp+18h] BYREF

  LockInformation = FileLock->LockInformation;
  if ( !LockInformation || !LockInformation[5] && !LockInformation[4] )
    return 1;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v5.QuadPart = CurrentStackLocation->Parameters.Read.Length;
  StartingByte = CurrentStackLocation->Parameters.Read.ByteOffset;
  Length = v5;
  if ( StartingByte.QuadPart + v5.QuadPart <= *LockInformation )
    return 1;
  Options = CurrentStackLocation->Parameters.Create.Options;
  FileObject = CurrentStackLocation->FileObject;
  ProcessId = IoGetRequestorProcess(Irp);
  return FsRtlFastCheckLockForWrite(FileLock, &StartingByte, &Length, Options, FileObject, ProcessId);
}
