/*
 * XREFs of PnpQueuePendingEject @ 0x14062E200
 * Callers:
 *     IopEjectDevice @ 0x140649D84 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1403F49E0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(_QWORD *a1)
{
  _QWORD *v2; // rax

  PpDevNodeLockTree(1);
  v2 = (_QWORD *)qword_14031F948;
  if ( *(__int64 **)qword_14031F948 != &IopPendingEjects )
    __fastfail(3u);
  *a1 = &IopPendingEjects;
  a1[1] = v2;
  *v2 = a1;
  qword_14031F948 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
