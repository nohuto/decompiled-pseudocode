/*
 * XREFs of IopDeleteFile @ 0x14042EA40
 * Callers:
 *     <none>
 * Callees:
 *     ObfDereferenceObject @ 0x140042920 (ObfDereferenceObject.c)
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpMustSucceed @ 0x140043AC0 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     IopDecrementDeviceObjectRef @ 0x14007E3E0 (IopDecrementDeviceObjectRef.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopDequeueIrpFromThread @ 0x14007E560 (IopDequeueIrpFromThread.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14007E610 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x14007E6B0 (IopDecrementVpbRefCount.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopDeleteFileObjectExtension @ 0x140091B50 (IopDeleteFileObjectExtension.c)
 *     IoGetAttachedDevice @ 0x140097FE0 (IoGetAttachedDevice.c)
 *     IopDecrementDeviceObjectRefCount @ 0x1400F3468 (IopDecrementDeviceObjectRefCount.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 *     IopCloseFile @ 0x14042ECB0 (IopCloseFile.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x14049D18C (FsRtlPTeardownPerFileObjectContexts.c)
 */

void __fastcall IopDeleteFile(PFILE_OBJECT FileObject)
{
  struct _DEVICE_OBJECT *DeviceObject; // rcx
  ULONG_PTR v3; // rdi
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v5; // r15
  unsigned __int8 v6; // bp
  IRP *MustSucceed; // rsi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v9; // rdx
  __int64 v10; // r8
  PVPB Vpb; // r14
  PDEVICE_OBJECT v12; // rcx
  char v13; // r12
  __int64 v14; // rdx
  __int64 v15; // r8
  PIO_COMPLETION_CONTEXT CompletionContext; // rcx
  char v17; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  DeviceObject = FileObject->DeviceObject;
  v3 = 0LL;
  if ( DeviceObject )
  {
    if ( (FileObject->Flags & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(DeviceObject);
    else
      AttachedDevice = IoGetRelatedDeviceObject(FileObject);
    v5 = AttachedDevice;
    v6 = 1;
    if ( (FileObject->Flags & 0x240000) == 0 )
      IopCloseFile(0LL, FileObject, 1LL, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (FileObject->Flags & 0x4000000) == 0 )
      KeResetEvent(&FileObject->Event);
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v5, (unsigned __int8)v5->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = FileObject;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v17;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed, v9, v10);
    Vpb = FileObject->Vpb;
    if ( Vpb )
    {
      if ( (FileObject->Flags & 0x800) == 0 )
      {
        IopDecrementVpbRefCount((__int64)FileObject->Vpb, 1);
        v3 = (ULONG_PTR)Vpb->DeviceObject;
        if ( v3 )
          IopIncrementDeviceObjectRefCount((ULONG_PTR)Vpb->DeviceObject, 1);
      }
    }
    v12 = FileObject->DeviceObject;
    if ( (v12->Flags & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount((ULONG_PTR)v12, 1);
      v13 = 1;
    }
    else
    {
      v13 = 0;
    }
    if ( IofCallDriver(v5, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed, v14, v15);
    IoFreeIrp(MustSucceed);
    if ( FileObject->FileName.Length )
      ExFreePoolWithTag(FileObject->FileName.Buffer, 0);
    CompletionContext = FileObject->CompletionContext;
    if ( CompletionContext )
    {
      ObfDereferenceObject(CompletionContext->Port);
      ExFreePoolWithTag(FileObject->CompletionContext, 0);
    }
    if ( FileObject->FileObjectExtension )
      FsRtlPTeardownPerFileObjectContexts(FileObject);
    if ( !v13 )
      IopDecrementDeviceObjectRef((ULONG_PTR)FileObject->DeviceObject, 0, SBYTE3(FileObject[-1].IrpList.Flink) >= 0);
    if ( v3 && Vpb )
    {
      if ( SBYTE3(FileObject[-1].IrpList.Flink) < 0 )
        v6 = 0;
      IopDecrementDeviceObjectRef(v3, 0, v6);
    }
  }
  if ( FileObject->FileObjectExtension )
    IopDeleteFileObjectExtension((__int64)FileObject);
}
