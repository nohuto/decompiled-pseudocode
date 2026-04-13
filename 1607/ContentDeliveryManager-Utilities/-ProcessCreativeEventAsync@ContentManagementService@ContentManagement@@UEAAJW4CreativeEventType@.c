/*
 * XREFs of ?ProcessCreativeEventAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@111PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18001F5F0
 * Callers:
 *     ?ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventType@2@PEAUHSTRING__@@PEAU?$ITypedEventHandler@PEAUIInspectable@@PEAUHSTRING__@@@Foundation@Windows@@PEAUICreativeEventReportedCache@2@PEAPEAUIAsyncAction@67@@Z @ 0x18001FF60 (-ProcessCreativeEventUriAsync@ContentManagementService@ContentManagement@@UEAAJW4CreativeEventTy.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002BD8 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Release@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x180019640 (-Release@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIProcessCreat.c)
 *     ?AddRef@?$RuntimeClass@U?$InterfaceList@VFtmBase@WRL@Microsoft@@U?$InterfaceList@UIProcessCreativeEvent@ContentManagement@@U?$InterfaceList@UIProcessLockScreenEvent@ContentManagement@@U?$InterfaceList@UIProcessStartMenuEvent@ContentManagement@@U?$InterfaceList@UIProcessContextualSuggestionsEvent@ContentManagement@@VNil@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@WRL@Microsoft@@@Details@23@@Details@WRL@Microsoft@@U?$RuntimeClassFlags@$02@34@$00$00$0A@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1800196E0 (-AddRef@-$RuntimeClass@U-$InterfaceList@VFtmBase@WRL@Microsoft@@U-$InterfaceList@UIProcessCreati.c)
 *     ?GetEventCacheIfNeeded@ContentManagement@@YAJPEAPEAUICreativeEventReportedCache@1@@Z @ 0x18001F310 (-GetEventCacheIfNeeded@ContentManagement@@YAJPEAPEAUICreativeEventReportedCache@1@@Z.c)
 *     _lambda_d1d6df3afd909720884b15ba4832b47d_::__lambda_d1d6df3afd909720884b15ba4832b47d_ @ 0x18001FEC4 (_lambda_d1d6df3afd909720884b15ba4832b47d_--__lambda_d1d6df3afd909720884b15ba4832b47d_.c)
 *     ??$MakeAsyncAction@U?$AsyncCausalityOptions@$1?ProcessCreativeEventOperationName@?A0xb8965cb7@@3QBGB$1?GUID_CAUSALITY_WINDOWS_PLATFORM_ID@@3U_GUID@@B$01@WRL@Microsoft@@VComTaskPoolHandler@Internal@Windows@@V_lambda_d1d6df3afd909720884b15ba4832b47d_@@@Internal@Windows@@YAJ$$QEAVComTaskPoolHandler@01@PEAPEAUIAsyncAction@Foundation@1@W4TrustLevel@@AEBV_lambda_d1d6df3afd909720884b15ba4832b47d_@@@Z @ 0x180029D8C (--$MakeAsyncAction@U-$AsyncCausalityOptions@$1-ProcessCreativeEventOperationName@-A0xb8965cb7@@3.c)
 *     _guard_dispatch_icall_nop @ 0x1800597C0 (_guard_dispatch_icall_nop.c)
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
  HSTRING v10; // rbx
  HRESULT v11; // eax
  int v12; // esi
  HSTRING v13; // r13
  HRESULT v14; // eax
  struct ContentManagement::ICreativeEventReportedCache **v15; // rdx
  HSTRING v16; // r12
  HRESULT v17; // eax
  HSTRING v18; // r15
  HRESULT v19; // eax
  int EventCacheIfNeeded; // eax
  __int64 v21; // r8
  HSTRING v22; // rdi
  volatile signed __int64 *v23; // rbx
  HSTRING newString; // [rsp+28h] [rbp-D9h] BYREF
  int v26; // [rsp+30h] [rbp-D1h] BYREF
  __int64 v27; // [rsp+34h] [rbp-CDh]
  HSTRING v28; // [rsp+40h] [rbp-C1h]
  __int64 v29; // [rsp+48h] [rbp-B9h]
  HSTRING v30; // [rsp+50h] [rbp-B1h]
  __int64 v31; // [rsp+58h] [rbp-A9h]
  HSTRING v32; // [rsp+60h] [rbp-A1h]
  __int64 v33; // [rsp+68h] [rbp-99h]
  HSTRING v34; // [rsp+70h] [rbp-91h]
  __int64 v35; // [rsp+78h] [rbp-89h]
  _QWORD v36[2]; // [rsp+80h] [rbp-81h] BYREF
  int v37; // [rsp+90h] [rbp-71h]
  HSTRING v38; // [rsp+98h] [rbp-69h]
  char v39; // [rsp+A0h] [rbp-61h]
  HSTRING v40; // [rsp+A8h] [rbp-59h]
  char v41; // [rsp+B0h] [rbp-51h]
  HSTRING v42; // [rsp+B8h] [rbp-49h]
  char v43; // [rsp+C0h] [rbp-41h]
  HSTRING v44; // [rsp+C8h] [rbp-39h]
  char v45; // [rsp+D0h] [rbp-31h]
  __int64 v46; // [rsp+D8h] [rbp-29h]
  HSTRING v47; // [rsp+E0h] [rbp-21h]
  __int64 v48; // [rsp+E8h] [rbp-19h]
  __int64 v49; // [rsp+F0h] [rbp-11h]
  __int64 v50; // [rsp+F8h] [rbp-9h]
  wil::details::in1diag3 *retaddr; // [rsp+140h] [rbp+3Fh]
  HSTRING v54; // [rsp+158h] [rbp+57h]

  v48 = -2LL;
  v10 = 0LL;
  LOBYTE(v33) = 0;
  v11 = WindowsDuplicateString(a3, &newString);
  v12 = v11;
  if ( v11 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x13E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
      (const char *)(unsigned int)v11);
    goto LABEL_40;
  }
  v10 = newString;
  v54 = newString;
  v32 = newString;
  WindowsDeleteString(0LL);
  v13 = 0LL;
  LOBYTE(v35) = 0;
  v14 = WindowsDuplicateString(a4, &newString);
  v12 = v14;
  if ( v14 >= 0 )
  {
    v13 = newString;
    v34 = newString;
    WindowsDeleteString(0LL);
    v16 = 0LL;
    v28 = 0LL;
    LOBYTE(v29) = 0;
    if ( string )
    {
      v17 = WindowsDuplicateString(string, &newString);
      v12 = v17;
      if ( v17 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x145,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v17);
LABEL_34:
        if ( v16 )
          WindowsDeleteString(v16);
        goto LABEL_37;
      }
      v16 = newString;
      v28 = newString;
      WindowsDeleteString(0LL);
    }
    v18 = 0LL;
    v30 = 0LL;
    LOBYTE(v31) = 0;
    if ( a6 )
    {
      v19 = WindowsDuplicateString(a6, &newString);
      v12 = v19;
      if ( v19 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x14B,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v19);
LABEL_32:
        if ( v18 )
          WindowsDeleteString(v18);
        goto LABEL_34;
      }
      v18 = newString;
      v30 = newString;
      WindowsDeleteString(0LL);
    }
    newString = 0LL;
    EventCacheIfNeeded = ContentManagement::GetEventCacheIfNeeded((ContentManagement *)&newString, v15);
    v12 = EventCacheIfNeeded;
    v22 = newString;
    if ( EventCacheIfNeeded >= 0 )
    {
      v49 = a7;
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
      v23 = (volatile signed __int64 *)(a1 - 40);
      v50 = a1 - 40;
      if ( a1 != 40 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef(a1 - 40);
      v36[0] = a1 - 40;
      v36[1] = a1 - 40;
      if ( a1 != 40 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::AddRef((__int64)v23);
      v37 = a2;
      v38 = v54;
      v32 = 0LL;
      v39 = 0;
      LOBYTE(v33) = 1;
      v40 = v13;
      v13 = 0LL;
      v34 = 0LL;
      v41 = 0;
      LOBYTE(v35) = 1;
      v42 = v16;
      v16 = 0LL;
      v28 = 0LL;
      v43 = 0;
      LOBYTE(v29) = 1;
      v44 = v18;
      v18 = 0LL;
      v30 = 0LL;
      v45 = 0;
      LOBYTE(v31) = 1;
      v46 = a7;
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 8LL))(a7);
      v47 = v22;
      if ( v22 )
        (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 8LL))(v22);
      v26 = 3;
      v27 = 130LL;
      v12 = Windows::Internal::MakeAsyncAction<Microsoft::WRL::AsyncCausalityOptions<&unsigned short const near * const `anonymous namespace'::ProcessCreativeEventOperationName,&_GUID const GUID_CAUSALITY_WINDOWS_PLATFORM_ID,2>,Windows::Internal::ComTaskPoolHandler,_lambda_d1d6df3afd909720884b15ba4832b47d_>(
              &v26,
              a9,
              v21,
              v36);
      lambda_d1d6df3afd909720884b15ba4832b47d_::__lambda_d1d6df3afd909720884b15ba4832b47d_(v36);
      if ( v12 < 0 )
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x17A,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
          (const char *)(unsigned int)v12);
      if ( a1 != 40 )
        Microsoft::WRL::Details::RuntimeClass<Microsoft::WRL::Details::InterfaceList<Microsoft::WRL::FtmBase,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessCreativeEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessLockScreenEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessStartMenuEvent,Microsoft::WRL::Details::InterfaceList<ContentManagement::IProcessContextualSuggestionsEvent,Microsoft::WRL::Details::Nil>>>>>,Microsoft::WRL::RuntimeClassFlags<3>,1,1,0>::Release(v23);
      if ( a7 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)a7 + 16LL))(a7);
      v10 = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x14F,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
        (const char *)(unsigned int)EventCacheIfNeeded);
    }
    if ( v22 )
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v22 + 16LL))(v22);
    goto LABEL_32;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x140,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementservice.cpp",
    (const char *)(unsigned int)v14);
LABEL_37:
  if ( v13 )
    WindowsDeleteString(v13);
LABEL_40:
  if ( v10 )
    WindowsDeleteString(v10);
  return (unsigned int)v12;
}
