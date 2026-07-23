/*
 * XREFs of PnpQueuePendingEject @ 0x14062E2B4
 * Callers:
 *     IopEjectDevice @ 0x140649E68 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_14031F968;
  if ( *(__int64 **)qword_14031F968 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_14031F968 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
