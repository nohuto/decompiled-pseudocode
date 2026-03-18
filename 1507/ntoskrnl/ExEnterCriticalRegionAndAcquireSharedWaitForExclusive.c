/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140263AA0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x14012EDB8 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
