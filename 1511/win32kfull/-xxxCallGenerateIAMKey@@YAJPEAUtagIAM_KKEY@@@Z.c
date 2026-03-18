/*
 * XREFs of ?xxxCallGenerateIAMKey@@YAJPEAUtagIAM_KKEY@@@Z @ 0x1C01D2D84
 * Callers:
 *     xxxSetShellWindow @ 0x1C00D49B4 (xxxSetShellWindow.c)
 * Callees:
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     PopAndFreeW32ThreadLock @ 0x1C0064370 (PopAndFreeW32ThreadLock.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall xxxCallGenerateIAMKey(union _LARGE_INTEGER *a1)
{
  NTSTATUS result; // eax
  IRP *v3; // rax
  NTSTATUS Status; // ebx
  __int64 v5; // rdx
  __int64 v6; // rcx
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-19h] BYREF
  PFILE_OBJECT FileObject; // [rsp+58h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+70h] [rbp+7h] BYREF
  struct _KEVENT Event; // [rsp+80h] [rbp+17h] BYREF
  _QWORD v12[3]; // [rsp+98h] [rbp+2Fh] BYREF
  union _LARGE_INTEGER Timeout; // [rsp+B0h] [rbp+47h] BYREF

  RtlInitUnicodeString(&DestinationString, L"\\Device\\KsecDD");
  result = IoGetDeviceObjectPointer(&DestinationString, 0x1F01FFu, &FileObject, &DeviceObject);
  if ( result >= 0 )
  {
    ObfReferenceObject(DeviceObject);
    ObfDereferenceObject(FileObject);
    PushW32ThreadLock((__int64)DeviceObject, v12, (__int64)UserDereferenceObject);
    KeInitializeEvent(&Event, SynchronizationEvent, 0);
    v3 = IoBuildDeviceIoControlRequest(0x390004u, DeviceObject, 0LL, 0, &Timeout, 8u, 0, &Event, &IoStatusBlock);
    if ( v3 )
    {
      Status = IofCallDriver(DeviceObject, v3);
      if ( Status == 259 )
      {
        UserSessionSwitchLeaveCrit(v6, v5);
        KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
        EnterCrit(0LL, 1LL);
        Status = IoStatusBlock.Status;
      }
      if ( Status >= 0 )
        a1[1] = Timeout;
    }
    else
    {
      Status = -1073741823;
    }
    PopAndFreeW32ThreadLock((__int64)v12);
    return Status;
  }
  return result;
}
