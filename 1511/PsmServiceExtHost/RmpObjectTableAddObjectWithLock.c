/*
 * XREFs of RmpObjectTableAddObjectWithLock @ 0x18000822C
 * Callers:
 *     ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007E60 (-RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 */

__int64 __fastcall RmpObjectTableAddObjectWithLock(__int64 a1, _QWORD *a2)
{
  unsigned int v4; // r8d
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 result; // rax
  char v8; // si
  unsigned __int64 v9; // rbx
  __int64 *Heap; // r9
  __int64 *v11; // r8
  unsigned __int64 v12; // r10
  unsigned __int64 v13; // rcx
  unsigned int v14; // r8d
  __int64 v15; // r10
  __int64 v16; // r15
  _QWORD *v17; // r11
  __int64 v18; // rdx
  void *v19; // rcx
  __int64 v20; // [rsp+50h] [rbp+30h]
  __int64 v21; // [rsp+50h] [rbp+30h]

  if ( *(_DWORD *)a1 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
  {
    v8 = -1;
    v9 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
    if ( v9 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v9 < 4 )
        v9 = 4LL;
      Heap = (__int64 *)RmpAllocateHeap(8LL * (unsigned int)v9);
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
        v11 = Heap;
        v12 = 0LL;
        if ( (unsigned int)v9 > 0x4000000 )
          v9 = 0x4000000LL;
        v13 = (8 * v9 + 7) >> 3;
        if ( Heap > &Heap[v9] )
          v13 = 0LL;
        if ( v13 )
        {
          do
          {
            ++v12;
            *v11++ = a1 | 1;
          }
          while ( v12 < v13 );
        }
        v14 = 0;
        v15 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v16 = *(_QWORD *)(a1 + 8);
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
                   + HIBYTE(v21)) & (unsigned int)(v9 - 1);
              *v17 = Heap[v18];
              Heap[v18] = (__int64)v17;
            }
            ++v14;
          }
          while ( v14 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        *(_DWORD *)(a1 + 4) &= 0x1Fu;
        v19 = *(void **)(a1 + 8);
        *(_DWORD *)(a1 + 4) |= 32 * v9;
        *(_QWORD *)(a1 + 8) = Heap;
        if ( v19 )
          RmpFreeHeap(v19);
      }
    }
  }
  v4 = *(_DWORD *)(a1 + 4);
  v20 = a2[1] & (-1LL << (v4 & 0x1F));
  v5 = *(_QWORD *)(a1 + 8);
  v6 = (37
      * (BYTE6(v20)
       + 37
       * (BYTE5(v20)
        + 37
        * (BYTE4(v20)
         + 37 * (BYTE3(v20) + 37 * (BYTE2(v20) + 37 * (BYTE1(v20) + 37 * ((unsigned __int8)v20 + 11623883)))))))
      + HIBYTE(v20)) & ((v4 >> 5) - 1);
  result = *(_QWORD *)(v5 + 8 * v6);
  *a2 = result;
  *(_QWORD *)(v5 + 8 * v6) = a2;
  ++*(_DWORD *)a1;
  return result;
}
