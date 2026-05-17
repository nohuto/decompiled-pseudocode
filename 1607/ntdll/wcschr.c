/*
 * XREFs of wcschr @ 0x18009C590
 * Callers:
 *     LdrSetDllDirectory @ 0x180001540 (LdrSetDllDirectory.c)
 *     RtlGetExePath @ 0x180009210 (RtlGetExePath.c)
 *     RtlpGetDirPath @ 0x18000C598 (RtlpGetDirPath.c)
 *     EtwpGenerateFileName @ 0x1800FDE14 (EtwpGenerateFileName.c)
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
