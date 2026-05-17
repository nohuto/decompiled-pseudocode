/*
 * XREFs of RtlpHpStackDbAllocRoutine @ 0x1800F8020
 * Callers:
 *     RtlpHpStackTraceAllocAdd @ 0x1800F81B4 (RtlpHpStackTraceAllocAdd.c)
 * Callees:
 *     <none>
 */

void *__fastcall RtlpHpStackDbAllocRoutine(size_t a1)
{
  return RtlpHpMetadataAlloc(a1, 0);
}
