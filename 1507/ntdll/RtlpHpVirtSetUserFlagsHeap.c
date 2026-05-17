/*
 * XREFs of RtlpHpVirtSetUserFlagsHeap @ 0x1800EBBE0
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800D85F0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 */

char __fastcall RtlpHpVirtSetUserFlagsHeap(void *a1, int a2, unsigned __int64 a3, unsigned int a4, unsigned int a5)
{
  unsigned __int64 HeapByAlloc; // r10

  HeapByAlloc = (unsigned __int64)a1;
  if ( a1 == NtCurrentPeb()->ProcessHeap )
    HeapByAlloc = RtlpHpVirtFindHeapByAlloc((__int64)a1, a3, 0LL);
  return RtlpSetUserFlagsHeapInternal(HeapByAlloc, a2, a3, a4, a5);
}
