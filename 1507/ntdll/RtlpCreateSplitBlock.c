/*
 * XREFs of RtlpCreateSplitBlock @ 0x1800069E8
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x180006558 (RtlpGrowBlockInPlace.c)
 *     RtlpReAllocateHeap @ 0x18002DC40 (RtlpReAllocateHeap.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x180006DF4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x180006EA0 (RtlpFindEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180006F18 (RtlpHeapRemoveListEntry.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180029B50 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180095F60 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpCreateSplitBlock(__int64 a1, __int64 a2, __int64 a3, char a4, char a5, __int16 a6, __int64 a7)
{
  int v9; // r12d
  __int64 v10; // rdi
  __int64 v11; // rdi
  __int64 *v12; // r15
  __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rdx
  unsigned __int64 k; // rax
  __int64 *v19; // rax
  _QWORD *v20; // rdi
  _QWORD *Entry; // r8
  __int64 *v22; // rax
  _QWORD *v23; // rdi
  __int64 *v24; // rdx
  unsigned __int64 v25; // rcx
  unsigned __int64 i; // rax
  int v27; // r8d
  int v28; // ecx
  unsigned __int64 v29; // rbp
  _QWORD *v30; // rdi
  _QWORD *v31; // r8
  int v32; // ecx
  int v33; // eax
  unsigned __int16 v34; // ax
  __int64 *v35; // rax
  unsigned __int64 m; // rax
  __int64 *v37; // rax
  int v39; // ecx
  int v40; // eax
  unsigned __int16 v41; // ax
  __int64 *v42; // rax
  __int64 v43; // r9
  char v44; // al
  unsigned __int64 v45; // r14
  __int64 v46; // r12
  _DWORD *v47; // r8
  unsigned __int64 v48; // rdx
  _QWORD *v49; // rdi
  _QWORD *v50; // r8
  int v51; // ecx
  int v52; // eax
  unsigned __int16 v53; // ax
  __int64 *v54; // rax
  unsigned __int64 n; // rax
  __int64 v56; // rax
  _DWORD *v57; // r8
  unsigned __int64 v58; // rdx
  _QWORD *v59; // rdi
  _QWORD *v60; // r8
  int v61; // ecx
  int v62; // eax
  unsigned __int16 v63; // ax
  __int64 *v64; // rax
  _QWORD *v65; // rdi
  __int64 *v66; // rdx
  unsigned __int64 j; // rax
  __int64 *v68; // rax
  int v69; // r8d
  int v70; // [rsp+20h] [rbp-38h]
  int v71; // [rsp+20h] [rbp-38h]
  int v72; // [rsp+38h] [rbp-20h]
  int v73; // [rsp+38h] [rbp-20h]
  int v74; // [rsp+38h] [rbp-20h]
  int v75; // [rsp+38h] [rbp-20h]

  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  v9 = 0;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  if ( *(_QWORD *)(a2 + 40) == a2 )
  {
    LOBYTE(v10) = 0;
  }
  else
  {
    v10 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( (unsigned __int64)(a3 - a2) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, *(_QWORD *)(a2 + 40), a3, a2, 0LL, 0LL);
  }
  *(_BYTE *)(a3 + 14) = v10;
  v11 = a3 + 16 * a7;
  *(_BYTE *)(a3 + 11) = 0;
  *(_WORD *)(a3 + 8) = a7;
  while ( 1 )
  {
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v11 + 12) = *(_WORD *)(a1 + 140) ^ a7;
      *(_BYTE *)(a3 + 15) = 0;
      if ( !a5 )
      {
        *(_BYTE *)(a3 + 10) = 0;
        v20 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          Entry = (_QWORD *)*v20;
        if ( v20 != Entry )
        {
          v39 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v39 )
            {
              v40 = *((_DWORD *)Entry - 2);
              v39 = *(_DWORD *)(a1 + 124);
              LOWORD(v73) = v40;
              if ( (v39 & v40) != 0 )
                v73 = *(_DWORD *)(a1 + 136) ^ v40;
              v41 = v73;
            }
            else
            {
              v41 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v41 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v20 != Entry );
        }
        v22 = (__int64 *)Entry[1];
        v23 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v22 == Entry )
        {
          *v23 = Entry;
          *(_QWORD *)(a3 + 24) = v22;
          *v22 = (__int64)v23;
          Entry[1] = v23;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v22, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v24 = *(__int64 **)(a1 + 312);
        if ( v24 )
        {
          v25 = *(unsigned __int16 *)(a3 + 8);
          for ( i = *((unsigned int *)v24 + 2); v25 >= i; i = *((unsigned int *)v42 + 2) )
          {
            v42 = (__int64 *)*v24;
            if ( !*v24 )
            {
LABEL_47:
              v27 = *((_DWORD *)v24 + 2) - 1;
              goto LABEL_48;
            }
            v24 = (__int64 *)*v24;
          }
LABEL_24:
          v27 = v25;
LABEL_48:
          v70 = v27;
          LOBYTE(v27) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v24, v27, (_DWORD)v23, v70, v25);
        }
LABEL_49:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        return 1;
      }
      *(_BYTE *)(a3 + 10) &= 0xF0u;
      if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
      {
LABEL_128:
        v59 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v60 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          v60 = (_QWORD *)*v59;
        if ( v59 != v60 )
        {
          v61 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v61 )
            {
              v62 = *((_DWORD *)v60 - 2);
              v61 = *(_DWORD *)(a1 + 124);
              LOWORD(v75) = v62;
              if ( (v62 & v61) != 0 )
                v75 = *(_DWORD *)(a1 + 136) ^ v62;
              v63 = v75;
            }
            else
            {
              v63 = *((_WORD *)v60 - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v63 )
              break;
            v60 = (_QWORD *)*v60;
          }
          while ( v59 != v60 );
        }
        v64 = (__int64 *)v60[1];
        v65 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v64 == v60 )
        {
          *v65 = v60;
          *(_QWORD *)(a3 + 24) = v64;
          *v64 = (__int64)v65;
          v60[1] = v65;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v60, 0, *v64, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v66 = *(__int64 **)(a1 + 312);
        if ( v66 )
        {
          for ( j = *((unsigned int *)v66 + 2); ; j = *((unsigned int *)v68 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < j )
            {
              v69 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_150;
            }
            v68 = (__int64 *)*v66;
            if ( !*v66 )
              break;
            v66 = (__int64 *)*v66;
          }
          v69 = *((_DWORD *)v66 + 2) - 1;
LABEL_150:
          v71 = v69;
          LOBYTE(v69) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v66, v69, a3 + 16, v71, *(unsigned __int16 *)(a3 + 8));
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        return 1;
      }
      v57 = (_DWORD *)(a3 + 32);
      v58 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
      if ( v58 )
      {
        if ( ((unsigned __int8)v57 & 4) == 0 )
          goto LABEL_125;
        *v57 = -17891602;
        if ( --v58 )
        {
          v57 = (_DWORD *)(a3 + 36);
LABEL_125:
          memset64(v57, 0xFEEEFEEEFEEEFEEEuLL, v58 >> 1);
          if ( (v58 & 1) != 0 )
            v57[v58 - 1] = -17891602;
        }
      }
      *(_BYTE *)(a3 + 10) |= 4u;
      goto LABEL_128;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
        RtlpAnalyzeHeapFailure(a1, a3 + 16 * a7);
    }
    v12 = *(__int64 **)(v11 + 24);
    v13 = v11 + 16;
    v14 = *(_QWORD *)(v11 + 16);
    v15 = *v12;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *v12 == v16 && v15 == v13 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v11 + 8);
      v17 = *(__int64 **)(a1 + 312);
      if ( v17 )
      {
        for ( k = *((unsigned int *)v17 + 2); ; k = *((unsigned int *)v19 + 2) )
        {
          if ( *(unsigned __int16 *)(v11 + 8) < k )
          {
            v28 = *(unsigned __int16 *)(v11 + 8);
            goto LABEL_26;
          }
          v19 = (__int64 *)*v17;
          if ( !*v17 )
            break;
          v17 = (__int64 *)*v17;
        }
        v28 = *((_DWORD *)v17 + 2) - 1;
LABEL_26:
        LOBYTE(v13) = 1;
        RtlpHeapRemoveListEntry(a1, (_DWORD)v17, v13, v11 + 16, v28, *(unsigned __int16 *)(v11 + 8));
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, a3 + 16 * a7) )
      {
        if ( a5 )
        {
          v44 = *(_BYTE *)(v11 + 10);
          if ( (v44 & 4) != 0 )
          {
            v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v44 & 2) != 0 && v45 > 4 )
              v45 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v46 = RtlCompareMemoryUlong(v11 + 32, v45, 4277075694LL);
            if ( v46 != v45 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v46 + v11 + 32));
              RtlpBreakPointHeap(a3 + 16 * a7);
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v29 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v29 <= 0xFF00 )
        {
          *(_WORD *)(a3 + 8) = v29;
          *(_WORD *)(16 * v29 + a3 + 12) = *(_WORD *)(a1 + 140) ^ v29;
          *(_BYTE *)(a3 + 15) = 0;
          if ( !a5 )
          {
            *(_BYTE *)(a3 + 10) = 0;
            v30 = (_QWORD *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              v31 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v29);
            else
              v31 = (_QWORD *)*v30;
            if ( v30 != v31 )
            {
              v32 = *(_DWORD *)(a1 + 124);
              do
              {
                if ( v32 )
                {
                  v33 = *((_DWORD *)v31 - 2);
                  v32 = *(_DWORD *)(a1 + 124);
                  LOWORD(v72) = v33;
                  if ( (v33 & v32) != 0 )
                    v72 = *(_DWORD *)(a1 + 136) ^ v33;
                  v34 = v72;
                }
                else
                {
                  v34 = *((_WORD *)v31 - 4);
                }
                if ( (unsigned __int16)v29 <= (unsigned __int64)v34 )
                  break;
                v31 = (_QWORD *)*v31;
              }
              while ( v30 != v31 );
            }
            v35 = (__int64 *)v31[1];
            v23 = (_QWORD *)(a3 + 16);
            if ( (_QWORD *)*v35 == v31 )
            {
              *v23 = v31;
              *(_QWORD *)(a3 + 24) = v35;
              *v35 = (__int64)v23;
              v31[1] = v23;
            }
            else
            {
              RtlpLogHeapFailure(12, 0, (_DWORD)v31, 0, *v35, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
            v24 = *(__int64 **)(a1 + 312);
            if ( v24 )
            {
              v25 = *(unsigned __int16 *)(a3 + 8);
              for ( m = *((unsigned int *)v24 + 2); v25 >= m; m = *((unsigned int *)v37 + 2) )
              {
                v37 = (__int64 *)*v24;
                if ( !*v24 )
                  goto LABEL_47;
                v24 = (__int64 *)*v24;
              }
              goto LABEL_24;
            }
            goto LABEL_49;
          }
          *(_BYTE *)(a3 + 10) &= 0xF0u;
          if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
          {
            v47 = (_DWORD *)(a3 + 32);
            v48 = (16 * (unsigned __int64)(unsigned __int16)v29 - 32) >> 2;
            if ( v48 )
            {
              if ( ((unsigned __int8)v47 & 4) != 0 )
              {
                *v47 = -17891602;
                if ( --v48 )
                {
                  v47 = (_DWORD *)(a3 + 36);
                  goto LABEL_90;
                }
              }
              else
              {
LABEL_90:
                memset64(v47, 0xFEEEFEEEFEEEFEEEuLL, v48 >> 1);
                if ( (v48 & 1) != 0 )
                  v47[v48 - 1] = -17891602;
              }
            }
            *(_BYTE *)(a3 + 10) |= 4u;
          }
          v49 = (_QWORD *)(a1 + 336);
          if ( *(_QWORD *)(a1 + 312) )
            v50 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v29);
          else
            v50 = (_QWORD *)*v49;
          if ( v49 != v50 )
          {
            v51 = *(_DWORD *)(a1 + 124);
            do
            {
              if ( v51 )
              {
                v52 = *((_DWORD *)v50 - 2);
                v51 = *(_DWORD *)(a1 + 124);
                LOWORD(v74) = v52;
                if ( (v52 & v51) != 0 )
                  v74 = *(_DWORD *)(a1 + 136) ^ v52;
                v53 = v74;
              }
              else
              {
                v53 = *((_WORD *)v50 - 4);
              }
              if ( (unsigned __int16)v29 <= (unsigned __int64)v53 )
                break;
              v50 = (_QWORD *)*v50;
            }
            while ( v49 != v50 );
          }
          v54 = (__int64 *)v50[1];
          v23 = (_QWORD *)(a3 + 16);
          if ( (_QWORD *)*v54 == v50 )
          {
            *v23 = v50;
            *(_QWORD *)(a3 + 24) = v54;
            *v54 = (__int64)v23;
            v50[1] = v23;
          }
          else
          {
            RtlpLogHeapFailure(12, 0, (_DWORD)v50, 0, *v54, 0LL);
          }
          *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
          v24 = *(__int64 **)(a1 + 312);
          if ( v24 )
          {
            v25 = *(unsigned __int16 *)(a3 + 8);
            for ( n = *((unsigned int *)v24 + 2); v25 >= n; n = *(unsigned int *)(v56 + 8) )
            {
              v56 = *v24;
              if ( !*v24 )
                goto LABEL_47;
              v24 = (__int64 *)*v24;
            }
            goto LABEL_24;
          }
          goto LABEL_49;
        }
        RtlpInsertFreeBlock(a1, a3, v29);
        return 1;
      }
      LOBYTE(v43) = 1;
      RtlpDeCommitFreeBlock(a1, a3 + 16 * a7, *(unsigned __int16 *)(v11 + 8), v43);
    }
    else
    {
      RtlpLogHeapFailure(12, a1, v13, v16, v15, 0LL);
    }
    if ( v9 )
      return 0;
    v9 = 1;
  }
}
