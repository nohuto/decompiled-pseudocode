/*
 * XREFs of __tailMerge_ext_ms_win_rtcore_gdi_rgn_l1_1_0_dll @ 0x1800BB170
 * Callers:
 *     __imp_load_CreateRectRgn @ 0x1800BB150 (__imp_load_CreateRectRgn.c)
 *     __imp_load_CombineRgn @ 0x1800BB1F0 (__imp_load_CombineRgn.c)
 *     __imp_load_GetRgnBox @ 0x1800BB210 (__imp_load_GetRgnBox.c)
 *     __imp_load_OffsetRgn @ 0x1800BB230 (__imp_load_OffsetRgn.c)
 *     __imp_load_CreateRectRgnIndirect @ 0x1800BB250 (__imp_load_CreateRectRgnIndirect.c)
 *     __imp_load_SetRectRgn @ 0x1800BB270 (__imp_load_SetRectRgn.c)
 *     __imp_load_EqualRgn @ 0x1800BB290 (__imp_load_EqualRgn.c)
 *     __imp_load_RectInRegion @ 0x1800BC3A0 (__imp_load_RectInRegion.c)
 *     __imp_load_GetRegionData @ 0x1800BC3C0 (__imp_load_GetRegionData.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x1800B3CD0 (__delayLoadHelper2.c)
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
