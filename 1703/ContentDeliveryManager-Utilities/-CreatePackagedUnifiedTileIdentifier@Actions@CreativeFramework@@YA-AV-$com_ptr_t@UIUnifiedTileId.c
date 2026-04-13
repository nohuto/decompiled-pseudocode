/*
 * XREFs of ?CreatePackagedUnifiedTileIdentifier@Actions@CreativeFramework@@YA?AV?$com_ptr_t@UIUnifiedTileIdentifier@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@wil@@PEB_W0@Z @ 0x180058AF4
 * Callers:
 *     ?PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z @ 0x180058D80 (-PinToStart@Actions@CreativeFramework@@YAXPEB_W00_N@Z.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@@wil@@YA?AV?$com_ptr_t@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180059624 (--$GetActivationFactory@UIPackagedUnifiedTileIdentifierFactory@UnifiedTile@Shell@WindowsInternal.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18005A478 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
void __fastcall CreativeFramework::Actions::CreatePackagedUnifiedTileIdentifier(
        __int64 *a1,
        const WCHAR *a2,
        const WCHAR *a3)
{
  unsigned int v6; // eax
  __int64 v7; // rbx
  unsigned __int64 v8; // r8
  unsigned int v9; // r9d
  unsigned int v10; // eax
  UINT32 v11; // edx
  HRESULT v12; // eax
  __int64 v13; // rcx
  int v14; // eax
  UINT32 applicationUserModelIdLength; // [rsp+20h] [rbp-E0h] BYREF
  int v16; // [rsp+24h] [rbp-DCh]
  _QWORD v17[3]; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-C0h] BYREF
  HSTRING string; // [rsp+58h] [rbp-A8h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1A8h] [rbp+A8h]

  v17[1] = -2LL;
  v17[2] = a1;
  v16 = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v6 = FormatApplicationUserModelId(a2, a3, &applicationUserModelIdLength, applicationUserModelId);
  if ( v6 )
  {
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x3B,
      (unsigned int)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
      (const char *)v6,
      applicationUserModelIdLength);
    __debugbreak();
  }
  wil::GetActivationFactory<WindowsInternal::Shell::UnifiedTile::IPackagedUnifiedTileIdentifierFactory>(v17);
  *a1 = 0LL;
  v16 = 1;
  v7 = v17[0];
  v8 = -1LL;
  do
    ++v8;
  while ( applicationUserModelId[v8] );
  v9 = -1;
  if ( v8 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
  }
  else
  {
    v10 = v8 + 1;
    if ( (int)v8 + 1 >= (unsigned int)v8 )
      v9 = v8 + 1;
    if ( v10 < (unsigned int)v8 )
    {
      Microsoft::WRL::Details::RaiseException(v10 < (unsigned int)v8 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
      __debugbreak();
    }
    v11 = v9 - 1;
    if ( (unsigned int)v8 < v9 )
      v11 = v8;
    v12 = WindowsCreateStringReference(applicationUserModelId, v11, &hstringHeader, &string);
    if ( v12 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12);
    v13 = *a1;
    *a1 = 0LL;
    if ( v13 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v13 + 16LL))(v13);
    v14 = (*(__int64 (__fastcall **)(__int64, HSTRING, __int64 *))(*(_QWORD *)v7 + 48LL))(v7, string, a1);
    if ( v14 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\curatedtilecollectionhelpers.cpp",
        (const char *)(unsigned int)v14);
    if ( v17[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v17[0] + 16LL))(v17[0]);
  }
}
