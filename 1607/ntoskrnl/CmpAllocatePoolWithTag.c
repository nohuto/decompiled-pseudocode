/*
 * XREFs of CmpAllocatePoolWithTag @ 0x1400A7788
 * Callers:
 *     CmpGetNameControlBlock @ 0x140436F80 (CmpGetNameControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x140437410 (CmpAllocateKeyControlBlock.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EEE4 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall CmpAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
