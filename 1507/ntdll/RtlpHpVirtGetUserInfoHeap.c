/*
 * XREFs of RtlpHpVirtGetUserInfoHeap @ 0x1800EAD04
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180057CD0 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 */

char __fastcall RtlpHpVirtGetUserInfoHeap(
        PRTL_CRITICAL_SECTION *BaseAddress,
        int a2,
        unsigned __int64 a3,
        _QWORD *a4,
        ULONG *a5)
{
  PRTL_CRITICAL_SECTION *HeapByAlloc; // r10

  HeapByAlloc = BaseAddress;
  if ( BaseAddress == NtCurrentPeb()->ProcessHeap )
    HeapByAlloc = (PRTL_CRITICAL_SECTION *)RtlpHpVirtFindHeapByAlloc((__int64)BaseAddress, a3, 0LL);
  return RtlpGetUserInfoHeapInternal(HeapByAlloc, a2, a3, a4, a5);
}
