/*
 * XREFs of sub_1401BD574 @ 0x1401BD574
 * Callers:
 *     IopErrorLogThread @ 0x140503EFC (IopErrorLogThread.c)
 *     IopErrorLogQueueRequest @ 0x1405FE020 (IopErrorLogQueueRequest.c)
 * Callees:
 *     <none>
 */

PVOID __fastcall sub_1401BD574(POOL_TYPE a1, SIZE_T a2)
{
  if ( ViVerifierDriverAddedThunkListHead )
    return ExAllocatePoolWithTagPriority(a1, a2, 0x20206F49u, (EX_POOL_PRIORITY)((MmVerifierData & 0x10 | 0x40u) >> 1));
  else
    return ExAllocatePoolWithTag(a1, a2, 0x20206F49u);
}
