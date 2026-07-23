/*
 * XREFs of NormalizationListEntry_Alloc @ 0x140219134
 * Callers:
 *     RtlpGetNormalization @ 0x14068C680 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
