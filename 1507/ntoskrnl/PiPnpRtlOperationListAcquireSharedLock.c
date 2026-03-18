/*
 * XREFs of PiPnpRtlOperationListAcquireSharedLock @ 0x14043ABD4
 * Callers:
 *     PiPnpRtlGetCurrentOperation @ 0x14043AB20 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN PiPnpRtlOperationListAcquireSharedLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&PiPnpRtlActiveOperationsLock, 1u);
}
