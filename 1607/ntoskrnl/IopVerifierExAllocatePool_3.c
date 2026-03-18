/*
 * XREFs of IopVerifierExAllocatePool_3 @ 0x1401CB54C
 * Callers:
 *     IopErrorLogThread @ 0x1405426F4 (IopErrorLogThread.c)
 *     IopErrorLogQueueRequest @ 0x14062804C (IopErrorLogQueueRequest.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall IopVerifierExAllocatePool_3(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
