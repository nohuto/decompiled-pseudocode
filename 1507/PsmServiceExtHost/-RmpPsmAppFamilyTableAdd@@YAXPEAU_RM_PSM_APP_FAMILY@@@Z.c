/*
 * XREFs of ?RmpPsmAppFamilyTableAdd@@YAXPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180006AE0
 * Callers:
 *     ?RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FAMILY@@@Z @ 0x180008B70 (-RmpPsmAppFamilyTableFindOrCreateByActivityHost@@YAJPEAU_RM_ACTIVITY_HOST@@PEAPEAU_RM_PSM_APP_FA.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeapForHashTable @ 0x180039AC0 (RmpFreeHeapForHashTable.c)
 */

void __fastcall RmpPsmAppFamilyTableAdd(struct _RM_PSM_APP_FAMILY *a1)
{
  unsigned __int64 v1; // rdi
  _DWORD *v3; // r9
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdx
  char v7; // si
  unsigned __int64 v8; // rbx
  unsigned __int64 Heap; // r9
  unsigned __int64 *v10; // r8
  unsigned __int64 v11; // r10
  unsigned __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r10
  __int64 v15; // r15
  _QWORD *v16; // r11
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // [rsp+50h] [rbp+30h]
  __int64 v20; // [rsp+50h] [rbp+30h]

  v1 = (unsigned __int64)RmSvcGlobals + 1840;
  if ( *((_DWORD *)RmSvcGlobals + 460) >= (unsigned int)(2 * (*((_DWORD *)RmSvcGlobals + 461) >> 5)) )
  {
    v7 = -1;
    v8 = 2 * ((unsigned __int64)*((unsigned int *)RmSvcGlobals + 461) >> 5);
    if ( v8 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v8 < 4 )
        v8 = 4LL;
      Heap = RmpAllocateHeap(8LL * (unsigned int)v8);
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
        v10 = (unsigned __int64 *)Heap;
        v11 = 0LL;
        if ( (unsigned int)v8 > 0x4000000 )
          v8 = 0x4000000LL;
        v12 = (8 * v8 + 7) >> 3;
        if ( Heap > Heap + 8 * v8 )
          v12 = 0LL;
        if ( v12 )
        {
          do
          {
            ++v11;
            *v10++ = v1 | 1;
          }
          while ( v11 < v12 );
        }
        v13 = 0LL;
        v14 = -1LL << (*(_BYTE *)(v1 + 4) & 0x1F);
        if ( (*(_DWORD *)(v1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v15 = *(_QWORD *)(v1 + 8);
            while ( 1 )
            {
              v16 = *(_QWORD **)(v15 + 8LL * (unsigned int)v13);
              if ( ((unsigned __int8)v16 & 1) != 0 )
                break;
              *(_QWORD *)(v15 + 8LL * (unsigned int)v13) = *v16;
              v20 = v14 & v16[1];
              v17 = (37
                   * (BYTE6(v20)
                    + 37
                    * (BYTE5(v20)
                     + 37
                     * (BYTE4(v20)
                      + 37
                      * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
                   + HIBYTE(v20)) & (unsigned int)(v8 - 1);
              *v16 = *(_QWORD *)(Heap + 8 * v17);
              *(_QWORD *)(Heap + 8 * v17) = v16;
            }
            v13 = (unsigned int)(v13 + 1);
          }
          while ( (unsigned int)v13 < *(_DWORD *)(v1 + 4) >> 5 );
        }
        *(_DWORD *)(v1 + 4) &= 0x1Fu;
        v18 = *(_QWORD *)(v1 + 8);
        *(_DWORD *)(v1 + 4) |= 32 * v8;
        *(_QWORD *)(v1 + 8) = Heap;
        if ( v18 )
          RmpFreeHeapForHashTable(v18, 0LL, v13);
      }
    }
  }
  v3 = RmSvcGlobals;
  v4 = *((_DWORD *)RmSvcGlobals + 461);
  v19 = *((_QWORD *)a1 + 1) & (-1LL << (v4 & 0x1F));
  v5 = *((_QWORD *)RmSvcGlobals + 231);
  v6 = (37
      * (BYTE6(v19)
       + 37
       * (BYTE5(v19)
        + 37
        * (BYTE4(v19)
         + 37 * (BYTE3(v19) + 37 * (BYTE2(v19) + 37 * (BYTE1(v19) + 37 * ((unsigned __int8)v19 + 11623883)))))))
      + HIBYTE(v19)) & ((v4 >> 5) - 1);
  *(_QWORD *)a1 = *(_QWORD *)(v5 + 8 * v6);
  *(_QWORD *)(v5 + 8 * v6) = a1;
  ++v3[460];
}
