/*
 * XREFs of RmpActivityHostInitializeModule @ 0x18001A2B0
 * Callers:
 *     RmpInitializeGlobalModules @ 0x180019718 (RmpInitializeGlobalModules.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpObjectTableInitialize @ 0x18001A190 (RmpObjectTableInitialize.c)
 *     RmpUninitializeGlobalModules @ 0x18003996C (RmpUninitializeGlobalModules.c)
 *     RmpFreeHeapForHashTable @ 0x180039AC0 (RmpFreeHeapForHashTable.c)
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
  __int64 v9; // r8
  __int64 v10; // r11
  __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rbx
  unsigned __int64 *v14; // r9
  unsigned __int64 *v15; // r8
  unsigned __int64 v16; // r10
  unsigned __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r12
  __int64 v20; // rcx
  _QWORD *v21; // rcx
  _QWORD *v22; // rcx
  char v24; // cl
  __int64 v25; // r15
  _QWORD *v26; // r10
  __int64 v27; // rdx
  __int64 v28; // rsi
  _QWORD *v29; // r10
  __int64 v30; // rdx
  __int64 v31; // [rsp+50h] [rbp+30h]
  __int64 v32; // [rsp+50h] [rbp+30h]

  v0 = RmSvcGlobals;
  *((_QWORD *)RmSvcGlobals + 228) = 0LL;
  v0[229] = 0LL;
  v0[230] = 0LL;
  v0[231] = 0LL;
  v1 = RmpObjectTableInitialize((__int64)(v0 + 3));
  if ( v1 < 0 )
    goto LABEL_35;
  v2 = (unsigned __int64)RmSvcGlobals + 1824;
  v3 = -1;
  if ( *((_DWORD *)RmSvcGlobals + 456) >= (unsigned int)(2 * (*((_DWORD *)RmSvcGlobals + 457) >> 5)) )
  {
    v4 = 2 * ((unsigned __int64)*((unsigned int *)RmSvcGlobals + 457) >> 5);
    if ( v4 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v4 < 4 )
        v4 = 4LL;
      Heap = (unsigned __int64 *)RmpAllocateHeap(8LL * (unsigned int)v4);
      if ( Heap )
      {
        if ( (((_DWORD)v4 - 1) & (unsigned int)v4) != 0 )
        {
          v24 = -1;
          do
          {
            ++v24;
            LODWORD(v4) = (unsigned int)v4 >> 1;
          }
          while ( (_DWORD)v4 );
          v4 = (unsigned int)(1 << v24);
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
        v9 = 0LL;
        v10 = -1LL << (*(_BYTE *)(v2 + 4) & 0x1F);
        if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v25 = *(_QWORD *)(v2 + 8);
            while ( 1 )
            {
              v26 = *(_QWORD **)(v25 + 8LL * (unsigned int)v9);
              if ( ((unsigned __int8)v26 & 1) != 0 )
                break;
              *(_QWORD *)(v25 + 8LL * (unsigned int)v9) = *v26;
              v31 = v10 & v26[1];
              v27 = (37
                   * (BYTE6(v31)
                    + 37
                    * (BYTE5(v31)
                     + 37
                     * (BYTE4(v31)
                      + 37
                      * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
                   + HIBYTE(v31)) & (unsigned int)(v4 - 1);
              *v26 = Heap[v27];
              Heap[v27] = (unsigned __int64)v26;
            }
            v9 = (unsigned int)(v9 + 1);
          }
          while ( (unsigned int)v9 < *(_DWORD *)(v2 + 4) >> 5 );
        }
        *(_DWORD *)(v2 + 4) &= 0x1Fu;
        v11 = *(_QWORD *)(v2 + 8);
        *(_DWORD *)(v2 + 4) |= 32 * v4;
        *(_QWORD *)(v2 + 8) = Heap;
        if ( v11 )
          RmpFreeHeapForHashTable(v11, 0LL, v9);
      }
      else if ( (*(_DWORD *)(v2 + 4) & 0xFFFFFFE0) == 0 )
      {
        goto LABEL_45;
      }
    }
  }
  v12 = (unsigned __int64)RmSvcGlobals + 1840;
  if ( *((_DWORD *)RmSvcGlobals + 460) < (unsigned int)(2 * (*((_DWORD *)RmSvcGlobals + 461) >> 5)) )
    goto LABEL_32;
  v13 = 2 * ((unsigned __int64)*((unsigned int *)RmSvcGlobals + 461) >> 5);
  if ( v13 > 0xFFFFFFFF )
    goto LABEL_32;
  if ( (unsigned int)v13 < 4 )
    v13 = 4LL;
  v14 = (unsigned __int64 *)RmpAllocateHeap(8LL * (unsigned int)v13);
  if ( !v14 )
  {
    if ( (*(_DWORD *)(v12 + 4) & 0xFFFFFFE0) != 0 )
      goto LABEL_32;
LABEL_45:
    v1 = -1073741801;
    goto LABEL_35;
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
  v18 = 0LL;
  v19 = -1LL << (*(_BYTE *)(v12 + 4) & 0x1F);
  if ( (*(_DWORD *)(v12 + 4) & 0xFFFFFFE0) != 0 )
  {
    do
    {
      v28 = *(_QWORD *)(v12 + 8);
      while ( 1 )
      {
        v29 = *(_QWORD **)(v28 + 8LL * (unsigned int)v18);
        if ( ((unsigned __int8)v29 & 1) != 0 )
          break;
        *(_QWORD *)(v28 + 8LL * (unsigned int)v18) = *v29;
        v32 = v19 & v29[1];
        v30 = (37
             * (BYTE6(v32)
              + 37
              * (BYTE5(v32)
               + 37
               * (BYTE4(v32)
                + 37 * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
             + HIBYTE(v32)) & (unsigned int)(v13 - 1);
        *v29 = v14[v30];
        v14[v30] = (unsigned __int64)v29;
      }
      v18 = (unsigned int)(v18 + 1);
    }
    while ( (unsigned int)v18 < *(_DWORD *)(v12 + 4) >> 5 );
  }
  *(_DWORD *)(v12 + 4) &= 0x1Fu;
  v20 = *(_QWORD *)(v12 + 8);
  *(_DWORD *)(v12 + 4) |= 32 * v13;
  *(_QWORD *)(v12 + 8) = v14;
  if ( v20 )
    RmpFreeHeapForHashTable(v20, 0LL, v18);
LABEL_32:
  v21 = RmSvcGlobals;
  *((_DWORD *)RmSvcGlobals + 466) = 3;
  v21[234] = 0LL;
  v21[235] = 0LL;
  v21[236] = 0LL;
  v21[237] = 0LL;
  v21[238] = 0LL;
  v21[239] = 0LL;
  *((_DWORD *)v21 + 480) = 0;
  *((_DWORD *)v21 + 481) = 1;
  *((_DWORD *)v21 + 482) = 72;
  v1 = TpAllocCleanupGroup(v21 + 232);
  if ( v1 < 0 )
  {
LABEL_35:
    RmpUninitializeGlobalModules();
    return (unsigned int)v1;
  }
  v22 = RmSvcGlobals;
  v1 = 0;
  *((_QWORD *)RmSvcGlobals + 235) = *((_QWORD *)RmSvcGlobals + 232);
  v22[236] = 0LL;
  return (unsigned int)v1;
}
