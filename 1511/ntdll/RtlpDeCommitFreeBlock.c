/*
 * XREFs of RtlpDeCommitFreeBlock @ 0x18001F148
 * Callers:
 *     RtlpCoalesceFreeBlocks @ 0x18001DDEC (RtlpCoalesceFreeBlocks.c)
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpFreeHeap @ 0x180022430 (RtlpFreeHeap.c)
 *     RtlpAllocateHeap @ 0x180027BE0 (RtlpAllocateHeap.c)
 *     RtlpGrowBlockInPlace @ 0x180056578 (RtlpGrowBlockInPlace.c)
 *     RtlpCreateSplitBlock @ 0x180056BFC (RtlpCreateSplitBlock.c)
 *     RtlpCoalesceHeap @ 0x18008E114 (RtlpCoalesceHeap.c)
 *     RtlZeroHeap @ 0x1800E2BC0 (RtlZeroHeap.c)
 *     RtlpValidateHeapSegment @ 0x1800F01C8 (RtlpValidateHeapSegment.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180020000 (RtlpInsertFreeBlock.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180052BE8 (RtlpCommitBlock.c)
 *     RtlpCollectFreeBlocks @ 0x180052CA8 (RtlpCollectFreeBlocks.c)
 *     RtlpGetFreeBlockInsidePageBoundaries @ 0x180052E5C (RtlpGetFreeBlockInsidePageBoundaries.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180052EB0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHeapRemoveListEntry @ 0x180057774 (RtlpHeapRemoveListEntry.c)
 *     RtlpCreateUCREntry @ 0x180057B9C (RtlpCreateUCREntry.c)
 *     RtlpInsertUCRBlock @ 0x180057CF8 (RtlpInsertUCRBlock.c)
 *     RtlpRemoveUCRBlock @ 0x180059BEC (RtlpRemoveUCRBlock.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A92F0 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800F0DA8 (RtlpHeapHandleError.c)
 *     RtlpLogHeapContractEvent @ 0x1800F1650 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapDecommit @ 0x1800F1780 (RtlpLogHeapDecommit.c)
 */

char __fastcall RtlpDeCommitFreeBlock(unsigned __int64 a1, __int64 a2, unsigned __int64 a3, char a4)
{
  char v4; // r11
  unsigned __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned __int64 v7; // rbx
  unsigned __int64 v8; // rdx
  __int64 v9; // rdx
  unsigned __int64 v10; // rcx
  __int64 v11; // r8
  __int64 *v12; // r11
  __int64 v13; // r10
  SIZE_T v14; // rcx
  __int64 v15; // rax
  __int64 v16; // r9
  __int64 *v17; // rdx
  unsigned __int64 i; // rax
  __int64 *v19; // rax
  int v20; // ecx
  SIZE_T v21; // rax
  bool v22; // zf
  __int16 v23; // cx
  unsigned __int16 *v24; // r8
  __int64 *v25; // r11
  unsigned __int16 *v26; // r10
  SIZE_T v27; // rcx
  __int64 v28; // rax
  __int64 v29; // r9
  __int64 *v30; // rdx
  unsigned __int64 j; // rax
  __int64 *v32; // rax
  int v33; // ecx
  SIZE_T v34; // rax
  __int16 v35; // cx
  unsigned __int64 v36; // rdi
  __int64 v37; // rax
  unsigned __int8 v38; // al
  unsigned __int64 v39; // rsi
  __int64 v40; // r10
  __int64 v41; // rcx
  __int64 v42; // rax
  __int64 v43; // r8
  unsigned __int64 v44; // rax
  _QWORD *v45; // r8
  __int64 v46; // r11
  _QWORD *v47; // rcx
  __int64 v48; // rax
  int v49; // r8d
  char v50; // r9
  __int64 v51; // rax
  __int64 v52; // rax
  _QWORD *v53; // rdi
  unsigned __int64 v54; // rax
  unsigned __int64 v55; // rax
  char v56; // dl
  _BYTE *v57; // rdi
  SIZE_T v58; // rax
  SIZE_T v59; // rax
  bool v60; // cc
  __int64 v61; // rdx
  __int64 v62; // rcx
  __int64 v63; // r8
  unsigned __int64 v64; // r8
  __int64 v65; // r9
  unsigned __int64 v66; // r9
  unsigned __int64 v67; // r9
  _BYTE *v68; // rdi
  SIZE_T v69; // rax
  unsigned __int64 v70; // rax
  __int64 v71; // rdx
  __int64 v72; // rcx
  __int64 v73; // r8
  __int64 v74; // rdi
  unsigned __int16 *v76; // [rsp+48h] [rbp-29h]
  unsigned __int16 *v77; // [rsp+48h] [rbp-29h]
  __int64 v78; // [rsp+48h] [rbp-29h]
  int v79[2]; // [rsp+50h] [rbp-21h] BYREF
  __int64 v80; // [rsp+58h] [rbp-19h]
  int v81[2]; // [rsp+60h] [rbp-11h] BYREF
  SIZE_T v82; // [rsp+68h] [rbp-9h]
  SIZE_T v83; // [rsp+70h] [rbp-1h]
  _QWORD *v84; // [rsp+78h] [rbp+7h]
  __int64 v85; // [rsp+80h] [rbp+Fh] BYREF
  __int64 v86; // [rsp+88h] [rbp+17h]
  int v87; // [rsp+98h] [rbp+27h]
  __int64 v88; // [rsp+A0h] [rbp+2Fh] BYREF
  char v89[32]; // [rsp+A8h] [rbp+37h] BYREF
  char v90; // [rsp+D8h] [rbp+67h]
  __int64 v91; // [rsp+D8h] [rbp+67h]
  char v92; // [rsp+D8h] [rbp+67h]
  unsigned __int64 v93; // [rsp+E8h] [rbp+77h] BYREF
  char v94; // [rsp+F0h] [rbp+7Fh]

  v94 = a4;
  v93 = a3;
  v86 = 0LL;
  v4 = 0;
  v5 = a3;
  v6 = a2;
  v7 = a1;
  v90 = 0;
  if ( RtlpHeapKey != *(_QWORD *)(a1 + 360) )
    goto LABEL_191;
  if ( a4 )
  {
    if ( (*(_BYTE *)(a2 + 10) & 8) != 0 )
    {
      --*(_DWORD *)(a1 + 620);
      if ( (unsigned __int8)RtlpGetFreeBlockInsidePageBoundaries(a1, a2, v89, &v85) )
        *(_QWORD *)(v7 + 624) -= v85;
    }
    v80 = a2;
    goto LABEL_84;
  }
  if ( a3 < *(_QWORD *)(a1 + 176) )
  {
LABEL_191:
    LOBYTE(v37) = RtlpInsertFreeBlock(a1, a2, a3);
    return v37;
  }
  v8 = a3 + *(_QWORD *)(a1 + 192);
  if ( v8 < *(_QWORD *)(a1 + 184) || v8 < *(_QWORD *)(a1 + 536) >> (*(_BYTE *)(a1 + 648) + 4) )
  {
    a2 = v6;
LABEL_190:
    a1 = v7;
    goto LABEL_191;
  }
  v9 = v6;
  v10 = *(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v6 + 12);
  v80 = v6;
  v10 *= 16LL;
  v11 = v6 - v10;
  v76 = (unsigned __int16 *)(v6 - v10);
  if ( v6 - v10 != v6
    && ((*(_BYTE *)(v11 + 10) ^ (unsigned __int8)((*(_DWORD *)(v7 + 124) >> 20) & *(_BYTE *)(v7 + 138))) & 1) == 0 )
  {
    if ( *(_DWORD *)(v7 + 124) )
    {
      *(_DWORD *)(v11 + 8) ^= *(_DWORD *)(v7 + 136);
      if ( *(_BYTE *)(v11 + 11) != (*(_BYTE *)(v11 + 8) ^ (unsigned __int8)(*(_BYTE *)(v11 + 9) ^ *(_BYTE *)(v11 + 10))) )
      {
        RtlpAnalyzeHeapFailure(v7, v11);
        v11 = (__int64)v76;
      }
    }
    v12 = *(__int64 **)(v11 + 24);
    v13 = v11 + 16;
    v14 = *(_QWORD *)(v11 + 16);
    v82 = v14;
    v83 = (SIZE_T)v12;
    v15 = *v12;
    v16 = *(_QWORD *)(v14 + 8);
    if ( *v12 == v16 && v15 == v13 )
    {
      *(_QWORD *)(v7 + 192) -= *(unsigned __int16 *)(v11 + 8);
      v17 = *(__int64 **)(v7 + 312);
      if ( v17 )
      {
        for ( i = *((unsigned int *)v17 + 2); ; i = *((unsigned int *)v19 + 2) )
        {
          if ( *(unsigned __int16 *)(v11 + 8) < i )
          {
            v20 = *(unsigned __int16 *)(v11 + 8);
            goto LABEL_19;
          }
          v19 = (__int64 *)*v17;
          if ( !*v17 )
            break;
          v17 = (__int64 *)*v17;
        }
        v20 = *((_DWORD *)v17 + 2) - 1;
LABEL_19:
        RtlpHeapRemoveListEntry(v7, (_DWORD)v17, 1, v13, v20, *(unsigned __int16 *)(v11 + 8));
        v11 = (__int64)v76;
        v14 = v82;
        v12 = (__int64 *)v83;
      }
      *v12 = v14;
      *(_QWORD *)(v14 + 8) = v12;
      if ( (*(_BYTE *)(v11 + 10) & 8) != 0 )
      {
        if ( !(unsigned __int8)RtlpCommitBlock((PVOID)v7) )
        {
          RtlpDeCommitFreeBlock(v7, v76, v76[4], 1LL);
LABEL_37:
          v9 = v6;
          goto LABEL_38;
        }
        v11 = (__int64)v76;
      }
      if ( (*(_BYTE *)(v11 + 10) & 4) != 0 )
      {
        v21 = 16LL * *(unsigned __int16 *)(v11 + 8) - 32;
        v22 = (*(_BYTE *)(v11 + 10) & 2) == 0;
        v80 = v21;
        if ( !v22 && v21 > 4 )
        {
          v21 -= 4LL;
          v80 = v21;
        }
        v82 = RtlCompareMemoryUlong((PVOID)(v11 + 32), v21, 0xFEEEFEEE);
        if ( v82 == v80 )
        {
          v11 = (__int64)v76;
        }
        else
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v76, (char *)v76 + v82 + 32);
          RtlpBreakPointHeap(v76);
          v5 = v93;
        }
      }
      v9 = v11;
      v5 += *(unsigned __int16 *)(v11 + 8);
      *(_BYTE *)(v11 + 10) = 0;
      *(_WORD *)(v11 + 8) = v5;
      *(_BYTE *)(v11 + 15) = 0;
      v23 = v5 ^ *(_WORD *)(v7 + 140);
      v80 = v11;
      v93 = v5;
      *(_WORD *)(v11 + 16 * v5 + 12) = v23;
      goto LABEL_38;
    }
    RtlpLogHeapFailure(12, v7, v11 + 16, v16, v15, 0LL);
    goto LABEL_37;
  }
LABEL_38:
  v24 = (unsigned __int16 *)(v9 + 16 * v5);
  v77 = v24;
  if ( *(_DWORD *)(v7 + 124) )
  {
    v87 = *(_DWORD *)(v7 + 136) ^ *((_DWORD *)v24 + 2);
    if ( HIBYTE(v87) != (BYTE2(v87) ^ (unsigned __int8)(BYTE1(v87) ^ v87)) )
    {
      RtlpLogHeapFailure(3, v7, (_DWORD)v24, 0, 0LL, 0LL);
      v24 = v77;
    }
    v5 = v93;
  }
  while ( 1 )
  {
    if ( ((*((_BYTE *)v24 + 10) ^ (unsigned __int8)(*(_BYTE *)(v7 + 138) & (*(_DWORD *)(v7 + 124) >> 20))) & 1) != 0 )
    {
      a2 = v80;
      goto LABEL_74;
    }
    if ( *(_DWORD *)(v7 + 124) )
    {
      *((_DWORD *)v24 + 2) ^= *(_DWORD *)(v7 + 136);
      if ( *((_BYTE *)v24 + 11) != (*((_BYTE *)v24 + 8) ^ (unsigned __int8)(*((_BYTE *)v24 + 9) ^ *((_BYTE *)v24 + 10))) )
      {
        RtlpAnalyzeHeapFailure(v7, v24);
        v24 = v77;
      }
    }
    v25 = (__int64 *)*((_QWORD *)v24 + 3);
    v26 = v24 + 8;
    v27 = *((_QWORD *)v24 + 2);
    v82 = v27;
    v83 = (SIZE_T)v25;
    v28 = *v25;
    v29 = *(_QWORD *)(v27 + 8);
    if ( *v25 == v29 && (unsigned __int16 *)v28 == v26 )
      break;
    RtlpLogHeapFailure(12, v7, (_DWORD)v24 + 16, v29, v28, 0LL);
LABEL_60:
    v24 = v77;
  }
  *(_QWORD *)(v7 + 192) -= v24[4];
  v30 = *(__int64 **)(v7 + 312);
  if ( v30 )
  {
    for ( j = *((unsigned int *)v30 + 2); ; j = *((unsigned int *)v32 + 2) )
    {
      if ( v24[4] < j )
      {
        v33 = v24[4];
        goto LABEL_54;
      }
      v32 = (__int64 *)*v30;
      if ( !*v30 )
        break;
      v30 = (__int64 *)*v30;
    }
    v33 = *((_DWORD *)v30 + 2) - 1;
LABEL_54:
    RtlpHeapRemoveListEntry(v7, (_DWORD)v30, 1, (_DWORD)v26, v33, v24[4]);
    v24 = v77;
    v27 = v82;
    v25 = (__int64 *)v83;
  }
  *v25 = v27;
  *(_QWORD *)(v27 + 8) = v25;
  if ( (v24[5] & 8) == 0 )
    goto LABEL_62;
  if ( !(unsigned __int8)RtlpCommitBlock((PVOID)v7) )
  {
    RtlpDeCommitFreeBlock(v7, v77, v77[4], 1LL);
    goto LABEL_60;
  }
  v24 = v77;
LABEL_62:
  if ( (v24[5] & 4) != 0 )
  {
    v34 = 16LL * v24[4] - 32;
    v22 = (v24[5] & 2) == 0;
    v84 = (_QWORD *)v34;
    if ( !v22 && v34 > 4 )
    {
      v34 -= 4LL;
      v84 = (_QWORD *)v34;
    }
    v82 = (SIZE_T)(v24 + 16);
    v83 = RtlCompareMemoryUlong(v24 + 16, v34, 0xFEEEFEEE);
    if ( (_QWORD *)v83 == v84 )
    {
      v24 = v77;
    }
    else
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("HEAP: Free Heap block %p modified at %p after it was freed\n", v77, (const void *)(v82 + v83));
      RtlpBreakPointHeap(v77);
      v5 = v93;
    }
  }
  a2 = v80;
  *(_BYTE *)(v80 + 10) = 0;
  *(_BYTE *)(a2 + 15) = 0;
  v5 += v24[4];
  *(_WORD *)(a2 + 8) = v5;
  v35 = v5 ^ *(_WORD *)(v7 + 140);
  v93 = v5;
  *(_WORD *)(a2 + 16 * v5 + 12) = v35;
LABEL_74:
  if ( v5 - 257 <= 0xFDFF )
  {
    RtlpInsertFreeBlock(v7, a2, v5);
    v36 = *(_QWORD *)(v7 + 536) - 16LL * *(_QWORD *)(v7 + 192);
    v37 = *(_QWORD *)(v7 + 632) >> 4;
    if ( v36 < *(_QWORD *)(v7 + 632) - v37 )
    {
      v37 = *(_QWORD *)(v7 + 640) >> 2;
      if ( v36 > *(_QWORD *)(v7 + 640) - v37 )
      {
        LOBYTE(v37) = RtlpCollectFreeBlocks(v7);
        *(_QWORD *)(v7 + 640) = v36;
        *(_QWORD *)(v7 + 632) = v36;
      }
    }
    return v37;
  }
  v4 = 0;
LABEL_84:
  v38 = *(_BYTE *)(v6 + 14);
  if ( v38 )
    v39 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v38 << 16) + 0x10000;
  else
    v39 = v7;
  v40 = a2 + 16 * v5;
  v85 = v40;
  if ( *(_BYTE *)(v40 + 15) == 3 )
  {
    v91 = v40 + 16;
    RtlpRemoveUCRBlock(v7);
    v41 = v91;
    v42 = *(_QWORD *)(v91 + 32);
    v43 = *(_QWORD *)(v91 + 40);
    --*(_DWORD *)(v39 + 84);
    v86 = v42;
    *(_DWORD *)(v39 + 80) -= *(_QWORD *)(v91 + 40) >> 12;
    *(_QWORD *)(v7 + 536) += *(_QWORD *)(v91 + 40);
    --*(_DWORD *)(v7 + 564);
    v44 = *(_QWORD *)(v91 + 40);
    v78 = v43;
    if ( v44 >= 0xFF000 )
      *(_QWORD *)(v7 + 544) -= v44;
    v4 = 1;
    a2 = v80;
    v40 = v85;
    v90 = 1;
    v5 += (*(_QWORD *)(v41 + 40) >> 4) + 64LL;
    v93 = v5;
  }
  else
  {
    v78 = 0LL;
  }
  if ( *(_WORD *)(v7 + 140) != *(_WORD *)(a2 + 12) )
    goto LABEL_145;
  *(_QWORD *)v81 = a2;
  v45 = *(_QWORD **)(v39 + 96);
  v46 = a2;
  while ( (_QWORD *)(v39 + 96) != v45 )
  {
    v47 = v45 - 2;
    v48 = v45[2] + v45[3];
    v84 = v45 - 2;
    if ( v48 == a2 )
      goto LABEL_98;
    v45 = (_QWORD *)*v45;
  }
  v47 = 0LL;
  v84 = 0LL;
LABEL_98:
  if ( v94 && !v47 )
  {
    v4 = v90;
LABEL_145:
    v64 = (a2 + 4159) & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v81 = v64;
    if ( v64 == a2 + 80 )
    {
      v64 += 4096LL;
      *(_QWORD *)v81 = v64;
    }
    v83 = 16 * v5;
    v82 = a2 + 16 * v5;
    v65 = v82 - 32;
    if ( v4 )
      v65 = a2 + 16 * v5;
    v66 = v65 & 0xFFFFFFFFFFFFF000uLL;
    *(_QWORD *)v79 = v66;
    if ( v66 >= v64 )
    {
      v67 = v66 - v64;
      *(_QWORD *)v79 = v67;
      if ( !v94 && *(_BYTE *)(v40 + 15) != 3 && (!v67 || v67 < *(_QWORD *)(v7 + 176)) )
        goto LABEL_189;
      if ( v67 )
      {
        ++*(_DWORD *)(v7 + 572);
        if ( (int)RtlpSecMemFreeVirtualMemory(-4096LL, v81, v79, 0x4000LL) < 0 )
          goto LABEL_115;
        if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          RtlpLogHeapDecommit(v7, *(_QWORD *)v81, *(_QWORD *)v79, 6LL);
        v4 = v90;
        a2 = v80;
        v67 = *(_QWORD *)v79;
        v64 = *(_QWORD *)v81;
      }
      if ( v4 )
        goto LABEL_176;
      v68 = (_BYTE *)(v67 + v64);
      *(_WORD *)(v67 + v64 + 12) = *(_WORD *)(v7 + 140);
      LODWORD(v67) = v79[0];
      LODWORD(v64) = v81[0];
      if ( v82 == *(_QWORD *)v79 + *(_QWORD *)v81 )
      {
        if ( !*(_DWORD *)(v7 + 124) )
          goto LABEL_176;
        v68[11] = v68[8] ^ v68[9] ^ v68[10];
        *((_DWORD *)v68 + 2) ^= *(_DWORD *)(v7 + 136);
      }
      else
      {
        v69 = v83;
        v68[15] = 0;
        v68[10] = 0;
        v70 = (a2 + v69 - *(_QWORD *)v79 - *(_QWORD *)v81) >> 4;
        v60 = RtlpHeapErrorHandlerThreshold < 1;
        *((_WORD *)v68 + 4) = v70;
        if ( !v60 && (unsigned __int16)v70 <= 1u )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint("(LONG)FreeEntry->Size > 1");
          RtlpHeapHandleError(1LL);
        }
        v68[11] = 0;
        v71 = *(_QWORD *)(v39 + 40);
        if ( v71 == v39 )
        {
          LOBYTE(v72) = 0;
        }
        else
        {
          v72 = ((unsigned __int64)&v68[-v39] >> 16) + 1;
          v92 = v72;
          if ( (unsigned __int64)&v68[-v39] >> 16 > 0xFC )
          {
            RtlpLogHeapFailure(3, v71, (_DWORD)v68, v39, 0LL, 0LL);
            LOBYTE(v72) = v92;
          }
        }
        v73 = *((unsigned __int16 *)v68 + 4);
        v68[14] = v72;
        RtlpInsertFreeBlock(v7, v68, v73);
      }
      LODWORD(v67) = v79[0];
      LODWORD(v64) = v81[0];
LABEL_176:
      v74 = v80;
      RtlpCreateUCREntry(v7, v39, v64 - 48, v67, v80, (__int64)&v88);
      RtlpInsertFreeBlock(v7, v74, v88);
      if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapContractEvent(v7, v81[0], v79[0], 16 * *(_QWORD *)(v7 + 192), 0, 0LL, (HANDLE)MEMORY[0x7FFE0380]);
      LOBYTE(v37) = MEMORY[0x7FFE038A];
      if ( MEMORY[0x7FFE038A] )
        LOBYTE(v37) = RtlpLogHeapContractEvent(
                        v7,
                        v81[0],
                        v79[0],
                        16 * (unsigned int)*(_QWORD *)(v7 + 192),
                        0,
                        0LL,
                        (HANDLE)MEMORY[0x7FFE038A]);
      return v37;
    }
    if ( RtlpHeapErrorHandlerThreshold >= 1 && v4 )
    {
      if ( !NtCurrentPeb()->Ldr )
        goto LABEL_185;
      goto LABEL_184;
    }
LABEL_189:
    a3 = v5;
    goto LABEL_190;
  }
  v49 = RtlpHeapErrorHandlerThreshold;
  if ( RtlpHeapErrorHandlerThreshold >= 1 && !v47 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint("(UCRBlock != NULL)");
    RtlpHeapHandleError(1LL);
    v46 = *(_QWORD *)v81;
    v49 = RtlpHeapErrorHandlerThreshold;
    a2 = v80;
    v5 = v93;
  }
  v50 = v90;
  v51 = 16 * v5;
  v82 = 16 * v5;
  if ( v90 )
  {
    v52 = a2 + v51;
    v83 = v52;
  }
  else
  {
    v83 = v51 + a2;
    v52 = v51 + a2 - 32;
    v50 = 0;
  }
  *(_QWORD *)v79 = (v52 & 0xFFFFFFFFFFFFF000uLL) - v46;
  if ( !*(_QWORD *)v79 )
  {
    if ( v49 >= 1 && v50 )
    {
      if ( !NtCurrentPeb()->Ldr )
      {
LABEL_185:
        DbgPrint("HEAP: ");
LABEL_186:
        DbgPrint("(!TrailingUCR)");
        RtlpHeapHandleError(1LL);
LABEL_187:
        v5 = v93;
        goto LABEL_188;
      }
LABEL_184:
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      goto LABEL_186;
    }
    goto LABEL_189;
  }
  if ( (int)RtlpSecMemFreeVirtualMemory(v47, v81, v79, 0x4000LL) < 0 )
  {
LABEL_115:
    ++*(_DWORD *)(v7 + 588);
    if ( v90 )
    {
      RtlpCreateUCREntry(v7, v39, v86 - 48, v78, v80, (__int64)&v93);
      goto LABEL_187;
    }
LABEL_188:
    a2 = v80;
    goto LABEL_189;
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapDecommit(v7, *(_QWORD *)v81, *(_QWORD *)v79, 5LL);
  v53 = v84;
  ++*(_DWORD *)(v7 + 572);
  v54 = v53[5];
  if ( v54 >= 0xFF000 )
    *(_QWORD *)(v7 + 544) -= v54;
  RtlpRemoveUCRBlock(v7);
  v53[5] += *(_QWORD *)v79;
  RtlpInsertUCRBlock(v7, v53);
  *(_DWORD *)(v39 + 80) += *(_QWORD *)v79 >> 12;
  *(_QWORD *)(v7 + 536) -= *(_QWORD *)v79;
  v55 = v53[5];
  if ( v55 >= 0xFF000 )
    *(_QWORD *)(v7 + 544) += v55;
  v56 = v90;
  if ( !v90 )
  {
    v57 = (_BYTE *)(*(_QWORD *)v81 + *(_QWORD *)v79);
    *(_WORD *)(*(_QWORD *)v81 + *(_QWORD *)v79 + 12LL) = *(_WORD *)(v7 + 140);
    if ( v83 == *(_QWORD *)v79 + *(_QWORD *)v81 )
    {
      if ( *(_DWORD *)(v7 + 124) )
      {
        v57[11] = v57[8] ^ v57[9] ^ v57[10];
        *((_DWORD *)v57 + 2) ^= *(_DWORD *)(v7 + 136);
      }
    }
    else
    {
      v58 = v82;
      v57[15] = 0;
      v57[10] = 0;
      v59 = (v58 - *(_QWORD *)v79) >> 4;
      v60 = RtlpHeapErrorHandlerThreshold < 1;
      *((_WORD *)v57 + 4) = v59;
      if ( !v60 && (unsigned __int16)v59 <= 1u )
      {
        if ( NtCurrentPeb()->Ldr )
          DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
        else
          DbgPrint("HEAP: ");
        DbgPrint("((LONG)FreeEntry->Size > 1)");
        RtlpHeapHandleError(1LL);
      }
      v57[11] = 0;
      v61 = *(_QWORD *)(v39 + 40);
      if ( v61 == v39 )
      {
        LOBYTE(v62) = 0;
      }
      else
      {
        v62 = ((unsigned __int64)&v57[-v39] >> 16) + 1;
        v85 = v62;
        if ( (unsigned __int64)&v57[-v39] >> 16 > 0xFC )
        {
          RtlpLogHeapFailure(3, v61, (_DWORD)v57, v39, 0LL, 0LL);
          LOBYTE(v62) = v85;
        }
      }
      v63 = *((unsigned __int16 *)v57 + 4);
      v57[14] = v62;
      RtlpInsertFreeBlock(v7, v57, v63);
      v56 = 0;
    }
  }
  if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
    RtlpLogHeapContractEvent(v7, v81[0], v79[0], 16 * *(_QWORD *)(v7 + 192), v56, v78, (HANDLE)MEMORY[0x7FFE0380]);
  LOBYTE(v37) = MEMORY[0x7FFE038A];
  if ( MEMORY[0x7FFE038A] )
    LOBYTE(v37) = RtlpLogHeapContractEvent(
                    v7,
                    v81[0],
                    v79[0],
                    16 * (unsigned int)*(_QWORD *)(v7 + 192),
                    v90,
                    v78,
                    (HANDLE)MEMORY[0x7FFE038A]);
  return v37;
}
