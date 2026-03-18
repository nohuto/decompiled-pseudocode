/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x14022D93C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x1401326C8 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
