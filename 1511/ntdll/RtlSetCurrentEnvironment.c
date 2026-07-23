/*
 * XREFs of RtlSetCurrentEnvironment @ 0x180084E90
 * Callers:
 *     <none>
 * Callees:
 *     RtlSizeHeap @ 0x18001BA80 (RtlSizeHeap.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

NTSTATUS __cdecl RtlSetCurrentEnvironment(PVOID Environment, PVOID *PreviousEnvironment)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rsi
  SIZE_T v5; // rbx
  void *v6; // rbp

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  v5 = RtlSizeHeap(NtCurrentPeb()->ProcessHeap, 0, Environment);
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  memset(RtlpEnvironLookupTable, 0, 0x468uLL);
  ++ProcessParameters->EnvironmentVersion;
  v6 = ProcessParameters->Environment;
  ProcessParameters->Environment = Environment;
  ProcessParameters->EnvironmentSize = v5;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( PreviousEnvironment )
  {
    *PreviousEnvironment = v6;
  }
  else if ( v6 )
  {
    NtdllpFreeStringRoutine(v6);
  }
  return 0;
}
