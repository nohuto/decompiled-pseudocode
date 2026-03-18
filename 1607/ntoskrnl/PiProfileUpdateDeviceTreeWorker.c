/*
 * XREFs of PiProfileUpdateDeviceTreeWorker @ 0x14064207C
 * Callers:
 *     <none>
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1403F49E0 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F4AB8 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x14051D928 (PipForDeviceNodeSubtree.c)
 */

void __fastcall PiProfileUpdateDeviceTreeWorker(void *a1)
{
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree(IopRootDeviceNode, (__int64)PiProfileUpdateDeviceTreeCallback, 0LL);
  PpDevNodeUnlockTree(1);
  ExFreePoolWithTag(a1, 0);
}
