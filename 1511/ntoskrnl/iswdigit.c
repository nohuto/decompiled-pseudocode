/*
 * XREFs of iswdigit @ 0x140144958
 * Callers:
 *     PfSnParsePrefetchParam @ 0x1404D7610 (PfSnParsePrefetchParam.c)
 * Callees:
 *     <none>
 */

int __cdecl iswdigit(wint_t C)
{
  return iswctype(C, 4u);
}
