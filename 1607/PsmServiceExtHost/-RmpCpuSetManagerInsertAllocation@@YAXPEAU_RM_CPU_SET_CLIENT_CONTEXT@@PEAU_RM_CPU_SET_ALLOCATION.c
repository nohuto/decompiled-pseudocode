/*
 * XREFs of ?RmpCpuSetManagerInsertAllocation@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18003054C
 * Callers:
 *     ?RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYPE@@KPEAPEAU_RM_CPU_SET_ALLOCATION@@@Z @ 0x18002F830 (-RmpCpuSetManagerAcquireCpuSets@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@W4_RM_CPU_SET_ALLOCATION_TYP.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x1800039E0 (RmpFreeHeapForHashTable.c)
 */

void __fastcall RmpCpuSetManagerInsertAllocation(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        struct _RM_CPU_SET_ALLOCATION *a2)
{
  __int64 v2; // rdi
  char *v3; // rax
  char **v5; // rdx
  char *v6; // rcx
  __int64 *v7; // rdx
  __int64 v8; // rcx
  __int64 **v9; // rax
  unsigned int v10; // r8d
  __int64 v11; // rcx
  __int64 v12; // rdx
  char v13; // r14
  unsigned __int64 v14; // rbx
  struct _PEB *v15; // rcx
  __int64 *Heap; // r8
  __int64 *v17; // r9
  unsigned __int64 v18; // r10
  unsigned __int64 v19; // rcx
  unsigned int v20; // r9d
  __int64 v21; // r15
  __int64 v22; // r14
  _QWORD *v23; // r10
  __int64 v24; // rdx
  void *v25; // rcx
  __int64 v26; // [rsp+50h] [rbp+30h]
  __int64 v27; // [rsp+58h] [rbp+38h]

  v2 = *(_QWORD *)a1;
  v3 = (char *)a2 + 24;
  *((_QWORD *)a2 + 2) = a1;
  v5 = (char **)*((_QWORD *)a1 + 4);
  v6 = (char *)a1 + 24;
  if ( *v5 != v6 )
    __fastfail(3u);
  *(_QWORD *)v3 = v6;
  *((_QWORD *)v3 + 1) = v5;
  *v5 = v3;
  v7 = (__int64 *)((char *)a2 + 56);
  *((_QWORD *)v6 + 1) = v3;
  v8 = 16LL * *((int *)a2 + 70) + v2 + 232;
  v9 = *(__int64 ***)(v8 + 8);
  if ( *v9 != (__int64 *)v8 )
    __fastfail(3u);
  *((_QWORD *)a2 + 8) = v9;
  *v7 = v8;
  *v9 = v7;
  *(_QWORD *)(v8 + 8) = v7;
  v10 = *(_DWORD *)(v2 + 28);
  v26 = *((_QWORD *)a2 + 6) & (-1LL << (v10 & 0x1F));
  v11 = *(_QWORD *)(v2 + 32);
  v12 = (37
       * (BYTE6(v26)
        + 37
        * (BYTE5(v26)
         + 37
         * (BYTE4(v26)
          + 37 * (BYTE3(v26) + 37 * (BYTE2(v26) + 37 * (BYTE1(v26) + 37 * ((unsigned __int8)v26 + 11623883)))))))
       + HIBYTE(v26)) & ((v10 >> 5) - 1);
  *((_QWORD *)a2 + 5) = *(_QWORD *)(v11 + 8 * v12);
  *(_QWORD *)(v11 + 8 * v12) = (char *)a2 + 40;
  if ( ++*(_DWORD *)(v2 + 24) >= (unsigned int)(2 * (*(_DWORD *)(v2 + 28) >> 5)) )
  {
    v13 = -1;
    v14 = 2 * ((unsigned __int64)*(unsigned int *)(v2 + 28) >> 5);
    if ( v14 <= 0xFFFFFFFF )
    {
      v15 = NtCurrentPeb();
      if ( (unsigned int)v14 < 4 )
        v14 = 4LL;
      Heap = (__int64 *)RtlAllocateHeap(v15->ProcessHeap, 0, 8LL * (unsigned int)v14);
      if ( Heap )
      {
        if ( (((_DWORD)v14 - 1) & (unsigned int)v14) != 0 )
        {
          do
          {
            ++v13;
            LODWORD(v14) = (unsigned int)v14 >> 1;
          }
          while ( (_DWORD)v14 );
          v14 = (unsigned int)(1 << v13);
        }
        v17 = Heap;
        v18 = 0LL;
        if ( (unsigned int)v14 > 0x4000000 )
          v14 = 0x4000000LL;
        v19 = (8 * v14 + 7) >> 3;
        if ( Heap > &Heap[v14] )
          v19 = 0LL;
        if ( v19 )
        {
          do
          {
            ++v18;
            *v17++ = (v2 + 24) | 1;
          }
          while ( v18 < v19 );
        }
        v20 = 0;
        v21 = -1LL << (*(_BYTE *)(v2 + 28) & 0x1F);
        if ( (*(_DWORD *)(v2 + 28) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v22 = *(_QWORD *)(v2 + 32);
            while ( 1 )
            {
              v23 = *(_QWORD **)(v22 + 8LL * v20);
              if ( ((unsigned __int8)v23 & 1) != 0 )
                break;
              *(_QWORD *)(v22 + 8LL * v20) = *v23;
              v27 = v21 & v23[1];
              v24 = (37
                   * (BYTE6(v27)
                    + 37
                    * (BYTE5(v27)
                     + 37
                     * (BYTE4(v27)
                      + 37
                      * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
                   + HIBYTE(v27)) & (unsigned int)(v14 - 1);
              *v23 = Heap[v24];
              Heap[v24] = (__int64)v23;
            }
            ++v20;
          }
          while ( v20 < *(_DWORD *)(v2 + 28) >> 5 );
        }
        *(_DWORD *)(v2 + 28) &= 0x1Fu;
        v25 = *(void **)(v2 + 32);
        *(_DWORD *)(v2 + 28) |= 32 * v14;
        *(_QWORD *)(v2 + 32) = Heap;
        if ( v25 )
          RmpFreeHeapForHashTable(v25);
      }
    }
  }
  *((_DWORD *)a2 + 69) |= 1u;
}
