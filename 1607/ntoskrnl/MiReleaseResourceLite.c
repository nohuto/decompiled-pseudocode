/*
 * XREFs of MiReleaseResourceLite @ 0x140084C14
 * Callers:
 *     MiLookupDataTableEntry @ 0x140014A30 (MiLookupDataTableEntry.c)
 *     MiProcessLoaderEntry @ 0x140084B4C (MiProcessLoaderEntry.c)
 *     MiDeleteBootRange @ 0x140138D04 (MiDeleteBootRange.c)
 *     MmVerifyCallbackFunctionCheckFlags @ 0x140148040 (MmVerifyCallbackFunctionCheckFlags.c)
 *     MiCancelPhase0Locking @ 0x14047DD28 (MiCancelPhase0Locking.c)
 *     MmLockPagableDataSection @ 0x1404830A8 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140483178 (MmChangeImageProtection.c)
 *     MmEnumerateSystemImages @ 0x140498F00 (MmEnumerateSystemImages.c)
 *     MmGetSectionRange @ 0x14052FA70 (MmGetSectionRange.c)
 *     MiRememberUnloadedDriver @ 0x140545B24 (MiRememberUnloadedDriver.c)
 *     MmIsDriverVerifyingByAddress @ 0x140547440 (MmIsDriverVerifyingByAddress.c)
 *     MmFreeBootDriverInitializationCode @ 0x14054EA74 (MmFreeBootDriverInitializationCode.c)
 *     MmBackSystemImageWithPagefile @ 0x140550A88 (MmBackSystemImageWithPagefile.c)
 *     MiWriteProtectSystemImages @ 0x140553C60 (MiWriteProtectSystemImages.c)
 *     MiUnlockBootPageSections @ 0x1407A412C (MiUnlockBootPageSections.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140068940 (ExReleaseResourceLite.c)
 */

__int64 __fastcall MiReleaseResourceLite(__int64 a1)
{
  ExReleaseResourceLite(&PsLoadedModuleResource);
  return KeLeaveCriticalRegionThread(a1);
}
