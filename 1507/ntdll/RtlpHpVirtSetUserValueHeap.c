/*
 * XREFs of RtlpHpVirtSetUserValueHeap @ 0x1800EBC3C
 * Callers:
 *     RtlSetUserValueHeap @ 0x180058080 (RtlSetUserValueHeap.c)
 * Callees:
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 */

char __fastcall RtlpHpVirtSetUserValueHeap(PRTL_CRITICAL_SECTION *HeapByAlloc, int a2, unsigned __int64 a3, __int64 a4)
{
  if ( HeapByAlloc == NtCurrentPeb()->ProcessHeap )
    HeapByAlloc = (PRTL_CRITICAL_SECTION *)RtlpHpVirtFindHeapByAlloc((__int64)HeapByAlloc, a3, 0LL);
  return RtlpSetUserValueHeapInternal(HeapByAlloc, a2, a3, a4);
}
