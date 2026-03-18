/*
 * XREFs of PiDmObjectManagerAcquireExclusiveLock @ 0x140506370
 * Callers:
 *     PiDmListAddObjectWorker @ 0x14050605C (PiDmListAddObjectWorker.c)
 *     PiDmRemoveCacheReferenceForObject @ 0x140506180 (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmAddCacheReferenceForObject @ 0x140506288 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListRemoveObjectWorker @ 0x14062FDFC (PiDmListRemoveObjectWorker.c)
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
