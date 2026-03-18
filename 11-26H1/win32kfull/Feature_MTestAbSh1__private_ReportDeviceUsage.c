/*
 * XREFs of Feature_MTestAbSh1__private_ReportDeviceUsage @ 0x1402061AC
 * Callers:
 *     xxxRealInternalGetMessage @ 0x140057CC8 (xxxRealInternalGetMessage.c)
 * Callees:
 *     wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath @ 0x140149244 (wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath.c)
 *     wil_details_FeatureReporting_ReportUsageToService @ 0x1401492EC (wil_details_FeatureReporting_ReportUsageToService.c)
 */

void Feature_MTestAbSh1__private_ReportDeviceUsage()
{
  unsigned __int8 v0; // [rsp+30h] [rbp+8h]

  if ( (Feature_MTestAbSh1__private_featureState & 0x10) == 0 )
  {
    v0 = Feature_MTestAbSh1__private_featureState | 1;
    wil_details_FeatureReporting_ReportUsageToService(
      (__int64)&Feature_MTestAbSh1__private_descriptor,
      Feature_MTestAbSh1__private_featureState | 1,
      3u,
      1LL);
    wil_details_FeatureStateCache_TryEnableDeviceUsageFastPath(v0, 3, (__int64)&Feature_MTestAbSh1__private_descriptor);
  }
}
