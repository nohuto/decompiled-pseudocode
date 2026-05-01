/*
 * XREFs of ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18001F330
 * Callers:
 *     ?RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001EEEC (-RmpActivityHostAllocateModuleState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001F1F4 (-RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x180018DD0 (RmpFreeHeapForHashTable.c)
 */

__int64 __fastcall RmpObjectTableAllocateState(unsigned __int64 a1)
{
  char v2; // di
  unsigned __int64 v3; // rbx
  struct _PEB *v4; // rcx
  char *Heap; // rax
  char v6; // r8
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r10
  void *v10; // rcx
  __int64 v12; // r14
  _QWORD *v13; // r11
  __int64 v14; // rdx
  __int64 v15; // [rsp+40h] [rbp+8h]

  if ( *(_DWORD *)a1 >= (unsigned int)(2 * (*(_DWORD *)(a1 + 4) >> 5)) )
  {
    v2 = -1;
    v3 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 4) >> 5);
    if ( v3 <= 0xFFFFFFFF )
    {
      v4 = NtCurrentPeb();
      if ( (unsigned int)v3 < 4 )
        v3 = 4LL;
      Heap = (char *)RtlAllocateHeap(v4->ProcessHeap, 0, 8LL * (unsigned int)v3);
      v6 = 0;
      if ( Heap )
      {
        if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
        {
          do
          {
            ++v2;
            LODWORD(v3) = (unsigned int)v3 >> 1;
          }
          while ( (_DWORD)v3 );
          v3 = (unsigned int)(1 << v2);
        }
        if ( (unsigned int)v3 > 0x4000000 )
          v3 = 0x4000000LL;
        v7 = (8 * v3 + 7) >> 3;
        if ( Heap > &Heap[8 * v3] )
          v7 = 0LL;
        if ( v7 )
          memset64(Heap, a1 | 1, v7);
        v8 = 0;
        v9 = -1LL << (*(_BYTE *)(a1 + 4) & 0x1F);
        if ( (*(_DWORD *)(a1 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v12 = *(_QWORD *)(a1 + 8);
            while ( 1 )
            {
              v13 = *(_QWORD **)(v12 + 8LL * v8);
              if ( ((unsigned __int8)v13 & 1) != 0 )
                break;
              *(_QWORD *)(v12 + 8LL * v8) = *v13;
              v15 = v9 & v13[1];
              v14 = (37
                   * (BYTE6(v15)
                    + 37
                    * (BYTE5(v15)
                     + 37
                     * (BYTE4(v15)
                      + 37
                      * (BYTE3(v15) + 37 * (BYTE2(v15) + 37 * (BYTE1(v15) + 37 * ((unsigned __int8)v15 + 11623883)))))))
                   + HIBYTE(v15)) & (unsigned int)(v3 - 1);
              *v13 = *(_QWORD *)&Heap[8 * v14];
              *(_QWORD *)&Heap[8 * v14] = v13;
            }
            ++v8;
          }
          while ( v8 < *(_DWORD *)(a1 + 4) >> 5 );
        }
        *(_DWORD *)(a1 + 4) &= 0x1Fu;
        v10 = *(void **)(a1 + 8);
        *(_DWORD *)(a1 + 4) |= 32 * v3;
        *(_QWORD *)(a1 + 8) = Heap;
        if ( v10 )
          RmpFreeHeapForHashTable(v10);
      }
      else if ( *(_DWORD *)(a1 + 4) < 0x20u )
      {
        return v6 == 0 ? 0xC0000017 : 0;
      }
    }
  }
  v6 = 1;
  return v6 == 0 ? 0xC0000017 : 0;
}
