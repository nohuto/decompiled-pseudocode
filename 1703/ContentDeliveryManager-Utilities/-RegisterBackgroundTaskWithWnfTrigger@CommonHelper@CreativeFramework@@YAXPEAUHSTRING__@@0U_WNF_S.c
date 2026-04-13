/*
 * XREFs of ?RegisterBackgroundTaskWithWnfTrigger@CommonHelper@CreativeFramework@@YAXPEAUHSTRING__@@0U_WNF_STATE_NAME@@PEBEIW4TaskConditionFlags@12@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@_N@Z @ 0x1800681D4
 * Callers:
 *     ?RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windows@@AEAAJPEAUITargetedContentTriggerInternal@2345@W4TriggerRegistrationOption@2345@V?$shared_ptr@VCorrelationVectorWrapper@Background@ContentDeliveryManager@@@std@@@Z @ 0x1800492A4 (-RegisterWnfTrigger@TargetedContentTriggerManagerStatics@Internal@TargetedContent@Services@Windo.c)
 * Callees:
 *     ?_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002E3C (-_Throw_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800037E8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007738 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000AB88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180013104 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _lambda_69582238324f545b86bbebe50f8ed5ac_::operator() @ 0x1800683A0 (_lambda_69582238324f545b86bbebe50f8ed5ac_--operator().c)
 *     __security_check_cookie @ 0x18006F3C0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=2
void CreativeFramework::CommonHelper::RegisterBackgroundTaskWithWnfTrigger(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        ...)
{
  __int64 v4; // rsi
  wil::details_abi *v5; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v7; // rbx
  int v8; // eax
  struct wil::ThreadErrorContext *v9; // r8
  int v10; // edi
  volatile signed __int32 *v11; // rbx
  struct DiagnosticsInfo *v12; // [rsp+28h] [rbp-B9h] BYREF
  int v13; // [rsp+30h] [rbp-B1h] BYREF
  int v14; // [rsp+38h] [rbp-A9h] BYREF
  __int16 v15; // [rsp+3Ch] [rbp-A5h]
  int v16; // [rsp+40h] [rbp-A1h]
  __int16 v17; // [rsp+44h] [rbp-9Dh]
  struct wil::details_abi::ThreadLocalData *v18; // [rsp+50h] [rbp-91h] BYREF
  int v19; // [rsp+58h] [rbp-89h]
  int v20; // [rsp+5Ch] [rbp-85h]
  _QWORD v21[3]; // [rsp+60h] [rbp-81h] BYREF
  __int16 v22; // [rsp+78h] [rbp-69h]
  _QWORD v23[10]; // [rsp+80h] [rbp-61h] BYREF
  __int64 v24; // [rsp+D0h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+120h] [rbp+3Fh]
  __int64 v26; // [rsp+128h] [rbp+47h] BYREF
  __int64 v27; // [rsp+130h] [rbp+4Fh] BYREF
  __int64 v28; // [rsp+140h] [rbp+5Fh] BYREF
  __int64 v29; // [rsp+148h] [rbp+67h] BYREF
  va_list va; // [rsp+148h] [rbp+67h]
  __int64 v31; // [rsp+150h] [rbp+6Fh]
  __int64 v32; // [rsp+158h] [rbp+77h]
  va_list va1; // [rsp+160h] [rbp+7Fh] BYREF

  va_start(va1, a4);
  va_start(va, a4);
  v29 = va_arg(va1, _QWORD);
  v31 = va_arg(va1, _QWORD);
  v32 = va_arg(va1, _QWORD);
  v28 = a4;
  v27 = a2;
  v26 = a1;
  v23[8] = -2LL;
  v24 = a3;
  v4 = v32;
  v23[9] = v32;
  LOBYTE(v12) = 0;
  v13 = 0;
  v23[0] = &v24;
  va_copy((va_list)&v23[1], va);
  v23[2] = &v28;
  v23[3] = &v26;
  v23[4] = &v27;
  v23[5] = &v13;
  v23[6] = &v12;
  v23[7] = v32;
  v21[0] = retaddr;
  v21[1] = "shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp";
  v21[2] = 0LL;
  v22 = 207;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState();
  v16 = 0;
  LOBYTE(v17) = 3;
  v14 = 0;
  v15 = v17;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v14,
    3);
  LOBYTE(v5) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v5);
  v7 = ThreadLocalDataCache;
  v18 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v20 = *((_DWORD *)ThreadLocalDataCache + 4);
    v19 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v19;
    v7 = v18;
  }
  v8 = lambda_69582238324f545b86bbebe50f8ed5ac_::operator()(v23);
  v10 = v8;
  if ( v8 < 0 )
    wil::details::ReportFeatureError(
      (unsigned int)v8,
      (wil::ThreadErrorContext *)&v18,
      v9,
      (const struct wil::FailureInfo *)v21);
  if ( v7 )
    *((_DWORD *)v7 + 4) = v20;
  if ( v10 < 0 )
    wil::details::in1diag3::_Throw_Hr(
      retaddr,
      (void *)0xCF,
      (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\lib\\commonhelpers\\taskschedulerhelpers.cpp",
      (const char *)(unsigned int)v10);
  v11 = *(volatile signed __int32 **)(v4 + 8);
  if ( v11 && _InterlockedExchangeAdd(v11 + 2, 0xFFFFFFFF) == 1 )
  {
    (**(void (__fastcall ***)(volatile signed __int32 *))v11)(v11);
    if ( !_InterlockedDecrement(v11 + 3) )
      (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v11 + 8LL))(v11);
  }
}
