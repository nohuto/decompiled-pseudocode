/*
 * XREFs of Feature_ContainerCompatibleXferDc__private_IsEnabledFallback @ 0x140297108
 * Callers:
 *     Feature_ContainerCompatibleXferDc__private_IsEnabledNoReportingNoInline @ 0x14019780C (Feature_ContainerCompatibleXferDc__private_IsEnabledNoReportingNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1401491A4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ContainerCompatibleXferDc__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &wil_details_featureDescriptors_a);
}
