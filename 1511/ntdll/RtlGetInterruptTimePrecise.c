/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1800D6620
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18004A7B0 (RtlQueryPerformanceCounter.c)
 *     RtlBeginReadTickLock @ 0x18004A814 (RtlBeginReadTickLock.c)
 */

LARGE_INTEGER __cdecl RtlGetInterruptTimePrecise(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v2; // rdi
  __int64 TickLock; // rax
  LARGE_INTEGER v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rbx
  LARGE_INTEGER v7; // rdx
  __int64 v8; // rdx
  LARGE_INTEGER PerformanceCountera; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  while ( 1 )
  {
    TickLock = RtlBeginReadTickLock((__int64 *)0x7FFE0340);
    v4.QuadPart = MEMORY[0x7FFE0350];
    v5 = MEMORY[0x7FFE0008];
    v6 = TickLock;
    RtlQueryPerformanceCounter(&PerformanceCountera);
    if ( MEMORY[0x7FFE0340] == v6 )
      break;
    _mm_pause();
  }
  v7 = PerformanceCountera;
  *PerformanceCounter = PerformanceCountera;
  if ( v7.QuadPart > (unsigned __int64)v4.QuadPart )
  {
    v8 = -1 - v4.QuadPart + v7.QuadPart;
    if ( MEMORY[0x7FFE0369] )
      v8 <<= MEMORY[0x7FFE0369];
    v2 = ((unsigned __int64)v8 * (unsigned __int128)MEMORY[0x7FFE0360]) >> 64;
  }
  return (LARGE_INTEGER)(v5 + v2);
}
