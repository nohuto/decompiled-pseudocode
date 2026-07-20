/*
 * XREFs of SmpCreateTempFile @ 0x140010ADC
 * Callers:
 *     SmpGetDumpDestination @ 0x140010D1C (SmpGetDumpDestination.c)
 *     SmpShuffleMove @ 0x14001320C (SmpShuffleMove.c)
 * Callees:
 *     RtlStringCbPrintfW @ 0x140004D08 (RtlStringCbPrintfW.c)
 *     __security_check_cookie @ 0x14000C850 (__security_check_cookie.c)
 *     SmpQueryFileExists @ 0x140010F44 (SmpQueryFileExists.c)
 */

NTSTATUS __fastcall SmpCreateTempFile(__int64 a1, __int64 a2, struct _UNICODE_STRING *a3)
{
  unsigned __int64 v6; // rdi
  int v7; // ebx
  NTSTATUS result; // eax
  __int64 v9; // [rsp+28h] [rbp-260h]
  struct _UNICODE_STRING NtPathName; // [rsp+30h] [rbp-258h] BYREF
  wchar_t pszDest[264]; // [rsp+40h] [rbp-248h] BYREF

  v6 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
  v7 = 0;
  while ( 1 )
  {
    LODWORD(v9) = (unsigned __int16)(v7 + v6);
    result = RtlStringCbPrintfW(pszDest, 0x208uLL, L"%s\\%s%4.4x.tmp", *(_QWORD *)(a1 + 8), a2, v9);
    if ( result < 0 )
      break;
    if ( !RtlDosPathNameToNtPathName_U(pszDest, &NtPathName, 0LL, 0LL) )
      return -1073741823;
    if ( !(unsigned __int8)SmpQueryFileExists(&NtPathName) )
    {
      result = 0;
      *a3 = NtPathName;
      return result;
    }
    RtlFreeUnicodeString(&NtPathName);
    if ( (unsigned int)++v7 >= 0x64 )
      return -1073741823;
  }
  return result;
}
