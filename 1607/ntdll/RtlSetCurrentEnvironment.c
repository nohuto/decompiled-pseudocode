/*
 * XREFs of RtlSetCurrentEnvironment @ 0x180088EF0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094E0 (NtdllpFreeStringRoutine.c)
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlSizeHeap @ 0x180046180 (RtlSizeHeap.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlSetCurrentEnvironment(unsigned __int64 a1, __int64 *a2)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v5; // rbx
  __int64 Environment; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, a1);
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  memset(RtlpEnvironLookupTable, 0, 0x468uLL);
  ++ProcessParameters->EnvironmentVersion;
  Environment = (__int64)ProcessParameters->Environment;
  ProcessParameters->Environment = (void *)a1;
  ProcessParameters->EnvironmentSize = v5;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( a2 )
  {
    *a2 = Environment;
  }
  else if ( Environment )
  {
    NtdllpFreeStringRoutine(Environment);
  }
  return 0LL;
}
