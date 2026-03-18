/*
 * XREFs of Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck @ 0x140243C80
 * Callers:
 *     DispBrokerGetCurrentModeImpl @ 0x140243BC0 (DispBrokerGetCurrentModeImpl.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140149244 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401492EC (wil_details_FeatureReporting_ReportUsageToService.c)
 */

__int64 Feature_BrokeredDisplays_ConsoleSessions__private_IsEnabledPreCheck()
{
  unsigned __int8 v1; // [rsp+30h] [rbp+8h]

  if ( (Feature_BrokeredDisplays_ConsoleSessions__private_featureState & 0x10) == 0 )
  {
    v1 = Feature_BrokeredDisplays_ConsoleSessions__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_BrokeredDisplays_ConsoleSessions__private_descriptor,
      Feature_BrokeredDisplays_ConsoleSessions__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(
      v1,
      3,
      (__int64)&Feature_BrokeredDisplays_ConsoleSessions__private_descriptor);
  }
  return 1LL;
}
