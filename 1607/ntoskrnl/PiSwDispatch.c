/*
 * XREFs of PiSwDispatch @ 0x140489CB0
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140053560 (IofCompleteRequest.c)
 *     PiSwIrpCleanup @ 0x1404C3820 (PiSwIrpCleanup.c)
 *     PiSwDeviceDereference @ 0x1404C3AB4 (PiSwDeviceDereference.c)
 *     PiSwIrpInterfaceRegister @ 0x1404C648C (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpStartCreate @ 0x1404C6934 (PiSwIrpStartCreate.c)
 *     PiSwIrpSetLifetime @ 0x1404EF718 (PiSwIrpSetLifetime.c)
 *     PiAuDoesClientHaveAccess @ 0x1404F6100 (PiAuDoesClientHaveAccess.c)
 *     PiSwIrpPropertySet @ 0x140543704 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x140576830 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14057E580 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x140645760 (PiSwIrpGetLifetime.c)
 */

__int64 __fastcall PiSwDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al

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
      if ( CurrentStackLocation->FileObject->FsContext2 )
      {
        PiSwDeviceDereference();
        CurrentStackLocation->FileObject->FsContext2 = 0LL;
      }
    }
    else
    {
      if ( MajorFunction != 18 )
        return Status;
      if ( CurrentStackLocation->FileObject->FsContext2 )
        PiSwIrpCleanup();
    }
    Status = 0;
    a2->IoStatus.Status = 0;
    goto LABEL_14;
  }
  switch ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart )
  {
    case 0x470400u:
      return (unsigned int)PiSwIrpStartCreate(a2);
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
