/*
 * XREFs of ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180058C9C
 * Callers:
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x180058D80 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 *     ?Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ @ 0x180058FC0 (-Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800596F0 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
_QWORD *__fastcall CreativeFramework::Actions::GetStartGridCollection(_QWORD *a1)
{
  __int64 v2; // rdi
  HRESULT v3; // eax
  int v4; // eax
  _QWORD v6[3]; // [rsp+28h] [rbp-50h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-38h] BYREF
  HSTRING string; // [rsp+58h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v6[1] = -2LL;
  v6[2] = a1;
  wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(v6);
  *a1 = 0LL;
  v2 = v6[0];
  string = 0LL;
  v3 = WindowsCreateStringReference(L"Start.TileGrid", 0xEu, &hstringHeader, &string);
  if ( v3 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v3);
  v4 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v2 + 56LL))(v2, string, a1);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x5E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4);
  if ( v6[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v6[0] + 16LL))(v6[0]);
  return a1;
}
