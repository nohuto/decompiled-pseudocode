/*
 * XREFs of PiDmObjectManagerAcquireSharedLock @ 0x1404E450C
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1404E4280 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObjectCount @ 0x14062F98C (PiDmGetObjectCount.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall PiDmObjectManagerAcquireSharedLock(struct _ERESOURCE *a1)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  return ExAcquireResourceSharedLite(a1, 1u);
}
