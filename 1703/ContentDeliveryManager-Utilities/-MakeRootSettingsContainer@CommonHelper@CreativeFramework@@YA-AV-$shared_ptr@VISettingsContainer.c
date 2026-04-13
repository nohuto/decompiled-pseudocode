/*
 * XREFs of ?MakeRootSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x180069948
 * Callers:
 *     ?GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@XZ @ 0x18004C2D4 (-GetTriggerRegistrationSettingsContainer@Internal@TargetedContent@Services@Windows@@YA-AV-$share.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?MakeSettingsContainer@CommonHelper@CreativeFramework@@YA?AV?$shared_ptr@VISettingsContainer@CommonHelper@CreativeFramework@@@std@@PEAUIApplicationDataContainer@Storage@Windows@@@Z @ 0x180069ABC (-MakeSettingsContainer@CommonHelper@CreativeFramework@@YA-AV-$shared_ptr@VISettingsContainer@Com.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CreativeFramework::CommonHelper::MakeRootSettingsContainer(__int64 a1)
{
  int ActivationFactory; // eax
  int v3; // eax
  int v4; // eax
  __int64 v6; // [rsp+20h] [rbp-50h] BYREF
  __int64 v7; // [rsp+28h] [rbp-48h] BYREF
  __int64 v8; // [rsp+30h] [rbp-40h] BYREF
  int v9; // [rsp+38h] [rbp-38h]
  __int64 v10; // [rsp+40h] [rbp-30h]
  HSTRING string; // [rsp+48h] [rbp-28h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-20h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v10 = -2LL;
  v9 = 0;
  v8 = 0LL;
  if ( WindowsCreateStringReference(L"Windows.Storage.ApplicationData", 0x1Fu, &hstringHeader, &string) < 0 )
    RaiseException(0xC000000D, 1u, 0, 0LL);
  ActivationFactory = RoGetActivationFactory(string, &GUID_5612147b_e843_45e3_94d8_06169e3c8e17, &v8);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7D,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v7 = 0LL;
  v3 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v8 + 48LL))(v8, &v7);
  if ( v3 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x7F,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v3);
  v6 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v7 + 80LL))(v7, &v6);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0x81,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\applicationsettingshelper.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  CreativeFramework::CommonHelper::MakeSettingsContainer(a1, v6);
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 16LL))(v7);
  if ( v8 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v8 + 16LL))(v8);
  return a1;
}
