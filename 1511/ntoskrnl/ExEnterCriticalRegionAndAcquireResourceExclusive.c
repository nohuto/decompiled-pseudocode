/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14003F800
 * Callers:
 *     VerifierExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1406C94C8 (VerifierExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot @ 0x1406C9510 (VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
