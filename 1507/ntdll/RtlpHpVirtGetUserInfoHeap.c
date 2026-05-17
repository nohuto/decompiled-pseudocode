/*
 * XREFs of RtlpHpVirtGetUserInfoHeap @ 0x1800EAD04
 * Callers:
 *     RtlGetUserInfoHeap @ 0x180057CD0 (RtlGetUserInfoHeap.c)
 * Callees:
 *     RtlpHpVirtFindHeapByAlloc @ 0x1800EAB58 (RtlpHpVirtFindHeapByAlloc.c)
 */

char __fastcall RtlpHpVirtGetUserInfoHeap(void *a1, int a2, unsigned __int64 a3, _QWORD *a4, _DWORD *a5)
{
  unsigned __int64 HeapByAlloc; // r10

  HeapByAlloc = (unsigned __int64)a1;
  if ( a1 == NtCurrentPeb()->ProcessHeap )
    HeapByAlloc = RtlpHpVirtFindHeapByAlloc((__int64)a1, a3, 0LL);
  return RtlpGetUserInfoHeapInternal(HeapByAlloc, a2, a3, a4, a5);
}
