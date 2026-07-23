/*
 * XREFs of RtlpCreateHashTable @ 0x180065898
 * Callers:
 *     RtlCreateHashTable @ 0x180065880 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x1800DBB10 (RtlCreateHashTableEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x18002ED40 (RtlAllocateHeap.c)
 *     RtlpAllocateSecondLevelDir @ 0x180065980 (RtlpAllocateSecondLevelDir.c)
 *     RtlDeleteHashTable @ 0x180078140 (RtlDeleteHashTable.c)
 *     memset @ 0x180098540 (memset.c)
 */

char __fastcall RtlpCreateHashTable(_RTL_DYNAMIC_HASH_TABLE **a1, unsigned int a2, unsigned int a3, int a4)
{
  unsigned int v4; // ebp
  _RTL_DYNAMIC_HASH_TABLE *Heap; // rbx
  int v10; // esi
  __int64 v11; // rbp
  __int64 v12; // rax
  PVOID v14; // rax
  PVOID v15; // rsi
  __int64 v16; // rdi
  __int64 SecondLevelDir; // rax

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0xFF80 )
    return 0;
  Heap = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    Heap = (_RTL_DYNAMIC_HASH_TABLE *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    if ( !Heap )
      return 0;
    v10 = 1;
  }
  memset(Heap, 0, sizeof(_RTL_DYNAMIC_HASH_TABLE));
  Heap->Pivot = 0;
  Heap->DivisorMask = v4;
  v11 = v4 >> 7;
  Heap->Flags = a4 | v10;
  Heap->TableSize = a2;
  Heap->Shift = a3;
  if ( a2 > 0x80 )
  {
    v14 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 0x1000uLL);
    v15 = v14;
    if ( v14 )
    {
      memset(v14, 0, 0x1000uLL);
      v16 = 0LL;
      Heap->Directory = v15;
      while ( 1 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir();
        if ( !SecondLevelDir )
          break;
        *((_QWORD *)v15 + v16++) = SecondLevelDir;
        if ( v16 > v11 )
          goto LABEL_7;
      }
    }
    goto LABEL_11;
  }
  v12 = RtlpAllocateSecondLevelDir();
  if ( !v12 )
  {
LABEL_11:
    RtlDeleteHashTable(Heap);
    return 0;
  }
  Heap->Directory = (void *)v12;
LABEL_7:
  *a1 = Heap;
  return 1;
}
