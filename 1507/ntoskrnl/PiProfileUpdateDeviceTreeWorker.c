/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x14068D6AC
 * Callers:
 *     <none>
 * Callees:
 *     PipForDeviceNodeSubtree @ 0x14045C0EC (PipForDeviceNodeSubtree.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(void *a1)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(a1, 0);
}
