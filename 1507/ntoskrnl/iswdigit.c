/*
 * XREFs of iswdigit @ 0x1401729D8
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1404447C8 (PfSnParsePrefetchParam.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
