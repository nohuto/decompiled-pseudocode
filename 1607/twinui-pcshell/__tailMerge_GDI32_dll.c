/*
 * XREFs of __tailMerge_GDI32_dll @ 0x18002FC40
 * Callers:
 *     __imp_load_GetCurrentDpiInfo @ 0x18002FC20 (__imp_load_GetCurrentDpiInfo.c)
 *     __imp_load_GetDeviceCaps @ 0x180030120 (__imp_load_GetDeviceCaps.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002B540 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_GDI32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_GDI32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
