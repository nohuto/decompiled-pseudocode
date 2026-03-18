/*
 * XREFs of PspShutdownCsrProcess @ 0x140640950
 * Callers:
 *     PspTerminateSiloSubsystemProcesses @ 0x140640B1C (PspTerminateSiloSubsystemProcesses.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140043C70 (RtlInitUnicodeString.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     swprintf_s @ 0x1401485D0 (swprintf_s.c)
 *     ZwWaitForSingleObject @ 0x1401506A0 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x1401507E0 (ZwSetEvent.c)
 *     ZwClose @ 0x140150800 (ZwClose.c)
 *     ZwOpenEvent @ 0x140150E20 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x140150F20 (ZwCreateEvent.c)
 *     PsInvokeWin32Callout @ 0x1403F6790 (PsInvokeWin32Callout.c)
 *     PsTerminateProcess @ 0x140452368 (PsTerminateProcess.c)
 *     PsDetachSiloFromCurrentThread @ 0x14049BC98 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14049BCB0 (PsAttachSiloToCurrentThread.c)
 *     PspWaitForUsermodeExit @ 0x1406419A4 (PspWaitForUsermodeExit.c)
 */

NTSTATUS __fastcall PspShutdownCsrProcess(void *a1, unsigned int a2, _KPROCESS *a3)
{
  __int64 v5; // rdi
  NTSTATUS v6; // ebx
  NTSTATUS result; // eax
  HANDLE Handle; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v9; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE EventHandle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v13; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dst[104]; // [rsp+C0h] [rbp-40h] BYREF

  Handle = 0LL;
  EventHandle = 0LL;
  v9 = a2;
  v5 = PsAttachSiloToCurrentThread(a1);
  swprintf_s(Dst, 0x64uLL, L"\\Sessions\\%ld\\BaseNamedObjects\\EventRitExited", a2);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 704;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
  swprintf_s(Dst, 0x64uLL, L"\\Sessions\\%ld\\BaseNamedObjects\\EventShutDownCSRSS", a2);
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
    KiStackAttachProcess(a3, 0LL, (__int64)&v13);
    PsInvokeWin32Callout((_KPROCESS *)0x1F, 0LL, 1, (int)&v9);
    KiUnstackDetachProcess(&v13, 0LL);
    ZwSetEvent(Handle, 0LL);
    if ( EventHandle )
      ZwWaitForSingleObject(EventHandle, 0, 0LL);
  }
  result = PsTerminateProcess((ULONG_PTR)a3, 0xC00002EB);
  if ( result >= 0 )
    result = PspWaitForUsermodeExit(a3);
  if ( Handle )
    result = ZwClose(Handle);
  if ( EventHandle )
    return ZwClose(EventHandle);
  return result;
}
