/*
 * XREFs of strrchr @ 0x18009BA90
 * Callers:
 *     LdrpSnapModule @ 0x180033F90 (LdrpSnapModule.c)
 *     LdrpParseForwarderDescription @ 0x18007B834 (LdrpParseForwarderDescription.c)
 * Callees:
 *     <none>
 */

char *__cdecl strrchr(const char *Str, int Ch)
{
  const char *v2; // r9
  char *v3; // r8

  v2 = Str;
  v3 = 0LL;
  while ( *Str++ )
    ;
  do
    --Str;
  while ( Str != v2 && *Str != (_BYTE)Ch );
  if ( *Str == (_BYTE)Ch )
    return (char *)Str;
  return v3;
}
