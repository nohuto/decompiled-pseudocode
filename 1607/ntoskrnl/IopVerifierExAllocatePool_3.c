/*
 * XREFs of IopVerifierExAllocatePool_3 @ 0x1401CB430
 * Callers:
 *     IopErrorLogThread @ 0x140542C34 (IopErrorLogThread.c)
 *     IopErrorLogQueueRequest @ 0x140628100 (IopErrorLogQueueRequest.c)
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
