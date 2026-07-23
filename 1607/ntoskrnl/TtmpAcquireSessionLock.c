/*
 * XREFs of TtmpAcquireSessionLock @ 0x140678F44
 * Callers:
 *     TtmpAcquireSessionById @ 0x1405470B4 (TtmpAcquireSessionById.c)
 *     TtmpStopCallout @ 0x1406777A0 (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x140678014 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x140678200 (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x1406785E0 (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x14067879C (TtmInitCurrentSession.c)
 *     TtmpSessionPowerControl @ 0x1406790A4 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x140679130 (TtmpSessionWorker.c)
 *     TtmpSetCsSessionGoal @ 0x140679334 (TtmpSetCsSessionGoal.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1406793B4 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406796B0 (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDeleteQueue @ 0x14067A3B0 (TtmpDeleteQueue.c)
 * Callees:
 *     <none>
 */

BOOLEAN TtmpAcquireSessionLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&TtmpSessionLock, 1u);
}
