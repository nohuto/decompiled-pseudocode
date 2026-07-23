/*
 * XREFs of RtlpCreateSplitBlock @ 0x18004BEF0
 * Callers:
 *     RtlpReAllocateHeap @ 0x1800211C0 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x18004C460 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     RtlpHeapRemoveListEntry @ 0x1800289DC (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180028B24 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004ADF0 (RtlpInsertFreeBlock.c)
 *     RtlpFindEntry @ 0x18004BE78 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18004C2E4 (RtlpHeapAddListEntry.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800AA730 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

char __fastcall RtlpCreateSplitBlock(
        unsigned __int64 a1,
        __int64 a2,
        unsigned __int64 a3,
        char a4,
        char a5,
        __int16 a6,
        __int64 a7)
{
  int v9; // r12d
  __int64 v10; // rdi
  unsigned __int64 v11; // rdi
  __int64 *v12; // r15
  unsigned __int64 v13; // r8
  __int64 v14; // r14
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 v17; // rdx
  unsigned __int64 k; // rax
  __int64 v19; // rax
  unsigned int v20; // ecx
  unsigned __int64 v21; // rbp
  __int64 *v22; // rdi
  __int64 *v23; // r8
  int v24; // ecx
  int v25; // eax
  unsigned __int16 v26; // ax
  __int64 *v27; // rax
  __int64 **v28; // rdi
  __int64 *v29; // rdx
  unsigned __int64 v30; // rcx
  unsigned __int64 m; // rax
  __int64 *v32; // rax
  int v33; // r8d
  __int64 *v35; // rdi
  __int64 *Entry; // r8
  int v37; // ecx
  int v38; // eax
  unsigned __int16 v39; // ax
  __int64 *v40; // rax
  unsigned __int64 i; // rax
  __int64 *v42; // rax
  char v43; // al
  SIZE_T v44; // r14
  SIZE_T v45; // r12
  _DWORD *v46; // r8
  unsigned __int64 v47; // rdx
  __int64 *v48; // rdi
  __int64 *v49; // r8
  int v50; // ecx
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 *v53; // rax
  unsigned __int64 n; // rax
  __int64 v55; // rax
  _DWORD *v56; // r8
  unsigned __int64 v57; // rdx
  __int64 *v58; // rdi
  __int64 *v59; // r8
  int v60; // ecx
  int v61; // eax
  unsigned __int16 v62; // ax
  __int64 *v63; // rax
  __int64 **v64; // rdi
  __int64 *v65; // rdx
  unsigned __int64 j; // rax
  __int64 *v67; // rax
  int v68; // r8d
  int v69; // [rsp+20h] [rbp-38h]
  int v70; // [rsp+20h] [rbp-38h]
  int v71; // [rsp+38h] [rbp-20h]
  int v72; // [rsp+38h] [rbp-20h]
  int v73; // [rsp+38h] [rbp-20h]
  int v74; // [rsp+38h] [rbp-20h]

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
    v10 = ((a3 - a2) >> 16) + 1;
    if ( (a3 - a2) >> 16 > 0xFC )
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
        v35 = (__int64 *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          Entry = (__int64 *)*v35;
        if ( v35 != Entry )
        {
          v37 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v37 )
            {
              v38 = *((_DWORD *)Entry - 2);
              v37 = *(_DWORD *)(a1 + 124);
              LOWORD(v72) = v38;
              if ( (v37 & v38) != 0 )
                v72 = *(_DWORD *)(a1 + 136) ^ v38;
              v39 = v72;
            }
            else
            {
              v39 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v39 )
              break;
            Entry = (__int64 *)*Entry;
          }
          while ( v35 != Entry );
        }
        v40 = (__int64 *)Entry[1];
        v28 = (__int64 **)(a3 + 16);
        if ( (__int64 *)*v40 == Entry )
        {
          *v28 = Entry;
          *(_QWORD *)(a3 + 24) = v40;
          *v40 = (__int64)v28;
          Entry[1] = (__int64)v28;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v40, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v29 = *(__int64 **)(a1 + 312);
        if ( v29 )
        {
          v30 = *(unsigned __int16 *)(a3 + 8);
          for ( i = *((unsigned int *)v29 + 2); v30 >= i; i = *((unsigned int *)v42 + 2) )
          {
            v42 = (__int64 *)*v29;
            if ( !*v29 )
            {
LABEL_37:
              v33 = *((_DWORD *)v29 + 2) - 1;
              goto LABEL_38;
            }
            v29 = (__int64 *)*v29;
          }
LABEL_57:
          v33 = v30;
LABEL_38:
          v69 = v33;
          LOBYTE(v33) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v29, v33, (_DWORD)v28, v69, v30);
        }
LABEL_39:
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
LABEL_127:
        v58 = (__int64 *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v59 = RtlpFindEntry(a1, (unsigned __int16)a7);
        else
          v59 = (__int64 *)*v58;
        if ( v58 != v59 )
        {
          v60 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v60 )
            {
              v61 = *((_DWORD *)v59 - 2);
              v60 = *(_DWORD *)(a1 + 124);
              LOWORD(v74) = v61;
              if ( (v61 & v60) != 0 )
                v74 = *(_DWORD *)(a1 + 136) ^ v61;
              v62 = v74;
            }
            else
            {
              v62 = *((_WORD *)v59 - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v62 )
              break;
            v59 = (__int64 *)*v59;
          }
          while ( v58 != v59 );
        }
        v63 = (__int64 *)v59[1];
        v64 = (__int64 **)(a3 + 16);
        if ( (__int64 *)*v63 == v59 )
        {
          *v64 = v59;
          *(_QWORD *)(a3 + 24) = v63;
          *v63 = (__int64)v64;
          v59[1] = (__int64)v64;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v59, 0, *v63, 0LL);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
        v65 = *(__int64 **)(a1 + 312);
        if ( v65 )
        {
          for ( j = *((unsigned int *)v65 + 2); ; j = *((unsigned int *)v67 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < j )
            {
              v68 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_149;
            }
            v67 = (__int64 *)*v65;
            if ( !*v65 )
              break;
            v65 = (__int64 *)*v65;
          }
          v68 = *((_DWORD *)v65 + 2) - 1;
LABEL_149:
          v70 = v68;
          LOBYTE(v68) = 1;
          RtlpHeapAddListEntry(a1, (_DWORD)v65, v68, a3 + 16, v70, *(unsigned __int16 *)(a3 + 8));
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        return 1;
      }
      v56 = (_DWORD *)(a3 + 32);
      v57 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
      if ( v57 )
      {
        if ( ((unsigned __int8)v56 & 4) == 0 )
          goto LABEL_124;
        *v56 = -17891602;
        if ( --v57 )
        {
          v56 = (_DWORD *)(a3 + 36);
LABEL_124:
          memset64(v56, 0xFEEEFEEEFEEEFEEEuLL, v57 >> 1);
          if ( (v57 & 1) != 0 )
            v56[v57 - 1] = -17891602;
        }
      }
      *(_BYTE *)(a3 + 10) |= 4u;
      goto LABEL_127;
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
      v17 = *(_QWORD *)(a1 + 312);
      if ( v17 )
      {
        for ( k = *(unsigned int *)(v17 + 8); ; k = *(unsigned int *)(v19 + 8) )
        {
          if ( *(unsigned __int16 *)(v11 + 8) < k )
          {
            v20 = *(unsigned __int16 *)(v11 + 8);
            goto LABEL_16;
          }
          v19 = *(_QWORD *)v17;
          if ( !*(_QWORD *)v17 )
            break;
          v17 = *(_QWORD *)v17;
        }
        v20 = *(_DWORD *)(v17 + 8) - 1;
LABEL_16:
        RtlpHeapRemoveListEntry(a1, v17, 1, (__int64 *)(v11 + 16), v20, *(unsigned __int16 *)(v11 + 8));
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || RtlpCommitBlock((PVOID)a1, a3 + 16 * a7) )
      {
        if ( a5 )
        {
          v43 = *(_BYTE *)(v11 + 10);
          if ( (v43 & 4) != 0 )
          {
            v44 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v43 & 2) != 0 && v44 > 4 )
              v44 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v45 = RtlCompareMemoryUlong((PVOID)(v11 + 32), v44, 0xFEEEFEEE);
            if ( v45 != v44 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v45 + v11 + 32));
              RtlpBreakPointHeap();
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v21 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v21 <= 0xFF00 )
        {
          *(_WORD *)(a3 + 8) = v21;
          *(_WORD *)(16 * v21 + a3 + 12) = *(_WORD *)(a1 + 140) ^ v21;
          *(_BYTE *)(a3 + 15) = 0;
          if ( !a5 )
          {
            *(_BYTE *)(a3 + 10) = 0;
            v22 = (__int64 *)(a1 + 336);
            if ( *(_QWORD *)(a1 + 312) )
              v23 = RtlpFindEntry(a1, (unsigned __int16)v21);
            else
              v23 = (__int64 *)*v22;
            if ( v22 != v23 )
            {
              v24 = *(_DWORD *)(a1 + 124);
              do
              {
                if ( v24 )
                {
                  v25 = *((_DWORD *)v23 - 2);
                  v24 = *(_DWORD *)(a1 + 124);
                  LOWORD(v71) = v25;
                  if ( (v25 & v24) != 0 )
                    v71 = *(_DWORD *)(a1 + 136) ^ v25;
                  v26 = v71;
                }
                else
                {
                  v26 = *((_WORD *)v23 - 4);
                }
                if ( (unsigned __int16)v21 <= (unsigned __int64)v26 )
                  break;
                v23 = (__int64 *)*v23;
              }
              while ( v22 != v23 );
            }
            v27 = (__int64 *)v23[1];
            v28 = (__int64 **)(a3 + 16);
            if ( (__int64 *)*v27 == v23 )
            {
              *v28 = v23;
              *(_QWORD *)(a3 + 24) = v27;
              *v27 = (__int64)v28;
              v23[1] = (__int64)v28;
            }
            else
            {
              RtlpLogHeapFailure(12, 0, (_DWORD)v23, 0, *v27, 0LL);
            }
            *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
            v29 = *(__int64 **)(a1 + 312);
            if ( v29 )
            {
              v30 = *(unsigned __int16 *)(a3 + 8);
              for ( m = *((unsigned int *)v29 + 2); v30 >= m; m = *((unsigned int *)v32 + 2) )
              {
                v32 = (__int64 *)*v29;
                if ( !*v29 )
                  goto LABEL_37;
                v29 = (__int64 *)*v29;
              }
              goto LABEL_57;
            }
            goto LABEL_39;
          }
          *(_BYTE *)(a3 + 10) &= 0xF0u;
          if ( (*(_BYTE *)(a1 + 112) & 0x40) != 0 )
          {
            v46 = (_DWORD *)(a3 + 32);
            v47 = (16 * (unsigned __int64)(unsigned __int16)v21 - 32) >> 2;
            if ( v47 )
            {
              if ( ((unsigned __int8)v46 & 4) != 0 )
              {
                *v46 = -17891602;
                if ( --v47 )
                {
                  v46 = (_DWORD *)(a3 + 36);
                  goto LABEL_89;
                }
              }
              else
              {
LABEL_89:
                memset64(v46, 0xFEEEFEEEFEEEFEEEuLL, v47 >> 1);
                if ( (v47 & 1) != 0 )
                  v46[v47 - 1] = -17891602;
              }
            }
            *(_BYTE *)(a3 + 10) |= 4u;
          }
          v48 = (__int64 *)(a1 + 336);
          if ( *(_QWORD *)(a1 + 312) )
            v49 = RtlpFindEntry(a1, (unsigned __int16)v21);
          else
            v49 = (__int64 *)*v48;
          if ( v48 != v49 )
          {
            v50 = *(_DWORD *)(a1 + 124);
            do
            {
              if ( v50 )
              {
                v51 = *((_DWORD *)v49 - 2);
                v50 = *(_DWORD *)(a1 + 124);
                LOWORD(v73) = v51;
                if ( (v51 & v50) != 0 )
                  v73 = *(_DWORD *)(a1 + 136) ^ v51;
                v52 = v73;
              }
              else
              {
                v52 = *((_WORD *)v49 - 4);
              }
              if ( (unsigned __int16)v21 <= (unsigned __int64)v52 )
                break;
              v49 = (__int64 *)*v49;
            }
            while ( v48 != v49 );
          }
          v53 = (__int64 *)v49[1];
          v28 = (__int64 **)(a3 + 16);
          if ( (__int64 *)*v53 == v49 )
          {
            *v28 = v49;
            *(_QWORD *)(a3 + 24) = v53;
            *v53 = (__int64)v28;
            v49[1] = (__int64)v28;
          }
          else
          {
            RtlpLogHeapFailure(12, 0, (_DWORD)v49, 0, *v53, 0LL);
          }
          *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(a3 + 8);
          v29 = *(__int64 **)(a1 + 312);
          if ( v29 )
          {
            v30 = *(unsigned __int16 *)(a3 + 8);
            for ( n = *((unsigned int *)v29 + 2); v30 >= n; n = *(unsigned int *)(v55 + 8) )
            {
              v55 = *v29;
              if ( !*v29 )
                goto LABEL_37;
              v29 = (__int64 *)*v29;
            }
            goto LABEL_57;
          }
          goto LABEL_39;
        }
        RtlpInsertFreeBlock(a1, a3, v21);
        return 1;
      }
      RtlpDeCommitFreeBlock(a1, a3 + 16 * a7, *(unsigned __int16 *)(v11 + 8), 1);
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
