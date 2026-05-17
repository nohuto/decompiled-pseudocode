/*
 * XREFs of strtolX @ 0x18009BE70
 * Callers:
 *     atoi @ 0x180097350 (atoi.c)
 *     atol @ 0x180097380 (atol.c)
 * Callees:
 *     strtoxlX @ 0x18009BC00 (strtoxlX.c)
 */

__int64 __fastcall strtolX(unsigned __int8 *a1, unsigned __int8 **a2, unsigned int a3, int a4)
{
  return strtoxlX((__int64)&_initiallocalestructinfo, a1, a2, a3, 0, a4);
}
