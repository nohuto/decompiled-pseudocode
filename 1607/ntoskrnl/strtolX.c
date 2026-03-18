/*
 * XREFs of strtolX @ 0x14014F810
 * Callers:
 *     atoi @ 0x14014CFA8 (atoi.c)
 *     atol @ 0x14014CFC8 (atol.c)
 * Callees:
 *     strtoxlX @ 0x14014F5B0 (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
