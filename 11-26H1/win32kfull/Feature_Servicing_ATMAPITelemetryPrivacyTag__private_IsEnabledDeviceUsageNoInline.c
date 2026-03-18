/*
 * XREFs of Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledDeviceUsageNoInline @ 0x14032A1CC
 * Callers:
 *     GreNamedEscape @ 0x14027EC38 (GreNamedEscape.c)
 * Callees:
 *     Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledFallback @ 0x14032A208 (Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledFallback.c)
 */

__int64 Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledDeviceUsageNoInline()
{
  if ( (Feature_Servicing_ATMAPITelemetryPrivacyTag__private_featureState & 0x10) != 0 )
    return Feature_Servicing_ATMAPITelemetryPrivacyTag__private_featureState & 1;
  else
    return Feature_Servicing_ATMAPITelemetryPrivacyTag__private_IsEnabledFallback(
             (unsigned int)Feature_Servicing_ATMAPITelemetryPrivacyTag__private_featureState,
             3LL);
}
