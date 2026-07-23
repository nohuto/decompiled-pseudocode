/*
 * XREFs of KiResumeClockTimer @ 0x140119C68
 * Callers:
 *     KeResumeClockTimer @ 0x140119C60 (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x1401C2D28 (KeResumeClockTimerSafe.c)
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400351D0 (RtlGetInterruptTimePrecise.c)
 *     KiEventClockStateChange @ 0x14003559C (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x1400355D8 (KiSetPendingTick.c)
 *     PopPoCoalescinCallback @ 0x1401264C0 (PopPoCoalescinCallback.c)
 *     xHalUnmaskInterrupt @ 0x140143830 (xHalUnmaskInterrupt.c)
 */

LARGE_INTEGER KiResumeClockTimer()
{
  char v0; // di
  int v1; // ebx
  LARGE_INTEGER result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v0 = 0;
  v1 = KiClockState;
  result.QuadPart = (unsigned int)KiClockTimerOwner;
  if ( KeGetCurrentPrcb()->Number == KiClockTimerOwner )
  {
    v0 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    return result;
  }
  off_1402D28F0();
  result.QuadPart = off_1402D28E8();
  if ( v0 )
  {
    ++dword_1402E8C64;
    KiClockActive = 1;
    v4 = (unsigned int)KiLastRequestedTimeIncrement;
    KeGetCurrentPrcb()->ClockOwner = 1;
    off_1402D2900();
    KiSetPendingTick(1);
    if ( v1 == 2 )
      LOBYTE(v1) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v1, &v3, &v4);
    result = RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiClockTimerNextTickTime = result.QuadPart + (unsigned int)KeTimeIncrement;
  }
  return result;
}
