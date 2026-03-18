/*
 * XREFs of IopLoadFileSystemDriver @ 0x140672054
 * Callers:
 *     IopMountVolume @ 0x14040ADB8 (IopMountVolume.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IopDecrementDeviceObjectRef @ 0x140045A10 (IopDecrementDeviceObjectRef.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

__int64 __fastcall IopLoadFileSystemDriver(struct _DEVICE_OBJECT *BugCheckParameter2)
{
  struct _DEVICE_OBJECT *AttachedDevice; // rax
  struct _DEVICE_OBJECT *v3; // rbx
  PIRP v4; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+60h] [rbp-28h] BYREF

  AttachedDevice = BugCheckParameter2->AttachedDevice;
  v3 = BugCheckParameter2;
  while ( AttachedDevice )
  {
    v3 = AttachedDevice;
    AttachedDevice = AttachedDevice->AttachedDevice;
  }
  KeInitializeEvent(&Event, NotificationEvent, 0);
  v4 = IoBuildDeviceIoControlRequest(0xEu, v3, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  if ( v4 )
  {
    *(_WORD *)&v4->Tail.Overlay.CurrentStackLocation[-1].MajorFunction = 781;
    if ( IofCallDriver(v3, v4) == 259 )
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
  }
  return IopDecrementDeviceObjectRef((ULONG_PTR)BugCheckParameter2, 1, 1u);
}
