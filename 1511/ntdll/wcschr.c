/*
 * XREFs of wcschr @ 0x18009B1F0
 * Callers:
 *     LdrSetDllDirectory @ 0x180001750 (LdrSetDllDirectory.c)
 *     RtlpGetDirPath @ 0x1800734B4 (RtlpGetDirPath.c)
 *     RtlGetExePath @ 0x180082CC0 (RtlGetExePath.c)
 *     EtwpGenerateFileName @ 0x1800F4734 (EtwpGenerateFileName.c)
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
