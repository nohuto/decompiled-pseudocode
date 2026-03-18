/*
 * XREFs of Feature_ShellWinKeyUpdate__private_IsEnabledFallback @ 0x14029715C
 * Callers:
 *     Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline @ 0x140155058 (Feature_ShellWinKeyUpdate__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1401491A4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_ShellWinKeyUpdate__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_ShellWinKeyUpdate__private_descriptor);
}
