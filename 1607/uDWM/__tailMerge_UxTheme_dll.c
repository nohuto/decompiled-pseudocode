/*
 * XREFs of __tailMerge_UxTheme_dll @ 0x18004FAC0
 * Callers:
 *     __imp_load_GetThemeStream @ 0x18004FAA0 (__imp_load_GetThemeStream.c)
 *     __imp_load_GetCurrentThemeName @ 0x18004FB40 (__imp_load_GetCurrentThemeName.c)
 *     __imp_load_GetThemeRect @ 0x18004FB60 (__imp_load_GetThemeRect.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180042190 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_UxTheme_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_UxTheme_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
