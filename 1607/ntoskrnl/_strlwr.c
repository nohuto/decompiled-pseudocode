/*
 * XREFs of _strlwr @ 0x14014D90C
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strlwr(char *String)
{
  char *i; // rdx

  for ( i = String; *i; ++i )
  {
    if ( (unsigned __int8)(*i - 65) <= 0x19u )
      *i += 32;
  }
  return String;
}
