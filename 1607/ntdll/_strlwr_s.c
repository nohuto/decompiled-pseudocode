/*
 * XREFs of _strlwr_s @ 0x180097E00
 * Callers:
 *     <none>
 * Callees:
 *     _invalid_parameter @ 0x180096B58 (_invalid_parameter.c)
 *     strnlen @ 0x18009B9C0 (strnlen.c)
 */

errno_t __cdecl strlwr_s(char *String, size_t Size)
{
  char *v2; // rbx

  v2 = String;
  if ( !String )
    goto LABEL_2;
  if ( strnlen(String, Size) >= Size )
  {
    *v2 = 0;
LABEL_2:
    invalid_parameter();
    return 22;
  }
  while ( *v2 )
  {
    if ( (unsigned __int8)(*v2 - 65) <= 0x19u )
      *v2 += 32;
    ++v2;
  }
  return 0;
}
