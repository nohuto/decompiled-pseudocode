/*
 * XREFs of ?CreateShutdownEvent@@YAJPEBGKPEAPEAX@Z @ 0x1C00ED000
 * Callers:
 *     RawInputThread @ 0x1C007B620 (RawInputThread.c)
 *     ?InitiateWin32kCleanup@@YAHXZ @ 0x1C00EC928 (-InitiateWin32kCleanup@@YAHXZ.c)
 * Callees:
 *     ?RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ @ 0x1C00DAA3C (-RtlStringCchPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

NTSTATUS __fastcall CreateShutdownEvent(const unsigned __int16 *a1, int a2, void **a3)
{
  struct _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-258h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-248h] BYREF
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
