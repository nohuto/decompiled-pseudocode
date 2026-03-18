/*
 * XREFs of IopAllocateBootResources @ 0x140556138
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x1407AB328 (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x1407ABA34 (IopReportBootResources.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x1400529B0 (KeReleaseSemaphore.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055FA0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeWaitForSingleObject @ 0x14005C880 (KeWaitForSingleObject.c)
 *     IopAllocateBootResourcesInternal @ 0x1405561C0 (IopAllocateBootResourcesInternal.c)
 */

__int64 __fastcall IopAllocateBootResources(unsigned int a1, __int64 a2)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int BootResourcesInternal; // ebx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  BootResourcesInternal = IopAllocateBootResourcesInternal(a1, a2);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  KiLeaveCriticalRegionUnsafe((__int64)KeGetCurrentThread(), v6, v7, v8);
  return BootResourcesInternal;
}
