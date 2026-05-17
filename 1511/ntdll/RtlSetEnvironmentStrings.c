/*
 * XREFs of RtlSetEnvironmentStrings @ 0x180081BC0
 * Callers:
 *     <none>
 * Callees:
 *     RtlSizeHeap @ 0x18001BA80 (RtlSizeHeap.c)
 *     NtdllpFreeStringRoutine @ 0x1800207A0 (NtdllpFreeStringRoutine.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18004E604 (RtlpAllocateEnvBlock.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 *     memset @ 0x1800AB900 (memset.c)
 */

__int64 __fastcall RtlSetEnvironmentStrings(void *Src, size_t Size)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rsi
  void *EnvBlock; // rax
  void *v8; // rsi
  void *v9; // [rsp+50h] [rbp+18h]
  unsigned __int64 v10; // [rsp+58h] [rbp+20h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  v10 = RtlSizeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0LL, (unsigned __int64)Environment);
  if ( v10 >= Size )
  {
    memmove(Environment, Src, Size);
    ProcessParameters->Environment = Environment;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    memset(RtlpEnvironLookupTable, 0, 0x468uLL);
  }
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( v10 >= Size )
    return 0LL;
  EnvBlock = (void *)RtlpAllocateEnvBlock(Size);
  v8 = EnvBlock;
  if ( EnvBlock )
  {
    memmove(EnvBlock, Src, Size);
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    v9 = ProcessParameters->Environment;
    memset(RtlpEnvironLookupTable, 0, 0x468uLL);
    ProcessParameters->Environment = v8;
    ProcessParameters->EnvironmentSize = Size;
    ++ProcessParameters->EnvironmentVersion;
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    NtdllpFreeStringRoutine((__int64)v9);
    return 0LL;
  }
  return 3221225626LL;
}
