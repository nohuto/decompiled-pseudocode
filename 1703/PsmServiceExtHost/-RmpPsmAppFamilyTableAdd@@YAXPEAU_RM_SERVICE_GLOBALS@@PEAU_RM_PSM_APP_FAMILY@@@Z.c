/*
 * XREFs of ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_SERVICE_GLOBALS@@PEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180017934
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x1800165E4 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x180018DD0 (RmpFreeHeapForHashTable.c)
 */

void __fastcall RmpPsmAppFamilyTableAdd(struct _RM_SERVICE_GLOBALS *a1, struct _RM_PSM_APP_FAMILY *a2)
{
  unsigned __int64 v2; // rsi
  unsigned int v4; // edi
  __int64 v5; // rcx
  __int64 v6; // rdx
  char v7; // di
  unsigned __int64 v8; // rbx
  struct _PEB *v9; // rcx
  char *Heap; // r8
  unsigned __int64 v11; // rcx
  unsigned int v12; // edi
  __int64 v13; // r9
  __int64 v14; // r15
  _QWORD *v15; // r10
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // [rsp+60h] [rbp+40h]
  __int64 v19; // [rsp+68h] [rbp+48h]

  v2 = (unsigned __int64)a1 + 1200;
  if ( *((_DWORD *)a1 + 300) >= (unsigned int)(2 * (*((_DWORD *)a1 + 301) >> 5)) )
  {
    v7 = -1;
    v8 = 2 * ((unsigned __int64)*((unsigned int *)a1 + 301) >> 5);
    if ( v8 <= 0xFFFFFFFF )
    {
      v9 = NtCurrentPeb();
      if ( (unsigned int)v8 < 4 )
        v8 = 4LL;
      Heap = (char *)RtlAllocateHeap(v9->ProcessHeap, 0, 8LL * (unsigned int)v8);
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
        if ( (unsigned int)v8 > 0x4000000 )
          v8 = 0x4000000LL;
        v11 = (8 * v8 + 7) >> 3;
        if ( Heap > &Heap[8 * v8] )
          v11 = 0LL;
        if ( v11 )
          memset64(Heap, v2 | 1, v11);
        v12 = 0;
        v13 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
        if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v14 = *(_QWORD *)(v2 + 8);
            while ( 1 )
            {
              v15 = *(_QWORD **)(v14 + 8LL * v12);
              if ( ((unsigned __int8)v15 & 1) != 0 )
                break;
              *(_QWORD *)(v14 + 8LL * v12) = *v15;
              v18 = v13 & v15[1];
              v16 = (37
                   * (BYTE6(v18)
                    + 37
                    * (BYTE5(v18)
                     + 37
                     * (BYTE4(v18)
                      + 37
                      * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
                   + HIBYTE(v18)) & (unsigned int)(v8 - 1);
              *v15 = *(_QWORD *)&Heap[8 * v16];
              *(_QWORD *)&Heap[8 * v16] = v15;
            }
            ++v12;
          }
          while ( v12 < *(_DWORD *)(v2 + 4) >> 5 );
        }
        *(_DWORD *)(v2 + 4) &= 0x1Fu;
        v17 = *(_QWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 4) |= 32 * v8;
        *(_QWORD *)(v2 + 8) = Heap;
        if ( v17 )
          RmpFreeHeapForHashTable(v17, 0LL);
      }
    }
  }
  v4 = *(_DWORD *)(v2 + 4);
  v19 = *((_QWORD *)a2 + 1) & (-1LL << (v4 & 0x1F));
  v5 = *(_QWORD *)(v2 + 8);
  v6 = (37
      * (BYTE6(v19)
       + 37
       * (BYTE5(v19)
        + 37
        * (BYTE4(v19)
         + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
      + HIBYTE(v19)) & ((v4 >> 5) - 1);
  *(_QWORD *)a2 = *(_QWORD *)(v5 + 8 * v6);
  *(_QWORD *)(v5 + 8 * v6) = a2;
  ++*(_DWORD *)v2;
}
