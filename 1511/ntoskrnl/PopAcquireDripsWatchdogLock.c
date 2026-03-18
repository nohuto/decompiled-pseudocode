/*
 * XREFs of PopAcquireDripsWatchdogLock @ 0x14063C910
 * Callers:
 *     PopCancelDripsWatchdog @ 0x14063C930 (PopCancelDripsWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14063CD1C (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x14063CF34 (PopSetDripsWatchdog.c)
 * Callees:
 *     <none>
 */

BOOLEAN PopAcquireDripsWatchdogLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&stru_140306E78, 1u);
}
