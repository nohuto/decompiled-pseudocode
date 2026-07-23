/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x180029048
 * Callers:
 *     RtlpGrowBlockInPlace @ 0x180006558 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x1800069E8 (RtlpCreateSplitBlock.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x18002C140 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 *     RtlpExtendHeap @ 0x1800334C0 (RtlpExtendHeap.c)
 *     RtlpCoalesceHeap @ 0x180078F24 (RtlpCoalesceHeap.c)
 *     RtlpCoalesceFreeBlocks @ 0x18007902C (RtlpCoalesceFreeBlocks.c)
 *     RtlZeroHeap @ 0x1800DCA00 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800EE1F8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpRemoveUCRBlock @ 0x18000423C (RtlpRemoveUCRBlock.c)
 *     RtlpCreateUCREntry @ 0x180007368 (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x1800074C4 (RtlpInsertUCRBlock.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180029B50 (RtlpInsertFreeBlock.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpCollectFreeBlocks @ 0x180037564 (RtlpCollectFreeBlocks.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180037718 (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180095F60 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800EEE50 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x1800EF6F8 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x1800EF828 (RtlpLogHeapDecommit.c)
 */

char __fastcall RtlpDeCommitFreeBlock(_QWORD *BaseAddress, unsigned __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r11
  __int64 v5; // rdi
  unsigned __int64 v6; // rsi
  _QWORD *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r9
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // rdi
  __int64 v14; // rax
  __int64 **v15; // r8
  __int64 v16; // rcx
  __int64 v17; // rax
  __int64 v18; // r9
  __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 v21; // rax
  unsigned int v22; // r9d
  bool v23; // zf
  unsigned int v24; // eax
  __int64 v25; // r10
  __int64 v26; // rax
  __int64 **v27; // r11
  unsigned int v28; // r10d
  __int64 *v29; // r8
  int v30; // edx
  unsigned __int8 v31; // al
  __int64 v32; // rsi
  unsigned __int64 v33; // r10
  unsigned __int64 v34; // rcx
  __int64 v35; // rax
  __int64 v36; // r8
  unsigned __int64 v37; // rax
  unsigned __int64 v38; // r8
  unsigned __int64 v39; // r9
  unsigned __int64 v40; // r9
  unsigned __int64 v41; // r9
  unsigned __int64 v42; // rdi
  _BYTE *v43; // rdi
  __int64 v44; // rax
  unsigned __int64 v45; // rax
  bool v46; // cc
  __int64 v47; // rdx
  __int64 v48; // rcx
  __int64 v49; // r8
  _QWORD *v50; // r8
  unsigned __int64 v51; // r11
  _QWORD *v52; // rcx
  __int64 v53; // rax
  int v54; // r8d
  char v55; // r9
  __int64 v56; // rax
  __int64 v57; // rax
  __int64 *v58; // rdi
  unsigned __int64 v59; // rax
  unsigned __int64 v60; // rax
  char v61; // dl
  _BYTE *v62; // rdi
  __int64 v63; // rax
  unsigned __int64 v64; // rax
  __int64 v65; // rdx
  __int64 v66; // rcx
  __int64 v67; // r8
  __int64 v68; // rdi
  __int64 *v69; // r8
  __int64 v70; // rcx
  __int64 v71; // rax
  __int64 v72; // rcx
  unsigned __int64 v73; // rdx
  unsigned __int64 v74; // rax
  unsigned int v75; // r10d
  unsigned int v76; // eax
  __int64 *v77; // rax
  unsigned int v78; // r11d
  __int64 *v79; // r8
  int v80; // edx
  __int64 *v81; // rcx
  __int64 v82; // rax
  __int16 v83; // cx
  __int64 v84; // rax
  __int64 v85; // rax
  __int64 *v86; // rcx
  __int64 v87; // rax
  __int16 v88; // cx
  SIZE_T v89; // rax
  SIZE_T v90; // rax
  int v92[2]; // [rsp+48h] [rbp-69h] BYREF
  int v93[2]; // [rsp+50h] [rbp-61h] BYREF
  __int64 *v94; // [rsp+58h] [rbp-59h]
  unsigned __int64 v95; // [rsp+60h] [rbp-51h]
  __int64 v96; // [rsp+68h] [rbp-49h]
  __int64 v97; // [rsp+70h] [rbp-41h]
  __int64 v98; // [rsp+78h] [rbp-39h]
  unsigned int v99; // [rsp+80h] [rbp-31h]
  __int64 *v100; // [rsp+88h] [rbp-29h]
  __int64 *v101; // [rsp+90h] [rbp-21h]
  __int64 v102; // [rsp+98h] [rbp-19h] BYREF
  __int64 v103; // [rsp+A0h] [rbp-11h]
  __int64 v104; // [rsp+A8h] [rbp-9h]
  __int64 v105; // [rsp+B0h] [rbp-1h]
  int v106; // [rsp+C0h] [rbp+Fh]
  int v107; // [rsp+D0h] [rbp+1Fh]
  int v108; // [rsp+E0h] [rbp+2Fh]
  __int64 v109; // [rsp+E8h] [rbp+37h] BYREF
  char v110[24]; // [rsp+F0h] [rbp+3Fh] BYREF
  char v111; // [rsp+118h] [rbp+67h]
  unsigned __int64 v112; // [rsp+118h] [rbp+67h]
  char v113; // [rsp+118h] [rbp+67h]
  __int64 v114; // [rsp+128h] [rbp+77h] BYREF
  char v115; // [rsp+130h] [rbp+7Fh]

  v115 = a4;
  v114 = a3;
  v105 = 0LL;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = BaseAddress;
  v111 = 0;
  if ( RtlpHeapKey != BaseAddress[45] )
    goto LABEL_18;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*((_DWORD *)BaseAddress + 155);
      if ( (unsigned __int8)RtlpGetFreeBlockInsidePageBoundaries(BaseAddress, a2, v110, &v102) )
        v7[78] -= v102;
    }
    v95 = a2;
    goto LABEL_45;
  }
  if ( a3 < BaseAddress[22] )
  {
LABEL_18:
    LOBYTE(v14) = RtlpInsertFreeBlock(BaseAddress, a2, a3);
    return v14;
  }
  v8 = a3 + BaseAddress[24];
  if ( v8 < BaseAddress[23] || v8 < BaseAddress[67] >> (*((_BYTE *)BaseAddress + 648) + 4) )
  {
    a2 = v6;
LABEL_17:
    BaseAddress = v7;
    goto LABEL_18;
  }
  v9 = v6;
  v10 = *((unsigned __int16 *)BaseAddress + 70) ^ (unsigned __int64)*(unsigned __int16 *)(v6 + 12);
  v95 = v6;
  v10 *= 16LL;
  v11 = v6 - v10;
  v96 = v6 - v10;
  if ( v6 - v10 == v6
    || ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)((*((_DWORD *)v7 + 31) >> 20) & *((_BYTE *)v7 + 138))) & 1) != 0 )
  {
    goto LABEL_8;
  }
  if ( *((_DWORD *)v7 + 31) )
  {
    *(_DWORD *)(v11 + 8) ^= *((_DWORD *)v7 + 34);
    if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
    {
      RtlpAnalyzeHeapFailure(v7, v11);
      v11 = v96;
    }
  }
  v69 = (__int64 *)(v11 + 16);
  v70 = *(_QWORD *)(v11 + 16);
  v100 = *(__int64 **)(v11 + 24);
  v103 = v70;
  v71 = *v100;
  if ( *v100 != *(_QWORD *)(v70 + 8) || (__int64 *)v71 != v69 )
  {
    RtlpLogHeapFailure(12, (_DWORD)v7, (_DWORD)v69, *(_QWORD *)(v70 + 8), v71, 0LL);
    goto LABEL_164;
  }
  v72 = v7[39];
  v7[24] -= *(unsigned __int16 *)(v11 + 8);
  v98 = v72;
  if ( v72 )
  {
    v73 = *(unsigned __int16 *)(v11 + 8);
    v74 = *(unsigned int *)(v72 + 8);
    v104 = v73;
    while ( v73 >= v74 )
    {
      v84 = *(_QWORD *)v72;
      if ( !*(_QWORD *)v72 )
      {
        LODWORD(v73) = *(_DWORD *)(v72 + 8) - 1;
        break;
      }
      v72 = *(_QWORD *)v72;
      v98 = v84;
      v74 = *(unsigned int *)(v84 + 8);
    }
    v75 = v73 - *(_DWORD *)(v72 + 24);
    v23 = *(_DWORD *)(v72 + 12) == 0;
    v99 = v75;
    v76 = 2 * v75;
    if ( v23 )
      v76 = v75;
    v94 = *(__int64 **)(v72 + 48);
    v97 = v76;
    v77 = (__int64 *)v94[v76];
    v78 = *(_DWORD *)(v72 + 8);
    --*(_DWORD *)(v72 + 16);
    v101 = v77;
    if ( (_DWORD)v73 == v78 - 1 )
      --*(_DWORD *)(v72 + 20);
    if ( v101 == v69 )
    {
      if ( !*(_QWORD *)v72 )
        --v78;
      if ( (unsigned int)v73 >= v78 )
      {
        if ( *v69 != *(_QWORD *)(v72 + 32) )
        {
          v94[v97] = *v69;
          goto LABEL_129;
        }
        v94[v97] = 0LL;
      }
      else
      {
        v79 = (__int64 *)*v69;
        v101 = v79;
        if ( v79 != *(__int64 **)(v72 + 32) )
        {
          v80 = *((_DWORD *)v79 - 2);
          v107 = v80;
          if ( *((_DWORD *)v7 + 31) )
          {
            v107 = *((_DWORD *)v7 + 34) ^ v80;
            if ( HIBYTE(v107) != (BYTE2(v107) ^ (unsigned __int8)(BYTE1(v107) ^ v107)) )
            {
              RtlpLogHeapFailure(3, (_DWORD)v7, (_DWORD)v79 - 16, 0, 0LL, 0LL);
              v11 = v96;
              v72 = v98;
              v75 = v99;
              v79 = v101;
            }
          }
          v5 = v114;
          if ( (_DWORD)v104 == (unsigned __int16)v107 )
          {
            *(_QWORD *)(*(_QWORD *)(v72 + 48) + 8 * v97) = v79;
            goto LABEL_129;
          }
        }
        *(_QWORD *)(*(_QWORD *)(v72 + 48) + 8 * v97) = 0LL;
      }
      *(_DWORD *)(*(_QWORD *)(v72 + 40) + 4LL * (v75 >> 5)) &= ~(1 << (v75 & 0x1F));
    }
  }
LABEL_129:
  v81 = v100;
  v82 = v103;
  *v100 = v103;
  *(_QWORD *)(v82 + 8) = v81;
  if ( (*(_BYTE *)(v11 + 10) & 8) == 0 )
  {
LABEL_130:
    if ( (*(_BYTE *)(v11 + 10) & 4) != 0 )
    {
      v89 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
      v23 = (*(_BYTE *)(v11 + 10) & 2) == 0;
      v94 = (__int64 *)v89;
      if ( !v23 && v89 > 4 )
      {
        v89 -= 4LL;
        v94 = (__int64 *)v89;
      }
      v100 = (__int64 *)RtlCompareMemoryUlong((PVOID)(v11 + 32), v89, 0xFEEEFEEE);
      if ( v100 == v94 )
      {
        v11 = v96;
      }
      else
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint(
          "HEAP: Free Heap block %p modified at %p after it was freed\n",
          (const void *)v96,
          (char *)v100 + v96 + 32);
        RtlpBreakPointHeap(v96);
        v5 = v114;
      }
    }
    v9 = v11;
    v5 += *(unsigned __int16 *)(v11 + 8);
    *(_BYTE *)(v11 + 10) = 0;
    *(_WORD *)(v11 + 8) = v5;
    *(_BYTE *)(v11 + 15) = 0;
    v83 = v5 ^ *((_WORD *)v7 + 70);
    v95 = v11;
    v114 = v5;
    *(_WORD *)(v11 + 16 * v5 + 12) = v83;
    goto LABEL_8;
  }
  if ( (unsigned __int8)RtlpCommitBlock(v7) )
  {
    v11 = v96;
    goto LABEL_130;
  }
  RtlpDeCommitFreeBlock(v7);
LABEL_164:
  v9 = v6;
LABEL_8:
  v12 = v9 + 16 * v5;
  if ( *((_DWORD *)v7 + 31) )
  {
    v106 = *((_DWORD *)v7 + 34) ^ *(_DWORD *)(v12 + 8);
    if ( HIBYTE(v106) != (BYTE2(v106) ^ (unsigned __int8)(BYTE1(v106) ^ v106)) )
      RtlpLogHeapFailure(3, (_DWORD)v7, v12, 0, 0LL, 0LL);
  }
  while ( 1 )
  {
    while ( 1 )
    {
      if ( ((*(_BYTE *)(v12 + 10) ^ (unsigned __int8)(*((_BYTE *)v7 + 138) & (*((_DWORD *)v7 + 31) >> 20))) & 1) != 0 )
      {
        v5 = v114;
        a2 = v95;
        goto LABEL_13;
      }
      if ( *((_DWORD *)v7 + 31) )
      {
        *(_DWORD *)(v12 + 8) ^= *((_DWORD *)v7 + 34);
        if ( *(_BYTE *)(v12 + 11) != (*(_BYTE *)(v12 + 8) ^ (unsigned __int8)(*(_BYTE *)(v12 + 9) ^ *(_BYTE *)(v12 + 10))) )
          RtlpAnalyzeHeapFailure(v7, v12);
      }
      v15 = (__int64 **)(v12 + 16);
      v16 = *(_QWORD *)(v12 + 16);
      v101 = *(__int64 **)(v12 + 24);
      v104 = v16;
      v17 = *v101;
      v18 = *(_QWORD *)(v16 + 8);
      if ( *v101 == v18 && (__int64 **)v17 == v15 )
        break;
      RtlpLogHeapFailure(12, (_DWORD)v7, (_DWORD)v15, v18, v17, 0LL);
    }
    v19 = v7[39];
    v7[24] -= *(unsigned __int16 *)(v12 + 8);
    v94 = (__int64 *)v19;
    if ( v19 )
    {
      v20 = *(unsigned __int16 *)(v12 + 8);
      v21 = *(unsigned int *)(v19 + 8);
      v103 = v20;
      while ( v20 >= v21 )
      {
        v85 = *(_QWORD *)v19;
        if ( !*(_QWORD *)v19 )
        {
          LODWORD(v20) = *(_DWORD *)(v19 + 8) - 1;
          break;
        }
        v19 = *(_QWORD *)v19;
        v94 = (__int64 *)v85;
        v21 = *(unsigned int *)(v85 + 8);
      }
      v22 = v20 - *(_DWORD *)(v19 + 24);
      v23 = *(_DWORD *)(v19 + 12) == 0;
      v99 = v22;
      v24 = 2 * v22;
      if ( v23 )
        v24 = v22;
      v25 = v24;
      v26 = *(_QWORD *)(v19 + 48);
      v97 = v25;
      v98 = v26;
      v27 = *(__int64 ***)(v26 + 8 * v25);
      v28 = *(_DWORD *)(v19 + 8);
      --*(_DWORD *)(v19 + 16);
      if ( (_DWORD)v20 == v28 - 1 )
        --*(_DWORD *)(v19 + 20);
      if ( v27 == v15 )
      {
        if ( !*(_QWORD *)v19 )
          --v28;
        if ( (unsigned int)v20 >= v28 )
        {
          if ( *v15 != *(__int64 **)(v19 + 32) )
          {
            *(_QWORD *)(v98 + 8 * v97) = *v15;
            goto LABEL_141;
          }
          *(_QWORD *)(v98 + 8 * v97) = 0LL;
        }
        else
        {
          v29 = *v15;
          v100 = v29;
          if ( v29 != *(__int64 **)(v19 + 32) )
          {
            v30 = *((_DWORD *)v29 - 2);
            v108 = v30;
            if ( *((_DWORD *)v7 + 31) )
            {
              v108 = *((_DWORD *)v7 + 34) ^ v30;
              if ( HIBYTE(v108) != ((unsigned __int8)v108 ^ (unsigned __int8)(BYTE1(v108) ^ BYTE2(v108))) )
              {
                RtlpLogHeapFailure(3, (_DWORD)v7, (_DWORD)v29 - 16, 0, 0LL, 0LL);
                v19 = (__int64)v94;
                v22 = v99;
                v29 = v100;
              }
            }
            if ( (_DWORD)v103 == (unsigned __int16)v108 )
            {
              *(_QWORD *)(*(_QWORD *)(v19 + 48) + 8 * v97) = v29;
              goto LABEL_141;
            }
          }
          *(_QWORD *)(*(_QWORD *)(v19 + 48) + 8 * v97) = 0LL;
        }
        *(_DWORD *)(*(_QWORD *)(v19 + 40) + 4LL * (v22 >> 5)) &= ~(1 << (v22 & 0x1F));
      }
    }
LABEL_141:
    v86 = v101;
    v87 = v104;
    *v101 = v104;
    *(_QWORD *)(v87 + 8) = v86;
    if ( (*(_BYTE *)(v12 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(v7) )
      break;
    RtlpDeCommitFreeBlock(v7);
  }
  if ( (*(_BYTE *)(v12 + 10) & 4) != 0 )
  {
    v90 = 16LL * *(unsigned __int16 *)(v12 + 8) - 32;
    v23 = (*(_BYTE *)(v12 + 10) & 2) == 0;
    v94 = (__int64 *)v90;
    if ( !v23 && v90 > 4 )
    {
      v90 -= 4LL;
      v94 = (__int64 *)v90;
    }
    v100 = (__int64 *)RtlCompareMemoryUlong((PVOID)(v12 + 32), v90, 0xFEEEFEEE);
    if ( v100 != v94 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint(
        "HEAP: Free Heap block %p modified at %p after it was freed\n",
        (const void *)v12,
        (char *)v100 + v12 + 32);
      RtlpBreakPointHeap(v12);
    }
  }
  a2 = v95;
  *(_BYTE *)(v95 + 10) = 0;
  *(_BYTE *)(a2 + 15) = 0;
  v5 = *(unsigned __int16 *)(v12 + 8) + v114;
  *(_WORD *)(a2 + 8) = v5;
  v88 = v5 ^ *((_WORD *)v7 + 70);
  v114 = v5;
  *(_WORD *)(a2 + 16 * v5 + 12) = v88;
LABEL_13:
  if ( (unsigned __int64)(v5 - 257) <= 0xFDFF )
  {
    RtlpInsertFreeBlock(v7, a2, v5);
    v13 = v7[67] - 16LL * v7[24];
    v14 = v7[79] >> 4;
    if ( v13 < v7[79] - v14 )
    {
      v14 = v7[80] >> 2;
      if ( v13 > v7[80] - v14 )
      {
        LOBYTE(v14) = RtlpCollectFreeBlocks((int)v7);
        v7[80] = v13;
        v7[79] = v13;
      }
    }
    return v14;
  }
  v4 = 0;
LABEL_45:
  v31 = *(_BYTE *)(v6 + 14);
  if ( v31 )
    v32 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v31 << 16) + 0x10000;
  else
    v32 = (__int64)v7;
  v33 = a2 + 16 * v5;
  v102 = v33;
  if ( *(_BYTE *)(v33 + 15) == 3 )
  {
    v112 = v33 + 16;
    RtlpRemoveUCRBlock((__int64)v7, (__int64 *)(v33 + 16));
    v34 = v112;
    v35 = *(_QWORD *)(v112 + 32);
    v36 = *(_QWORD *)(v112 + 40);
    --*(_DWORD *)(v32 + 84);
    v105 = v35;
    *(_DWORD *)(v32 + 80) -= *(_QWORD *)(v112 + 40) >> 12;
    v7[67] += *(_QWORD *)(v112 + 40);
    --*((_DWORD *)v7 + 141);
    v37 = *(_QWORD *)(v112 + 40);
    v96 = v36;
    if ( v37 >= 0xFF000 )
      v7[68] -= v37;
    v4 = 1;
    a2 = v95;
    v33 = v102;
    v111 = 1;
    v5 += (*(_QWORD *)(v34 + 40) >> 4) + 64LL;
    v114 = v5;
  }
  else
  {
    v96 = 0LL;
  }
  if ( *((_WORD *)v7 + 70) == *(_WORD *)(a2 + 12) )
  {
    *(_QWORD *)v93 = a2;
    v50 = *(_QWORD **)(v32 + 96);
    v51 = a2;
    while ( (_QWORD *)(v32 + 96) != v50 )
    {
      v52 = v50 - 2;
      v53 = v50[2] + v50[3];
      v94 = v50 - 2;
      if ( v53 == a2 )
        goto LABEL_81;
      v50 = (_QWORD *)*v50;
    }
    v52 = 0LL;
    v94 = 0LL;
LABEL_81:
    if ( v115 && !v52 )
    {
      v4 = v111;
      goto LABEL_52;
    }
    v54 = RtlpHeapErrorHandlerThreshold;
    if ( RtlpHeapErrorHandlerThreshold >= 1 && !v52 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(UCRBlock != NULL)");
      RtlpHeapHandleError(1LL);
      v51 = *(_QWORD *)v93;
      v54 = RtlpHeapErrorHandlerThreshold;
      a2 = v95;
      v5 = v114;
    }
    v55 = v111;
    v56 = 16 * v5;
    v97 = 16 * v5;
    if ( v111 )
    {
      v57 = a2 + v56;
      v98 = v57;
    }
    else
    {
      v98 = v56 + a2;
      v57 = v56 + a2 - 32;
      v55 = 0;
    }
    *(_QWORD *)v92 = (v57 & 0xFFFFFFFFFFFFF000uLL) - v51;
    if ( *(_QWORD *)v92 )
    {
      if ( (int)RtlpSecMemFreeVirtualMemory(v52, v93, v92, 0x4000LL) < 0 )
        goto LABEL_190;
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapDecommit(v7, *(_QWORD *)v93, *(_QWORD *)v92, 5LL);
      v58 = v94;
      ++*((_DWORD *)v7 + 143);
      v59 = v58[5];
      if ( v59 >= 0xFF000 )
        v7[68] -= v59;
      RtlpRemoveUCRBlock((__int64)v7, v58);
      v58[5] += *(_QWORD *)v92;
      RtlpInsertUCRBlock((unsigned __int64)v7, v58);
      *(_DWORD *)(v32 + 80) += *(_QWORD *)v92 >> 12;
      v7[67] -= *(_QWORD *)v92;
      v60 = v58[5];
      if ( v60 >= 0xFF000 )
        v7[68] += v60;
      v61 = v111;
      if ( !v111 )
      {
        v62 = (_BYTE *)(*(_QWORD *)v93 + *(_QWORD *)v92);
        *(_WORD *)(*(_QWORD *)v93 + *(_QWORD *)v92 + 12LL) = *((_WORD *)v7 + 70);
        if ( v98 == *(_QWORD *)v92 + *(_QWORD *)v93 )
        {
          if ( *((_DWORD *)v7 + 31) )
          {
            v62[11] = v62[8] ^ v62[9] ^ v62[10];
            *((_DWORD *)v62 + 2) ^= *((_DWORD *)v7 + 34);
          }
        }
        else
        {
          v63 = v97;
          v62[15] = 0;
          v62[10] = 0;
          v64 = (unsigned __int64)(v63 - *(_QWORD *)v92) >> 4;
          v46 = RtlpHeapErrorHandlerThreshold < 1;
          *((_WORD *)v62 + 4) = v64;
          if ( !v46 && (unsigned __int16)v64 <= 1u )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint("((LONG)FreeEntry->Size > 1)");
            RtlpHeapHandleError(1LL);
          }
          v62[11] = 0;
          v65 = *(_QWORD *)(v32 + 40);
          if ( v65 == v32 )
          {
            LOBYTE(v66) = 0;
          }
          else
          {
            v66 = ((unsigned __int64)&v62[-v32] >> 16) + 1;
            v102 = v66;
            if ( (unsigned __int64)&v62[-v32] >> 16 > 0xFC )
            {
              RtlpLogHeapFailure(3, v65, (_DWORD)v62, v32, 0LL, 0LL);
              LOBYTE(v66) = v102;
            }
          }
          v67 = *((unsigned __int16 *)v62 + 4);
          v62[14] = v66;
          RtlpInsertFreeBlock(v7, v62, v67);
          v61 = 0;
        }
      }
      v68 = v96;
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapContractEvent((int)v7, v93[0], v92[0], 16 * v7[24], v61, v96, (HANDLE)MEMORY[0x7FFE0380]);
      LOBYTE(v14) = MEMORY[0x7FFE038A];
      if ( MEMORY[0x7FFE038A] )
        LOBYTE(v14) = RtlpLogHeapContractEvent(
                        (int)v7,
                        v93[0],
                        v92[0],
                        16 * (unsigned int)v7[24],
                        v111,
                        v68,
                        (HANDLE)MEMORY[0x7FFE038A]);
      return v14;
    }
    if ( v54 >= 1 && v55 )
    {
      if ( NtCurrentPeb()->Ldr )
      {
LABEL_218:
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        goto LABEL_220;
      }
LABEL_219:
      DbgPrint("HEAP: ");
LABEL_220:
      DbgPrint("(!TrailingUCR)");
      RtlpHeapHandleError(1LL);
LABEL_221:
      v5 = v114;
LABEL_222:
      a2 = v95;
      goto LABEL_70;
    }
    goto LABEL_70;
  }
LABEL_52:
  v38 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)v93 = v38;
  if ( v38 == a2 + 80 )
  {
    v38 += 4096LL;
    *(_QWORD *)v93 = v38;
  }
  v98 = 16 * v5;
  v94 = (__int64 *)(a2 + 16 * v5);
  v39 = (unsigned __int64)(v94 - 4);
  if ( v4 )
    v39 = a2 + 16 * v5;
  v40 = v39 & 0xFFFFFFFFFFFFF000uLL;
  *(_QWORD *)v92 = v40;
  if ( v40 < v38 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 1 && v4 )
    {
      if ( NtCurrentPeb()->Ldr )
        goto LABEL_218;
      goto LABEL_219;
    }
LABEL_70:
    a3 = v5;
    goto LABEL_17;
  }
  v41 = v40 - v38;
  *(_QWORD *)v92 = v41;
  if ( !v115 && *(_BYTE *)(v33 + 15) != 3 && (!v41 || v41 < v7[22]) )
    goto LABEL_70;
  if ( v41 )
  {
    ++*((_DWORD *)v7 + 143);
    if ( (int)RtlpSecMemFreeVirtualMemory(-4096LL, v93, v92, 0x4000LL) >= 0 )
    {
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapDecommit(v7, *(_QWORD *)v93, *(_QWORD *)v92, 6LL);
      v4 = v111;
      a2 = v95;
      v41 = *(_QWORD *)v92;
      v38 = *(_QWORD *)v93;
      goto LABEL_63;
    }
LABEL_190:
    ++*((_DWORD *)v7 + 147);
    if ( v111 )
    {
      RtlpCreateUCREntry((__int64)v7, v32, v105 - 48, v96, v95, &v114);
      goto LABEL_221;
    }
    goto LABEL_222;
  }
LABEL_63:
  if ( !v4 )
  {
    v43 = (_BYTE *)(v41 + v38);
    *(_WORD *)(v41 + v38 + 12) = *((_WORD *)v7 + 70);
    v41 = *(_QWORD *)v92;
    v38 = *(_QWORD *)v93;
    if ( v94 == (__int64 *)(*(_QWORD *)v92 + *(_QWORD *)v93) )
    {
      if ( !*((_DWORD *)v7 + 31) )
        goto LABEL_64;
      v43[11] = v43[8] ^ v43[9] ^ v43[10];
      *((_DWORD *)v43 + 2) ^= *((_DWORD *)v7 + 34);
    }
    else
    {
      v44 = v98;
      v43[15] = 0;
      v43[10] = 0;
      v45 = (a2 + v44 - *(_QWORD *)v92 - *(_QWORD *)v93) >> 4;
      v46 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v43 + 4) = v45;
      if ( !v46 && (unsigned __int16)v45 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("(LONG)FreeEntry->Size > 1");
        RtlpHeapHandleError(1LL);
      }
      v43[11] = 0;
      v47 = *(_QWORD *)(v32 + 40);
      if ( v47 == v32 )
      {
        LOBYTE(v48) = 0;
      }
      else
      {
        v48 = ((unsigned __int64)&v43[-v32] >> 16) + 1;
        v113 = v48;
        if ( (unsigned __int64)&v43[-v32] >> 16 > 0xFC )
        {
          RtlpLogHeapFailure(3, v47, (_DWORD)v43, v32, 0LL, 0LL);
          LOBYTE(v48) = v113;
        }
      }
      v49 = *((unsigned __int16 *)v43 + 4);
      v43[14] = v48;
      RtlpInsertFreeBlock(v7, v43, v49);
    }
    v41 = *(_QWORD *)v92;
    v38 = *(_QWORD *)v93;
  }
LABEL_64:
  v42 = v95;
  RtlpCreateUCREntry((__int64)v7, v32, v38 - 48, v41, v95, &v109);
  RtlpInsertFreeBlock(v7, v42, v109);
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapContractEvent((int)v7, v93[0], v92[0], 16 * v7[24], 0, 0LL, (HANDLE)MEMORY[0x7FFE0380]);
  LOBYTE(v14) = MEMORY[0x7FFE038A];
  if ( MEMORY[0x7FFE038A] )
    LOBYTE(v14) = RtlpLogHeapContractEvent(
                    (int)v7,
                    v93[0],
                    v92[0],
                    16 * (unsigned int)v7[24],
                    0,
                    0LL,
                    (HANDLE)MEMORY[0x7FFE038A]);
  return v14;
}
