/*
 * XREFs of _lambda_69582238324f545b86bbebe50f8ed5ac_::operator() @ 0x1800683A0
 * Callers:
 *     ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800681D4 (-RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_S.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x180003C90 (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007738 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ??0?$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z @ 0x18002ADC0 (--0-$shared_ptr@VCreativeRule@RuleSetHandlers@CreativeFramework@@@std@@QEAA@AEBV01@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_FrameworkScalability@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180030054 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_FrameworkScalability@@@wil@@.c)
 *     ?RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgroundTrigger@Background@ApplicationModel@Windows@@W4TaskConditionFlags@12@W4TaskRegistrationOptions@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x180067B74 (-RegisterBackgroundTaskIfNeeded@CommonHelper@CreativeFramework@@YA_NPEAUHSTRING__@@0PEAUIBackgro.c)
 *     ??$query@UIBackgroundTrigger@Background@ApplicationModel@Windows@@@?$com_ptr_t@UICustomSystemTrigger@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@wil@@QEBA?AV?$com_ptr_t@UIBackgroundTrigger@Background@ApplicationModel@Windows@@Uerr_exception_policy@wil@@@1@XZ @ 0x180068F68 (--$query@UIBackgroundTrigger@Background@ApplicationModel@Windows@@@-$com_ptr_t@UICustomSystemTri.c)
 *     ??$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@ContentDeliveryManager@@SAX$$QEAPEB_WPEBD@Z @ 0x180068FB8 (--$RegisterBackgroundTaskWithWnfTrigger@PEB_W@ContentDeliveryManagerTelemetry@Background@Content.c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall lambda_69582238324f545b86bbebe50f8ed5ac_::operator()(__int64 a1)
{
  HRESULT v2; // eax
  int ActivationFactory; // eax
  int v4; // eax
  __int64 *v5; // rax
  __int64 v6; // rbx
  __int64 *v7; // rax
  __int64 v9; // [rsp+58h] [rbp-19h] BYREF
  __int64 v10; // [rsp+60h] [rbp-11h] BYREF
  __int64 v11; // [rsp+68h] [rbp-9h] BYREF
  HSTRING_HEADER v12; // [rsp+78h] [rbp+7h] BYREF
  __int64 v13; // [rsp+98h] [rbp+27h]
  HSTRING_HEADER hstringHeader; // [rsp+A0h] [rbp+2Fh] BYREF
  HSTRING string; // [rsp+B8h] [rbp+47h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+D0h] [rbp+5Fh]

  v13 = -2LL;
  v10 = 0LL;
  string = 0LL;
  v2 = WindowsCreateStringReference(
         L"Windows.ApplicationModel.Background.CustomSystemTrigger",
         0x37u,
         &hstringHeader,
         &string);
  if ( v2 < 0 )
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v2);
  v10 = 0LL;
  ActivationFactory = RoGetActivationFactory(string, &GUID_b20a4480_3ae6_4f5d_acab_19f8a325299e, &v10);
  if ( ActivationFactory < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)ActivationFactory);
  v9 = 0LL;
  memset(&hstringHeader, 0, sizeof(hstringHeader));
  if ( (`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetCachedFeatureEnabledState();
  LODWORD(v12.Reserved.Reserved1) = 0;
  v12.Reserved.Reserved2[4] = 3;
  LODWORD(v11) = 0;
  WORD2(v11) = *(_WORD *)&v12.Reserved.Reserved2[4];
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_FrameworkScalability>::GetFeaturePropertyCache'::`2'::data,
    0x6FD3F7u,
    (const struct FEATURE_LOGGED_TRAITS *)&v11,
    3);
  LODWORD(hstringHeader.Reserved.Reserved1) = 2;
  *(_DWORD *)&hstringHeader.Reserved.Reserved2[16] = 295000;
  v12 = hstringHeader;
  v9 = 0LL;
  v4 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, _DWORD, bool, HSTRING_HEADER *, __int64 *))(*(_QWORD *)v10 + 48LL))(
         v10,
         **(_QWORD **)a1,
         **(unsigned int **)(a1 + 8),
         **(_QWORD **)(a1 + 16),
         0,
         **(_DWORD **)(a1 + 8) != 0,
         &v12,
         &v9);
  if ( v4 < 0 )
  {
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v4);
    __debugbreak();
  }
  v11 = 0LL;
  v5 = (__int64 *)wil::com_ptr_t<Windows::ApplicationModel::Background::ICustomSystemTrigger,wil::err_exception_policy>::query<Windows::ApplicationModel::Background::IBackgroundTrigger>(
                    &v9,
                    &v12);
  v6 = *v5;
  *v5 = 0LL;
  v11 = v6;
  if ( v12.Reserved.Reserved1 )
    (*(void (__fastcall **)(PVOID))(*(_QWORD *)v12.Reserved.Reserved1 + 16LL))(v12.Reserved.Reserved1);
  v7 = std::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>::shared_ptr<CreativeFramework::RuleSetHandlers::CreativeRule>(
         &v12,
         *(__int64 **)(a1 + 56));
  if ( CreativeFramework::CommonHelper::RegisterBackgroundTaskIfNeeded(
         **(HSTRING **)(a1 + 24),
         **(_QWORD **)(a1 + 32),
         v6,
         **(_DWORD **)(a1 + 40),
         **(_BYTE **)(a1 + 48) != 0,
         v7) )
  {
    v12.Reserved.Reserved1 = (PVOID)WindowsGetStringRawBuffer(**(HSTRING **)(a1 + 24), 0LL);
    ContentDeliveryManager::Background::ContentDeliveryManagerTelemetry::RegisterBackgroundTaskWithWnfTrigger<wchar_t const *>(
      &v12,
      **(_QWORD **)(a1 + 56) + 8LL);
  }
  if ( v6 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v6 + 16LL))(v6);
  if ( v9 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 16LL))(v9);
  if ( v10 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 16LL))(v10);
  return 0LL;
}
