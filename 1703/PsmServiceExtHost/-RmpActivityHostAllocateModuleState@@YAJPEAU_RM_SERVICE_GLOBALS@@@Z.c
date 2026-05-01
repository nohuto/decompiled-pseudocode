/*
 * XREFs of ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001EEEC
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001D37C (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x180018DD0 (RmpFreeHeapForHashTable.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18001F330 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 */

__int64 __fastcall RmpActivityHostAllocateModuleState(struct _RM_SERVICE_GLOBALS *a1)
{
  __int64 result; // rax
  char v3; // r15
  unsigned __int64 v4; // rsi
  char *Heap; // r8
  unsigned __int64 v6; // rcx
  unsigned int v7; // edi
  __int64 v8; // r10
  void *v9; // rcx
  unsigned __int64 v10; // rsi
  char *v11; // r8
  unsigned __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // r13
  void *v15; // rcx
  char v16; // cl
  __int64 v17; // r12
  _QWORD *v18; // r9
  __int64 v19; // rdx
  __int64 v20; // r11
  _QWORD *v21; // r9
  __int64 v22; // rdx
  __int64 v23; // [rsp+60h] [rbp+40h]
  __int64 v24; // [rsp+68h] [rbp+48h]

  result = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 16));
  if ( (int)result < 0 )
    return result;
  v3 = -1;
  if ( *((_DWORD *)a1 + 296) >= (unsigned int)(2 * (*((_DWORD *)a1 + 297) >> 5)) )
  {
    v4 = 2 * ((unsigned __int64)*((unsigned int *)a1 + 297) >> 5);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v4 < 4 )
        v4 = 4LL;
      Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v4);
      if ( Heap )
      {
        if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
        {
          v16 = -1;
          do
          {
            ++v16;
            LODWORD(v4) = (unsigned int)v4 >> 1;
          }
          while ( (_DWORD)v4 );
          v4 = (unsigned int)(1 << v16);
        }
        if ( (unsigned int)v4 > 0x4000000 )
          v4 = 0x4000000LL;
        v6 = (8 * v4 + 7) >> 3;
        if ( Heap > &Heap[8 * v4] )
          v6 = 0LL;
        if ( v6 )
          memset64(Heap, ((unsigned __int64)a1 + 1184) | 1, v6);
        v7 = 0;
        v8 = -1LL << (*((_BYTE *)a1 + 1188) & 0x1F);
        if ( (*((_DWORD *)a1 + 297) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v17 = *((_QWORD *)a1 + 149);
            while ( 1 )
            {
              v18 = *(_QWORD **)(v17 + 8LL * v7);
              if ( ((unsigned __int8)v18 & 1) != 0 )
                break;
              *(_QWORD *)(v17 + 8LL * v7) = *v18;
              v23 = v8 & v18[1];
              v19 = (37
                   * (BYTE6(v23)
                    + 37
                    * (BYTE5(v23)
                     + 37
                     * (BYTE4(v23)
                      + 37
                      * (BYTE3(v23) + 37 * (BYTE2(v23) + 37 * (BYTE1(v23) + 37 * ((unsigned __int8)v23 + 11623883)))))))
                   + HIBYTE(v23)) & (unsigned int)(v4 - 1);
              *v18 = *(_QWORD *)&Heap[8 * v19];
              *(_QWORD *)&Heap[8 * v19] = v18;
            }
            ++v7;
          }
          while ( v7 < *((_DWORD *)a1 + 297) >> 5 );
        }
        *((_DWORD *)a1 + 297) &= 0x1Fu;
        v9 = (void *)*((_QWORD *)a1 + 149);
        *((_DWORD *)a1 + 297) |= 32 * v4;
        *((_QWORD *)a1 + 149) = Heap;
        if ( v9 )
          RmpFreeHeapForHashTable(v9);
      }
      else if ( *((_DWORD *)a1 + 297) < 0x20u )
      {
        return 3221225495LL;
      }
    }
  }
  if ( *((_DWORD *)a1 + 300) >= (unsigned int)(2 * (*((_DWORD *)a1 + 301) >> 5)) )
  {
    v10 = 2 * ((unsigned __int64)*((unsigned int *)a1 + 301) >> 5);
    if ( v10 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v10 < 4 )
        v10 = 4LL;
      v11 = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v10);
      if ( v11 )
      {
        if ( (((_DWORD)v10 - 1) & (unsigned int)v10) != 0 )
        {
          do
          {
            ++v3;
            LODWORD(v10) = (unsigned int)v10 >> 1;
          }
          while ( (_DWORD)v10 );
          v10 = (unsigned int)(1 << v3);
        }
        if ( (unsigned int)v10 > 0x4000000 )
          v10 = 0x4000000LL;
        v12 = (8 * v10 + 7) >> 3;
        if ( v11 > &v11[8 * v10] )
          v12 = 0LL;
        if ( v12 )
          memset64(v11, ((unsigned __int64)a1 + 1200) | 1, v12);
        v13 = 0;
        v14 = -1LL << (*((_BYTE *)a1 + 1204) & 0x1F);
        if ( (*((_DWORD *)a1 + 301) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v20 = *((_QWORD *)a1 + 151);
            while ( 1 )
            {
              v21 = *(_QWORD **)(v20 + 8LL * v13);
              if ( ((unsigned __int8)v21 & 1) != 0 )
                break;
              *(_QWORD *)(v20 + 8LL * v13) = *v21;
              v24 = v14 & v21[1];
              v22 = (37
                   * (BYTE6(v24)
                    + 37
                    * (BYTE5(v24)
                     + 37
                     * (BYTE4(v24)
                      + 37
                      * (BYTE3(v24) + 37 * (BYTE2(v24) + 37 * (BYTE1(v24) + 37 * ((unsigned __int8)v24 + 11623883)))))))
                   + HIBYTE(v24)) & (unsigned int)(v10 - 1);
              *v21 = *(_QWORD *)&v11[8 * v22];
              *(_QWORD *)&v11[8 * v22] = v21;
            }
            ++v13;
          }
          while ( v13 < *((_DWORD *)a1 + 301) >> 5 );
        }
        *((_DWORD *)a1 + 301) &= 0x1Fu;
        v15 = (void *)*((_QWORD *)a1 + 151);
        *((_DWORD *)a1 + 301) |= 32 * v10;
        *((_QWORD *)a1 + 151) = v11;
        if ( v15 )
          RmpFreeHeapForHashTable(v15);
        goto LABEL_32;
      }
      if ( *((_DWORD *)a1 + 301) < 0x20u )
        return 3221225495LL;
    }
  }
LABEL_32:
  *((_QWORD *)a1 + 154) = 0LL;
  *((_DWORD *)a1 + 306) = 3;
  *((_QWORD *)a1 + 155) = 0LL;
  *((_QWORD *)a1 + 156) = 0LL;
  *((_QWORD *)a1 + 157) = 0LL;
  *((_DWORD *)a1 + 322) = 72;
  *((_QWORD *)a1 + 158) = 0LL;
  *((_QWORD *)a1 + 159) = 0LL;
  *((_DWORD *)a1 + 320) = 0;
  *((_DWORD *)a1 + 321) = 1;
  result = TpAllocCleanupGroup((char *)a1 + 1216);
  if ( (int)result >= 0 )
  {
    *((_QWORD *)a1 + 155) = *((_QWORD *)a1 + 152);
    *((_QWORD *)a1 + 156) = 0LL;
    result = TpAllocPool((char *)a1 + 1296, 0LL);
    if ( (int)result >= 0 )
    {
      result = TpAllocCleanupGroup((char *)a1 + 1304);
      if ( (int)result >= 0 )
      {
        *((_DWORD *)a1 + 328) = 3;
        *((_QWORD *)a1 + 165) = 0LL;
        *((_QWORD *)a1 + 166) = 0LL;
        *((_QWORD *)a1 + 167) = 0LL;
        *((_QWORD *)a1 + 168) = 0LL;
        *((_QWORD *)a1 + 169) = 0LL;
        *((_QWORD *)a1 + 170) = 0LL;
        *((_DWORD *)a1 + 342) = 0;
        *((_DWORD *)a1 + 343) = 1;
        *((_DWORD *)a1 + 344) = 72;
        *((_QWORD *)a1 + 165) = *((_QWORD *)a1 + 162);
        *((_QWORD *)a1 + 166) = *((_QWORD *)a1 + 163);
        result = 0LL;
        *((_QWORD *)a1 + 167) = 0LL;
      }
    }
  }
  return result;
}
