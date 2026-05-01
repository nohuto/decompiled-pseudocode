/*
 * XREFs of ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockCriticalSection@Details@234@XZ @ 0x18001E358
 * Callers:
 *     ?get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDisplayInfo@ApplicationModel@5@@Z @ 0x180014890 (-get_DisplayInfo@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAUIAppDi.c)
 *     ?get_Properties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU?$IMapView@PEAUHSTRING__@@PEAUIInspectable@@@Collections@Foundation@5@@Z @ 0x1800156B0 (-get_Properties@GameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@UEAAJPEAPEAU-$IMapV.c)
 * Callees:
 *     ?Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA?AVSyncLockCriticalSection@Details@234@PEAU_RTL_CRITICAL_SECTION@@@Z @ 0x18001E328 (-Lock@CriticalSection@Wrappers@WRL@Microsoft@@SA-AVSyncLockCriticalSection@Details@234@PEAU_RTL_.c)
 */

struct _RTL_CRITICAL_SECTION **__fastcall Microsoft::WRL::Wrappers::CriticalSection::Lock(
        struct _RTL_CRITICAL_SECTION *a1,
        struct _RTL_CRITICAL_SECTION **a2)
{
  Microsoft::WRL::Wrappers::CriticalSection::Lock(a2, a1);
  return a2;
}
