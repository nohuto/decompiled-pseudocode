/*
 * XREFs of PiDqDispatch @ 0x140441804
 * Callers:
 *     PiDaDispatch @ 0x140440A70 (PiDaDispatch.c)
 * Callees:
 *     IoIs32bitProcess @ 0x140019F50 (IoIs32bitProcess.c)
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     wcscmp @ 0x140173BB8 (wcscmp.c)
 *     PiDqIrpQueryCreate @ 0x1404419DC (PiDqIrpQueryCreate.c)
 *     PiDqQueryUnlock @ 0x14044239C (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x140442428 (PiDqQueryLock.c)
 *     PiDqIrpQueryGetResult @ 0x140444BEC (PiDqIrpQueryGetResult.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x14053D3E8 (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqQueryRelease @ 0x14053D4E0 (PiDqQueryRelease.c)
 *     PiDqQueryCreate @ 0x1405483F0 (PiDqQueryCreate.c)
 *     PiDqQueryGetObjectManager @ 0x14054E1DC (PiDqQueryGetObjectManager.c)
 *     PiDqIrpPropertySet @ 0x1405B2FC8 (PiDqIrpPropertySet.c)
 */

__int64 __fastcall PiDqDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // r14
  unsigned int Status; // edi
  PFILE_OBJECT FileObject; // rcx
  UCHAR MajorFunction; // al
  PVOID *p_FsContext2; // r15
  IRP **FsContext2; // rbx
  unsigned int LowPart; // eax
  const wchar_t *Buffer; // rbx
  __int64 v13; // rcx
  IRP *v14; // rdi
  __int64 ObjectManager; // rbp
  IRP *v16; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  FileObject = CurrentStackLocation->FileObject;
  MajorFunction = CurrentStackLocation->MajorFunction;
  p_FsContext2 = &FileObject->FsContext2;
  FsContext2 = (IRP **)FileObject->FsContext2;
  if ( CurrentStackLocation->MajorFunction )
  {
    if ( MajorFunction != 14 )
    {
      if ( MajorFunction == 2 )
      {
        if ( FsContext2 )
        {
          PiDqQueryRelease(FileObject->FsContext2);
          CurrentStackLocation->FileObject->FsContext2 = 0LL;
        }
      }
      else
      {
        if ( MajorFunction != 18 )
          return Status;
        if ( FsContext2 )
        {
          v14 = 0LL;
          ObjectManager = 0LL;
          PiDqQueryLock(FileObject->FsContext2);
          if ( ((_DWORD)FsContext2[27] & 4) != 0 )
            ObjectManager = PiDqQueryGetObjectManager(FsContext2);
          PiDqQueryUnlock(FsContext2);
          if ( ObjectManager )
            PiDqObjectManagerUnregisterQuery(ObjectManager, FsContext2);
          PiDqQueryLock(FsContext2);
          v16 = FsContext2[22];
          *((_DWORD *)FsContext2 + 54) |= 8u;
          if ( v16 && _InterlockedExchange64((volatile __int64 *)&v16->CancelRoutine, 0LL) )
          {
            v14 = FsContext2[22];
            FsContext2[22] = 0LL;
          }
          PiDqQueryUnlock(FsContext2);
          if ( v14 )
          {
            v14->IoStatus.Information = 0LL;
            v14->IoStatus.Status = -1073741536;
            IofCompleteRequest(v14, 0);
          }
        }
      }
      Status = 0;
      a2->IoStatus.Status = 0;
      goto LABEL_7;
    }
    LowPart = CurrentStackLocation->Parameters.Read.ByteOffset.LowPart;
    if ( LowPart == 4653056 )
      return (unsigned int)PiDqIrpQueryCreate(a2);
    if ( LowPart > 0x470006 )
    {
      if ( LowPart <= 0x470008 )
        return (unsigned int)PiDqIrpQueryGetResult(a2);
      if ( LowPart == 4653068 )
        return (unsigned int)PiDqIrpPropertySet(a2);
    }
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
  }
  else
  {
    Buffer = FileObject->FileName.Buffer;
    Status = 0;
    if ( !wcscmp(L"\\Dev\\Query", Buffer) )
    {
      LOBYTE(v13) = IoIs32bitProcess(a2) == 0;
      Status = PiDqQueryCreate(v13, p_FsContext2);
    }
    else if ( !wcscmp(L"\\Dev\\NoState", Buffer) )
    {
      *p_FsContext2 = 0LL;
    }
    else
    {
      Status = -1073741811;
    }
    a2->IoStatus.Status = Status;
  }
LABEL_7:
  IofCompleteRequest(a2, 0);
  return Status;
}
