/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x18004B49C
 * Callers:
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 *     RtlpCoalesceHeap @ 0x180090B34 (RtlpCoalesceHeap.c)
 * Callees:
 *     RtlpCommitBlock @ 0x180028B24 (RtlpCommitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800AA730 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpCoalesceFreeBlocks(__int64 a1, __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // r10
  __int64 v6; // r14
  __int64 v7; // rbx
  _QWORD *v9; // rdi
  __int64 v10; // rdi
  _QWORD *v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 *v15; // rbx
  unsigned __int64 v16; // r12
  unsigned __int64 m; // rax
  __int64 *v18; // rax
  unsigned int v19; // ecx
  _QWORD *v20; // r8
  __int64 v21; // rax
  __int64 v22; // r9
  __int64 *v23; // rdi
  unsigned __int64 v24; // r12
  unsigned __int64 j; // rax
  unsigned int v26; // ecx
  unsigned int v27; // r15d
  unsigned int v28; // eax
  __int64 v29; // r10
  unsigned int v30; // edx
  __int64 v31; // r9
  _QWORD *v32; // r11
  __int64 v33; // r13
  char v34; // al
  __int64 v35; // rax
  __int64 *v36; // rax
  unsigned int v37; // r15d
  unsigned int v38; // eax
  __int64 v39; // r10
  unsigned int v40; // edx
  __int64 v41; // r11
  _QWORD *v42; // r9
  __int64 v43; // r13
  char v44; // al
  _QWORD *v45; // r8
  __int64 v46; // rax
  __int64 v47; // r9
  __int64 *v48; // rdi
  unsigned __int64 v49; // r12
  unsigned __int64 i; // rax
  __int64 *v51; // rax
  unsigned int v52; // ecx
  unsigned int v53; // r15d
  unsigned int v54; // eax
  __int64 v55; // r10
  unsigned int v56; // edx
  __int64 v57; // r9
  _QWORD *v58; // r11
  __int64 v59; // r13
  char v60; // al
  SIZE_T v61; // rdi
  SIZE_T v62; // r15
  SIZE_T v63; // rdi
  SIZE_T v64; // r14
  _QWORD *v65; // r8
  __int64 v66; // rax
  __int64 v67; // r9
  __int64 *v68; // rbx
  unsigned __int64 v69; // r12
  unsigned __int64 k; // rax
  __int64 *v71; // rax
  unsigned int v72; // ecx
  unsigned int v73; // r15d
  unsigned int v74; // eax
  __int64 v75; // r10
  unsigned int v76; // edx
  __int64 v77; // r11
  _QWORD *v78; // r9
  __int64 v79; // r13
  char v80; // al
  SIZE_T v81; // rbx
  SIZE_T v82; // r12
  SIZE_T v83; // rbx
  SIZE_T v84; // r12
  __int64 *v85; // [rsp+30h] [rbp-49h]
  __int64 *v86; // [rsp+30h] [rbp-49h]
  __int64 *v87; // [rsp+30h] [rbp-49h]
  __int64 *v88; // [rsp+30h] [rbp-49h]
  int v89; // [rsp+40h] [rbp-39h]
  int v90; // [rsp+50h] [rbp-29h]
  int v91; // [rsp+60h] [rbp-19h]
  int v92; // [rsp+70h] [rbp-9h]
  int v93; // [rsp+80h] [rbp+7h]
  __int64 v94; // [rsp+E0h] [rbp+67h]
  __int64 v95; // [rsp+E0h] [rbp+67h]
  __int64 v96; // [rsp+E0h] [rbp+67h]
  __int64 v97; // [rsp+E0h] [rbp+67h]
  __int64 v98; // [rsp+E8h] [rbp+6Fh]
  __int64 v99; // [rsp+E8h] [rbp+6Fh]
  __int64 v100; // [rsp+E8h] [rbp+6Fh]
  __int64 v101; // [rsp+E8h] [rbp+6Fh]
  char v103; // [rsp+F8h] [rbp+7Fh]

  v103 = a4;
  v5 = 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v6 = a2;
  v7 = a2 - v5;
  if ( a2 - v5 == a2
    || ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)((*(_DWORD *)(a1 + 124) >> 20) & *(_BYTE *)(a1 + 138))) & 1) != 0 )
  {
    goto LABEL_3;
  }
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
      RtlpAnalyzeHeapFailure(a1, a2 - v5);
  }
  if ( a4 )
  {
    v45 = (_QWORD *)(v6 + 16);
    v100 = *(_QWORD *)(v6 + 16);
    v87 = *(__int64 **)(v6 + 24);
    v46 = *v87;
    v47 = *(_QWORD *)(v100 + 8);
    if ( *v87 != v47 || (_QWORD *)v46 != v45 )
    {
      RtlpLogHeapFailure(12, a1, (_DWORD)v45, v47, v46, 0LL);
LABEL_124:
      v103 = 0;
      goto LABEL_24;
    }
    *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v6 + 8);
    v48 = *(__int64 **)(a1 + 312);
    if ( v48 )
    {
      v49 = *(unsigned __int16 *)(v6 + 8);
      for ( i = *((unsigned int *)v48 + 2); ; i = *((unsigned int *)v51 + 2) )
      {
        if ( v49 < i )
        {
          v52 = *(unsigned __int16 *)(v6 + 8);
          goto LABEL_92;
        }
        v51 = (__int64 *)*v48;
        if ( !*v48 )
          break;
        v48 = (__int64 *)*v48;
      }
      v52 = *((_DWORD *)v48 + 2) - 1;
LABEL_92:
      v53 = v52 - *((_DWORD *)v48 + 6);
      v54 = 2 * v53;
      if ( !*((_DWORD *)v48 + 3) )
        v54 = v52 - *((_DWORD *)v48 + 6);
      v55 = v48[6];
      v56 = *((_DWORD *)v48 + 2);
      v57 = v54;
      v96 = v54;
      v58 = *(_QWORD **)(v55 + 8LL * v54);
      --*((_DWORD *)v48 + 4);
      if ( v52 == v56 - 1 )
        --*((_DWORD *)v48 + 5);
      if ( v58 == v45 )
      {
        if ( !*v48 )
          --v56;
        if ( v52 >= v56 )
        {
          if ( *v45 != v48[4] )
          {
            *(_QWORD *)(v55 + 8LL * v54) = *v45;
            goto LABEL_111;
          }
          *(_QWORD *)(v55 + 8LL * v54) = 0LL;
        }
        else
        {
          v59 = *v45;
          if ( *v45 != v48[4] )
          {
            v89 = *(_DWORD *)(v59 - 16 + 8);
            if ( *(_DWORD *)(a1 + 124) )
            {
              v89 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v59 - 16 + 8);
              if ( HIBYTE(v89) != (BYTE2(v89) ^ (unsigned __int8)(BYTE1(v89) ^ v89)) )
              {
                RtlpLogHeapFailure(3, a1, v59 - 16, 0, 0LL, 0LL);
                v57 = v96;
              }
            }
            if ( (_DWORD)v49 == (unsigned __int16)v89 )
            {
              *(_QWORD *)(v48[6] + 8 * v57) = v59;
              goto LABEL_111;
            }
          }
          *(_QWORD *)(v48[6] + 8 * v57) = 0LL;
        }
        *(_DWORD *)(v48[5] + 4LL * (v53 >> 5)) &= ~(1 << (v53 & 0x1F));
      }
    }
LABEL_111:
    *v87 = v100;
    *(_QWORD *)(v100 + 8) = v87;
    if ( (*(_BYTE *)(v6 + 10) & 8) == 0 || RtlpCommitBlock((PVOID)a1, v6) )
    {
      v60 = *(_BYTE *)(v6 + 10);
      if ( (v60 & 4) != 0 )
      {
        v61 = 16LL * *(unsigned __int16 *)(v6 + 8) - 32;
        if ( (v60 & 2) != 0 && v61 > 4 )
          v61 = 16LL * *(unsigned __int16 *)(v6 + 8) - 36;
        v62 = RtlCompareMemoryUlong((PVOID)(v6 + 32), v61, 0xFEEEFEEE);
        if ( v62 != v61 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v6,
            (const void *)(v62 + v6 + 32));
          RtlpBreakPointHeap();
        }
      }
    }
    else
    {
      RtlpDeCommitFreeBlock(a1, v6, *(unsigned __int16 *)(v6 + 8), 1);
    }
    goto LABEL_124;
  }
LABEL_24:
  v20 = (_QWORD *)(v7 + 16);
  v99 = *(_QWORD *)(v7 + 16);
  v86 = *(__int64 **)(v7 + 24);
  v21 = *v86;
  v22 = *(_QWORD *)(v99 + 8);
  if ( *v86 != v22 || (_QWORD *)v21 != v20 )
  {
    RtlpLogHeapFailure(12, a1, (_DWORD)v20, v22, v21, 0LL);
    goto LABEL_3;
  }
  *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
  v23 = *(__int64 **)(a1 + 312);
  if ( v23 )
  {
    v24 = *(unsigned __int16 *)(v7 + 8);
    for ( j = *((unsigned int *)v23 + 2); ; j = *((unsigned int *)v36 + 2) )
    {
      if ( v24 < j )
      {
        v26 = *(unsigned __int16 *)(v7 + 8);
        goto LABEL_30;
      }
      v36 = (__int64 *)*v23;
      if ( !*v23 )
        break;
      v23 = (__int64 *)*v23;
    }
    v26 = *((_DWORD *)v23 + 2) - 1;
LABEL_30:
    v27 = v26 - *((_DWORD *)v23 + 6);
    v28 = 2 * v27;
    if ( !*((_DWORD *)v23 + 3) )
      v28 = v26 - *((_DWORD *)v23 + 6);
    v29 = v23[6];
    v30 = *((_DWORD *)v23 + 2);
    v31 = v28;
    v94 = v28;
    v32 = *(_QWORD **)(v29 + 8LL * v28);
    --*((_DWORD *)v23 + 4);
    if ( v26 == v30 - 1 )
      --*((_DWORD *)v23 + 5);
    if ( v32 == v20 )
    {
      if ( !*v23 )
        --v30;
      if ( v26 >= v30 )
      {
        if ( *v20 == v23[4] )
        {
          *(_QWORD *)(v29 + 8LL * v28) = 0LL;
          goto LABEL_44;
        }
        *(_QWORD *)(v29 + 8LL * v28) = *v20;
      }
      else
      {
        v33 = *v20;
        if ( *v20 == v23[4] )
          goto LABEL_43;
        v90 = *(_DWORD *)(v33 - 16 + 8);
        if ( *(_DWORD *)(a1 + 124) )
        {
          v90 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v33 - 16 + 8);
          if ( HIBYTE(v90) != ((unsigned __int8)v90 ^ (unsigned __int8)(BYTE2(v90) ^ BYTE1(v90))) )
          {
            RtlpLogHeapFailure(3, a1, v33 - 16, 0, 0LL, 0LL);
            v31 = v94;
          }
        }
        if ( (_DWORD)v24 != (unsigned __int16)v90 )
        {
LABEL_43:
          *(_QWORD *)(v23[6] + 8 * v31) = 0LL;
LABEL_44:
          *(_DWORD *)(v23[5] + 4LL * (v27 >> 5)) &= ~(1 << (v27 & 0x1F));
          goto LABEL_45;
        }
        *(_QWORD *)(v23[6] + 8 * v31) = v33;
      }
    }
  }
LABEL_45:
  *v86 = v99;
  *(_QWORD *)(v99 + 8) = v86;
  if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || RtlpCommitBlock((PVOID)a1, v7) )
  {
    v34 = *(_BYTE *)(v7 + 10);
    if ( (v34 & 4) != 0 )
    {
      v63 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
      if ( (v34 & 2) != 0 && v63 > 4 )
        v63 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
      v64 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v63, 0xFEEEFEEE);
      if ( v64 != v63 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v7,
          (const void *)(v64 + v7 + 32));
        RtlpBreakPointHeap();
      }
    }
    v35 = *(unsigned __int16 *)(v7 + 8);
    v6 = v7;
    v9 = a3;
    *(_BYTE *)(v7 + 10) = 0;
    *(_BYTE *)(v7 + 15) = 0;
    *a3 += v35;
    *(_WORD *)(v7 + 8) = *(_WORD *)a3;
    *(_WORD *)(v7 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
    goto LABEL_4;
  }
  RtlpDeCommitFreeBlock(a1, v7, *(unsigned __int16 *)(v7 + 8), 1);
LABEL_3:
  v9 = a3;
LABEL_4:
  v10 = v6 + 16LL * *v9;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v91 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v10 + 8);
    if ( HIBYTE(v91) != (BYTE2(v91) ^ (unsigned __int8)(BYTE1(v91) ^ v91)) )
      RtlpLogHeapFailure(3, a1, v10, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v10 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v10);
    }
    if ( !v103 )
      goto LABEL_13;
    v65 = (_QWORD *)(v6 + 16);
    v101 = *(_QWORD *)(v6 + 16);
    v88 = *(__int64 **)(v6 + 24);
    v66 = *v88;
    v67 = *(_QWORD *)(v101 + 8);
    if ( *v88 == v67 && (_QWORD *)v66 == v65 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v6 + 8);
      v68 = *(__int64 **)(a1 + 312);
      if ( !v68 )
        goto LABEL_163;
      v69 = *(unsigned __int16 *)(v6 + 8);
      for ( k = *((unsigned int *)v68 + 2); ; k = *((unsigned int *)v71 + 2) )
      {
        if ( v69 < k )
        {
          v72 = *(unsigned __int16 *)(v6 + 8);
          goto LABEL_144;
        }
        v71 = (__int64 *)*v68;
        if ( !*v68 )
          break;
        v68 = (__int64 *)*v68;
      }
      v72 = *((_DWORD *)v68 + 2) - 1;
LABEL_144:
      v73 = v72 - *((_DWORD *)v68 + 6);
      v74 = 2 * v73;
      if ( !*((_DWORD *)v68 + 3) )
        v74 = v72 - *((_DWORD *)v68 + 6);
      v75 = v68[6];
      v76 = *((_DWORD *)v68 + 2);
      v77 = v74;
      v97 = v74;
      v78 = *(_QWORD **)(v75 + 8LL * v74);
      --*((_DWORD *)v68 + 4);
      if ( v72 == v76 - 1 )
        --*((_DWORD *)v68 + 5);
      if ( v78 != v65 )
        goto LABEL_163;
      if ( !*v68 )
        --v76;
      if ( v72 >= v76 )
      {
        if ( *v65 != v68[4] )
        {
          *(_QWORD *)(v75 + 8LL * v74) = *v65;
          goto LABEL_163;
        }
        *(_QWORD *)(v75 + 8LL * v74) = 0LL;
      }
      else
      {
        v79 = *v65;
        if ( *v65 != v68[4] )
        {
          v92 = *(_DWORD *)(v79 - 16 + 8);
          if ( *(_DWORD *)(a1 + 124) )
          {
            v92 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v79 - 16 + 8);
            if ( HIBYTE(v92) != ((unsigned __int8)v92 ^ (unsigned __int8)(BYTE1(v92) ^ BYTE2(v92))) )
            {
              RtlpLogHeapFailure(3, a1, v79 - 16, 0, 0LL, 0LL);
              v77 = v97;
            }
          }
          if ( (_DWORD)v69 == (unsigned __int16)v92 )
          {
            *(_QWORD *)(v68[6] + 8 * v77) = v79;
LABEL_163:
            *v88 = v101;
            *(_QWORD *)(v101 + 8) = v88;
            if ( (*(_BYTE *)(v6 + 10) & 8) == 0 || RtlpCommitBlock((PVOID)a1, v6) )
            {
              v80 = *(_BYTE *)(v6 + 10);
              if ( (v80 & 4) != 0 )
              {
                v81 = 16LL * *(unsigned __int16 *)(v6 + 8) - 32;
                if ( (v80 & 2) != 0 && v81 > 4 )
                  v81 = 16LL * *(unsigned __int16 *)(v6 + 8) - 36;
                v82 = RtlCompareMemoryUlong((PVOID)(v6 + 32), v81, 0xFEEEFEEE);
                if ( v82 != v81 )
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint(
                    "HEAP: Free Heap block %p modified at %p after it was freed\n",
                    (const void *)v6,
                    (const void *)(v6 + 32 + v82));
                  RtlpBreakPointHeap();
                }
              }
            }
            else
            {
              RtlpDeCommitFreeBlock(a1, v6, *(unsigned __int16 *)(v6 + 8), 1);
            }
            goto LABEL_176;
          }
        }
        *(_QWORD *)(v68[6] + 8 * v77) = 0LL;
      }
      *(_DWORD *)(v68[5] + 4LL * (v73 >> 5)) &= ~(1 << (v73 & 0x1F));
      goto LABEL_163;
    }
    RtlpLogHeapFailure(12, a1, (_DWORD)v65, v67, v66, 0LL);
LABEL_176:
    v103 = 0;
LABEL_13:
    v12 = (_QWORD *)(v10 + 16);
    v98 = *(_QWORD *)(v10 + 16);
    v85 = *(__int64 **)(v10 + 24);
    v13 = *v85;
    v14 = *(_QWORD *)(v98 + 8);
    if ( *v85 == v14 && (_QWORD *)v13 == v12 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v10 + 8);
      v15 = *(__int64 **)(a1 + 312);
      if ( v15 )
      {
        v16 = *(unsigned __int16 *)(v10 + 8);
        for ( m = *((unsigned int *)v15 + 2); v16 >= m; m = *((unsigned int *)v18 + 2) )
        {
          v18 = (__int64 *)*v15;
          if ( !*v15 )
          {
            v19 = *((_DWORD *)v15 + 2) - 1;
            goto LABEL_55;
          }
          v15 = (__int64 *)*v15;
        }
        v19 = *(unsigned __int16 *)(v10 + 8);
LABEL_55:
        v37 = v19 - *((_DWORD *)v15 + 6);
        v38 = 2 * v37;
        if ( !*((_DWORD *)v15 + 3) )
          v38 = v19 - *((_DWORD *)v15 + 6);
        v39 = v15[6];
        v40 = *((_DWORD *)v15 + 2);
        v41 = v38;
        v95 = v38;
        v42 = *(_QWORD **)(v39 + 8LL * v38);
        --*((_DWORD *)v15 + 4);
        if ( v19 == v40 - 1 )
          --*((_DWORD *)v15 + 5);
        if ( v42 == v12 )
        {
          if ( !*v15 )
            --v40;
          if ( v19 >= v40 )
          {
            if ( *v12 != v15[4] )
            {
              *(_QWORD *)(v39 + 8LL * v38) = *v12;
              goto LABEL_72;
            }
            *(_QWORD *)(v39 + 8LL * v38) = 0LL;
          }
          else
          {
            v43 = *v12;
            if ( *v12 != v15[4] )
            {
              v93 = *(_DWORD *)(v43 - 16 + 8);
              if ( *(_DWORD *)(a1 + 124) )
              {
                v93 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v43 - 16 + 8);
                if ( HIBYTE(v93) != ((unsigned __int8)v93 ^ (unsigned __int8)(BYTE1(v93) ^ BYTE2(v93))) )
                {
                  RtlpLogHeapFailure(3, a1, v43 - 16, 0, 0LL, 0LL);
                  v41 = v95;
                }
              }
              if ( (_DWORD)v16 == (unsigned __int16)v93 )
              {
                *(_QWORD *)(v15[6] + 8 * v41) = v43;
                goto LABEL_72;
              }
            }
            *(_QWORD *)(v15[6] + 8 * v41) = 0LL;
          }
          *(_DWORD *)(v15[5] + 4LL * (v37 >> 5)) &= ~(1 << (v37 & 0x1F));
        }
      }
LABEL_72:
      *v85 = v98;
      *(_QWORD *)(v98 + 8) = v85;
      if ( (*(_BYTE *)(v10 + 10) & 8) == 0 || RtlpCommitBlock((PVOID)a1, v10) )
      {
        v44 = *(_BYTE *)(v10 + 10);
        if ( (v44 & 4) != 0 )
        {
          v83 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
          if ( (v44 & 2) != 0 && v83 > 4 )
            v83 = 16LL * *(unsigned __int16 *)(v10 + 8) - 36;
          v84 = RtlCompareMemoryUlong((PVOID)(v10 + 32), v83, 0xFEEEFEEE);
          if ( v84 != v83 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v10,
              (const void *)(v84 + v10 + 32));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v6 + 10) = 0;
        *(_BYTE *)(v6 + 15) = 0;
        *a3 += *(unsigned __int16 *)(v10 + 8);
        *(_WORD *)(v6 + 8) = *(_WORD *)a3;
        *(_WORD *)(v6 + 16LL * *a3 + 12) = *(_WORD *)(a1 + 140) ^ *(_WORD *)a3;
        return v6;
      }
      RtlpDeCommitFreeBlock(a1, v10, *(unsigned __int16 *)(v10 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(12, a1, (_DWORD)v12, v14, v13, 0LL);
    }
  }
  return v6;
}
