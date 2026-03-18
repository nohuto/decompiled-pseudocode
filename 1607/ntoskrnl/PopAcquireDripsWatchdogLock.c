/*
 * XREFs of PopAcquireDripsWatchdogLock @ 0x140675074
 * Callers:
 *     PopCancelDripsWatchdog @ 0x140675094 (PopCancelDripsWatchdog.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x1406754AC (PopDripsWatchdogWorkerRoutine.c)
 *     PopSetDripsWatchdog @ 0x1406756C4 (PopSetDripsWatchdog.c)
 * Callees:
 *     <none>
 */

BOOLEAN PopAcquireDripsWatchdogLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&stru_140329B98, 1u);
}
