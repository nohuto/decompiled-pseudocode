/*
 * XREFs of ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@USRWLockSharedTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180011720
 * Callers:
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x180009B2C (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x180009BF4 (-_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z.c)
 *     ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x180009D44 (-_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo.c)
 * Callees:
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA?AV?$SyncLockT@USRWLockSharedTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@PEAU_RTL_SRWLOCK@@@Z @ 0x180001C44 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@SA-AV-$SyncLockT@USRWLockSharedTraits@HandleTraits@W.c)
 */

RTL_SRWLOCK **__fastcall Microsoft::WRL::Wrappers::SRWLock::LockShared(RTL_SRWLOCK *a1, RTL_SRWLOCK **a2)
{
  Microsoft::WRL::Wrappers::SRWLock::LockShared(a2, a1);
  return a2;
}
