/*
 * XREFs of PsSetProcessPriorityByClass @ 0x14041C598
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x14041B6A4 (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x14041CF90 (NtSetInformationProcess.c)
 * Callees:
 *     PspComputeQuantumAndPriority @ 0x14046A228 (PspComputeQuantumAndPriority.c)
 */

__int64 __fastcall PsSetProcessPriorityByClass(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  UCHAR v5; // [rsp+30h] [rbp+8h] BYREF
  int v6; // [rsp+40h] [rbp+18h] BYREF

  v3 = PspComputeQuantumAndPriority(a1, a2, &v5, &v6);
  return KeSetPriorityAndQuantumProcess(a1, v3, v5, v6);
}
