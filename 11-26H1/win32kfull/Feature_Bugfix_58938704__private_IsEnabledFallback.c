/*
 * XREFs of Feature_Bugfix_58938704__private_IsEnabledFallback @ 0x1402C2CF4
 * Callers:
 *     Feature_Bugfix_58938704__private_IsEnabledDeviceUsageNoInline @ 0x1402C2CB8 (Feature_Bugfix_58938704__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1401491A4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_Bugfix_58938704__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_Bugfix_58938704__private_descriptor);
}
