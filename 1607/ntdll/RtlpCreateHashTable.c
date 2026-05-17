/*
 * XREFs of RtlpCreateHashTable @ 0x18007EE08
 * Callers:
 *     RtlCreateHashTable @ 0x18007EDF0 (RtlCreateHashTable.c)
 *     RtlCreateHashTableEx @ 0x1800EB3B0 (RtlCreateHashTableEx.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180022DB0 (RtlAllocateHeap.c)
 *     RtlpInitializeSecondLevelDir @ 0x18007EEEC (RtlpInitializeSecondLevelDir.c)
 *     RtlpAllocateSecondLevelDir @ 0x18007EF0C (RtlpAllocateSecondLevelDir.c)
 *     RtlDeleteHashTable @ 0x1800881F0 (RtlDeleteHashTable.c)
 *     memset @ 0x1800ACCC0 (memset.c)
 */

char __fastcall RtlpCreateHashTable(_DWORD **a1, unsigned int a2, int a3, int a4)
{
  unsigned int v4; // ebp
  _DWORD *Heap; // rbx
  int v10; // esi
  __int64 v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned int v16; // ecx
  int v17; // ebp
  _QWORD *v18; // rax
  _QWORD *v19; // rsi
  __int64 v20; // rdi
  __int64 SecondLevelDir; // rax
  __int64 v22; // rdx
  __int64 v23; // r8
  unsigned int v24; // [rsp+58h] [rbp+10h]

  v4 = a2 - 1;
  if ( ((a2 - 1) & a2) != 0 || a2 - 128 > 0x7FFF00 )
    return 0;
  Heap = *a1;
  v10 = 0;
  if ( !*a1 )
  {
    Heap = (_DWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x28uLL);
    if ( !Heap )
      return 0;
    v10 = 1;
  }
  memset(Heap, 0, 0x28uLL);
  Heap[3] = 0;
  *Heap = a4 | v10;
  Heap[2] = a2;
  Heap[4] = v4;
  Heap[1] = a3;
  if ( a2 > 0x80 )
  {
    _BitScanReverse(&v16, a2 + 127);
    v24 = v16 - 7;
    v17 = (a2 + 127) ^ (1 << v16);
    v18 = (_QWORD *)RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, 0x80uLL);
    v19 = v18;
    if ( v18 )
    {
      memset(v18, 0, 0x80uLL);
      v20 = 0LL;
      *((_QWORD *)Heap + 4) = v19;
      while ( 1 )
      {
        SecondLevelDir = RtlpAllocateSecondLevelDir((unsigned int)v20);
        v13 = SecondLevelDir;
        if ( !SecondLevelDir )
          break;
        if ( (unsigned int)v20 >= v24 )
          v22 = (unsigned int)(v17 + 1);
        else
          v22 = (unsigned int)(1 << (v20 + 7));
        RtlpInitializeSecondLevelDir(SecondLevelDir, v22, SecondLevelDir);
        v19[v20] = v23;
        v20 = (unsigned int)(v20 + 1);
        if ( (unsigned int)v20 > v24 )
          goto LABEL_9;
      }
    }
    goto LABEL_19;
  }
  v11 = RtlpAllocateSecondLevelDir(0LL);
  v13 = v11;
  if ( !v11 )
  {
LABEL_19:
    RtlDeleteHashTable(Heap, v12, v13);
    return 0;
  }
  RtlpInitializeSecondLevelDir(v11, (unsigned int)Heap[2], v11);
  *((_QWORD *)Heap + 4) = v14;
LABEL_9:
  *a1 = Heap;
  return 1;
}
