/*
 * XREFs of RtlQueryPerformanceCounter @ 0x18005BED0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180054904 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x1800550D0 (EtwpInitLoggerContext.c)
 *     PsspSampleCounters @ 0x18005961C (PsspSampleCounters.c)
 *     EtwpReserveTraceBuffer @ 0x18005BD00 (EtwpReserveTraceBuffer.c)
 *     RtlGetSystemTimePrecise @ 0x18005BE10 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1800DF030 (RtlGetInterruptTimePrecise.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1800A6A40 (NtQueryPerformanceCounter.c)
 */

LOGICAL __cdecl RtlQueryPerformanceCounter(PLARGE_INTEGER PerformanceCounter)
{
  __int64 v2; // rdx
  LARGE_INTEGER PerformanceCountera; // [rsp+38h] [rbp+10h] BYREF

  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    goto LABEL_8;
  if ( (MEMORY[0x7FFE03C6] & 2) == 0 )
  {
    PerformanceCounter->QuadPart = (__rdtsc() + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
    return 1;
  }
  if ( RtlpHypervisorSharedUserVa && *(_DWORD *)RtlpHypervisorSharedUserVa )
  {
    v2 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
       + ((__rdtsc() * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
    PerformanceCounter->QuadPart = (unsigned __int64)(v2 + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
    return 1;
  }
  else
  {
LABEL_8:
    NtQueryPerformanceCounter(&PerformanceCountera, 0LL);
    *PerformanceCounter = PerformanceCountera;
    return 1;
  }
}
