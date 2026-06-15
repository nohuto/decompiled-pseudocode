/*
 * XREFs of __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x180047DC0
 * Callers:
 *     __imp_load_CoGetMalloc @ 0x180047DA0 (__imp_load_CoGetMalloc.c)
 *     __imp_load_CoTaskMemAlloc @ 0x180047E40 (__imp_load_CoTaskMemAlloc.c)
 *     __imp_load_CoCreateInstance @ 0x180047E60 (__imp_load_CoCreateInstance.c)
 *     __imp_load_CoTaskMemFree @ 0x180047E80 (__imp_load_CoTaskMemFree.c)
 *     __imp_load_PropVariantClear @ 0x1800480A0 (__imp_load_PropVariantClear.c)
 *     __imp_load_CoDisconnectObject @ 0x1800480C0 (__imp_load_CoDisconnectObject.c)
 *     __imp_load_CoTaskMemRealloc @ 0x1800480E0 (__imp_load_CoTaskMemRealloc.c)
 *     __imp_load_CoInitializeEx @ 0x180048100 (__imp_load_CoInitializeEx.c)
 *     __imp_load_CoUninitialize @ 0x180048120 (__imp_load_CoUninitialize.c)
 *     __imp_load_CLSIDFromString @ 0x180048140 (__imp_load_CLSIDFromString.c)
 *     __imp_load_StringFromGUID2 @ 0x180048160 (__imp_load_StringFromGUID2.c)
 *     __imp_load_PropVariantCopy @ 0x1800481A0 (__imp_load_PropVariantCopy.c)
 *     __imp_load_StringFromCLSID @ 0x1800481C0 (__imp_load_StringFromCLSID.c)
 *     __imp_load_CoSetProxyBlanket @ 0x1800481E0 (__imp_load_CoSetProxyBlanket.c)
 *     __imp_load_CoCreateGuid @ 0x180048200 (__imp_load_CoCreateGuid.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18003A020 (__delayLoadHelper2.c)
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
