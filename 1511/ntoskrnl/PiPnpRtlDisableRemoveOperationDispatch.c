/*
 * XREFs of PiPnpRtlDisableRemoveOperationDispatch @ 0x14043F934
 * Callers:
 *     PiPnpRtlCacheObjectBaseKey @ 0x14043DD68 (PiPnpRtlCacheObjectBaseKey.c)
 *     PiPnpRtlEndOperation @ 0x140440BC0 (PiPnpRtlEndOperation.c)
 *     PiPnpRtlObjectEventWorker @ 0x14045A4D8 (PiPnpRtlObjectEventWorker.c)
 *     PiPnpRtlEnsureObjectCached @ 0x140604BD0 (PiPnpRtlEnsureObjectCached.c)
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
