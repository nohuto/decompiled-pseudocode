/*
 * XREFs of ?LaunchUriAsync@LaunchManager@ContentManagement@@UEAAJPEAUHSTRING__@@0PEAPEAU?$IAsyncOperation@_N@Foundation@Windows@@@Z @ 0x18000D410
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
 *     _lambda_5d23f9c1406c8199f9216519884653b5_::operator() @ 0x18000D6B0 (_lambda_5d23f9c1406c8199f9216519884653b5_--operator().c)
 *     ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180013104 (-GetCachedFeatureEnabledState@-$Feature@U__WilFeatureTraits_Feature_GenericActionAndTrigger@@@wi.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 ContentManagement::LaunchManager::LaunchUriAsync(__int64 a1, ...)
{
  int v1; // ebx
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  unsigned int v5; // ecx
  bool v6; // al
  BOOL v7; // esi
  int v8; // r14d
  struct wil_details_FeatureTestState *i; // rax
  int v10; // eax
  wil::details_abi *v11; // rcx
  struct wil::details_abi::ThreadLocalData *ThreadLocalDataCache; // rax
  struct wil::details_abi::ThreadLocalData *v13; // rbx
  int v14; // eax
  struct wil::ThreadErrorContext *v15; // r8
  int v16; // edi
  int v18; // [rsp+2Ch] [rbp-55h] BYREF
  int v19; // [rsp+30h] [rbp-51h] BYREF
  __int16 v20; // [rsp+34h] [rbp-4Dh]
  int v21; // [rsp+38h] [rbp-49h] BYREF
  __int16 v22; // [rsp+3Ch] [rbp-45h]
  int v23; // [rsp+40h] [rbp-41h]
  __int16 v24; // [rsp+44h] [rbp-3Dh]
  int v25; // [rsp+4Ch] [rbp-35h]
  __int16 v26; // [rsp+50h] [rbp-31h]
  struct wil::details_abi::ThreadLocalData *v27; // [rsp+58h] [rbp-29h] BYREF
  int v28; // [rsp+60h] [rbp-21h]
  int v29; // [rsp+64h] [rbp-1Dh]
  _QWORD v30[3]; // [rsp+68h] [rbp-19h] BYREF
  unsigned int v31[2]; // [rsp+80h] [rbp-1h] BYREF
  const char *v32; // [rsp+88h] [rbp+7h]
  __int64 v33; // [rsp+90h] [rbp+Fh]
  __int16 v34; // [rsp+98h] [rbp+17h]
  __int64 v35; // [rsp+A0h] [rbp+1Fh]
  wil::details::in1diag3 *retaddr; // [rsp+E0h] [rbp+5Fh]
  __int64 v37; // [rsp+F0h] [rbp+6Fh] BYREF
  va_list va; // [rsp+F0h] [rbp+6Fh]
  __int64 v39; // [rsp+F8h] [rbp+77h] BYREF
  va_list va1; // [rsp+F8h] [rbp+77h]
  _QWORD *v41; // [rsp+100h] [rbp+7Fh] BYREF
  va_list va2; // [rsp+100h] [rbp+7Fh]
  va_list va3; // [rsp+108h] [rbp+87h] BYREF

  va_start(va3, a1);
  va_start(va2, a1);
  va_start(va1, a1);
  va_start(va, a1);
  v37 = va_arg(va1, _QWORD);
  va_copy(va2, va1);
  v39 = va_arg(va2, _QWORD);
  va_copy(va3, va2);
  v41 = va_arg(va3, _QWORD *);
  v35 = -2LL;
  *v41 = 0LL;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
    goto LABEL_25;
  v1 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data & 3;
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(7960589LL, 0LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v3 = 0;
      goto LABEL_10;
    }
    if ( (unsigned int)wil_HasFeatureTestState(7960589, (enum wil_FeatureEnabledState *)&v18) )
    {
      v3 = v18;
      goto LABEL_10;
    }
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(7960589LL, 0LL);
  }
  v3 = v2;
LABEL_10:
  v4 = ((v3 & 0x80u) != 0) + 1;
  v5 = v3 & 0xFFFFFF7F;
  if ( v5 )
    v6 = v5 == 2;
  else
    v6 = 1;
  v7 = v6;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates )
    goto LABEL_21;
  v8 = 0;
  AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
  for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
  {
    if ( *((_DWORD *)i + 1) == 7960589 && !*(_DWORD *)i )
    {
      v8 = 1;
      break;
    }
  }
  ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
  if ( !v8 )
  {
LABEL_21:
    if ( v1 )
    {
      do
        v10 = `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v4
           && v10 != _InterlockedCompareExchange(
                       &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                       ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v4)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
                       `wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_GenericActionAndTrigger>::GetFeaturePropertyCache'::`2'::data,
        v7 + 1,
        v4);
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
  va_copy((va_list)v30, va);
  va_copy((va_list)&v30[1], va1);
  va_copy((va_list)&v30[2], va2);
  *(_QWORD *)v31 = retaddr;
  v32 = "shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp";
  v33 = 0LL;
  v34 = 529;
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
  LOBYTE(v11) = 1;
  ThreadLocalDataCache = wil::details_abi::GetThreadLocalDataCache(v11);
  v13 = ThreadLocalDataCache;
  v27 = ThreadLocalDataCache;
  if ( ThreadLocalDataCache )
  {
    v29 = *((_DWORD *)ThreadLocalDataCache + 4);
    v28 = **((_DWORD **)ThreadLocalDataCache + 1);
    *((_DWORD *)ThreadLocalDataCache + 4) = v28;
    v13 = v27;
  }
  v14 = lambda_5d23f9c1406c8199f9216519884653b5_::operator()(v30);
  v16 = v14;
  if ( v14 < 0 )
    wil::details::ReportFeatureError(
      (unsigned int)v14,
      (wil::ThreadErrorContext *)&v27,
      v15,
      (const struct wil::FailureInfo *)v31);
  if ( v13 )
    *((_DWORD *)v13 + 4) = v29;
  if ( v16 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr_NoOriginate(
    retaddr,
    (void *)0x211,
    (__int64)"shellcommon\\shell\\contentdeliverymanager\\utils\\dll\\contentmanagementbroker.cpp",
    (const char *)(unsigned int)v16);
  return (unsigned int)v16;
}
