/*
 * XREFs of wcsncmp @ 0x18009B320
 * Callers:
 *     LdrpCompareResourceNames_U @ 0x1800312D0 (LdrpCompareResourceNames_U.c)
 *     LdrpResCompareResourceNames @ 0x180039378 (LdrpResCompareResourceNames.c)
 * Callees:
 *     <none>
 */

int __cdecl wcsncmp(const wchar_t *String1, const wchar_t *String2, size_t MaxCount)
{
  if ( !MaxCount )
    return 0;
  while ( --MaxCount && *String1 && *String1 == *String2 )
  {
    ++String1;
    ++String2;
  }
  return *String1 - *String2;
}
