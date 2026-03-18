/*
 * XREFs of CmpAddSubKey @ 0x1404B0A18
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B376C (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCreateTombstone @ 0x1401B6260 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1)
{
  return CmpAddSubKeyEx(a1);
}
