/*
 * XREFs of ?InstallApp@Actions@CreativeFramework@@YAXPEB_W0_N1@Z @ 0x180056C08
 * Callers:
 *     ?Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ @ 0x180056EC0 (-Invoke@AppInstallService@Actions@CreativeFramework@@UEAAXXZ.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?assign@?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z @ 0x180049C60 (-assign@-$basic_string@_WU-$char_traits@_W@std@@V-$allocator@_W@2@@std@@QEAAAEAV12@PEB_W_K@Z.c)
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W1_N@Z @ 0x1800567F8 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 *     ?ConvertToStoreRecord@Actions@CreativeFramework@@YA?AV?$com_ptr_t@U?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@Uerr_exception_policy@wil@@@wil@@AEBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@0@Z @ 0x180056A14 (-ConvertToStoreRecord@Actions@CreativeFramework@@YA-AV-$com_ptr_t@U-$IVectorView@PEAVInstallAppI.c)
 *     ??$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA?AV?$com_ptr_t@UIContentManagementBroker@ContentManagement@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x180057924 (--$ActivateInstance@UIContentManagementBroker@ContentManagement@@@wil@@YA-AV-$com_ptr_t@UIConten.c)
 *     ??$ActivateInstance@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@wil@@YA?AV?$com_ptr_t@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800579FC (--$ActivateInstance@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@@.c)
 *     ??$query@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@?$com_ptr_t@UIAppInstallManager@InstallControl@Preview@Store@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180057AD4 (--$query@UIAppInstallManagerInternal2@Internal@InstallControl@Preview@Store@ApplicationModel@Win.c)
 *     ??$WaitForCompletion@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@V?$ComPtr@U?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@U?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAU?$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@ApplicationModel@Windows@@@Collections@Foundation@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180057B24 (--$WaitForCompletion@PEAU-$IVectorView@PEAVInstallAppInfo@Internal@InstallControl@Preview@Store@.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=10
void __fastcall CreativeFramework::Actions::InstallApp(const WCHAR *this, WCHAR *a2, const wchar_t *a3, char a4)
{
  char v5; // r14
  WCHAR *v6; // rdi
  WCHAR *v7; // rsi
  int v8; // eax
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // r8
  int v11; // eax
  const WCHAR *v12; // rcx
  WCHAR *v13; // [rsp+50h] [rbp-79h] BYREF
  __int64 v14; // [rsp+58h] [rbp-71h] BYREF
  __int64 v15; // [rsp+60h] [rbp-69h] BYREF
  __int64 v16; // [rsp+68h] [rbp-61h] BYREF
  WCHAR *v17; // [rsp+70h] [rbp-59h] BYREF
  __int64 v18; // [rsp+78h] [rbp-51h] BYREF
  __int64 v19; // [rsp+80h] [rbp-49h] BYREF
  __int64 v20; // [rsp+88h] [rbp-41h] BYREF
  _QWORD v21[2]; // [rsp+90h] [rbp-39h] BYREF
  void *v22[2]; // [rsp+A0h] [rbp-29h] BYREF
  __int64 v23; // [rsp+B0h] [rbp-19h]
  unsigned __int64 v24; // [rsp+B8h] [rbp-11h]
  void *v25[2]; // [rsp+C0h] [rbp-9h] BYREF
  __int64 v26; // [rsp+D0h] [rbp+7h]
  unsigned __int64 v27; // [rsp+D8h] [rbp+Fh]
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  v21[1] = -2LL;
  v5 = (char)a3;
  v6 = a2;
  v7 = (WCHAR *)this;
  v17 = (WCHAR *)this;
  v13 = a2;
  wil::ActivateInstance<ContentManagement::IContentManagementBroker>(v21);
  v15 = 0LL;
  v8 = (*(__int64 (__fastcall **)(_QWORD, __int64 *))(*(_QWORD *)v21[0] + 48LL))(v21[0], &v15);
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xA1,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  if ( !a4 )
  {
    v16 = v15;
    if ( v15 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 8LL))(v15);
    CreativeFramework::Actions::GetEntitlementForRecord(
      (CreativeFramework::Actions *)&v16,
      (const WCHAR **)&v17,
      (const WCHAR **)&v13);
    v7 = v17;
    v6 = v13;
  }
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  v9 = -1LL;
  if ( *v6 )
  {
    v10 = -1LL;
    do
      ++v10;
    while ( v6[v10] );
  }
  else
  {
    v10 = 0LL;
  }
  std::wstring::assign(v25, (char *)v6, v10);
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22[0]) = 0;
  if ( *v7 )
  {
    do
      ++v9;
    while ( v7[v9] );
  }
  else
  {
    v9 = 0LL;
  }
  std::wstring::assign(v22, (char *)v7, v9);
  CreativeFramework::Actions::ConvertToStoreRecord(&v20, (const WCHAR *)v22, (const WCHAR *)v25);
  if ( v24 >= 8 )
    operator delete(v22[0]);
  v24 = 7LL;
  v23 = 0LL;
  LOWORD(v22[0]) = 0;
  if ( v27 >= 8 )
    operator delete(v25[0]);
  v27 = 7LL;
  v26 = 0LL;
  LOWORD(v25[0]) = 0;
  wil::ActivateInstance<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager>(&v19);
  wil::com_ptr_t<Windows::ApplicationModel::Store::Preview::InstallControl::IAppInstallManager,wil::err_exception_policy>::query<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::IAppInstallManagerInternal2>(
    &v19,
    &v18);
  v14 = 0LL;
  v11 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, char, char, _QWORD, __int64 *))(*(_QWORD *)v18 + 72LL))(
          v18,
          v20,
          0LL,
          0LL,
          v5,
          v5,
          0LL,
          &v14);
  if ( v11 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xB5,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v11);
    __debugbreak();
  }
  wil::WaitForCompletion<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *> *,Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVectorView<Windows::ApplicationModel::Store::Preview::InstallControl::Internal::InstallAppInfo *>>>(
    &v13,
    v14);
  v12 = v13;
  if ( v13 )
  {
    v13 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v12 + 16LL))(v12);
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  if ( v18 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  if ( v21[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v21[0] + 16LL))(v21[0]);
}
