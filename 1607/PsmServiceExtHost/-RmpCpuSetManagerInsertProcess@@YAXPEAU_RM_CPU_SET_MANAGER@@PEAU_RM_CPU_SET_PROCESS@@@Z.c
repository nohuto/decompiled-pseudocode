/*
 * XREFs of ?RmpCpuSetManagerInsertProcess@@YAXPEAU_RM_CPU_SET_MANAGER@@PEAU_RM_CPU_SET_PROCESS@@@Z @ 0x180030824
 * Callers:
 *     RmpCpuSetManagerRegisterProcessWithAllocation @ 0x1800315D0 (RmpCpuSetManagerRegisterProcessWithAllocation.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x1800039E0 (RmpFreeHeapForHashTable.c)
 */

void __fastcall RmpCpuSetManagerInsertProcess(struct _RM_CPU_SET_MANAGER *a1, struct _RM_CPU_SET_PROCESS *a2)
{
  unsigned __int64 v2; // rdi
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdx
  char v7; // si
  unsigned __int64 v8; // rbx
  struct _PEB *v9; // rcx
  unsigned __int64 *Heap; // r8
  unsigned __int64 *v11; // r9
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned int v14; // r9d
  __int64 v15; // r14
  __int64 v16; // rsi
  _QWORD *v17; // r10
  __int64 v18; // rdx
  void *v19; // rcx
  __int64 v20; // [rsp+50h] [rbp+30h]
  __int64 v21; // [rsp+58h] [rbp+38h]

  v2 = (unsigned __int64)a1 + 40;
  v4 = *((_DWORD *)a1 + 11);
  v20 = *((_QWORD *)a2 + 1) & (-1LL << (v4 & 0x1F));
  v5 = *((_QWORD *)a1 + 6);
  v6 = (37
      * (BYTE6(v20)
       + 37
       * (BYTE5(v20)
        + 37
        * (BYTE4(v20)
         + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
      + HIBYTE(v20)) & ((v4 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v5 + 8 * v6);
  *(_QWORD *)(v5 + 8 * v6) = a2;
  if ( ++*(_DWORD *)v2 >= (unsigned int)(2 * (*(_DWORD *)(v2 + 4) >> 5)) )
  {
    v7 = -1;
    v8 = 2 * ((unsigned __int64)*(unsigned int *)(v2 + 4) >> 5);
    if ( v8 <= 0xFFFFFFFF )
    {
      v9 = NtCurrentPeb();
      if ( (unsigned int)v8 < 4 )
        v8 = 4LL;
      Heap = (unsigned __int64 *)RtlAllocateHeap(v9->ProcessHeap, 0, 8LL * (unsigned int)v8);
      if ( Heap )
      {
        if ( (((_DWORD)v8 - 1) & (unsigned int)v8) != 0 )
        {
          do
          {
            ++v7;
            LODWORD(v8) = (unsigned int)v8 >> 1;
          }
          while ( (_DWORD)v8 );
          v8 = (unsigned int)(1 << v7);
        }
        v11 = Heap;
        v12 = 0LL;
        if ( (unsigned int)v8 > 0x4000000 )
          v8 = 0x4000000LL;
        v13 = (8 * v8 + 7) >> 3;
        if ( Heap > &Heap[v8] )
          v13 = 0LL;
        if ( v13 )
        {
          do
          {
            ++v12;
            *v11++ = v2 | 1;
          }
          while ( v12 < v13 );
        }
        v14 = 0;
        v15 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
        if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v16 = *(_QWORD *)(v2 + 8);
            while ( 1 )
            {
              v17 = *(_QWORD **)(v16 + 8LL * v14);
              if ( ((unsigned __int8)v17 & 1) != 0 )
                break;
              *(_QWORD *)(v16 + 8LL * v14) = *v17;
              v21 = v15 & v17[1];
              v18 = (37
                   * (BYTE6(v21)
                    + 37
                    * (BYTE5(v21)
                     + 37
                     * (BYTE4(v21)
                      + 37
                      * (BYTE3(v21) + 37 * (BYTE2(v21) + 37 * (BYTE1(v21) + 37 * ((unsigned __int8)v21 + 11623883)))))))
                   + HIBYTE(v21)) & (unsigned int)(v8 - 1);
              *v17 = Heap[v18];
              Heap[v18] = (unsigned __int64)v17;
            }
            ++v14;
          }
          while ( v14 < *(_DWORD *)(v2 + 4) >> 5 );
        }
        *(_DWORD *)(v2 + 4) &= 0x1Fu;
        v19 = *(void **)(v2 + 8);
        *(_DWORD *)(v2 + 4) |= 32 * v8;
        *(_QWORD *)(v2 + 8) = Heap;
        if ( v19 )
          RmpFreeHeapForHashTable(v19);
      }
    }
  }
}
