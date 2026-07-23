/*
 * XREFs of PiPnpRtlOperationListAcquireExclusiveLock @ 0x1404E4DA8
 * Callers:
 *     PiPnpRtlEndOperation @ 0x1404E440C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlBeginOperation @ 0x1404E46CC (PiPnpRtlBeginOperation.c)
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
