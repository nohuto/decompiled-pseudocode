/*
 * XREFs of ?LaunchDefaultEntryPointForPackage@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@@Z @ 0x18000DD00
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180002CCC (-Return_Hr_NoOriginate@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z @ 0x1800037E8 (-GetThreadLocalDataCache@details_abi@wil@@YAPEAUThreadLocalData@12@_N@Z.c)
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x180007440 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@@IPEBUFEATURE_LOGGED_TRAITS@@HW4wil_ReportingKind@@_K@Z @ 0x180007738 (-wil_details_FeaturePropertyCache_ReportUsageToService@@YAXPEATwil_details_FeaturePropertyCache@.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180007EF4 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000A5F8 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     ?ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z @ 0x18000AB88 (-ReportFeatureError@details@wil@@YAXJAEAVThreadErrorContext@2@IAEBUDiagnosticsInfo@2@@Z.c)
 *     _lambda_f9e236e5f2c30dd9dfc7366d2b2138bc_::operator() @ 0x18000DF84 (_lambda_f9e236e5f2c30dd9dfc7366d2b2138bc_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180013104 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall ContentManagement::LaunchManager::LaunchDefaultEntryPointForPackage(
        ContentManagement::LaunchManager *this,
        HSTRING a2)
{
  int v2; // ebx
  int v3; // eax
  int v4; // ecx
  int v5; // edi
  unsigned int v6; // ecx
  bool v7; // al
  BOOL v8; // esi
  int v9; // r14d
  struct wil_details_FeatureTestState *i; // rax
  int v11; // eax
  wil::details_abi *v12; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v14; // rbx
  int v15; // eax
  struct wil::ThreadErrorContext *v16; // r8
  int v17; // edi
  int v19; // [rsp+20h] [rbp-49h] BYREF
  __int16 v20; // [rsp+24h] [rbp-45h]
  int v21; // [rsp+28h] [rbp-41h] BYREF
  __int16 v22; // [rsp+2Ch] [rbp-3Dh]
  int v23; // [rsp+30h] [rbp-39h]
  __int16 v24; // [rsp+34h] [rbp-35h]
  int v25; // [rsp+3Ch] [rbp-2Dh]
  __int16 v26; // [rsp+40h] [rbp-29h]
  struct wil::details_abi::ThreadLocalData *v27; // [rsp+48h] [rbp-21h] BYREF
  int v28; // [rsp+50h] [rbp-19h]
  int v29; // [rsp+54h] [rbp-15h]
  HSTRING *v30; // [rsp+58h] [rbp-11h] BYREF
  unsigned int v31[2]; // [rsp+60h] [rbp-9h] BYREF
  const char *v32; // [rsp+68h] [rbp-1h]
  __int64 v33; // [rsp+70h] [rbp+7h]
  __int16 v34; // [rsp+78h] [rbp+Fh]
  __int64 v35; // [rsp+80h] [rbp+17h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  HSTRING v37; // [rsp+D8h] [rbp+6Fh] BYREF
  signed __int32 v38; // [rsp+E0h] [rbp+77h]
  int v39; // [rsp+E8h] [rbp+7Fh] BYREF

  v37 = a2;
  v35 = -2LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_25;
  v2 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(7960589LL, 0LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v4 = 0;
      goto LABEL_10;
    }
    if ( (unsigned int)wil_HasFeatureTestState(7960589, (enum wil_FeatureEnabledState *)&v39) )
    {
      v4 = v39;
      goto LABEL_10;
    }
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(7960589LL, 0LL);
  }
  v4 = v3;
LABEL_10:
  v5 = ((v4 & 0x80u) != 0) + 1;
  v6 = v4 & 0xFFFFFF7F;
  if ( v6 )
    v7 = v6 == 2;
  else
    v7 = 1;
  v8 = v7;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates )
    goto LABEL_21;
  v9 = 0;
  AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
  for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
  {
    if ( *((_DWORD *)i + 1) == 7960589 && !*(_DWORD *)i )
    {
      v9 = 1;
      break;
    }
  }
  ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
  if ( !v9 )
  {
LABEL_21:
    if ( v2 )
    {
      do
      {
        v38 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
        v11 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
        if ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) == (unsigned __int8)v5 )
          break;
        v38 = ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v5)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      }
      while ( v11 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                       v38,
                       `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
        v8 + 1,
        v5);
    }
  }
LABEL_25:
  v23 = 0;
  LOBYTE(v24) = 3;
  v19 = 0;
  v20 = v24;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v19,
    3);
  v30 = &v37;
  *(_QWORD *)v31 = retaddr;
  v32 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v33 = 0LL;
  v34 = 588;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) == 0 )
    wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetCachedFeatureEnabledState();
  v25 = 0;
  LOBYTE(v26) = 3;
  v21 = 0;
  v22 = v26;
  wil_details_FeaturePropertyCache_ReportUsageToService(
    &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0x79780Du,
    (const struct FEATURE_LOGGED_TRAITS *)&v21,
    3);
  LOBYTE(v12) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v12);
  v14 = ThreadLocalDataCache;
  v27 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v29 = *((_DWORD *)ThreadLocalDataCache + 4);
    v28 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v28;
    v14 = v27;
  }
  v15 = lambda_f9e236e5f2c30dd9dfc7366d2b2138bc_::operator()(&v30);
  v17 = v15;
  if ( v15 < 0 )
    wil::details::ReportFeatureError(
      (unsigned int)v15,
      (wil::ThreadErrorContext *)&v27,
      v16,
      (const struct wil::FailureInfo *)v31);
  if ( v14 )
    *((_DWORD *)v14 + 4) = v29;
  if ( v17 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x24C,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v17);
  return (unsigned int)v17;
}
