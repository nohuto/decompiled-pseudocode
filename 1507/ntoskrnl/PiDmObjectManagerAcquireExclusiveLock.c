/*
 * XREFs of PiDmObjectManagerAcquireExclusiveLock @ 0x1404E07D0
 * Callers:
 *     PiDmListAddObjectWorker @ 0x1404DFB04 (PiDmListAddObjectWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E0538 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E066C (PiDmAddCacheReferenceForObject.c)
 *     PiDmListRemoveObjectWorker @ 0x140680984 (PiDmListRemoveObjectWorker.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall PiDmObjectManagerAcquireExclusiveLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceExclusiveLite(a1, 1u);
}
