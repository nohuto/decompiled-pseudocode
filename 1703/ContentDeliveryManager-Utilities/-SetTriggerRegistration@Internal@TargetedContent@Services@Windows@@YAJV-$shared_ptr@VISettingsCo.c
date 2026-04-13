/*
 * XREFs of ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004D4A8
 * Callers:
 *     ?RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@PEAUHSTRING__@@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@V?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@9@@Z @ 0x180047CA0 (-RegisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800136E0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x18001DF5C (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x1800328B8 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180038088 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004C1A0 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004C520 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAUHSTRING__@@@Z @ 0x18004D454 (-SetStringValue@Internal@TargetedContent@Services@Windows@@YAXAEAVPropertySetHelper@Triggers@Cre.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004DF88 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x180069330 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9 #try_helpers=1
__int64 __fastcall Windows::Services::TargetedContent::Internal::SetTriggerRegistration(_QWORD *a1, __int64 a2)
{
  HRESULT v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  wchar_t *v8; // rsi
  HSTRING v9; // r9
  int v10; // eax
  wchar_t *v11; // rsi
  HSTRING v12; // r9
  int v13; // eax
  wchar_t *v14; // rsi
  HSTRING v15; // r9
  int v16; // eax
  wchar_t *v17; // rsi
  HSTRING v18; // r9
  int v19; // eax
  wchar_t *v20; // rsi
  HSTRING v21; // r9
  int v22; // eax
  wchar_t *v23; // rsi
  HSTRING v24; // r9
  int v25; // eax
  wchar_t *v26; // rsi
  HSTRING v27; // r9
  int v28; // eax
  wchar_t *v29; // rsi
  HSTRING v30; // r9
  int v31; // eax
  wchar_t *v32; // rsi
  HSTRING v33; // r9
  int v34; // eax
  wchar_t *v35; // rsi
  HSTRING v36; // r9
  int v37; // eax
  wchar_t **i; // rax
  wchar_t *Reserved1; // rsi
  HSTRING v40; // r9
  int v41; // eax
  volatile signed __int32 *v42; // rsi
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  struct Windows::Foundation::Collections::IPropertySet *v46; // rcx
  volatile signed __int32 *v47; // rsi
  unsigned int v49; // eax
  volatile signed __int32 *v50; // rsi
  HSTRING string; // [rsp+20h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+28h] [rbp-C0h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v53; // [rsp+30h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+38h] [rbp-B0h] BYREF
  __int64 v55; // [rsp+40h] [rbp-A8h]
  _DWORD v56[2]; // [rsp+50h] [rbp-98h] BYREF
  HSTRING v57; // [rsp+58h] [rbp-90h] BYREF
  wchar_t *v58; // [rsp+60h] [rbp-88h] BYREF
  _QWORD *v59; // [rsp+68h] [rbp-80h]
  __int64 v60; // [rsp+70h] [rbp-78h] BYREF
  volatile signed __int32 *v61; // [rsp+78h] [rbp-70h]
  __int64 v62; // [rsp+80h] [rbp-68h]
  HSTRING_HEADER v63; // [rsp+88h] [rbp-60h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-48h] BYREF
  HSTRING_HEADER v65; // [rsp+A8h] [rbp-40h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+0h]

  v62 = -2LL;
  v59 = a1;
  v53 = 0LL;
  v52 = 0LL;
  v64 = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Storage.ApplicationDataCompositeValue", 0x2Du, &v63, (HSTRING *)&v64);
  if ( v4 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4);
  v5 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
         v64,
         (__int64 *)&v53);
  if ( v5 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x139,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v5);
  v6 = (**(__int64 (__fastcall ***)(struct Windows::Foundation::Collections::IPropertySet *, GUID *, __int64 *))v53)(
         v53,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v52);
  if ( v6 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x13A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v6);
  CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
    (CreativeFramework::Triggers::PropertySetHelper *)&v54,
    v53);
  WindowsDeleteString(0LL);
  string = 0LL;
  v7 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 48LL))(a2, &string);
  if ( v7 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x13E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v7);
  v8 = (wchar_t *)string;
  if ( !WindowsIsStringEmpty(string) )
    Windows::Services::TargetedContent::Internal::SetStringValue(
      (Windows::Services::TargetedContent::Internal *)&v54,
      L"Action",
      v8,
      v9);
  WindowsDeleteString(string);
  string = 0LL;
  v10 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 160LL))(a2, &string);
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x140,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v10);
  v11 = (wchar_t *)string;
  if ( !WindowsIsStringEmpty(string) )
    Windows::Services::TargetedContent::Internal::SetStringValue(
      (Windows::Services::TargetedContent::Internal *)&v54,
      L"CreativeId",
      v11,
      v12);
  WindowsDeleteString(string);
  string = 0LL;
  v13 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 176LL))(a2, &string);
  if ( v13 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x142,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v13);
  v14 = (wchar_t *)string;
  if ( !WindowsIsStringEmpty(string) )
    Windows::Services::TargetedContent::Internal::SetStringValue(
      (Windows::Services::TargetedContent::Internal *)&v54,
      L"Placement",
      v14,
      v15);
  WindowsDeleteString(string);
  string = 0LL;
  v16 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 64LL))(a2, &string);
  if ( v16 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x144,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v16);
  v17 = (wchar_t *)string;
  if ( !WindowsIsStringEmpty(string) )
    Windows::Services::TargetedContent::Internal::SetStringValue(
      (Windows::Services::TargetedContent::Internal *)&v54,
      L"Id",
      v17,
      v18);
  WindowsDeleteString(string);
  string = 0LL;
  v19 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 96LL))(a2, &string);
  if ( v19 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x146,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v19);
  v20 = (wchar_t *)string;
  if ( !WindowsIsStringEmpty(string) )
    Windows::Services::TargetedContent::Internal::SetStringValue(
      (Windows::Services::TargetedContent::Internal *)&v54,
      L"Predicate",
      v20,
      v21);
  WindowsDeleteString(string);
  string = 0LL;
  v22 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 144LL))(a2, &string);
  if ( v22 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x148,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v22);
  v23 = (wchar_t *)string;
  if ( !WindowsIsStringEmpty(string) )
    Windows::Services::TargetedContent::Internal::SetStringValue(
      (Windows::Services::TargetedContent::Internal *)&v54,
      L"Intent",
      v23,
      v24);
  WindowsDeleteString(string);
  string = 0LL;
  v25 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 128LL))(a2, &string);
  if ( v25 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x14A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v25);
  v26 = (wchar_t *)string;
  if ( !WindowsIsStringEmpty(string) )
    Windows::Services::TargetedContent::Internal::SetStringValue(
      (Windows::Services::TargetedContent::Internal *)&v54,
      L"Predecessor",
      v26,
      v27);
  WindowsDeleteString(string);
  string = 0LL;
  v28 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 112LL))(a2, &string);
  if ( v28 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x14C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v28);
  v29 = (wchar_t *)string;
  if ( !WindowsIsStringEmpty(string) )
    Windows::Services::TargetedContent::Internal::SetStringValue(
      (Windows::Services::TargetedContent::Internal *)&v54,
      L"Path",
      v29,
      v30);
  WindowsDeleteString(string);
  string = 0LL;
  v31 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 192LL))(a2, &string);
  if ( v31 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x14E,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v31);
  v32 = (wchar_t *)string;
  if ( !WindowsIsStringEmpty(string) )
    Windows::Services::TargetedContent::Internal::SetStringValue(
      (Windows::Services::TargetedContent::Internal *)&v54,
      L"ruleFilePath",
      v32,
      v33);
  WindowsDeleteString(string);
  string = 0LL;
  v34 = (*(__int64 (__fastcall **)(__int64, HSTRING *))(*(_QWORD *)a2 + 208LL))(a2, &string);
  if ( v34 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x150,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v34);
  v35 = (wchar_t *)string;
  if ( !WindowsIsStringEmpty(string) )
    Windows::Services::TargetedContent::Internal::SetStringValue(
      (Windows::Services::TargetedContent::Internal *)&v54,
      L"event",
      v35,
      v36);
  v37 = (*(__int64 (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)a2 + 80LL))(a2, v56);
  if ( v37 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x153,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v37);
  for ( i = (wchar_t **)&unk_1800F3440; i != &off_1800F34D0; i += 2 )
  {
    if ( *(_DWORD *)i == v56[0] )
    {
      v58 = i[1];
      Reserved1 = (wchar_t *)Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v65, (const WCHAR **)&v58)[1].Reserved.Reserved1;
      if ( !WindowsIsStringEmpty((HSTRING)Reserved1) )
        Windows::Services::TargetedContent::Internal::SetStringValue(
          (Windows::Services::TargetedContent::Internal *)&v54,
          L"Trigger",
          Reserved1,
          v40);
      CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v60);
      Windows::Services::TargetedContent::Internal::CreateTriggerKey(&v57, a2);
      v41 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
              v60,
              v57,
              v54);
      if ( v41 < 0 )
        wil::details::in1diag3::_Throw_Hr(
          retaddr,
          (void *)0x158,
          (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
          (const char *)(unsigned int)v41);
      WindowsDeleteString(v57);
      v57 = 0LL;
      v42 = v61;
      if ( v61 )
      {
        if ( _InterlockedExchangeAdd(v61 + 2, 0xFFFFFFFF) == 1 )
        {
          (**(void (__fastcall ***)(volatile signed __int32 *))v42)(v42);
          if ( _InterlockedExchangeAdd(v42 + 3, 0xFFFFFFFF) == 1 )
            (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v42 + 8LL))(v42);
        }
      }
      WindowsDeleteString(string);
      string = 0LL;
      v43 = v55;
      if ( v55 )
      {
        v55 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16LL))(v43);
      }
      v44 = v54;
      if ( v54 )
      {
        v54 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v44 + 16LL))(v44);
      }
      v45 = v52;
      if ( v52 )
      {
        v52 = 0LL;
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16LL))(v45);
      }
      v46 = v53;
      if ( v53 )
      {
        v53 = 0LL;
        (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v46 + 16LL))(v46);
      }
      v47 = (volatile signed __int32 *)a1[1];
      if ( v47 && _InterlockedExchangeAdd(v47 + 2, 0xFFFFFFFF) == 1 )
      {
        (**(void (__fastcall ***)(volatile signed __int32 *))v47)(v47);
        if ( _InterlockedExchangeAdd(v47 + 3, 0xFFFFFFFF) == 1 )
          (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v47 + 8LL))(v47);
      }
      return 0LL;
    }
  }
  v49 = wil::verify_hresult<long>(0x80070490);
  wil::details::in1diag3::Throw_Hr(
    retaddr,
    (void *)0x57,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
    (const char *)v49);
  v50 = (volatile signed __int32 *)v59[1];
  if ( v50 )
  {
    if ( _InterlockedExchangeAdd(v50 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v50)(v50);
      if ( _InterlockedExchangeAdd(v50 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v50 + 8LL))(v50);
    }
  }
  return v56[1];
}
