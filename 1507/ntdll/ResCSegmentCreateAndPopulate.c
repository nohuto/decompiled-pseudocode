/*
 * XREFs of ResCSegmentCreateAndPopulate @ 0x1800FC3C0
 * Callers:
 *     ResCKeSegmentOpenMapping @ 0x1800F850C (ResCKeSegmentOpenMapping.c)
 *     _ResCCreateMappingExclusive @ 0x1800F92CC (_ResCCreateMappingExclusive.c)
 *     _ResCOpenMapping @ 0x1800F978C (_ResCOpenMapping.c)
 * Callees:
 *     RtlSetLastWin32Error @ 0x18000F090 (RtlSetLastWin32Error.c)
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     ResCSegmentPopulate @ 0x1800FC460 (ResCSegmentPopulate.c)
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
  Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 48LL);
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
