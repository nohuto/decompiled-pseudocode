/*
 * XREFs of ?_OnAppRemoved@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEBG@Z @ 0x180009BF4
 * Callers:
 *     ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x180009E10 (-_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_V.c)
 *     ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x18000A024 (-_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUA.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007B70 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeDelegates@V_lambda_7eb293456242c3bc5897049bf7e8a99d_@@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@@?$InvokeTraits@$0?1@WRL@Microsoft@@SAJV_lambda_7eb293456242c3bc5897049bf7e8a99d_@@PEAVEventTargetArray@Details@12@PEAV?$EventSource@UIGameListRemovedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@12@@Z @ 0x18000ADC0 (--$InvokeDelegates@V_lambda_7eb293456242c3bc5897049bf7e8a99d_@@UIGameListRemovedEventHandler@Gam.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1800112B0 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$01@34@$00$0A@$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800115F0 (-Release@-$RuntimeClass@U-$InterfaceList@UIUnknown@@VNil@Details@WRL@Microsoft@@@Details@WRL@Mic.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@USRWLockSharedTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180011720 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@USRWLockSharedTraits@HandleTraits.c)
 *     ?LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@USRWLockExclusiveTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180011744 (-LockExclusive@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@USRWLockExclusiveTraits@Handle.c)
 *     __security_check_cookie @ 0x180025B30 (__security_check_cookie.c)
 */

void __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppRemoved(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        const unsigned __int16 *a2)
{
  int v4; // edx
  unsigned int v5; // r8d
  unsigned __int64 v6; // rax
  HRESULT v7; // eax
  int v8; // edx
  unsigned int v9; // r8d
  HSTRING v10; // rdi
  __int64 v11; // rbx
  signed __int32 v12; // eax
  int v13; // edi
  PSRWLOCK v14; // [rsp+20h] [rbp-58h] BYREF
  PSRWLOCK SRWLock; // [rsp+28h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+30h] [rbp-48h] BYREF
  HSTRING string; // [rsp+48h] [rbp-30h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  Microsoft::WRL::Wrappers::SRWLock::LockShared((char *)this + 104, &v14);
  string = 0LL;
  v6 = -1LL;
  do
    ++v6;
  while ( a2[v6] );
  if ( v6 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v4, v5);
    __debugbreak();
  }
  v7 = WindowsCreateStringReference(a2, v6, &hstringHeader, &string);
  if ( v7 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v7, v8, v9);
    JUMPOUT(0x180009D3ALL);
  }
  v10 = string;
  v11 = 0LL;
  Microsoft::WRL::Wrappers::SRWLock::LockExclusive((char *)this + 144, &SRWLock);
  if ( *((_QWORD *)this + 17) )
  {
    v11 = *((_QWORD *)this + 17);
    do
      v12 = *(_DWORD *)(v11 + 12);
    while ( v12 != 0x7FFFFFFF && v12 != _InterlockedCompareExchange((volatile signed __int32 *)(v11 + 12), v12 + 1, v12) );
  }
  if ( SRWLock )
    ReleaseSRWLockExclusive(SRWLock);
  if ( v11 )
  {
    v13 = Microsoft::WRL::InvokeTraits<-2>::InvokeDelegates<_lambda_7eb293456242c3bc5897049bf7e8a99d_,Windows::Gaming::Preview::GamesEnumeration::IGameListRemovedEventHandler>(
            v10,
            v11,
            (char *)this + 136);
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<IUnknown,Microsoft::WRL::Details::Nil>,Microsoft::WRL::RuntimeClassFlags<2>,1,0,0>::Release(v11);
    if ( v13 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xC0,
        (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v13);
  }
  if ( v14 )
    ReleaseSRWLockShared(v14);
}
