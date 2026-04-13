/*
 * XREFs of ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x180058D80
 * Callers:
 *     ?Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ @ 0x180059280 (-Invoke@PinToStartService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180058AF4 (-CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileId.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180058C9C (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ??$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800596F0 (--$ActivateInstance@UICuratedTileCollectionManager@CuratedTileCollections@UnifiedTile@Shell@Wind.c)
 *     ??$query@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800597C8 (--$query@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@-$com_.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=6
void __fastcall CreativeFramework::Actions::PinToStart(
        const WCHAR *this,
        const wchar_t *a2,
        const wchar_t *a3,
        const wchar_t *a4)
{
  char v4; // di
  wchar_t **v6; // rbx
  unsigned int v7; // ebx
  __int64 v8; // rdi
  HRESULT v9; // eax
  int v10; // eax
  int v11; // eax
  __int64 v12; // rcx
  int v13; // eax
  _BYTE v14[8]; // [rsp+38h] [rbp-19h] BYREF
  __int64 v15; // [rsp+40h] [rbp-11h] BYREF
  __int64 v16; // [rsp+48h] [rbp-9h] BYREF
  __int64 v17; // [rsp+50h] [rbp-1h] BYREF
  __int64 v18; // [rsp+58h] [rbp+7h] BYREF
  _QWORD v19[2]; // [rsp+60h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+70h] [rbp+1Fh] BYREF
  HSTRING string; // [rsp+88h] [rbp+37h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B0h] [rbp+5Fh]

  v19[1] = -2LL;
  v4 = (char)a4;
  CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(&v17, this, a2);
  v6 = &off_1800F34D0;
  while ( CompareStringOrdinal(*v6, -1, a3, -1, 1) != 2 )
  {
    v6 += 2;
    if ( v6 == &off_1800F34F0 )
    {
      v7 = 0;
      goto LABEL_6;
    }
  }
  v7 = *((_DWORD *)v6 + 2);
LABEL_6:
  if ( v4 )
  {
    wil::ActivateInstance<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollectionManager>(&v16);
    v15 = 0LL;
    v8 = v16;
    string = 0LL;
    v9 = WindowsCreateStringReference(L"AllTiles", 8u, &hstringHeader, &string);
    if ( v9 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v9);
    v10 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v8 + 56LL))(v8, string, &v15);
    if ( v10 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x6C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v10);
    v14[0] = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _BYTE *))(*(_QWORD *)v15 + 112LL))(v15, v17, 0LL, v14);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x6E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v11);
    if ( !v14[0] )
    {
      if ( v15 )
        (*(void (**)(void))(*(_QWORD *)v15 + 16LL))();
      v12 = v16;
      goto LABEL_26;
    }
    if ( v15 )
      (*(void (**)(void))(*(_QWORD *)v15 + 16LL))();
    if ( v16 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  CreativeFramework::Actions::GetStartGridCollection(v19);
  wil::com_ptr_t<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection,wil::err_exception_policy>::query<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::IStartTileCollection>(
    v19,
    &v18);
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v18 + 48LL))(v18, v17, v7);
  if ( v13 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x77,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v13);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  v12 = v19[0];
LABEL_26:
  if ( v12 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v12 + 16LL))(v12);
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
}
