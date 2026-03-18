/*
 * XREFs of IopGetVolumeId @ 0x140671774
 * Callers:
 *     IopTrackLink @ 0x14040C918 (IopTrackLink.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     ObfReferenceObject @ 0x14004E630 (ObfReferenceObject.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall IopGetVolumeId(struct _FILE_OBJECT *Object, __int64 a2)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rbp
  PIRP v5; // rax
  IRP *v6; // rbx
  NTSTATUS result; // eax
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  __int128 v9; // xmm0
  struct _KEVENT Event; // [rsp+50h] [rbp-98h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-80h] BYREF
  _OWORD v12[4]; // [rsp+80h] [rbp-68h] BYREF

  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(Object);
  v5 = IoBuildDeviceIoControlRequest(0, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v6 = v5;
  if ( !v5 )
    return -1073741670;
  v5->Flags |= 4u;
  v5->Tail.Overlay.OriginalFileObject = Object;
  v5->UserBuffer = v12;
  v5->AssociatedIrp.MasterIrp = (struct _IRP *)v12;
  CurrentStackLocation = v5->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = Object;
  CurrentStackLocation[-1].MajorFunction = 10;
  CurrentStackLocation[-1].Parameters.Read.Length = 64;
  CurrentStackLocation[-1].Parameters.Create.Options = 8;
  ObfReferenceObject(Object);
  result = IofCallDriver(RelatedDeviceObject, v6);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    result = IoStatusBlock.Status;
  }
  if ( result >= 0 )
  {
    v9 = v12[0];
    *(_DWORD *)a2 = 0;
    *(_OWORD *)(a2 + 4) = v9;
  }
  return result;
}
