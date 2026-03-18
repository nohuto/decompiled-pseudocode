/*
 * XREFs of __delayLoadHelper2 @ 0x180061080
 * Callers:
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x180097F50 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_5_0_dll @ 0x180097FF0 (__tailMerge_ext_ms_win_ntuser_misc_l1_5_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x180098090 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x180098170 (__tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x180098290 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_2_0_dll @ 0x180098350 (__tailMerge_ext_ms_win_ntuser_private_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll @ 0x180098410 (__tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x1800984B0 (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x180098550 (__tailMerge_ext_ms_win_gdi_private_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x180098630 (__tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll.c)
 *     __tailMerge_d3d11_dll @ 0x180098790 (__tailMerge_d3d11_dll.c)
 *     __tailMerge_dxgi_dll @ 0x180098830 (__tailMerge_dxgi_dll.c)
 *     __tailMerge_d2d1_dll @ 0x1800988D0 (__tailMerge_d2d1_dll.c)
 *     __tailMerge_DWrite_dll @ 0x1800989D0 (__tailMerge_DWrite_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x180099370 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_1_0_dll @ 0x180099420 (__tailMerge_ext_ms_win_compositor_hosting_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll @ 0x1800995C0 (__tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll @ 0x180099770 (__tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll.c)
 *     __tailMerge_WindowsCodecs_dll @ 0x180099870 (__tailMerge_WindowsCodecs_dll.c)
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
