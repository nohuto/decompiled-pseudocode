/*
 * XREFs of RtlGetSystemTimePrecise @ 0x18005BE10
 * Callers:
 *     <none>
 * Callees:
 *     RtlQueryPerformanceCounter @ 0x18005BED0 (RtlQueryPerformanceCounter.c)
 *     RtlBeginReadTickLock @ 0x18005BF90 (RtlBeginReadTickLock.c)
 */

LARGE_INTEGER RtlGetSystemTimePrecise(void)
{
  __int64 TickLock; // rax
  unsigned __int64 v1; // rbp
  unsigned __int64 v2; // r15
  __int64 v3; // rbx
  char *v4; // rdx
  char v5; // si
  __int64 *v6; // r8
  __int64 v7; // r14
  __int64 v8; // rdi
  __int64 v9; // rdx
  LARGE_INTEGER PerformanceCounter; // [rsp+50h] [rbp+8h] BYREF

  while ( 1 )
  {
    TickLock = RtlBeginReadTickLock(2147353408LL, 2147353448LL, 2147352596LL);
    v1 = MEMORY[0x7FFE0348];
    v2 = MEMORY[0x7FFE0358];
    v3 = TickLock;
    v5 = *v4;
    v7 = *v6;
    RtlQueryPerformanceCounter(&PerformanceCounter);
    if ( MEMORY[0x7FFE0340] == v3 )
      break;
    _mm_pause();
  }
  v8 = 0LL;
  if ( PerformanceCounter.QuadPart > v1 )
  {
    v9 = PerformanceCounter.QuadPart - v1 - 1;
    if ( v5 )
      v9 <<= v5;
    v8 = ((unsigned __int64)v9 * (unsigned __int128)v2) >> 64;
  }
  return (LARGE_INTEGER)(v7 + v8);
}
