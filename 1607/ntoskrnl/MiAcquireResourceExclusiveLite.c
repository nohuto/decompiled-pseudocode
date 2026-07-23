/*
 * XREFs of MiAcquireResourceExclusiveLite @ 0x140082D98
 * Callers:
 *     MiProcessLoaderEntry @ 0x140082CAC (MiProcessLoaderEntry.c)
 *     MiCancelPhase0Locking @ 0x14047CA7C (MiCancelPhase0Locking.c)
 *     MmLockPagableDataSection @ 0x140481DFC (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140481ECC (MmChangeImageProtection.c)
 *     MiRememberUnloadedDriver @ 0x140546064 (MiRememberUnloadedDriver.c)
 *     MmFreeBootDriverInitializationCode @ 0x14054EE14 (MmFreeBootDriverInitializationCode.c)
 *     MiWriteProtectSystemImages @ 0x1405541A0 (MiWriteProtectSystemImages.c)
 *     MiUnlockBootPageSections @ 0x1407A412C (MiUnlockBootPageSections.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140067CE0 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall MiAcquireResourceExclusiveLite(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  return 1;
}
