/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x140461408
 * Callers:
 *     PipProcessStartPhase3 @ 0x14045ED7C (PipProcessStartPhase3.c)
 *     PnpDeleteLockedDeviceNode @ 0x140536DF4 (PnpDeleteLockedDeviceNode.c)
 *     PipProcessRestartPhase2 @ 0x1406973D8 (PipProcessRestartPhase2.c)
 * Callees:
 *     PipAttemptDependentsStart @ 0x14046142C (PipAttemptDependentsStart.c)
 *     PnpAcquireDependencyRelationsLock @ 0x1404E1670 (PnpAcquireDependencyRelationsLock.c)
 */

__int64 __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0LL);
  PipAttemptDependentsStart(a1);
  return PnpReleaseDependencyRelationsLock();
}
