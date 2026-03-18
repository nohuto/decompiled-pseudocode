/*
 * XREFs of PpResetProblemDevices @ 0x140693FF4
 * Callers:
 *     PpSystemHiveLimitCallback @ 0x14067DE04 (PpSystemHiveLimitCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     PipForDeviceNodeSubtree @ 0x14045C0EC (PipForDeviceNodeSubtree.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 */

void PpResetProblemDevices()
{
  __int64 v0; // rbx
  _DWORD v1[4]; // [rsp+20h] [rbp-28h] BYREF

  v0 = IopRootDeviceNode;
  v1[1] = 0;
  v1[2] = 0;
  v1[0] = 49;
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree(v0, (__int64)PiResetProblemDevicesWorker, (__int64)v1);
  PpDevNodeUnlockTree(1);
}
