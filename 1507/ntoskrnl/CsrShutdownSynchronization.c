/*
 * XREFs of CsrShutdownSynchronization @ 0x1406C094C
 * Callers:
 *     PsTerminateAllProcessesInSilo @ 0x1406C1334 (PsTerminateAllProcessesInSilo.c)
 *     PspTerminateServerSiloDeferred @ 0x1406C2DDC (PspTerminateServerSiloDeferred.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140047FE0 (RtlInitUnicodeString.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     swprintf_s @ 0x140176650 (swprintf_s.c)
 *     ZwWaitForSingleObject @ 0x14017F070 (ZwWaitForSingleObject.c)
 *     ZwSetEvent @ 0x14017F1B0 (ZwSetEvent.c)
 *     ZwClose @ 0x14017F1D0 (ZwClose.c)
 *     ZwOpenEvent @ 0x14017F7F0 (ZwOpenEvent.c)
 *     ZwCreateEvent @ 0x14017F8F0 (ZwCreateEvent.c)
 *     PsInvokeWin32Callout @ 0x140422750 (PsInvokeWin32Callout.c)
 *     PsDetachSiloFromCurrentThread @ 0x14052EA14 (PsDetachSiloFromCurrentThread.c)
 *     PsAttachSiloToCurrentThread @ 0x14052EA20 (PsAttachSiloToCurrentThread.c)
 */

__int64 __fastcall CsrShutdownSynchronization(__int64 a1, __int64 a2, _KPROCESS *a3, __int64 a4)
{
  unsigned int v5; // ebx
  __int64 v6; // rdi
  NTSTATUS v7; // ebx
  HANDLE v8; // rcx
  HANDLE EventHandle; // [rsp+30h] [rbp-D0h] BYREF
  LARGE_INTEGER Timeout; // [rsp+38h] [rbp-C8h] BYREF
  HANDLE Handle; // [rsp+40h] [rbp-C0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp-A8h] BYREF
  _BYTE v15[56]; // [rsp+88h] [rbp-78h] BYREF
  wchar_t Dst[104]; // [rsp+C0h] [rbp-40h] BYREF

  Handle = 0LL;
  EventHandle = 0LL;
  v5 = a2;
  Timeout.LowPart = a2;
  v6 = PsAttachSiloToCurrentThread(a1, a2, (__int64)a3, a4);
  swprintf_s(Dst, 0x64uLL, L"\\Sessions\\%ld\\BaseNamedObjects\\EventRitExited", v5);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 192;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  ZwCreateEvent(&EventHandle, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
  swprintf_s(Dst, 0x64uLL, L"\\Sessions\\%ld\\BaseNamedObjects\\EventShutDownCSRSS", v5);
  RtlInitUnicodeString(&DestinationString, Dst);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v7 = ZwOpenEvent(&Handle, 0x1F0003u, &ObjectAttributes);
  PsDetachSiloFromCurrentThread(v6);
  if ( v7 >= 0 )
  {
    if ( a3 )
    {
      KiStackAttachProcess(a3, 0, (__int64)v15);
      PsInvokeWin32Callout((_KPROCESS *)0x1F, 0LL, 1, (int)&Timeout);
      KiUnstackDetachProcess((struct _KTHREAD *)v15, 0);
    }
    v7 = ZwSetEvent(Handle, 0LL);
    if ( v7 >= 0 )
    {
      v8 = EventHandle;
      if ( !EventHandle )
        goto LABEL_10;
      Timeout.QuadPart = -600000000LL;
      if ( ZwWaitForSingleObject(EventHandle, 1u, &Timeout) == 258 && a3 )
        v7 = -2147483612;
    }
  }
  v8 = EventHandle;
LABEL_10:
  if ( Handle )
  {
    ZwClose(Handle);
    v8 = EventHandle;
  }
  if ( v8 )
    ZwClose(v8);
  return (unsigned int)v7;
}
