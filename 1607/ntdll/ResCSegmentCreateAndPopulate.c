/*
 * XREFs of ResCSegmentCreateAndPopulate @ 0x180106000
 * Callers:
 *     ResCKeSegmentOpenMapping @ 0x18010021C (ResCKeSegmentOpenMapping.c)
 *     _ResCCreateMappingExclusive @ 0x180103578 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x180103A38 (_ResCOpenMapping.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A470 (RtlSetLastWin32Error.c)
 *     ResCSegmentPopulate @ 0x1801060A0 (ResCSegmentPopulate.c)
 */

unsigned __int64 __fastcall ResCSegmentCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *Heap; // rax
  unsigned __int64 v8; // rbx

  if ( !a1 )
  {
    RtlSetLastWin32Error(0x57u);
    return 0LL;
  }
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
  v8 = (unsigned __int64)Heap;
  if ( !Heap )
    return 0LL;
  *Heap = a3 & 0xFFFFFFFB;
  if ( !(unsigned int)ResCSegmentPopulate(Heap, a1, a2) )
  {
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  return v8;
}
