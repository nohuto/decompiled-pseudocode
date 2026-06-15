/*
 * XREFs of __delayLoadHelper2 @ 0x18003A020
 * Callers:
 *     __tailMerge_ksuser_dll @ 0x180046A80 (__tailMerge_ksuser_dll.c)
 *     __tailMerge_OnDemandBrokerClient_dll @ 0x180046B20 (__tailMerge_OnDemandBrokerClient_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x180047DC0 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180047EC0 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x180047F80 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x180048020 (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_1_dll @ 0x180048290 (__tailMerge_api_ms_win_devices_query_l1_1_1_dll.c)
 *     __tailMerge_PROPSYS_dll @ 0x1800483B0 (__tailMerge_PROPSYS_dll.c)
 *     __tailMerge_HID_DLL @ 0x180048490 (__tailMerge_HID_DLL.c)
 *     __tailMerge_AVRT_dll @ 0x1800485B0 (__tailMerge_AVRT_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x1800486B0 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x1800487F0 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_pal_l1_1_1_dll @ 0x180048900 (__tailMerge_ext_ms_win_audiocore_pal_l1_1_1_dll.c)
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
