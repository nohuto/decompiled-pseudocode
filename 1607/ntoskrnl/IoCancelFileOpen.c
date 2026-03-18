/*
 * XREFs of IoCancelFileOpen @ 0x14062333C
 * Callers:
 *     IopParseDevice @ 0x1404408F0 (IopParseDevice.c)
 * Callees:
 *     IopDequeueIrpFromThread @ 0x14002DDE0 (IopDequeueIrpFromThread.c)
 *     KeInitializeEvent @ 0x14002DEA0 (KeInitializeEvent.c)
 *     IopQueueThreadIrp @ 0x14002E170 (IopQueueThreadIrp.c)
 *     IopAllocateIrpMustSucceed @ 0x14002E210 (IopAllocateIrpMustSucceed.c)
 *     IopResetEvent @ 0x14002E5C0 (IopResetEvent.c)
 *     KeResetEvent @ 0x14002E630 (KeResetEvent.c)
 *     IoFreeIrp @ 0x140055DD0 (IoFreeIrp.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     IopCloseFileObjectExtension @ 0x1400A49D4 (IopCloseFileObjectExtension.c)
 *     PoCallDriver @ 0x14013063C (PoCallDriver.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __stdcall IoCancelFileOpen(PDEVICE_OBJECT DeviceObject, PFILE_OBJECT FileObject)
{
  __int64 v4; // rdx
  IRP *MustSucceed; // rsi
  struct _KTHREAD *CurrentThread; // rcx
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rcx
  struct _KEVENT Event; // [rsp+30h] [rbp-28h] BYREF

  if ( (FileObject->Flags & 0x40000) != 0 )
    KeBugCheckEx(0xE8u, (ULONG_PTR)FileObject, (ULONG_PTR)DeviceObject, 0LL, 0LL);
  KeInitializeEvent(&Event, SynchronizationEvent, 0);
  IopResetEvent((__int64)FileObject);
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
  if ( FileObject->FileObjectExtension )
    IopCloseFileObjectExtension((__int64)FileObject);
}
