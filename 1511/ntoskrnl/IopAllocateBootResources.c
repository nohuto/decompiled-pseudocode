/*
 * XREFs of IopAllocateBootResources @ 0x140529F08
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x140760FA8 (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x1407616B4 (IopReportBootResources.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeReleaseSemaphore @ 0x140084230 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     IopAllocateBootResourcesInternal @ 0x140529F90 (IopAllocateBootResourcesInternal.c)
 */

__int64 __fastcall IopAllocateBootResources(unsigned int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  LODWORD(a3) = IopAllocateBootResourcesInternal(a1, a2, a3);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread());
  return (unsigned int)a3;
}
