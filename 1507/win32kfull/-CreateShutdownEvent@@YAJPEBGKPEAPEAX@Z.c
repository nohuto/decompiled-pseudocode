/*
 * XREFs of ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C014685C
 * Callers:
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C012C708 (-InitiateWin32kCleanup@@YAHXZ.c)
 *     RawInputThread @ 0x1C0143560 (RawInputThread.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DCB5C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CreateShutdownEvent(const unsigned __int16 *a1, int a2, void **a3)
{
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+30h] [rbp-258h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+60h] [rbp-228h] BYREF
  WCHAR SourceString[256]; // [rsp+70h] [rbp-218h] BYREF

  RtlStringCchPrintfW(SourceString, 256LL, L"\\Sessions\\%ld\\BaseNamedObjects\\%ws", gSessionId, a1);
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = a2 | 0x240;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  return ZwCreateEvent(a3, 0x1F0003u, &ObjectAttributes, SynchronizationEvent, 0);
}
