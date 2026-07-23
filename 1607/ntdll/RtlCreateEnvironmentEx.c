/*
 * XREFs of RtlCreateEnvironmentEx @ 0x18005EF10
 * Callers:
 *     RtlCreateEnvironment @ 0x18005E8D0 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x18005EE38 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     NtdllpFreeStringRoutine @ 0x1800094D0 (NtdllpFreeStringRoutine.c)
 *     RtlMultiByteToUnicodeN @ 0x180018440 (RtlMultiByteToUnicodeN.c)
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x18005FC68 (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18005FC94 (RtlpGetBlockSizeEx.c)
 *     RtlOemToUnicodeN @ 0x18007C5C0 (RtlOemToUnicodeN.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

NTSTATUS __cdecl RtlCreateEnvironmentEx(PVOID SourceEnvironment, PVOID *Environment, ULONG Flags)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  char v4; // si
  PVOID v6; // rbp
  int v7; // r12d
  BOOL v8; // r15d
  unsigned __int64 BlockSize; // rbx
  void *v10; // rdi
  NTSTATUS v11; // eax
  NTSTATUS v12; // ebx
  _DWORD *EnvBlock; // rax
  bool v15; // cc
  ULONG BytesInMultiByteString; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v4 = Flags;
  v6 = SourceEnvironment;
  if ( (Flags & 0xFFFFFFF8) != 0 || (((Flags & 5) - 1) & Flags & 5) != 0 || (Flags & 3) == 2 )
    return -1073741583;
  if ( SourceEnvironment )
  {
    if ( (Flags & 4) == 0 )
      goto LABEL_6;
    return -1073741776;
  }
  if ( (Flags & 1) != 0 )
    return -1073741776;
  if ( (Flags & 4) != 0 )
  {
LABEL_22:
    EnvBlock = (_DWORD *)RtlpAllocateEnvBlock(4uLL);
    if ( !EnvBlock )
      return -1073741670;
    *EnvBlock = 0;
    *Environment = EnvBlock;
    return 0;
  }
LABEL_6:
  if ( SourceEnvironment )
  {
    v7 = 0;
    v8 = (Flags & 1) == 0;
    BlockSize = RtlpGetBlockSizeEx(SourceEnvironment, (Flags & 1) == 0);
    goto LABEL_8;
  }
  v8 = 1;
  v7 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
  v6 = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
  if ( !v6 )
    goto LABEL_22;
  while ( 1 )
  {
LABEL_8:
    v10 = (void *)RtlpAllocateEnvBlock(BlockSize);
    if ( !v10 )
      return -1073741670;
    if ( v7 != 1 )
      break;
    RtlEnterCriticalSection(NtCurrentPeb()->FastPebLock);
    v6 = ProcessParameters->Environment;
    if ( !v6 )
    {
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
      NtdllpFreeStringRoutine(v10);
      goto LABEL_22;
    }
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
      break;
    RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
    NtdllpFreeStringRoutine(v10);
  }
  if ( v8 )
  {
    memmove(v10, v6, BlockSize);
    if ( v7 == 1 )
      RtlLeaveCriticalSection(NtCurrentPeb()->FastPebLock);
LABEL_18:
    *Environment = v10;
    return 0;
  }
  if ( BlockSize > 0xFFFFFFFF )
  {
    v12 = -2147483643;
  }
  else
  {
    BytesInMultiByteString = BlockSize >> 1;
    if ( (v4 & 2) != 0 )
      v11 = RtlOemToUnicodeN((PWSTR)v10, BlockSize, 0LL, (PCCH)v6, BytesInMultiByteString);
    else
      v11 = RtlMultiByteToUnicodeN((PWCH)v10, BlockSize, 0LL, (PCSTR)v6, BytesInMultiByteString);
    v12 = v11;
  }
  if ( v12 >= 0 )
    goto LABEL_18;
  NtdllpFreeStringRoutine(v10);
  return v12;
}
