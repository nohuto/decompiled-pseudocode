/*
 * XREFs of RtlQueryPerformanceCounter @ 0x180059550
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x18000C5FC (EtwpAddLogHeaderToLogFile.c)
 *     EtwpReserveTraceBuffer @ 0x1800110EC (EtwpReserveTraceBuffer.c)
 *     PsspSampleCounters @ 0x180059428 (PsspSampleCounters.c)
 *     RtlGetSystemTimePrecise @ 0x180059490 (RtlGetSystemTimePrecise.c)
 *     EtwpInitLoggerContext @ 0x1800769B4 (EtwpInitLoggerContext.c)
 *     RtlGetInterruptTimePrecise @ 0x1800CE020 (RtlGetInterruptTimePrecise.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x180093C10 (NtQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlQueryPerformanceCounter(unsigned __int64 *a1)
{
  __int64 v2; // rcx
  unsigned __int64 v3; // rax
  unsigned __int64 v5; // [rsp+38h] [rbp+10h] BYREF
  char v6; // [rsp+40h] [rbp+18h] BYREF

  if ( MEMORY[0x7FFE03C6] == 1 )
  {
    v2 = MEMORY[0x7FFE03B8];
    v3 = __rdtsc();
    *a1 = v3;
    *a1 = (v3 + v2) >> MEMORY[0x7FFE03C7];
  }
  else
  {
    NtQueryPerformanceCounter(&v5, &v6);
    *a1 = v5;
  }
  return 1LL;
}
