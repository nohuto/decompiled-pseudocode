/*
 * XREFs of KsepPoolFreeNonPaged @ 0x140002648
 * Callers:
 *     KsepCompletionSafeWrapper @ 0x1401CCF08 (KsepCompletionSafeWrapper.c)
 *     KseShimDriverIoCallbacks @ 0x1403B6740 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_1402E22EC);
  }
}
