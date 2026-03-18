/*
 * XREFs of CmpFindSubKeyInLeaf @ 0x14065B170
 * Callers:
 *     CmpRemoveSubKey @ 0x14044A21C (CmpRemoveSubKey.c)
 * Callees:
 *     CmpFindSubKeyInLeafWithStatus @ 0x1404CA7D0 (CmpFindSubKeyInLeafWithStatus.c)
 */

__int64 __fastcall CmpFindSubKeyInLeaf(int a1, __int64 a2, int a3, int a4, _DWORD *a5)
{
  unsigned int v6[6]; // [rsp+30h] [rbp-18h] BYREF

  CmpFindSubKeyInLeafWithStatus(a1, a2, a3, a4, a5, v6);
  return v6[0];
}
