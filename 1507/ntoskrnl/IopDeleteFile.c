/*
 * XREFs of IopDeleteFile @ 0x1404886E0
 * Callers:
 *     <none>
 * Callees:
 *     IopDecrementDeviceObjectRefCount @ 0x1400077EC (IopDecrementDeviceObjectRefCount.c)
 *     IopDeleteFileObjectExtension @ 0x140033110 (IopDeleteFileObjectExtension.c)
 *     IopDecrementVpbRefCount @ 0x1400457D0 (IopDecrementVpbRefCount.c)
 *     IopIncrementDeviceObjectRefCount @ 0x1400458A0 (IopIncrementDeviceObjectRefCount.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140045A10 (IopDecrementDeviceObjectRef.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IopAllocateIrpMustSucceed @ 0x1400480B0 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     IopDequeueIrpFromThread @ 0x1400485C0 (IopDequeueIrpFromThread.c)
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     IoGetAttachedDevice @ 0x1400D1B70 (IoGetAttachedDevice.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     IopCloseFile @ 0x14048F8A0 (IopCloseFile.c)
 *     FsRtlPTeardownPerFileObjectContexts @ 0x1404A586C (FsRtlPTeardownPerFileObjectContexts.c)
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
      IopCloseFile(0LL, BugCheckParameter1, 1LL);
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
      IopDecrementDeviceObjectRef(
        *(_QWORD *)(BugCheckParameter1 + 8),
        0,
        (unsigned __int8)~*(_BYTE *)(BugCheckParameter1 - 21) >> 7);
    if ( v2 && v8 )
      IopDecrementDeviceObjectRef(v2, 0, (unsigned __int8)~*(_BYTE *)(BugCheckParameter1 - 21) >> 7);
  }
  if ( *(_QWORD *)(BugCheckParameter1 + 208) )
    IopDeleteFileObjectExtension(BugCheckParameter1);
}
