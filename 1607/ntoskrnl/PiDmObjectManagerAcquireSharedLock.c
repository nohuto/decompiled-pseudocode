/*
 * XREFs of PiDmObjectManagerAcquireSharedLock @ 0x14050157C
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x1405012F0 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObjectCount @ 0x14062F8D8 (PiDmGetObjectCount.c)
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
