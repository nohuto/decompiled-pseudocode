/*
 * XREFs of WmiGetClock @ 0x14025CBD4
 * Callers:
 *     <none>
 * Callees:
 *     EtwpGetCycleCount @ 0x1400A6084 (EtwpGetCycleCount.c)
 */

__int64 __fastcall WmiGetClock(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return EtwpSystemTimeStamp[(unsigned __int16)word_140327822[0]]();
  if ( a1 != 1 )
  {
    if ( a1 == 2 )
      return KeQueryPerformanceCounter(0LL).QuadPart;
    if ( a1 > 2 )
    {
      if ( a1 <= 4 )
        return result;
      if ( a1 == 5 )
        return __rdtsc();
    }
  }
  return RtlGetSystemTimePrecise().QuadPart;
}
