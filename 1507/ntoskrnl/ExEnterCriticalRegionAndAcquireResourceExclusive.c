/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceExclusive @ 0x1400C8890
 * Callers:
 *     VerifierExEnterCriticalRegionAndAcquireResourceExclusive @ 0x14074C0E8 (VerifierExEnterCriticalRegionAndAcquireResourceExclusive.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot @ 0x14074C130 (VerifierExEnterCriticalRegionAndAcquireResourceExclusiveNoReboot.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x1400C8A30 (ExAcquireResourceExclusiveLite.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceExclusive(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceExclusiveLite(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
