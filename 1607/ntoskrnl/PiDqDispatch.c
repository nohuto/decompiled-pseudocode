/*
 * XREFs of PiDqDispatch @ 0x14048B6C4
 * Callers:
 *     PiDaDispatch @ 0x14048B5FC (PiDaDispatch.c)
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     IoIs32bitProcess @ 0x1400C1690 (IoIs32bitProcess.c)
 *     wcscmp @ 0x14014F524 (wcscmp.c)
 *     PiDqIrpQueryGetResult @ 0x14048ADF8 (PiDqIrpQueryGetResult.c)
 *     PiDqIrpQueryCreate @ 0x14048B94C (PiDqIrpQueryCreate.c)
 *     PiDqQueryUnlock @ 0x14048C1B0 (PiDqQueryUnlock.c)
 *     PiDqQueryLock @ 0x14048C208 (PiDqQueryLock.c)
 *     PiDqQueryRelease @ 0x14048CAEC (PiDqQueryRelease.c)
 *     PiDqQueryCreate @ 0x14048CC10 (PiDqQueryCreate.c)
 *     PiDqQueryGetObjectManager @ 0x14048CF6C (PiDqQueryGetObjectManager.c)
 *     PiDqObjectManagerUnregisterQuery @ 0x14048D0EC (PiDqObjectManagerUnregisterQuery.c)
 *     PiDqIrpPropertySet @ 0x140631994 (PiDqIrpPropertySet.c)
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
        return (unsigned int)PiDqIrpQueryGetResult((__int64)a2);
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
