/*
 * XREFs of PopAcquireDripsWatchdogLock @ 0x1406BCF40
 * Callers:
 *     PopCancelDripsWatchdog @ 0x1406BCF60 (PopCancelDripsWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406BD240 (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x1406BD4C4 (PopSetDripsWatchdog.c)
 * Callees:
 *     <none>
 */

BOOLEAN PopAcquireDripsWatchdogLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&stru_140357168, 1u);
}
