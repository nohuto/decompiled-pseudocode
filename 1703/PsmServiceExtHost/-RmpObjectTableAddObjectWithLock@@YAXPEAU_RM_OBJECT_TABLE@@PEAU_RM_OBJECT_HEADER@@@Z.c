/*
 * XREFs of ?RmpObjectTableAddObjectWithLock@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180013110
 * Callers:
 *     ?ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PEAXPEAU_RM_ACTIVATOR@@PEAPEAV12@@Z @ 0x180012F20 (-ResourceSetFactory@ResourceSet@ExecutionModel@@CAJ_KPEAVBaseResourceSet@2@PEAU_RM_PARTITION@@PE.c)
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180015A38 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     ?RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z @ 0x180033988 (-RmpObjectTableAddObject@@YAXPEAU_RM_OBJECT_TABLE@@PEAU_RM_OBJECT_HEADER@@@Z.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x180018DD0 (RmpFreeHeapForHashTable.c)
 *     MIDL_user_allocate @ 0x180018DF0 (MIDL_user_allocate.c)
 */

void __fastcall RmpObjectTableAddObjectWithLock(unsigned __int64 a1, struct _RM_OBJECT_HEADER *a2)
{
  unsigned __int64 v3; // rcx
  unsigned int v5; // edi
  _QWORD *v6; // rcx
  char v7; // di
  unsigned __int64 v8; // rbp
  char *v9; // r10
  unsigned int v10; // r9d
  unsigned __int64 v11; // rcx
  __int64 v12; // r11
  _QWORD **v13; // r8
  _QWORD *v14; // rdi
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // [rsp+40h] [rbp+8h]
  __int64 v18; // [rsp+40h] [rbp+8h]

  v3 = *(unsigned int *)(a1 + 4);
  if ( *(_DWORD *)a1 >= 2 * ((unsigned int)v3 >> 5) )
  {
    v7 = -1;
    v8 = 2 * (v3 >> 5);
    if ( v8 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v8 < 4 )
        LODWORD(v8) = 4;
      v9 = (char *)MIDL_user_allocate(8LL * (unsigned int)v8);
      if ( v9 )
      {
        if ( (((_DWORD)v8 - 1) & (unsigned int)v8) != 0 )
        {
          do
          {
            ++v7;
            LODWORD(v8) = (unsigned int)v8 >> 1;
          }
          while ( (_DWORD)v8 );
          LODWORD(v8) = 1 << v7;
        }
        if ( (unsigned int)v8 > 0x4000000 )
          LODWORD(v8) = 0x4000000;
        v10 = 0;
        v11 = (8 * (unsigned __int64)(unsigned int)v8 + 7) >> 3;
        if ( v9 > &v9[8 * (unsigned int)v8] )
          v11 = 0LL;
        if ( v11 )
          memset64(v9, a1 | 1, v11);
        v12 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v13 = (_QWORD **)(*(_QWORD *)(a1 + 8) + 8LL * v10);
            while ( 1 )
            {
              v14 = *v13;
              if ( ((unsigned __int8)*v13 & 1) != 0 )
                break;
              *v13 = (_QWORD *)*v14;
              v18 = v12 & v14[1];
              v15 = (37
                   * (BYTE6(v18)
                    + 37
                    * (BYTE5(v18)
                     + 37
                     * (BYTE4(v18)
                      + 37
                      * (BYTE3(v18) + 37 * (BYTE2(v18) + 37 * (BYTE1(v18) + 37 * ((unsigned __int8)v18 + 11623883)))))))
                   + HIBYTE(v18)) & (unsigned int)(v8 - 1);
              *v14 = *(_QWORD *)&v9[8 * v15];
              *(_QWORD *)&v9[8 * v15] = v14;
            }
            ++v10;
          }
          while ( v10 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        *(_DWORD *)(a1 + 4) &= 0x1Fu;
        v16 = *(_QWORD *)(a1 + 8);
        *(_DWORD *)(a1 + 4) |= 32 * v8;
        *(_QWORD *)(a1 + 8) = v9;
        if ( v16 )
          RmpFreeHeapForHashTable(v16, 0LL);
      }
    }
  }
  v5 = *(_DWORD *)(a1 + 4);
  v17 = *((_QWORD *)a2 + 1) & (-1LL << (v5 & 0x1F));
  v6 = (_QWORD *)(*(_QWORD *)(a1 + 8)
                + 8LL
                * ((37
                  * (BYTE6(v17)
                   + 37
                   * (BYTE5(v17)
                    + 37
                    * (BYTE4(v17)
                     + 37
                     * (BYTE3(v17) + 37 * (BYTE2(v17) + 37 * (BYTE1(v17) + 37 * ((unsigned __int8)v17 + 11623883)))))))
                  + HIBYTE(v17)) & ((v5 >> 5) - 1)));
  *(_QWORD *)a2 = *v6;
  *v6 = a2;
  ++*(_DWORD *)a1;
}
