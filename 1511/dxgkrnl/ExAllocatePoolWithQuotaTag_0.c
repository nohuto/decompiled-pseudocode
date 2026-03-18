/*
 * XREFs of ExAllocatePoolWithQuotaTag_0 @ 0x1C0011420
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

// attributes: thunk
PVOID __stdcall ExAllocatePoolWithQuotaTag_0(POOL_TYPE PoolType, SIZE_T NumberOfBytes, ULONG Tag)
{
  return ExAllocatePoolWithQuotaTag(PoolType, NumberOfBytes, Tag);
}
