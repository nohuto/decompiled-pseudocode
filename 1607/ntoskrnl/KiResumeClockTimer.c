/*
 * XREFs of KiResumeClockTimer @ 0x1401148A4
 * Callers:
 *     KeResumeClockTimer @ 0x14011489C (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x1401D22E4 (KeResumeClockTimerSafe.c)
 * Callees:
 *     KiEventClockStateChange @ 0x14009D8BC (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14009D8F8 (KiSetPendingTick.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D5040 (RtlGetInterruptTimePrecise.c)
 *     xHalFreeMessageTarget @ 0x1401312D4 (xHalFreeMessageTarget.c)
 *     xHalUnmaskInterrupt @ 0x14014D1D0 (xHalUnmaskInterrupt.c)
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
  off_1402F2590();
  result.QuadPart = off_1402F2588();
  if ( v0 )
  {
    ++dword_14030DDC4;
    v4 = (unsigned int)KiLastRequestedTimeIncrement;
    KeGetCurrentPrcb()->ClockOwner = 1;
    off_1402F25A0();
    KiSetPendingTick(1);
    if ( v1 == 2 )
      LOBYTE(v1) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v1, &v3, &v4);
    result = RtlGetInterruptTimePrecise(&PerformanceCounter);
    KiClockTimerNextTickTime = result.QuadPart + (unsigned int)KeTimeIncrement;
  }
  return result;
}
