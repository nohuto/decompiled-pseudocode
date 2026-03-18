/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x1401CD248
 * Callers:
 *     KseSetCompletionHook @ 0x1401CCE78 (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x1403B6740 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x140166CC0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_1402E22E8);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_1402E22F4);
  }
  return v3;
}
