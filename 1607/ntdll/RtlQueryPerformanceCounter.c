/*
 * XREFs of RtlQueryPerformanceCounter @ 0x18005BEE0
 * Callers:
 *     EtwpAddLogHeaderToLogFile @ 0x180054914 (EtwpAddLogHeaderToLogFile.c)
 *     EtwpInitLoggerContext @ 0x1800550E0 (EtwpInitLoggerContext.c)
 *     PsspSampleCounters @ 0x18005962C (PsspSampleCounters.c)
 *     EtwpReserveTraceBuffer @ 0x18005BD10 (EtwpReserveTraceBuffer.c)
 *     RtlGetSystemTimePrecise @ 0x18005BE20 (RtlGetSystemTimePrecise.c)
 *     RtlGetInterruptTimePrecise @ 0x1800DEF70 (RtlGetInterruptTimePrecise.c)
 * Callees:
 *     NtQueryPerformanceCounter @ 0x1800A6A40 (NtQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlQueryPerformanceCounter(unsigned __int64 *a1)
{
  __int64 v2; // rdx
  unsigned __int64 v4; // [rsp+38h] [rbp+10h] BYREF

  if ( (MEMORY[0x7FFE03C6] & 1) == 0 )
    goto LABEL_8;
  if ( (MEMORY[0x7FFE03C6] & 2) == 0 )
  {
    *a1 = (__rdtsc() + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
    return 1LL;
  }
  if ( RtlpHypervisorSharedUserVa && *(_DWORD *)RtlpHypervisorSharedUserVa )
  {
    v2 = *(_QWORD *)(RtlpHypervisorSharedUserVa + 16)
       + ((__rdtsc() * (unsigned __int128)*(unsigned __int64 *)(RtlpHypervisorSharedUserVa + 8)) >> 64);
    *a1 = (unsigned __int64)(v2 + MEMORY[0x7FFE03B8]) >> MEMORY[0x7FFE03C7];
    return 1LL;
  }
  else
  {
LABEL_8:
    NtQueryPerformanceCounter(&v4, 0LL);
    *a1 = v4;
    return 1LL;
  }
}
