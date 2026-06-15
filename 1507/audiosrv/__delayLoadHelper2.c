/*
 * XREFs of __delayLoadHelper2 @ 0x180032270
 * Callers:
 *     __tailMerge_OnDemandBrokerClient_dll @ 0x180042BE0 (__tailMerge_OnDemandBrokerClient_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x180043E80 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180043F80 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x180044040 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x1800440E0 (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_1_dll @ 0x180044350 (__tailMerge_api_ms_win_devices_query_l1_1_1_dll.c)
 *     __tailMerge_PROPSYS_dll @ 0x180044470 (__tailMerge_PROPSYS_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180044550 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180044690 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
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
