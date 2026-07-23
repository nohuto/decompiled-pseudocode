/*
 * XREFs of strtolX @ 0x14014FDD0
 * Callers:
 *     atoi @ 0x14014D518 (atoi.c)
 *     atol @ 0x14014D538 (atol.c)
 * Callees:
 *     strtoxlX @ 0x14014FB70 (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
