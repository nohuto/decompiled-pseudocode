/*
 * XREFs of RmpCpuSetManagerAllocateState @ 0x18001D268
 * Callers:
 *     ?RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVICE_GLOBALS@@@Z @ 0x18001B17C (-RmpAllocateAllModuleState@@YAJPEAUIResourceEnforcer@@PEAVModernResourceEnforcer@@PEAU_RM_SERVIC.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x1800039E0 (RmpFreeHeapForHashTable.c)
 *     RmpCpuSetManagerResetValidMask @ 0x18001DA50 (RmpCpuSetManagerResetValidMask.c)
 */

__int64 __fastcall RmpCpuSetManagerAllocateState(__int64 a1)
{
  __int64 v1; // r13
  char v2; // si
  unsigned __int64 v3; // rbx
  __int64 *Heap; // r9
  __int64 *v5; // r8
  unsigned __int64 v6; // r10
  unsigned __int64 v7; // rcx
  unsigned int v8; // r8d
  __int64 v9; // r11
  void *v10; // rcx
  unsigned __int64 v11; // rbx
  __int64 *v12; // r9
  __int64 *v13; // r8
  unsigned __int64 v14; // r10
  unsigned __int64 v15; // rcx
  unsigned int v16; // r8d
  __int64 v17; // r11
  void *v18; // rcx
  unsigned __int64 v19; // rbx
  struct _PEB *v20; // rcx
  __int64 *v21; // r9
  __int64 *v22; // r8
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rcx
  unsigned int v25; // r8d
  __int64 v26; // r12
  void *v27; // rcx
  __int64 result; // rax
  char v29; // cl
  __int64 v30; // r15
  _QWORD *v31; // r10
  __int64 v32; // rdx
  char v33; // cl
  __int64 v34; // r15
  _QWORD *v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rsi
  _QWORD *v38; // r10
  __int64 v39; // rdx
  __int64 v40; // [rsp+60h] [rbp+40h]
  __int64 v41; // [rsp+68h] [rbp+48h]
  __int64 v42; // [rsp+70h] [rbp+50h]

  v1 = a1 + 1944;
  v2 = -1;
  if ( *(_DWORD *)(a1 + 1968) >= (unsigned int)(2 * (*(_DWORD *)(a1 + 1972) >> 5)) )
  {
    v3 = 2 * ((unsigned __int64)*(unsigned int *)(a1 + 1972) >> 5);
    if ( v3 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v3 < 4 )
        v3 = 4LL;
      Heap = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v3);
      if ( Heap )
      {
        if ( (((_DWORD)v3 - 1) & (unsigned int)v3) != 0 )
        {
          v29 = -1;
          do
          {
            ++v29;
            LODWORD(v3) = (unsigned int)v3 >> 1;
          }
          while ( (_DWORD)v3 );
          v3 = (unsigned int)(1 << v29);
        }
        v5 = Heap;
        v6 = 0LL;
        if ( (unsigned int)v3 > 0x4000000 )
          v3 = 0x4000000LL;
        v7 = (8 * v3 + 7) >> 3;
        if ( Heap > &Heap[v3] )
          v7 = 0LL;
        if ( v7 )
        {
          do
          {
            ++v6;
            *v5++ = (v1 + 24) | 1;
          }
          while ( v6 < v7 );
        }
        v8 = 0;
        v9 = -1LL << (*(_BYTE *)(v1 + 28) & 0x1F);
        if ( (*(_DWORD *)(v1 + 28) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v30 = *(_QWORD *)(v1 + 32);
            while ( 1 )
            {
              v31 = *(_QWORD **)(v30 + 8LL * v8);
              if ( ((unsigned __int8)v31 & 1) != 0 )
                break;
              *(_QWORD *)(v30 + 8LL * v8) = *v31;
              v40 = v9 & v31[1];
              v32 = (37
                   * (BYTE6(v40)
                    + 37
                    * (BYTE5(v40)
                     + 37
                     * (BYTE4(v40)
                      + 37
                      * (BYTE3(v40) + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
                   + HIBYTE(v40)) & (unsigned int)(v3 - 1);
              *v31 = Heap[v32];
              Heap[v32] = (__int64)v31;
            }
            ++v8;
          }
          while ( v8 < *(_DWORD *)(v1 + 28) >> 5 );
        }
        *(_DWORD *)(v1 + 28) &= 0x1Fu;
        v10 = *(void **)(v1 + 32);
        *(_DWORD *)(v1 + 28) |= 32 * v3;
        *(_QWORD *)(v1 + 32) = Heap;
        if ( v10 )
          RmpFreeHeapForHashTable(v10);
      }
      else if ( (*(_DWORD *)(v1 + 28) & 0xFFFFFFE0) == 0 )
      {
        return 3221225495LL;
      }
    }
  }
  if ( *(_DWORD *)(v1 + 40) >= (unsigned int)(2 * (*(_DWORD *)(v1 + 44) >> 5)) )
  {
    v11 = 2 * ((unsigned __int64)*(unsigned int *)(v1 + 44) >> 5);
    if ( v11 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v11 < 4 )
        v11 = 4LL;
      v12 = (__int64 *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 0, 8LL * (unsigned int)v11);
      if ( v12 )
      {
        if ( (((_DWORD)v11 - 1) & (unsigned int)v11) != 0 )
        {
          v33 = -1;
          do
          {
            ++v33;
            LODWORD(v11) = (unsigned int)v11 >> 1;
          }
          while ( (_DWORD)v11 );
          v11 = (unsigned int)(1 << v33);
        }
        v13 = v12;
        v14 = 0LL;
        if ( (unsigned int)v11 > 0x4000000 )
          v11 = 0x4000000LL;
        v15 = (8 * v11 + 7) >> 3;
        if ( v12 > &v12[v11] )
          v15 = 0LL;
        if ( v15 )
        {
          do
          {
            ++v14;
            *v13++ = (v1 + 40) | 1;
          }
          while ( v14 < v15 );
        }
        v16 = 0;
        v17 = -1LL << (*(_BYTE *)(v1 + 44) & 0x1F);
        if ( (*(_DWORD *)(v1 + 44) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v34 = *(_QWORD *)(v1 + 48);
            while ( 1 )
            {
              v35 = *(_QWORD **)(v34 + 8LL * v16);
              if ( ((unsigned __int8)v35 & 1) != 0 )
                break;
              *(_QWORD *)(v34 + 8LL * v16) = *v35;
              v41 = v17 & v35[1];
              v36 = (37
                   * (BYTE6(v41)
                    + 37
                    * (BYTE5(v41)
                     + 37
                     * (BYTE4(v41)
                      + 37
                      * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883)))))))
                   + HIBYTE(v41)) & (unsigned int)(v11 - 1);
              *v35 = v12[v36];
              v12[v36] = (__int64)v35;
            }
            ++v16;
          }
          while ( v16 < *(_DWORD *)(v1 + 44) >> 5 );
        }
        *(_DWORD *)(v1 + 44) &= 0x1Fu;
        v18 = *(void **)(v1 + 48);
        *(_DWORD *)(v1 + 44) |= 32 * v11;
        *(_QWORD *)(v1 + 48) = v12;
        if ( v18 )
          RmpFreeHeapForHashTable(v18);
      }
      else if ( (*(_DWORD *)(v1 + 44) & 0xFFFFFFE0) == 0 )
      {
        return 3221225495LL;
      }
    }
  }
  if ( *(_DWORD *)(v1 + 56) >= (unsigned int)(2 * (*(_DWORD *)(v1 + 60) >> 5)) )
  {
    v19 = 2 * ((unsigned __int64)*(unsigned int *)(v1 + 60) >> 5);
    if ( v19 <= 0xFFFFFFFF )
    {
      v20 = NtCurrentPeb();
      if ( (unsigned int)v19 < 4 )
        v19 = 4LL;
      v21 = (__int64 *)RtlAllocateHeap(v20->ProcessHeap, 0, 8LL * (unsigned int)v19);
      if ( v21 )
      {
        if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
        {
          do
          {
            ++v2;
            LODWORD(v19) = (unsigned int)v19 >> 1;
          }
          while ( (_DWORD)v19 );
          v19 = (unsigned int)(1 << v2);
        }
        v22 = v21;
        v23 = 0LL;
        if ( (unsigned int)v19 > 0x4000000 )
          v19 = 0x4000000LL;
        v24 = (8 * v19 + 7) >> 3;
        if ( v21 > &v21[v19] )
          v24 = 0LL;
        if ( v24 )
        {
          do
          {
            ++v23;
            *v22++ = (v1 + 56) | 1;
          }
          while ( v23 < v24 );
        }
        v25 = 0;
        v26 = -1LL << (*(_BYTE *)(v1 + 60) & 0x1F);
        if ( (*(_DWORD *)(v1 + 60) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v37 = *(_QWORD *)(v1 + 64);
            while ( 1 )
            {
              v38 = *(_QWORD **)(v37 + 8LL * v25);
              if ( ((unsigned __int8)v38 & 1) != 0 )
                break;
              *(_QWORD *)(v37 + 8LL * v25) = *v38;
              v42 = v26 & v38[1];
              v39 = (37
                   * (BYTE6(v42)
                    + 37
                    * (BYTE5(v42)
                     + 37
                     * (BYTE4(v42)
                      + 37
                      * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883)))))))
                   + HIBYTE(v42)) & (unsigned int)(v19 - 1);
              *v38 = v21[v39];
              v21[v39] = (__int64)v38;
            }
            ++v25;
          }
          while ( v25 < *(_DWORD *)(v1 + 60) >> 5 );
        }
        *(_DWORD *)(v1 + 60) &= 0x1Fu;
        v27 = *(void **)(v1 + 64);
        *(_DWORD *)(v1 + 60) |= 32 * v19;
        *(_QWORD *)(v1 + 64) = v21;
        if ( v27 )
          RmpFreeHeapForHashTable(v27);
        goto LABEL_46;
      }
      if ( (*(_DWORD *)(v1 + 60) & 0xFFFFFFE0) == 0 )
        return 3221225495LL;
    }
  }
LABEL_46:
  result = RmpCpuSetManagerResetValidMask((struct _RM_CPU_SET_MANAGER *)v1);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}
