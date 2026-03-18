/*
 * XREFs of __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1800BDE10
 * Callers:
 *     __imp_load_CreateRectRgn @ 0x1800BDDF0 (__imp_load_CreateRectRgn.c)
 *     __imp_load_CombineRgn @ 0x1800BDE90 (__imp_load_CombineRgn.c)
 *     __imp_load_GetRgnBox @ 0x1800BDEB0 (__imp_load_GetRgnBox.c)
 *     __imp_load_OffsetRgn @ 0x1800BDED0 (__imp_load_OffsetRgn.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x1800BDEF0 (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_SetRectRgn @ 0x1800BDF10 (__imp_load_SetRectRgn.c)
 *     __imp_load_EqualRgn @ 0x1800BDF30 (__imp_load_EqualRgn.c)
 *     __imp_load_RectInRegion @ 0x1800BF100 (__imp_load_RectInRegion.c)
 *     __imp_load_GetRegionData @ 0x1800BF120 (__imp_load_GetRegionData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800B71B0 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
