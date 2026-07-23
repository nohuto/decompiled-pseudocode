/*
 * XREFs of KiResumeClockTimer @ 0x14014EAC8
 * Callers:
 *     KeResumeClockTimer @ 0x14014EAC0 (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x1401FEA88 (KeResumeClockTimerSafe.c)
 * Callees:
 *     KiSetPendingTick @ 0x1400E6C5C (KiSetPendingTick.c)
 *     KiEventClockStateChange @ 0x1400E6C9C (KiEventClockStateChange.c)
 *     RtlGetInterruptTimePrecise @ 0x1400EA820 (RtlGetInterruptTimePrecise.c)
 *     PopPoCoalescinCallback @ 0x140139F40 (PopPoCoalescinCallback.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 */

void KiResumeClockTimer()
{
  char v0; // di
  int v1; // ebx
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF
  __int64 v3; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  v2 = 0LL;
  v0 = 0;
  v1 = KiClockState;
  if ( KeGetCurrentPrcb()->Number == KiClockTimerOwner )
  {
    v0 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    return;
  }
  off_140321A40();
  off_140321A38();
  if ( v0 )
  {
    ++dword_1403390E4;
    KiClockActive = 1;
    v3 = (unsigned int)KiLastRequestedTimeIncrement;
    KeGetCurrentPrcb()->ClockOwner = 1;
    off_140321A50();
    KiSetPendingTick(1);
    if ( v1 == 2 )
      LOBYTE(v1) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v1, &v2, &v3);
    KiClockTimerNextTickTime = *(_QWORD *)&RtlGetInterruptTimePrecise(&PerformanceCounter)
                             + (unsigned int)KeTimeIncrement;
  }
}
