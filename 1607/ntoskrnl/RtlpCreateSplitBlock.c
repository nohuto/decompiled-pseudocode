/*
 * XREFs of RtlpCreateSplitBlock @ 0x140092ADC
 * Callers:
 *     RtlpAllocateHeap @ 0x14009389C (RtlpAllocateHeap.c)
 * Callees:
 *     DbgPrint @ 0x140084CC8 (DbgPrint.c)
 *     RtlpInsertFreeBlock @ 0x1400928CC (RtlpInsertFreeBlock.c)
 *     RtlpHeapAddListEntry @ 0x1400936E8 (RtlpHeapAddListEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x1400941E8 (RtlpHeapRemoveListEntry.c)
 *     RtlpFindEntry @ 0x1400942D0 (RtlpFindEntry.c)
 *     RtlpLogHeapFailure @ 0x140159A84 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x140167A50 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x1402183D8 (RtlpAnalyzeHeapFailure.c)
 */

char __fastcall RtlpCreateSplitBlock(
        unsigned __int64 a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        char a5,
        __int16 a6,
        __int64 a7)
{
  __int64 v8; // rbx
  int v9; // r14d
  __int64 v10; // rcx
  __int64 v11; // rdi
  __int64 v12; // rdi
  _QWORD *v13; // rdi
  _QWORD *Entry; // r8
  int v15; // ecx
  int v16; // eax
  unsigned __int16 v17; // ax
  __int64 *v18; // rax
  _QWORD *v19; // rdi
  __int64 *v20; // rdx
  unsigned __int64 v21; // rcx
  unsigned __int64 i; // rax
  int v23; // r8d
  __int64 *v25; // rax
  __int64 *v26; // r12
  __int64 v27; // r8
  __int64 v28; // r15
  __int64 v29; // r9
  __int64 *v30; // rdx
  unsigned __int64 v31; // r8
  unsigned __int64 k; // rax
  __int64 *v33; // rax
  int v34; // ecx
  char v35; // al
  SIZE_T v36; // r14
  SIZE_T v37; // rax
  unsigned __int64 v38; // rbp
  _QWORD *v39; // rdi
  _QWORD *v40; // r8
  int v41; // ecx
  int v42; // eax
  unsigned __int16 v43; // ax
  __int64 *v44; // rax
  unsigned __int64 m; // rax
  __int64 *v46; // rax
  unsigned __int64 v47; // rdx
  _QWORD *v48; // rdi
  _QWORD *v49; // r8
  int v50; // ecx
  int v51; // eax
  unsigned __int16 v52; // ax
  __int64 *v53; // rax
  unsigned __int64 n; // rax
  __int64 *v55; // rax
  unsigned __int64 v56; // rdx
  _QWORD *v57; // rdi
  _QWORD *v58; // r8
  int v59; // ecx
  int v60; // eax
  unsigned __int16 v61; // ax
  __int64 *v62; // rax
  _QWORD *v63; // rdi
  __int64 *v64; // rdx
  unsigned __int64 j; // rax
  __int64 *v66; // rax
  int v67; // r8d
  int v68; // [rsp+38h] [rbp-30h]
  int v69; // [rsp+38h] [rbp-30h]
  int v70; // [rsp+38h] [rbp-30h]
  int v71; // [rsp+38h] [rbp-30h]

  *(_BYTE *)(a3 + 15) = 0;
  *(_BYTE *)(a3 + 10) = a4;
  v8 = a3;
  v9 = 0;
  *(_WORD *)(a3 + 12) = *(_WORD *)(a1 + 140) ^ a6;
  v10 = *(_QWORD *)(a2 + 40);
  if ( v10 == a2 )
  {
    LOBYTE(v11) = 0;
  }
  else
  {
    v11 = ((unsigned __int64)(a3 - a2) >> 16) + 1;
    if ( (unsigned __int64)(a3 - a2) >> 16 > 0xFC )
      RtlpLogHeapFailure(3, v10, a3, a2, 0LL);
  }
  *(_BYTE *)(v8 + 14) = v11;
  v12 = v8 + 16 * a7;
  *(_BYTE *)(v8 + 11) = 0;
  *(_WORD *)(v8 + 8) = a7;
  while ( 1 )
  {
    if ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
    {
      *(_WORD *)(v12 + 12) = *(_WORD *)(a1 + 140) ^ a7;
      *(_BYTE *)(v8 + 15) = 0;
      if ( !a5 )
      {
        *(_BYTE *)(v8 + 10) = 0;
        v13 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          Entry = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7, a3, a4);
        else
          Entry = (_QWORD *)*v13;
        if ( v13 != Entry )
        {
          v15 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v15 )
            {
              v16 = *((_DWORD *)Entry - 2);
              v15 = *(_DWORD *)(a1 + 124);
              LOWORD(v68) = v16;
              if ( (v15 & v16) != 0 )
                v68 = *(_DWORD *)(a1 + 136) ^ v16;
              v17 = v68;
            }
            else
            {
              v17 = *((_WORD *)Entry - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v17 )
              break;
            Entry = (_QWORD *)*Entry;
          }
          while ( v13 != Entry );
        }
        v18 = (__int64 *)Entry[1];
        v19 = (_QWORD *)(v8 + 16);
        if ( (_QWORD *)*v18 == Entry )
        {
          *v19 = Entry;
          *(_QWORD *)(v8 + 24) = v18;
          *v18 = (__int64)v19;
          Entry[1] = v19;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v18);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
        v20 = *(__int64 **)(a1 + 312);
        if ( !v20 )
          goto LABEL_22;
        v21 = *(unsigned __int16 *)(v8 + 8);
        for ( i = *((unsigned int *)v20 + 2); v21 >= i; i = *((unsigned int *)v25 + 2) )
        {
          v25 = (__int64 *)*v20;
          if ( !*v20 )
            goto LABEL_26;
          v20 = (__int64 *)*v20;
        }
        goto LABEL_20;
      }
      *(_BYTE *)(v8 + 10) &= 0xF0u;
      if ( (*(_DWORD *)(a1 + 112) & 0x40) == 0 )
      {
LABEL_120:
        v57 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v58 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)a7, a3, a4);
        else
          v58 = (_QWORD *)*v57;
        if ( v57 != v58 )
        {
          v59 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v59 )
            {
              v60 = *((_DWORD *)v58 - 2);
              v59 = *(_DWORD *)(a1 + 124);
              LOWORD(v71) = v60;
              if ( (v59 & v60) != 0 )
                v71 = *(_DWORD *)(a1 + 136) ^ v60;
              v61 = v71;
            }
            else
            {
              v61 = *((_WORD *)v58 - 4);
            }
            if ( (unsigned __int16)a7 <= (unsigned __int64)v61 )
              break;
            v58 = (_QWORD *)*v58;
          }
          while ( v57 != v58 );
        }
        v62 = (__int64 *)v58[1];
        v63 = (_QWORD *)(v8 + 16);
        if ( (_QWORD *)*v62 == v58 )
        {
          *v63 = v58;
          *(_QWORD *)(v8 + 24) = v62;
          *v62 = (__int64)v63;
          v58[1] = v63;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v58, 0, *v62);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
        v64 = *(__int64 **)(a1 + 312);
        if ( v64 )
        {
          for ( j = *((unsigned int *)v64 + 2); ; j = *((unsigned int *)v66 + 2) )
          {
            if ( *(unsigned __int16 *)(v8 + 8) < j )
            {
              v67 = *(unsigned __int16 *)(v8 + 8);
              goto LABEL_142;
            }
            v66 = (__int64 *)*v64;
            if ( !*v64 )
              break;
            v64 = (__int64 *)*v64;
          }
          v67 = *((_DWORD *)v64 + 2) - 1;
LABEL_142:
          RtlpHeapAddListEntry(a1, (_DWORD)v64, v67, v8 + 16, v67, *(unsigned __int16 *)(v8 + 8));
        }
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
          *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        return 1;
      }
      a3 = v8 + 32;
      v56 = (16 * (unsigned __int64)(unsigned __int16)a7 - 32) >> 2;
      if ( v56 )
      {
        if ( (a3 & 4) == 0 )
          goto LABEL_117;
        *(_DWORD *)a3 = -17891602;
        if ( --v56 )
        {
          a3 = v8 + 36;
LABEL_117:
          memset64((void *)a3, 0xFEEEFEEEFEEEFEEEuLL, v56 >> 1);
          if ( (v56 & 1) != 0 )
            *(_DWORD *)(a3 + 4 * v56 - 4) = -17891602;
        }
      }
      *(_BYTE *)(v8 + 10) |= 4u;
      goto LABEL_120;
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v12 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
        RtlpAnalyzeHeapFailure(a1);
    }
    v26 = *(__int64 **)(v12 + 24);
    v27 = v12 + 16;
    v28 = *(_QWORD *)(v12 + 16);
    v29 = *(_QWORD *)(v28 + 8);
    if ( *v26 == v29 && *v26 == v27 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v12 + 8);
      v30 = *(__int64 **)(a1 + 312);
      if ( v30 )
      {
        v31 = *(unsigned __int16 *)(v12 + 8);
        for ( k = *((unsigned int *)v30 + 2); ; k = *((unsigned int *)v33 + 2) )
        {
          if ( v31 < k )
          {
            v34 = *(unsigned __int16 *)(v12 + 8);
            goto LABEL_44;
          }
          v33 = (__int64 *)*v30;
          if ( !*v30 )
            break;
          v30 = (__int64 *)*v30;
        }
        v34 = *((_DWORD *)v30 + 2) - 1;
LABEL_44:
        RtlpHeapRemoveListEntry(a1, (_DWORD)v30, v31, v12 + 16, v34, *(unsigned __int16 *)(v12 + 8));
      }
      *v26 = v28;
      *(_QWORD *)(v28 + 8) = v26;
      if ( a5 )
      {
        v35 = *(_BYTE *)(v12 + 10);
        if ( (v35 & 4) != 0 )
        {
          v36 = 16LL * *(unsigned __int16 *)(v12 + 8) - 32;
          if ( (v35 & 2) != 0 && v36 > 4 )
            v36 = 16LL * *(unsigned __int16 *)(v12 + 8) - 36;
          v37 = RtlCompareMemoryUlong((PVOID)(v12 + 32), v36, 0xFEEEFEEE);
          if ( v37 != v36 )
          {
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)(v8 + 16 * a7),
              (const void *)(v37 + v12 + 32));
            if ( (_BYTE)KdDebuggerEnabled )
              __debugbreak();
          }
        }
      }
      *(_BYTE *)(v8 + 10) = *(_BYTE *)(v12 + 10);
      v38 = *(unsigned __int16 *)(v12 + 8) + a7;
      if ( v38 > 0xFF00 )
      {
        RtlpInsertFreeBlock(a1, v8, v38);
        return 1;
      }
      *(_WORD *)(v8 + 8) = v38;
      *(_WORD *)(16 * v38 + v8 + 12) = *(_WORD *)(a1 + 140) ^ v38;
      *(_BYTE *)(v8 + 15) = 0;
      if ( !a5 )
      {
        *(_BYTE *)(v8 + 10) = 0;
        v39 = (_QWORD *)(a1 + 336);
        if ( *(_QWORD *)(a1 + 312) )
          v40 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v38, v27, v29);
        else
          v40 = (_QWORD *)*v39;
        if ( v39 != v40 )
        {
          v41 = *(_DWORD *)(a1 + 124);
          do
          {
            if ( v41 )
            {
              v42 = *((_DWORD *)v40 - 2);
              v41 = *(_DWORD *)(a1 + 124);
              LOWORD(v69) = v42;
              if ( (v41 & v42) != 0 )
                v69 = *(_DWORD *)(a1 + 136) ^ v42;
              v43 = v69;
            }
            else
            {
              v43 = *((_WORD *)v40 - 4);
            }
            if ( (unsigned __int16)v38 <= (unsigned __int64)v43 )
              break;
            v40 = (_QWORD *)*v40;
          }
          while ( v39 != v40 );
        }
        v44 = (__int64 *)v40[1];
        v19 = (_QWORD *)(v8 + 16);
        if ( (_QWORD *)*v44 == v40 )
        {
          *v19 = v40;
          *(_QWORD *)(v8 + 24) = v44;
          *v44 = (__int64)v19;
          v40[1] = v19;
        }
        else
        {
          RtlpLogHeapFailure(12, 0, (_DWORD)v40, 0, *v44);
        }
        *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
        v20 = *(__int64 **)(a1 + 312);
        if ( v20 )
        {
          v21 = *(unsigned __int16 *)(v8 + 8);
          for ( m = *((unsigned int *)v20 + 2); v21 >= m; m = *((unsigned int *)v46 + 2) )
          {
            v46 = (__int64 *)*v20;
            if ( !*v20 )
              goto LABEL_26;
            v20 = (__int64 *)*v20;
          }
          goto LABEL_20;
        }
LABEL_22:
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v8 + 11) = *(_BYTE *)(v8 + 8) ^ *(_BYTE *)(v8 + 9) ^ *(_BYTE *)(v8 + 10);
          *(_DWORD *)(v8 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        return 1;
      }
      *(_BYTE *)(v8 + 10) &= 0xF0u;
      if ( (*(_DWORD *)(a1 + 112) & 0x40) != 0 )
      {
        v27 = v8 + 32;
        v47 = (16 * (unsigned __int64)(unsigned __int16)v38 - 32) >> 2;
        if ( v47 )
        {
          if ( (v27 & 4) != 0 )
          {
            *(_DWORD *)v27 = -17891602;
            if ( --v47 )
            {
              v27 = v8 + 36;
              goto LABEL_81;
            }
          }
          else
          {
LABEL_81:
            memset64((void *)v27, 0xFEEEFEEEFEEEFEEEuLL, v47 >> 1);
            if ( (v47 & 1) != 0 )
              *(_DWORD *)(v27 + 4 * v47 - 4) = -17891602;
          }
        }
        *(_BYTE *)(v8 + 10) |= 4u;
      }
      v48 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        v49 = (_QWORD *)RtlpFindEntry(a1, (unsigned __int16)v38, v27, v29);
      else
        v49 = (_QWORD *)*v48;
      if ( v48 != v49 )
      {
        v50 = *(_DWORD *)(a1 + 124);
        do
        {
          if ( v50 )
          {
            v51 = *((_DWORD *)v49 - 2);
            v50 = *(_DWORD *)(a1 + 124);
            LOWORD(v70) = v51;
            if ( (v50 & v51) != 0 )
              v70 = *(_DWORD *)(a1 + 136) ^ v51;
            v52 = v70;
          }
          else
          {
            v52 = *((_WORD *)v49 - 4);
          }
          if ( (unsigned __int16)v38 <= (unsigned __int64)v52 )
            break;
          v49 = (_QWORD *)*v49;
        }
        while ( v48 != v49 );
      }
      v53 = (__int64 *)v49[1];
      v19 = (_QWORD *)(v8 + 16);
      if ( (_QWORD *)*v53 == v49 )
      {
        *v19 = v49;
        *(_QWORD *)(v8 + 24) = v53;
        *v53 = (__int64)v19;
        v49[1] = v19;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v49, 0, *v53);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v8 + 8);
      v20 = *(__int64 **)(a1 + 312);
      if ( !v20 )
        goto LABEL_22;
      v21 = *(unsigned __int16 *)(v8 + 8);
      for ( n = *((unsigned int *)v20 + 2); v21 >= n; n = *((unsigned int *)v55 + 2) )
      {
        v55 = (__int64 *)*v20;
        if ( !*v20 )
        {
LABEL_26:
          v23 = *((_DWORD *)v20 + 2) - 1;
          goto LABEL_21;
        }
        v20 = (__int64 *)*v20;
      }
LABEL_20:
      v23 = v21;
LABEL_21:
      RtlpHeapAddListEntry(a1, (_DWORD)v20, v23, (_DWORD)v19, v23, v21);
      goto LABEL_22;
    }
    RtlpLogHeapFailure(12, a1, v27, v29, *v26);
    if ( v9 )
      return 0;
    v9 = 1;
  }
}
