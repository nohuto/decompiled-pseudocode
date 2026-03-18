/*
 * XREFs of CmpAddValueToList @ 0x14060B334
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B376C (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     CmpAddValueToListEx @ 0x1403FFCDC (CmpAddValueToListEx.c)
 */

__int64 __fastcall CmpAddValueToList(ULONG_PTR a1, int a2, unsigned int a3, unsigned int a4, unsigned int *a5)
{
  return CmpAddValueToListEx(a1, a2, a3, a4, a5, 1);
}
