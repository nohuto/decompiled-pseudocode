/*
 * XREFs of ExAllocatePoolWithTag_0 @ 0x1C00113D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall ExAllocatePoolWithTag_0(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithTag(PoolType, NumberOfBytes, Tag);
}
