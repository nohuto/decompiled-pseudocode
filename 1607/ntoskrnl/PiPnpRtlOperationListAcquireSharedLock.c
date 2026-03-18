/*
 * XREFs of PiPnpRtlOperationListAcquireSharedLock @ 0x1404FFB30
 * Callers:
 *     PiPnpRtlGetCurrentOperation @ 0x1404FFAA0 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
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
