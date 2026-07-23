/*
 * XREFs of LdrpGetModuleName @ 0x18006D704
 * Callers:
 *     LdrQueryModuleInfoFromLdrEntry32 @ 0x18006D2E0 (LdrQueryModuleInfoFromLdrEntry32.c)
 *     LdrQueryModuleInfoFromLdrEntry @ 0x18006DC80 (LdrQueryModuleInfoFromLdrEntry.c)
 * Callees:
 *     RtlUnicodeStringToAnsiString @ 0x180018940 (RtlUnicodeStringToAnsiString.c)
 *     LdrpReadMemory @ 0x18006DBF4 (LdrpReadMemory.c)
 *     RtlReplaceSystemDirectoryInPath @ 0x18006E010 (RtlReplaceSystemDirectoryInPath.c)
 *     RtlWow64GetProcessMachines @ 0x18006E1C0 (RtlWow64GetProcessMachines.c)
 *     __security_check_cookie @ 0x180096C30 (__security_check_cookie.c)
 *     _wcsnicmp @ 0x180098470 (_wcsnicmp.c)
 */

NTSTATUS __fastcall LdrpGetModuleName(HANDLE *a1, __int64 a2, __int64 a3, int a4)
{
  unsigned __int16 v4; // di
  NTSTATUS result; // eax
  char *v9; // rax
  size_t v10; // rbx
  USHORT ProcessMachine[8]; // [rsp+20h] [rbp-E0h] BYREF
  _STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  UNICODE_STRING SourceString; // [rsp+40h] [rbp-C0h] BYREF
  wchar_t String1[264]; // [rsp+50h] [rbp-B0h] BYREF

  v4 = *(_WORD *)a2;
  if ( *(_WORD *)a2 >= 0x200u )
    v4 = 512;
  result = LdrpReadMemory(a1, *(_QWORD *)(a2 + 8), String1, v4);
  if ( result >= 0 )
  {
    String1[256] = 0;
    if ( !a4 )
      goto LABEL_5;
    v10 = -1LL;
    do
      ++v10;
    while ( *(_WORD *)(2 * v10 + 0x7FFE0030) );
    if ( !v10 )
      return -1073741595;
    if ( *(_WORD *)(2 * v10 + 0x7FFE002E) == 92 )
      --v10;
    if ( wcsnicmp(String1, (const wchar_t *)0x7FFE0030, v10)
      || wcsnicmp(&String1[v10], L"\\system32", 9uLL)
      || v10 + 16 < 0x101
      && RtlWow64GetProcessMachines(*a1, ProcessMachine, 0LL) >= 0
      && (SourceString.Buffer = String1,
          SourceString.MaximumLength = v4,
          SourceString.Length = v4,
          *(_DWORD *)(&DestinationString.MaximumLength + 1) = *(_DWORD *)(&SourceString.MaximumLength + 1),
          DestinationString.Buffer = (char *)&String1[v10],
          DestinationString.Length = -2 * v10 + v4,
          DestinationString.MaximumLength = DestinationString.Length,
          (RtlReplaceSystemDirectoryInPath((PUNICODE_STRING)&DestinationString, 1u, ProcessMachine[0], 0) & 0x80000000) == 0) )
    {
LABEL_5:
      SourceString.MaximumLength = v4;
      SourceString.Buffer = String1;
      SourceString.Length = v4;
      DestinationString.Buffer = (char *)(a3 + 40);
      *(_DWORD *)&DestinationString.Length = 0x1000000;
      result = RtlUnicodeStringToAnsiString(&DestinationString, &SourceString, 0);
      if ( result >= 0 )
      {
        v9 = &DestinationString.Buffer[DestinationString.Length];
        while ( v9 > DestinationString.Buffer )
        {
          if ( *--v9 == 92 )
          {
            LOWORD(v9) = (_WORD)v9 + 1;
            break;
          }
        }
        *(_WORD *)(a3 + 38) = (_WORD)v9 - LOWORD(DestinationString.Buffer);
        return 0;
      }
    }
    else
    {
      return -1073741595;
    }
  }
  return result;
}
