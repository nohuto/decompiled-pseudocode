/*
 * XREFs of FsRtlIssueFileNotificationFsctl @ 0x140583464
 * Callers:
 *     PopResizeHiberFile @ 0x140564F6C (PopResizeHiberFile.c)
 *     MiCreatePagingFile @ 0x1405B4240 (MiCreatePagingFile.c)
 *     IopInitializeCrashDump @ 0x1405B5294 (IopInitializeCrashDump.c)
 *     PopCreateHiberFile @ 0x1405C5930 (PopCreateHiberFile.c)
 * Callees:
 *     IoBuildDeviceIoControlRequest @ 0x140006EE4 (IoBuildDeviceIoControlRequest.c)
 *     KeInitializeEvent @ 0x1400459F0 (KeInitializeEvent.c)
 *     IoGetRelatedDeviceObject @ 0x140048020 (IoGetRelatedDeviceObject.c)
 *     IofCallDriver @ 0x140048540 (IofCallDriver.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall FsRtlIssueFileNotificationFsctl(PFILE_OBJECT FileObject, __int64 a2, __int128 *a3)
{
  struct _DEVICE_OBJECT *RelatedDeviceObject; // rdi
  PIRP v6; // rax
  IRP *v7; // rdx
  __int128 v8; // xmm0
  struct _IO_STACK_LOCATION *CurrentStackLocation; // rax
  NTSTATUS result; // eax
  struct _KEVENT Event; // [rsp+50h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-40h] BYREF
  _DWORD v13[2]; // [rsp+78h] [rbp-30h] BYREF
  __int128 v14; // [rsp+80h] [rbp-28h]

  KeInitializeEvent(&Event, NotificationEvent, 0);
  RelatedDeviceObject = IoGetRelatedDeviceObject(FileObject);
  v6 = IoBuildDeviceIoControlRequest(0x90204u, RelatedDeviceObject, 0LL, 0, 0LL, 0, 0, &Event, &IoStatusBlock);
  v7 = v6;
  if ( !v6 )
    return -1073741670;
  v8 = *a3;
  v13[0] = 1;
  v13[1] = 1;
  v14 = v8;
  v6->AssociatedIrp.MasterIrp = (struct _IRP *)v13;
  CurrentStackLocation = v6->Tail.Overlay.CurrentStackLocation;
  CurrentStackLocation[-1].FileObject = FileObject;
  CurrentStackLocation[-1].MajorFunction = 13;
  CurrentStackLocation[-1].Parameters.Create.Options = 24;
  result = IofCallDriver(RelatedDeviceObject, v7);
  if ( result == 259 )
  {
    KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
    return IoStatusBlock.Status;
  }
  return result;
}
