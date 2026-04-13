/*
 * XREFs of ?IsMsaConnected@Actions@CreativeFramework@@YA_NXZ @ 0x180056334
 * Callers:
 *     ?GetEntitlementForRecord@Actions@CreativeFramework@@YAXV?$com_ptr_t@UIAppManager@ContentManagement@@Uerr_exception_policy@wil@@@wil@@AEBQEB_W1_N@Z @ 0x1800567F8 (-GetEntitlementForRecord@Actions@CreativeFramework@@YAXV-$com_ptr_t@UIAppManager@ContentManageme.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@@wil@@YA?AV?$com_ptr_t@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@Windows@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x1800573FC (--$GetActivationFactory@UIWebAuthenticationCoreManagerStatics@Core@Web@Authentication@Security@W.c)
 *     ??$WaitForCompletion@PEAVWebAccountProvider@Credentials@Security@Windows@@V?$ComPtr@UIWebAccountProvider@Credentials@Security@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIWebAccountProvider@Credentials@Security@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVWebAccountProvider@Credentials@Security@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x1800574C8 (--$WaitForCompletion@PEAVWebAccountProvider@Credentials@Security@Windows@@V-$ComPtr@UIWebAccount.c)
 *     ??$GetActivationFactory@UIInspectable@@@wil@@YA?AV?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@0@PEB_W@Z @ 0x18005755C (--$GetActivationFactory@UIInspectable@@@wil@@YA-AV-$com_ptr_t@UIInspectable@@Uerr_exception_poli.c)
 *     ??$query@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@@?$com_ptr_t@UIInspectable@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180057628 (--$query@UITokenBrokerInternalStatics@Web@Authentication@Security@Internal@Windows@@@-$com_ptr_t.c)
 *     ??$WaitForCompletion@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@V?$ComPtr@UIGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@WRL@Microsoft@@@wil@@YA?AV?$ComPtr@UIGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@WRL@Microsoft@@PEAU?$IAsyncOperation@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Windows@@@Foundation@Windows@@W4tagCOWAIT_FLAGS@@@Z @ 0x180057678 (--$WaitForCompletion@PEAVGetDefaultSignInAccountResult@Web@Authentication@Security@Internal@Wind.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
bool __fastcall CreativeFramework::Actions::IsMsaConnected(CreativeFramework::Actions *this)
{
  __int64 v1; // rbx
  HSTRING_HEADER *v2; // rdi
  HSTRING_HEADER *v3; // rsi
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rbx
  const WCHAR *v7; // rcx
  int v8; // eax
  int v9; // eax
  __int64 *v10; // rax
  __int64 v11; // rdi
  const WCHAR *v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  int v15; // eax
  int v16; // eax
  signed __int64 v17; // rax
  bool v18; // si
  __int64 v20; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v21; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+40h] [rbp-A8h] BYREF
  __int64 v23; // [rsp+48h] [rbp-A0h] BYREF
  const WCHAR *v24; // [rsp+50h] [rbp-98h] BYREF
  const WCHAR *v25; // [rsp+58h] [rbp-90h] BYREF
  __int64 v26; // [rsp+60h] [rbp-88h] BYREF
  __int64 v27; // [rsp+68h] [rbp-80h] BYREF
  _QWORD v28[4]; // [rsp+70h] [rbp-78h] BYREF
  HSTRING_HEADER v29; // [rsp+90h] [rbp-58h] BYREF
  HSTRING_HEADER v30; // [rsp+B0h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v28[1] = -2LL;
  v24 = L"https://login.microsoft.com";
  v25 = L"consumers";
  wil::GetActivationFactory<Windows::Security::Authentication::Web::Core::IWebAuthenticationCoreManagerStatics>(v28);
  v1 = v28[0];
  v2 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v30, &v25);
  v3 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v29, &v24);
  v20 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, PVOID, PVOID, __int64 *))(*(_QWORD *)v1 + 96LL))(
         v1,
         v3[1].Reserved.Reserved1,
         v2[1].Reserved.Reserved1,
         &v20);
  if ( v4 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x34,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
      (const char *)(unsigned int)v4);
  v5 = (__int64 *)wil::WaitForCompletion<Windows::Security::Credentials::WebAccountProvider *,Microsoft::WRL::ComPtr<Windows::Security::Credentials::IWebAccountProvider>>(
                    &v24,
                    v20);
  v6 = *v5;
  *v5 = 0LL;
  v28[2] = v6;
  v7 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v7 + 16LL))(v7);
  }
  if ( v6 )
  {
    wil::GetActivationFactory<IInspectable>(&v27);
    wil::com_ptr_t<IInspectable,wil::err_exception_policy>::query<Windows::Internal::Security::Authentication::Web::ITokenBrokerInternalStatics>(
      &v27,
      &v21);
    *(GUID *)&v29.Reserved.Reserved1 = GUID_00000000_0000_0000_0000_000000000000;
    v8 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING_HEADER *))(*(_QWORD *)v21 + 264LL))(v21, v6, &v29);
    if ( v8 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x3E,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v8);
    v23 = 0LL;
    v9 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v21 + 232LL))(v21, &v23);
    if ( v9 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x42,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v9);
    v10 = (__int64 *)wil::WaitForCompletion<Windows::Internal::Security::Authentication::Web::GetDefaultSignInAccountResult *,Microsoft::WRL::ComPtr<Windows::Internal::Security::Authentication::Web::IGetDefaultSignInAccountResult>>(
                       &v25,
                       v23);
    v11 = *v10;
    *v10 = 0LL;
    v28[3] = v11;
    v12 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(const WCHAR *))(*(_QWORD *)v12 + 16LL))(v12);
    }
    v22 = 0LL;
    v13 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v11 + 48LL))(v11, &v22);
    if ( v13 < 0 )
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x45,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
        (const char *)(unsigned int)v13);
    v14 = v22;
    if ( v22 )
    {
      v26 = 0LL;
      v15 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v22 + 48LL))(v22, &v26);
      if ( v15 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x49,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
          (const char *)(unsigned int)v15);
      if ( v26 )
      {
        *(GUID *)&v30.Reserved.Reserved1 = GUID_00000000_0000_0000_0000_000000000000;
        v16 = (*(__int64 (__fastcall **)(__int64, __int64, HSTRING_HEADER *))(*(_QWORD *)v21 + 264LL))(v21, v26, &v30);
        if ( v16 < 0 )
          wil::details::in1diag3::_Throw_Hr(
            retaddr,
            (void *)0x4E,
            (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\actionhelpers\\appinstaller.cpp",
            (const char *)(unsigned int)v16);
        v17 = (char *)v29.Reserved.Reserved1 - (char *)v30.Reserved.Reserved1;
        if ( v29.Reserved.Reserved1 == v30.Reserved.Reserved1 )
          v17 = *(_QWORD *)&v29.Reserved.Reserved2[8] - *(_QWORD *)&v30.Reserved.Reserved2[8];
        v18 = v17 == 0;
        if ( v26 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v26 + 16LL))(v26);
        if ( v22 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
        if ( v23 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
        if ( v21 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
        if ( v27 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
        if ( v20 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
        if ( v28[0] )
          (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
        return v18;
      }
      v14 = v22;
    }
    if ( v14 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
    if ( v23 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
    if ( v21 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    if ( v27 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v20 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
  if ( v28[0] )
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v28[0] + 16LL))(v28[0]);
  return 0;
}
