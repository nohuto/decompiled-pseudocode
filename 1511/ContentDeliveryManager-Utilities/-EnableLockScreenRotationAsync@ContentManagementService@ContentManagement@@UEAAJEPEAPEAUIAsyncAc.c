/*
 * XREFs of ?EnableLockScreenRotationAsync@ContentManagementService@ContentManagement@@UEAAJEPEAPEAUIAsyncAction@Foundation@Windows@@@Z @ 0x18000F350
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006F80 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIProcessCreat.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     ??$Make@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@VComTaskPoolHandler@23@AEBQEBGAEAW4TrustLevel@@@Details@WRL@Microsoft@@YA?AV?$ComPtr@V?$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedHandler@23@VCNoResult@Internal@3@VComTaskPoolHandler@63@UINilDelegate@63@U?$AsyncCausalityOptions@$1?EnableLockScreenRotationOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@@Internal@Windows@@@12@$$QEAVComTaskPoolHandler@Internal@Windows@@AEBQEBGAEAW4TrustLevel@@@Z @ 0x18001F3A8 (--$Make@V-$AsyncOperation@UIAsyncAction@Foundation@Windows@@UIAsyncActionCompletedH_ea_18001F3A8.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall ContentManagement::ContentManagementService::EnableLockScreenRotationAsync(
        ContentManagement::ContentManagementService *this,
        char a2,
        struct Windows::Foundation::IAsyncAction **a3)
{
  volatile signed __int64 *v5; // rbx
  signed __int64 v6; // rax
  signed __int64 v7; // rtt
  signed __int64 v8; // rax
  signed __int64 v9; // rtt
  _QWORD *v10; // r15
  signed __int64 v11; // rax
  signed __int64 v12; // rtt
  signed int v13; // r14d
  __int64 v14; // rdi
  struct Windows::Foundation::IAsyncAction *v15; // rax
  signed __int64 v17; // [rsp+20h] [rbp-40h]
  signed __int64 v18; // [rsp+28h] [rbp-38h]
  _QWORD v19[2]; // [rsp+30h] [rbp-30h] BYREF
  _DWORD v20[4]; // [rsp+40h] [rbp-20h] BYREF
  volatile signed __int64 *v21; // [rsp+50h] [rbp-10h]
  char v22; // [rsp+58h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+38h]
  volatile signed __int64 *v24; // [rsp+A0h] [rbp+40h]
  int v25; // [rsp+A8h] [rbp+48h] BYREF
  __int64 v26; // [rsp+B0h] [rbp+50h] BYREF
  signed __int64 v27; // [rsp+B8h] [rbp+58h]

  v19[1] = -2LL;
  v5 = (volatile signed __int64 *)((char *)this - 48);
  v24 = (volatile signed __int64 *)((char *)this - 48);
  if ( this != (ContentManagement::ContentManagementService *)48 )
  {
    v6 = *((_QWORD *)v5 + 10);
    v27 = v6;
    while ( v6 >= 0 )
    {
      v7 = v6;
      v6 = _InterlockedCompareExchange64(v5 + 10, v6 + 1, v6);
      if ( v7 == v6 )
        goto LABEL_6;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v6 + 16));
LABEL_6:
    v5 = (volatile signed __int64 *)((char *)this - 48);
  }
  v21 = v5;
  if ( v5 )
  {
    v8 = *((_QWORD *)v5 + 10);
    v17 = v8;
    while ( v8 >= 0 )
    {
      v9 = v8;
      v8 = _InterlockedCompareExchange64(v5 + 10, v8 + 1, v8);
      if ( v9 == v8 )
        goto LABEL_12;
    }
    _InterlockedIncrement((volatile signed __int32 *)(2 * v8 + 16));
LABEL_12:
    v5 = (volatile signed __int64 *)((char *)this - 48);
  }
  v22 = a2;
  v20[0] = 3;
  v20[1] = 128;
  v20[2] = 0;
  v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  if ( v10 )
  {
    *v10 = &Windows::Internal::COperationLambda0<Windows::Internal::CCallAsyncLambda<_lambda_9e1a816c4af54f68571285bcfed83691_>,Windows::Internal::CNoResult>::`vftable';
    v10[1] = v5;
    if ( v5 )
    {
      v11 = *((_QWORD *)v5 + 10);
      v18 = v11;
      while ( v11 >= 0 )
      {
        v12 = v11;
        v11 = _InterlockedCompareExchange64(v5 + 10, v11 + 1, v11);
        if ( v12 == v11 )
          goto LABEL_19;
      }
      _InterlockedIncrement((volatile signed __int32 *)(2 * v11 + 16));
LABEL_19:
      v5 = v24;
    }
    *((_BYTE *)v10 + 16) = a2;
  }
  else
  {
    v10 = 0LL;
  }
  v25 = 0;
  v19[0] = L"Windows.Foundation.IAsyncAction";
  *a3 = 0LL;
  v13 = v10 == 0LL ? 0x8007000E : 0;
  if ( v10 )
  {
    ((void (__fastcall *)(__int64 *, _DWORD *, _QWORD *, int *, signed __int64, signed __int64))Microsoft::WRL::Details::Make<Windows::Internal::AsyncOperation<Windows::Foundation::IAsyncAction,Windows::Foundation::IAsyncActionCompletedHandler,Windows::Internal::CNoResult,Windows::Internal::ComTaskPoolHandler,Windows::Internal::INilDelegate,Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::EnableLockScreenRotationOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>>,Windows::Internal::ComTaskPoolHandler,unsigned short const * const &,enum TrustLevel &>)(
      &v26,
      v20,
      v19,
      &v25,
      v17,
      v18);
    v14 = v26;
    v13 = v26 == 0 ? 0x8007000E : 0;
    if ( v26 )
    {
      *(_QWORD *)(v26 + 208) = v10;
      v13 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 104LL))(v14 + 8);
      v10 = 0LL;
      if ( v13 < 0 )
      {
LABEL_30:
        if ( v14 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 8) + 16LL))(v14 + 8);
        goto LABEL_32;
      }
      v15 = (struct Windows::Foundation::IAsyncAction *)v14;
      v14 = 0LL;
      v26 = 0LL;
      if ( v15 )
        v15 = (struct Windows::Foundation::IAsyncAction *)((char *)v15 + 136);
      *a3 = v15;
    }
    if ( v10 )
      (*(void (__fastcall **)(_QWORD *, __int64))*v10)(v10, 1LL);
    goto LABEL_30;
  }
LABEL_32:
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v5);
  if ( v13 < 0 )
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      379LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v13);
  if ( v5 )
    Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v5);
  return (unsigned int)v13;
}
