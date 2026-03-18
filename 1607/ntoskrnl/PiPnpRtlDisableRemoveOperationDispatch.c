/*
 * XREFs of PiPnpRtlDisableRemoveOperationDispatch @ 0x140501BC4
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x1404FF9A4 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlEndOperation @ 0x14050147C (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x14050470C (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14062E9D0 (PiPnpRtlEnsureObjectCached.c)
 * Callees:
 *     <none>
 */

BOOLEAN PiPnpRtlDisableRemoveOperationDispatch()
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(&PiPnpRtlRemoveOperationDispatchLock, 1u);
}
