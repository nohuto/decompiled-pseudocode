/*
 * XREFs of __tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll @ 0x180098170
 * Callers:
 *     __imp_load_IsRectEmpty @ 0x180098150 (__imp_load_IsRectEmpty.c)
 *     __imp_load_EqualRect @ 0x1800981F0 (__imp_load_EqualRect.c)
 *     __imp_load_IntersectRect @ 0x180098210 (__imp_load_IntersectRect.c)
 *     __imp_load_OffsetRect @ 0x180098230 (__imp_load_OffsetRect.c)
 *     __imp_load_CopyRect @ 0x180098250 (__imp_load_CopyRect.c)
 *     __imp_load_SetRect @ 0x180099540 (__imp_load_SetRect.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180061080 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_ntuser_rectangle_ext_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
