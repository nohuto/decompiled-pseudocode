/*
 * XREFs of RtlSetCurrentEnvironment @ 0x180078BC0
 * Callers:
 *     <none>
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlSizeHeap @ 0x18002A610 (RtlSizeHeap.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 __fastcall RtlSetCurrentEnvironment(unsigned __int64 a1, __int64 *a2)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  __int64 v5; // rbx
  __int64 Environment; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0LL, a1);
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
