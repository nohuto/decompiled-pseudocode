/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140487410
 * Callers:
 *     PpProcessClearProblem @ 0x140131C4C (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x140486B1C (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x1404887B0 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpBootPhaseComplete @ 0x140580CE0 (PnpBootPhaseComplete.c)
 *     PnpDiagRundownRegisterCallback @ 0x14062CE74 (PnpDiagRundownRegisterCallback.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x140642160 (PiProfileUpdateDeviceTreeWorker.c)
 *     PpResetProblemDevices @ 0x140649DB8 (PpResetProblemDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x1403F38A4 (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x1403F397C (PpDevNodeLockTree.c)
 *     PipForAllChildDeviceNodes @ 0x140487448 (PipForAllChildDeviceNodes.c)
 */

__int64 __fastcall PipForDeviceNodeSubtree(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  _QWORD v6[3]; // [rsp+20h] [rbp-18h] BYREF

  v6[0] = a2;
  v6[1] = a3;
  PpDevNodeLockTree(0);
  LODWORD(a1) = PipForAllChildDeviceNodes(a1, v4, v6);
  PpDevNodeUnlockTree(0);
  return (unsigned int)a1;
}
