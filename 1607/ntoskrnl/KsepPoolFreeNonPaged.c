/*
 * XREFs of KsepPoolFreeNonPaged @ 0x14010B608
 * Callers:
 *     KsepCompletionSafeWrapper @ 0x1401DC9B8 (KsepCompletionSafeWrapper.c)
 *     KseShimDriverIoCallbacks @ 0x14051525C (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_1403073EC);
  }
}
