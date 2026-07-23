/*
 * XREFs of PoGetIdleTimes @ 0x14000D734
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x140406ACC (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x1404144E0 (ExpQuerySystemInformation.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D0F8 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x14000D810 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     PopGetIdleTimesCallback @ 0x14000D8B0 (PopGetIdleTimesCallback.c)
 *     PopAcquireRwLockShared @ 0x14000DC30 (PopAcquireRwLockShared.c)
 *     KeAddProcessorAffinityEx @ 0x1400D1E28 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 */

__int64 __fastcall PoGetIdleTimes(PPROCESSOR_NUMBER ProcNumber, __int64 a2, __int64 a3)
{
  ULONG ProcessorIndexFromNumber; // eax
  __int64 Prcb; // rdi
  unsigned __int8 CurrentIrql; // bl
  int IdleTimesCallback; // eax
  ULONG v11; // eax
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
    v12[0] = 1310721;
    memset(&v12[1], 0, 0xA4uLL);
    v11 = KeGetProcessorIndexFromNumber(ProcNumber);
    KeAddProcessorAffinityEx(v12, v11);
    PopExecuteOnTargetProcessors((__int64)v12, (__int64)PopGetIdleTimesCallback, a2, a3);
  }
  return PopReleaseRwLock((ULONG_PTR)&PpmIdlePolicyLock);
}
