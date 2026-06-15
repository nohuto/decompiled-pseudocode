/*
 * XREFs of __delayLoadHelper2 @ 0x140017930
 * Callers:
 *     __tailMerge_api_ms_win_service_management_l1_1_0_dll @ 0x1400197D0 (__tailMerge_api_ms_win_service_management_l1_1_0_dll.c)
 *     __tailMerge_api_ms_win_service_management_l2_1_0_dll @ 0x1400198B0 (__tailMerge_api_ms_win_service_management_l2_1_0_dll.c)
 *     __tailMerge_api_ms_win_security_sddl_l1_1_0_dll @ 0x140019950 (__tailMerge_api_ms_win_security_sddl_l1_1_0_dll.c)
 *     __tailMerge_OLEAUT32_dll @ 0x1400199D0 (__tailMerge_OLEAUT32_dll.c)
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
