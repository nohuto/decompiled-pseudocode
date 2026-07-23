/*
 * XREFs of wcsncat @ 0x18009C660
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsncat(wchar_t *Destination, const wchar_t *Source, size_t Count)
{
  wchar_t *v3; // r9
  wchar_t *v5; // rcx
  wchar_t v6; // ax

  v3 = Destination;
  while ( *Destination++ )
    ;
  v5 = Destination - 1;
  while ( Count )
  {
    v6 = *Source;
    --Count;
    *v5++ = *Source++;
    if ( !v6 )
      return v3;
  }
  *v5 = 0;
  return v3;
}
