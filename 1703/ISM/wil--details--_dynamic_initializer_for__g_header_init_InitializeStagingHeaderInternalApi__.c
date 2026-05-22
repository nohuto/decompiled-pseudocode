/*
 * XREFs of wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__ @ 0x1800013B0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void (__fastcall *wil::details::_dynamic_initializer_for__g_header_init_InitializeStagingHeaderInternalApi__())(wil::details *__hidden this, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *)
{
  void (__fastcall *result)(wil::details *__hidden, struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *); // rax

  g_wil_details_internalGetFeatureEnabledState = (enum FEATURE_ENABLED_STATE (*)(unsigned int, enum FEATURE_CHANGE_TIME))wil::details::WilApiImpl_GetFeatureEnabledState;
  g_wil_details_internalRecordFeatureUsage = (void (*)(unsigned int, unsigned int, unsigned int, const char *))wil::details::WilApiImpl_RecordFeatureUsage;
  g_wil_details_internalSubscribeFeatureStateChangeNotification = (void (*)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ **, void (*)(void *), void *))wil::details::WilApiImpl_SubscribeFeatureStateChangeNotification;
  result = wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  g_wil_details_internalUnsubscribeFeatureStateChangeNotification = (void (*)(struct FEATURE_STATE_CHANGE_SUBSCRIPTION__ *))wil::details::WilApiImpl_UnsubscribeFeatureStateChangeNotification;
  return result;
}
