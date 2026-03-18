/*
 * XREFs of Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledDeviceUsageNoInline @ 0x1402AF24C
 * Callers:
 *     NtUserQuerySendMessage @ 0x1402B9450 (NtUserQuerySendMessage.c)
 * Callees:
 *     Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledFallback @ 0x1402AF288 (Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_NtUserQuerySendMessageTelemetry__private_featureState & 0x10) != 0 )
    return Feature_Servicing_NtUserQuerySendMessageTelemetry__private_featureState & 1;
  else
    return Feature_Servicing_NtUserQuerySendMessageTelemetry__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_NtUserQuerySendMessageTelemetry__private_featureState,
             3LL);
}
