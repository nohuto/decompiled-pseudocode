/*
 * XREFs of PiDmObjectManagerAcquireExclusiveLock @ 0x1404E9300
 * Callers:
 *     PiDmListAddObjectWorker @ 0x1404E8FEC (PiDmListAddObjectWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x1404E9110 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E9218 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListRemoveObjectWorker @ 0x14062FEB0 (PiDmListRemoveObjectWorker.c)
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
