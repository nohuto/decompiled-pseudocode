/*
 * XREFs of RtlpCreateSplitBlock @ 0x180056BFC
 * Callers:
 *     RtlpReAllocateHeap @ 0x180023F60 (RtlpReAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x180056578 (RtlpGrowBlockInPlace.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180020000 (RtlpInsertFreeBlock.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180052BE8 (RtlpCommitBlock.c)
 *     RtlpHeapAddListEntry @ 0x1800573C4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x180057470 (RtlpFindEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180057774 (RtlpHeapRemoveListEntry.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A92F0 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpCreateSplitBlock(
        _WORD *BaseAddress,
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
  __int64 *v17; // rdx
  unsigned __int64 i; // rax
  __int64 *v19; // rax
  int v20; // ecx
  char v21; // al
  SIZE_T v22; // r14
  SIZE_T v23; // r12
  unsigned __int64 v24; // rbp
  _QWORD *v25; // rdi
  _QWORD *Entry; // r8
  int v27; // ecx
  int v28; // eax
  unsigned __int16 v29; // ax
  __int64 *v30; // rax
  _QWORD *v31; // rdi
  __int64 *v32; // rdx
  unsigned __int64 v33; // rcx
  unsigned __int64 j; // rax
  __int64 *v35; // rax
  int v36; // r8d
  _DWORD *v37; // r8
  unsigned __int64 v38; // rdx
  _QWORD *v39; // rdi
  _QWORD *v40; // r8
  int v41; // ecx
  int v42; // eax
  unsigned __int16 v43; // ax
  __int64 *v44; // rax
  unsigned __int64 k; // rax
  __int64 *v46; // rax
  _QWORD *v48; // rdi
  _QWORD *v49; // r8
  int v50; // ecx
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 *v53; // rax
  unsigned __int64 m; // rax
  __int64 *v55; // rax
  _DWORD *v56; // r8
  unsigned __int64 v57; // rdx
  _QWORD *v58; // rdi
  _QWORD *v59; // r8
  int v60; // ecx
  int v61; // eax
  unsigned __int16 v62; // ax
  __int64 *v63; // rax
  _QWORD *v64; // rdi
  __int64 *v65; // rdx
  unsigned __int64 n; // rax
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
  *(_WORD *)(a3 + 12) = BaseAddress[70] ^ a6;
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
  while ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) == 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v11 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, a3 + 16 * a7);
    }
    v12 = *(__int64 **)(v11 + 24);
    v13 = v11 + 16;
    v14 = *(_QWORD *)(v11 + 16);
    v15 = *v12;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *v12 == v16 && v15 == v13 )
    {
      *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v11 + 8);
      v17 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v17 )
      {
        for ( i = *((unsigned int *)v17 + 2); ; i = *((unsigned int *)v19 + 2) )
        {
          if ( *(unsigned __int16 *)(v11 + 8) < i )
          {
            v20 = *(unsigned __int16 *)(v11 + 8);
            goto LABEL_18;
          }
          v19 = (__int64 *)*v17;
          if ( !*v17 )
            break;
          v17 = (__int64 *)*v17;
        }
        v20 = *((_DWORD *)v17 + 2) - 1;
LABEL_18:
        LOBYTE(v13) = 1;
        RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v17, v13, v11 + 16, v20, *(unsigned __int16 *)(v11 + 8));
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || RtlpCommitBlock(BaseAddress, a3 + 16 * a7) )
      {
        if ( a5 )
        {
          v21 = *(_BYTE *)(v11 + 10);
          if ( (v21 & 4) != 0 )
          {
            v22 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
            if ( (v21 & 2) != 0 && v22 > 4 )
              v22 = 16LL * *(unsigned __int16 *)(v11 + 8) - 36;
            v23 = RtlCompareMemoryUlong((PVOID)(v11 + 32), v22, 0xFEEEFEEE);
            if ( v23 != v22 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)(a3 + 16 * a7),
                (const void *)(v23 + v11 + 32));
              RtlpBreakPointHeap(a3 + 16 * a7);
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v24 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v24 > 0xFF00 )
        {
          RtlpInsertFreeBlock((unsigned __int64)BaseAddress, a3, v24);
          return 1;
        }
        *(_WORD *)(a3 + 8) = v24;
        *(_WORD *)(16 * v24 + a3 + 12) = BaseAddress[70] ^ v24;
        *(_BYTE *)(a3 + 15) = 0;
        if ( !a5 )
        {
          *(_BYTE *)(a3 + 10) = 0;
          v25 = BaseAddress + 168;
          if ( *((_QWORD *)BaseAddress + 39) )
            Entry = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)v24);
          else
            Entry = (_QWORD *)*v25;
          if ( v25 != Entry )
          {
            v27 = *((_DWORD *)BaseAddress + 31);
            do
            {
              if ( v27 )
              {
                v28 = *((_DWORD *)Entry - 2);
                v27 = *((_DWORD *)BaseAddress + 31);
                LOWORD(v71) = v28;
                if ( (v28 & v27) != 0 )
                  v71 = *((_DWORD *)BaseAddress + 34) ^ v28;
                v29 = v71;
              }
              else
              {
                v29 = *((_WORD *)Entry - 4);
              }
              if ( (unsigned __int16)v24 <= (unsigned __int64)v29 )
                break;
              Entry = (_QWORD *)*Entry;
            }
            while ( v25 != Entry );
          }
          v30 = (__int64 *)Entry[1];
          v31 = (_QWORD *)(a3 + 16);
          if ( (_QWORD *)*v30 == Entry )
          {
            *v31 = Entry;
            *(_QWORD *)(a3 + 24) = v30;
            *v30 = (__int64)v31;
            Entry[1] = v31;
          }
          else
          {
            RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v30, 0LL);
          }
          *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
          v32 = (__int64 *)*((_QWORD *)BaseAddress + 39);
          if ( v32 )
          {
            v33 = *(unsigned __int16 *)(a3 + 8);
            for ( j = *((unsigned int *)v32 + 2); v33 >= j; j = *((unsigned int *)v35 + 2) )
            {
              v35 = (__int64 *)*v32;
              if ( !*v32 )
                goto LABEL_91;
              v32 = (__int64 *)*v32;
            }
            goto LABEL_58;
          }
          goto LABEL_60;
        }
        *(_BYTE *)(a3 + 10) &= 0xF0u;
        if ( (BaseAddress[56] & 0x40) != 0 )
        {
          v37 = (_DWORD *)(a3 + 32);
          v38 = (16 * (unsigned __int64)(unsigned __int16)v24 - 32) >> 2;
          if ( v38 )
          {
            if ( ((unsigned __int8)v37 & 4) != 0 )
            {
              *v37 = -17891602;
              if ( --v38 )
              {
                v37 = (_DWORD *)(a3 + 36);
                goto LABEL_67;
              }
            }
            else
            {
LABEL_67:
              memset64(v37, 0xFEEEFEEEFEEEFEEEuLL, v38 >> 1);
              if ( (v38 & 1) != 0 )
                v37[v38 - 1] = -17891602;
            }
          }
          *(_BYTE *)(a3 + 10) |= 4u;
        }
        v39 = BaseAddress + 168;
        if ( *((_QWORD *)BaseAddress + 39) )
          v40 = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)v24);
        else
          v40 = (_QWORD *)*v39;
        if ( v39 != v40 )
        {
          v41 = *((_DWORD *)BaseAddress + 31);
          do
          {
            if ( v41 )
            {
              v42 = *((_DWORD *)v40 - 2);
              v41 = *((_DWORD *)BaseAddress + 31);
              LOWORD(v72) = v42;
              if ( (v42 & v41) != 0 )
                v72 = *((_DWORD *)BaseAddress + 34) ^ v42;
              v43 = v72;
            }
            else
            {
              v43 = *((_WORD *)v40 - 4);
            }
            if ( (unsigned __int16)v24 <= (unsigned __int64)v43 )
              break;
            v40 = (_QWORD *)*v40;
          }
          while ( v39 != v40 );
        }
        v44 = (__int64 *)v40[1];
        v31 = (_QWORD *)(a3 + 16);
        if ( (_QWORD *)*v44 == v40 )
        {
          *v31 = v40;
          *(_QWORD *)(a3 + 24) = v44;
          *v44 = (__int64)v31;
          v40[1] = v31;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v40, 0, *v44, 0LL);
        }
        *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
        v32 = (__int64 *)*((_QWORD *)BaseAddress + 39);
        if ( v32 )
        {
          v33 = *(unsigned __int16 *)(a3 + 8);
          for ( k = *((unsigned int *)v32 + 2); v33 >= k; k = *((unsigned int *)v46 + 2) )
          {
            v46 = (__int64 *)*v32;
            if ( !*v32 )
              goto LABEL_91;
            v32 = (__int64 *)*v32;
          }
          goto LABEL_58;
        }
        goto LABEL_60;
      }
      RtlpDeCommitFreeBlock((unsigned __int64)BaseAddress, a3 + 16 * a7, *(unsigned __int16 *)(v11 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v13, v16, v15, 0LL);
    }
    if ( v9 )
      return 0;
    v9 = 1;
  }
  *(_WORD *)(v11 + 12) = BaseAddress[70] ^ a7;
  *(_BYTE *)(a3 + 15) = 0;
  if ( !a5 )
  {
    *(_BYTE *)(a3 + 10) = 0;
    v48 = BaseAddress + 168;
    if ( *((_QWORD *)BaseAddress + 39) )
      v49 = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)a7);
    else
      v49 = (_QWORD *)*v48;
    if ( v48 != v49 )
    {
      v50 = *((_DWORD *)BaseAddress + 31);
      do
      {
        if ( v50 )
        {
          v51 = *((_DWORD *)v49 - 2);
          v50 = *((_DWORD *)BaseAddress + 31);
          LOWORD(v73) = v51;
          if ( (v50 & v51) != 0 )
            v73 = *((_DWORD *)BaseAddress + 34) ^ v51;
          v52 = v73;
        }
        else
        {
          v52 = *((_WORD *)v49 - 4);
        }
        if ( (unsigned __int16)a7 <= (unsigned __int64)v52 )
          break;
        v49 = (_QWORD *)*v49;
      }
      while ( v48 != v49 );
    }
    v53 = (__int64 *)v49[1];
    v31 = (_QWORD *)(a3 + 16);
    if ( (_QWORD *)*v53 == v49 )
    {
      *v31 = v49;
      *(_QWORD *)(a3 + 24) = v53;
      *v53 = (__int64)v31;
      v49[1] = v31;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v49, 0, *v53, 0LL);
    }
    *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
    v32 = (__int64 *)*((_QWORD *)BaseAddress + 39);
    if ( v32 )
    {
      v33 = *(unsigned __int16 *)(a3 + 8);
      for ( m = *((unsigned int *)v32 + 2); v33 >= m; m = *((unsigned int *)v55 + 2) )
      {
        v55 = (__int64 *)*v32;
        if ( !*v32 )
        {
LABEL_91:
          v36 = *((_DWORD *)v32 + 2) - 1;
          goto LABEL_59;
        }
        v32 = (__int64 *)*v32;
      }
LABEL_58:
      v36 = v33;
LABEL_59:
      v69 = v36;
      LOBYTE(v36) = 1;
      RtlpHeapAddListEntry((_DWORD)BaseAddress, (_DWORD)v32, v36, (_DWORD)v31, v69, v33);
    }
LABEL_60:
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
      *(_DWORD *)(a3 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    return 1;
  }
  *(_BYTE *)(a3 + 10) &= 0xF0u;
  if ( (BaseAddress[56] & 0x40) != 0 )
  {
    v56 = (_DWORD *)(a3 + 32);
    v57 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
    if ( v57 )
    {
      if ( ((unsigned __int8)v56 & 4) == 0 )
        goto LABEL_121;
      *v56 = -17891602;
      if ( --v57 )
      {
        v56 = (_DWORD *)(a3 + 36);
LABEL_121:
        memset64(v56, 0xFEEEFEEEFEEEFEEEuLL, v57 >> 1);
        if ( (v57 & 1) != 0 )
          v56[v57 - 1] = -17891602;
      }
    }
    *(_BYTE *)(a3 + 10) |= 4u;
  }
  v58 = BaseAddress + 168;
  if ( *((_QWORD *)BaseAddress + 39) )
    v59 = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)a7);
  else
    v59 = (_QWORD *)*v58;
  if ( v58 != v59 )
  {
    v60 = *((_DWORD *)BaseAddress + 31);
    do
    {
      if ( v60 )
      {
        v61 = *((_DWORD *)v59 - 2);
        v60 = *((_DWORD *)BaseAddress + 31);
        LOWORD(v74) = v61;
        if ( (v61 & v60) != 0 )
          v74 = *((_DWORD *)BaseAddress + 34) ^ v61;
        v62 = v74;
      }
      else
      {
        v62 = *((_WORD *)v59 - 4);
      }
      if ( (unsigned __int16)a7 <= (unsigned __int64)v62 )
        break;
      v59 = (_QWORD *)*v59;
    }
    while ( v58 != v59 );
  }
  v63 = (__int64 *)v59[1];
  v64 = (_QWORD *)(a3 + 16);
  if ( (_QWORD *)*v63 == v59 )
  {
    *v64 = v59;
    *(_QWORD *)(a3 + 24) = v63;
    *v63 = (__int64)v64;
    v59[1] = v64;
  }
  else
  {
    RtlpLogHeapFailure(12, 0, (_DWORD)v59, 0, *v63, 0LL);
  }
  *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
  v65 = (__int64 *)*((_QWORD *)BaseAddress + 39);
  if ( v65 )
  {
    for ( n = *((unsigned int *)v65 + 2); ; n = *((unsigned int *)v67 + 2) )
    {
      if ( *(unsigned __int16 *)(a3 + 8) < n )
      {
        v68 = *(unsigned __int16 *)(a3 + 8);
        goto LABEL_145;
      }
      v67 = (__int64 *)*v65;
      if ( !*v65 )
        break;
      v65 = (__int64 *)*v65;
    }
    v68 = *((_DWORD *)v65 + 2) - 1;
LABEL_145:
    v70 = v68;
    LOBYTE(v68) = 1;
    RtlpHeapAddListEntry((_DWORD)BaseAddress, (_DWORD)v65, v68, a3 + 16, v70, *(unsigned __int16 *)(a3 + 8));
  }
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
    *(_DWORD *)(a3 + 8) ^= *((_DWORD *)BaseAddress + 34);
  }
  return 1;
}
