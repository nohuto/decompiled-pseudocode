/*
 * XREFs of MakeSystemRelativePath @ 0x14034E29C
 * Callers:
 *     ?LoadModuleWorkHorse@@YAPEAXPEAGH@Z @ 0x14031BE44 (-LoadModuleWorkHorse@@YAPEAXPEAGH@Z.c)
 *     ?EngCreateFile@@YAPEAXPEBG@Z @ 0x140349C3C (-EngCreateFile@@YAPEAXPEBG@Z.c)
 * Callees:
 *     PALLOCNOZ @ 0x140184030 (PALLOCNOZ.c)
 */

__int64 __fastcall MakeSystemRelativePath(PCWSTR Source, PUNICODE_STRING Destination, __int64 a3)
{
  __int64 v3; // rbx
  const WCHAR *v5; // rdi
  __int64 result; // rax
  const wchar_t *i; // rbx

  v3 = -1LL;
  v5 = Source;
  do
    ++v3;
  while ( Source[v3] );
  Destination->Length = 0;
  Destination->MaximumLength = 2 * v3 + 44;
  result = PALLOCNOZ(2 * (int)v3 + 44, 1818838599LL, a3);
  Destination->Buffer = (PWSTR)result;
  if ( result )
  {
    for ( i = &v5[(unsigned int)v3 - 10]; i >= v5; --i )
    {
      if ( !_wcsnicmp(i, L"\\system32\\", 0xAuLL) )
      {
        v5 = i + 10;
        break;
      }
    }
    RtlAppendUnicodeToString(Destination, L"\\SystemRoot\\System32\\");
    RtlAppendUnicodeToString(Destination, v5);
    return 1LL;
  }
  return result;
}
