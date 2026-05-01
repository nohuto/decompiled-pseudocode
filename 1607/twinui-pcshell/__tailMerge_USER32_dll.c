/*
 * XREFs of __tailMerge_USER32_dll @ 0x18002FCE0
 * Callers:
 *     __imp_load_MonitorFromPoint @ 0x18002FCC0 (__imp_load_MonitorFromPoint.c)
 *     __imp_load_GetSysColor @ 0x18002FD60 (__imp_load_GetSysColor.c)
 *     __imp_load_PostMessageW @ 0x18002FD80 (__imp_load_PostMessageW.c)
 *     __imp_load_SetWindowCompositionAttribute @ 0x18002FDA0 (__imp_load_SetWindowCompositionAttribute.c)
 *     __imp_load_DestroyWindow @ 0x18002FDC0 (__imp_load_DestroyWindow.c)
 *     __imp_load_GetWindowThreadProcessId @ 0x180030140 (__imp_load_GetWindowThreadProcessId.c)
 *     __imp_load_GetDC @ 0x180030160 (__imp_load_GetDC.c)
 *     __imp_load_ReleaseDC @ 0x180030180 (__imp_load_ReleaseDC.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002B540 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_USER32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_USER32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
