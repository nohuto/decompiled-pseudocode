/*
 * XREFs of RtlGetSystemTimePrecise @ 0x14002D4E8
 * Callers:
 *     KeQuerySystemTimePrecise @ 0x14002D4D0 (KeQuerySystemTimePrecise.c)
 *     KeSetTimer2 @ 0x140034600 (KeSetTimer2.c)
 *     EtwpGetSystemTime @ 0x1400F471C (EtwpGetSystemTime.c)
 *     KiSetSystemTimeDpc @ 0x14012045C (KiSetSystemTimeDpc.c)
 *     WmiGetClock @ 0x14020D968 (WmiGetClock.c)
 *     PspInitPhase2 @ 0x140761E90 (PspInitPhase2.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x14002D5BC (RtlBeginReadTickLock.c)
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
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v9; // rdi
  LONGLONG v10; // rdx

  while ( 1 )
  {
    TickLock = RtlBeginReadTickLock(0xFFFFF78000000340uLL, 0xFFFFF78000000368uLL);
    v1 = MEMORY[0xFFFFF78000000348];
    v2 = MEMORY[0xFFFFF78000000358];
    v3 = TickLock;
    v5 = *v4;
    v7 = *v6;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    if ( MEMORY[0xFFFFF78000000340] == v3 )
      break;
    _mm_pause();
  }
  v9 = 0LL;
  if ( PerformanceCounter.QuadPart > v1 )
  {
    v10 = PerformanceCounter.QuadPart - v1 - 1;
    if ( v5 )
      v10 <<= v5;
    v9 = ((unsigned __int64)v10 * (unsigned __int128)v2) >> 64;
  }
  return (LARGE_INTEGER)(v7 + v9);
}
