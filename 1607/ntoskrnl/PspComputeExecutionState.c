/*
 * XREFs of PspComputeExecutionState @ 0x14046A53C
 * Callers:
 *     PspSetJobFreezeCountCallback @ 0x1400ADFD8 (PspSetJobFreezeCountCallback.c)
 *     PspAddProcessToJobChain @ 0x14046A2B8 (PspAddProcessToJobChain.c)
 *     PsSwapProcessWorkingSet @ 0x14067D48C (PsSwapProcessWorkingSet.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspComputeExecutionState(__int64 a1)
{
  __int64 result; // rax

  result = 0LL;
  if ( *(_DWORD *)(a1 + 864) )
    result = 2LL;
  if ( *(_DWORD *)(a1 + 856) )
    return (unsigned int)result | 1;
  return result;
}
