/*
 * XREFs of KiSetClockTickRate @ 0x1400D60D0
 * Callers:
 *     KiSetClockIntervalToMinimumRequested @ 0x1400D60A4 (KiSetClockIntervalToMinimumRequested.c)
 * Callees:
 *     KiSetPendingTick @ 0x1400E6C5C (KiSetPendingTick.c)
 *     KiEventClockStateChange @ 0x1400E6C9C (KiEventClockStateChange.c)
 *     xHalUnmaskInterrupt @ 0x14017DF24 (xHalUnmaskInterrupt.c)
 */

__int64 __fastcall KiSetClockTickRate(unsigned int a1)
{
  unsigned __int32 v1; // edi
  __int64 v3; // rcx
  LARGE_INTEGER v4; // r8
  __int64 v5; // rbx
  char v6; // al
  unsigned int v8; // [rsp+38h] [rbp+10h] BYREF
  __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v1 = KiClockState;
  KiLastRequestedTimeIncrement = a1;
  v9 = a1;
  off_140321A50();
  LOBYTE(v3) = 1;
  KiSetPendingTick(v3);
  if ( v1 == 2 )
    v1 = _InterlockedExchange(&KiClockState, 0);
  KiEventClockStateChange(0LL, v1, &v8, &v9);
  KeTimeIncrement = v8;
  v4.QuadPart = MEMORY[0xFFFFF78000000008];
  KiClockTimerNextTickTime = MEMORY[0xFFFFF78000000008] + v8;
  if ( v8 < dword_140339114 )
    dword_140339114 = v8;
  if ( v8 > dword_140339110 )
    dword_140339110 = v8;
  if ( a1 < dword_14033911C )
    dword_14033911C = a1;
  if ( a1 > dword_140339118 )
    dword_140339118 = a1;
  v5 = 3LL * (unsigned int)KiClockIncrementTraceCount;
  v6 = KiClockIncrementTraceCount + 1;
  KiClockIncrementTrace[v5].LowPart = v8;
  KiClockIncrementTrace[v5 + 1] = v4;
  KiClockIncrementTraceCount = v6 & 0xF;
  KiClockIncrementTrace[v5].HighPart = KiLastRequestedTimeIncrement;
  KiClockIncrementTrace[v5 + 2] = KeQueryPerformanceCounter(0LL);
  return (unsigned int)KeTimeIncrement;
}
