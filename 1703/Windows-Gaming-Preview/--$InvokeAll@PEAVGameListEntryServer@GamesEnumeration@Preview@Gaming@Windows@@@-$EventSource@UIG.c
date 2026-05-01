/*
 * XREFs of ??$InvokeAll@PEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000C4A0
 * Callers:
 *     ?_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x18000B538 (-_OnAppAdded@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@.c)
 *     ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x18000B6C8 (-_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo.c)
 * Callees:
 *     Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_926821de02ebfb79fb8ab29bc72c01bf__Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler_ @ 0x18000D01C (Microsoft--WRL--InvokeTraits__2_--InvokeDelegates__lambda_926821de02ebfb79fb8ab29bc72c01bf__Wind.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x18001296C (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x18002A300 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *>(
        volatile signed __int32 **a1,
        __int64 a2)
{
  unsigned int v4; // edi
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
    v4 = Microsoft::WRL::InvokeTraits__2_::InvokeDelegates__lambda_926821de02ebfb79fb8ab29bc72c01bf__Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler_(
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
