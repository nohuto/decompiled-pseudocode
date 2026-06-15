/*
 * XREFs of __delayLoadHelper2 @ 0x140016D30
 * Callers:
 *     __tailMerge_api_ms_win_security_base_l1_2_0_dll @ 0x140018CE0 (__tailMerge_api_ms_win_security_base_l1_2_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x140018D80 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x140018E20 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x140018EC0 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_core_com_l1_1_1_dll @ 0x140018F60 (__tailMerge_api_ms_win_core_com_l1_1_1_dll.c)
 *     __tailMerge_RPCRT4_dll @ 0x140019020 (__tailMerge_RPCRT4_dll.c)
 *     __tailMerge_OLEAUT32_dll @ 0x140019180 (__tailMerge_OLEAUT32_dll.c)
 *     __tailMerge_AVRT_dll @ 0x140019480 (__tailMerge_AVRT_dll.c)
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
