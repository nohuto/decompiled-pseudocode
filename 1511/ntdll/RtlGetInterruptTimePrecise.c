/*
 * XREFs of RtlGetInterruptTimePrecise @ 0x1800D6620
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18004A7B0 (RtlQueryPerformanceCounter.c)
 *     RtlBeginReadTickLock @ 0x18004A814 (RtlBeginReadTickLock.c)
 */

__int64 __fastcall RtlGetInterruptTimePrecise(_QWORD *a1)
{
  __int64 v2; // rdi
  __int64 TickLock; // rax
  unsigned __int64 v4; // rsi
  __int64 v5; // r15
  __int64 v6; // rbx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v10; // [rsp+50h] [rbp+8h] BYREF

  v2 = 0LL;
  while ( 1 )
  {
    TickLock = RtlBeginReadTickLock((__int64 *)0x7FFE0340);
    v4 = MEMORY[0x7FFE0350];
    v5 = MEMORY[0x7FFE0008];
    v6 = TickLock;
    RtlQueryPerformanceCounter(&v10);
    if ( MEMORY[0x7FFE0340] == v6 )
      break;
    _mm_pause();
  }
  v7 = v10;
  *a1 = v10;
  if ( v7 > v4 )
  {
    v8 = -1LL - v4 + v7;
    if ( MEMORY[0x7FFE0369] )
      v8 <<= MEMORY[0x7FFE0369];
    v2 = (v8 * (unsigned __int128)MEMORY[0x7FFE0360]) >> 64;
  }
  return v5 + v2;
}
