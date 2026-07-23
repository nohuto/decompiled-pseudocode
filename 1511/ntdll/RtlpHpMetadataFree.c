/*
 * XREFs of RtlpHpMetadataFree @ 0x18005A5C4
 * Callers:
 *     RtlpHpFreeWithExceptionProtection @ 0x180021080 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpHpTagFree @ 0x180050324 (RtlpHpTagFree.c)
 *     RtlpHpTagContextAllocateTag @ 0x180059F30 (RtlpHpTagContextAllocateTag.c)
 *     RtlpHpLargeFree @ 0x18005A4D4 (RtlpHpLargeFree.c)
 *     RtlpHpLargeAlloc @ 0x18005A614 (RtlpHpLargeAlloc.c)
 *     RtlpHpLargeAllocationDestroy @ 0x1800F2380 (RtlpHpLargeAllocationDestroy.c)
 *     RtlpHpLargeSparseBmpFree @ 0x1800F24A0 (RtlpHpLargeSparseBmpFree.c)
 * Callees:
 *     RtlpHpFreeHeap @ 0x18001ABF8 (RtlpHpFreeHeap.c)
 */

_BOOL8 __fastcall RtlpHpMetadataFree(unsigned __int64 a1)
{
  return RtlpHpFreeHeap(RtlpHpMetadataHeap, a1, 0x1000000, 0LL, 0LL);
}
