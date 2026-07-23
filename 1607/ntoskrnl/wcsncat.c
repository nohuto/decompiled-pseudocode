/*
 * XREFs of wcsncat @ 0x14014F5C4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcsncat(wchar_t *Dest, const wchar_t *Source, size_t Count)
{
  wchar_t *v3; // r9
  wchar_t *v5; // rcx
  wchar_t v6; // ax

  v3 = Dest;
  while ( *Dest++ )
    ;
  v5 = Dest - 1;
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
