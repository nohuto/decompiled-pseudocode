/*
 * XREFs of NormalizationListEntry_Alloc @ 0x14024EDDC
 * Callers:
 *     RtlpGetNormalization @ 0x1406D0328 (RtlpGetNormalization.c)
 * Callees:
 *     <none>
 */

PVOID NormalizationListEntry_Alloc()
{
  return ExAllocatePoolWithTag(PagedPool, 0x90uLL, 0x456C6F4Eu);
}
