/*
 * XREFs of FsRtlSetFileSize @ 0x1404A2234
 * Callers:
 *     MmExtendSection @ 0x1403C7408 (MmExtendSection.c)
 *     MiCreateDataFileMap @ 0x1403C86B8 (MiCreateDataFileMap.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoSetThreadHardErrorMode @ 0x140092448 (IoSetThreadHardErrorMode.c)
 *     IoAllocateIrpEx @ 0x1400DF48C (IoAllocateIrpEx.c)
 */

__int64 __fastcall FsRtlSetFileSize(PFILE_OBJECT FileObject, __int64 *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  __int64 v4; // rdx
  IRP *Irp; // rbx
  BOOLEAN v6; // al
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rdx
  BOOLEAN v8; // si
  NTSTATUS v9; // ebx
  NTSTATUS v10; // ecx
  _DWORD v12[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v13; // [rsp+38h] [rbp-28h]
  struct _KEVENT Event; // [rsp+40h] [rbp-20h] BYREF
  __int64 v15; // [rsp+88h] [rbp+28h] BYREF

  v12[0] = 0;
  v12[1] = 0;
  v13 = 0LL;
  v15 = *a2;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  LOBYTE(v4) = RelatedDeviceObject->StackSize;
  Irp = (IRP *)IoAllocateIrpEx((__int64)RelatedDeviceObject, v4, 0LL);
  if ( !Irp )
    return 3221225626LL;
  v6 = IoSetThreadHardErrorMode(0);
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  v8 = v6;
  Irp->Flags = 66;
  Irp->UserIosb = (PIO_STATUS_BLOCK)v12;
  Irp->UserEvent = &Event;
  Irp->RequestorMode = 0;
  Irp->Tail.Overlay.OriginalFileObject = FileObject;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v15;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
  CurrentStackLocation[-1].Parameters.Read.Length = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 20;
  v9 = IofCallDriver(RelatedDeviceObject, Irp);
  if ( v9 == 259 )
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  v10 = v12[0];
  if ( v9 < 0 )
    v10 = v9;
  v12[0] = v10;
  IoSetThreadHardErrorMode(v8);
  return v12[0];
}
