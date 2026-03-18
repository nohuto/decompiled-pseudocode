/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x140090EF0
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400685B0 (ExAcquireResourceSharedLite.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
