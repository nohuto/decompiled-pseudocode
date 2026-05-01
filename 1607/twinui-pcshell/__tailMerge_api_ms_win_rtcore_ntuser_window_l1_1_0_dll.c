/*
 * XREFs of __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x18002F840
 * Callers:
 *     __imp_load_FindWindowW @ 0x18002F820 (__imp_load_FindWindowW.c)
 *     __imp_load_GetPropW @ 0x18002F8C0 (__imp_load_GetPropW.c)
 *     __imp_load_GetForegroundWindow @ 0x18002F8E0 (__imp_load_GetForegroundWindow.c)
 *     __imp_load_SetPropW @ 0x18002F900 (__imp_load_SetPropW.c)
 *     __imp_load_SetWindowTextW @ 0x18002F9E0 (__imp_load_SetWindowTextW.c)
 *     __imp_load_PostThreadMessageW @ 0x18002FA00 (__imp_load_PostThreadMessageW.c)
 *     __imp_load_DispatchMessageW @ 0x18002FA20 (__imp_load_DispatchMessageW.c)
 *     __imp_load_TranslateMessage @ 0x18002FA40 (__imp_load_TranslateMessage.c)
 *     __imp_load_PeekMessageW @ 0x18002FA60 (__imp_load_PeekMessageW.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002B540 (__delayLoadHelper2.c)
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
