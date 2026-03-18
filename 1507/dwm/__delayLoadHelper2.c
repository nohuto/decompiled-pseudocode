/*
 * XREFs of __delayLoadHelper2 @ 0x140002C40
 * Callers:
 *     __tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll @ 0x140003700 (__tailMerge_ext_ms_win_ntuser_gui_l1_3_0_dll.c)
 *     __tailMerge_ext_ms_win_ntuser_misc_l1_5_0_dll @ 0x1400037A0 (__tailMerge_ext_ms_win_ntuser_misc_l1_5_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll @ 0x140003840 (__tailMerge_ext_ms_win_rtcore_gdi_devcaps_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll @ 0x1400038E0 (__tailMerge_ext_ms_win_rtcore_ntuser_dc_access_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll @ 0x1400039A0 (__tailMerge_ext_ms_win_rtcore_ntuser_sysparams_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_session_winsta_l1_1_0_dll @ 0x140003AA0 (__tailMerge_ext_ms_win_session_winsta_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll @ 0x140003BD0 (__tailMerge_ext_ms_win_composition_ghost_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_imm_l1_1_1_dll @ 0x140003D20 (__tailMerge_ext_ms_win_imm_l1_1_1_dll.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall _delayLoadHelper2(__int64 a1, __int64 a2)
{
  return ResolveDelayLoadedAPI(&_ImageBase, a1, _pfnDefaultDliFailureHook2, DelayLoadFailureHook, a2, 0);
}
