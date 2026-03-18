/*
 * XREFs of PiPnpRtlOperationListAcquireSharedLock @ 0x14043DEF0
 * Callers:
 *     PiPnpRtlGetCurrentOperation @ 0x14043DE60 (PiPnpRtlGetCurrentOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
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
