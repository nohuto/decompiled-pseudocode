/*
 * XREFs of PiDmObjectManagerAcquireSharedLock @ 0x14043BFE0
 * Callers:
 *     PiDmEnumObjectsWithCallback @ 0x14043BDF4 (PiDmEnumObjectsWithCallback.c)
 *     PiDmGetObjectCount @ 0x1406804BC (PiDmGetObjectCount.c)
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
