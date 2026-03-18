/*
 * XREFs of iswdigit @ 0x14014DD80
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1403E76C0 (PfSnParsePrefetchParam.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
