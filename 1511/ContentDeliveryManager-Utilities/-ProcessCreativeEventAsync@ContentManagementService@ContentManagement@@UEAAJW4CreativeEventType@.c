/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18000E350
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18000F150 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800025D4 (-Return_HrPreRelease@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIContentManagementBroker@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180004350 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIContentManag.c)
 *     ?QueryInterface@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UICreativeEventReportedCache@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAJAEBU_GUID@@PEAPEAX@Z @ 0x180006C80 (-QueryInterface@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UICreat.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180006F80 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIProcessCreat.c)
 *     ??0AppContainerCreativeEventReportedCache@ContentManagement@@QEAA@XZ @ 0x180007CEC (--0AppContainerCreativeEventReportedCache@ContentManagement@@QEAA@XZ.c)
 *     ?_Add_vtordisp2@?$basic_ios@GU?$char_traits@G@std@@@std@@UEAAXXZ @ 0x18000B1C0 (-_Add_vtordisp2@-$basic_ios@GU-$char_traits@G@std@@@std@@UEAAXXZ.c)
 *     _lambda_31b30073c32c2d01143855768ac2b990_::_lambda_31b30073c32c2d01143855768ac2b990_ @ 0x18000E750 (_lambda_31b30073c32c2d01143855768ac2b990_--_lambda_31b30073c32c2d01143855768ac2b990_.c)
 *     _lambda_31b30073c32c2d01143855768ac2b990_::__lambda_31b30073c32c2d01143855768ac2b990_ @ 0x18000F088 (_lambda_31b30073c32c2d01143855768ac2b990_--__lambda_31b30073c32c2d01143855768ac2b990_.c)
 *     ??$MakeAsyncAction@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0x15bf3041@@3QBGB$E?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@VComTaskPoolHandler@Internal@Windows@@V_lambda_31b30073c32c2d01143855768ac2b990_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@AEBV_lambda_31b30073c32c2d01143855768ac2b990_@@@Z @ 0x180018B2C (--$MakeAsyncAction@U-$AsyncCausalityOptions@$1-ProcessCreativeEventOperationName@-A0x15bf3041@@3.c)
 *     ?IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z @ 0x180022084 (-IsCallingProcessAppContainer@CallerIdentity@@YAJW4RUNTIMEBROKER_CALLERIDENTITY_CHECK@@PEA_N@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x180027FA8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall ContentManagement::ContentManagementService::ProcessCreativeEventAsync(
        __int64 a1,
        int a2,
        HSTRING a3,
        HSTRING a4,
        HSTRING string,
        HSTRING a6,
        __int64 a7,
        __int64 a8,
        __int64 a9)
{
  HSTRING v10; // r13
  HRESULT v11; // eax
  int v12; // esi
  HSTRING v13; // r12
  HRESULT v14; // eax
  HSTRING v15; // r15
  HRESULT v16; // eax
  HSTRING v17; // r14
  HRESULT v18; // eax
  int IsCallingProcessAppContainer; // eax
  unsigned __int64 v20; // r9
  __int64 v21; // rdx
  ContentManagement::AppContainerCreativeEventReportedCache *v22; // rax
  ContentManagement::AppContainerCreativeEventReportedCache *v23; // rbx
  __int64 v24; // rdi
  __int64 v25; // rdx
  volatile signed __int64 *v26; // rbx
  signed __int64 v27; // rax
  signed __int64 v28; // rtt
  __int64 v29; // rax
  __int64 v30; // r8
  __int64 v32; // [rsp+50h] [rbp-B0h] BYREF
  volatile signed __int64 *v33; // [rsp+58h] [rbp-A8h] BYREF
  HSTRING v34; // [rsp+60h] [rbp-A0h] BYREF
  char v35; // [rsp+68h] [rbp-98h]
  HSTRING v36; // [rsp+70h] [rbp-90h] BYREF
  char v37; // [rsp+78h] [rbp-88h]
  _DWORD v38[4]; // [rsp+80h] [rbp-80h] BYREF
  HSTRING v39; // [rsp+90h] [rbp-70h] BYREF
  char v40; // [rsp+98h] [rbp-68h]
  int v41[2]; // [rsp+A0h] [rbp-60h] BYREF
  char v42; // [rsp+A8h] [rbp-58h]
  __int64 v43; // [rsp+B0h] [rbp-50h] BYREF
  HSTRING v44; // [rsp+B8h] [rbp-48h] BYREF
  HSTRING v45; // [rsp+C0h] [rbp-40h] BYREF
  HSTRING v46; // [rsp+C8h] [rbp-38h] BYREF
  HSTRING newString[3]; // [rsp+D0h] [rbp-30h] BYREF
  _BYTE v48[152]; // [rsp+E8h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]
  int v51; // [rsp+198h] [rbp+98h] BYREF
  char v52; // [rsp+1A0h] [rbp+A0h] BYREF

  v51 = a2;
  newString[2] = (HSTRING)-2LL;
  v10 = 0LL;
  v42 = 0;
  v11 = WindowsDuplicateString(a3, newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_HrPreRelease(
      retaddr,
      281LL,
      (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_49;
  }
  v10 = newString[0];
  *(HSTRING *)v41 = newString[0];
  WindowsDeleteString(0LL);
  v13 = 0LL;
  v40 = 0;
  v14 = WindowsDuplicateString(a4, &v46);
  v12 = v14;
  if ( v14 >= 0 )
  {
    v13 = v46;
    v39 = v46;
    WindowsDeleteString(0LL);
    v15 = 0LL;
    v36 = 0LL;
    v37 = 0;
    if ( string )
    {
      v16 = WindowsDuplicateString(string, &v45);
      v12 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          288LL,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v16);
LABEL_43:
        if ( v15 )
          WindowsDeleteString(v15);
        goto LABEL_46;
      }
      v15 = v45;
      v36 = v45;
      WindowsDeleteString(0LL);
    }
    v17 = 0LL;
    v34 = 0LL;
    v35 = 0;
    if ( a6 )
    {
      v18 = WindowsDuplicateString(a6, &v44);
      v12 = v18;
      if ( v18 < 0 )
      {
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          294LL,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v18);
LABEL_41:
        if ( v17 )
          WindowsDeleteString(v17);
        goto LABEL_43;
      }
      v17 = v44;
      v34 = v44;
      WindowsDeleteString(0LL);
    }
    v32 = 0LL;
    IsCallingProcessAppContainer = CallerIdentity::IsCallingProcessAppContainer(2LL, &v52);
    v12 = IsCallingProcessAppContainer;
    if ( IsCallingProcessAppContainer < 0 )
    {
      v20 = (unsigned int)IsCallingProcessAppContainer;
      v21 = 258LL;
LABEL_13:
      wil::details::in1diag3::Return_HrPreRelease(
        retaddr,
        v21,
        (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)v20);
LABEL_22:
      if ( v12 >= 0 )
      {
        v24 = a7;
        v43 = a7;
        if ( a7 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
        v25 = a1 - 40;
        v26 = (volatile signed __int64 *)(a1 - 40);
        v33 = (volatile signed __int64 *)(a1 - 40);
        if ( a1 != 40 )
        {
          v27 = *(_QWORD *)(v25 + 80);
          newString[1] = (HSTRING)v27;
          while ( v27 >= 0 )
          {
            v28 = v27;
            v27 = _InterlockedCompareExchange64((volatile signed __int64 *)(v25 + 80), v27 + 1, v27);
            if ( v28 == v27 )
              goto LABEL_31;
          }
          _InterlockedIncrement((volatile signed __int32 *)(2 * v27 + 16));
LABEL_31:
          v26 = v33;
        }
        v29 = lambda_31b30073c32c2d01143855768ac2b990_::_lambda_31b30073c32c2d01143855768ac2b990_(
                (unsigned int)v48,
                v25,
                (unsigned int)&v33,
                (unsigned int)&v51,
                (__int64)v41,
                (__int64)&v39,
                (__int64)&v36,
                (__int64)&v34,
                (__int64)&v43,
                (__int64)&v32);
        v38[0] = 3;
        v38[1] = 130;
        v38[2] = 0;
        v12 = Windows::Internal::MakeAsyncAction<Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>,Windows::Internal::ComTaskPoolHandler,_lambda_31b30073c32c2d01143855768ac2b990_>(
                v38,
                a9,
                v30,
                v29);
        lambda_31b30073c32c2d01143855768ac2b990_::__lambda_31b30073c32c2d01143855768ac2b990_(v48);
        if ( v12 < 0 )
          wil::details::in1diag3::Return_HrPreRelease(
            retaddr,
            341LL,
            (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
            (const char *)(unsigned int)v12);
        if ( v26 )
          Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v26);
        if ( v24 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v24 + 16LL))(v24);
        v17 = v34;
        v15 = v36;
        v13 = v39;
        v10 = *(HSTRING *)v41;
      }
      else
      {
        wil::details::in1diag3::Return_HrPreRelease(
          retaddr,
          298LL,
          (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v12);
      }
      if ( v32 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v32 + 16LL))(v32);
      goto LABEL_41;
    }
    if ( v52 )
    {
      v32 = 0LL;
      v22 = (ContentManagement::AppContainerCreativeEventReportedCache *)operator new(
                                                                           0x40uLL,
                                                                           (const struct std::nothrow_t *)&std::nothrow);
      if ( !v22 )
      {
        v12 = -2147024882;
LABEL_20:
        v20 = (unsigned int)v12;
        v21 = 261LL;
        goto LABEL_13;
      }
      v23 = ContentManagement::AppContainerCreativeEventReportedCache::AppContainerCreativeEventReportedCache(v22);
      v12 = Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::ICreativeEventReportedCache,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::QueryInterface(
              (__int64)v23,
              &GUID_d78a1df0_8b05_4341_bb0a_c4447a03a912,
              &v32);
      if ( v23 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IContentManagementBroker,Microsoft::WRL::Details::Nil>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release((volatile signed __int64 *)v23);
      if ( v12 < 0 )
        goto LABEL_20;
    }
    v12 = 0;
    goto LABEL_22;
  }
  wil::details::in1diag3::Return_HrPreRelease(
    retaddr,
    283LL,
    (__int64)"shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v14);
LABEL_46:
  if ( v13 )
    WindowsDeleteString(v13);
LABEL_49:
  if ( v10 )
    WindowsDeleteString(v10);
  return (unsigned int)v12;
}
