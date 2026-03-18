/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x1400EFA04
 * Callers:
 *     VerifierExEnterCriticalRegionAndAcquireResourceShared @ 0x1406C9518 (VerifierExEnterCriticalRegionAndAcquireResourceShared.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot @ 0x1406C9560 (VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x14003FBC0 (ExAcquireResourceSharedLite.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
