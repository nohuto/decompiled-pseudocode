/*
 * XREFs of ?RmpCpuSetManagerInsertProcessRegistration@@YAXPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x180030A7C
 * Callers:
 *     ?RmpCpuSetManagerCreateAndInitializeProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU_RM_CPU_SET_PROCESS@@PEAU_RM_CPU_SET_ALLOCATION@@PEAPEAU_RM_CPU_SET_PROCESS_REGISTRATION@@@Z @ 0x18002FC30 (-RmpCpuSetManagerCreateAndInitializeProcessRegistration@@YAJPEAU_RM_CPU_SET_CLIENT_CONTEXT@@PEAU.c)
 * Callees:
 *     RmpFreeHeapForHashTable @ 0x1800039E0 (RmpFreeHeapForHashTable.c)
 */

void __fastcall RmpCpuSetManagerInsertProcessRegistration(
        struct _RM_CPU_SET_CLIENT_CONTEXT *a1,
        struct _RM_CPU_SET_PROCESS *a2,
        struct _RM_CPU_SET_ALLOCATION *a3,
        struct _RM_CPU_SET_PROCESS_REGISTRATION *a4)
{
  __int64 v4; // r13
  struct _RM_CPU_SET_PROCESS *v8; // rdx
  struct _RM_CPU_SET_PROCESS **v9; // rcx
  struct _RM_CPU_SET_ALLOCATION *v10; // rax
  struct _RM_CPU_SET_ALLOCATION **v11; // rdx
  char *v12; // rcx
  char *v13; // r9
  char **v14; // rax
  unsigned int v15; // r8d
  __int64 v16; // rcx
  __int64 v17; // rdx
  char v18; // r14
  unsigned __int64 v19; // rbx
  struct _PEB *v20; // rcx
  __int64 *Heap; // r8
  __int64 *v22; // r9
  unsigned __int64 v23; // r10
  unsigned __int64 v24; // rcx
  unsigned int v25; // r9d
  __int64 v26; // r15
  __int64 v27; // r14
  _QWORD *v28; // r10
  __int64 v29; // rdx
  void *v30; // rcx
  __int64 v31; // [rsp+50h] [rbp+30h]
  __int64 v32; // [rsp+58h] [rbp+38h]

  v4 = *(_QWORD *)a1;
  *((_QWORD *)a4 + 4) = a2;
  v8 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 64);
  *((_QWORD *)a4 + 5) = a3;
  v9 = (struct _RM_CPU_SET_PROCESS **)*((_QWORD *)a2 + 4);
  if ( *v9 != (struct _RM_CPU_SET_PROCESS *)((char *)a2 + 24) )
    __fastfail(3u);
  *(_QWORD *)v8 = (char *)a2 + 24;
  *((_QWORD *)a4 + 9) = v9;
  *v9 = v8;
  *((_QWORD *)a2 + 4) = v8;
  v10 = (struct _RM_CPU_SET_PROCESS_REGISTRATION *)((char *)a4 + 80);
  ++*((_DWORD *)a2 + 15);
  v11 = (struct _RM_CPU_SET_ALLOCATION **)*((_QWORD *)a3 + 12);
  if ( *v11 != (struct _RM_CPU_SET_ALLOCATION *)((char *)a3 + 88) )
    __fastfail(3u);
  *(_QWORD *)v10 = (char *)a3 + 88;
  *((_QWORD *)a4 + 11) = v11;
  *v11 = v10;
  *((_QWORD *)a3 + 12) = v10;
  v12 = (char *)a4 + 48;
  *((_QWORD *)a4 + 3) = a1;
  v13 = (char *)a1 + 40;
  v14 = (char **)*((_QWORD *)v13 + 1);
  if ( *v14 != v13 )
    __fastfail(3u);
  *((_QWORD *)a4 + 7) = v14;
  *(_QWORD *)v12 = v13;
  *v14 = v12;
  *((_QWORD *)v13 + 1) = v12;
  v15 = *(_DWORD *)(v4 + 60);
  v31 = *((_QWORD *)a4 + 2) & (-1LL << (v15 & 0x1F));
  v16 = *(_QWORD *)(v4 + 64);
  v17 = (37
       * (BYTE6(v31)
        + 37
        * (BYTE5(v31)
         + 37
         * (BYTE4(v31)
          + 37 * (BYTE3(v31) + 37 * (BYTE2(v31) + 37 * (BYTE1(v31) + 37 * ((unsigned __int8)v31 + 11623883)))))))
       + HIBYTE(v31)) & ((v15 >> 5) - 1);
  *((_QWORD *)a4 + 1) = *(_QWORD *)(v16 + 8 * v17);
  *(_QWORD *)(v16 + 8 * v17) = (char *)a4 + 8;
  ++*(_DWORD *)(v4 + 56);
  *((_BYTE *)a4 + 96) |= 1u;
  if ( *(_DWORD *)(v4 + 56) >= (unsigned int)(2 * (*(_DWORD *)(v4 + 60) >> 5)) )
  {
    v18 = -1;
    v19 = 2 * ((unsigned __int64)*(unsigned int *)(v4 + 60) >> 5);
    if ( v19 <= 0xFFFFFFFF )
    {
      v20 = NtCurrentPeb();
      if ( (unsigned int)v19 < 4 )
        v19 = 4LL;
      Heap = (__int64 *)RtlAllocateHeap(v20->ProcessHeap, 0, 8LL * (unsigned int)v19);
      if ( Heap )
      {
        if ( (((_DWORD)v19 - 1) & (unsigned int)v19) != 0 )
        {
          do
          {
            ++v18;
            LODWORD(v19) = (unsigned int)v19 >> 1;
          }
          while ( (_DWORD)v19 );
          v19 = (unsigned int)(1 << v18);
        }
        v22 = Heap;
        v23 = 0LL;
        if ( (unsigned int)v19 > 0x4000000 )
          v19 = 0x4000000LL;
        v24 = (8 * v19 + 7) >> 3;
        if ( Heap > &Heap[v19] )
          v24 = 0LL;
        if ( v24 )
        {
          do
          {
            ++v23;
            *v22++ = (v4 + 56) | 1;
          }
          while ( v23 < v24 );
        }
        v25 = 0;
        v26 = -1LL << (*(_BYTE *)(v4 + 60) & 0x1F);
        if ( (*(_DWORD *)(v4 + 60) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v27 = *(_QWORD *)(v4 + 64);
            while ( 1 )
            {
              v28 = *(_QWORD **)(v27 + 8LL * v25);
              if ( ((unsigned __int8)v28 & 1) != 0 )
                break;
              *(_QWORD *)(v27 + 8LL * v25) = *v28;
              v32 = v26 & v28[1];
              v29 = (37
                   * (BYTE6(v32)
                    + 37
                    * (BYTE5(v32)
                     + 37
                     * (BYTE4(v32)
                      + 37
                      * (BYTE3(v32) + 37 * (BYTE2(v32) + 37 * (BYTE1(v32) + 37 * ((unsigned __int8)v32 + 11623883)))))))
                   + HIBYTE(v32)) & (unsigned int)(v19 - 1);
              *v28 = Heap[v29];
              Heap[v29] = (__int64)v28;
            }
            ++v25;
          }
          while ( v25 < *(_DWORD *)(v4 + 60) >> 5 );
        }
        *(_DWORD *)(v4 + 60) &= 0x1Fu;
        v30 = *(void **)(v4 + 64);
        *(_DWORD *)(v4 + 60) |= 32 * v19;
        *(_QWORD *)(v4 + 64) = Heap;
        if ( v30 )
          RmpFreeHeapForHashTable(v30);
      }
    }
  }
  RmpCpuSetManagerMarkProcessDirty((struct _RM_CPU_SET_MANAGER *)v4, a2);
}
