/*
 * XREFs of VfStartBranchTracing @ 0x14070EEB4
 * Callers:
 *     KiFreezeTargetExecution @ 0x140083560 (KiFreezeTargetExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1407028E0 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     <none>
 */

__int64 VfStartBranchTracing()
{
  __int64 result; // rax
  unsigned int v1; // eax

  if ( (MmVerifierData & 0x8000000) != 0 && VfBTSSupported )
  {
    if ( !VfBTSInitialized || VfBTSStarted[KeGetCurrentPrcb()->Number] )
      return 3221226538LL;
    if ( VfBTSProcessorFamily == 15 )
    {
      v1 = 12;
    }
    else
    {
      if ( VfBTSProcessorFamily != 6 )
      {
LABEL_11:
        result = 0LL;
        VfBTSStarted[KeGetCurrentPrcb()->Number] = 1;
        return result;
      }
      v1 = 192;
    }
    __writemsr(0x1D9u, v1);
    goto LABEL_11;
  }
  return 3221225474LL;
}
