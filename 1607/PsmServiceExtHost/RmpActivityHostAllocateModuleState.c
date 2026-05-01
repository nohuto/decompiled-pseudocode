/*
 * XREFs of RmpActivityHostAllocateModuleState @ 0x18001DD50
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001B17C (-RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVIC.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x1800039E0 (RmpFreeHeapForHashTable.c)
 *     RmpObjectTableInitialize @ 0x18001E06C (RmpObjectTableInitialize.c)
 */

__int64 __fastcall RmpActivityHostAllocateModuleState(__int64 a1)
{
  __int64 result; // rax
  char v3; // r14
  unsigned __int64 v4; // rdi
  __int64 *Heap; // r9
  __int64 *v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rcx
  unsigned int v9; // r8d
  __int64 v10; // r11
  void *v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 *v13; // r9
  __int64 *v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // r13
  void *v19; // rcx
  char v20; // cl
  __int64 v21; // r12
  _QWORD *v22; // r10
  __int64 v23; // rdx
  __int64 v24; // r14
  _QWORD *v25; // r10
  __int64 v26; // rdx
  __int64 v27; // [rsp+60h] [rbp+40h]
  __int64 v28; // [rsp+68h] [rbp+48h]

  result = RmpObjectTableInitialize(a1 + 16);
  if ( (int)result < 0 )
    return result;
  v3 = -1;
  if ( *(_DWORD *)(a1 + 3000) >= (unsigned int)(2 * (*(_DWORD *)(a1 + 3004) >> 5)) )
  {
    v4 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 3004) >> 5);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v4 < 4 )
        v4 = 4LL;
      Heap = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v4);
      if ( Heap )
      {
        if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
        {
          v20 = -1;
          do
          {
            ++v20;
            LODWORD(v4) = (unsigned int)v4 >> 1;
          }
          while ( (_DWORD)v4 );
          v4 = (unsigned int)(1 << v20);
        }
        v6 = Heap;
        v7 = 0LL;
        if ( (unsigned int)v4 > 0x4000000 )
          v4 = 0x4000000LL;
        v8 = (8 * v4 + 7) >> 3;
        if ( Heap > &Heap[v4] )
          v8 = 0LL;
        if ( v8 )
        {
          do
          {
            ++v7;
            *v6++ = (a1 + 3000) | 1;
          }
          while ( v7 < v8 );
        }
        v9 = 0;
        v10 = -1LL << (*(_BYTE *)(a1 + 3004) & 0x1F);
        if ( (*(_DWORD *)(a1 + 3004) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v21 = *(_QWORD *)(a1 + 3008);
            while ( 1 )
            {
              v22 = *(_QWORD **)(v21 + 8LL * v9);
              if ( ((unsigned __int8)v22 & 1) != 0 )
                break;
              *(_QWORD *)(v21 + 8LL * v9) = *v22;
              v27 = v10 & v22[1];
              v23 = (37
                   * (BYTE6(v27)
                    + 37
                    * (BYTE5(v27)
                     + 37
                     * (BYTE4(v27)
                      + 37
                      * (BYTE3(v27) + 37 * (BYTE2(v27) + 37 * (BYTE1(v27) + 37 * ((unsigned __int8)v27 + 11623883)))))))
                   + HIBYTE(v27)) & (unsigned int)(v4 - 1);
              *v22 = Heap[v23];
              Heap[v23] = (__int64)v22;
            }
            ++v9;
          }
          while ( v9 < *(_DWORD *)(a1 + 3004) >> 5 );
        }
        *(_DWORD *)(a1 + 3004) &= 0x1Fu;
        v11 = *(void **)(a1 + 3008);
        *(_DWORD *)(a1 + 3004) |= 32 * v4;
        *(_QWORD *)(a1 + 3008) = Heap;
        if ( v11 )
          RmpFreeHeapForHashTable(v11);
      }
      else if ( (*(_DWORD *)(a1 + 3004) & 0xFFFFFFE0) == 0 )
      {
        return 3221225495LL;
      }
    }
  }
  if ( *(_DWORD *)(a1 + 3016) >= (unsigned int)(2 * (*(_DWORD *)(a1 + 3020) >> 5)) )
  {
    v12 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 3020) >> 5);
    if ( v12 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v12 < 4 )
        v12 = 4LL;
      v13 = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v12);
      if ( v13 )
      {
        if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
        {
          do
          {
            ++v3;
            LODWORD(v12) = (unsigned int)v12 >> 1;
          }
          while ( (_DWORD)v12 );
          v12 = (unsigned int)(1 << v3);
        }
        v14 = v13;
        v15 = 0LL;
        if ( (unsigned int)v12 > 0x4000000 )
          v12 = 0x4000000LL;
        v16 = (8 * v12 + 7) >> 3;
        if ( v13 > &v13[v12] )
          v16 = 0LL;
        if ( v16 )
        {
          do
          {
            ++v15;
            *v14++ = (a1 + 3016) | 1;
          }
          while ( v15 < v16 );
        }
        v17 = 0;
        v18 = -1LL << (*(_BYTE *)(a1 + 3020) & 0x1F);
        if ( (*(_DWORD *)(a1 + 3020) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v24 = *(_QWORD *)(a1 + 3024);
            while ( 1 )
            {
              v25 = *(_QWORD **)(v24 + 8LL * v17);
              if ( ((unsigned __int8)v25 & 1) != 0 )
                break;
              *(_QWORD *)(v24 + 8LL * v17) = *v25;
              v28 = v18 & v25[1];
              v26 = (37
                   * (BYTE6(v28)
                    + 37
                    * (BYTE5(v28)
                     + 37
                     * (BYTE4(v28)
                      + 37
                      * (BYTE3(v28) + 37 * (BYTE2(v28) + 37 * (BYTE1(v28) + 37 * ((unsigned __int8)v28 + 11623883)))))))
                   + HIBYTE(v28)) & (unsigned int)(v12 - 1);
              *v25 = v13[v26];
              v13[v26] = (__int64)v25;
            }
            ++v17;
          }
          while ( v17 < *(_DWORD *)(a1 + 3020) >> 5 );
        }
        *(_DWORD *)(a1 + 3020) &= 0x1Fu;
        v19 = *(void **)(a1 + 3024);
        *(_DWORD *)(a1 + 3020) |= 32 * v12;
        *(_QWORD *)(a1 + 3024) = v13;
        if ( v19 )
          RmpFreeHeapForHashTable(v19);
        goto LABEL_32;
      }
      if ( (*(_DWORD *)(a1 + 3020) & 0xFFFFFFE0) == 0 )
        return 3221225495LL;
    }
  }
LABEL_32:
  *(_QWORD *)(a1 + 3048) = 0LL;
  *(_DWORD *)(a1 + 3040) = 3;
  *(_QWORD *)(a1 + 3056) = 0LL;
  *(_QWORD *)(a1 + 3064) = 0LL;
  *(_QWORD *)(a1 + 3072) = 0LL;
  *(_DWORD *)(a1 + 3104) = 72;
  *(_QWORD *)(a1 + 3080) = 0LL;
  *(_QWORD *)(a1 + 3088) = 0LL;
  *(_DWORD *)(a1 + 3096) = 0;
  *(_DWORD *)(a1 + 3100) = 1;
  result = TpAllocCleanupGroup(a1 + 3032);
  if ( (int)result >= 0 )
  {
    *(_QWORD *)(a1 + 3056) = *(_QWORD *)(a1 + 3032);
    *(_QWORD *)(a1 + 3064) = 0LL;
    result = TpAllocPool(a1 + 3112, 0LL);
    if ( (int)result >= 0 )
    {
      result = TpAllocCleanupGroup(a1 + 3120);
      if ( (int)result >= 0 )
      {
        *(_DWORD *)(a1 + 3128) = 3;
        *(_QWORD *)(a1 + 3136) = 0LL;
        *(_QWORD *)(a1 + 3144) = 0LL;
        *(_QWORD *)(a1 + 3152) = 0LL;
        *(_QWORD *)(a1 + 3160) = 0LL;
        *(_QWORD *)(a1 + 3168) = 0LL;
        *(_QWORD *)(a1 + 3176) = 0LL;
        *(_DWORD *)(a1 + 3184) = 0;
        *(_DWORD *)(a1 + 3188) = 1;
        *(_DWORD *)(a1 + 3192) = 72;
        *(_QWORD *)(a1 + 3136) = *(_QWORD *)(a1 + 3112);
        *(_QWORD *)(a1 + 3144) = *(_QWORD *)(a1 + 3120);
        result = 0LL;
        *(_QWORD *)(a1 + 3152) = 0LL;
      }
    }
  }
  return result;
}
