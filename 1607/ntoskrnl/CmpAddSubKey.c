/*
 * XREFs of CmpAddSubKey @ 0x14049ADF8
 * Callers:
 *     CmpPromoteSingleKeyFromKeyNodeStacks @ 0x1401B3650 (CmpPromoteSingleKeyFromKeyNodeStacks.c)
 *     CmpCreateTombstone @ 0x1401B6144 (CmpCreateTombstone.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpAddSubKey(ULONG_PTR a1)
{
  return CmpAddSubKeyEx(a1);
}
