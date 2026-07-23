/*
 * XREFs of PnpStartedDeviceNodeDependencyCheck @ 0x1404888E8
 * Callers:
 *     PnpDeleteLockedDeviceNode @ 0x140485CFC (PnpDeleteLockedDeviceNode.c)
 *     PipProcessStartPhase3 @ 0x140488964 (PipProcessStartPhase3.c)
 *     PipProcessRestartPhase2 @ 0x14064E080 (PipProcessRestartPhase2.c)
 * Callees:
 *     PnpAcquireDependencyRelationsLock @ 0x1403F3058 (PnpAcquireDependencyRelationsLock.c)
 *     PipAttemptDependentsStart @ 0x14048890C (PipAttemptDependentsStart.c)
 */

__int64 __fastcall PnpStartedDeviceNodeDependencyCheck(__int64 a1)
{
  PnpAcquireDependencyRelationsLock(0);
  PipAttemptDependentsStart(a1);
  return PnpReleaseDependencyRelationsLock();
}
