/*
 * XREFs of RtlGetSystemTimePrecise @ 0x140017E74
 * Callers:
 *     KeQuerySystemTimePrecise @ 0x1400166E8 (KeQuerySystemTimePrecise.c)
 *     EtwpGetSystemTime @ 0x140017E6C (EtwpGetSystemTime.c)
 *     KeSetTimer2 @ 0x1400F4EC0 (KeSetTimer2.c)
 *     KiSetSystemTimeDpc @ 0x1401549C4 (KiSetSystemTimeDpc.c)
 *     WmiGetClock @ 0x14025CBD4 (WmiGetClock.c)
 *     PspInitPhase2 @ 0x1407E0C40 (PspInitPhase2.c)
 * Callees:
 *     RtlBeginReadTickLock @ 0x140017F48 (RtlBeginReadTickLock.c)
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
    TickLock = RtlBeginReadTickLock(0xFFFFF78000000340uLL, 0xFFFFF78000000368uLL, 0xFFFFF78000000014uLL);
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
