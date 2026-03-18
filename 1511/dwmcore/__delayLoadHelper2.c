/*
 * XREFs of __delayLoadHelper2 @ 0x1800B3CD0
 * Callers:
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x1800BAA90 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_5_0_dll @ 0x1800BAB30 (__tailMerge_ext_ms_win_ntuser_misc_l1_5_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1800BABD0 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x1800BACB0 (__tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x1800BADD0 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_private_l1_2_0_dll @ 0x1800BAE90 (__tailMerge_ext_ms_win_ntuser_private_l1_2_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll @ 0x1800BAF50 (__tailMerge_ext_ms_win_rtcore_gdi_object_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x1800BAFF0 (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_gdi_private_l1_1_0_dll @ 0x1800BB090 (__tailMerge_ext_ms_win_gdi_private_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1800BB170 (__tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll.c)
 *     __tailMerge_d3d11_dll @ 0x1800BB2D0 (__tailMerge_d3d11_dll.c)
 *     __tailMerge_dxgi_dll @ 0x1800BB370 (__tailMerge_dxgi_dll.c)
 *     __tailMerge_d2d1_dll @ 0x1800BB410 (__tailMerge_d2d1_dll.c)
 *     __tailMerge_DWrite_dll @ 0x1800BB4F0 (__tailMerge_DWrite_dll.c)
 *     __tailMerge_NInput_dll @ 0x1800BB590 (__tailMerge_NInput_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x1800BC010 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_compositor_hosting_l1_1_0_dll @ 0x1800BC0C0 (__tailMerge_ext_ms_win_compositor_hosting_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll @ 0x1800BC260 (__tailMerge_ext_ms_win_ntuser_window_l1_1_1_dll.c)
 *     __tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll @ 0x1800BC460 (__tailMerge_ext_ms_win_mininput_systeminputhost_l1_1_0_dll.c)
 *     __tailMerge_WindowsCodecs_dll @ 0x1800BC520 (__tailMerge_WindowsCodecs_dll.c)
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
