/*
 * XREFs of IopDeleteFile @ 0x1404463A0
 * Callers:
 *     <none>
 * Callees:
 *     IopDequeueIrpFromThread @ 0x14002DDE0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     IoGetAttachedDevice @ 0x14002DEC0 (IoGetAttachedDevice.c)
 *     IofCallDriver @ 0x14002E060 (IofCallDriver.c)
 *     IoGetRelatedDeviceObject @ 0x14002E0E0 (IoGetRelatedDeviceObject.c)
 *     IopQueueThreadIrp @ 0x14002E170 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x14002E210 (IopAllocateIrpMustSucceed.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x14002ECF0 (IopDecrementDeviceObjectRef.c)
 *     IopIncrementDeviceObjectRefCount @ 0x14002EDD0 (IopIncrementDeviceObjectRefCount.c)
 *     IopDecrementVpbRefCount @ 0x14002EE70 (IopDecrementVpbRefCount.c)
 *     IoFreeIrp @ 0x140055DD0 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     ObfDereferenceObject @ 0x14006AC00 (ObfDereferenceObject.c)
 *     IopDecrementDeviceObjectRefCount @ 0x14007F460 (IopDecrementDeviceObjectRefCount.c)
 *     IopDeleteFileObjectExtension @ 0x1400998A0 (IopDeleteFileObjectExtension.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     IopCloseFile @ 0x140443140 (IopCloseFile.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x14046B684 (FsRtlPTeardownPerFileObjectContexts.c)
 */

void __fastcall IopDeleteFile(ULONG_PTR BugCheckParameter1)
{
  ULONG_PTR v2; // rsi
  struct _DEVICE_OBJECT *v3; // rcx
  PDEVICE_OBJECT AttachedDevice; // rax
  struct _DEVICE_OBJECT *v5; // r15
  IRP *MustSucceed; // rdi
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v8; // rbp
  ULONG_PTR v9; // rcx
  char v10; // r14
  ULONG_PTR v11; // rcx
  char v12; // [rsp+30h] [rbp-48h] BYREF
  struct _KEVENT Event; // [rsp+40h] [rbp-38h] BYREF

  v2 = 0LL;
  v3 = *(struct _DEVICE_OBJECT **)(BugCheckParameter1 + 8);
  if ( v3 )
  {
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) != 0 )
      AttachedDevice = IoGetAttachedDevice(v3);
    else
      AttachedDevice = IoGetRelatedDeviceObject((PFILE_OBJECT)BugCheckParameter1);
    v5 = AttachedDevice;
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x240000) == 0 )
      IopCloseFile(0LL, (struct _FILE_OBJECT *)BugCheckParameter1, 1LL, 1LL);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x4000000) == 0 )
      KeResetEvent((PRKEVENT)(BugCheckParameter1 + 152));
    MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)v5, (unsigned __int8)v5->StackSize);
    CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
    CurrentStackLocation[-1].MajorFunction = 2;
    CurrentStackLocation[-1].FileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->UserIosb = (PIO_STATUS_BLOCK)&v12;
    MustSucceed->UserEvent = &Event;
    MustSucceed->Tail.Overlay.OriginalFileObject = (PFILE_OBJECT)BugCheckParameter1;
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    MustSucceed->AssociatedIrp.MasterIrp = 0LL;
    MustSucceed->Flags = 1028;
    IopQueueThreadIrp((__int64)MustSucceed);
    v8 = *(_QWORD *)(BugCheckParameter1 + 16);
    if ( v8 )
    {
      if ( (*(_DWORD *)(BugCheckParameter1 + 80) & 0x800) == 0 )
      {
        IopDecrementVpbRefCount(*(_QWORD *)(BugCheckParameter1 + 16), 1);
        v2 = *(_QWORD *)(v8 + 8);
        if ( v2 )
          IopIncrementDeviceObjectRefCount(*(_QWORD *)(v8 + 8), 1);
      }
    }
    v9 = *(_QWORD *)(BugCheckParameter1 + 8);
    if ( (*(_DWORD *)(v9 + 48) & 0x400) != 0 )
    {
      IopDecrementDeviceObjectRefCount(v9, 1);
      v10 = 1;
    }
    else
    {
      v10 = 0;
    }
    if ( IofCallDriver(v5, MustSucceed) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    MustSucceed->Tail.Overlay.Thread = KeGetCurrentThread();
    IopDequeueIrpFromThread(MustSucceed);
    IoFreeIrp(MustSucceed);
    if ( *(_WORD *)(BugCheckParameter1 + 88) )
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 96), 0);
    v11 = *(_QWORD *)(BugCheckParameter1 + 176);
    if ( v11 )
    {
      if ( *(_QWORD *)(v11 + 16) )
        KeBugCheckEx(0x18u, BugCheckParameter1, v11, 0x80uLL, *(_QWORD *)(v11 + 16));
      ObfDereferenceObject(*(PVOID *)v11);
      ExFreePoolWithTag(*(PVOID *)(BugCheckParameter1 + 176), 0);
    }
    if ( *(_QWORD *)(BugCheckParameter1 + 208) )
      FsRtlPTeardownPerFileObjectContexts(BugCheckParameter1);
    if ( !v10 )
      IopDecrementDeviceObjectRef(*(_QWORD *)(BugCheckParameter1 + 8), 0);
    if ( v2 && v8 )
      IopDecrementDeviceObjectRef(v2, 0);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    IopDeleteFileObjectExtension(BugCheckParameter1);
}
