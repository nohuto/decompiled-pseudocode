/*
 * XREFs of VfStopBranchTracing @ 0x14070EF38
 * Callers:
 *     KiFreezeTargetExecution @ 0x140083560 (KiFreezeTargetExecution.c)
 *     VfNotifyVerifierOfEvent @ 0x1407028E0 (VfNotifyVerifierOfEvent.c)
 * Callees:
 *     <none>
 */

__int64 VfStopBranchTracing()
{
  __int64 result; // rax

  if ( (MmVerifierData & 0x8000000) == 0 || !VfBTSSupported )
    return 3221225474LL;
  if ( !VfBTSInitialized || !VfBTSStarted[KeGetCurrentPrcb()->Number] )
    return 3221226538LL;
  __writemsr(0x1D9u, 0LL);
  result = 0LL;
  VfBTSStarted[KeGetCurrentPrcb()->Number] = 0;
  return result;
}
