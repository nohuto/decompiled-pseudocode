/*
 * XREFs of __delayLoadHelper2 @ 0x18003FE00
 * Callers:
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x18004EF50 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x18004EFF0 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x18004F0B0 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x18004F240 (__tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll.c)
 *     __tailMerge_COMCTL32_dll @ 0x18004F400 (__tailMerge_COMCTL32_dll.c)
 *     __tailMerge_UxTheme_dll @ 0x18004F4C0 (__tailMerge_UxTheme_dll.c)
 *     __tailMerge_WindowsCodecs_dll @ 0x18004F5A0 (__tailMerge_WindowsCodecs_dll.c)
 *     __tailMerge_WINSTA_dll @ 0x18004F640 (__tailMerge_WINSTA_dll.c)
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
