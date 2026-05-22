/*
 * XREFs of ?IsFeatureConfigured@details@wil@@YA_NPEAUwil_FeatureState@@I_NW4wil_FeatureStore@@@Z @ 0x18003FA18
 * Callers:
 *     ?WilApiImpl_GetFeatureEnabledState@details@wil@@YA?AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_TIME@@@Z @ 0x18003FC70 (-WilApiImpl_GetFeatureEnabledState@details@wil@@YA-AW4FEATURE_ENABLED_STATE@@IW4FEATURE_CHANGE_T.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x18003D660 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z @ 0x18003D954 (-wil_details_StagingConfig_Load@@YAJPEAUwil_details_StagingConfig@@W4wil_FeatureStore@@_KPEAXH@Z.c)
 *     ?wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureState@@IH@Z @ 0x18003DC3C (-wil_details_StagingConfig_QueryFeatureState@@YAHPEAUwil_details_StagingConfig@@PEAUwil_FeatureS.c)
 *     ?wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z @ 0x18003DDFC (-wil_details_StagingConfig_AreAnyFeaturesConfigured@@YAHPEAUwil_details_StagingConfig@@@Z.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x18003E034 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x1800400E8 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     __security_check_cookie @ 0x18009CCC0 (__security_check_cookie.c)
 */

bool __fastcall wil::details::IsFeatureConfigured(
        __int64 a1,
        int a2,
        __int64 a3,
        unsigned int a4,
        volatile signed __int32 *a5)
{
  bool v7; // r13
  struct wil_details_StagingConfig *v8; // r14
  int v9; // r12d
  int FeatureState; // esi
  _DWORD *v11; // rdi
  HANDLE ProcessHeap; // rax
  int v13; // edi
  struct wil_details_FeatureTestState *i; // rax
  __int128 v15; // xmm1
  char v16; // cl
  int v17; // edx
  bool v18; // di
  int v19; // ebx
  volatile signed __int32 *v20; // rsi
  int v22; // [rsp+30h] [rbp-D0h] BYREF
  int v23; // [rsp+34h] [rbp-CCh] BYREF
  volatile signed __int32 *v24; // [rsp+38h] [rbp-C8h]
  __int128 v25; // [rsp+40h] [rbp-C0h]
  __int128 v26; // [rsp+50h] [rbp-B0h]
  unsigned int v27[6]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+78h] [rbp-88h]
  LPVOID lpMem; // [rsp+98h] [rbp-68h]
  int v30; // [rsp+B0h] [rbp-50h]
  _BYTE v31[208]; // [rsp+C0h] [rbp-40h] BYREF

  v24 = a5;
  v7 = !g_wil_details_testStates && (*(_BYTE *)a5 & 3) == 0;
  v8 = g_wil_details_stagingConfigForUser;
  v22 = 1;
  v9 = (unsigned __int8)a3;
  FeatureState = 0;
  v11 = (_DWORD *)((unsigned __int64)&v22 & -(__int64)v7);
  if ( !a4 )
    v8 = g_wil_details_stagingConfigForMachine;
  if ( v8 )
  {
    if ( v11 )
      *v11 = wil_details_StagingConfig_AreAnyFeaturesConfigured(v8);
    FeatureState = wil_details_StagingConfig_QueryFeatureState(v8, (struct wil_FeatureState *)a1, a2, v9);
  }
  else
  {
    if ( v11 )
      *v11 = 0;
    if ( !g_wil_details_preventOnDemandStagingConfigReads
      && !(unsigned int)wil_details_StagingConfig_Load(v27, a4, a3, v31) )
    {
      FeatureState = wil_details_StagingConfig_QueryFeatureState(
                       (struct wil_details_StagingConfig *)v27,
                       (struct wil_FeatureState *)a1,
                       a2,
                       v9);
      if ( v11 )
        *v11 = wil_details_StagingConfig_AreAnyFeaturesConfigured((struct wil_details_StagingConfig *)v27);
      if ( v30 )
      {
        ProcessHeap = GetProcessHeap();
        HeapFree(ProcessHeap, 0, lpMem);
        lpMem = 0LL;
        v28 = 0LL;
      }
    }
  }
  if ( g_wil_details_testStates )
  {
    if ( (unsigned int)wil_HasFeatureTestState(a2, (enum wil_FeatureEnabledState *)&v23) )
    {
      if ( !FeatureState )
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 16) = 0;
        FeatureState = 1;
      }
      *(_DWORD *)a1 = v23;
    }
    v13 = 0;
    if ( g_wil_details_testStates )
    {
      AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
      for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
      {
        if ( *((_DWORD *)i + 1) == a2 && *(_DWORD *)i == 1 )
        {
          v13 = 1;
          v15 = *((_OWORD *)i + 1);
          v25 = *(_OWORD *)i;
          v26 = v15;
          break;
        }
      }
      ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
    }
    v16 = v13 != 0 ? BYTE12(v25) : 0;
    v17 = v13 != 0 ? v26 : 0;
    if ( v13 )
    {
      if ( !FeatureState )
      {
        *(_QWORD *)a1 = 0LL;
        *(_QWORD *)(a1 + 8) = 0LL;
        *(_DWORD *)(a1 + 16) = 0;
        FeatureState = 1;
      }
      *(_BYTE *)(a1 + 4) = v16;
      *(_DWORD *)(a1 + 12) = v17;
    }
  }
  v18 = FeatureState != 0;
  if ( v7 )
  {
    v19 = v22;
    v20 = v24;
    wil_details_SetEnabledAndHasNotificationStateProperties(v24, (v22 != 0) + 1, 0);
    if ( !v19 )
      wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
        &wil::details::g_enabledStateManager,
        v20,
        0LL);
  }
  return v18;
}
