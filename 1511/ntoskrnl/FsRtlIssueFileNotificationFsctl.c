/*
 * XREFs of FsRtlIssueFileNotificationFsctl @ 0x14050C180
 * Callers:
 *     PopResizeHiberFile @ 0x1404F5DF0 (PopResizeHiberFile.c)
 *     MiCreatePagingFile @ 0x140537A84 (MiCreatePagingFile.c)
 *     IopInitializeCrashDump @ 0x140538978 (IopInitializeCrashDump.c)
 *     PopCreateHiberFile @ 0x14054BA2C (PopCreateHiberFile.c)
 * Callees:
 *     IoGetRelatedDeviceObject @ 0x1400435F0 (IoGetRelatedDeviceObject.c)
 *     IoBuildDeviceIoControlRequest @ 0x140073DD0 (IoBuildDeviceIoControlRequest.c)
 *     IofCallDriver @ 0x14007E4C0 (IofCallDriver.c)
 *     KeInitializeEvent @ 0x14007E540 (KeInitializeEvent.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
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
