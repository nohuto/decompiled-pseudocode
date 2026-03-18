/*
 * XREFs of Feature_GdiUMA__private_IsEnabledNoReportingNoInline @ 0x1403265E4
 * Callers:
 *     NtGdiFastPolyPolyline @ 0x14027E1D0 (NtGdiFastPolyPolyline.c)
 * Callees:
 *     Feature_GdiUMA__private_IsEnabledFallback @ 0x1403265C8 (Feature_GdiUMA__private_IsEnabledFallback.c)
 */

__int64 Feature_GdiUMA__private_IsEnabledNoReportingNoInline()
{
  if ( (Feature_GdiUMA__private_featureState & 2) != 0 )
    return Feature_GdiUMA__private_featureState & 1;
  else
    return Feature_GdiUMA__private_IsEnabledFallback((unsigned int)Feature_GdiUMA__private_featureState, 0);
}
