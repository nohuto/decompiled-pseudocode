/*
 * XREFs of PiPnpRtlOperationListAcquireSharedLock @ 0x1404E2AC0
 * Callers:
 *     PiPnpRtlGetCurrentOperation @ 0x1404E2A30 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404E769C (PiPnpRtlObjectEventWorker.c)
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
