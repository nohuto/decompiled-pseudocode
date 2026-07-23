/*
 * XREFs of MiReleaseResourceLite @ 0x140082D74
 * Callers:
 *     MiLookupDataTableEntry @ 0x1400145B0 (MiLookupDataTableEntry.c)
 *     MiProcessLoaderEntry @ 0x140082CAC (MiProcessLoaderEntry.c)
 *     MiDeleteBootRange @ 0x140139274 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x1401485B0 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiCancelPhase0Locking @ 0x14047CA7C (MiCancelPhase0Locking.c)
 *     MmLockPagableDataSection @ 0x140481DFC (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140481ECC (MmChangeImageProtection.c)
 *     MmEnumerateSystemImages @ 0x140499990 (MmEnumerateSystemImages.c)
 *     MmGetSectionRange @ 0x14052FFB0 (MmGetSectionRange.c)
 *     MiRememberUnloadedDriver @ 0x140546064 (MiRememberUnloadedDriver.c)
 *     MmIsDriverVerifyingByAddress @ 0x140547980 (MmIsDriverVerifyingByAddress.c)
 *     MmFreeBootDriverInitializationCode @ 0x14054EE14 (MmFreeBootDriverInitializationCode.c)
 *     MmBackSystemImageWithPagefile @ 0x140550FC8 (MmBackSystemImageWithPagefile.c)
 *     MiWriteProtectSystemImages @ 0x1405541A0 (MiWriteProtectSystemImages.c)
 *     MiUnlockBootPageSections @ 0x1407A412C (MiUnlockBootPageSections.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x1400684C0 (ExReleaseResourceLite.c)
 */

__int64 __fastcall MiReleaseResourceLite(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1);
}
