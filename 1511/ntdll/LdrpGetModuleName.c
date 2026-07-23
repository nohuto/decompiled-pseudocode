/*
 * XREFs of LdrpGetModuleName @ 0x18006C5B0
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006CB50 (LdrQueryModuleInfoFromLdrEntry.c)
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x180087800 (LdrQueryModuleInfoFromLdrEntry32.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x180018200 (RtlUnicodeStringToAnsiString.c)
 *     LdrpReadMemory @ 0x18006CAB4 (LdrpReadMemory.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x1800970B0 (_wcsnicmp.c)
 */

NTSTATUS __fastcall LdrpGetModuleName(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // di
  NTSTATUS result; // eax
  char *v8; // rax
  size_t v9; // rbx
  _STRING DestinationString; // [rsp+20h] [rbp-E0h] BYREF
  UNICODE_STRING SourceString; // [rsp+30h] [rbp-D0h] BYREF
  wchar_t String1[264]; // [rsp+40h] [rbp-C0h] BYREF

  v4 = *(_WORD *)a2;
  if ( *(_WORD *)a2 >= 0x200u )
    v4 = 512;
  result = LdrpReadMemory(a1, *(_QWORD *)(a2 + 8), String1, v4);
  if ( result < 0 )
    return result;
  String1[256] = 0;
  if ( a4 )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( *(_WORD *)(2 * v9 + 0x7FFE0030) );
    if ( v9 )
    {
      if ( *(_WORD *)(2 * v9 + 0x7FFE002E) == 92 )
        --v9;
      if ( wcsnicmp(String1, (const wchar_t *)0x7FFE0030, v9) || wcsnicmp(&String1[v9], L"\\system32", 9uLL) )
        goto LABEL_5;
      if ( v9 + 16 < 0x101 )
      {
        *(_OWORD *)&String1[v9 + 1] = *(_OWORD *)L"SysWOW64";
        goto LABEL_5;
      }
    }
    return -1073741595;
  }
LABEL_5:
  SourceString.MaximumLength = v4;
  SourceString.Buffer = String1;
  SourceString.Length = v4;
  DestinationString.Buffer = (char *)(a3 + 40);
  *(_DWORD *)&DestinationString.Length = 0x1000000;
  result = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
  if ( result >= 0 )
  {
    v8 = &DestinationString.Buffer[DestinationString.Length];
    while ( v8 > DestinationString.Buffer )
    {
      if ( *--v8 == 92 )
      {
        LOWORD(v8) = (_WORD)v8 + 1;
        break;
      }
    }
    *(_WORD *)(a3 + 38) = (_WORD)v8 - LOWORD(DestinationString.Buffer);
    return 0;
  }
  return result;
}
