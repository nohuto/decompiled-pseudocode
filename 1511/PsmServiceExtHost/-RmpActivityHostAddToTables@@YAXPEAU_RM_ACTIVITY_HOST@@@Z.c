/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180007E60
 * Callers:
 *     RmpActivityHostCompleteInitialization @ 0x180007D98 (RmpActivityHostCompleteInitialization.c)
 * Callees:
 *     RmpAllocateHeap @ 0x180007C10 (RmpAllocateHeap.c)
 *     ??R?$hash@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_KAEBU_RM_PSM_APP_INSTANCE_ID@@@Z @ 0x180008140 (--R-$hash@U_RM_PSM_APP_INSTANCE_ID@@@utl@@QEBA_KAEBU_RM_PSM_APP_INSTANCE_ID@@@Z.c)
 *     RmpObjectTableAddObjectWithLock @ 0x18000822C (RmpObjectTableAddObjectWithLock.c)
 *     RmpFreeHeap @ 0x18001BBC0 (RmpFreeHeap.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  unsigned __int8 *v1; // r8
  __int64 v3; // rdx
  char *v4; // rcx
  _DWORD *v5; // r10
  unsigned __int64 v6; // rdi
  unsigned int v7; // r8d
  __int64 v8; // r12
  __int64 v9; // rcx
  __int64 v10; // rdx
  char v11; // si
  unsigned __int64 v12; // rbx
  unsigned __int64 *Heap; // r9
  unsigned __int64 *v14; // r8
  unsigned __int64 v15; // r10
  unsigned __int64 v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // r10
  __int64 v19; // r15
  _QWORD *v20; // r11
  __int64 v21; // rdx
  void *v22; // rcx
  __int64 v23; // r9
  __int64 v24; // rax
  __int64 v25; // [rsp+50h] [rbp+30h]

  v1 = (unsigned __int8 *)a1 + 48;
  if ( *((_DWORD *)a1 + 10) )
  {
    v3 = 314159LL;
    v23 = 69LL;
    do
    {
      v24 = *v1;
      v1 += 8;
      v3 = *(v1 - 1)
         + 37
         * (*(v1 - 2)
          + 37
          * (*(v1 - 3) + 37
                       * (*(v1 - 4) + 37 * (*(v1 - 5) + 37 * (*(v1 - 6) + 37 * (*(v1 - 7) + 37 * (v24 + 37 * v3)))))));
      --v23;
    }
    while ( v23 );
  }
  else
  {
    v3 = utl::hash<_RM_PSM_APP_INSTANCE_ID>::operator()(a1, (char *)a1 + 48);
  }
  v4 = (char *)RmSvcGlobals + 40;
  *((_QWORD *)a1 + 108) = v3;
  RtlAcquireSRWLockExclusive(v4);
  RmpObjectTableAddObjectWithLock((char *)RmSvcGlobals + 24, a1);
  v5 = RmSvcGlobals;
  v6 = (unsigned __int64)RmSvcGlobals + 1752;
  if ( *((_DWORD *)RmSvcGlobals + 438) >= (unsigned int)(2 * (*((_DWORD *)RmSvcGlobals + 439) >> 5)) )
  {
    v11 = -1;
    v12 = 2 * ((unsigned __int64)*((unsigned int *)RmSvcGlobals + 439) >> 5);
    if ( v12 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v12 < 4 )
        v12 = 4LL;
      Heap = (unsigned __int64 *)RmpAllocateHeap(8LL * (unsigned int)v12);
      if ( Heap )
      {
        if ( (((_DWORD)v12 - 1) & (unsigned int)v12) != 0 )
        {
          do
          {
            ++v11;
            LODWORD(v12) = (unsigned int)v12 >> 1;
          }
          while ( (_DWORD)v12 );
          v12 = (unsigned int)(1 << v11);
        }
        v14 = Heap;
        v15 = 0LL;
        if ( (unsigned int)v12 > 0x4000000 )
          v12 = 0x4000000LL;
        v16 = (8 * v12 + 7) >> 3;
        if ( Heap > &Heap[v12] )
          v16 = 0LL;
        if ( v16 )
        {
          do
          {
            ++v15;
            *v14++ = v6 | 1;
          }
          while ( v15 < v16 );
        }
        v17 = 0;
        v18 = -1LL << (*(_BYTE *)(v6 + 4) & 0x1F);
        if ( (*(_DWORD *)(v6 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v19 = *(_QWORD *)(v6 + 8);
            while ( 1 )
            {
              v20 = *(_QWORD **)(v19 + 8LL * v17);
              if ( ((unsigned __int8)v20 & 1) != 0 )
                break;
              *(_QWORD *)(v19 + 8LL * v17) = *v20;
              v25 = v18 & v20[1];
              v21 = (37
                   * (BYTE6(v25)
                    + 37
                    * (BYTE5(v25)
                     + 37
                     * (BYTE4(v25)
                      + 37
                      * (BYTE3(v25) + 37 * (BYTE2(v25) + 37 * (BYTE1(v25) + 37 * ((unsigned __int8)v25 + 11623883)))))))
                   + HIBYTE(v25)) & (unsigned int)(v12 - 1);
              *v20 = Heap[v21];
              Heap[v21] = (unsigned __int64)v20;
            }
            ++v17;
          }
          while ( v17 < *(_DWORD *)(v6 + 4) >> 5 );
        }
        *(_DWORD *)(v6 + 4) &= 0x1Fu;
        v22 = *(void **)(v6 + 8);
        *(_DWORD *)(v6 + 4) |= 32 * v12;
        *(_QWORD *)(v6 + 8) = Heap;
        if ( v22 )
          RmpFreeHeap(v22);
      }
      v5 = RmSvcGlobals;
    }
  }
  v7 = v5[439];
  v8 = *((_QWORD *)a1 + 108) & (-1LL << (v7 & 0x1F));
  v9 = *((_QWORD *)v5 + 220);
  v10 = (37
       * (BYTE6(v8)
        + 37
        * (BYTE5(v8)
         + 37
         * (BYTE4(v8) + 37 * (BYTE3(v8) + 37 * (BYTE2(v8) + 37 * (BYTE1(v8) + 37 * ((unsigned __int8)v8 + 11623883)))))))
       + HIBYTE(v8)) & ((v7 >> 5) - 1);
  *((_QWORD *)a1 + 107) = *(_QWORD *)(v9 + 8 * v10);
  *(_QWORD *)(v9 + 8 * v10) = (char *)a1 + 856;
  ++v5[438];
  RtlReleaseSRWLockExclusive(v5 + 10);
}
