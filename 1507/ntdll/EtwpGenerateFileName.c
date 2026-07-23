/*
 * XREFs of EtwpGenerateFileName @ 0x1800F4D30
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 * Callees:
 *     StringCbPrintfW @ 0x18000392C (StringCbPrintfW.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     RtlCreateUnicodeString @ 0x180020DE0 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180027410 (RtlFreeAnsiString.c)
 *     __security_check_cookie @ 0x180084090 (__security_check_cookie.c)
 *     memcmp @ 0x180087B20 (memcmp.c)
 *     wcschr @ 0x180089A40 (wcschr.c)
 *     wcsrchr @ 0x180089C80 (wcsrchr.c)
 *     wcsstr @ 0x180089D10 (wcsstr.c)
 */

ULONG __fastcall EtwpGenerateFileName(const wchar_t **a1, volatile signed __int32 *a2, _UNICODE_STRING *a3)
{
  wchar_t *v6; // rsi
  NTSTATUS v8; // ecx
  wchar_t pszDest[1024]; // [rsp+20h] [rbp-828h] BYREF

  v6 = wcschr(a1[1], 0x25u);
  if ( v6 && v6 == wcsrchr(a1[1], 0x25u) && wcsstr(a1[1], L"%d") )
  {
    if ( !StringCbPrintfW(pszDest, 0x800uLL, a1[1], (unsigned int)_InterlockedIncrement(a2))
      && memcmp(a1[1], pszDest, *(unsigned __int16 *)a1) )
    {
      RtlFreeAnsiString(a3);
      RtlCreateUnicodeString(a3, pszDest);
      return 0;
    }
    v8 = -1073741776;
  }
  else
  {
    v8 = -1073741773;
  }
  return RtlNtStatusToDosError(v8);
}
