/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x1800EAA34
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x180068A40 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800D92B4 (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     NtPowerInformation @ 0x180093EF0 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  NtPowerInformation();
  return NtClose(Handle);
}
