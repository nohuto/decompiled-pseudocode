/*
 * XREFs of ?GetCachedFeatureEnabledState@?$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@wil@@CA?AW4wil_details_CachedFeatureEnabledState@@_N@Z @ 0x180030F58
 * Callers:
 *     ?IsEnabled@?$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@wil@@SA_NXZ @ 0x18002AD10 (-IsEnabled@-$Feature@U__WilFeatureTraits_Feature_ActionCenterNotification@@@wil@@SA_NXZ.c)
 *     ??0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV?$map@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@U?$less@V?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@@2@V?$allocator@U?$pair@$$CBV?$basic_string@_WU?$char_traits@_W@std@@V?$allocator@_W@2@@std@@V12@@std@@@2@@std@@@Z @ 0x180060CD8 (--0NotificationManagerService@Actions@CreativeFramework@@QEAA@AEBUActionContext@12@AEBV-$map@V-$.c)
 * Callees:
 *     ?wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCache@@W4wil_details_CachedFeatureEnabledState@@W4wil_details_CachedHasNotificationState@@@Z @ 0x180007440 (-wil_details_SetEnabledAndHasNotificationStateProperties@@YAXPEATwil_details_FeaturePropertyCach.c)
 *     ?wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z @ 0x180007EF4 (-wil_HasFeatureTestState@@YAHIPEAW4wil_FeatureEnabledState@@@Z.c)
 *     ?SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwil_details_FeaturePropertyCache@@W4wil_FeatureChangeTime@@@Z @ 0x18000A5F8 (-SubscribeFeaturePropertyCacheToEnabledStateChanges@EnabledStateManager@details@wil@@QEAAXPEATwi.c)
 *     _guard_dispatch_icall_nop @ 0x180070170 (_guard_dispatch_icall_nop.c)
 */

__int64 wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetCachedFeatureEnabledState()
{
  int v0; // esi
  unsigned int v1; // ebx
  int v2; // eax
  int v3; // ecx
  int v4; // edi
  unsigned int v5; // ecx
  bool v6; // al
  int v7; // ebp
  struct wil_details_FeatureTestState *i; // rax
  int v9; // r9d
  int v11; // [rsp+48h] [rbp+10h] BYREF

  v0 = `wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data & 3;
  v1 = v0;
  if ( (`wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data & 3) != 0
    && (`wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data & 0x30) != 0 )
  {
    return v1;
  }
  if ( g_wil_details_internalGetFeatureEnabledState )
  {
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_internalGetFeatureEnabledState)(8598334LL, 0LL);
  }
  else
  {
    if ( !g_wil_details_apiGetFeatureEnabledState )
    {
      v3 = 0;
      goto LABEL_11;
    }
    if ( (unsigned int)wil_HasFeatureTestState(8598334, (enum wil_FeatureEnabledState *)&v11) )
    {
      v3 = v11;
      goto LABEL_11;
    }
    v2 = ((__int64 (__fastcall *)(__int64, _QWORD))g_wil_details_apiGetFeatureEnabledState)(8598334LL, 0LL);
  }
  v3 = v2;
LABEL_11:
  v4 = ((v3 & 0x80u) != 0) + 1;
  v5 = v3 & 0xFFFFFF7F;
  if ( v5 )
    v6 = v5 == 2;
  else
    v6 = 1;
  v1 = v6 + 1;
  wil::details::EnabledStateManager::SubscribeFeaturePropertyCacheToEnabledStateChanges(
    (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
    (__int64)&`wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data,
    0);
  if ( !g_wil_details_testStates )
    goto LABEL_22;
  v7 = 0;
  AcquireSRWLockShared(&g_wil_details_testFeatureStateLock);
  for ( i = g_wil_details_testStates; i; i = (struct wil_details_FeatureTestState *)*((_QWORD *)i + 3) )
  {
    if ( *((_DWORD *)i + 1) == 8598334 && !*(_DWORD *)i )
    {
      v7 = 1;
      break;
    }
  }
  ReleaseSRWLockShared(&g_wil_details_testFeatureStateLock);
  if ( !v7 )
  {
LABEL_22:
    if ( v0 )
    {
      do
        v9 = `wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data;
      while ( (((unsigned int)`wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data >> 4) & 3) != (unsigned __int8)v4
           && v9 != _InterlockedCompareExchange(
                      &`wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data,
                      ((unsigned __int8)`wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data ^ (unsigned __int8)(16 * v4)) & 0x30 ^ `wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data,
                      `wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data) );
    }
    else
    {
      wil_details_SetEnabledAndHasNotificationStateProperties(
        &`wil::Feature<__WilFeatureTraits_Feature_ActionCenterNotification>::GetFeaturePropertyCache'::`2'::data,
        v1,
        v4);
    }
  }
  return v1;
}
