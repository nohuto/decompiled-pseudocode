/*
 * XREFs of StorDeleteScsiSymbolicLink @ 0x1C00349B8
 * Callers:
 *     RaidAdapterDisableDeviceInterface @ 0x1C0026EA0 (RaidAdapterDisableDeviceInterface.c)
 * Callees:
 *     RtlStringCchPrintfW @ 0x1C0010B2C (RtlStringCchPrintfW.c)
 *     __security_check_cookie @ 0x1C001A7E0 (__security_check_cookie.c)
 */

__int64 __fastcall StorDeleteScsiSymbolicLink(unsigned int a1)
{
  struct _UNICODE_STRING DestinationString; // [rsp+20h] [rbp-A8h] BYREF
  wchar_t pszDest[64]; // [rsp+30h] [rbp-98h] BYREF

  RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\Device\\ScsiPort%d", a1);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoDeleteSymbolicLink(&DestinationString);
  RtlStringCchPrintfW(pszDest, 0x40uLL, L"\\DosDevices\\Scsi%d:", a1);
  RtlInitUnicodeString(&DestinationString, pszDest);
  IoDeleteSymbolicLink(&DestinationString);
  return 0LL;
}
