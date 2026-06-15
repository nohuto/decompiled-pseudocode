/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x140018F60
 * Callers:
 *     __imp_load_CoCreateGuid @ 0x140018F40 (__imp_load_CoCreateGuid.c)
 *     __imp_load_CoUninitialize @ 0x140018FE0 (__imp_load_CoUninitialize.c)
 *     __imp_load_CoCreateInstance @ 0x1400190A0 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoRegisterClassObject @ 0x140019100 (__imp_load_CoRegisterClassObject.c)
 *     __imp_load_CoResumeClassObjects @ 0x140019140 (__imp_load_CoResumeClassObjects.c)
 *     __imp_load_CoInitializeSecurity @ 0x140019160 (__imp_load_CoInitializeSecurity.c)
 *     __imp_load_CoInitializeEx @ 0x140019240 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoRevokeClassObject @ 0x140019260 (__imp_load_CoRevokeClassObject.c)
 *     __imp_load_PropVariantClear @ 0x140019280 (__imp_load_PropVariantClear.c)
 *     __imp_load_CoTaskMemAlloc @ 0x1400192A0 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoTaskMemFree @ 0x1400192C0 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_CoImpersonateClient @ 0x1400192E0 (__imp_load_CoImpersonateClient.c)
 *     __imp_load_CoRevertToSelf @ 0x140019300 (__imp_load_CoRevertToSelf.c)
 *     __imp_load_StringFromCLSID @ 0x140019380 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CLSIDFromString @ 0x1400193A0 (__imp_load_CLSIDFromString.c)
 *     __imp_load_CoTaskMemRealloc @ 0x140019440 (__imp_load_CoTaskMemRealloc.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x140016D30 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_core_com_l1_1_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_core_com_l1_1_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
