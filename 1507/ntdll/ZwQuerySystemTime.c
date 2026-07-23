/*
 * XREFs of ZwQuerySystemTime @ 0x180093EA0
 * Callers:
 *     RtlpWnfWalkUserSubscriptionList @ 0x18000B74C (RtlpWnfWalkUserSubscriptionList.c)
 *     RtlAddGrowableFunctionTable @ 0x1800632A0 (RtlAddGrowableFunctionTable.c)
 *     RtlAddFunctionTable @ 0x180072810 (RtlAddFunctionTable.c)
 *     RtlInstallFunctionTableCallback @ 0x180074270 (RtlInstallFunctionTableCallback.c)
 *     RtlRunEncodeUnicodeString @ 0x180077E50 (RtlRunEncodeUnicodeString.c)
 *     RtlCreateProcessReflection @ 0x1800C1540 (RtlCreateProcessReflection.c)
 *     RtlpWnfMarkFailure @ 0x1800C8EB8 (RtlpWnfMarkFailure.c)
 *     RtlpWnfRetryTimerCallback @ 0x1800C8F90 (RtlpWnfRetryTimerCallback.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
NTSTATUS __cdecl ZwQuerySystemTime(PLARGE_INTEGER SystemTime)
{
  return RtlQuerySystemTime(SystemTime);
}
