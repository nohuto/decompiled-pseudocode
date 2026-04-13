/*
 * XREFs of ?SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004C874
 * Callers:
 *     ?UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@EV?$shared_ptr@VIRuleSetHandler@RuleSetHandlers@CreativeFramework@@@8@@Z @ 0x1800485F4 (-UnregisterTriggerInternal@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Service.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?SetString@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBGB@Triggers@CreativeFramework@@QEAAJPEBG0@Z @ 0x18002BF90 (-SetString@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_ValueSet@@3QBG.c)
 *     ??1OutRef@RoVariant@@QEAA@XZ @ 0x18004C09C (--1OutRef@RoVariant@@QEAA@XZ.c)
 *     ??IRoVariant@@QEAA?AVOutRef@0@XZ @ 0x18004C194 (--IRoVariant@@QEAA-AVOutRef@0@XZ.c)
 *     ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004C1A0 (--0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Wi.c)
 *     ?CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA?AVHString@Wrappers@WRL@Microsoft@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004C520 (-CreateTriggerKey@Internal@TargetedContent@Services@Windows@@YA-AVHString@Wrappers@WRL@Microsoft.c)
 *     ?AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEB_W@Z @ 0x18004C6CC (-AlreadyRegistered@Internal@TargetedContent@Services@Windows@@YA_NV-$shared_ptr@VISettingsContai.c)
 *     ?SetCompositeValue@?$PropertySetHelperBase@$1?RuntimeClass_Windows_Foundation_Collections_PropertySet@@3QB_WB@Triggers@CreativeFramework@@QEAAJPEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004DF88 (-SetCompositeValue@-$PropertySetHelperBase@$1-RuntimeClass_Windows_Foundation_Collections_Proper.c)
 *     ?GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@std@@XZ @ 0x180069330 (-GetValues@SettingsContainer@CommonHelper@CreativeFramework@@UEAA-AV-$shared_ptr@VPropertySetHel.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=9
HRESULT __fastcall Windows::Services::TargetedContent::Internal::SetTriggerAsExecuted(__int64 *a1, __int64 a2)
{
  _QWORD *v3; // rbx
  PCWSTR StringRawBuffer; // rax
  HSTRING v5; // rsi
  struct Windows::Foundation::Collections::IPropertySet *v6; // rbx
  int v7; // eax
  int v8; // edi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // rdx
  int v12; // ecx
  struct Windows::Foundation::Collections::IPropertySet *v13; // rax
  struct Windows::Foundation::Collections::IPropertySet *v14; // rcx
  __int64 v15; // rcx
  int v16; // eax
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rcx
  volatile signed __int32 *v20; // rbx
  HRESULT result; // eax
  volatile signed __int32 *v22; // rbx
  __int64 v23; // [rsp+28h] [rbp-49h] BYREF
  int v24; // [rsp+30h] [rbp-41h]
  struct Windows::Foundation::Collections::IPropertySet *v25; // [rsp+38h] [rbp-39h] BYREF
  HSTRING string; // [rsp+40h] [rbp-31h] BYREF
  __int64 v27; // [rsp+48h] [rbp-29h] BYREF
  __int64 v28; // [rsp+50h] [rbp-21h]
  struct Windows::Foundation::Collections::IPropertySet *v29; // [rsp+60h] [rbp-11h]
  _QWORD *v30; // [rsp+68h] [rbp-9h] BYREF
  volatile signed __int32 *v31; // [rsp+70h] [rbp-1h]
  __int64 v32; // [rsp+78h] [rbp+7h]
  __int64 v33; // [rsp+80h] [rbp+Fh] BYREF
  _QWORD v34[7]; // [rsp+90h] [rbp+1Fh] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]
  int v36; // [rsp+E8h] [rbp+77h] BYREF
  __int64 v37; // [rsp+F0h] [rbp+7Fh] BYREF

  v32 = -2LL;
  Windows::Services::TargetedContent::Internal::CreateTriggerKey(&string, a2);
  v3 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
         &v33,
         a1);
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  if ( !Windows::Services::TargetedContent::Internal::AlreadyRegistered(v3, (__int64)StringRawBuffer) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x96,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  CreativeFramework::CommonHelper::SettingsContainer::GetValues(*a1, &v30);
  v5 = string;
  v6 = 0LL;
  v29 = 0LL;
  v37 = 0LL;
  v7 = (**(__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v30)(
         *v30,
         &GUID_1b0d3570_0877_5ec2_8a2c_3b9539506aca,
         &v37);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x76,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v7);
LABEL_5:
    v9 = v37;
    if ( v37 )
    {
      v37 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
    }
    goto LABEL_37;
  }
  v23 = 0LL;
  v24 = 0;
  v10 = RoVariant::operator&((__int64)&v23, v34);
  v8 = (*(__int64 (__fastcall **)(__int64, HSTRING, _QWORD *))(*(_QWORD *)v37 + 48LL))(v37, v5, v10 + 1);
  RoVariant::OutRef::~OutRef((RoVariant::OutRef *)v34);
  if ( v8 < 0 )
  {
    v11 = 120LL;
LABEL_9:
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)v11,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v8);
LABEL_10:
    if ( v23 && ((v24 - 3) & 0xFFFFFFFB) == 0 )
      (*(void (**)(void))(*(_QWORD *)v23 + 16LL))();
    goto LABEL_5;
  }
  v12 = v24;
  if ( v24 < 0 )
  {
    v8 = v24;
    goto LABEL_23;
  }
  if ( v24 )
  {
    if ( v24 == 1 || v24 == 3 )
    {
      v36 = 13;
    }
    else
    {
      v8 = (*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v23 + 48LL))(v23, &v36);
      v12 = v24;
      if ( v8 < 0 )
        goto LABEL_23;
    }
  }
  else
  {
    v36 = 0;
  }
  v8 = 0;
LABEL_23:
  if ( v8 < 0 )
  {
    v11 = 122LL;
    goto LABEL_9;
  }
  v13 = 0LL;
  v25 = 0LL;
  if ( v36 == 13 )
  {
    v8 = (**(__int64 (__fastcall ***)(__int64, GUID *, struct Windows::Foundation::Collections::IPropertySet **))v23)(
           v23,
           &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
           &v25);
    v12 = v24;
    v13 = v25;
  }
  else
  {
    v8 = -2147418113;
  }
  if ( v8 < 0 )
  {
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x7C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v8);
    v14 = v25;
    if ( v25 )
    {
      v25 = 0LL;
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v14 + 16LL))(v14);
    }
    goto LABEL_10;
  }
  v6 = v13;
  v25 = 0LL;
  v29 = v13;
  if ( v23 && ((v12 - 3) & 0xFFFFFFFB) == 0 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  v15 = v37;
  if ( v37 )
  {
    v37 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  }
  v8 = 0;
LABEL_37:
  if ( v8 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x9A,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v8);
    __debugbreak();
  }
  CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
    (CreativeFramework::Triggers::PropertySetHelper *)&v27,
    v6);
  v16 = CreativeFramework::Triggers::PropertySetHelperBase<&unsigned short const near * const RuntimeClass_Windows_Foundation_Collections_ValueSet>::SetString(
          (__int64)&v27,
          L"executed",
          L"true");
  if ( v16 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x9C,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v16);
    __debugbreak();
  }
  v17 = CreativeFramework::Triggers::PropertySetHelperBase<&wchar_t const near * const RuntimeClass_Windows_Foundation_Collections_PropertySet>::SetCompositeValue(
          v30,
          string,
          v27);
  if ( v17 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x9D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)v17);
  v18 = v28;
  if ( v28 )
  {
    v28 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  v19 = v27;
  if ( v27 )
  {
    v27 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  }
  if ( v6 )
    (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)v6 + 16LL))(v6);
  v20 = v31;
  if ( v31 )
  {
    if ( _InterlockedExchangeAdd(v31 + 2, 0xFFFFFFFF) == 1 )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v20)(v20);
      if ( _InterlockedExchangeAdd(v20 + 3, 0xFFFFFFFF) == 1 )
        (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v20 + 8LL))(v20);
    }
  }
  result = WindowsDeleteString(string);
  string = 0LL;
  v22 = (volatile signed __int32 *)a1[1];
  if ( v22 )
  {
    result = _InterlockedDecrement(v22 + 2);
    if ( !result )
    {
      (**(void (__fastcall ***)(volatile signed __int32 *))v22)(v22);
      result = _InterlockedDecrement(v22 + 3);
      if ( !result )
        return (*(__int64 (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v22 + 8LL))(v22);
    }
  }
  return result;
}
