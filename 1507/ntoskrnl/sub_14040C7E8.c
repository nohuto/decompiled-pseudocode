/*
 * XREFs of sub_14040C7E8 @ 0x14040C7E8
 * Callers:
 *     sub_14040A6E0 @ 0x14040A6E0 (sub_14040A6E0.c)
 *     sub_14040ABD4 @ 0x14040ABD4 (sub_14040ABD4.c)
 *     sub_14040C414 @ 0x14040C414 (sub_14040C414.c)
 *     sub_1404A8518 @ 0x1404A8518 (sub_1404A8518.c)
 *     sub_1406FC0FC @ 0x1406FC0FC (sub_1406FC0FC.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     ObfDereferenceObject @ 0x14004ED50 (ObfDereferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     sub_14040AA68 @ 0x14040AA68 (sub_14040AA68.c)
 *     IoGetDeviceObjectPointer @ 0x14040D788 (IoGetDeviceObjectPointer.c)
 */

__int64 __fastcall sub_14040C7E8(
        UNICODE_STRING *a1,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength,
        ULONG_PTR *a7,
        PDEVICE_OBJECT *a8)
{
  NTSTATUS DeviceObjectPointer; // eax
  struct _FILE_OBJECT *v12; // rdi
  NTSTATUS Status; // ebx
  void *v14; // r8
  struct _DEVICE_OBJECT *v15; // rbp
  PIRP v16; // rax
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+58h] [rbp-40h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp-38h] BYREF
  struct _KEVENT Event; // [rsp+70h] [rbp-28h] BYREF

  Object = 0LL;
  DeviceObjectPointer = IoGetDeviceObjectPointer(a1, 0x80u, (PFILE_OBJECT *)&Object, &DeviceObject);
  v12 = (struct _FILE_OBJECT *)Object;
  Status = DeviceObjectPointer;
  if ( DeviceObjectPointer >= 0 )
  {
    KeInitializeEvent(&Event, NotificationEvent, 0);
    v14 = a3;
    v15 = DeviceObject;
    v16 = IoBuildDeviceIoControlRequest(
            a2,
            DeviceObject,
            v14,
            a4,
            OutputBuffer,
            OutputBufferLength,
            0,
            &Event,
            &IoStatusBlock);
    if ( v16 )
    {
      v16->Tail.Overlay.CurrentStackLocation[-1].FileObject = v12;
      v16->IoStatus.Status = -1073741637;
      Status = IofCallDriver(v15, v16);
      if ( Status == 259 )
      {
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
      {
        if ( a7 )
          *a7 = IoStatusBlock.Information;
        if ( a8 )
          *a8 = sub_14040AA68(v15);
      }
    }
    else
    {
      Status = -1073741670;
    }
  }
  if ( v12 )
    ObfDereferenceObject(v12);
  return (unsigned int)Status;
}
