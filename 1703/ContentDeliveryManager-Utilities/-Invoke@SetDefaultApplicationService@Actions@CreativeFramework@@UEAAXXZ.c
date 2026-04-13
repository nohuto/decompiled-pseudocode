/*
 * XREFs of ?Invoke@SetDefaultApplicationService@Actions@CreativeFramework@@UEAAXXZ @ 0x18005A600
 * Callers:
 *     <none>
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z @ 0x18005A478 (-_Throw_Win32@in1diag3@details@wil@@YAXPEAXIPEBDK@Z.c)
 *     ??$GetActivationFactory@UIApplicationDefaultCategoriesStatics@ApplicationDefaults@Internal@Windows@@@wil@@YA?AV?$com_ptr_t@UIApplicationDefaultCategoriesStatics@ApplicationDefaults@Internal@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18005A920 (--$GetActivationFactory@UIApplicationDefaultCategoriesStatics@ApplicationDefaults@Internal@Windo.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     memset_0 @ 0x18006F9A2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void __fastcall CreativeFramework::Actions::SetDefaultApplicationService::Invoke(
        CreativeFramework::Actions::SetDefaultApplicationService *this)
{
  const WCHAR *v1; // rdi
  const WCHAR *v2; // rbx
  unsigned int v3; // esi
  unsigned int v4; // eax
  __int64 v5; // rbx
  unsigned __int64 v6; // r8
  unsigned int v7; // r9d
  unsigned int v8; // eax
  UINT32 v9; // edx
  HRESULT v10; // eax
  int v11; // eax
  UINT32 applicationUserModelIdLength; // [rsp+20h] [rbp-E0h] BYREF
  _QWORD v13[2]; // [rsp+28h] [rbp-D8h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+38h] [rbp-C8h] BYREF
  HSTRING string; // [rsp+50h] [rbp-B0h] BYREF
  WCHAR applicationUserModelId[136]; // [rsp+60h] [rbp-A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v13[1] = -2LL;
  v1 = (const WCHAR *)((char *)this + 40);
  if ( *((_QWORD *)this + 8) >= 8uLL )
    v1 = *(const WCHAR **)v1;
  v2 = (const WCHAR *)((char *)this + 8);
  if ( *((_QWORD *)this + 4) >= 8uLL )
    v2 = *(const WCHAR **)v2;
  v3 = *((_DWORD *)this + 26);
  memset_0(applicationUserModelId, 0, 0x104uLL);
  applicationUserModelIdLength = 130;
  v4 = FormatApplicationUserModelId(v2, v1, &applicationUserModelIdLength, applicationUserModelId);
  if ( v4 )
  {
    wil::details::in1diag3::_Throw_Win32(
      retaddr,
      (void *)0x2D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
      (const char *)v4);
    __debugbreak();
  }
  wil::GetActivationFactory<Windows::Internal::ApplicationDefaults::IApplicationDefaultCategoriesStatics>(v13);
  v5 = v13[0];
  v6 = -1LL;
  do
    ++v6;
  while ( applicationUserModelId[v6] );
  v7 = -1;
  if ( v6 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL);
  }
  else
  {
    v8 = v6 + 1;
    if ( (int)v6 + 1 >= (unsigned int)v6 )
      v7 = v6 + 1;
    if ( v8 < (unsigned int)v6 )
    {
      Microsoft::WRL::Details::RaiseException(v8 < (unsigned int)v6 ? (Microsoft::WRL::Details *)0x80070216LL : 0);
      __debugbreak();
    }
    v9 = v7 - 1;
    if ( (unsigned int)v6 < v7 )
      v9 = v6;
    v10 = WindowsCreateStringReference(applicationUserModelId, v9, &hstringHeader, &string);
    if ( v10 < 0 )
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v10);
    v11 = (*(__int64 (__fastcall **)(__int64, _QWORD, HSTRING))(*(_QWORD *)v5 + 64LL))(v5, v3, string);
    if ( v11 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x30,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\defaultapplicationhelpers.cpp",
        (const char *)(unsigned int)v11);
    if ( v13[0] )
      (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v13[0] + 16LL))(v13[0]);
  }
}
