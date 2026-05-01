/*
 * XREFs of ?_Do_call@?$_Func_impl@V_lambda_faae20b7b54d1e7db1c0b0a4ea9fa7c2_@@V?$allocator@H@std@@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@EEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUIApplicationLifecycleEvent@@@Z @ 0x18000D740
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002C08 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x18000BFD8 (-_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUA.c)
 */

__int64 __fastcall std::_Func_impl<_lambda_faae20b7b54d1e7db1c0b0a4ea9fa7c2_,std::allocator<int>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::_Do_call(
        __int64 a1,
        int *a2,
        __int64 *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnAppStateChanged(
         *(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer **)(a1 + 8),
         *a2,
         *a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2F,
      (__int64)"onecoreuap\\xbox\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
