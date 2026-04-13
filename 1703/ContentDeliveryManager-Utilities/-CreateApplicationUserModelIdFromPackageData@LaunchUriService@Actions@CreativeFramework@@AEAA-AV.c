/*
 * XREFs of ?CreateApplicationUserModelIdFromPackageData@LaunchUriService@Actions@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x18005AF48
 * Callers:
 *     ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x18005AC88 (-LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18005A478 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 */

_QWORD *__fastcall CreativeFramework::Actions::LaunchUriService::CreateApplicationUserModelIdFromPackageData(
        __int64 a1,
        _QWORD *a2,
        const WCHAR *a3,
        const WCHAR *a4)
{
  unsigned __int64 v6; // rsi
  unsigned int v8; // eax
  __int64 v9; // rcx
  UINT32 applicationUserModelIdLength[4]; // [rsp+20h] [rbp-148h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+30h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v6 = 0LL;
  applicationUserModelIdLength[1] = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength[0] = 130;
  v8 = FormatApplicationUserModelId(a3, a4, applicationUserModelIdLength, applicationUserModelId);
  if ( v8 )
  {
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x8E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)v8);
    JUMPOUT(0x18005B02CLL);
  }
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  if ( applicationUserModelId[0] )
  {
    v9 = -1LL;
    do
      ++v9;
    while ( applicationUserModelId[v9] );
    v6 = v9;
  }
  std::wstring::assign(a2, (char *)applicationUserModelId, v6);
  return a2;
}
