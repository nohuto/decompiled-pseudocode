/*
 * XREFs of iswdigit @ 0x14014E2F0
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1403E8CF0 (PfSnParsePrefetchParam.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
