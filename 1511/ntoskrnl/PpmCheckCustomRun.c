/*
 * XREFs of PpmCheckCustomRun @ 0x140106504
 * Callers:
 *     PoLatencySensitivityHint @ 0x140105D7C (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140107594 (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x140138C14 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x140138DF0 (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x1401F11A0 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x1401F4644 (PpmParkSetLpiCap.c)
 *     PpmCheckApplyPerfConstraints @ 0x14050CF58 (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     PpmCheckStart @ 0x140075F90 (PpmCheckStart.c)
 */

__int64 __fastcall PpmCheckCustomRun(int a1)
{
  unsigned __int8 CurrentIrql; // bl

  PpmPerfPolicyLock = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  PpmCheckStart(a1);
  __writecr8(CurrentIrql);
  return KiLeaveGuardedRegionUnsafe((__int64)KeGetCurrentThread());
}
