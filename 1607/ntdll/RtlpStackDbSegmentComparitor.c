/*
 * XREFs of RtlpStackDbSegmentComparitor @ 0x18010227C
 * Callers:
 *     RtlpStackDbSegmentFindOrCreate @ 0x1801022B4 (RtlpStackDbSegmentFindOrCreate.c)
 * Callees:
 *     memcmp @ 0x18009A690 (memcmp.c)
 */

_BOOL8 __fastcall RtlpStackDbSegmentComparitor(__int64 a1, unsigned int *a2)
{
  return *(unsigned __int8 *)(a1 + 19) == *a2 && !memcmp((const void *)(a1 + 24), *((const void **)a2 + 1), 8LL * *a2);
}
