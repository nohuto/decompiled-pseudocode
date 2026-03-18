/*
 * XREFs of KeGetNextClockTickDuration @ 0x1401D2488
 * Callers:
 *     <none>
 * Callees:
 *     RtlGetInterruptTimePrecise @ 0x1400D71A0 (RtlGetInterruptTimePrecise.c)
 */

unsigned __int64 KeGetNextClockTickDuration()
{
  __int64 v0; // rbx
  unsigned __int64 InterruptTimePrecise; // rax
  LARGE_INTEGER v3; // [rsp+30h] [rbp+8h] BYREF

  v0 = 0LL;
  InterruptTimePrecise = RtlGetInterruptTimePrecise(&v3);
  if ( KiClockTimerNextTickTime > InterruptTimePrecise )
    return KiClockTimerNextTickTime - InterruptTimePrecise;
  return v0;
}
