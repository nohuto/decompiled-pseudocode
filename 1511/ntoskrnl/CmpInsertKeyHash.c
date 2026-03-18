/*
 * XREFs of CmpInsertKeyHash @ 0x1405E115C
 * Callers:
 *     CmRenameKey @ 0x1405DF3A4 (CmRenameKey.c)
 *     CmpRehashKcbSubtree @ 0x1405E11A4 (CmpRehashKcbSubtree.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CmpInsertKeyHash(__int64 a1, _DWORD *a2, char a3)
{
  __int64 v3; // r11
  int v4; // r9d
  int v5; // eax

  v3 = *(_QWORD *)(a1 + 2800);
  v4 = *a2 ^ (*a2 >> 9);
  v5 = *(_DWORD *)(a1 + 2808) - 1;
  if ( a3 )
    ++a2[6];
  return CmpAddKeyHashToEntry((__int64)a2, v3 + 24LL * (v5 & ((101027 * v4) ^ ((unsigned int)(101027 * v4) >> 9))), 0);
}
