/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x1404EA628
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x1404A0664 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x1404EC528 (PipProcessStartPhase3.c)
 *     PipProcessRestartPhase2 @ 0x140618DE8 (PipProcessRestartPhase2.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x14045837C (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x1404EA64C (PipAttemptDependentsStart.c)
 */

__int64 __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  return PnpReleaseDependencyRelationsLock();
}
