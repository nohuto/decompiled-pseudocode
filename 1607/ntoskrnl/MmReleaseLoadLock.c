/*
 * XREFs of MmReleaseLoadLock @ 0x140483400
 * Callers:
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 *     MmLoadSystemImage @ 0x140482B2C (MmLoadSystemImage.c)
 *     MmChangeImageProtection @ 0x140483178 (MmChangeImageProtection.c)
 *     MiObtainSectionForDriver @ 0x140483D4C (MiObtainSectionForDriver.c)
 *     MmEnumerateSystemImages @ 0x140498F00 (MmEnumerateSystemImages.c)
 *     MiSessionUnloadAllImages @ 0x140531F68 (MiSessionUnloadAllImages.c)
 *     MmUnloadSystemImage @ 0x140545D68 (MmUnloadSystemImage.c)
 *     MmFreeBootDriverInitializationCode @ 0x14054EA74 (MmFreeBootDriverInitializationCode.c)
 *     MmBackSystemImageWithPagefile @ 0x140550A88 (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x1406585C8 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1406586C0 (MmAddVerifierThunks.c)
 *     MmEnableVerifierForDriver @ 0x14070188C (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407A40B4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     KeReleaseMutant @ 0x1400F6E00 (KeReleaseMutant.c)
 */

__int64 __fastcall MmReleaseLoadLock(__int64 a1)
{
  KeReleaseMutant(&Mutant, 1, 0, 0);
  return KeLeaveCriticalRegionThread(a1);
}
