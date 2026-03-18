/*
 * XREFs of PnpQueryInterface @ 0x1404F0558
 * Callers:
 *     PnprQueryReplaceFeatures @ 0x1401C0FD4 (PnprQueryReplaceFeatures.c)
 *     PnpGetDeviceLocationStrings @ 0x1404EFF38 (PnpGetDeviceLocationStrings.c)
 *     IoQueryInterface @ 0x140541930 (IoQueryInterface.c)
 *     IopQueryInterfaceRecurseUp @ 0x140541978 (IopQueryInterfaceRecurseUp.c)
 *     IoGetDmaAdapter @ 0x14054204C (IoGetDmaAdapter.c)
 *     PnprIdentifyUnits @ 0x1406102CC (PnprIdentifyUnits.c)
 * Callees:
 *     IoGetAttachedDeviceReference @ 0x14001B010 (IoGetAttachedDeviceReference.c)
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     memset @ 0x140166CC0 (memset.c)
 *     IoBuildSynchronousFsdRequest @ 0x1404A9D3C (IoBuildSynchronousFsdRequest.c)
 */

__int64 __fastcall PnpQueryInterface(
        PDEVICE_OBJECT DeviceObject,
        ULONG_PTR a2,
        USHORT a3,
        USHORT a4,
        struct _NAMED_PIPE_CREATE_PARAMETERS *a5,
        USHORT *a6)
{
  struct _DEVICE_OBJECT *AttachedDeviceReference; // rdi
  PIRP v11; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  unsigned int Status; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+50h] [rbp-28h] BYREF

  if ( a4 < 0x20u )
    return 3221225485LL;
  memset(a6, 0, a4);
  *a6 = a4;
  a6[1] = a3;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  AttachedDeviceReference = IoGetAttachedDeviceReference(DeviceObject);
  v11 = IoBuildSynchronousFsdRequest(0x1Bu, AttachedDeviceReference, 0LL, 0, 0LL, &Event, &IoStatusBlock);
  if ( v11 )
  {
    CurrentStackLocation = v11->Tail.Overlay.CurrentStackLocation;
    v11->RequestorMode = 0;
    v11->IoStatus.Status = -1073741637;
    CurrentStackLocation[-1].Parameters.CreatePipe.Parameters = a5;
    CurrentStackLocation[-1].MinorFunction = 8;
    CurrentStackLocation[-1].Parameters.WMI.ProviderId = a2;
    CurrentStackLocation[-1].Parameters.QueryInterface.Size = a4;
    CurrentStackLocation[-1].Parameters.QueryInterface.Version = a3;
    CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = (LONGLONG)a6;
    Status = IofCallDriver(AttachedDeviceReference, v11);
    if ( Status == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      Status = IoStatusBlock.Status;
    }
  }
  else
  {
    Status = -1073741670;
  }
  ObfDereferenceObject(AttachedDeviceReference);
  return Status;
}
