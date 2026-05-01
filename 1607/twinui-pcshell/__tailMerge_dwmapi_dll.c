/*
 * XREFs of __tailMerge_dwmapi_dll @ 0x18002FB20
 * Callers:
 *     __imp_load_DwmpBeginTransitionRequestWithGUID @ 0x18002FBA0 (__imp_load_DwmpBeginTransitionRequestWithGUID.c)
 *     __imp_load_DwmpTransitionWindowWithRects @ 0x18002FBC0 (__imp_load_DwmpTransitionWindowWithRects.c)
 *     __imp_load_DwmpTransitionWindow @ 0x18002FBE0 (__imp_load_DwmpTransitionWindow.c)
 *     __imp_load_DwmpEndTransitionRequest @ 0x18002FC00 (__imp_load_DwmpEndTransitionRequest.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x18002B540 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_dwmapi_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_dwmapi_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
