/*
 * XREFs of MiAcquireResourceExclusiveLite @ 0x140084C38
 * Callers:
 *     MiProcessLoaderEntry @ 0x140084B4C (MiProcessLoaderEntry.c)
 *     MiCancelPhase0Locking @ 0x14047DD28 (MiCancelPhase0Locking.c)
 *     MmLockPagableDataSection @ 0x1404830A8 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x140483178 (MmChangeImageProtection.c)
 *     MiRememberUnloadedDriver @ 0x140545B24 (MiRememberUnloadedDriver.c)
 *     MmFreeBootDriverInitializationCode @ 0x14054EA74 (MmFreeBootDriverInitializationCode.c)
 *     MiWriteProtectSystemImages @ 0x140553C60 (MiWriteProtectSystemImages.c)
 *     MiUnlockBootPageSections @ 0x1407A412C (MiUnlockBootPageSections.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x140068160 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall MiAcquireResourceExclusiveLite(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  return 1;
}
