/*
 * XREFs of PiSwDispatch @ 0x14045A7DC
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140048F70 (IofCompleteRequest.c)
 *     PiSwIrpSetLifetime @ 0x14045A324 (PiSwIrpSetLifetime.c)
 *     PiSwIrpInterfaceRegister @ 0x14045A410 (PiSwIrpInterfaceRegister.c)
 *     PiAuDoesClientHaveAccess @ 0x14045A8FC (PiAuDoesClientHaveAccess.c)
 *     PiSwIrpStartCreate @ 0x14045A93C (PiSwIrpStartCreate.c)
 *     PiSwIrpCleanup @ 0x140539078 (PiSwIrpCleanup.c)
 *     PiSwDeviceDereference @ 0x140539DD0 (PiSwDeviceDereference.c)
 *     PiSwIrpPropertySet @ 0x14056A754 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x1405C2F68 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x1405C44E0 (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x1406910C8 (PiSwIrpGetLifetime.c)
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
    goto LABEL_12;
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
    goto LABEL_12;
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
  }
  if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart != 4654096 )
  {
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654100 )
      return (unsigned int)PiSwIrpSetLifetime(a2);
    if ( CurrentStackLocation->Parameters.Read.ByteOffset.LowPart == 4654104 )
      return (unsigned int)PiSwIrpGetLifetime(a2);
    Status = -1073741637;
    a2->IoStatus.Status = -1073741637;
LABEL_12:
    IofCompleteRequest(a2, 0);
    return Status;
  }
  return (unsigned int)PiSwIrpInterfacePropertySet(a2);
}
