/*
 * XREFs of __tailMerge_OLEAUT32_dll @ 0x180036EB0
 * Callers:
 *     __imp_load_SysFreeString @ 0x180036E90 (__imp_load_SysFreeString.c)
 *     __imp_load_VariantTimeToSystemTime @ 0x180037530 (__imp_load_VariantTimeToSystemTime.c)
 *     __imp_load_SystemTimeToVariantTime @ 0x180037550 (__imp_load_SystemTimeToVariantTime.c)
 *     __imp_load_SafeArrayGetLBound @ 0x180037570 (__imp_load_SafeArrayGetLBound.c)
 *     __imp_load_SafeArrayGetUBound @ 0x180037590 (__imp_load_SafeArrayGetUBound.c)
 *     __imp_load_SafeArrayDestroy @ 0x1800375B0 (__imp_load_SafeArrayDestroy.c)
 *     __imp_load_SafeArrayCreate @ 0x1800375D0 (__imp_load_SafeArrayCreate.c)
 *     __imp_load_SafeArrayGetVartype @ 0x1800375F0 (__imp_load_SafeArrayGetVartype.c)
 *     __imp_load_SafeArrayCopy @ 0x180037610 (__imp_load_SafeArrayCopy.c)
 *     __imp_load_SafeArrayUnlock @ 0x180037630 (__imp_load_SafeArrayUnlock.c)
 *     __imp_load_SafeArrayLock @ 0x180037650 (__imp_load_SafeArrayLock.c)
 *     __imp_load_SysAllocString @ 0x180037670 (__imp_load_SysAllocString.c)
 *     __imp_load_SafeArrayGetElement @ 0x180037A10 (__imp_load_SafeArrayGetElement.c)
 *     __imp_load_BSTR_UserSize @ 0x1800388C0 (__imp_load_BSTR_UserSize.c)
 *     __imp_load_BSTR_UserFree @ 0x1800388F0 (__imp_load_BSTR_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserSize @ 0x180038920 (__imp_load_LPSAFEARRAY_UserSize.c)
 *     __imp_load_BSTR_UserUnmarshal64 @ 0x180038950 (__imp_load_BSTR_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserFree @ 0x180038980 (__imp_load_LPSAFEARRAY_UserFree.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal @ 0x1800389B0 (__imp_load_LPSAFEARRAY_UserUnmarshal.c)
 *     __imp_load_LPSAFEARRAY_UserFree64 @ 0x1800389E0 (__imp_load_LPSAFEARRAY_UserFree64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal64 @ 0x180038A10 (__imp_load_LPSAFEARRAY_UserMarshal64.c)
 *     __imp_load_BSTR_UserUnmarshal @ 0x180038A40 (__imp_load_BSTR_UserUnmarshal.c)
 *     __imp_load_BSTR_UserMarshal @ 0x180038A70 (__imp_load_BSTR_UserMarshal.c)
 *     __imp_load_LPSAFEARRAY_UserUnmarshal64 @ 0x180038AA0 (__imp_load_LPSAFEARRAY_UserUnmarshal64.c)
 *     __imp_load_LPSAFEARRAY_UserMarshal @ 0x180038AD0 (__imp_load_LPSAFEARRAY_UserMarshal.c)
 *     __imp_load_BSTR_UserFree64 @ 0x180038B00 (__imp_load_BSTR_UserFree64.c)
 *     __imp_load_BSTR_UserSize64 @ 0x180038B30 (__imp_load_BSTR_UserSize64.c)
 *     __imp_load_LPSAFEARRAY_UserSize64 @ 0x180038B60 (__imp_load_LPSAFEARRAY_UserSize64.c)
 *     __imp_load_BSTR_UserMarshal64 @ 0x180038B90 (__imp_load_BSTR_UserMarshal64.c)
 * Callees:
 *     __delayLoadHelper2 @ 0x180029950 (__delayLoadHelper2.c)
 */

__int64 __fastcall _tailMerge_OLEAUT32_dll(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rax
  __int64 (__fastcall *Helper2)(__int64, __int64, __int64, __int64); // rax

  Helper2 = (__int64 (__fastcall *)(__int64, __int64, __int64, __int64))_delayLoadHelper2(
                                                                          (__int64)&_DELAY_IMPORT_DESCRIPTOR_OLEAUT32_dll,
                                                                          v4);
  return Helper2(a1, a2, a3, a4);
}
