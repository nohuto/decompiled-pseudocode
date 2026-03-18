/*
 * XREFs of Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline @ 0x1400F9A0C
 * Callers:
 *     ?RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1400F9A48 (-RequestAsyncRefreshOrientation@CDispBrokerRotationMgr@@AEAAXPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@.c)
 *     zzzResetSharedDesktops @ 0x1401ED3F0 (zzzResetSharedDesktops.c)
 *     xxxRemoteReconnect @ 0x1402D3988 (xxxRemoteReconnect.c)
 * Callees:
 *     Feature_DispBrokerOptimizations__private_IsEnabledFallback @ 0x140297194 (Feature_DispBrokerOptimizations__private_IsEnabledFallback.c)
 */

__int64 Feature_DispBrokerOptimizations__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_DispBrokerOptimizations__private_featureState & 0x10) != 0 )
    return Feature_DispBrokerOptimizations__private_featureState & 1;
  else
    return Feature_DispBrokerOptimizations__private_IsEnabledFallback(
             (unsigned int)Feature_DispBrokerOptimizations__private_featureState,
             3LL);
}
