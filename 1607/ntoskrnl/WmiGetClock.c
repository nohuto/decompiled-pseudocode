/*
 * XREFs of WmiGetClock @ 0x14022588C
 * Callers:
 *     <none>
 * Callees:
 *     EtwpGetCycleCount @ 0x140059D3C (EtwpGetCycleCount.c)
 */

__int64 __fastcall WmiGetClock(int a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a1 )
    return EtwpSystemTimeStamp[(unsigned __int16)word_1402FD362[0]]();
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
  return RtlGetSystemTimePrecise();
}
