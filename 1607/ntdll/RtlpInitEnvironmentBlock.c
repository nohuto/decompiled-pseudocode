/*
 * XREFs of RtlpInitEnvironmentBlock @ 0x18005EE48
 * Callers:
 *     LdrpInitializeProcess @ 0x180091E34 (LdrpInitializeProcess.c)
 * Callees:
 *     RtlCreateEnvironmentEx @ 0x18005EF20 (RtlCreateEnvironmentEx.c)
 *     RtlpWow64ThunkEnvironment32To64 @ 0x18005F11C (RtlpWow64ThunkEnvironment32To64.c)
 *     RtlpAllocateEnvBlock @ 0x18005FC78 (RtlpAllocateEnvBlock.c)
 *     RtlpGetBlockSizeEx @ 0x18005FCA4 (RtlpGetBlockSizeEx.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 *     memset @ 0x1800ACCC0 (memset.c)
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
