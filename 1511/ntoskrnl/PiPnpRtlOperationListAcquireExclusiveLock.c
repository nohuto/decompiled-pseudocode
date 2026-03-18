/*
 * XREFs of PiPnpRtlOperationListAcquireExclusiveLock @ 0x140440EBC
 * Callers:
 *     PiPnpRtlBeginOperation @ 0x140440904 (PiPnpRtlBeginOperation.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
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
