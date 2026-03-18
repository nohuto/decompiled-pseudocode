/*
 * XREFs of PiPnpRtlDisableRemoveOperationDispatch @ 0x14043B180
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x14043AA00 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlEndOperation @ 0x14043BCB0 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x1404DFCE4 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEnsureObjectCached @ 0x14067F934 (PiPnpRtlEnsureObjectCached.c)
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
