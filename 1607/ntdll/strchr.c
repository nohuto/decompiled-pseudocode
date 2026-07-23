/*
 * XREFs of strchr @ 0x18009B370
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char *__cdecl strchr(const char *Str, int Val)
{
  while ( *Str )
  {
    if ( *Str == (_BYTE)Val )
      return (char *)Str;
    ++Str;
  }
  if ( !(_BYTE)Val )
    return (char *)Str;
  return 0LL;
}
