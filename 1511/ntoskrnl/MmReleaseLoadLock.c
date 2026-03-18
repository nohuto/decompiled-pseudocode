/*
 * XREFs of MmReleaseLoadLock @ 0x1403CF8C4
 * Callers:
 *     MiShutdownSystem @ 0x1403B1B80 (MiShutdownSystem.c)
 *     MmUnloadSystemImage @ 0x1403CBF50 (MmUnloadSystemImage.c)
 *     MiObtainSectionForDriver @ 0x1403CD7E8 (MiObtainSectionForDriver.c)
 *     MmLoadSystemImage @ 0x1403CE970 (MmLoadSystemImage.c)
 *     MmChangeImageProtection @ 0x1403CF640 (MmChangeImageProtection.c)
 *     MiSessionUnloadAllImages @ 0x1404F3B90 (MiSessionUnloadAllImages.c)
 *     MmEnumerateSystemImages @ 0x140500E94 (MmEnumerateSystemImages.c)
 *     MmBackSystemImageWithPagefile @ 0x140522E38 (MmBackSystemImageWithPagefile.c)
 *     MmFreeBootDriverInitializationCode @ 0x14052FD8C (MmFreeBootDriverInitializationCode.c)
 *     MmAddVerifierSpecialThunks @ 0x140623168 (MmAddVerifierSpecialThunks.c)
 *     MmAddVerifierThunks @ 0x140623260 (MmAddVerifierThunks.c)
 *     MmEnableVerifierForDriver @ 0x1406B5A54 (MmEnableVerifierForDriver.c)
 *     VfAddVerifierEntry @ 0x1406D4C98 (VfAddVerifierEntry.c)
 *     MiFlushStrongCodeDriverLoadFailures @ 0x14074CCA4 (MiFlushStrongCodeDriverLoadFailures.c)
 * Callees:
 *     KeReleaseMutant @ 0x140087250 (KeReleaseMutant.c)
 */

__int64 __fastcall MmReleaseLoadLock(__int64 a1)
{
  KeReleaseMutant(&Mutant, 1, 0, 0);
  return KeLeaveCriticalRegionThread(a1);
}
