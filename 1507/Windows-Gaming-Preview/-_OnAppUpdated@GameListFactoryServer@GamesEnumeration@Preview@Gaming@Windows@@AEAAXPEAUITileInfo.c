/*
 * XREFs of ?_OnAppUpdated@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAXPEAUITileInfo@@@Z @ 0x180009D44
 * Callers:
 *     ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x18000A024 (-_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUA.c)
 *     ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_fb370d981ef1183a944e68956136c802_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileChangeEvent@@@std@@UEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUITileChangeEvent@@@Z @ 0x18000B090 (-_Do_call@-$_Func_impl@U-$_Callable_obj@V_lambda_fb370d981ef1183a944e68956136c802_@@$0A@@std@@V-.c)
 * Callees:
 *     ??$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUITileManager@@PEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Details@WRL@Microsoft@@YAJV?$ComPtrRef@V?$ComPtr@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@WRL@Microsoft@@@012@$$QEAPEAUITileManager@@$$QEAPEAUIVisualElementEnumerator@@AEAPEAUITileInfo@@@Z @ 0x1800037A4 (--$MakeAndInitialize@VGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@V12345@PEAUIT.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@Gaming@Windows@@U?$InterfaceList@VCFTMCrossProcServer@@U?$InterfaceList@VFtmBase@WRL@Microsoft@@VNil@Details@23@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800076C0 (-Release@-$RuntimeClass@U-$InterfaceList@UIGameListEntry@GamesEnumeration@Preview@G_ea_1800076C0.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180007B70 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$InvokeAll@PEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@?$EventSource@UIGameListChangedEventHandler@GamesEnumeration@Preview@Gaming@Windows@@U?$InvokeModeOptions@$0?1@WRL@Microsoft@@@WRL@Microsoft@@QEAAJPEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@Z @ 0x18000AA88 (--$InvokeAll@PEAVGameListEntryServer@GamesEnumeration@Preview@Gaming@Windows@@@-$EventSource@UIG.c)
 *     ?LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA?AV?$SyncLockT@USRWLockSharedTraits@HandleTraits@Wrappers@WRL@Microsoft@@@Details@234@XZ @ 0x180011720 (-LockShared@SRWLock@Wrappers@WRL@Microsoft@@QEAA-AV-$SyncLockT@USRWLockSharedTraits@HandleTraits.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppUpdated(
        Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer *this,
        struct ITileInfo *a2)
{
  int v3; // eax
  __int64 v4; // rdx
  __int64 v5; // r8
  int v6; // eax
  volatile signed __int64 *v7; // rcx
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+10h]
  Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *v9; // [rsp+50h] [rbp+18h] BYREF
  struct ITileInfo *v10; // [rsp+58h] [rbp+20h] BYREF
  PSRWLOCK SRWLock; // [rsp+60h] [rbp+28h] BYREF
  struct ITileManager *v12; // [rsp+68h] [rbp+30h] BYREF

  v10 = a2;
  v9 = 0LL;
  SRWLock = (PSRWLOCK)*((_QWORD *)this + 11);
  v12 = (struct ITileManager *)*((_QWORD *)this + 10);
  v3 = Microsoft::WRL::Details::MakeAndInitialize<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer,ITileManager *,IVisualElementEnumerator *,ITileInfo * &>(
         &v9,
         &v12,
         (struct IVisualElementEnumerator **)&SRWLock,
         &v10);
  if ( v3 >= 0 )
  {
    Microsoft::WRL::Wrappers::SRWLock::LockShared((char *)this + 104, &SRWLock);
    v6 = Microsoft::WRL::EventSource<Windows::Gaming::Preview::GamesEnumeration::IGameListChangedEventHandler,Microsoft::WRL::InvokeModeOptions<-2>>::InvokeAll<Windows::Gaming::Preview::GamesEnumeration::GameListEntryServer *>(
           (char *)this + 160,
           v9);
    if ( v6 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0xD0,
        (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
        (const char *)(unsigned int)v6);
    if ( SRWLock )
      ReleaseSRWLockShared(SRWLock);
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xCD,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v3);
  }
  v7 = (volatile signed __int64 *)v9;
  if ( v9 )
  {
    v9 = 0LL;
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Windows::Gaming::Preview::GamesEnumeration::IGameListEntry,Microsoft::WRL::Details::InterfaceList<CFTMCrossProcServer,Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::Nil>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(
      v7,
      v4,
      v5);
  }
}
