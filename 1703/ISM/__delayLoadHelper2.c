/*
 * XREFs of __delayLoadHelper2 @ 0x18002FD40
 * Callers:
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x18009DA17 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x18009DAA8 (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x18009DB2D (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll @ 0x18009DBBE (__tailMerge_api_ms_win_gdi_dpiinfo_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_session_l1_2_0_dll @ 0x18009DC43 (__tailMerge_api_ms_win_rtcore_session_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_mininput_cursorhost_l1_1_0_dll @ 0x18009DCC8 (__tailMerge_ext_ms_win_mininput_cursorhost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll @ 0x18009DD4D (__tailMerge_ext_ms_win_ntuser_mit_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_2_dll @ 0x18009DE32 (__tailMerge_ext_ms_win_rtcore_minuser_input_l1_1_2_dll.c)
 *     __tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll @ 0x18009E232 (__tailMerge_ext_ms_win_mininput_inputhost_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll @ 0x18009E2D2 (__tailMerge_api_ms_win_ntuser_rectangle_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_keyboard_l1_3_0_dll @ 0x18009E357 (__tailMerge_ext_ms_win_ntuser_keyboard_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_2_dll @ 0x18009E3DC (__tailMerge_ext_ms_win_ntuser_private_l1_3_2_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll @ 0x18009E461 (__tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll @ 0x18009E4FE (__tailMerge_api_ms_win_security_accesshlpr_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x18009E58F (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll @ 0x18009E692 (__tailMerge_ext_ms_win_ntuser_rim_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_security_provider_ansi_l1_1_0_dll @ 0x18009E78F (__tailMerge_api_ms_win_security_provider_ansi_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_windowstation_l1_1_1_dll @ 0x18009E814 (__tailMerge_ext_ms_win_ntuser_windowstation_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll @ 0x18009E8A5 (__tailMerge_ext_ms_win_rtcore_ntuser_dpi_l1_2_0_dll.c)
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
