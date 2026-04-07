/*
 * XREFs of __tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll @ 0x180048BE0
 * Callers:
 *     __imp_load_OpenThemeData @ 0x180048BC0 (__imp_load_OpenThemeData.c)
 *     __imp_load_GetThemeInt @ 0x180048C60 (__imp_load_GetThemeInt.c)
 *     __imp_load_CloseThemeData @ 0x180048C80 (__imp_load_CloseThemeData.c)
 *     __imp_load_GetThemeColor @ 0x180048CA0 (__imp_load_GetThemeColor.c)
 *     __imp_load_GetThemeMargins @ 0x180048CC0 (__imp_load_GetThemeMargins.c)
 *     __imp_load_GetThemeAnimationProperty @ 0x180048CE0 (__imp_load_GetThemeAnimationProperty.c)
 *     __imp_load_GetThemeAnimationTransform @ 0x180048D00 (__imp_load_GetThemeAnimationTransform.c)
 *     __imp_load_GetThemeTimingFunction @ 0x180048D20 (__imp_load_GetThemeTimingFunction.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180009650 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_ext_ms_win_uxtheme_themes_l1_1_0_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_ext_ms_win_uxtheme_themes_l1_1_0_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
