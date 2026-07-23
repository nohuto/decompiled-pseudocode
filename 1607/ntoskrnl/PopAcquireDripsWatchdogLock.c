/*
 * XREFs of PopAcquireDripsWatchdogLock @ 0x140675158
 * Callers:
 *     PopCancelDripsWatchdog @ 0x140675178 (PopCancelDripsWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x140675590 (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x1406757A8 (PopSetDripsWatchdog.c)
 * Callees:
 *     <none>
 */

BOOLEAN PopAcquireDripsWatchdogLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&stru_140329BD8, 1u);
}
