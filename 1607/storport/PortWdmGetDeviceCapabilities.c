/*
 * XREFs of PortWdmGetDeviceCapabilities @ 0x1C005B068
 * Callers:
 *     RaUnitQueryCapabilitiesIrp @ 0x1C005ACEC (RaUnitQueryCapabilitiesIrp.c)
 * Callees:
 *     memset @ 0x1C001AD80 (memset.c)
 */

__int64 __fastcall PortWdmGetDeviceCapabilities(PDEVICE_OBJECT DeviceObject, _DWORD *a2)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rsi
  PIRP v5; // rax
  IRP *v6; // rdi
  _IO_STACK_LOCATION *CurrentStackLocation; // rbx
  _IO_STACK_LOCATION *v8; // rbx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  memset(a2, 0, 0x40uLL);
  *a2 = 65600;
  a2[3] = -1;
  a2[2] = -1;
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v5 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  v6 = v5;
  if ( v5 )
  {
    v5->IoStatus.Information = 0LL;
    CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
    v5->IoStatus.Status = -1073741637;
    v8 = CurrentStackLocation - 1;
    if ( v8 )
    {
      memset(v8, 0, sizeof(_IO_STACK_LOCATION));
      *(_WORD *)&v8->MajorFunction = 2331;
      v8->Parameters.WMI.ProviderId = (unsigned __int64)a2;
      Status = IofCallDriver(AttachedDeviceReference, v6);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
    }
    else
    {
      Status = -1073741811;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
