/*
 * XREFs of RtlCreateEnvironmentEx @ 0x180046800
 * Callers:
 *     RtlCreateEnvironment @ 0x1800461C0 (RtlCreateEnvironment.c)
 *     RtlpInitEnvironmentBlock @ 0x180046728 (RtlpInitEnvironmentBlock.c)
 * Callees:
 *     RtlMultiByteToUnicodeN @ 0x180023B10 (RtlMultiByteToUnicodeN.c)
 *     NtdllpFreeStringRoutine @ 0x18002A210 (NtdllpFreeStringRoutine.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpAllocateEnvBlock @ 0x180047558 (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x180047584 (RtlpGetBlockSizeEx.c)
 *     RtlOemToUnicodeN @ 0x18006D540 (RtlOemToUnicodeN.c)
 *     memmove @ 0x180098200 (memmove.c)
 */

__int64 __fastcall RtlCreateEnvironmentEx(void *Src, _QWORD *a2, int a3)
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // r14
  char v4; // si
  void *Environment; // rbp
  int v7; // r12d
  BOOL v8; // r15d
  unsigned __int64 BlockSize; // rbx
  _WORD *v10; // rdi
  int v11; // eax
  int v12; // ebx
  _DWORD *EnvBlock; // rax
  bool v15; // cc
  unsigned int v16; // [rsp+20h] [rbp-38h]

  ProcessParameters = 0LL;
  v4 = a3;
  Environment = Src;
  if ( (a3 & 0xFFFFFFF8) != 0 || (((a3 & 5) - 1) & a3 & 5) != 0 || (a3 & 3) == 2 )
    return 3221225713LL;
  if ( Src )
  {
    if ( (a3 & 4) == 0 )
      goto LABEL_6;
    return 3221225520LL;
  }
  if ( (a3 & 1) != 0 )
    return 3221225520LL;
  if ( (a3 & 4) != 0 )
  {
LABEL_22:
    EnvBlock = (_DWORD *)RtlpAllocateEnvBlock(4LL);
    if ( !EnvBlock )
      return 3221225626LL;
    *EnvBlock = 0;
    *a2 = EnvBlock;
    return 0LL;
  }
LABEL_6:
  if ( Src )
  {
    v7 = 0;
    v8 = (a3 & 1) == 0;
    BlockSize = RtlpGetBlockSizeEx(Src, (a3 & 1) == 0);
    goto LABEL_8;
  }
  v8 = 1;
  v7 = 1;
  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  Environment = ProcessParameters->Environment;
  BlockSize = ProcessParameters->EnvironmentSize;
  RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
  if ( !Environment )
    goto LABEL_22;
  while ( 1 )
  {
LABEL_8:
    v10 = (_WORD *)RtlpAllocateEnvBlock(BlockSize);
    if ( !v10 )
      return (unsigned int)-1073741670;
    if ( v7 != 1 )
      break;
    RtlEnterCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    Environment = ProcessParameters->Environment;
    if ( !Environment )
    {
      RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
      NtdllpFreeStringRoutine((__int64)v10);
      goto LABEL_22;
    }
    v15 = ProcessParameters->EnvironmentSize <= BlockSize;
    BlockSize = ProcessParameters->EnvironmentSize;
    if ( v15 )
      break;
    RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
    NtdllpFreeStringRoutine((__int64)v10);
  }
  if ( v8 )
  {
    memmove(v10, Environment, BlockSize);
    if ( v7 == 1 )
      RtlLeaveCriticalSection((__int64)NtCurrentPeb()->FastPebLock);
LABEL_18:
    *a2 = v10;
    return 0LL;
  }
  if ( BlockSize > 0xFFFFFFFF )
  {
    v12 = -2147483643;
  }
  else
  {
    v16 = BlockSize >> 1;
    if ( (v4 & 2) != 0 )
      v11 = RtlOemToUnicodeN((_DWORD)v10, BlockSize, 0, (_DWORD)Environment, v16);
    else
      v11 = RtlMultiByteToUnicodeN(v10, BlockSize, 0LL, (unsigned __int8 *)Environment, v16);
    v12 = v11;
  }
  if ( v12 >= 0 )
    goto LABEL_18;
  NtdllpFreeStringRoutine((__int64)v10);
  return (unsigned int)v12;
}
