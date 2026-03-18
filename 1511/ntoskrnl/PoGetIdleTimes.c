/*
 * XREFs of PoGetIdleTimes @ 0x14009D63C
 * Callers:
 *     ExpQuerySystemInformation @ 0x140472CC0 (ExpQuerySystemInformation.c)
 *     ExpQueryProcessorInformationCounters @ 0x1404D0F74 (ExpQueryProcessorInformationCounters.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140076CC0 (KeAddProcessorAffinityEx.c)
 *     PopExecuteOnTargetProcessors @ 0x14009C4F0 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x14009D720 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopGetIdleTimesCallback @ 0x14009D7C0 (PopGetIdleTimesCallback.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     KeGetPrcb @ 0x14009DB9C (KeGetPrcb.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rdi
  unsigned __int8 CurrentIrql; // bl
  int IdleTimesCallback; // eax
  ULONG v10; // eax
  _DWORD v12[44]; // [rsp+20h] [rbp-E8h] BYREF

  ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber(ProcNumber);
  Prcb = KeGetPrcb(ProcessorIndexFromNumber);
  PopAcquireRwLockShared(&PpmIdlePolicyLock);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  IdleTimesCallback = PopGetIdleTimesCallback(Prcb, a2, a3);
  __writecr8(CurrentIrql);
  if ( IdleTimesCallback < 0 )
  {
    memset(&v12[1], 0, 164);
    v12[0] = 1310721;
    v10 = KeGetProcessorIndexFromNumber(ProcNumber);
    KeAddProcessorAffinityEx(v12, v10);
    PopExecuteOnTargetProcessors((__int64)v12, (__int64)PopGetIdleTimesCallback, a2, a3);
  }
  return PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
