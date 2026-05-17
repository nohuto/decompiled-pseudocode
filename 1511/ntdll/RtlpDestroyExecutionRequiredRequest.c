/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x1800EE8E0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18006C270 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800E1180 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     NtPowerInformation @ 0x1800A5C90 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  NtPowerInformation();
  return NtClose(Handle);
}
