/*
 * XREFs of PipForDeviceNodeSubtree @ 0x14045C0EC
 * Callers:
 *     PpProcessClearProblem @ 0x140131834 (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x14040A9A0 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x14045C124 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpBootPhaseComplete @ 0x1405C217C (PnpBootPhaseComplete.c)
 *     PnpDiagRundownRegisterCallback @ 0x14067D89C (PnpDiagRundownRegisterCallback.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14068D6AC (PiProfileUpdateDeviceTreeWorker.c)
 *     PpResetProblemDevices @ 0x140693FF4 (PpResetProblemDevices.c)
 * Callees:
 *     PipForAllChildDeviceNodes @ 0x14045C160 (PipForAllChildDeviceNodes.c)
 *     PpDevNodeUnlockTree @ 0x1404E1F18 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1404E20D8 (PpDevNodeLockTree.c)
 */

__int64 __fastcall PipForDeviceNodeSubtree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  PpDevNodeLockTree(0LL);
  LODWORD(a1) = PipForAllChildDeviceNodes(a1, v4, v6);
  PpDevNodeUnlockTree(0LL);
  return (unsigned int)a1;
}
