/*
 * XREFs of CiDispatchClose @ 0x1C000B190
 * Callers:
 *     <none>
 * Callees:
 *     CiTaskIndexDereference @ 0x1C0001BE0 (CiTaskIndexDereference.c)
 *     CiThreadDereference @ 0x1C000B230 (CiThreadDereference.c)
 *     CiProcessDereference @ 0x1C000B420 (CiProcessDereference.c)
 *     CiSystemAcquirePushLock @ 0x1C000B5F0 (CiSystemAcquirePushLock.c)
 */

__int64 __fastcall CiDispatchClose(__int64 a1, IRP *a2)
{
  PFILE_OBJECT FileObject; // rcx
  _QWORD *FsContext; // rsi
  volatile signed __int64 *v5; // rcx

  FileObject = a2->Tail.Overlay.CurrentStackLocation->FileObject;
  FsContext = FileObject->FsContext;
  if ( FsContext )
  {
    if ( *(_DWORD *)FsContext == 1 )
    {
      CiSystemAcquirePushLock(FsContext + 2);
      FsContext[1] = 0LL;
      FsContext[3] = 0LL;
      ExReleasePushLockExclusiveEx(FsContext + 2, 0LL);
      CiProcessDereference(FsContext);
    }
    else
    {
      v5 = (volatile signed __int64 *)FileObject->FsContext;
      if ( *(_DWORD *)FsContext )
        CiTaskIndexDereference(v5);
      else
        CiThreadDereference(v5);
    }
  }
  a2->IoStatus.Status = 0;
  a2->IoStatus.Information = 0LL;
  IofCompleteRequest(a2, 0);
  return 0LL;
}
