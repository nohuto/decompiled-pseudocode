/*
 * XREFs of PnpQueuePendingEject @ 0x14067EA30
 * Callers:
 *     IopEjectDevice @ 0x1406940A4 (IopEjectDevice.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 */

char __fastcall PnpQueuePendingEject(__int64 *a1)
{
  __int64 **v2; // rax

  PpDevNodeLockTree(1);
  v2 = (__int64 **)qword_14034A8A8;
  *a1 = (__int64)&IopPendingEjects;
  a1[1] = (__int64)v2;
  if ( *v2 != &IopPendingEjects )
    __fastfail(3u);
  *v2 = a1;
  qword_14034A8A8 = (__int64)a1;
  PpDevNodeUnlockTree(1);
  return 1;
}
