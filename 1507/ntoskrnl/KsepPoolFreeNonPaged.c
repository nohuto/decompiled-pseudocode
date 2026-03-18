/*
 * XREFs of KsepPoolFreeNonPaged @ 0x140153EE0
 * Callers:
 *     KsepCompletionSafeWrapper @ 0x14020C26C (KsepCompletionSafeWrapper.c)
 *     KseShimDriverIoCallbacks @ 0x140576E20 (KseShimDriverIoCallbacks.c)
 * Callees:
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 */

void __fastcall KsepPoolFreeNonPaged(void *a1)
{
  if ( a1 )
  {
    ExFreePoolWithTag(a1, 0x6245534Bu);
    _InterlockedIncrement(&dword_14033274C);
  }
}
