/*
 * XREFs of PopAccumulateNonActivatedCpuTime @ 0x1401EE490
 * Callers:
 *     PopUpdateNonAttributedCpuTimeReference @ 0x1401EE4F0 (PopUpdateNonAttributedCpuTimeReference.c)
 *     PdcPoResiliencyClient @ 0x14063795C (PdcPoResiliencyClient.c)
 *     PopDripsWatchdogWorkerRoutine @ 0x14063CD1C (PopDripsWatchdogWorkerRoutine.c)
 * Callees:
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     PpmParkSnapNodeIdleTime @ 0x1401F4794 (PpmParkSnapNodeIdleTime.c)
 */

__int64 __fastcall PopAccumulateNonActivatedCpuTime(char a1, _QWORD *a2, _QWORD *a3)
{
  __int64 Prcb; // rax
  __int64 result; // rax
  __int64 v8; // rcx
  __int64 v9; // [rsp+38h] [rbp+10h] BYREF
  __int64 v10; // [rsp+48h] [rbp+20h] BYREF

  Prcb = KeGetPrcb(0);
  result = PpmParkSnapNodeIdleTime(Prcb, &v10, &v9);
  v8 = v10;
  if ( !a1 )
  {
    result = v10 - *a2 - v9;
    *a3 += result;
  }
  *a2 = v8 - v9;
  return result;
}
