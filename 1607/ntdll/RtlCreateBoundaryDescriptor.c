/*
 * XREFs of RtlCreateBoundaryDescriptor @ 0x1800825E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180022DA0 (RtlAllocateHeap.c)
 *     memmove @ 0x1800AC980 (memmove.c)
 */

POBJECT_BOUNDARY_DESCRIPTOR __cdecl RtlCreateBoundaryDescriptor(PUNICODE_STRING Name, ULONG Flags)
{
  char v2; // si
  unsigned int v4; // ebp
  _OBJECT_BOUNDARY_DESCRIPTOR *Heap; // rax
  _OBJECT_BOUNDARY_DESCRIPTOR *v6; // rbx
  int Length; // eax

  v2 = Flags;
  if ( (Flags & 0xFFFFFFFE) != 0 )
    return 0LL;
  if ( !Name->Length )
    return 0LL;
  if ( (Name->Length & 1) != 0 )
    return 0LL;
  v4 = (Name->Length + 31) & 0xFFFFFFF8;
  Heap = (_OBJECT_BOUNDARY_DESCRIPTOR *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v4);
  v6 = Heap;
  if ( !Heap )
    return 0LL;
  Heap->Items = 1;
  Heap->TotalSize = v4;
  Heap->Version = 1;
  if ( (v2 & 1) != 0 )
    Heap->Flags = 1;
  Length = Name->Length;
  v6[1].Version = 1;
  v6[1].Items = Length + 8;
  memmove(&v6[1].TotalSize, Name->Buffer, Name->Length);
  return v6;
}
