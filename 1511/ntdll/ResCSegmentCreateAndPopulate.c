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
