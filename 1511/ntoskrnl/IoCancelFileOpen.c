/*
 * XREFs of IoCancelFileOpen @ 0x1405F99D8
 * Callers:
 *     IopParseDevice @ 0x140412F10 (IopParseDevice.c)
 * Callees:
 *     IopAllocateIrpMustSucceed @ 0x140043AC0 (IopAllocateIrpMustSucceed.c)
 *     IopQueueThreadIrp @ 0x140043B00 (IopQueueThreadIrp.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     IopDequeueIrpFromThread @ 0x14007E560 (IopDequeueIrpFromThread.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     IoFreeIrp @ 0x140087080 (IoFreeIrp.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     IopResetEvent @ 0x14008E840 (IopResetEvent.c)
 *     PoCallDriver @ 0x1401262C4 (PoCallDriver.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 */

void __stdcall IoCancelFileOpen(PDEVICE_OBJECT DeviceObject, PFILE_OBJECT FileObject)
{
  __int64 v4; // rdx
  __int64 v5; // r8
  __int64 v6; // rdx
  IRP *MustSucceed; // rdi
  struct _KTHREAD *CurrentThread; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // r8
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (FileObject->Flags & 0x40000) != 0 )
    KeBugCheckEx(0xE8u, (ULONG_PTR)FileObject, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  IopResetEvent((__int64)FileObject, v4, v5);
  LOBYTE(v6) = DeviceObject->StackSize;
  MustSucceed = (IRP *)IopAllocateIrpMustSucceed((__int64)DeviceObject, v6);
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
  IopQueueThreadIrp((__int64)MustSucceed, v10, v11);
  if ( PoCallDriver(DeviceObject, MustSucceed) == 259 )
    KeWaitForSingleObject(&Event, UserRequest, 0, 0, 0LL);
  IopDequeueIrpFromThread(MustSucceed, v12, v13);
  IoFreeIrp(MustSucceed);
  KeResetEvent(&FileObject->Event);
  FileObject->Flags |= 0x200000u;
}
