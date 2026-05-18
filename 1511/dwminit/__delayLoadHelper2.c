/*
 * XREFs of __delayLoadHelper2 @ 0x1800067A0
 * Callers:
 *     __tailMerge_SspiCli_dll @ 0x180006B10 (__tailMerge_SspiCli_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x180006BB0 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_winsvc_l1_2_0_dll @ 0x180006C50 (__tailMerge_api_ms_win_service_winsvc_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_security_lsalookup_l1_1_1_dll @ 0x180006D50 (__tailMerge_api_ms_win_security_lsalookup_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_5_0_dll @ 0x180006E60 (__tailMerge_ext_ms_win_ntuser_misc_l1_5_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x180006F60 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_2_0_dll @ 0x180007000 (__tailMerge_ext_ms_win_ntuser_private_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_security_chambers_l1_1_0_dll @ 0x180007150 (__tailMerge_ext_ms_win_security_chambers_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll @ 0x1800071F0 (__tailMerge_ext_ms_onecore_comp_dwmmonitor_l1_1_0_dll.c)
 *     __tailMerge_GDI32_dll @ 0x180007320 (__tailMerge_GDI32_dll.c)
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
