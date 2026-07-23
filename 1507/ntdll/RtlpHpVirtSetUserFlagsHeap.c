/*
 * XREFs of RtlpHpVirtSetUserFlagsHeap @ 0x1800EBBE0
 * Callers:
 *     RtlSetUserFlagsHeap @ 0x1800D85F0 (RtlSetUserFlagsHeap.c)
 * Callees:
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 */

char __fastcall RtlpHpVirtSetUserFlagsHeap(
        PRTL_CRITICAL_SECTION *BaseAddress,
        int a2,
        unsigned __int64 a3,
        unsigned int a4,
        ULONG a5)
{
  PRTL_CRITICAL_SECTION *HeapByAlloc; // r10

  HeapByAlloc = BaseAddress;
  if ( BaseAddress == NtCurrentPeb()->ProcessHeap )
    HeapByAlloc = (PRTL_CRITICAL_SECTION *)RtlpHpVirtFindHeapByAlloc((__int64)BaseAddress, a3, 0LL);
  return RtlpSetUserFlagsHeapInternal(HeapByAlloc, a2, a3, a4, a5);
}
