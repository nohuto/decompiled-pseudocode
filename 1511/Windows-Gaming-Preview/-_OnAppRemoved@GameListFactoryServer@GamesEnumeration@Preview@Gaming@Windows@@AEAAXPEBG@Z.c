/*
 * XREFs of ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x18000978C
 * Callers:
 *     ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x18000997C (-_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_V.c)
 *     ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x180009B90 (-_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007A78 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeDelegates@V_lambda_7eb293456242c3bc5897049bf7e8a99d_@@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_7eb293456242c3bc5897049bf7e8a99d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000ACC0 (--$InvokeDelegates@V_lambda_7eb293456242c3bc5897049bf7e8a99d_@@UIGameListRemovedEventHandler@Gam.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180010DF0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AVSyncLockExclusive@Details@234@XZ @ 0x1800111B8 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AVSyncLockExclusive@Details@234@XZ.c)
 *     ?dummy@Chunk@?$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultEqualityPredicate@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@4567@U?$DefaultLifetimeTraits@PEAUIInspectable@@@4567@U?$HashMapOptions@PEAUHSTRING__@@PEAUIInspectable@@U?$DefaultLifetimeTraits@PEAUHSTRING__@@@Internal@Collections@Foundation@Windows@@$0A@$00$0A@@4567@@Internal@Collections@Foundation@Windows@@EEAAXXZ @ 0x180017C80 (-dummy@Chunk@-$NaiveSplitView@PEAUHSTRING__@@PEAUIInspectable@@U-$DefaultEqualityPredicate@PEAUH.c)
 *     __security_check_cookie @ 0x180025A00 (__security_check_cookie.c)
 */

void __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppRemoved(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        const unsigned __int16 *a2,
        unsigned int a3)
{
  unsigned __int64 v3; // rax
  HRESULT v5; // eax
  int v6; // edx
  unsigned int v7; // r8d
  HSTRING v8; // rdi
  volatile signed __int32 *v9; // rbx
  int v10; // esi
  PSRWLOCK SRWLock[2]; // [rsp+20h] [rbp-58h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-48h] BYREF
  HSTRING string; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  string = 0LL;
  v3 = -1LL;
  do
    ++v3;
  while ( a2[v3] );
  if ( v3 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, (int)a2, a3);
    __debugbreak();
  }
  v5 = WindowsCreateStringReference(a2, v3, &hstringHeader, &string);
  if ( v5 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v5, v6, v7);
    JUMPOUT(0x1800098CFLL);
  }
  v8 = string;
  v9 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((char *)this + 136, SRWLock);
  if ( *((_QWORD *)this + 16) )
  {
    v9 = (volatile signed __int32 *)*((_QWORD *)this + 16);
    _InterlockedIncrement(v9 + 3);
  }
  if ( SRWLock[0] )
    ReleaseSRWLockExclusive(SRWLock[0]);
  if ( v9 )
  {
    v10 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_7eb293456242c3bc5897049bf7e8a99d_,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler>(
            v8,
            v9,
            (char *)this + 128);
    if ( _InterlockedExchangeAdd(v9 + 3, 0xFFFFFFFF) == 1 )
    {
      (*(void (__fastcall **)(volatile signed __int32 *, __int64))(*(_QWORD *)v9 + 24LL))(v9, 1LL);
      if ( Microsoft::WRL::Details::ModuleBase::module_ )
        _InterlockedDecrement((volatile signed __int32 *)&Microsoft::WRL::Details::ModuleBase::objectCount_);
    }
    if ( v10 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xB8,
        (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v10);
  }
}
