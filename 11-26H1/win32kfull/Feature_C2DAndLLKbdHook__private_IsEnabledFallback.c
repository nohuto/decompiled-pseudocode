/*
 * XREFs of Feature_C2DAndLLKbdHook__private_IsEnabledFallback @ 0x1402A7CBC
 * Callers:
 *     Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline @ 0x1402A7C80 (Feature_C2DAndLLKbdHook__private_IsEnabledDeviceUsageNoInline.c)
 * Callees:
 *     wil_details_IsEnabledFallback @ 0x1401491A4 (wil_details_IsEnabledFallback.c)
 */

__int64 __fastcall Feature_C2DAndLLKbdHook__private_IsEnabledFallback(__int64 a1, unsigned int a2)
{
  return wil_details_IsEnabledFallback(a1, a2, &Feature_C2DAndLLKbdHook__private_descriptor);
}
