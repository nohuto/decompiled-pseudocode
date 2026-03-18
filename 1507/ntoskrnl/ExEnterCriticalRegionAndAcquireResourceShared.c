/*
 * XREFs of ExEnterCriticalRegionAndAcquireResourceShared @ 0x14012D2C0
 * Callers:
 *     VerifierExEnterCriticalRegionAndAcquireResourceShared @ 0x14074C138 (VerifierExEnterCriticalRegionAndAcquireResourceShared.c)
 *     VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot @ 0x14074C180 (VerifierExEnterCriticalRegionAndAcquireResourceSharedNoReboot.c)
 * Callees:
 *     ExAcquireResourceSharedLite @ 0x1400C8DB0 (ExAcquireResourceSharedLite.c)
 */

PVOID __stdcall ExEnterCriticalRegionAndAcquireResourceShared(PERESOURCE Resource)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  ExAcquireResourceSharedLite(Resource, 1u);
  return KeGetCurrentThread()->WaitBlock[2].SparePtr;
}
