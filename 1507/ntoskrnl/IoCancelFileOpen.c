/*
 * XREFs of IoCancelFileOpen @ 0x140673C54
 * Callers:
 *     IopParseDevice @ 0x14048B640 (IopParseDevice.c)
 * Callees:
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IopAllocateIrpMustSucceed @ 0x1400480B0 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x140048420 (IopQueueThreadIrp.c)
 *     KeResetEvent @ 0x1400484D0 (KeResetEvent.c)
 *     IopDequeueIrpFromThread @ 0x1400485C0 (IopDequeueIrpFromThread.c)
 *     IoFreeIrp @ 0x14004BC70 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     PoCallDriver @ 0x140139D50 (PoCallDriver.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

void __stdcall IoCancelFileOpen(PDEVICE_OBJECT DeviceObject, PFILE_OBJECT FileObject)
{
  __int64 v4; // rdx
  IRP *MustSucceed; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (FileObject->Flags & 0x40000) != 0 )
    KeBugCheckEx(0xE8u, (ULONG_PTR)FileObject, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  if ( (FileObject->Flags & 0x4000000) == 0 )
    KeResetEvent(&FileObject->Event);
  LOBYTE(v4) = DeviceObject->StackSize;
  MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)DeviceObject, v4);
  MustSucceed->Tail.Overlay.OriginalFileObject = FileObject;
  CurrentThread = KeGetCurrentThread();
  MustSucceed->Overlay.AllocationSize.QuadPart = 0LL;
  MustSucceed->Tail.Overlay.Thread = CurrentThread;
  MustSucceed->UserIosb = &MustSucceed->IoStatus;
  CurrentStackLocation = MustSucceed->Tail.Overlay.CurrentStackLocation;
  MustSucceed->RequestorMode = 0;
  MustSucceed->UserEvent = &Event;
  MustSucceed->Flags = 1028;
  CurrentStackLocation[-1].MajorFunction = 18;
  CurrentStackLocation[-1].FileObject = FileObject;
  IopQueueThreadIrp((__int64)MustSucceed);
  if ( PoCallDriver(DeviceObject, MustSucceed) == 259 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  IopDequeueIrpFromThread(MustSucceed);
  IoFreeIrp(MustSucceed);
  KeResetEvent(&FileObject->Event);
  FileObject->Flags |= 0x200000u;
}
