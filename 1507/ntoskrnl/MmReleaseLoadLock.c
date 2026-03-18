/*
 * XREFs of MmReleaseLoadLock @ 0x1404523E8
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
 *     KeReleaseMutant @ 0x140022C40 (KeReleaseMutant.c)
 */

void __fastcall MmReleaseLoadLock(__int64 a1)
{
  __int16 v2; // ax

  KeReleaseMutant(&Mutant, 1, 0, 0);
  v2 = *(_WORD *)(a1 + 484) + 1;
  *(_WORD *)(a1 + 484) = v2;
  if ( !v2 && *(_QWORD *)(a1 + 152) != a1 + 152 && !*(_WORD *)(a1 + 486) )
    KiCheckForKernelApcDelivery();
}
