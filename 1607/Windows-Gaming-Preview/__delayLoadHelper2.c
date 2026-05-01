/*
 * XREFs of __delayLoadHelper2 @ 0x180025C40
 * Callers:
 *     __tailMerge_ext_ms_win_com_ole32_l1_1_1_dll @ 0x1800271E0 (__tailMerge_ext_ms_win_com_ole32_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_3_dll @ 0x180027280 (__tailMerge_api_ms_win_appmodel_runtime_internal_l1_1_3_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll @ 0x180027340 (__tailMerge_api_ms_win_rtcore_ntuser_synch_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll @ 0x1800273E0 (__tailMerge_api_ms_win_rtcore_ntuser_window_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_onecore_appmodel_veventdispatcher_l1_1_0_dll @ 0x1800274E0 (__tailMerge_ext_ms_onecore_appmodel_veventdispatcher_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_shcore_stream_l1_1_0_dll @ 0x180027580 (__tailMerge_api_ms_win_shcore_stream_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_capability_l1_1_0_dll @ 0x1800276A0 (__tailMerge_api_ms_win_security_capability_l1_1_0_dll.c)
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
