/*
 * XREFs of __delayLoadHelper2 @ 0x180023C50
 * Callers:
 *     __tailMerge_CRYPT32_dll @ 0x180024970 (__tailMerge_CRYPT32_dll.c)
 *     __tailMerge_CRYPTSP_dll @ 0x180024A60 (__tailMerge_CRYPTSP_dll.c)
 *     __tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll @ 0x180024BF0 (__tailMerge_ext_ms_win_session_usertoken_l1_1_0_dll.c)
 *     __tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll @ 0x180024CF0 (__tailMerge_ext_ms_win_com_psmregister_l1_1_0_dll.c)
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
