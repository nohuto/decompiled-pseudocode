/*
 * XREFs of NdisAllocateMemoryWithTagPriority @ 0x1C000DE70
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

PVOID __stdcall NdisAllocateMemoryWithTagPriority(
        NDIS_HANDLE NdisHandle,
        UINT Length,
        ULONG Tag,
        EX_POOL_PRIORITY Priority)
{
  if ( !Tag )
    Tag = 1835091022;
  return ExAllocatePoolWithTagPriority(ndisDriverPoolType, Length, Tag, Priority);
}
