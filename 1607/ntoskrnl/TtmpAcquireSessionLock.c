/*
 * XREFs of TtmpAcquireSessionLock @ 0x140678E60
 * Callers:
 *     TtmpAcquireSessionById @ 0x140546B74 (TtmpAcquireSessionById.c)
 *     TtmpStopCallout @ 0x1406776BC (TtmpStopCallout.c)
 *     TtmpCloseTerminalHandle @ 0x140677F30 (TtmpCloseTerminalHandle.c)
 *     TtmpScheduledEvaluationWorker @ 0x14067811C (TtmpScheduledEvaluationWorker.c)
 *     TtmCleanupCurrentSession @ 0x1406784FC (TtmCleanupCurrentSession.c)
 *     TtmInitCurrentSession @ 0x1406786B8 (TtmInitCurrentSession.c)
 *     TtmpSessionPowerControl @ 0x140678FC0 (TtmpSessionPowerControl.c)
 *     TtmpSessionWorker @ 0x14067904C (TtmpSessionWorker.c)
 *     TtmpSetCsSessionGoal @ 0x140679250 (TtmpSetCsSessionGoal.c)
 *     TtmpTerminal0PowerSettingCallback @ 0x1406792D0 (TtmpTerminal0PowerSettingCallback.c)
 *     TtmpAcquireSessionFromTerminalHandle @ 0x1406795CC (TtmpAcquireSessionFromTerminalHandle.c)
 *     TtmpDeleteQueue @ 0x14067A2CC (TtmpDeleteQueue.c)
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
