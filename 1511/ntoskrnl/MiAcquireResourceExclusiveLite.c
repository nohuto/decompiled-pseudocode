/*
 * XREFs of MiAcquireResourceExclusiveLite @ 0x14001A35C
 * Callers:
 *     MiProcessLoaderEntry @ 0x14001A270 (MiProcessLoaderEntry.c)
 *     MmLockPagableDataSection @ 0x1403CF528 (MmLockPagableDataSection.c)
 *     MmChangeImageProtection @ 0x1403CF640 (MmChangeImageProtection.c)
 *     MiCancelPhase0Locking @ 0x1403CFE00 (MiCancelPhase0Locking.c)
 *     MiRememberUnloadedDriver @ 0x1404C4BD0 (MiRememberUnloadedDriver.c)
 *     MiWriteProtectSystemImages @ 0x140520C1C (MiWriteProtectSystemImages.c)
 *     MmFreeBootDriverInitializationCode @ 0x14052FD8C (MmFreeBootDriverInitializationCode.c)
 *     MiUnlockBootPageSections @ 0x14074CD1C (MiUnlockBootPageSections.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14003F890 (ExAcquireResourceExclusiveLite.c)
 */

char __fastcall MiAcquireResourceExclusiveLite(__int64 a1)
{
  --*(_WORD *)(a1 + 484);
  ExAcquireResourceExclusiveLite(&PsLoadedModuleResource, 1u);
  return 1;
}
