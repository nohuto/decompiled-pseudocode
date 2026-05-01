/*
 * XREFs of ?RmpCpuSetManagerAllocateState@@YAJPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001F1F4
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001D37C (-RmpAllocateAllModuleState@@YAJPEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x180018DD0 (RmpFreeHeapForHashTable.c)
 *     ?RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z @ 0x18001F330 (-RmpObjectTableAllocateState@@YAJPEAU_RM_OBJECT_TABLE@@@Z.c)
 *     ?RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z @ 0x18001F43C (-RmpCpuSetManagerResetValidMask@@YAJPEAU_RM_CPU_SET_MANAGER@@@Z.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateState(struct _RM_SERVICE_GLOBALS *a1)
{
  char *v1; // rbp
  __int64 result; // rax
  char v3; // di
  unsigned __int64 v4; // rbx
  struct _PEB *v5; // rcx
  char *Heap; // r8
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  __int64 v9; // r9
  void *v10; // rcx
  __int64 v11; // r14
  _QWORD *v12; // r10
  __int64 v13; // rdx
  __int64 v14; // [rsp+40h] [rbp+8h]

  v1 = (char *)a1 + 648;
  result = RmpObjectTableAllocateState((struct _RM_SERVICE_GLOBALS *)((char *)a1 + 672));
  if ( (int)result >= 0 )
  {
    result = RmpObjectTableAllocateState((struct _RM_OBJECT_TABLE *)(v1 + 48));
    if ( (int)result >= 0 )
    {
      if ( *((_DWORD *)v1 + 18) >= (unsigned int)(2 * (*((_DWORD *)v1 + 19) >> 5)) )
      {
        v3 = -1;
        v4 = 2 * ((unsigned __int64)*((unsigned int *)v1 + 19) >> 5);
        if ( v4 <= 0xFFFFFFFF )
        {
          v5 = NtCurrentPeb();
          if ( (unsigned int)v4 < 4 )
            v4 = 4LL;
          Heap = (char *)RtlAllocateHeap(v5->ProcessHeap, 0, 8LL * (unsigned int)v4);
          if ( Heap )
          {
            if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
            {
              do
              {
                ++v3;
                LODWORD(v4) = (unsigned int)v4 >> 1;
              }
              while ( (_DWORD)v4 );
              v4 = (unsigned int)(1 << v3);
            }
            if ( (unsigned int)v4 > 0x4000000 )
              v4 = 0x4000000LL;
            v7 = (8 * v4 + 7) >> 3;
            if ( Heap > &Heap[8 * v4] )
              v7 = 0LL;
            if ( v7 )
              memset64(Heap, (unsigned __int64)(v1 + 72) | 1, v7);
            v8 = 0;
            v9 = -1LL << (v1[76] & 0x1F);
            if ( (*((_DWORD *)v1 + 19) & 0xFFFFFFE0) != 0 )
            {
              do
              {
                v11 = *((_QWORD *)v1 + 10);
                while ( 1 )
                {
                  v12 = *(_QWORD **)(v11 + 8LL * v8);
                  if ( ((unsigned __int8)v12 & 1) != 0 )
                    break;
                  *(_QWORD *)(v11 + 8LL * v8) = *v12;
                  v14 = v9 & v12[1];
                  v13 = (37
                       * (BYTE6(v14)
                        + 37
                        * (BYTE5(v14)
                         + 37
                         * (BYTE4(v14)
                          + 37
                          * (BYTE3(v14) + 37 * (BYTE2(v14) + 37 * (BYTE1(v14) + 37 * ((unsigned __int8)v14 + 11623883)))))))
                       + HIBYTE(v14)) & (unsigned int)(v4 - 1);
                  *v12 = *(_QWORD *)&Heap[8 * v13];
                  *(_QWORD *)&Heap[8 * v13] = v12;
                }
                ++v8;
              }
              while ( v8 < *((_DWORD *)v1 + 19) >> 5 );
            }
            *((_DWORD *)v1 + 19) &= 0x1Fu;
            v10 = (void *)*((_QWORD *)v1 + 10);
            *((_DWORD *)v1 + 19) |= 32 * v4;
            *((_QWORD *)v1 + 10) = Heap;
            if ( v10 )
              RmpFreeHeapForHashTable(v10);
          }
          else if ( *((_DWORD *)v1 + 19) < 0x20u )
          {
            return 3221225495LL;
          }
        }
      }
      result = RmpCpuSetManagerResetValidMask((struct _RM_CPU_SET_MANAGER *)v1);
      if ( (int)result >= 0 )
        return 0LL;
    }
  }
  return result;
}
