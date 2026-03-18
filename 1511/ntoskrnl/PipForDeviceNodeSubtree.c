/*
 * XREFs of PipForDeviceNodeSubtree @ 0x140495BA8
 * Callers:
 *     PpProcessClearProblem @ 0x1400D1168 (PpProcessClearProblem.c)
 *     PnpGetSystemPdoList @ 0x140495A14 (PnpGetSystemPdoList.c)
 *     PiMarkDeviceTreeForReenumeration @ 0x140495BE0 (PiMarkDeviceTreeForReenumeration.c)
 *     PnpBootPhaseComplete @ 0x140523EA0 (PnpBootPhaseComplete.c)
 *     PnpDiagRundownRegisterCallback @ 0x140602A7C (PnpDiagRundownRegisterCallback.c)
 *     PiProfileUpdateDeviceTreeWorker @ 0x14060DC70 (PiProfileUpdateDeviceTreeWorker.c)
 *     PpResetProblemDevices @ 0x14061527C (PpResetProblemDevices.c)
 * Callees:
 *     PpDevNodeUnlockTree @ 0x140458C1C (PpDevNodeUnlockTree.c)
 *     PpDevNodeLockTree @ 0x140458D00 (PpDevNodeLockTree.c)
 *     PipForAllChildDeviceNodes @ 0x140495C18 (PipForAllChildDeviceNodes.c)
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
