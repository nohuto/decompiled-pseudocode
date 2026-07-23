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

LOGICAL __cdecl RtlQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v2; // rcx
  __int64 v3; // rax
  LARGE_INTEGER PerformanceCountera; // [rsp+38h] [rbp+10h] BYREF
  LARGE_INTEGER PerformanceFrequency; // [rsp+40h] [rbp+18h] BYREF

  if ( MEMORY[0x7FFE03C6] == 1 )
  {
    v2 = MEMORY[0x7FFE03B8];
    v3 = __rdtsc();
    PerformanceCounter->QuadPart = v3;
    PerformanceCounter->QuadPart = (unsigned __int64)(v3 + v2) >> MEMORY[0x7FFE03C7];
  }
  else
  {
    NtQueryPerformanceCounter(&PerformanceCountera, &PerformanceFrequency);
    *PerformanceCounter = PerformanceCountera;
  }
  return 1;
}
