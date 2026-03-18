/*
 * XREFs of _wtol @ 0x1401726E8
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1404447C8 (PfSnParsePrefetchParam.c)
 * Callees:
 *     <none>
 */

int __cdecl wtol(const wchar_t *Str)
{
  if ( Str )
    return wcstolX((unsigned __int16 *)Str, 0LL, 10, 1);
  else
    return 0;
}
