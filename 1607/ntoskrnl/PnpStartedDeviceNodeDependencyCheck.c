/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x1404C4CE4
 * Callers:
 *     PipProcessStartPhase3 @ 0x1403EEA60 (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x1404C58C8 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x14064DF9C (PipProcessRestartPhase2.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x1403F4194 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x1404C4D08 (PipAttemptDependentsStart.c)
 */

__int64 __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  return PnpReleaseDependencyRelationsLock();
}
