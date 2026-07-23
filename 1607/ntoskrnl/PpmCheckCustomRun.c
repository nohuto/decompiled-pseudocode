/*
 * XREFs of PpmCheckCustomRun @ 0x1401119F8
 * Callers:
 *     PoLatencySensitivityHint @ 0x140111844 (PoLatencySensitivityHint.c)
 *     PpmPerfLatencySensitivityHintWorker @ 0x140135BDC (PpmPerfLatencySensitivityHintWorker.c)
 *     PopIntSteerSetMode @ 0x140143BA0 (PopIntSteerSetMode.c)
 *     PpmCheckApplyParkConstraints @ 0x140143D7C (PpmCheckApplyParkConstraints.c)
 *     PpmCheckApplyResetNotification @ 0x14020A0D8 (PpmCheckApplyResetNotification.c)
 *     PpmParkSetLpiCap @ 0x14020DF34 (PpmParkSetLpiCap.c)
 *     PpmCheckApplyPerfConstraints @ 0x140544D3C (PpmCheckApplyPerfConstraints.c)
 * Callees:
 *     PpmCheckStart @ 0x140111A34 (PpmCheckStart.c)
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
