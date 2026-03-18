/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x14060DC70
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140495BA8 (PipForDeviceNodeSubtree.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(void *a1)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(a1, 0);
}
