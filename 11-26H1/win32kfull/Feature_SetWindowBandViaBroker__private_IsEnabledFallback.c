/*
 * XREFs of Feature_SetWindowBandViaBroker__private_IsEnabledFallback @ 0x1402AF2E0
 * Callers:
 *     Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline @ 0x1402AF2A4 (Feature_SetWindowBandViaBroker__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1401491A4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_SetWindowBandViaBroker__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_SetWindowBandViaBroker__private_descriptor);
}
