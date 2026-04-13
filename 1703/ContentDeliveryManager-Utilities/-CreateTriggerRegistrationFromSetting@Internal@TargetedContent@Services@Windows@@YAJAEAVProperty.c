/*
 * XREFs of ?CreateTriggerRegistrationFromSetting@Internal@TargetedContent@Services@Windows@@YAJAEAVPropertySetHelper@Triggers@CreativeFramework@@PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x18004CF38
 * Callers:
 *     Windows::Services::TargetedContent::Internal::EmunerateUntriggeredItemsInContainer__lambda_32632dfdfd926559a6510a11dedcbccd___ @ 0x18004F110 (Windows--Services--TargetedContent--Internal--EmunerateUntriggeredItemsInContainer__lambda_32632.c)
 * Callees:
 *     ?OriginateError@details@wil@@YAXW4FailureType@2@J@Z @ 0x18000255C (-OriginateError@details@wil@@YAXW4FailureType@2@J@Z.c)
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$verify_hresult@J@wil@@YAJJ@Z @ 0x1800136E0 (--$verify_hresult@J@wil@@YAJJ@Z.c)
 *     ?Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180038088 (-Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedContentKnownTrigger@1234@PEAUHSTRING__@@1111PEAPEAUITargetedContentTriggerInternal@1234@@Z @ 0x180046268 (-TargetedContentTrigger_CreateInstance@Internal@TargetedContent@Services@Windows@@YAJW4TargetedC.c)
 *     ?GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@CreativeFramework@@PEB_WPEAPEAUHSTRING__@@@Z @ 0x18004CEA8 (-GetStringValue@Internal@TargetedContent@Services@Windows@@YA_NAEAVPropertySetHelper@Triggers@Cr.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall Windows::Services::TargetedContent::Internal::CreateTriggerRegistrationFromSetting(
        Windows::Services::TargetedContent::Internal *this,
        struct CreativeFramework::Triggers::PropertySetHelper *a2,
        struct Windows::Services::TargetedContent::Internal::ITargetedContentTriggerInternal **a3)
{
  HSTRING *v5; // r9
  HSTRING *v6; // r9
  HSTRING *v7; // r9
  HSTRING *v8; // r9
  HSTRING *v9; // r9
  HSTRING *v10; // r9
  const WCHAR *StringRawBuffer; // rsi
  LPCWCH *v12; // rbx
  unsigned int v13; // eax
  int Instance; // eax
  HSTRING *v15; // r9
  char StringValue; // al
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v17; // rbx
  int v18; // eax
  HSTRING *v19; // r9
  int v20; // eax
  HSTRING *v21; // r9
  int v22; // eax
  HSTRING *v23; // r9
  int v24; // eax
  HSTRING *v25; // r9
  int v26; // eax
  HSTRING v28; // [rsp+40h] [rbp-30h] BYREF
  HSTRING v29; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v30; // [rsp+50h] [rbp-20h] BYREF
  HSTRING v31; // [rsp+58h] [rbp-18h] BYREF
  Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *v32[2]; // [rsp+60h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]
  HSTRING v34; // [rsp+A8h] [rbp+38h] BYREF
  HSTRING string; // [rsp+B0h] [rbp+40h] BYREF
  HSTRING v36; // [rsp+B8h] [rbp+48h] BYREF

  v32[1] = (Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *)-2LL;
  *(_QWORD *)a2 = 0LL;
  WindowsDeleteString(0LL);
  v31 = 0LL;
  if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
          this,
          (struct CreativeFramework::Triggers::PropertySetHelper *)L"CreativeId",
          (const wchar_t *)&v31,
          v5) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF2,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  WindowsDeleteString(0LL);
  v30 = 0LL;
  if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
          this,
          (struct CreativeFramework::Triggers::PropertySetHelper *)L"Placement",
          (const wchar_t *)&v30,
          v6) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF4,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  WindowsDeleteString(0LL);
  v29 = 0LL;
  if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
          this,
          (struct CreativeFramework::Triggers::PropertySetHelper *)L"Path",
          (const wchar_t *)&v29,
          v7) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF6,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  WindowsDeleteString(0LL);
  v28 = 0LL;
  if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
          this,
          (struct CreativeFramework::Triggers::PropertySetHelper *)L"Action",
          (const wchar_t *)&v28,
          v8) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xF8,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  v36 = 0LL;
  WindowsDeleteString(0LL);
  v36 = 0LL;
  if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
          this,
          (struct CreativeFramework::Triggers::PropertySetHelper *)L"Intent",
          (const wchar_t *)&v36,
          v9) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xFA,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  string = 0LL;
  WindowsDeleteString(0LL);
  string = 0LL;
  if ( !Windows::Services::TargetedContent::Internal::GetStringValue(
          this,
          (struct CreativeFramework::Triggers::PropertySetHelper *)L"Trigger",
          (const wchar_t *)&string,
          v10) )
  {
    wil::details::OriginateError();
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xFC,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)0x80070490LL);
    __debugbreak();
  }
  StringRawBuffer = WindowsGetStringRawBuffer(string, 0LL);
  v12 = (LPCWCH *)&unk_1800F3440;
  while ( CompareStringOrdinal(v12[1], -1, StringRawBuffer, -1, 1) != 2 )
  {
    v12 += 2;
    if ( v12 == (LPCWCH *)&off_1800F34D0 )
    {
      v13 = wil::verify_hresult<long>(0x80070490);
      wil::details::in1diag3::Throw_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)v13);
      __debugbreak();
    }
  }
  v32[0] = 0LL;
  Instance = Windows::Services::TargetedContent::Internal::TargetedContentTrigger_CreateInstance(
               *(_DWORD *)v12,
               v31,
               (char *)v30,
               v29,
               v28,
               v36,
               v32);
  if ( Instance < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xFF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
      (const char *)(unsigned int)Instance);
    __debugbreak();
  }
  v34 = 0LL;
  WindowsDeleteString(0LL);
  v34 = 0LL;
  StringValue = Windows::Services::TargetedContent::Internal::GetStringValue(
                  this,
                  (struct CreativeFramework::Triggers::PropertySetHelper *)L"Id",
                  (const wchar_t *)&v34,
                  v15);
  v17 = v32[0];
  if ( StringValue )
  {
    v18 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v32[0] + 72LL))(
            v32[0],
            v34);
    if ( v18 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x104,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v18);
      __debugbreak();
    }
  }
  WindowsDeleteString(v34);
  v34 = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         this,
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predicate",
         (const wchar_t *)&v34,
         v19) )
  {
    v20 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v17 + 104LL))(
            v17,
            v34);
    if ( v20 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x108,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v20);
      __debugbreak();
    }
  }
  WindowsDeleteString(v34);
  v34 = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         this,
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"Predecessor",
         (const wchar_t *)&v34,
         v21) )
  {
    v22 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v17 + 136LL))(
            v17,
            v34);
    if ( v22 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x10C,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v22);
      __debugbreak();
    }
  }
  WindowsDeleteString(v34);
  v34 = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         this,
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"ruleFilePath",
         (const wchar_t *)&v34,
         v23) )
  {
    v24 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v17 + 200LL))(
            v17,
            v34);
    if ( v24 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x110,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v24);
      __debugbreak();
    }
  }
  WindowsDeleteString(v34);
  v34 = 0LL;
  if ( Windows::Services::TargetedContent::Internal::GetStringValue(
         this,
         (struct CreativeFramework::Triggers::PropertySetHelper *)L"event",
         (const wchar_t *)&v34,
         v25) )
  {
    v26 = (*(__int64 (__fastcall **)(Windows::Services::TargetedContent::Internal::TargetedContentTriggerImpl *, HSTRING))(*(_QWORD *)v17 + 216LL))(
            v17,
            v34);
    if ( v26 < 0 )
    {
      wil::details::in1diag3::_Throw_Hr(
        retaddr,
        (void *)0x114,
        (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\triggermanager\\triggermanagersettings.cpp",
        (const char *)(unsigned int)v26);
      __debugbreak();
    }
  }
  *(_QWORD *)a2 = v17;
  WindowsDeleteString(v34);
  v34 = 0LL;
  WindowsDeleteString(string);
  string = 0LL;
  WindowsDeleteString(v36);
  v36 = 0LL;
  WindowsDeleteString(v28);
  v28 = 0LL;
  WindowsDeleteString(v29);
  v29 = 0LL;
  WindowsDeleteString(v30);
  v30 = 0LL;
  WindowsDeleteString(v31);
  return 0LL;
}
