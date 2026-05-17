/*
 * XREFs of wcsncmp @ 0x180089B70
 * Callers:
 *     LdrpResCompareResourceNames @ 0x18001A6B0 (LdrpResCompareResourceNames.c)
 *     LdrpCompareResourceNamesWithValidation @ 0x1800CB640 (LdrpCompareResourceNamesWithValidation.c)
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
