/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800060D8
 * Callers:
 *     RmpActivityHostCompleteInitialization @ 0x1800060A4 (RmpActivityHostCompleteInitialization.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x1800039E0 (RmpFreeHeapForHashTable.c)
 *     RmpObjectTableAddObjectWithLock @ 0x1800061F4 (RmpObjectTableAddObjectWithLock.c)
 *     ?RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@@Z @ 0x1800062D0 (-RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rbx
  __int64 v3; // r13
  __int64 v4; // rdi
  unsigned int v5; // r9d
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // r9
  char v9; // si
  unsigned __int64 v10; // rbx
  struct _PEB *v11; // rcx
  __int64 *Heap; // rax
  __int64 *v13; // r8
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // r10
  __int64 v18; // r15
  _QWORD *v19; // r11
  __int64 v20; // rdx
  void *v21; // rcx
  __int64 v22; // [rsp+60h] [rbp+40h]

  v1 = *((_QWORD *)a1 + 5);
  v3 = v1 + 32;
  *((_QWORD *)a1 + 127) = RmpActivityHostIdentifierHash((char *)a1 + 56, *((unsigned int *)a1 + 12));
  RtlAcquireSRWLockExclusive(v1 + 32);
  RmpObjectTableAddObjectWithLock(v1 + 16, a1);
  v4 = v1 + 3000;
  if ( *(_DWORD *)(v1 + 3000) >= (unsigned int)(2 * (*(_DWORD *)(v1 + 3004) >> 5)) )
  {
    v9 = -1;
    v10 = 2 * ((unsigned __int64)*(unsigned int *)(v1 + 3004) >> 5);
    if ( v10 <= 0xFFFFFFFF )
    {
      v11 = NtCurrentPeb();
      if ( (unsigned int)v10 < 4 )
        v10 = 4LL;
      Heap = (__int64 *)RtlAllocateHeap(v11->ProcessHeap, 0, 8LL * (unsigned int)v10);
      if ( Heap )
      {
        if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
        {
          do
          {
            ++v9;
            LODWORD(v10) = (unsigned int)v10 >> 1;
          }
          while ( (_DWORD)v10 );
          v10 = (unsigned int)(1 << v9);
        }
        v13 = Heap;
        v14 = 0LL;
        if ( (unsigned int)v10 > 0x4000000 )
          v10 = 0x4000000LL;
        v15 = (8 * v10 + 7) >> 3;
        if ( Heap > &Heap[v10] )
          v15 = 0LL;
        if ( v15 )
        {
          do
          {
            ++v14;
            *v13++ = v4 | 1;
          }
          while ( v14 < v15 );
        }
        v16 = 0;
        v17 = -1LL << (*(_BYTE *)(v4 + 4) & 0x1F);
        if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v18 = *(_QWORD *)(v4 + 8);
            while ( 1 )
            {
              v19 = *(_QWORD **)(v18 + 8LL * v16);
              if ( ((unsigned __int8)v19 & 1) != 0 )
                break;
              *(_QWORD *)(v18 + 8LL * v16) = *v19;
              v22 = v17 & v19[1];
              v20 = (37
                   * (BYTE6(v22)
                    + 37
                    * (BYTE5(v22)
                     + 37
                     * (BYTE4(v22)
                      + 37
                      * (BYTE3(v22) + 37 * (BYTE2(v22) + 37 * (BYTE1(v22) + 37 * ((unsigned __int8)v22 + 11623883)))))))
                   + HIBYTE(v22)) & (unsigned int)(v10 - 1);
              *v19 = Heap[v20];
              Heap[v20] = (__int64)v19;
            }
            ++v16;
          }
          while ( v16 < *(_DWORD *)(v4 + 4) >> 5 );
        }
        *(_DWORD *)(v4 + 4) &= 0x1Fu;
        v21 = *(void **)(v4 + 8);
        *(_DWORD *)(v4 + 4) |= 32 * v10;
        *(_QWORD *)(v4 + 8) = Heap;
        if ( v21 )
          RmpFreeHeapForHashTable(v21);
      }
    }
  }
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *((_QWORD *)a1 + 127) & (-1LL << (v5 & 0x1F));
  v7 = *(_QWORD *)(v4 + 8);
  v8 = (37
      * (BYTE6(v6)
       + 37
       * (BYTE5(v6)
        + 37
        * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
      + HIBYTE(v6)) & ((v5 >> 5) - 1);
  *((_QWORD *)a1 + 126) = *(_QWORD *)(v7 + 8 * v8);
  *(_QWORD *)(v7 + 8 * v8) = (char *)a1 + 1008;
  ++*(_DWORD *)v4;
  RtlReleaseSRWLockExclusive(v3);
}
