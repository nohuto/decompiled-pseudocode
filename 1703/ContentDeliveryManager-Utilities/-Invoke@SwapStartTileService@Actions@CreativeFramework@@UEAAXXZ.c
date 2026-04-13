/*
 * XREFs of ?Invoke@SwapStartTileService@Actions@CreativeFramework@@UEAAXXZ @ 0x180058FC0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180022D3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x180040424 (--$WaitForCompletion@PEAUIAsyncAction@Foundation@Windows@@@details@wil@@YAJPEAUIAsyncAction@Foun.c)
 *     ?DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W@Z @ 0x180058A08 (-DeserializeUnifiedTileIdentifier@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UIUnifiedTileIdent.c)
 *     ?GetStartGridCollection@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@XZ @ 0x180058C9C (-GetStartGridCollection@Actions@CreativeFramework@@YA-AV-$com_ptr_t@UICuratedTileCollection@Cura.c)
 *     ??$query@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@?$com_ptr_t@UICuratedTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@1@XZ @ 0x1800597C8 (--$query@UIStartTileCollection@CuratedTileCollections@UnifiedTile@Shell@WindowsInternal@@@-$com_.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=5
void __fastcall CreativeFramework::Actions::SwapStartTileService::Invoke(
        CreativeFramework::Actions::SwapStartTileService *this)
{
  const WCHAR *v2; // rax
  const WCHAR *v3; // rax
  int v4; // eax
  int v5; // eax
  DWORD v6; // edx
  int v7; // r8d
  int v8; // eax
  __int64 v9; // [rsp+20h] [rbp-28h] BYREF
  const WCHAR *v10[4]; // [rsp+28h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+10h]
  void (__fastcall ***v12)(__int64, GUID *, __int64 *); // [rsp+60h] [rbp+18h] BYREF
  __int64 v13; // [rsp+68h] [rbp+20h] BYREF
  __int64 v14; // [rsp+70h] [rbp+28h] BYREF
  __int64 v15; // [rsp+78h] [rbp+30h] BYREF

  v10[1] = (const WCHAR *)-2LL;
  v2 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v2 = *(const WCHAR **)v2;
  v10[0] = v2;
  CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(&v9, v10);
  v3 = (const WCHAR *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v3 = *(const WCHAR **)v3;
  v10[0] = v3;
  CreativeFramework::Actions::DeserializeUnifiedTileIdentifier(&v15, v10);
  CreativeFramework::Actions::GetStartGridCollection(&v13);
  wil::com_ptr_t<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::ICuratedTileCollection,wil::err_exception_policy>::query<WindowsInternal::Shell::UnifiedTile::CuratedTileCollections::IStartTileCollection>(
    &v13,
    &v14);
  v4 = (*(__int64 (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v14 + 72LL))(v14, v9, v15);
  if ( v4 < 0 )
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0xD3,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v4);
  v12 = 0LL;
  v5 = (*(__int64 (__fastcall **)(__int64, void (__fastcall ****)(__int64, GUID *, __int64 *)))(*(_QWORD *)v13 + 208LL))(
         v13,
         &v12);
  if ( v5 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xD6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)(unsigned int)v5);
    __debugbreak();
  }
  v8 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncAction *>(v12, v6, v7);
  if ( v8 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x630,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v8);
  if ( v12 )
    ((void (__fastcall *)(void (__fastcall ***)(__int64, GUID *, __int64 *)))(*v12)[2])(v12);
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v13 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
}
