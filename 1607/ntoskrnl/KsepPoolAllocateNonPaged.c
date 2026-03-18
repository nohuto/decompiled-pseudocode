/*
 * XREFs of KsepPoolAllocateNonPaged @ 0x1401DCECC
 * Callers:
 *     KseSetCompletionHook @ 0x1401DCAFC (KseSetCompletionHook.c)
 *     KseShimDriverIoCallbacks @ 0x1404E5818 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     memset @ 0x1401715C0 (memset.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

PVOID __fastcall KsepPoolAllocateNonPaged(size_t Size)
{
  PVOID PoolWithTag; // rax
  PVOID v3; // rbx

  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, Size, 0x6245534Bu);
  v3 = PoolWithTag;
  if ( PoolWithTag )
  {
    _InterlockedIncrement(&dword_1403073A8);
    memset(PoolWithTag, 0, Size);
  }
  else
  {
    _InterlockedIncrement(&dword_1403073B4);
  }
  return v3;
}
