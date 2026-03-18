/*
 * XREFs of PspComputeExecutionState @ 0x1403E90FC
 * Callers:
 *     PspSetJobFreezeCountCallback @ 0x1400EE98C (PspSetJobFreezeCountCallback.c)
 *     PspAddProcessToJobChain @ 0x1403E8E64 (PspAddProcessToJobChain.c)
 *     PsSwapProcessWorkingSet @ 0x14063EE24 (PsSwapProcessWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspComputeExecutionState(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 872) )
    result = 2LL;
  if ( *(_DWORD *)(a1 + 864) )
    return (unsigned int)result | 1;
  return result;
}
