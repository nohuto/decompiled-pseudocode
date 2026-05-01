/*
 * XREFs of ??$InvokeAll@PEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000A988
 * Callers:
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x1800096EC (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x1800098D8 (-_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo.c)
 * Callees:
 *     ??$InvokeDelegates@V_lambda_7eb293456242c3bc5897049bf7e8a99d_@@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_7eb293456242c3bc5897049bf7e8a99d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000ACC0 (--$InvokeDelegates@V_lambda_7eb293456242c3bc5897049bf7e8a99d_@@UIGameListRemovedEventHandler@Gam.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800111B8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *>(
        volatile signed __int32 **a1,
        __int64 a2)
{
  unsigned int v4; // esi
  volatile signed __int32 *v5; // rbx
  PSRWLOCK SRWLock; // [rsp+48h] [rbp+10h] BYREF

  v4 = 0;
  v5 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive(a1 + 1, &SRWLock);
  if ( *a1 )
  {
    v5 = *a1;
    _InterlockedIncrement(*a1 + 3);
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v5 )
  {
    v4 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_7eb293456242c3bc5897049bf7e8a99d_,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler>(
           a2,
           v5,
           a1);
    if ( _InterlockedExchangeAdd(v5 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v5 + 24LL))(v5, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
  }
  return v4;
}
