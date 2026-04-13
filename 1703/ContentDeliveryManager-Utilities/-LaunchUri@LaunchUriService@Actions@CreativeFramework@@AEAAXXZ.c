/*
 * XREFs of ?LaunchUri@LaunchUriService@Actions@CreativeFramework@@AEAAXXZ @ 0x18005AC88
 * Callers:
 *     ?Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ @ 0x18005AC80 (-Invoke@LaunchUriService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180022D3C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180049A60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180057924 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ?CreateApplicationUserModelIdFromPackageData@LaunchUriService@Actions@CreativeFramework@@AEAA?AV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@PEB_W0@Z @ 0x18005AF48 (-CreateApplicationUserModelIdFromPackageData@LaunchUriService@Actions@CreativeFramework@@AEAA-AV.c)
 *     ??$WaitForCompletion@PEAU?$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU?$IAsyncOperation@_N@Foundation@Windows@@W4tagCOWAIT_FLAGS@@KPEA_N@Z @ 0x18005F3D8 (--$WaitForCompletion@PEAU-$IAsyncOperation@_N@Foundation@Windows@@@details@wil@@YAJPEAU-$IAsyncO.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
void __fastcall CreativeFramework::Actions::LaunchUriService::LaunchUri(void **this)
{
  int v2; // eax
  unsigned __int64 v3; // rcx
  const WCHAR *v4; // rax
  const WCHAR *v5; // rax
  __int64 v6; // rbx
  HSTRING_HEADER *v7; // rsi
  HSTRING_HEADER *v8; // r14
  int v9; // eax
  __int64 v10; // rbx
  int v11; // eax
  __int64 v12; // rax
  __int64 v13; // rbx
  HSTRING_HEADER *v14; // rax
  int v15; // eax
  _BYTE v16[8]; // [rsp+38h] [rbp-59h] BYREF
  __int64 v17; // [rsp+40h] [rbp-51h] BYREF
  __int64 v18; // [rsp+48h] [rbp-49h] BYREF
  const WCHAR *v19; // [rsp+50h] [rbp-41h] BYREF
  __int64 v20; // [rsp+58h] [rbp-39h] BYREF
  const WCHAR *v21[2]; // [rsp+60h] [rbp-31h] BYREF
  void *v22[2]; // [rsp+70h] [rbp-21h] BYREF
  __int64 v23; // [rsp+80h] [rbp-11h]
  unsigned __int64 v24; // [rsp+88h] [rbp-9h]
  HSTRING_HEADER v25; // [rsp+90h] [rbp-1h] BYREF
  unsigned __int64 v26; // [rsp+A8h] [rbp+17h]
  HSTRING_HEADER v27; // [rsp+B0h] [rbp+1Fh] BYREF
  __int64 v28; // [rsp+C8h] [rbp+37h]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v21[1] = (const WCHAR *)-2LL;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>((__int64)&v20);
  v18 = 0LL;
  v2 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v20 + 80LL))(v20, &v18);
  if ( v2 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x75,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v2);
    __debugbreak();
  }
  v3 = 7LL;
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22[0]) = 0;
  if ( *((_BYTE *)this + 113) && v22 != this + 5 )
  {
    std::wstring::assign(v22, this + 5, 0LL, 0xFFFFFFFFFFFFFFFFuLL);
    v3 = v24;
  }
  v17 = 0LL;
  v4 = (const WCHAR *)v22;
  if ( v3 >= 8 )
    v4 = (const WCHAR *)v22[0];
  v21[0] = v4;
  v5 = (const WCHAR *)(this + 1);
  if ( (unsigned __int64)this[4] >= 8 )
    v5 = *(const WCHAR **)v5;
  v19 = v5;
  v6 = v18;
  v7 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, v21);
  v8 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v25, &v19);
  v17 = 0LL;
  v9 = (*(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64 *))(*(_QWORD *)v6 + 48LL))(
         v6,
         v8[1].Reserved.Reserved1,
         v7[1].Reserved.Reserved1,
         &v17);
  if ( v9 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
      (const char *)(unsigned int)v9);
  v10 = v17;
  v11 = wil::details::WaitForCompletion<Windows::Foundation::IAsyncOperation<bool> *>(v17);
  if ( v11 >= 0 )
    v11 = (*(__int64 (__fastcall **)(__int64, _BYTE *))(*(_QWORD *)v10 + 64LL))(v10, v16);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x638,
      (__int64)"internal\\sdk\\inc\\wil\\winrt.h",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  if ( *((_BYTE *)this + 112) )
  {
    v12 = CreativeFramework::Actions::LaunchUriService::CreateApplicationUserModelIdFromPackageData(retaddr, &v25);
    if ( *(_QWORD *)(v12 + 24) >= 8uLL )
      v12 = *(_QWORD *)v12;
    v19 = (const WCHAR *)v12;
    v13 = v18;
    v14 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v27, &v19);
    v15 = (*(__int64 (__fastcall **)(__int64, PVOID, void *, _QWORD))(*(_QWORD *)v13 + 56LL))(
            v13,
            v14[1].Reserved.Reserved1,
            this[13],
            *((unsigned int *)this + 29));
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x86,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\launchuri.cpp",
        (const char *)(unsigned int)v15);
    v28 = 0LL;
    if ( v26 >= 8 )
      operator delete(v25.Reserved.Reserved1);
  }
  if ( v17 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v24 >= 8 )
    operator delete(v22[0]);
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22[0]) = 0;
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
}
