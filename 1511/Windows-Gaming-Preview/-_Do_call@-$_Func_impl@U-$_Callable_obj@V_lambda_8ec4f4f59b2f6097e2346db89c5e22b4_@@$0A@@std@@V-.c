/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@std@@UEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUIApplicationLifecycleEvent@@@Z @ 0x18000AE90
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008AA0 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUIApplicationLifecycleEvent@@@Z @ 0x180009B90 (-_OnAppStateChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUA.c)
 */

__int64 __fastcall std::_Func_impl<std::_Callable_obj<_lambda_8ec4f4f59b2f6097e2346db89c5e22b4_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,IApplicationLifecycleEvent *>::_Do_call(
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
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      47LL,
      (__int64)"xbox\\onecore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
