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

char __fastcall RtlpCreateSplitBlock(
        _WORD *BaseAddress,
        __int64 a2,
        __int64 a3,
        char a4,
        char a5,
        __int16 a6,
        __int64 a7)
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
  char v43; // al
  SIZE_T v44; // r14
  SIZE_T v45; // r12
  _DWORD *v46; // r8
  unsigned __int64 v47; // rdx
  _QWORD *v48; // rdi
  _QWORD *v49; // r8
  int v50; // ecx
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 *v53; // rax
  unsigned __int64 n; // rax
  __int64 v55; // rax
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
  *(_WORD *)(a3 + 12) = BaseAddress[70] ^ a6;
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
    if ( ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v11 + 12) = BaseAddress[70] ^ a7;
      *(_BYTE *)(a3 + 15) = 0;
      if ( !a5 )
      {
        *(_BYTE *)(a3 + 10) = 0;
        v20 = BaseAddress + 168;
        if ( *((_QWORD *)BaseAddress + 39) )
          Entry = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)a7);
        else
          Entry = (_QWORD *)*v20;
        if ( v20 != Entry )
        {
          v39 = *((_DWORD *)BaseAddress + 31);
          do
          {
            if ( v39 )
            {
              v40 = *((_DWORD *)Entry - 2);
              v39 = *((_DWORD *)BaseAddress + 31);
              LOWORD(v72) = v40;
              if ( (v39 & v40) != 0 )
                v72 = *((_DWORD *)BaseAddress + 34) ^ v40;
              v41 = v72;
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
        *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
        v24 = (__int64 *)*((_QWORD *)BaseAddress + 39);
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
          v69 = v27;
          LOBYTE(v27) = 1;
          RtlpHeapAddListEntry((_DWORD)BaseAddress, (_DWORD)v24, v27, (_DWORD)v23, v69, v25);
        }
LABEL_49:
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_BYTE *)(a3 + 11) = *(_BYTE *)(a3 + 8) ^ *(_BYTE *)(a3 + 9) ^ *(_BYTE *)(a3 + 10);
          *(_DWORD *)(a3 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
        return 1;
      }
      *(_BYTE *)(a3 + 10) &= 0xF0u;
      if ( (BaseAddress[56] & 0x40) == 0 )
      {
LABEL_128:
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
          for ( j = *((unsigned int *)v65 + 2); ; j = *((unsigned int *)v67 + 2) )
          {
            if ( *(unsigned __int16 *)(a3 + 8) < j )
            {
              v68 = *(unsigned __int16 *)(a3 + 8);
              goto LABEL_150;
            }
            v67 = (__int64 *)*v65;
            if ( !*v65 )
              break;
            v65 = (__int64 *)*v65;
          }
          v68 = *((_DWORD *)v65 + 2) - 1;
LABEL_150:
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
      v56 = (_DWORD *)(a3 + 32);
      v57 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
      if ( v57 )
      {
        if ( ((unsigned __int8)v56 & 4) == 0 )
          goto LABEL_125;
        *v56 = -17891602;
        if ( --v57 )
        {
          v56 = (_DWORD *)(a3 + 36);
LABEL_125:
          memset64(v56, 0xFEEEFEEEFEEEFEEEuLL, v57 >> 1);
          if ( (v57 & 1) != 0 )
            v56[v57 - 1] = -17891602;
        }
      }
      *(_BYTE *)(a3 + 10) |= 4u;
      goto LABEL_128;
    }
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
        RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v17, v13, v11 + 16, v28, *(unsigned __int16 *)(v11 + 8));
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v11 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
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
              RtlpBreakPointHeap(a3 + 16 * a7);
            }
          }
        }
        *(_BYTE *)(a3 + 10) = *(_BYTE *)(v11 + 10);
        v29 = *(unsigned __int16 *)(v11 + 8) + a7;
        if ( v29 <= 0xFF00 )
        {
          *(_WORD *)(a3 + 8) = v29;
          *(_WORD *)(16 * v29 + a3 + 12) = BaseAddress[70] ^ v29;
          *(_BYTE *)(a3 + 15) = 0;
          if ( !a5 )
          {
            *(_BYTE *)(a3 + 10) = 0;
            v30 = BaseAddress + 168;
            if ( *((_QWORD *)BaseAddress + 39) )
              v31 = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)v29);
            else
              v31 = (_QWORD *)*v30;
            if ( v30 != v31 )
            {
              v32 = *((_DWORD *)BaseAddress + 31);
              do
              {
                if ( v32 )
                {
                  v33 = *((_DWORD *)v31 - 2);
                  v32 = *((_DWORD *)BaseAddress + 31);
                  LOWORD(v71) = v33;
                  if ( (v33 & v32) != 0 )
                    v71 = *((_DWORD *)BaseAddress + 34) ^ v33;
                  v34 = v71;
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
            *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
            v24 = (__int64 *)*((_QWORD *)BaseAddress + 39);
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
          if ( (BaseAddress[56] & 0x40) != 0 )
          {
            v46 = (_DWORD *)(a3 + 32);
            v47 = (16 * (unsigned __int64)(unsigned __int16)v29 - 32) >> 2;
            if ( v47 )
            {
              if ( ((unsigned __int8)v46 & 4) != 0 )
              {
                *v46 = -17891602;
                if ( --v47 )
                {
                  v46 = (_DWORD *)(a3 + 36);
                  goto LABEL_90;
                }
              }
              else
              {
LABEL_90:
                memset64(v46, 0xFEEEFEEEFEEEFEEEuLL, v47 >> 1);
                if ( (v47 & 1) != 0 )
                  v46[v47 - 1] = -17891602;
              }
            }
            *(_BYTE *)(a3 + 10) |= 4u;
          }
          v48 = BaseAddress + 168;
          if ( *((_QWORD *)BaseAddress + 39) )
            v49 = (_QWORD *)RtlpFindEntry(BaseAddress, (unsigned __int16)v29);
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
                if ( (v51 & v50) != 0 )
                  v73 = *((_DWORD *)BaseAddress + 34) ^ v51;
                v52 = v73;
              }
              else
              {
                v52 = *((_WORD *)v49 - 4);
              }
              if ( (unsigned __int16)v29 <= (unsigned __int64)v52 )
                break;
              v49 = (_QWORD *)*v49;
            }
            while ( v48 != v49 );
          }
          v53 = (__int64 *)v49[1];
          v23 = (_QWORD *)(a3 + 16);
          if ( (_QWORD *)*v53 == v49 )
          {
            *v23 = v49;
            *(_QWORD *)(a3 + 24) = v53;
            *v53 = (__int64)v23;
            v49[1] = v23;
          }
          else
          {
            RtlpLogHeapFailure(12, 0, (_DWORD)v49, 0, *v53, 0LL);
          }
          *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(a3 + 8);
          v24 = (__int64 *)*((_QWORD *)BaseAddress + 39);
          if ( v24 )
          {
            v25 = *(unsigned __int16 *)(a3 + 8);
            for ( n = *((unsigned int *)v24 + 2); v25 >= n; n = *(unsigned int *)(v55 + 8) )
            {
              v55 = *v24;
              if ( !*v24 )
                goto LABEL_47;
              v24 = (__int64 *)*v24;
            }
            goto LABEL_24;
          }
          goto LABEL_49;
        }
        RtlpInsertFreeBlock(BaseAddress, a3, v29);
        return 1;
      }
      RtlpDeCommitFreeBlock(BaseAddress);
    }
    else
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v13, v16, v15, 0LL);
    }
    if ( v9 )
      return 0;
    v9 = 1;
  }
}
