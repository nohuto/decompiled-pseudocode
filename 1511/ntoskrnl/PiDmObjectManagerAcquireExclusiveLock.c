/*
 * XREFs of PiDmObjectManagerAcquireExclusiveLock @ 0x1404B08D4
 * Callers:
 *     PiDmRemoveCacheReferenceForObject @ 0x1404B07CC (PiDmRemoveCacheReferenceForObject.c)
 *     PiDmListAddObjectWorker @ 0x1404E504C (PiDmListAddObjectWorker.c)
 *     PiDmAddCacheReferenceForObject @ 0x1404E5114 (PiDmAddCacheReferenceForObject.c)
 *     PiDmListRemoveObjectWorker @ 0x140605C1C (PiDmListRemoveObjectWorker.c)
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
