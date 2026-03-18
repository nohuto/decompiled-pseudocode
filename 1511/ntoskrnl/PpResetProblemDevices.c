/*
 * XREFs of PpResetProblemDevices @ 0x14061527C
 * Callers:
 *     PpSystemHiveLimitCallback @ 0x140602F98 (PpSystemHiveLimitCallback.c)
 * Callees:
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PipForDeviceNodeSubtree @ 0x140495BA8 (PipForDeviceNodeSubtree.c)
 */

__int64 PpResetProblemDevices()
{
  __int64 v0; // rbx
  _DWORD v2[4]; // [rsp+20h] [rbp-28h] BYREF

  v0 = IopRootDeviceNode;
  v2[1] = 0;
  v2[2] = 0;
  v2[0] = 49;
  PpDevNodeLockTree(1);
  PipForDeviceNodeSubtree(v0, (__int64)PiResetProblemDevicesWorker, (__int64)v2);
  return PpDevNodeUnlockTree(1);
}
