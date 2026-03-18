/*
 * XREFs of _wtol @ 0x14014DA88
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1403E76C0 (PfSnParsePrefetchParam.c)
 * Callees:
 *     <none>
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX(Str, 0LL, 10LL, 1LL);
  else
    return 0;
}
