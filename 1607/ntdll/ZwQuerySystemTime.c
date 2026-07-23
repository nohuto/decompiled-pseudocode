/*
 * XREFs of ZwQuerySystemTime @ 0x1800A6F60
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x18006F120 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F450 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F750 (RtlAddGrowableFunctionTable.c)
 *     RtlRunEncodeUnicodeString @ 0x18008FF80 (RtlRunEncodeUnicodeString.c)
 *     RtlCreateProcessReflection @ 0x1800D2FE0 (RtlCreateProcessReflection.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  return RtlQuerySystemTime(SystemTime);
}
