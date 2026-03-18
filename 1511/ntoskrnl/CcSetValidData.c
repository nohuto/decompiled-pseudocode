/*
 * XREFs of CcSetValidData @ 0x14001AE4C
 * Callers:
 *     CcWriteBehindInternal @ 0x1400B0530 (CcWriteBehindInternal.c)
 * Callees:
 *     IoAllocateIrp @ 0x14001AF44 (IoAllocateIrp.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 */

__int64 __fastcall CcSetValidData(struct _FILE_OBJECT *a1, __int64 *a2)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rdi
  PIRP Irp; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  NTSTATUS v6; // ebx
  __int64 result; // rax
  _DWORD v8[2]; // [rsp+30h] [rbp-30h] BYREF
  __int64 v9; // [rsp+38h] [rbp-28h]
  __int16 Object; // [rsp+40h] [rbp-20h] BYREF
  char v11; // [rsp+42h] [rbp-1Eh]
  int v12; // [rsp+44h] [rbp-1Ch]
  _QWORD v13[3]; // [rsp+48h] [rbp-18h] BYREF
  __int64 v14; // [rsp+78h] [rbp+18h] BYREF

  v8[0] = 0;
  v12 = 0;
  v8[1] = 0;
  v9 = 0LL;
  v14 = *a2;
  v13[1] = v13;
  v13[0] = v13;
  Object = 0;
  v11 = 6;
  RelatedDeviceObject = IoGetRelatedDeviceObject(a1);
  Irp = IoAllocateIrp(RelatedDeviceObject->StackSize, 0);
  if ( !Irp )
    return 3221225626LL;
  CurrentStackLocation = Irp->Tail.Overlay.CurrentStackLocation;
  Irp->Flags = 66;
  Irp->RequestorMode = 0;
  Irp->UserIosb = (PIO_STATUS_BLOCK)v8;
  Irp->UserEvent = (PKEVENT)&Object;
  Irp->Tail.Overlay.OriginalFileObject = a1;
  Irp->Tail.Overlay.Thread = KeGetCurrentThread();
  Irp->AssociatedIrp.MasterIrp = (struct _IRP *)&v14;
  CurrentStackLocation[-1].Parameters.Read.ByteOffset.QuadPart = 0LL;
  CurrentStackLocation[-1].MajorFunction = 6;
  CurrentStackLocation[-1].FileObject = a1;
  CurrentStackLocation[-1].DeviceObject = RelatedDeviceObject;
  CurrentStackLocation[-1].Parameters.Read.Length = 8;
  CurrentStackLocation[-1].Parameters.Create.Options = 20;
  CurrentStackLocation[-1].Parameters.SetFile.AdvanceOnly = 1;
  v6 = IofCallDriver(RelatedDeviceObject, Irp);
  if ( v6 == 259 )
    KeWaitForSingleObject(&Object, Executive, 0, 0, 0LL);
  result = v8[0];
  if ( v6 < 0 )
    return (unsigned int)v6;
  return result;
}
