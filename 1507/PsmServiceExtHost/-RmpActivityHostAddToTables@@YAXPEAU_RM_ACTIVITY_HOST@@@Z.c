/*
 * XREFs of ?RmpActivityHostAddToTables@@YAXPEAU_RM_ACTIVITY_HOST@@@Z @ 0x1800087C0
 * Callers:
 *     RmpActivityHostCompleteInitialization @ 0x1800086F0 (RmpActivityHostCompleteInitialization.c)
 * Callees:
 *     ?RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@@Z @ 0x1800089B0 (-RmpActivityHostIdentifierHash@@YA_KPEAT_RM_ACTIVITY_HOST_IDENTIFIER@@W4_RM_ACTIVITY_HOST_TYPE@@.c)
 *     RmpAllocateHeap @ 0x180009DF8 (RmpAllocateHeap.c)
 *     RmpFreeHeapForHashTable @ 0x180039AC0 (RmpFreeHeapForHashTable.c)
 */

void __fastcall RmpActivityHostAddToTables(struct _RM_ACTIVITY_HOST *a1)
{
  __int64 v2; // rax
  char *v3; // rcx
  _BYTE *v4; // rsi
  unsigned int v5; // r14d
  char v6; // r15
  unsigned int v7; // r9d
  _QWORD *v8; // rcx
  unsigned __int64 v9; // rsi
  _DWORD *v10; // r10
  _QWORD *v11; // rbx
  unsigned int v12; // r9d
  __int64 v13; // rdi
  _QWORD *v14; // rcx
  unsigned __int64 v15; // r13
  unsigned __int64 Heap; // r9
  char v17; // cl
  unsigned __int64 *v18; // r8
  unsigned __int64 v19; // r10
  unsigned __int64 v20; // rcx
  __int64 v21; // r8
  unsigned int v22; // r10d
  _QWORD **v23; // r12
  _QWORD *v24; // r11
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // rcx
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r9
  __int64 v30; // r8
  unsigned __int64 v31; // r10
  unsigned __int64 v32; // rcx
  __int64 v33; // r11
  _QWORD **v34; // r15
  _QWORD *v35; // r10
  __int64 v36; // rdx
  __int64 v37; // rcx
  __int64 v38; // rcx
  __int64 v39; // [rsp+60h] [rbp+40h]
  unsigned int v40; // [rsp+60h] [rbp+40h]
  __int64 v41; // [rsp+60h] [rbp+40h]
  __int64 v42; // [rsp+68h] [rbp+48h]
  __int64 v43; // [rsp+70h] [rbp+50h]

  v2 = RmpActivityHostIdentifierHash((char *)a1 + 48, *((unsigned int *)a1 + 10));
  v3 = (char *)RmSvcGlobals + 40;
  *((_QWORD *)a1 + 104) = v2;
  RtlAcquireSRWLockExclusive(v3);
  v4 = RmSvcGlobals;
  v5 = 0;
  v6 = -1;
  if ( *((_DWORD *)RmSvcGlobals + 6) >= (unsigned int)(2 * (*((_DWORD *)RmSvcGlobals + 7) >> 5)) )
  {
    v15 = 2 * ((unsigned __int64)*((unsigned int *)RmSvcGlobals + 7) >> 5);
    if ( v15 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v15 < 4 )
        v15 = 4LL;
      Heap = RmpAllocateHeap(8LL * (unsigned int)v15);
      if ( Heap )
      {
        if ( (((_DWORD)v15 - 1) & (unsigned int)v15) != 0 )
        {
          v17 = -1;
          do
          {
            ++v17;
            LODWORD(v15) = (unsigned int)v15 >> 1;
          }
          while ( (_DWORD)v15 );
          v15 = (unsigned int)(1 << v17);
        }
        v18 = (unsigned __int64 *)Heap;
        v19 = 0LL;
        if ( (unsigned int)v15 > 0x4000000 )
          v15 = 0x4000000LL;
        v20 = (8 * v15 + 7) >> 3;
        if ( Heap > Heap + 8 * v15 )
          v20 = 0LL;
        if ( v20 )
        {
          do
          {
            ++v19;
            *v18++ = (unsigned __int64)(v4 + 24) | 1;
          }
          while ( v19 < v20 );
        }
        v40 = 0;
        v21 = -1LL << (v4[28] & 0x1F);
        v22 = 0;
        v43 = v21;
        if ( (*((_DWORD *)v4 + 7) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v23 = (_QWORD **)(*((_QWORD *)v4 + 4) + 8LL * v22);
            while ( 1 )
            {
              v24 = *v23;
              if ( ((unsigned __int8)*v23 & 1) != 0 )
                break;
              *v23 = (_QWORD *)*v24;
              v42 = v43 & v24[1];
              v25 = BYTE6(v42)
                  + 37
                  * (BYTE5(v42)
                   + 37
                   * (BYTE4(v42)
                    + 37
                    * (BYTE3(v42) + 37 * (BYTE2(v42) + 37 * (BYTE1(v42) + 37 * ((unsigned __int8)v42 + 11623883LL))))));
              v21 = 37 * v25;
              v26 = (37 * (_DWORD)v25 + HIBYTE(v42)) & (unsigned int)(v15 - 1);
              *v24 = *(_QWORD *)(Heap + 8 * v26);
              *(_QWORD *)(Heap + 8 * v26) = v24;
            }
            v22 = v40 + 1;
            v40 = v22;
          }
          while ( v22 < *((_DWORD *)v4 + 7) >> 5 );
        }
        *((_DWORD *)v4 + 7) &= 0x1Fu;
        v27 = *((_QWORD *)v4 + 4);
        *((_DWORD *)v4 + 7) |= 32 * v15;
        *((_QWORD *)v4 + 4) = Heap;
        if ( v27 )
          RmpFreeHeapForHashTable(v27, 0LL, v21);
      }
    }
  }
  v7 = *((_DWORD *)v4 + 7);
  v39 = *((_QWORD *)a1 + 1) & (-1LL << (v7 & 0x1F));
  v8 = (_QWORD *)(*((_QWORD *)v4 + 4)
                + 8LL
                * ((37
                  * (BYTE6(v39)
                   + 37
                   * (BYTE5(v39)
                    + 37
                    * (BYTE4(v39)
                     + 37
                     * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
                  + HIBYTE(v39)) & ((v7 >> 5) - 1)));
  *(_QWORD *)a1 = *v8;
  *v8 = a1;
  ++*((_DWORD *)v4 + 6);
  v9 = (unsigned __int64)RmSvcGlobals + 1824;
  if ( *((_DWORD *)RmSvcGlobals + 456) >= (unsigned int)(2 * (*((_DWORD *)RmSvcGlobals + 457) >> 5)) )
  {
    v28 = 2 * ((unsigned __int64)*((unsigned int *)RmSvcGlobals + 457) >> 5);
    if ( v28 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v28 < 4 )
        v28 = 4LL;
      v29 = RmpAllocateHeap(8LL * (unsigned int)v28);
      if ( v29 )
      {
        if ( (((_DWORD)v28 - 1) & (unsigned int)v28) != 0 )
        {
          do
          {
            ++v6;
            LODWORD(v28) = (unsigned int)v28 >> 1;
          }
          while ( (_DWORD)v28 );
          v28 = (unsigned int)(1 << v6);
        }
        v30 = v29;
        v31 = 0LL;
        if ( (unsigned int)v28 > 0x4000000 )
          v28 = 0x4000000LL;
        v32 = (8 * v28 + 7) >> 3;
        if ( v29 > v29 + 8 * v28 )
          v32 = 0LL;
        if ( v32 )
        {
          do
          {
            ++v31;
            *(_QWORD *)v30 = v9 | 1;
            v30 += 8LL;
          }
          while ( v31 < v32 );
        }
        v33 = -1LL << (*(_BYTE *)(v9 + 4) & 0x1F);
        if ( (*(_DWORD *)(v9 + 4) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v34 = (_QWORD **)(*(_QWORD *)(v9 + 8) + 8LL * v5);
            while ( 1 )
            {
              v35 = *v34;
              if ( ((unsigned __int8)*v34 & 1) != 0 )
                break;
              *v34 = (_QWORD *)*v35;
              v41 = v33 & v35[1];
              v36 = BYTE6(v41)
                  + 37
                  * (BYTE5(v41)
                   + 37
                   * (BYTE4(v41)
                    + 37
                    * (BYTE3(v41) + 37 * (BYTE2(v41) + 37 * (BYTE1(v41) + 37 * ((unsigned __int8)v41 + 11623883LL))))));
              v30 = 37 * v36;
              v37 = (37 * (_DWORD)v36 + HIBYTE(v41)) & (unsigned int)(v28 - 1);
              *v35 = *(_QWORD *)(v29 + 8 * v37);
              *(_QWORD *)(v29 + 8 * v37) = v35;
            }
            ++v5;
          }
          while ( v5 < *(_DWORD *)(v9 + 4) >> 5 );
        }
        *(_DWORD *)(v9 + 4) &= 0x1Fu;
        v38 = *(_QWORD *)(v9 + 8);
        *(_DWORD *)(v9 + 4) |= 32 * v28;
        *(_QWORD *)(v9 + 8) = v29;
        if ( v38 )
          RmpFreeHeapForHashTable(v38, 0LL, v30);
      }
    }
  }
  v10 = RmSvcGlobals;
  v11 = (_QWORD *)((char *)a1 + 824);
  v12 = *((_DWORD *)RmSvcGlobals + 457);
  v13 = v11[1] & (-1LL << (v12 & 0x1F));
  v14 = (_QWORD *)(*((_QWORD *)RmSvcGlobals + 229)
                 + 8LL
                 * ((37
                   * (BYTE6(v13)
                    + 37
                    * (BYTE5(v13)
                     + 37
                     * (BYTE4(v13)
                      + 37
                      * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
                   + HIBYTE(v13)) & ((v12 >> 5) - 1)));
  *v11 = *v14;
  *v14 = v11;
  ++v10[456];
  RtlReleaseSRWLockExclusive(v10 + 10);
}
