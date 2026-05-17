/*
 * XREFs of RtlpWow64SelectSystem32PathInternal @ 0x18006E0D4
 * Callers:
 *     RtlReplaceSystemDirectoryInPath @ 0x18006E020 (RtlReplaceSystemDirectoryInPath.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x180044150 (RtlInitUnicodeString.c)
 */

__int64 __fastcall RtlpWow64SelectSystem32PathInternal(__int16 a1, char a2, UNICODE_STRING *a3)
{
  UNICODE_STRING *v3; // rcx
  const WCHAR *v4; // rdx
  bool v6; // zf

  switch ( a1 )
  {
    case 1:
      v6 = a2 == 0;
      v3 = a3;
      v4 = L"\\System32\\";
      if ( v6 )
        v4 = L"System32";
      goto LABEL_5;
    case 332:
      v3 = a3;
      if ( a2 )
        v4 = L"\\SysWOW64\\";
      else
        v4 = L"SysWOW64";
LABEL_5:
      RtlInitUnicodeString(v3, v4);
      return 0LL;
    case 452:
      v3 = a3;
      if ( a2 )
        v4 = L"\\SysARM32\\";
      else
        v4 = L"SysARM32";
      goto LABEL_5;
  }
  return 3221225485LL;
}
