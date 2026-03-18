/*
 * XREFs of PiSwDispatch @ 0x140494568
 * Callers:
 *     <none>
 * Callees:
 *     IofCompleteRequest @ 0x140084CE0 (IofCompleteRequest.c)
 *     PiAuDoesClientHaveAccess @ 0x14045D728 (PiAuDoesClientHaveAccess.c)
 *     PiSwDeviceDereference @ 0x140494688 (PiSwDeviceDereference.c)
 *     PiSwIrpCleanup @ 0x1404946BC (PiSwIrpCleanup.c)
 *     PiSwIrpInterfaceRegister @ 0x1404E3ABC (PiSwIrpInterfaceRegister.c)
 *     PiSwIrpStartCreate @ 0x1404E3F68 (PiSwIrpStartCreate.c)
 *     PiSwIrpSetLifetime @ 0x1404EBEC8 (PiSwIrpSetLifetime.c)
 *     PiSwIrpPropertySet @ 0x1404F9230 (PiSwIrpPropertySet.c)
 *     PiSwIrpInterfacePropertySet @ 0x14054D0A0 (PiSwIrpInterfacePropertySet.c)
 *     PiSwIrpInterfaceSetState @ 0x14054E7AC (PiSwIrpInterfaceSetState.c)
 *     PiSwIrpGetLifetime @ 0x140611354 (PiSwIrpGetLifetime.c)
 */

__int64 __fastcall PiSwDispatch(__int64 a1, IRP *a2)
{
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rsi
  unsigned int Status; // ebx
  UCHAR MajorFunction; // al
  PVOID FsContext2; // rcx

  CurrentStackLocation = a2->Tail.Overlay.CurrentStackLocation;
  Status = a2->IoStatus.Status;
  MajorFunction = CurrentStackLocation->MajorFunction;
  if ( !CurrentStackLocation->MajorFunction )
  {
    CurrentStackLocation->FileObject->FsContext2 = 0LL;
    Status = PiAuDoesClientHaveAccess(0x80u) == 0 ? 0xC0000022 : 0;
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
