/*
 * XREFs of __delayLoadHelper2 @ 0x1800256C0
 * Callers:
 *     __tailMerge_ext_ms_win_com_ole32_l1_1_1_dll @ 0x180026AC0 (__tailMerge_ext_ms_win_com_ole32_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_2_dll @ 0x180026B60 (__tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_2_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x180026C20 (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x180026CC0 (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_onecore_appmodel_veventdispatcher_l1_1_0_dll @ 0x180026DC0 (__tailMerge_ext_ms_onecore_appmodel_veventdispatcher_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_stream_l1_1_0_dll @ 0x180026E60 (__tailMerge_api_ms_win_shcore_stream_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_stream_winrt_l1_1_0_dll @ 0x180026F80 (__tailMerge_api_ms_win_shcore_stream_winrt_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x180027040 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll @ 0x1800270E0 (__tailMerge_api_ms_win_appmodel_runtime_l1_1_1_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(
           &_ImageBase,
           a1,
           _pfnDefaultDliFailureHook2,
           DelayLoadFailureHook,
           a2,
           _ResolveDelayLoadedAPIFlags);
}
