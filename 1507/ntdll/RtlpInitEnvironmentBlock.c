/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x180046728
 * Callers:
 *     LdrpInitializeProcess @ 0x1800BEA44 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateEnvironmentEx @ 0x180046800 (RtlCreateEnvironmentEx.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x1800469FC (RtlpWow64ThunkEnvironment32To64.c)
 *     RtlpAllocateEnvBlock @ 0x180047558 (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x180047584 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x180098200 (memmove.c)
 *     memset @ 0x180098540 (memset.c)
 */

__int64 RtlpInitEnvironmentBlock()
{
  _RTL_USER_PROCESS_PARAMETERS *ProcessParameters; // rbx
  void *Environment; // rbp
  size_t BlockSize; // rdi
  void *EnvBlock; // rax
  void *v4; // rsi
  __int64 result; // rax
  void *v6; // [rsp+30h] [rbp+8h]

  ProcessParameters = NtCurrentPeb()->ProcessParameters;
  Environment = ProcessParameters->Environment;
  if ( Environment )
  {
    BlockSize = RtlpGetBlockSizeEx(ProcessParameters->Environment, 1LL);
    EnvBlock = (void *)RtlpAllocateEnvBlock(BlockSize);
    v4 = EnvBlock;
    if ( !EnvBlock )
      return 3221225626LL;
    memmove(EnvBlock, Environment, BlockSize);
    goto LABEL_4;
  }
  BlockSize = 4LL;
  result = RtlCreateEnvironmentEx(0LL);
  if ( (int)result >= 0 )
  {
    v4 = v6;
LABEL_4:
    ++ProcessParameters->EnvironmentVersion;
    ProcessParameters->Environment = v4;
    ProcessParameters->EnvironmentSize = BlockSize;
    memset(RtlpEnvironLookupTable, 0, 0x468uLL);
    RtlpWow64ThunkEnvironment32To64();
    return 0LL;
  }
  return result;
}
