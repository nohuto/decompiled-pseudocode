/*
 * XREFs of IopGetFileInformation @ 0x140428218
 * Callers:
 *     IopQueryNameInternal @ 0x140426C40 (IopQueryNameInternal.c)
 *     IopGetBasicInformationFile @ 0x1404A7FB8 (IopGetBasicInformationFile.c)
 *     IopGraftName @ 0x140548FF4 (IopGraftName.c)
 *     IopGetRelatedFileName @ 0x140671564 (IopGetRelatedFileName.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

__int64 __fastcall IopGetFileInformation(struct _FILE_OBJECT *Object, ULONG a2, ULONG a3, struct _IRP *a4, _DWORD *a5)
{
  PDEVICE_OBJECT RelatedDeviceObject; // rsi
  __int64 v10; // rdx
  __int64 Irp; // rax
  IRP *v12; // rbx
  __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  unsigned int v16; // edx
  _DWORD v18[2]; // [rsp+30h] [rbp-48h] BYREF
  __int64 v19; // [rsp+38h] [rbp-40h]
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF
  void *retaddr; // [rsp+78h] [rbp+0h]

  v18[0] = 0;
  v18[1] = 0;
  v19 = 0LL;
  ObfReferenceObject(Object);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  LOBYTE(v10) = RelatedDeviceObject->StackSize;
  Irp = pIoAllocateIrp(RelatedDeviceObject, v10, 0LL, retaddr);
  v12 = (IRP *)Irp;
  if ( Irp )
  {
    *(_QWORD *)(Irp + 192) = Object;
    v13 = Irp;
    CurrentThread = KeGetCurrentThread();
    v12->Overlay.AllocationSize.QuadPart = 0LL;
    v12->Tail.Overlay.Thread = CurrentThread;
    v12->UserEvent = &Event;
    v12->UserIosb = (PIO_STATUS_BLOCK)v18;
    CurrentStackLocation = v12->Tail.Overlay.CurrentStackLocation;
    v12->Flags = 4100;
    v12->RequestorMode = 0;
    CurrentStackLocation[-1].MajorFunction = 5;
    CurrentStackLocation[-1].FileObject = Object;
    v12->Flags |= 0x10u;
    v12->AssociatedIrp.MasterIrp = a4;
    CurrentStackLocation[-1].Parameters.Read.Length = a2;
    CurrentStackLocation[-1].Parameters.Create.Options = a3;
    IopQueueThreadIrp(v13);
    v16 = IofCallDriver(RelatedDeviceObject, v12);
    if ( v16 == 259 )
    {
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      v16 = v18[0];
    }
    *a5 = v19;
    return v16;
  }
  else
  {
    ObfDereferenceObject(Object);
    return 3221225626LL;
  }
}
