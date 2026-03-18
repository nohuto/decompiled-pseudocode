/*
 * XREFs of KsepPoolFreeNonPaged @ 0x1400B0130
 * Callers:
 *     KsepCompletionSafeWrapper @ 0x1401DCB8C (KsepCompletionSafeWrapper.c)
 *     KseShimDriverIoCallbacks @ 0x1404E5818 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_1403073AC);
  }
}
