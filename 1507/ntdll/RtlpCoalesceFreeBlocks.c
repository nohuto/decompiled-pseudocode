/*
 * XREFs of RtlpCoalesceFreeBlocks @ 0x18007902C
 * Callers:
 *     RtlpCoalesceHeap @ 0x180078F24 (RtlpCoalesceHeap.c)
 * Callees:
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180095F60 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 */

unsigned __int64 __fastcall RtlpCoalesceFreeBlocks(_QWORD *BaseAddress, unsigned __int64 a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // r10
  unsigned __int64 v6; // r14
  unsigned __int64 v7; // rbx
  _QWORD *v9; // rdx
  unsigned __int64 v10; // rbx
  _QWORD *v12; // r8
  __int64 v13; // rax
  __int64 v14; // r9
  __int64 *v15; // rdi
  unsigned __int64 v16; // r12
  unsigned __int64 i; // rax
  __int64 *v18; // rax
  unsigned int v19; // ecx
  unsigned int v20; // r15d
  unsigned int v21; // eax
  __int64 v22; // r10
  unsigned int v23; // edx
  __int64 v24; // r9
  _QWORD *v25; // r11
  __int64 v26; // r13
  char v27; // al
  SIZE_T v28; // rdi
  SIZE_T v29; // r15
  _QWORD *v30; // r8
  __int64 v31; // rax
  __int64 v32; // r9
  __int64 *v33; // rdi
  unsigned __int64 v34; // r12
  unsigned __int64 j; // rax
  __int64 *v36; // rax
  unsigned int v37; // ecx
  unsigned int v38; // r15d
  unsigned int v39; // eax
  __int64 v40; // r10
  unsigned int v41; // edx
  __int64 v42; // r9
  _QWORD *v43; // r11
  __int64 v44; // r13
  char v45; // al
  SIZE_T v46; // rdi
  SIZE_T v47; // r14
  __int64 v48; // rax
  _QWORD *v49; // r8
  __int64 v50; // rax
  __int64 v51; // r9
  __int64 *v52; // rdi
  unsigned __int64 v53; // r12
  unsigned __int64 k; // rax
  __int64 *v55; // rax
  unsigned int v56; // ecx
  unsigned int v57; // r15d
  unsigned int v58; // eax
  __int64 v59; // r10
  unsigned int v60; // edx
  __int64 v61; // r11
  _QWORD *v62; // r9
  __int64 v63; // r13
  char v64; // al
  SIZE_T v65; // rdi
  SIZE_T v66; // r12
  _QWORD *v67; // r8
  __int64 v68; // rax
  __int64 v69; // r9
  __int64 *v70; // rdi
  unsigned __int64 v71; // r12
  unsigned __int64 m; // rax
  __int64 *v73; // rax
  unsigned int v74; // ecx
  unsigned int v75; // r15d
  unsigned int v76; // eax
  __int64 v77; // r10
  unsigned int v78; // edx
  __int64 v79; // r11
  _QWORD *v80; // r9
  __int64 v81; // r13
  char v82; // al
  SIZE_T v83; // rdi
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
  v5 = 16 * (*((unsigned __int16 *)BaseAddress + 70) ^ (unsigned __int64)*(unsigned __int16 *)(a2 + 12));
  v6 = a2;
  v7 = a2 - v5;
  if ( a2 - v5 == a2
    || ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)((*((_DWORD *)BaseAddress + 31) >> 20) & *((_BYTE *)BaseAddress + 138))) & 1) != 0 )
  {
    goto LABEL_3;
  }
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v7 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, a2 - v5);
  }
  if ( a4 )
  {
    v12 = (_QWORD *)(v6 + 16);
    v98 = *(_QWORD *)(v6 + 16);
    v85 = *(__int64 **)(v6 + 24);
    v13 = *v85;
    v14 = *(_QWORD *)(v98 + 8);
    if ( *v85 != v14 || (_QWORD *)v13 != v12 )
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v12, v14, v13, 0LL);
LABEL_54:
      v103 = 0;
      goto LABEL_55;
    }
    BaseAddress[24] -= *(unsigned __int16 *)(v6 + 8);
    v15 = (__int64 *)BaseAddress[39];
    if ( v15 )
    {
      v16 = *(unsigned __int16 *)(v6 + 8);
      for ( i = *((unsigned int *)v15 + 2); ; i = *((unsigned int *)v18 + 2) )
      {
        if ( v16 < i )
        {
          v19 = *(unsigned __int16 *)(v6 + 8);
          goto LABEL_22;
        }
        v18 = (__int64 *)*v15;
        if ( !*v15 )
          break;
        v15 = (__int64 *)*v15;
      }
      v19 = *((_DWORD *)v15 + 2) - 1;
LABEL_22:
      v20 = v19 - *((_DWORD *)v15 + 6);
      v21 = 2 * v20;
      if ( !*((_DWORD *)v15 + 3) )
        v21 = v19 - *((_DWORD *)v15 + 6);
      v22 = v15[6];
      v23 = *((_DWORD *)v15 + 2);
      v24 = v21;
      v94 = v21;
      v25 = *(_QWORD **)(v22 + 8LL * v21);
      --*((_DWORD *)v15 + 4);
      if ( v19 == v23 - 1 )
        --*((_DWORD *)v15 + 5);
      if ( v25 == v12 )
      {
        if ( !*v15 )
          --v23;
        if ( v19 >= v23 )
        {
          if ( *v12 != v15[4] )
          {
            *(_QWORD *)(v22 + 8LL * v21) = *v12;
            goto LABEL_41;
          }
          *(_QWORD *)(v22 + 8LL * v21) = 0LL;
        }
        else
        {
          v26 = *v12;
          if ( *v12 != v15[4] )
          {
            v89 = *(_DWORD *)(v26 - 16 + 8);
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v89 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v26 - 16 + 8);
              if ( HIBYTE(v89) != (BYTE2(v89) ^ (unsigned __int8)(BYTE1(v89) ^ v89)) )
              {
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v26 - 16, 0, 0LL, 0LL);
                v24 = v94;
              }
            }
            if ( (_DWORD)v16 == (unsigned __int16)v89 )
            {
              *(_QWORD *)(v15[6] + 8 * v24) = v26;
              goto LABEL_41;
            }
          }
          *(_QWORD *)(v15[6] + 8 * v24) = 0LL;
        }
        *(_DWORD *)(v15[5] + 4LL * (v20 >> 5)) &= ~(1 << (v20 & 0x1F));
      }
    }
LABEL_41:
    *v85 = v98;
    *(_QWORD *)(v98 + 8) = v85;
    if ( (*(_BYTE *)(v6 + 10) & 8) == 0 || RtlpCommitBlock(BaseAddress, v6) )
    {
      v27 = *(_BYTE *)(v6 + 10);
      if ( (v27 & 4) != 0 )
      {
        v28 = 16LL * *(unsigned __int16 *)(v6 + 8) - 32;
        if ( (v27 & 2) != 0 && v28 > 4 )
          v28 = 16LL * *(unsigned __int16 *)(v6 + 8) - 36;
        v29 = RtlCompareMemoryUlong((PVOID)(v6 + 32), v28, 0xFEEEFEEE);
        if ( v29 != v28 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v6,
            (const void *)(v29 + v6 + 32));
          RtlpBreakPointHeap(v6);
        }
      }
    }
    else
    {
      RtlpDeCommitFreeBlock(BaseAddress, v6, *(unsigned __int16 *)(v6 + 8), 1);
    }
    goto LABEL_54;
  }
LABEL_55:
  v30 = (_QWORD *)(v7 + 16);
  v99 = *(_QWORD *)(v7 + 16);
  v86 = *(__int64 **)(v7 + 24);
  v31 = *v86;
  v32 = *(_QWORD *)(v99 + 8);
  if ( *v86 != v32 || (_QWORD *)v31 != v30 )
  {
    RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v30, v32, v31, 0LL);
    goto LABEL_3;
  }
  BaseAddress[24] -= *(unsigned __int16 *)(v7 + 8);
  v33 = (__int64 *)BaseAddress[39];
  if ( v33 )
  {
    v34 = *(unsigned __int16 *)(v7 + 8);
    for ( j = *((unsigned int *)v33 + 2); ; j = *((unsigned int *)v36 + 2) )
    {
      if ( v34 < j )
      {
        v37 = *(unsigned __int16 *)(v7 + 8);
        goto LABEL_64;
      }
      v36 = (__int64 *)*v33;
      if ( !*v33 )
        break;
      v33 = (__int64 *)*v33;
    }
    v37 = *((_DWORD *)v33 + 2) - 1;
LABEL_64:
    v38 = v37 - *((_DWORD *)v33 + 6);
    v39 = 2 * v38;
    if ( !*((_DWORD *)v33 + 3) )
      v39 = v37 - *((_DWORD *)v33 + 6);
    v40 = v33[6];
    v41 = *((_DWORD *)v33 + 2);
    v42 = v39;
    v95 = v39;
    v43 = *(_QWORD **)(v40 + 8LL * v39);
    --*((_DWORD *)v33 + 4);
    if ( v37 == v41 - 1 )
      --*((_DWORD *)v33 + 5);
    if ( v43 == v30 )
    {
      if ( !*v33 )
        --v41;
      if ( v37 >= v41 )
      {
        if ( *v30 != v33[4] )
        {
          *(_QWORD *)(v40 + 8LL * v39) = *v30;
          goto LABEL_83;
        }
        *(_QWORD *)(v40 + 8LL * v39) = 0LL;
      }
      else
      {
        v44 = *v30;
        if ( *v30 != v33[4] )
        {
          v90 = *(_DWORD *)(v44 - 16 + 8);
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v90 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v44 - 16 + 8);
            if ( HIBYTE(v90) != (BYTE2(v90) ^ (unsigned __int8)(BYTE1(v90) ^ v90)) )
            {
              RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v44 - 16, 0, 0LL, 0LL);
              v42 = v95;
            }
          }
          if ( (_DWORD)v34 == (unsigned __int16)v90 )
          {
            *(_QWORD *)(v33[6] + 8 * v42) = v44;
            goto LABEL_83;
          }
        }
        *(_QWORD *)(v33[6] + 8 * v42) = 0LL;
      }
      *(_DWORD *)(v33[5] + 4LL * (v38 >> 5)) &= ~(1 << (v38 & 0x1F));
    }
  }
LABEL_83:
  *v86 = v99;
  *(_QWORD *)(v99 + 8) = v86;
  if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || RtlpCommitBlock(BaseAddress, v7) )
  {
    v45 = *(_BYTE *)(v7 + 10);
    if ( (v45 & 4) != 0 )
    {
      v46 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
      if ( (v45 & 2) != 0 && v46 > 4 )
        v46 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
      v47 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v46, 0xFEEEFEEE);
      if ( v47 != v46 )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v7,
          (const void *)(v47 + v7 + 32));
        RtlpBreakPointHeap(v7);
      }
    }
    v48 = *(unsigned __int16 *)(v7 + 8);
    v6 = v7;
    v9 = a3;
    *(_BYTE *)(v7 + 10) = 0;
    *(_BYTE *)(v7 + 15) = 0;
    *a3 += v48;
    *(_WORD *)(v7 + 8) = *(_WORD *)a3;
    *(_WORD *)(v7 + 16LL * *a3 + 12) = *((_WORD *)BaseAddress + 70) ^ *(_WORD *)a3;
    goto LABEL_4;
  }
  RtlpDeCommitFreeBlock(BaseAddress, v7, *(unsigned __int16 *)(v7 + 8), 1);
LABEL_3:
  v9 = a3;
LABEL_4:
  v10 = v6 + 16LL * *v9;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v91 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v10 + 8);
    if ( HIBYTE(v91) != (BYTE2(v91) ^ (unsigned __int8)(BYTE1(v91) ^ v91)) )
      RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v10, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v10 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) == 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v10 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v10 + 11) != (*(_BYTE *)(v10 + 8) ^ (unsigned __int8)(*(_BYTE *)(v10 + 9) ^ *(_BYTE *)(v10 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v10);
    }
    if ( !v103 )
      goto LABEL_144;
    v49 = (_QWORD *)(v6 + 16);
    v100 = *(_QWORD *)(v6 + 16);
    v87 = *(__int64 **)(v6 + 24);
    v50 = *v87;
    v51 = *(_QWORD *)(v100 + 8);
    if ( *v87 == v51 && (_QWORD *)v50 == v49 )
    {
      BaseAddress[24] -= *(unsigned __int16 *)(v6 + 8);
      v52 = (__int64 *)BaseAddress[39];
      if ( !v52 )
        goto LABEL_130;
      v53 = *(unsigned __int16 *)(v6 + 8);
      for ( k = *((unsigned int *)v52 + 2); ; k = *((unsigned int *)v55 + 2) )
      {
        if ( v53 < k )
        {
          v56 = *(unsigned __int16 *)(v6 + 8);
          goto LABEL_111;
        }
        v55 = (__int64 *)*v52;
        if ( !*v52 )
          break;
        v52 = (__int64 *)*v52;
      }
      v56 = *((_DWORD *)v52 + 2) - 1;
LABEL_111:
      v57 = v56 - *((_DWORD *)v52 + 6);
      v58 = 2 * v57;
      if ( !*((_DWORD *)v52 + 3) )
        v58 = v56 - *((_DWORD *)v52 + 6);
      v59 = v52[6];
      v60 = *((_DWORD *)v52 + 2);
      v61 = v58;
      v96 = v58;
      v62 = *(_QWORD **)(v59 + 8LL * v58);
      --*((_DWORD *)v52 + 4);
      if ( v56 == v60 - 1 )
        --*((_DWORD *)v52 + 5);
      if ( v62 != v49 )
        goto LABEL_130;
      if ( !*v52 )
        --v60;
      if ( v56 >= v60 )
      {
        if ( *v49 != v52[4] )
        {
          *(_QWORD *)(v59 + 8LL * v58) = *v49;
          goto LABEL_130;
        }
        *(_QWORD *)(v59 + 8LL * v58) = 0LL;
      }
      else
      {
        v63 = *v49;
        if ( *v49 != v52[4] )
        {
          v92 = *(_DWORD *)(v63 - 16 + 8);
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            v92 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v63 - 16 + 8);
            if ( HIBYTE(v92) != ((unsigned __int8)v92 ^ (unsigned __int8)(BYTE1(v92) ^ BYTE2(v92))) )
            {
              RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v63 - 16, 0, 0LL, 0LL);
              v61 = v96;
            }
          }
          if ( (_DWORD)v53 == (unsigned __int16)v92 )
          {
            *(_QWORD *)(v52[6] + 8 * v61) = v63;
LABEL_130:
            *v87 = v100;
            *(_QWORD *)(v100 + 8) = v87;
            if ( (*(_BYTE *)(v6 + 10) & 8) == 0 || RtlpCommitBlock(BaseAddress, v6) )
            {
              v64 = *(_BYTE *)(v6 + 10);
              if ( (v64 & 4) != 0 )
              {
                v65 = 16LL * *(unsigned __int16 *)(v6 + 8) - 32;
                if ( (v64 & 2) != 0 && v65 > 4 )
                  v65 = 16LL * *(unsigned __int16 *)(v6 + 8) - 36;
                v66 = RtlCompareMemoryUlong((PVOID)(v6 + 32), v65, 0xFEEEFEEE);
                if ( v66 != v65 )
                {
                  if ( NtCurrentPeb()->Ldr )
                    DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
                  else
                    DbgPrint("HEAP: ");
                  DbgPrint(
                    "HEAP: Free Heap block %p modified at %p after it was freed\n",
                    (const void *)v6,
                    (const void *)(v6 + 32 + v66));
                  RtlpBreakPointHeap(v6);
                }
              }
            }
            else
            {
              RtlpDeCommitFreeBlock(BaseAddress, v6, *(unsigned __int16 *)(v6 + 8), 1);
            }
            goto LABEL_143;
          }
        }
        *(_QWORD *)(v52[6] + 8 * v61) = 0LL;
      }
      *(_DWORD *)(v52[5] + 4LL * (v57 >> 5)) &= ~(1 << (v57 & 0x1F));
      goto LABEL_130;
    }
    RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v49, v51, v50, 0LL);
LABEL_143:
    v103 = 0;
LABEL_144:
    v67 = (_QWORD *)(v10 + 16);
    v101 = *(_QWORD *)(v10 + 16);
    v88 = *(__int64 **)(v10 + 24);
    v68 = *v88;
    v69 = *(_QWORD *)(v101 + 8);
    if ( *v88 == v69 && (_QWORD *)v68 == v67 )
    {
      BaseAddress[24] -= *(unsigned __int16 *)(v10 + 8);
      v70 = (__int64 *)BaseAddress[39];
      if ( v70 )
      {
        v71 = *(unsigned __int16 *)(v10 + 8);
        for ( m = *((unsigned int *)v70 + 2); ; m = *((unsigned int *)v73 + 2) )
        {
          if ( v71 < m )
          {
            v74 = *(unsigned __int16 *)(v10 + 8);
            goto LABEL_153;
          }
          v73 = (__int64 *)*v70;
          if ( !*v70 )
            break;
          v70 = (__int64 *)*v70;
        }
        v74 = *((_DWORD *)v70 + 2) - 1;
LABEL_153:
        v75 = v74 - *((_DWORD *)v70 + 6);
        v76 = 2 * v75;
        if ( !*((_DWORD *)v70 + 3) )
          v76 = v74 - *((_DWORD *)v70 + 6);
        v77 = v70[6];
        v78 = *((_DWORD *)v70 + 2);
        v79 = v76;
        v97 = v76;
        v80 = *(_QWORD **)(v77 + 8LL * v76);
        --*((_DWORD *)v70 + 4);
        if ( v74 == v78 - 1 )
          --*((_DWORD *)v70 + 5);
        if ( v80 == v67 )
        {
          if ( !*v70 )
            --v78;
          if ( v74 >= v78 )
          {
            if ( *v67 == v70[4] )
            {
              *(_QWORD *)(v77 + 8LL * v76) = 0LL;
              goto LABEL_171;
            }
            *(_QWORD *)(v77 + 8LL * v76) = *v67;
          }
          else
          {
            v81 = *v67;
            if ( *v67 == v70[4] )
              goto LABEL_167;
            v93 = *(_DWORD *)(v81 - 16 + 8);
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v93 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v81 - 16 + 8);
              if ( HIBYTE(v93) != ((unsigned __int8)v93 ^ (unsigned __int8)(BYTE1(v93) ^ BYTE2(v93))) )
              {
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v81 - 16, 0, 0LL, 0LL);
                v79 = v97;
              }
            }
            if ( (_DWORD)v71 != (unsigned __int16)v93 )
            {
LABEL_167:
              *(_QWORD *)(v70[6] + 8 * v79) = 0LL;
LABEL_171:
              *(_DWORD *)(v70[5] + 4LL * (v75 >> 5)) &= ~(1 << (v75 & 0x1F));
              goto LABEL_172;
            }
            *(_QWORD *)(v70[6] + 8 * v79) = v81;
          }
        }
      }
LABEL_172:
      *v88 = v101;
      *(_QWORD *)(v101 + 8) = v88;
      if ( (*(_BYTE *)(v10 + 10) & 8) == 0 || RtlpCommitBlock(BaseAddress, v10) )
      {
        v82 = *(_BYTE *)(v10 + 10);
        if ( (v82 & 4) != 0 )
        {
          v83 = 16LL * *(unsigned __int16 *)(v10 + 8) - 32;
          if ( (v82 & 2) != 0 && v83 > 4 )
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
            RtlpBreakPointHeap(v10);
          }
        }
        *(_BYTE *)(v6 + 10) = 0;
        *(_BYTE *)(v6 + 15) = 0;
        *a3 += *(unsigned __int16 *)(v10 + 8);
        *(_WORD *)(v6 + 8) = *(_WORD *)a3;
        *(_WORD *)(v6 + 16LL * *a3 + 12) = *((_WORD *)BaseAddress + 70) ^ *(_WORD *)a3;
        return v6;
      }
      RtlpDeCommitFreeBlock(BaseAddress, v10, *(unsigned __int16 *)(v10 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v67, v69, v68, 0LL);
    }
  }
  return v6;
}
