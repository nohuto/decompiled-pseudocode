/*
 * XREFs of KiResumeClockTimer @ 0x140114334
 * Callers:
 *     KeResumeClockTimer @ 0x14011432C (KeResumeClockTimer.c)
 *     KeResumeClockTimerSafe @ 0x1401D24B8 (KeResumeClockTimerSafe.c)
 * Callees:
 *     KiEventClockStateChange @ 0x14009E0BC (KiEventClockStateChange.c)
 *     KiSetPendingTick @ 0x14009E0F8 (KiSetPendingTick.c)
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 *     xHalFreeMessageTarget @ 0x140130D64 (xHalFreeMessageTarget.c)
 *     xHalUnmaskInterrupt @ 0x14014CC60 (xHalUnmaskInterrupt.c)
 */

__int64 KiResumeClockTimer()
{
  char v0; // di
  int v1; // ebx
  __int64 result; // rax
  __int64 v3; // [rsp+30h] [rbp+8h] BYREF
  __int64 v4; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER v5; // [rsp+40h] [rbp+18h] BYREF

  v3 = 0LL;
  v0 = 0;
  v1 = KiClockState;
  result = (unsigned int)KiClockTimerOwner;
  if ( KeGetCurrentPrcb()->Number == KiClockTimerOwner )
  {
    v0 = 1;
  }
  else if ( !KiClockTimerPerCpu )
  {
    return result;
  }
  off_1402F2590();
  result = off_1402F2588();
  if ( v0 )
  {
    ++dword_14030DD84;
    v4 = (unsigned int)KiLastRequestedTimeIncrement;
    KeGetCurrentPrcb()->ClockOwner = 1;
    off_1402F25A0();
    KiSetPendingTick(1);
    if ( v1 == 2 )
      LOBYTE(v1) = _InterlockedExchange(&KiClockState, 0);
    KiEventClockStateChange(0, v1, &v3, &v4);
    result = RtlGetInterruptTimePrecise(&v5);
    KiClockTimerNextTickTime = result + (unsigned int)KeTimeIncrement;
  }
  return result;
}
