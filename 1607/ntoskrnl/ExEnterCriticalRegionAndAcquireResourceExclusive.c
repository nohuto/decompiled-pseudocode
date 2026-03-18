/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1400680D0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
