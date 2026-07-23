/*
 * XREFs of wcscat @ 0x18009C510
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

wchar_t *__cdecl wcscat(wchar_t *Destination, const wchar_t *Source)
{
  wchar_t *i; // r8
  signed __int64 v3; // r8
  wchar_t v4; // ax

  for ( i = Destination; *i; ++i )
    ;
  v3 = (char *)i - (char *)Source;
  do
  {
    v4 = *Source;
    *(const wchar_t *)((char *)Source + v3) = *Source;
    ++Source;
  }
  while ( v4 );
  return Destination;
}
