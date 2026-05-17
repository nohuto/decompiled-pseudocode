/*
 * XREFs of wcschr @ 0x180089A40
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     RtlpGetDirPath @ 0x180068268 (RtlpGetDirPath.c)
 *     RtlGetExePath @ 0x180077210 (RtlGetExePath.c)
 *     EtwpGenerateFileName @ 0x1800F4D30 (EtwpGenerateFileName.c)
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcschr(const wchar_t *Str, wchar_t Ch)
{
  while ( *Str )
  {
    if ( *Str == Ch )
      return (wchar_t *)Str;
    ++Str;
  }
  if ( !Ch )
    return (wchar_t *)Str;
  return 0LL;
}
