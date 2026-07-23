/*
 * XREFs of MmReleaseLoadLock @ 0x140482154
 * Callers:
 *     MiShutdownSystem @ 0x1403DE8F8 (MiShutdownSystem.c)
 *     MmLoadSystemImage @ 0x140481880 (MmLoadSystemImage.c)
 *     MmChangeImageProtection @ 0x140481ECC (MmChangeImageProtection.c)
 *     MiObtainSectionForDriver @ 0x140482AA0 (MiObtainSectionForDriver.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     MiSessionUnloadAllImages @ 0x1405324A8 (MiSessionUnloadAllImages.c)
 *     MmUnloadSystemImage @ 0x1405462A8 (MmUnloadSystemImage.c)
 *     MmFreeBootDriverInitializationCode @ 0x14054EE14 (MmFreeBootDriverInitializationCode.c)
 *     MmBackSystemImageWithPagefile @ 0x140550FC8 (MmBackSystemImageWithPagefile.c)
 *     MmAddVerifierSpecialThunks @ 0x1406586AC (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x1406587A4 (MmAddVerifierThunks.c)
 *     MmEnableVerifierForDriver @ 0x1407018BC (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x140720E78 (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x1407A40B4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     KeReleaseMutant @ 0x1400F4C40 (KeReleaseMutant.c)
 */

__int64 __fastcall MmReleaseLoadLock(__int64 a1)
{
  KeReleaseMutant(&Mutant, 1, 0, 0);
  return KeLeaveCriticalRegionThread(a1);
}
