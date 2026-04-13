/*
 * XREFs of ?Invoke@TaskbarPinService@Actions@CreativeFramework@@UEAAXXZ @ 0x180060590
 * Callers:
 *     <none>
 * Callees:
 *     ?GetAppAUMID@Actions@CreativeFramework@@YA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x1800602DC (-GetAppAUMID@Actions@CreativeFramework@@YA-AV-$basic_string@_WU-$char_traits@_W@std@@V-$allocato.c)
 *     ?PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z @ 0x180060498 (-PinApp@Actions@CreativeFramework@@YAXPEB_W_N01@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CreativeFramework::Actions::TaskbarPinService::Invoke(
        CreativeFramework::Actions::TaskbarPinService *this,
        const wchar_t *a2,
        __int64 a3,
        const wchar_t *a4)
{
  const WCHAR *v4; // rax
  const WCHAR *v5; // r8
  const WCHAR *v6; // rdx
  char v7; // bl
  const wchar_t *v8; // rdx
  __int64 v9; // r8
  const wchar_t *v10; // r9
  CreativeFramework::Actions **v11; // rcx
  CreativeFramework::Actions *v12[3]; // [rsp+28h] [rbp-30h] BYREF
  unsigned __int64 v13; // [rsp+40h] [rbp-18h]

  if ( *((_QWORD *)this + 11) )
  {
    v4 = (const WCHAR *)((char *)this + 72);
    if ( *((_QWORD *)this + 12) >= 8uLL )
      v4 = *(const WCHAR **)v4;
    LOBYTE(a4) = *((_BYTE *)this + 104);
    CreativeFramework::Actions::PinApp(v4, a2, a3, a4);
  }
  else
  {
    v5 = (const WCHAR *)((char *)this + 40);
    if ( *((_QWORD *)this + 8) >= 8uLL )
      v5 = *(const WCHAR **)v5;
    v6 = (const WCHAR *)((char *)this + 8);
    if ( *((_QWORD *)this + 4) >= 8uLL )
      v6 = *(const WCHAR **)v6;
    v7 = *((_BYTE *)this + 104);
    CreativeFramework::Actions::GetAppAUMID(v12, v6, v5);
    v11 = v12;
    if ( v13 >= 8 )
      v11 = (CreativeFramework::Actions **)v12[0];
    LOBYTE(v10) = v7;
    CreativeFramework::Actions::PinApp((const WCHAR *)v11, v8, v9, v10);
    if ( v13 >= 8 )
      operator delete(v12[0]);
  }
}
