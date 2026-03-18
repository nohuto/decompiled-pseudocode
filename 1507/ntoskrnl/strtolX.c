/*
 * XREFs of strtolX @ 0x140174464
 * Callers:
 *     atoi @ 0x140171C00 (atoi.c)
 *     atol @ 0x140171C20 (atol.c)
 * Callees:
 *     ?strtoxlX@@YAKPEAUlocaleinfo_struct@@PEBDPEAPEBDHHH@Z @ 0x140174204 (-strtoxlX@@YAKPEAUlocaleinfo_struct@@PEBDPEAPEBDHHH@Z.c)
 */

__int64 __fastcall strtolX(char *a1, const char **a2, unsigned int a3, int a4)
{
  return strtoxlX(&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
