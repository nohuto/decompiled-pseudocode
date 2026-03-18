/*
 * XREFs of PiUEventDispatch @ 0x14048B304
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140053560 (IofCompleteRequest.c)
 *     PiUEventFreeClientRegistrationContext @ 0x14048A41C (PiUEventFreeClientRegistrationContext.c)
 *     PiUEventHandleIoctl @ 0x14048C4D4 (PiUEventHandleIoctl.c)
 */

__int64 __fastcall PiUEventDispatch(__int64 a1, IRP *a2, __int64 a3)
{
  int Status; // edi
  IRP *v4; // rbx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  UCHAR MajorFunction; // al
  IRP *v8; // rcx
  char *FsContext2; // rcx

  Status = a2->IoStatus.Status;
  v4 = a2;
  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  if ( Status >= 0 )
  {
    MajorFunction = CurrentStackLocation->MajorFunction;
    if ( CurrentStackLocation->MajorFunction )
    {
      if ( MajorFunction == 14 )
        return (unsigned int)PiUEventHandleIoctl(a2);
      if ( MajorFunction == 2 )
      {
        FsContext2 = (char *)CurrentStackLocation->FileObject->FsContext2;
        if ( FsContext2 )
        {
          LOBYTE(a2) = 1;
          PiUEventFreeClientRegistrationContext(FsContext2, (__int64)a2, a3);
          CurrentStackLocation->FileObject->FsContext2 = 0LL;
        }
        Status = 0;
        v8 = v4;
        v4->IoStatus.Status = 0;
        goto LABEL_11;
      }
      v8 = a2;
      if ( MajorFunction != 18 )
      {
        Status = -1073741637;
        a2->IoStatus.Status = -1073741637;
        goto LABEL_11;
      }
    }
    else
    {
      v8 = a2;
      CurrentStackLocation->FileObject->FsContext2 = 0LL;
    }
    a2->IoStatus.Status = 0;
LABEL_11:
    IofCompleteRequest(v8, 0);
  }
  return (unsigned int)Status;
}
