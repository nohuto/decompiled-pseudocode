/*
 * XREFs of PnpQueuePendingEject @ 0x140603E04
 * Callers:
 *     IopEjectDevice @ 0x14061532C (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(__int64 *a1)
{
  __int64 **v2; // rax

  PpDevNodeLockTree(1);
  v2 = (__int64 **)qword_1402FA428;
  *a1 = (__int64)&IopPendingEjects;
  a1[1] = (__int64)v2;
  if ( *v2 != &IopPendingEjects )
    __fastfail(3u);
  *v2 = a1;
  qword_1402FA428 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
