/*
 * XREFs of ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x18001D3E4
 * Callers:
 *     ?get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x1800130D0 (-get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDi.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA?AV?$SyncLockT@UCriticalSectionTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18001D3B4 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA-AV-$SyncLockT@UCriticalSectionTraits@HandleTrai.c)
 */

struct _RTL_CRITICAL_SECTION **__fastcall Microsoft::WRL::Wrappers::CriticalSection::Lock(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a2, a1);
  return a2;
}
