/*
 * XREFs of __tailMerge_PROPSYS_dll @ 0x180059710
 * Callers:
 *     __imp_load_PSPropertyBag_WriteStr @ 0x1800596F0 (__imp_load_PSPropertyBag_WriteStr.c)
 *     __imp_load_PSCreateMemoryPropertyStore @ 0x180059790 (__imp_load_PSCreateMemoryPropertyStore.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180053880 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_PROPSYS_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_PROPSYS_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
