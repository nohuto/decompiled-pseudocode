/*
 * XREFs of __delayLoadHelper2 @ 0x18002B540
 * Callers:
 *     __tailMerge_api_ms_win_shcore_scaling_l1_1_1_dll @ 0x18002F5F0 (__tailMerge_api_ms_win_shcore_scaling_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_shcore_thread_l1_1_0_dll @ 0x18002F6C0 (__tailMerge_api_ms_win_shcore_thread_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_ntuser_sysparams_l1_1_0_dll @ 0x18002F7A0 (__tailMerge_api_ms_win_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x18002F840 (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll @ 0x18002F960 (__tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x18002FAA0 (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
 *     __tailMerge_dwmapi_dll @ 0x18002FB20 (__tailMerge_dwmapi_dll.c)
 *     __tailMerge_GDI32_dll @ 0x18002FC40 (__tailMerge_GDI32_dll.c)
 *     __tailMerge_USER32_dll @ 0x18002FCE0 (__tailMerge_USER32_dll.c)
 *     __tailMerge_ext_ms_win_core_resourcemanager_l1_2_0_dll @ 0x18002FE00 (__tailMerge_ext_ms_win_core_resourcemanager_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_propertysetprivate_l1_1_1_dll @ 0x18002FEA0 (__tailMerge_api_ms_win_core_winrt_propertysetprivate_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_shcore_comhelpers_l1_1_0_dll @ 0x18002FF60 (__tailMerge_api_ms_win_shcore_comhelpers_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_stream_l1_1_0_dll @ 0x180030000 (__tailMerge_api_ms_win_shcore_stream_l1_1_0_dll.c)
 *     __tailMerge_twinapi_appcore_dll @ 0x1800300A0 (__tailMerge_twinapi_appcore_dll.c)
 *     __tailMerge_api_ms_win_appmodel_state_l1_1_1_dll @ 0x1800301C0 (__tailMerge_api_ms_win_appmodel_state_l1_1_1_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, _pfnDefaultDliFailureHook2, DelayLoadFailureHook, a2, 2048);
}
