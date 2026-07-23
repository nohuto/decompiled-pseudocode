/*
 * XREFs of CmpAllocatePoolWithTag @ 0x1400A5D00
 * Callers:
 *     CmpGetNameControlBlock @ 0x140435E50 (CmpGetNameControlBlock.c)
 *     CmpAllocateKeyControlBlock @ 0x1404362E0 (CmpAllocateKeyControlBlock.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x14060EF98 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall CmpAllocatePoolWithTag(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
