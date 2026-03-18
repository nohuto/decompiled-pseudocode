/*
 * XREFs of PpmCheckCustomRun @ 0x140111494
 * Callers:
 *     PoLatencySensitivityHint @ 0x1401112E0 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x14013566C (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x140143630 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x14014380C (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x14020A2AC (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x14020E108 (PpmParkSetLpiCap.c)
 *     PpmCheckApplyPerfConstraints @ 0x1405447FC (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     PpmCheckStart @ 0x1401114D0 (PpmCheckStart.c)
 */

__int64 PpmCheckCustomRun()
{
  unsigned __int8 CurrentIrql; // bl

  PpmPerfPolicyLock = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  PpmCheckStart();
  __writecr8(CurrentIrql);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
