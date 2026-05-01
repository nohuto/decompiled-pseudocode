/*
 * XREFs of RmpObjectTableAddObjectWithLock @ 0x1800061F4
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800060D8 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x1800039E0 (RmpFreeHeapForHashTable.c)
 */

__int64 __fastcall RmpObjectTableAddObjectWithLock(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  char v8; // si
  unsigned __int64 v9; // rbx
  struct _PEB *v10; // rcx
  __int64 *Heap; // r9
  __int64 *v12; // r8
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // r10
  __int64 v17; // r15
  _QWORD *v18; // r11
  __int64 v19; // rdx
  void *v20; // rcx
  __int64 v21; // [rsp+60h] [rbp+40h]
  __int64 v22; // [rsp+68h] [rbp+48h]

  if ( *(_DWORD *)a1 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
  {
    v8 = -1;
    v9 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
    if ( v9 <= 0xFFFFFFFF )
    {
      v10 = NtCurrentPeb();
      if ( (unsigned int)v9 < 4 )
        v9 = 4LL;
      Heap = (__int64 *)RtlAllocateHeap(v10->ProcessHeap, 0, 8LL * (unsigned int)v9);
      if ( Heap )
      {
        if ( (((_DWORD)v9 - 1) & (unsigned int)v9) != 0 )
        {
          do
          {
            ++v8;
            LODWORD(v9) = (unsigned int)v9 >> 1;
          }
          while ( (_DWORD)v9 );
          v9 = (unsigned int)(1 << v8);
        }
        v12 = Heap;
        v13 = 0LL;
        if ( (unsigned int)v9 > 0x4000000 )
          v9 = 0x4000000LL;
        v14 = (8 * v9 + 7) >> 3;
        if ( Heap > &Heap[v9] )
          v14 = 0LL;
        if ( v14 )
        {
          do
          {
            ++v13;
            *v12++ = a1 | 1;
          }
          while ( v13 < v14 );
        }
        v15 = 0;
        v16 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v17 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v18 = *(_QWORD **)(v17 + 8LL * v15);
              if ( ((unsigned __int8)v18 & 1) != 0 )
                break;
              *(_QWORD *)(v17 + 8LL * v15) = *v18;
              v21 = v16 & v18[1];
              v19 = (37
                   * (BYTE6(v21)
                    + 37
                    * (BYTE5(v21)
                     + 37
                     * (BYTE4(v21)
                      + 37
                      * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
                   + HIBYTE(v21)) & (unsigned int)(v9 - 1);
              *v18 = Heap[v19];
              Heap[v19] = (__int64)v18;
            }
            ++v15;
          }
          while ( v15 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        *(_DWORD *)(a1 + 4) &= 0x1Fu;
        v20 = *(void **)(a1 + 8);
        *(_DWORD *)(a1 + 4) |= 32 * v9;
        *(_QWORD *)(a1 + 8) = Heap;
        if ( v20 )
          RmpFreeHeapForHashTable(v20);
      }
    }
  }
  v4 = *(_DWORD *)(a1 + 4);
  v22 = a2[1] & (-1LL << (v4 & 0x1F));
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (37
      * (BYTE6(v22)
       + 37
       * (BYTE5(v22)
        + 37
        * (BYTE4(v22)
         + 37 * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
      + HIBYTE(v22)) & ((v4 >> 5) - 1);
  result = *(_QWORD *)(v5 + 8 * v6);
  *a2 = result;
  *(_QWORD *)(v5 + 8 * v6) = a2;
  ++*(_DWORD *)a1;
  return result;
}
