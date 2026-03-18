/*
 * XREFs of PsSetProcessPriorityByClass @ 0x1404503DC
 * Callers:
 *     PspApplyJobLimitsToProcess @ 0x1403E9118 (PspApplyJobLimitsToProcess.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x140094B64 (KeSetPriorityAndQuantumProcess.c)
 *     PspComputeQuantumAndPriority @ 0x14044F79C (PspComputeQuantumAndPriority.c)
 */

__int64 __fastcall PsSetProcessPriorityByClass(__int64 a1, __int64 a2)
{
  unsigned int v3; // eax
  UCHAR v5; // [rsp+40h] [rbp+8h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v7; // [rsp+58h] [rbp+20h] BYREF

  v3 = PspComputeQuantumAndPriority(a1, a2, &v5, &v7, &v6);
  return KeSetPriorityAndQuantumProcess(a1, v3, v5, v7, v6);
}
