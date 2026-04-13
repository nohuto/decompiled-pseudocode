/*
 * XREFs of ??0PropertySetHelper@Triggers@CreativeFramework@@QEAA@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18004C1A0
 * Callers:
 *     ?SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004C874 (-SetTriggerAsExecuted@Internal@TargetedContent@Services@Windows@@YAXV-$shared_ptr@VISettingsCont.c)
 *     ?SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004D4A8 (-SetTriggerRegistration@Internal@TargetedContent@Services@Windows@@YAJV-$shared_ptr@VISettingsCo.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_f0651c15f0b053a524abcb6a15370925___ @ 0x18004E128 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_f0651.c)
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_32632dfdfd926559a6510a11dedcbccd___ @ 0x18004F110 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_32632.c)
 *     ??$make_shared@VPropertySetHelper@Triggers@CreativeFramework@@PEAUIPropertySet@Collections@Foundation@Windows@@@std@@YA?AV?$shared_ptr@VPropertySetHelper@Triggers@CreativeFramework@@@0@$$QEAPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x180069D50 (--$make_shared@VPropertySetHelper@Triggers@CreativeFramework@@PEAUIPropertySet@Collections@Found.c)
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

CreativeFramework::Triggers::PropertySetHelper *__fastcall CreativeFramework::Triggers::PropertySetHelper::PropertySetHelper(
        CreativeFramework::Triggers::PropertySetHelper *this,
        struct Windows::Foundation::Collections::IPropertySet *a2)
{
  __int64 *v2; // rsi
  __int64 v5; // rcx
  HRESULT v6; // eax
  __int64 v7; // rcx
  HSTRING v8; // rbx
  int ActivationFactory; // eax
  int v10; // ebx
  HSTRING_HEADER hstringHeader; // [rsp+20h] [rbp-38h] BYREF
  HSTRING string; // [rsp+38h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+58h] [rbp+0h]

  *(_QWORD *)this = 0LL;
  v2 = (__int64 *)((char *)this + 8);
  *((_QWORD *)this + 1) = 0LL;
  if ( *(struct Windows::Foundation::Collections::IPropertySet **)this != a2 )
  {
    if ( a2 )
      (*(void (__fastcall **)(struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)a2 + 8LL))(a2);
    v5 = *(_QWORD *)this;
    *(_QWORD *)this = a2;
    if ( v5 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 16LL))(v5);
  }
  string = 0LL;
  v6 = WindowsCreateStringReference(L"Windows.Foundation.PropertyValue", 0x20u, &hstringHeader, &string);
  if ( v6 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v6);
    JUMPOUT(0x18004C2D1LL);
  }
  v7 = *v2;
  v8 = string;
  if ( *v2 )
  {
    *v2 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  }
  ActivationFactory = RoGetActivationFactory(v8, &GUID_629bdbc8_d932_4ff4_96b9_8d96c5c1e858, v2);
  string = 0LL;
  v10 = ActivationFactory;
  if ( ActivationFactory >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0x100,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)ActivationFactory);
  if ( v10 >= 0 )
    v10 = 0;
  else
    wil::details::in1diag3::Return_Hr_NoOriginate(
      retaddr,
      (void *)0xF9,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\inc\\propertysethelper.h",
      (const char *)(unsigned int)v10);
  *((_DWORD *)this + 4) = v10;
  return this;
}
