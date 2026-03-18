/*
 * XREFs of Feature_837235000__private_IsEnabledFallback @ 0x14032C6C4
 * Callers:
 *     Feature_837235000__private_IsEnabledDeviceUsageNoInline @ 0x14032C688 (Feature_837235000__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1401491A4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_837235000__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_837235000__private_descriptor);
}
