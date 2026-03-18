/*
 * XREFs of ViDeadlockKernelVerifierLookasideAllocate @ 0x1407154B4
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __fastcall ViDeadlockKernelVerifierLookasideAllocate(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  if ( (ViDeadlockState & 2) != 0 )
    return 0LL;
  else
    return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
