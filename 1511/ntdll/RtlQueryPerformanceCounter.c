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
