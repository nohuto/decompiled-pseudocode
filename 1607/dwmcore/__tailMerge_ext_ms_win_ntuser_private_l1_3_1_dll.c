/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll @ 0x1800BDB10
 * Callers:
 *     __imp_load_ReportInertia @ 0x1800BDAF0 (__imp_load_ReportInertia.c)
 *     __imp_load_DwmGetDxRgn @ 0x1800BDB90 (__imp_load_DwmGetDxRgn.c)
 *     __imp_load_DwmGetRemoteSessionOcclusionEvent @ 0x1800BDBB0 (__imp_load_DwmGetRemoteSessionOcclusionEvent.c)
 *     __imp_load_DwmGetRemoteSessionOcclusionState @ 0x1800BEF60 (__imp_load_DwmGetRemoteSessionOcclusionState.c)
 *     __imp_load_UpdateWindowInputSinkHints @ 0x1800BEF80 (__imp_load_UpdateWindowInputSinkHints.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800B71B0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_private_l1_3_1_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_private_l1_3_1_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
