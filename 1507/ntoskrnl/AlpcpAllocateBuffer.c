/*
 * XREFs of AlpcpAllocateBuffer @ 0x1405538A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall AlpcpAllocateBuffer(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
