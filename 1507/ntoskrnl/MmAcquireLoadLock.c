/*
 * XREFs of MmAcquireLoadLock @ 0x140452794
 * Callers:
 *     MiShutdownSystem @ 0x140402C68 (MiShutdownSystem.c)
 *     MmChangeImageProtection @ 0x140452054 (MmChangeImageProtection.c)
 *     MmUnloadSystemImage @ 0x140452B3C (MmUnloadSystemImage.c)
 *     MmEnumerateSystemImages @ 0x14051C530 (MmEnumerateSystemImages.c)
 *     MiSessionUnloadAllImages @ 0x140567E70 (MiSessionUnloadAllImages.c)
 *     MmLoadSystemImage @ 0x140574658 (MmLoadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x140574C30 (MiObtainSectionForDriver.c)
 *     MmBackSystemImageWithPagefile @ 0x14058FE4C (MmBackSystemImageWithPagefile.c)
 *     MmFreeBootDriverInitializationCode @ 0x14059A128 (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x1406A2348 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1406A2440 (MmAddVerifierThunks.c)
 *     MmEnableVerifierForDriver @ 0x140735D38 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x14075886C (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407C9518 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     KeWaitForSingleObject @ 0x14004F100 (KeWaitForSingleObject.c)
 */

struct _KTHREAD *MmAcquireLoadLock()
{
  struct _KTHREAD *CurrentThread; // rbx

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  KeWaitForSingleObject(&Mutant, WrVirtualMemory, 0, 0, 0LL);
  return CurrentThread;
}
