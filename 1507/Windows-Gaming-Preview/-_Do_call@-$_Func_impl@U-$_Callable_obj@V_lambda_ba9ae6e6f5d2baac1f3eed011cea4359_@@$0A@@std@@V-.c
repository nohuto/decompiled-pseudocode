/*
 * XREFs of ?_Do_call@?$_Func_impl@U?$_Callable_obj@V_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_@@$0A@@std@@V?$allocator@V?$_Func_class@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@@2@JW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@std@@UEAAJ$$QEAW4_VISUALELEMENT_EVENT_TYPE@@$$QEAPEAUITileInViewChangeEvent@@@Z @ 0x18000B1F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180008B98 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_VISUALELEMENT_EVENT_TYPE@@PEAUITileInViewChangeEvent@@@Z @ 0x180009E10 (-_OnViewContentsChanged@GameListFactoryServer@GamesEnumeration@Preview@Gaming@Windows@@AEAAJW4_V.c)
 */

__int64 __fastcall std::_Func_impl<std::_Callable_obj<_lambda_ba9ae6e6f5d2baac1f3eed011cea4359_,0>,std::allocator<std::_Func_class<long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>>,long,enum _VISUALELEMENT_EVENT_TYPE,ITileInViewChangeEvent *>::_Do_call(
        __int64 a1,
        int *a2,
        __int64 *a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer::_OnViewContentsChanged(
         *(Windows::Gaming::Preview::GamesEnumeration::GameListFactoryServer **)(a1 + 8),
         *a2,
         *a3);
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      63LL,
      (__int64)"xbox\\shellcore\\windows.gaming.preview\\dll\\gamelist.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
