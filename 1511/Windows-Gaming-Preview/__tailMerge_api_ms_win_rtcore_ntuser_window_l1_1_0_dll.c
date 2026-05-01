/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x180026B90
 * Callers:
 *     __imp_load_PostThreadMessageW @ 0x180026B70 (__imp_load_PostThreadMessageW.c)
 *     __imp_load_DispatchMessageW @ 0x180026C10 (__imp_load_DispatchMessageW.c)
 *     __imp_load_TranslateMessage @ 0x180026C30 (__imp_load_TranslateMessage.c)
 *     __imp_load_PeekMessageW @ 0x180026C50 (__imp_load_PeekMessageW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180025590 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_api_ms_win_rtcore_ntuser_window_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
