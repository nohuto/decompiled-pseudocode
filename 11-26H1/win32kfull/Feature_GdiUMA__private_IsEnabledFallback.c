/*
 * XREFs of Feature_GdiUMA__private_IsEnabledFallback @ 0x1403265C8
 * Callers:
 *     Feature_GdiUMA__private_IsEnabledNoReportingNoInline @ 0x1403265E4 (Feature_GdiUMA__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1401491A4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_GdiUMA__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_GdiUMA__private_descriptor);
}
