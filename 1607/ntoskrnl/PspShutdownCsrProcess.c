/*
 * XREFs of PspShutdownCsrProcess @ 0x14067EB60
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x14067EFD8 (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     PsDetachSiloFromCurrentThread @ 0x1400098A0 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x1400098C0 (PsAttachSiloToCurrentThread.c)
 *     RtlInitUnicodeString @ 0x14002D7E0 (RtlInitUnicodeString.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140151F20 (swprintf_s.c)
 *     ZwWaitForSingleObject @ 0x14015A270 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x14015A3B0 (ZwSetEvent.c)
 *     ZwClose @ 0x14015A3D0 (ZwClose.c)
 *     ZwOpenEvent @ 0x14015A9F0 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x14015AAF0 (ZwCreateEvent.c)
 *     PsInvokeWin32Callout @ 0x140427EE0 (PsInvokeWin32Callout.c)
 *     PsTerminateProcess @ 0x1404CE4F8 (PsTerminateProcess.c)
 *     PspWaitForUsermodeExit @ 0x14067FEE0 (PspWaitForUsermodeExit.c)
 */

NTSTATUS __fastcall PspShutdownCsrProcess(__int64 a1, unsigned int a2, _KPROCESS *a3)
{
  __int64 v5; // rdi
  NTSTATUS v6; // ebx
  NTSTATUS result; // eax
  unsigned int v8; // [rsp+30h] [rbp-D0h] BYREF
  HANDLE Handle; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v13[56]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dst[104]; // [rsp+C0h] [rbp-40h] BYREF

  Handle = 0LL;
  EventHandle = 0LL;
  v8 = a2;
  v5 = PsAttachSiloToCurrentThread(a1);
  swprintf_s(Dst, 0x64uLL, L"\\BaseNamedObjects\\EventRitExited", a2);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
  swprintf_s(Dst, 0x64uLL, L"\\BaseNamedObjects\\EventShutDownCSRSS", a2);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v6 = ZwOpenEvent(&Handle, 0x1F0003u, &ObjectAttributes);
  PsDetachSiloFromCurrentThread(v5);
  if ( v6 >= 0 )
  {
    KiStackAttachProcess(a3, 0, (__int64)v13);
    PsInvokeWin32Callout(31, 0LL, 1, (__int64)&v8);
    KiUnstackDetachProcess((struct _KTHREAD *)v13, 0);
    ZwSetEvent(Handle, 0LL);
    if ( EventHandle )
      ZwWaitForSingleObject(EventHandle, 0, 0LL);
  }
  result = PsTerminateProcess((ULONG_PTR)a3);
  if ( result >= 0 )
    result = PspWaitForUsermodeExit(a3);
  if ( Handle )
    result = ZwClose(Handle);
  if ( EventHandle )
    return ZwClose(EventHandle);
  return result;
}
