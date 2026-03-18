/*
 * XREFs of InitRotationManager @ 0x14029A320
 * Callers:
 *     <none>
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140149244 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401492EC (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 InitRotationManager()
{
  __int64 v0; // rax
  __int64 v1; // rdx
  __int64 v2; // rcx
  __int64 v3; // rbx
  __int64 v4; // rdx
  __int64 v5; // rcx
  unsigned __int8 v7; // [rsp+30h] [rbp+8h]

  if ( (Feature_BrokeredDisplays_RotMgr__private_featureState & 0x10) == 0 )
  {
    v7 = Feature_BrokeredDisplays_RotMgr__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_RotMgr__private_descriptor,
      Feature_BrokeredDisplays_RotMgr__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v7,
      3,
      (__int64)&Feature_BrokeredDisplays_RotMgr__private_descriptor);
  }
  v0 = Win32AllocPoolZInit(40LL, 1836347989LL);
  v3 = v0;
  if ( v0 )
  {
    *(_QWORD *)(v0 + 8) = 0LL;
    *(_QWORD *)(v0 + 16) = 0LL;
    *(_DWORD *)(v0 + 24) = 0;
    *(_QWORD *)(v0 + 28) = 1LL;
    *(_DWORD *)(v0 + 36) = 0;
    *(_QWORD *)v0 = &CDispBrokerRotationMgr::`vftable';
  }
  else
  {
    v3 = 0LL;
  }
  *(_QWORD *)(W32GetUserSessionState(v2, v1) + 66064) = v3;
  return *(_QWORD *)(W32GetUserSessionState(v5, v4) + 66064) == 0LL ? 0xC0000017 : 0;
}
