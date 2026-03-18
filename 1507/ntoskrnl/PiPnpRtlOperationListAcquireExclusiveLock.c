/*
 * XREFs of PiPnpRtlOperationListAcquireExclusiveLock @ 0x14043BC90
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x14043B8C8 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 * Callees:
 *     <none>
 */

BOOLEAN PiPnpRtlOperationListAcquireExclusiveLock()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(&PiPnpRtlActiveOperationsLock, 1u);
}
