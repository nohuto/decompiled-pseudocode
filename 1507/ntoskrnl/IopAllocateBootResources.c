/*
 * XREFs of IopAllocateBootResources @ 0x14059C808
 * Callers:
 *     IopAllocateLegacyBootResources @ 0x1407D5598 (IopAllocateLegacyBootResources.c)
 *     IopReportBootResources @ 0x1407D5CA4 (IopReportBootResources.c)
 * Callees:
 *     KeReleaseSemaphore @ 0x140048A40 (KeReleaseSemaphore.c)
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     IopAllocateBootResourcesInternal @ 0x14059C8BC (IopAllocateBootResourcesInternal.c)
 */

__int64 __fastcall IopAllocateBootResources(unsigned int a1, __int64 a2, __int64 a3)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int BootResourcesInternal; // ebx
  struct _KTHREAD *v8; // rdx
  __int16 v9; // cx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&PpRegistrySemaphore, DelayExecution, 0, 0, 0LL);
  BootResourcesInternal = IopAllocateBootResourcesInternal(a1, a2, a3);
  KeReleaseSemaphore(&PpRegistrySemaphore, 0, 1, 0);
  v8 = KeGetCurrentThread();
  v9 = v8->KernelApcDisable + 1;
  v8->KernelApcDisable = v9;
  if ( !v9
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v8->ApcState.ApcListHead[0].Flink != &v8->152
    && !v8->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return BootResourcesInternal;
}
