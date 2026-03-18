/*
 * XREFs of __delayLoadHelper2 @ 0x1800B71B0
 * Callers:
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800BD710 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_5_1_dll @ 0x1800BD7B0 (__tailMerge_ext_ms_win_ntuser_misc_l1_5_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1800BD850 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x1800BD930 (__tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x1800BDA50 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll @ 0x1800BDB10 (__tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll @ 0x1800BDBF0 (__tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x1800BDC90 (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x1800BDD30 (__tailMerge_ext_ms_win_gdi_private_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1800BDE10 (__tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll.c)
 *     __tailMerge_WindowsCodecs_dll @ 0x1800BDF70 (__tailMerge_WindowsCodecs_dll.c)
 *     __tailMerge_dxgi_dll @ 0x1800BE010 (__tailMerge_dxgi_dll.c)
 *     __tailMerge_d2d1_dll @ 0x1800BE0B0 (__tailMerge_d2d1_dll.c)
 *     __tailMerge_DWrite_dll @ 0x1800BE1D0 (__tailMerge_DWrite_dll.c)
 *     __tailMerge_NInput_dll @ 0x1800BE270 (__tailMerge_NInput_dll.c)
 *     __tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll @ 0x1800BE410 (__tailMerge_api_ms_win_rtcore_ntuser_wmpointer_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x1800BED80 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_1_0_dll @ 0x1800BEE20 (__tailMerge_ext_ms_win_compositor_hosting_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll @ 0x1800BEFC0 (__tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll @ 0x1800BF1C0 (__tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll.c)
 *     __tailMerge_d3d11_dll @ 0x1800BF280 (__tailMerge_d3d11_dll.c)
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
