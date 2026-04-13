/*
 * XREFs of ?GetAppAUMID@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800602DC
 * Callers:
 *     ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x180060590 (-Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18005A478 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 */

_QWORD *__fastcall CreativeFramework::Actions::GetAppAUMID(
        _QWORD *a1,
        PCWSTR packageFamilyName,
        PCWSTR packageRelativeApplicationId)
{
  unsigned __int64 v6; // rsi
  unsigned int v7; // eax
  __int64 v8; // rcx
  UINT32 applicationUserModelIdLength[4]; // [rsp+20h] [rbp-148h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+30h] [rbp-138h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+168h] [rbp+0h]

  v6 = 0LL;
  applicationUserModelIdLength[1] = 0;
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength[0] = 130;
  v7 = FormatApplicationUserModelId(
         packageFamilyName,
         packageRelativeApplicationId,
         applicationUserModelIdLength,
         applicationUserModelId);
  if ( v7 )
  {
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x15,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\taskbarhelpers.cpp",
      (const char *)v7);
    JUMPOUT(0x1800603C0LL);
  }
  a1[3] = 7LL;
  a1[2] = 0LL;
  *(_WORD *)a1 = 0;
  if ( applicationUserModelId[0] )
  {
    v8 = -1LL;
    do
      ++v8;
    while ( applicationUserModelId[v8] );
    v6 = v8;
  }
  std::wstring::assign(a1, (char *)applicationUserModelId, v6);
  return a1;
}
