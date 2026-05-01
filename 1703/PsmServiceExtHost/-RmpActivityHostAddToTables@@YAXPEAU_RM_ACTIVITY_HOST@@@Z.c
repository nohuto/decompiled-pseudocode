/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015A38
 * Callers:
 *     ?RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800162F4 (-RmpActivityHostCompleteInitialization@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180013110 (-RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@@Z @ 0x180015CC0 (-RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@.c)
 *     RmpFreeHeapForHashTable @ 0x180018DD0 (RmpFreeHeapForHashTable.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v1; // rdi
  __int64 v3; // r13
  __int64 v4; // rsi
  unsigned int v5; // edi
  __int64 v6; // r12
  __int64 v7; // rdx
  __int64 v8; // rdi
  char v9; // di
  unsigned __int64 v10; // rbx
  struct _PEB *v11; // rcx
  char *Heap; // r8
  unsigned __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r9
  __int64 v16; // r15
  _QWORD *v17; // r10
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // [rsp+60h] [rbp+40h]

  v1 = *((_QWORD *)a1 + 5);
  v3 = v1 + 32;
  *((_QWORD *)a1 + 132) = RmpActivityHostIdentifierHash((char *)a1 + 64, *((unsigned int *)a1 + 14));
  RtlAcquireSRWLockExclusive(v1 + 32);
  RmpObjectTableAddObjectWithLock(v1 + 16, a1);
  v4 = v1 + 1184;
  if ( *(_DWORD *)(v1 + 1184) >= (unsigned int)(2 * (*(_DWORD *)(v1 + 1188) >> 5)) )
  {
    v9 = -1;
    v10 = 2 * ((unsigned __int64)*(unsigned int *)(v4 + 4) >> 5);
    if ( v10 <= 0xFFFFFFFF )
    {
      v11 = NtCurrentPeb();
      if ( (unsigned int)v10 < 4 )
        v10 = 4LL;
      Heap = (char *)RtlAllocateHeap(v11->ProcessHeap, 0, 8LL * (unsigned int)v10);
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
        if ( (unsigned int)v10 > 0x4000000 )
          v10 = 0x4000000LL;
        v13 = (8 * v10 + 7) >> 3;
        if ( Heap > &Heap[8 * v10] )
          v13 = 0LL;
        if ( v13 )
          memset64(Heap, v4 | 1, v13);
        v14 = 0;
        v15 = -1LL << (*(_BYTE *)(v4 + 4) & 0x1F);
        if ( (*(_DWORD *)(v4 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v16 = *(_QWORD *)(v4 + 8);
            while ( 1 )
            {
              v17 = *(_QWORD **)(v16 + 8LL * v14);
              if ( ((unsigned __int8)v17 & 1) != 0 )
                break;
              *(_QWORD *)(v16 + 8LL * v14) = *v17;
              v20 = v15 & v17[1];
              v18 = (37
                   * (BYTE6(v20)
                    + 37
                    * (BYTE5(v20)
                     + 37
                     * (BYTE4(v20)
                      + 37
                      * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
                   + HIBYTE(v20)) & (unsigned int)(v10 - 1);
              *v17 = *(_QWORD *)&Heap[8 * v18];
              *(_QWORD *)&Heap[8 * v18] = v17;
            }
            ++v14;
          }
          while ( v14 < *(_DWORD *)(v4 + 4) >> 5 );
        }
        *(_DWORD *)(v4 + 4) &= 0x1Fu;
        v19 = *(_QWORD *)(v4 + 8);
        *(_DWORD *)(v4 + 4) |= 32 * v10;
        *(_QWORD *)(v4 + 8) = Heap;
        if ( v19 )
          RmpFreeHeapForHashTable(v19, 0LL);
      }
    }
  }
  v5 = *(_DWORD *)(v4 + 4);
  v6 = *((_QWORD *)a1 + 132) & (-1LL << (v5 & 0x1F));
  v7 = *(_QWORD *)(v4 + 8);
  v8 = (37
      * (BYTE6(v6)
       + 37
       * (BYTE5(v6)
        + 37
        * (BYTE4(v6) + 37 * (BYTE3(v6) + 37 * (BYTE2(v6) + 37 * (BYTE1(v6) + 37 * ((unsigned __int8)v6 + 11623883)))))))
      + HIBYTE(v6)) & ((v5 >> 5) - 1);
  *((_QWORD *)a1 + 131) = *(_QWORD *)(v7 + 8 * v8);
  *(_QWORD *)(v7 + 8 * v8) = (char *)a1 + 1048;
  ++*(_DWORD *)v4;
  RtlReleaseSRWLockExclusive(v3);
}
