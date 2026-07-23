/*
 * XREFs of PiSwDispatch @ 0x140489090
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x1400530E0 (IofCompleteRequest.c)
 *     PiSwIrpCleanup @ 0x1404868C8 (PiSwIrpCleanup.c)
 *     PiSwDeviceDereference @ 0x1404869A8 (PiSwDeviceDereference.c)
 *     PiSwIrpInterfaceRegister @ 0x140487098 (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpSetLifetime @ 0x1404875A8 (PiSwIrpSetLifetime.c)
 *     PiSwIrpStartCreate @ 0x140488374 (PiSwIrpStartCreate.c)
 *     PiAuDoesClientHaveAccess @ 0x1404D908C (PiAuDoesClientHaveAccess.c)
 *     PiSwIrpPropertySet @ 0x140543C44 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576D70 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14057EA2C (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x140645844 (PiSwIrpGetLifetime.c)
 */

__int64 __fastcall PiSwDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al
  PVOID FsContext2; // rcx
  __int64 v9; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    CurrentStackLocation->FileObject->FsContext2 = 0LL;
    Status = (unsigned __int8)PiAuDoesClientHaveAccess(128LL) == 0 ? 0xC0000022 : 0;
    a2->IoStatus.Status = Status;
    goto LABEL_14;
  }
  if ( MajorFunction != 14 )
  {
    if ( MajorFunction == 2 )
    {
      FsContext2 = CurrentStackLocation->FileObject->FsContext2;
      if ( FsContext2 )
      {
        PiSwDeviceDereference(FsContext2);
        CurrentStackLocation->FileObject->FsContext2 = 0LL;
      }
    }
    else
    {
      if ( MajorFunction != 18 )
        return Status;
      v9 = (__int64)CurrentStackLocation->FileObject->FsContext2;
      if ( v9 )
        PiSwIrpCleanup(v9);
    }
    Status = 0;
    a2->IoStatus.Status = 0;
    goto LABEL_14;
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x470400u:
      return (unsigned int)PiSwIrpStartCreate((__int64)a2);
    case 0x470404u:
      return (unsigned int)PiSwIrpPropertySet(a2);
    case 0x470408u:
      return (unsigned int)PiSwIrpInterfaceRegister(a2);
    case 0x47040Cu:
      return (unsigned int)PiSwIrpInterfaceSetState(a2);
    case 0x470410u:
      return (unsigned int)PiSwIrpInterfacePropertySet(a2);
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4654100 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654104 )
      return (unsigned int)PiSwIrpGetLifetime(a2);
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
LABEL_14:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  return (unsigned int)PiSwIrpSetLifetime(a2);
}
