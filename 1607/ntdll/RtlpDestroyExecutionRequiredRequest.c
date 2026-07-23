/*
 * XREFs of RtlpDestroyExecutionRequiredRequest @ 0x1800F75E0
 * Callers:
 *     RtlQueryProcessDebugInformation @ 0x18006D3A0 (RtlQueryProcessDebugInformation.c)
 *     RtlpHeapPerformCrossProcessQuery @ 0x1800EA3FC (RtlpHeapPerformCrossProcessQuery.c)
 * Callees:
 *     NtPowerInformation @ 0x1800A6FF0 (NtPowerInformation.c)
 */

NTSTATUS __fastcall RtlpDestroyExecutionRequiredRequest(HANDLE Handle)
{
  HANDLE InputBuffer; // [rsp+30h] [rbp-28h] BYREF
  int v4; // [rsp+38h] [rbp-20h]
  char v5; // [rsp+3Ch] [rbp-1Ch]
  __int64 v6; // [rsp+40h] [rbp-18h]

  InputBuffer = Handle;
  v4 = 3;
  v5 = 0;
  v6 = 0LL;
  NtPowerInformation(PowerRequestAction, &InputBuffer, 0x18u, 0LL, 0);
  return NtClose(Handle);
}
