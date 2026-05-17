/*
 * XREFs of _wcsupr_s @ 0x180097510
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180095768 (_invalid_parameter.c)
 *     wcsnlen @ 0x18009B3B0 (wcsnlen.c)
 */

errno_t __cdecl wcsupr_s(wchar_t *String, size_t Size)
{
  wchar_t *v2; // rbx

  v2 = String;
  if ( !String )
    goto LABEL_2;
  if ( wcsnlen(String, Size) >= Size )
  {
    *v2 = 0;
LABEL_2:
    invalid_parameter();
    return 22;
  }
  while ( *v2 )
  {
    if ( (unsigned __int16)(*v2 - 97) <= 0x19u )
      *v2 -= 32;
    ++v2;
  }
  return 0;
}
