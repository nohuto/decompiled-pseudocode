/*
 * XREFs of RmpActivityHostInitializeModule @ 0x180021654
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180020C08 (RmpInitializeGlobalModules.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 *     RmpObjectTableInitialize @ 0x1800219B8 (RmpObjectTableInitialize.c)
 *     RmpUninitializeGlobalModules @ 0x18003EC48 (RmpUninitializeGlobalModules.c)
 */

__int64 RmpActivityHostInitializeModule()
{
  _QWORD *v0; // rcx
  int v1; // ebx
  unsigned __int64 v2; // rdi
  char v3; // si
  unsigned __int64 v4; // rbx
  unsigned __int64 *Heap; // r9
  unsigned __int64 *v6; // r8
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rcx
  unsigned int v9; // r8d
  __int64 v10; // r11
  void *v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 *v14; // r9
  unsigned __int64 *v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  unsigned int v18; // r8d
  __int64 v19; // r12
  void *v20; // rcx
  _DWORD *v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rcx
  char v25; // cl
  __int64 v26; // r15
  _QWORD *v27; // r10
  __int64 v28; // rdx
  __int64 v29; // rsi
  _QWORD *v30; // r10
  __int64 v31; // rdx
  __int64 v32; // [rsp+50h] [rbp+30h]
  __int64 v33; // [rsp+50h] [rbp+30h]

  v0 = RmSvcGlobals;
  *((_QWORD *)RmSvcGlobals + 219) = 0LL;
  v0[220] = 0LL;
  v0[221] = 0LL;
  v0[222] = 0LL;
  v1 = RmpObjectTableInitialize(v0 + 3);
  if ( v1 < 0 )
    goto LABEL_47;
  v2 = (unsigned __int64)RmSvcGlobals + 1752;
  v3 = -1;
  if ( *((_DWORD *)RmSvcGlobals + 438) >= (unsigned int)(2 * (*((_DWORD *)RmSvcGlobals + 439) >> 5)) )
  {
    v4 = 2 * ((unsigned __int64)*((unsigned int *)RmSvcGlobals + 439) >> 5);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v4 < 4 )
        v4 = 4LL;
      Heap = (unsigned __int64 *)RmpAllocateHeap(8LL * (unsigned int)v4);
      if ( Heap )
      {
        if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
        {
          v25 = -1;
          do
          {
            ++v25;
            LODWORD(v4) = (unsigned int)v4 >> 1;
          }
          while ( (_DWORD)v4 );
          v4 = (unsigned int)(1 << v25);
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
            *v6++ = v2 | 1;
          }
          while ( v7 < v8 );
        }
        v9 = 0;
        v10 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
        if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v26 = *(_QWORD *)(v2 + 8);
            while ( 1 )
            {
              v27 = *(_QWORD **)(v26 + 8LL * v9);
              if ( ((unsigned __int8)v27 & 1) != 0 )
                break;
              *(_QWORD *)(v26 + 8LL * v9) = *v27;
              v32 = v10 & v27[1];
              v28 = (37
                   * (BYTE6(v32)
                    + 37
                    * (BYTE5(v32)
                     + 37
                     * (BYTE4(v32)
                      + 37
                      * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
                   + HIBYTE(v32)) & (unsigned int)(v4 - 1);
              *v27 = Heap[v28];
              Heap[v28] = (unsigned __int64)v27;
            }
            ++v9;
          }
          while ( v9 < *(_DWORD *)(v2 + 4) >> 5 );
        }
        *(_DWORD *)(v2 + 4) &= 0x1Fu;
        v11 = *(void **)(v2 + 8);
        *(_DWORD *)(v2 + 4) |= 32 * v4;
        *(_QWORD *)(v2 + 8) = Heap;
        if ( v11 )
          RmpFreeHeap(v11);
      }
      else if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) == 0 )
      {
        goto LABEL_46;
      }
    }
  }
  v12 = (unsigned __int64)RmSvcGlobals + 1768;
  if ( *((_DWORD *)RmSvcGlobals + 442) < (unsigned int)(2 * (*((_DWORD *)RmSvcGlobals + 443) >> 5)) )
    goto LABEL_32;
  v13 = 2 * ((unsigned __int64)*((unsigned int *)RmSvcGlobals + 443) >> 5);
  if ( v13 > 0xFFFFFFFF )
    goto LABEL_32;
  if ( (unsigned int)v13 < 4 )
    v13 = 4LL;
  v14 = (unsigned __int64 *)RmpAllocateHeap(8LL * (unsigned int)v13);
  if ( !v14 )
  {
    if ( (*(_DWORD *)(v12 + 4) & 0xFFFFFFE0) != 0 )
      goto LABEL_32;
LABEL_46:
    v1 = -1073741801;
LABEL_47:
    RmpUninitializeGlobalModules();
    return (unsigned int)v1;
  }
  if ( (((_DWORD)v13 - 1) & (unsigned int)v13) != 0 )
  {
    do
    {
      ++v3;
      LODWORD(v13) = (unsigned int)v13 >> 1;
    }
    while ( (_DWORD)v13 );
    v13 = (unsigned int)(1 << v3);
  }
  v15 = v14;
  v16 = 0LL;
  if ( (unsigned int)v13 > 0x4000000 )
    v13 = 0x4000000LL;
  v17 = (8 * v13 + 7) >> 3;
  if ( v14 > &v14[v13] )
    v17 = 0LL;
  if ( v17 )
  {
    do
    {
      ++v16;
      *v15++ = v12 | 1;
    }
    while ( v16 < v17 );
  }
  v18 = 0;
  v19 = -1LL << (*(_BYTE *)(v12 + 4) & 0x1F);
  if ( (*(_DWORD *)(v12 + 4) & 0xFFFFFFE0) != 0 )
  {
    do
    {
      v29 = *(_QWORD *)(v12 + 8);
      while ( 1 )
      {
        v30 = *(_QWORD **)(v29 + 8LL * v18);
        if ( ((unsigned __int8)v30 & 1) != 0 )
          break;
        *(_QWORD *)(v29 + 8LL * v18) = *v30;
        v33 = v19 & v30[1];
        v31 = (37
             * (BYTE6(v33)
              + 37
              * (BYTE5(v33)
               + 37
               * (BYTE4(v33)
                + 37 * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
             + HIBYTE(v33)) & (unsigned int)(v13 - 1);
        *v30 = v14[v31];
        v14[v31] = (unsigned __int64)v30;
      }
      ++v18;
    }
    while ( v18 < *(_DWORD *)(v12 + 4) >> 5 );
  }
  *(_DWORD *)(v12 + 4) &= 0x1Fu;
  v20 = *(void **)(v12 + 8);
  *(_DWORD *)(v12 + 4) |= 32 * v13;
  *(_QWORD *)(v12 + 8) = v14;
  if ( v20 )
    RmpFreeHeap(v20);
LABEL_32:
  v21 = RmSvcGlobals;
  *((_DWORD *)RmSvcGlobals + 448) = 3;
  v21[464] = 72;
  *((_QWORD *)v21 + 225) = 0LL;
  *((_QWORD *)v21 + 226) = 0LL;
  *((_QWORD *)v21 + 227) = 0LL;
  *((_QWORD *)v21 + 228) = 0LL;
  *((_QWORD *)v21 + 229) = 0LL;
  *((_QWORD *)v21 + 230) = 0LL;
  v21[462] = 0;
  v21[463] = 1;
  v1 = TpAllocCleanupGroup(v21 + 446);
  if ( v1 < 0 )
    goto LABEL_47;
  v22 = RmSvcGlobals;
  *((_QWORD *)RmSvcGlobals + 226) = *((_QWORD *)RmSvcGlobals + 223);
  v22[227] = 0LL;
  v1 = TpAllocPool(v22 + 233, 0LL);
  if ( v1 < 0 )
    goto LABEL_47;
  v1 = TpAllocCleanupGroup((char *)RmSvcGlobals + 1872);
  if ( v1 < 0 )
    goto LABEL_47;
  v23 = RmSvcGlobals;
  v1 = 0;
  *((_DWORD *)RmSvcGlobals + 470) = 3;
  v23[236] = 0LL;
  v23[237] = 0LL;
  v23[238] = 0LL;
  v23[239] = 0LL;
  v23[240] = 0LL;
  v23[241] = 0LL;
  *((_DWORD *)v23 + 484) = 0;
  *((_DWORD *)v23 + 485) = 1;
  *((_DWORD *)v23 + 486) = 72;
  v23[236] = v23[233];
  v23[237] = v23[234];
  v23[238] = 0LL;
  return (unsigned int)v1;
}
