/*
 * XREFs of __delayLoadHelper2 @ 0x180029950
 * Callers:
 *     __tailMerge_ksuser_dll @ 0x180035A30 (__tailMerge_ksuser_dll.c)
 *     __tailMerge_OLEAUT32_dll @ 0x180036EB0 (__tailMerge_OLEAUT32_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x180036F50 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_security_base_l1_2_0_dll @ 0x180037010 (__tailMerge_api_ms_win_security_base_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800370B0 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_power_base_l1_1_0_dll @ 0x180037150 (__tailMerge_api_ms_win_power_base_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_config_l1_1_1_dll @ 0x180037210 (__tailMerge_api_ms_win_devices_config_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_power_setting_l1_1_0_dll @ 0x1800372B0 (__tailMerge_api_ms_win_power_setting_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_devices_query_l1_1_1_dll @ 0x1800373B0 (__tailMerge_api_ms_win_devices_query_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll @ 0x180037AB0 (__tailMerge_api_ms_win_core_winrt_error_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_service_core_l1_1_1_dll @ 0x180037BF0 (__tailMerge_api_ms_win_service_core_l1_1_1_dll.c)
 *     __tailMerge_PROPSYS_dll @ 0x180037D10 (__tailMerge_PROPSYS_dll.c)
 *     __tailMerge_HID_DLL @ 0x180037DF0 (__tailMerge_HID_DLL.c)
 *     __tailMerge_AVRT_dll @ 0x180037F10 (__tailMerge_AVRT_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x180038060 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll @ 0x180038120 (__tailMerge_ext_ms_win_session_wtsapi32_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_pal_l1_1_2_dll @ 0x180038240 (__tailMerge_ext_ms_win_audiocore_pal_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll @ 0x1800382E0 (__tailMerge_ext_ms_win_audiocore_coreaudiopolicymanager_l1_1_0_dll.c)
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
