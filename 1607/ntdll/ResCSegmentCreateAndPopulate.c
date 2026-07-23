/*
 * XREFs of ResCSegmentCreateAndPopulate @ 0x180106000
 * Callers:
 *     ResCKeSegmentOpenMapping @ 0x180100154 (ResCKeSegmentOpenMapping.c)
 *     _ResCCreateMappingExclusive @ 0x1801034B8 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x180103978 (_ResCOpenMapping.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlSetLastWin32Error @ 0x18005A460 (RtlSetLastWin32Error.c)
 *     ResCSegmentPopulate @ 0x1801060A0 (ResCSegmentPopulate.c)
 */

void *__fastcall ResCSegmentCreateAndPopulate(__int64 a1, unsigned int a2, int a3)
{
  _DWORD *Heap; // rax
  void *v8; // rbx

  if ( !a1 )
  {
    RtlSetLastWin32Error(87);
    return 0LL;
  }
  Heap = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 0x30uLL);
  v8 = Heap;
  if ( !Heap )
    return 0LL;
  *Heap = a3 & 0xFFFFFFFB;
  if ( !(unsigned int)ResCSegmentPopulate(Heap, a1, a2) )
  {
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v8);
    return 0LL;
  }
  return v8;
}
