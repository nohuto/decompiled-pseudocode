/*
 * XREFs of ZwQuerySystemTime @ 0x1800A6F60
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x18006F130 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F460 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F760 (RtlAddGrowableFunctionTable.c)
 *     RtlRunEncodeUnicodeString @ 0x18008FF90 (RtlRunEncodeUnicodeString.c)
 *     RtlCreateProcessReflection @ 0x1800D2F20 (RtlCreateProcessReflection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
__int64 __fastcall ZwQuerySystemTime(_QWORD *a1)
{
  return RtlQuerySystemTime(a1);
}
