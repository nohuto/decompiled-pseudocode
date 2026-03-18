/*
 * XREFs of PsSetProcessPriorityByClass @ 0x1404730C8
 * Callers:
 *     NtSetInformationProcess @ 0x140425A10 (NtSetInformationProcess.c)
 *     PspApplyJobLimitsToProcess @ 0x14046A1D0 (PspApplyJobLimitsToProcess.c)
 * Callees:
 *     KeSetPriorityAndQuantumProcess @ 0x14007EA64 (KeSetPriorityAndQuantumProcess.c)
 *     PspComputeQuantumAndPriority @ 0x140472210 (PspComputeQuantumAndPriority.c)
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
