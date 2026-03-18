/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_private_l1_2_0_dll @ 0x1800BAE90
 * Callers:
 *     __imp_load_DwmGetDxRgn @ 0x1800BAE70 (__imp_load_DwmGetDxRgn.c)
 *     __imp_load_DwmGetRemoteSessionOcclusionEvent @ 0x1800BAF10 (__imp_load_DwmGetRemoteSessionOcclusionEvent.c)
 *     __imp_load_DwmGetRemoteSessionOcclusionState @ 0x1800BC200 (__imp_load_DwmGetRemoteSessionOcclusionState.c)
 *     __imp_load_UpdateWindowInputSinkHints @ 0x1800BC220 (__imp_load_UpdateWindowInputSinkHints.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800B3CD0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_private_l1_2_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_private_l1_2_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
