/*
 * XREFs of RtlQueryPerformanceCounter @ 0x18004A7B0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180045664 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x1800472B8 (EtwpInitLoggerContext.c)
 *     PsspSampleCounters @ 0x180047D7C (PsspSampleCounters.c)
 *     EtwpReserveTraceBuffer @ 0x18004A5F4 (EtwpReserveTraceBuffer.c)
 *     RtlGetSystemTimePrecise @ 0x18004A6F0 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1800D6620 (RtlGetInterruptTimePrecise.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1800A56E0 (NtQueryPerformanceCounter.c)
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
