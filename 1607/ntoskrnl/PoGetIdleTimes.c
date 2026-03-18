/*
 * XREFs of PoGetIdleTimes @ 0x14000DBB4
 * Callers:
 *     ExpQueryProcessorInformationCounters @ 0x140407C0C (ExpQueryProcessorInformationCounters.c)
 *     ExpQuerySystemInformation @ 0x140415620 (ExpQuerySystemInformation.c)
 * Callees:
 *     PopExecuteOnTargetProcessors @ 0x14000D578 (PopExecuteOnTargetProcessors.c)
 *     KeGetProcessorIndexFromNumber @ 0x14000DC90 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopGetIdleTimesCallback @ 0x14000DD30 (PopGetIdleTimesCallback.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 *     KeAddProcessorAffinityEx @ 0x1400D3F88 (KeAddProcessorAffinityEx.c)
 *     KeGetPrcb @ 0x1400D3FF8 (KeGetPrcb.c)
 *     __security_check_cookie @ 0x14014CA50 (__security_check_cookie.c)
 *     memset @ 0x1401715C0 (memset.c)
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
