/*
 * XREFs of ResCSegmentCreateAndPopulate @ 0x1800FB6F0
 * Callers:
 *     ResCKeSegmentOpenMapping @ 0x1800F8028 (ResCKeSegmentOpenMapping.c)
 *     _ResCCreateMappingExclusive @ 0x1800F8BE4 (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x1800F90A4 (_ResCOpenMapping.c)
 * Callees:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x1800255D0 (RtlAllocateHeap.c)
 *     RtlSetLastWin32Error @ 0x180048BE0 (RtlSetLastWin32Error.c)
 *     ResCSegmentPopulate @ 0x1800FB790 (ResCSegmentPopulate.c)
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
