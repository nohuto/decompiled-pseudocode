/*
 * XREFs of ExEnterCriticalRegionAndAcquireSharedWaitForExclusive @ 0x140213D78
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireSharedWaitForExclusive @ 0x1400CF384 (ExAcquireSharedWaitForExclusive.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireSharedWaitForExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireSharedWaitForExclusive(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
