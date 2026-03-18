/*
 * XREFs of MiReleaseResourceLite @ 0x14001A338
 * Callers:
 *     MiProcessLoaderEntry @ 0x14001A270 (MiProcessLoaderEntry.c)
 *     MiLookupDataTableEntry @ 0x140035B30 (MiLookupDataTableEntry.c)
 *     MiDeleteBootRange @ 0x1401332F0 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401CF300 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MmLockPagableDataSection @ 0x1403CF528 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1403CF640 (MmChangeImageProtection.c)
 *     MiCancelPhase0Locking @ 0x1403CFE00 (MiCancelPhase0Locking.c)
 *     MiRememberUnloadedDriver @ 0x1404C4BD0 (MiRememberUnloadedDriver.c)
 *     MmEnumerateSystemImages @ 0x140500E94 (MmEnumerateSystemImages.c)
 *     MmIsDriverVerifyingByAddress @ 0x14050C124 (MmIsDriverVerifyingByAddress.c)
 *     MiWriteProtectSystemImages @ 0x140520C1C (MiWriteProtectSystemImages.c)
 *     MmBackSystemImageWithPagefile @ 0x140522E38 (MmBackSystemImageWithPagefile.c)
 *     MmFreeBootDriverInitializationCode @ 0x14052FD8C (MmFreeBootDriverInitializationCode.c)
 *     MmGetSectionRange @ 0x140621B80 (MmGetSectionRange.c)
 *     MiUnlockBootPageSections @ 0x14074CD1C (MiUnlockBootPageSections.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x14003FBB0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall MiReleaseResourceLite(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1);
}
