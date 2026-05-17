/*
 * XREFs of RtlpExtendHeap @ 0x180027790
 * Callers:
 *     RtlpAllocateHeap @ 0x180025060 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpFindAndCommitPages @ 0x180028400 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180028B34 (RtlpCommitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DFC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x1800436E4 (RtlpGetHeapProtection.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A810 (RtlpDeCommitFreeBlock.c)
 *     RtlpHeapListCompare @ 0x18004C414 (RtlpHeapListCompare.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCCC (RtlpInitializeHeapSegment.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     RtlpCoalesceHeap @ 0x180090B44 (RtlpCoalesceHeap.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x1800A6720 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x1800AA730 (RtlCompareMemoryUlong.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800F7D80 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeReserve @ 0x1800F7F14 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1800F90C8 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800F9310 (RtlpLogHeapExtendEvent.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpExtendHeap(unsigned __int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // r15
  __int64 v5; // rax
  __int64 v6; // rsi
  unsigned __int64 v7; // rdi
  __int64 v8; // r13
  _QWORD *v9; // r8
  __int64 *v10; // r12
  __int64 v11; // r9
  __int64 v12; // rax
  __int64 *v13; // r14
  unsigned __int64 v14; // rcx
  unsigned int v15; // r9d
  unsigned int v16; // r15d
  __int64 v17; // rax
  unsigned int v18; // edx
  __int64 v19; // r11
  _QWORD *v20; // rax
  _QWORD *v21; // r10
  __int64 v22; // r8
  int v23; // edx
  bool v24; // zf
  char v25; // al
  __int64 v26; // rax
  unsigned __int64 v27; // rdi
  unsigned __int64 v28; // r13
  unsigned __int64 v29; // r14
  __int16 v30; // di
  unsigned __int8 v31; // al
  unsigned __int64 v32; // r8
  char v33; // al
  unsigned __int64 v34; // r9
  unsigned __int16 v35; // cx
  __int64 v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  __int64 *v39; // rcx
  __int64 *v40; // rax
  int v41; // esi
  __int64 *v42; // r8
  _DWORD *v43; // r12
  _QWORD *v44; // rdi
  __int64 v45; // r15
  _QWORD *v46; // rax
  __int64 *v47; // rax
  _QWORD *v48; // r12
  __int64 *v49; // rdi
  unsigned __int64 v50; // r8
  __int64 *v51; // rax
  int v52; // ecx
  unsigned int v53; // r15d
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 *v57; // rdx
  __int64 result; // rax
  int v59; // ecx
  int v60; // eax
  _QWORD *v61; // r15
  __int64 *v62; // rax
  __int64 v63; // r11
  _QWORD *v64; // r8
  __int64 v65; // r9
  __int64 v66; // rax
  __int64 *v67; // r14
  unsigned __int64 v68; // r12
  unsigned int v69; // ecx
  unsigned int v70; // r15d
  __int64 v71; // rax
  __int64 v72; // r9
  __int64 v73; // r10
  unsigned int v74; // edx
  _QWORD *v75; // r13
  __int64 v76; // r13
  int v77; // ecx
  _DWORD *v78; // rdx
  __int64 *v79; // rax
  char v80; // al
  _DWORD *v81; // rdx
  int v82; // eax
  __int64 v83; // r9
  unsigned __int64 v84; // rax
  unsigned __int64 v85; // rdi
  int HeapProtection; // esi
  unsigned __int64 v87; // rdx
  __int64 v88; // rcx
  int v89; // r9d
  __int64 v90; // rdx
  int v91; // ecx
  int v92; // eax
  unsigned __int16 v93; // ax
  __int64 v94; // rax
  __int64 v95; // rdi
  unsigned int v96; // edx
  int v97; // eax
  __int64 v98; // rdi
  __int64 *v99; // rax
  __int64 v100; // r9
  unsigned __int64 v101; // rsi
  __int64 v102; // r14
  unsigned __int64 v103; // r14
  __int64 v104; // r12
  _DWORD *v105; // r9
  unsigned __int64 v106; // r8
  unsigned __int64 v107; // rcx
  __int64 v108; // [rsp+40h] [rbp-69h] BYREF
  unsigned __int64 v109; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v110; // [rsp+50h] [rbp-59h]
  unsigned __int64 v111; // [rsp+58h] [rbp-51h]
  __int64 *v112; // [rsp+60h] [rbp-49h]
  unsigned __int64 v113; // [rsp+68h] [rbp-41h] BYREF
  unsigned __int64 v114; // [rsp+70h] [rbp-39h]
  __int64 v115; // [rsp+78h] [rbp-31h]
  int v116; // [rsp+88h] [rbp-21h]
  int v117; // [rsp+98h] [rbp-11h]
  int v118; // [rsp+A8h] [rbp-1h]
  int v119; // [rsp+B8h] [rbp+Fh]
  int v120; // [rsp+C8h] [rbp+1Fh]
  __int64 v121; // [rsp+118h] [rbp+6Fh]
  char v122; // [rsp+118h] [rbp+6Fh]
  __int64 v123; // [rsp+118h] [rbp+6Fh]
  int v124; // [rsp+120h] [rbp+77h]
  __int16 v125; // [rsp+120h] [rbp+77h]
  __int64 v126; // [rsp+120h] [rbp+77h]
  unsigned __int64 v127; // [rsp+128h] [rbp+7Fh] BYREF

  v127 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(a1, &v127);
  v115 = v5;
  v6 = v5;
  if ( !v5 )
  {
    if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
    {
      v84 = *(_QWORD *)(a1 + 160);
      v85 = a2 + 0x2000;
      v108 = 0LL;
      if ( a2 + 0x2000 > v84 )
        v84 = a2 + 0x2000;
      if ( (*(_BYTE *)(a1 + 386) != 2 || !*(_QWORD *)(a1 + 376)) && v84 >= 0x3F4000 )
        *(_DWORD *)(a1 + 120) |= 0x20000000u;
      v109 = (v84 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      if ( v109 >= 0xFD0000 )
        v109 = 16580608LL;
      HeapProtection = RtlpGetHeapProtection(a1, 1LL);
      if ( (int)ZwAllocateVirtualMemory(-1LL, &v108, 0LL, &v109, 0x2000, HeapProtection) < 0 )
      {
        while ( v109 != v85 )
        {
          v107 = v109 >> 1;
          if ( v109 >> 1 < v85 )
            v107 = a2 + 0x2000;
          v109 = v107;
          if ( (int)ZwAllocateVirtualMemory(-1LL, &v108, 0LL, &v109, 0x2000, HeapProtection) >= 0 )
            goto LABEL_145;
        }
        ++*(_DWORD *)(a1 + 600);
      }
      else
      {
LABEL_145:
        *(_QWORD *)(a1 + 160) += v109;
        v87 = *(_QWORD *)(a1 + 168);
        if ( a2 + 4096 > v87 )
          v87 = a2 + 4096;
        v113 = (v87 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( (int)ZwAllocateVirtualMemory(-1LL, &v108, 0LL, &v113, 4096, HeapProtection) >= 0
          && (unsigned __int8)RtlpInitializeHeapSegment(a1, v108, 112, v89, 2, v108, v108 + v113, v108 + v109 - 4096) )
        {
          if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapCommit(a1, v108, v113, 4LL);
            RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v108 + 64), v113, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE0380]);
          }
          if ( MEMORY[0x7FFE038A] )
            RtlpLogHeapExtendEvent(a1, *(_QWORD *)(v108 + 64), v113, 16 * *(_QWORD *)(a1 + 192), MEMORY[0x7FFE038A]);
          if ( MEMORY[0x7FFE0388] )
            RtlpHeapLogRangeReserve(a1, v108, v109);
          v90 = *(_QWORD *)(v108 + 64);
          if ( *(_DWORD *)(a1 + 124) )
          {
            *(_DWORD *)(v90 + 8) ^= *(_DWORD *)(a1 + 136);
            if ( *(_BYTE *)(v90 + 11) != (*(_BYTE *)(v90 + 8) ^ (unsigned __int8)(*(_BYTE *)(v90 + 9) ^ *(_BYTE *)(v90 + 10))) )
              RtlpAnalyzeHeapFailure(a1, v90);
          }
          return *(_QWORD *)(v108 + 64);
        }
        RtlpSecMemFreeVirtualMemory(v88, &v108, &v109, 0x8000LL);
      }
    }
    if ( *(char *)(a1 + 112) >= 0
      || (result = RtlpCoalesceHeap(a1), (v4 = (_BYTE *)result) == 0LL)
      || *(unsigned __int16 *)(result + 8) < a2 )
    {
      if ( v4 && *(_DWORD *)(a1 + 124) )
      {
        v4[11] = v4[8] ^ v4[9] ^ v4[10];
        *((_DWORD *)v4 + 2) ^= *(_DWORD *)(a1 + 136);
      }
      return 0LL;
    }
    return result;
  }
  v127 >>= 4;
  v7 = v5 - 16 * (*(unsigned __int16 *)(a1 + 140) ^ (unsigned __int64)*(unsigned __int16 *)(v5 + 12));
  if ( v7 != v5
    && ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)((*(_DWORD *)(a1 + 124) >> 20) & *(_BYTE *)(a1 + 138))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v7 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v7);
    }
    v8 = *(_QWORD *)(v7 + 16);
    v9 = (_QWORD *)(v7 + 16);
    v10 = *(__int64 **)(v7 + 24);
    v11 = *(_QWORD *)(v8 + 8);
    v12 = *v10;
    if ( *v10 == v11 && (_QWORD *)v12 == v9 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v7 + 8);
      v13 = *(__int64 **)(a1 + 312);
      if ( v13 )
      {
        v14 = *(unsigned __int16 *)(v7 + 8);
        v124 = *(unsigned __int16 *)(v7 + 8);
        if ( v14 >= *((unsigned int *)v13 + 2) )
        {
          while ( 1 )
          {
            v62 = (__int64 *)*v13;
            if ( !*v13 )
              break;
            v13 = (__int64 *)*v13;
            if ( v14 < *((unsigned int *)v62 + 2) )
              goto LABEL_11;
          }
          v15 = *((_DWORD *)v13 + 2) - 1;
        }
        else
        {
LABEL_11:
          v15 = *(unsigned __int16 *)(v7 + 8);
        }
        v16 = v15 - *((_DWORD *)v13 + 6);
        if ( *((_DWORD *)v13 + 3) )
          v17 = 2 * v16;
        else
          v17 = v16;
        v18 = *((_DWORD *)v13 + 2);
        v19 = 8 * v17;
        v20 = (_QWORD *)(8 * v17 + v13[6]);
        v112 = (__int64 *)v19;
        v21 = (_QWORD *)*v20;
        --*((_DWORD *)v13 + 4);
        if ( v15 == v18 - 1 )
          --*((_DWORD *)v13 + 5);
        if ( v21 == v9 )
        {
          if ( !*v13 )
            --v18;
          if ( v15 >= v18 )
          {
            if ( *v9 == v13[4] )
            {
              *v20 = 0LL;
              v81 = (_DWORD *)(v13[5] + 4LL * (v16 >> 5));
              *v81 &= ~(1 << (v16 & 0x1F));
            }
            else
            {
              *v20 = *v9;
            }
          }
          else
          {
            v22 = *v9;
            v121 = v22;
            if ( v22 == v13[4] )
              goto LABEL_25;
            v23 = *(_DWORD *)(v22 - 8);
            v24 = *(_DWORD *)(a1 + 124) == 0;
            v116 = v23;
            if ( !v24 )
            {
              v116 = *(_DWORD *)(a1 + 136) ^ v23;
              if ( HIBYTE(v116) != (BYTE2(v116) ^ (unsigned __int8)(BYTE1(v116) ^ v116)) )
              {
                RtlpLogHeapFailure(3, a1, v22 - 16, 0, 0LL, 0LL);
                LODWORD(v14) = v124;
                v19 = (__int64)v112;
                v22 = v121;
              }
            }
            if ( (_DWORD)v14 == (unsigned __int16)v116 )
            {
              *(_QWORD *)(v19 + v13[6]) = v22;
            }
            else
            {
LABEL_25:
              *(_QWORD *)(v19 + v13[6]) = 0LL;
              *(_DWORD *)(v13[5] + 4LL * (v16 >> 5)) &= ~(1 << (v16 & 0x1F));
            }
          }
        }
      }
      *v10 = v8;
      *(_QWORD *)(v8 + 8) = v10;
      if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v7) )
      {
        v25 = *(_BYTE *)(v7 + 10);
        if ( (v25 & 4) != 0 )
        {
          v101 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v25 & 2) != 0 && v101 > 4 )
            v101 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v102 = RtlCompareMemoryUlong(v7 + 32, v101, 4277075694LL);
          if ( v102 != v101 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v102 + v7 + 32));
            RtlpBreakPointHeap();
          }
        }
        v26 = *(unsigned __int16 *)(v7 + 8);
        v6 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        v115 = v7;
        v127 += v26;
        *(_WORD *)(v7 + 8) = v127;
        *(_WORD *)(v7 + 16 * v127 + 12) = v127 ^ *(_WORD *)(a1 + 140);
      }
      else
      {
        LOBYTE(v83) = 1;
        RtlpDeCommitFreeBlock(a1, v7, *(unsigned __int16 *)(v7 + 8), v83);
      }
    }
    else
    {
      RtlpLogHeapFailure(12, a1, (_DWORD)v9, v11, v12, 0LL);
    }
  }
  v27 = v6 + 16 * v127;
  if ( *(_DWORD *)(a1 + 124) )
  {
    v117 = *(_DWORD *)(a1 + 136) ^ *(_DWORD *)(v27 + 8);
    if ( HIBYTE(v117) != (BYTE2(v117) ^ (unsigned __int8)(BYTE1(v117) ^ v117)) )
      RtlpLogHeapFailure(3, a1, v6 + 16 * v127, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v27 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v27 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v27 + 11) != (*(_BYTE *)(v27 + 8) ^ (unsigned __int8)(*(_BYTE *)(v27 + 9) ^ *(_BYTE *)(v27 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v27);
    }
    v63 = *(_QWORD *)(v27 + 16);
    v64 = (_QWORD *)(v27 + 16);
    v112 = *(__int64 **)(v27 + 24);
    v126 = v63;
    v65 = *(_QWORD *)(v63 + 8);
    v66 = *v112;
    if ( *v112 == v65 && (_QWORD *)v66 == v64 )
    {
      *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v27 + 8);
      v67 = *(__int64 **)(a1 + 312);
      if ( v67 )
      {
        v68 = *(unsigned __int16 *)(v27 + 8);
        if ( v68 >= *((unsigned int *)v67 + 2) )
        {
          while ( 1 )
          {
            v99 = (__int64 *)*v67;
            if ( !*v67 )
              break;
            v67 = (__int64 *)*v67;
            if ( v68 < *((unsigned int *)v99 + 2) )
              goto LABEL_100;
          }
          v69 = *((_DWORD *)v67 + 2) - 1;
        }
        else
        {
LABEL_100:
          v69 = *(unsigned __int16 *)(v27 + 8);
        }
        v70 = v69 - *((_DWORD *)v67 + 6);
        if ( *((_DWORD *)v67 + 3) )
          v71 = 2 * v70;
        else
          v71 = v70;
        v72 = v67[6];
        v73 = 8 * v71;
        v74 = *((_DWORD *)v67 + 2);
        v123 = 8 * v71;
        v75 = *(_QWORD **)(v72 + 8 * v71);
        --*((_DWORD *)v67 + 4);
        if ( v69 == v74 - 1 )
          --*((_DWORD *)v67 + 5);
        if ( v75 == v64 )
        {
          if ( !*v67 )
            --v74;
          if ( v69 >= v74 )
          {
            if ( *v64 != v67[4] )
            {
              *(_QWORD *)(v72 + 8 * v71) = *v64;
              goto LABEL_116;
            }
            *(_QWORD *)(v72 + 8 * v71) = 0LL;
            v78 = (_DWORD *)(v67[5] + 4LL * (v70 >> 5));
          }
          else
          {
            v76 = *v64;
            if ( *v64 != v67[4] )
            {
              v77 = *(_DWORD *)(v76 - 8);
              v24 = *(_DWORD *)(a1 + 124) == 0;
              v118 = v77;
              if ( !v24 )
              {
                v118 = *(_DWORD *)(a1 + 136) ^ v77;
                if ( HIBYTE(v118) != ((unsigned __int8)v118 ^ (unsigned __int8)(BYTE1(v118) ^ BYTE2(v118))) )
                {
                  RtlpLogHeapFailure(3, a1, v76 - 16, 0, 0LL, 0LL);
                  v73 = v123;
                  v63 = v126;
                }
              }
              if ( (_DWORD)v68 == (unsigned __int16)v118 )
              {
                *(_QWORD *)(v73 + v67[6]) = v76;
                goto LABEL_116;
              }
            }
            *(_QWORD *)(v73 + v67[6]) = 0LL;
            v78 = (_DWORD *)(v67[5] + 4LL * (v70 >> 5));
          }
          *v78 &= ~(1 << (v70 & 0x1F));
        }
      }
LABEL_116:
      v79 = v112;
      *v112 = v63;
      *(_QWORD *)(v63 + 8) = v79;
      if ( (*(_BYTE *)(v27 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(a1, v27) )
      {
        v80 = *(_BYTE *)(v27 + 10);
        if ( (v80 & 4) != 0 )
        {
          v103 = 16LL * *(unsigned __int16 *)(v27 + 8) - 32;
          if ( (v80 & 2) != 0 && v103 > 4 )
            v103 = 16LL * *(unsigned __int16 *)(v27 + 8) - 36;
          v104 = RtlCompareMemoryUlong(v27 + 32, v103, 4277075694LL);
          if ( v104 != v103 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v27,
              (const void *)(v104 + v27 + 32));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v6 + 10) = 0;
        *(_BYTE *)(v6 + 15) = 0;
        v127 += *(unsigned __int16 *)(v27 + 8);
        *(_WORD *)(v6 + 8) = v127;
        *(_WORD *)(16 * v127 + v6 + 12) = v127 ^ *(_WORD *)(a1 + 140);
        break;
      }
      LOBYTE(v100) = 1;
      RtlpDeCommitFreeBlock(a1, v27, *(unsigned __int16 *)(v27 + 8), v100);
    }
    else
    {
      RtlpLogHeapFailure(12, a1, (_DWORD)v64, v65, v66, 0LL);
    }
  }
  v28 = v127;
  v29 = v6;
  v114 = v127;
  if ( !v127 )
    goto LABEL_71;
  v30 = *(_WORD *)(a1 + 140) ^ *(_WORD *)(v6 + 12);
  if ( !v30
    && RtlpHeapErrorHandlerThreshold >= 1
    && (*(_BYTE *)(v6 + 10) & 8) == 0
    && ((v6 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v6 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
    else
      DbgPrint("HEAP: ");
    DbgPrint(
      "((FreeBlock->Flags & HEAP_ENTRY_DECOMMITTED) || (ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock))");
    RtlpHeapHandleError(1LL);
  }
  v31 = *(_BYTE *)(v6 + 14);
  if ( v31 )
    v32 = (v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v31 << 16) + 0x10000;
  else
    v32 = a1;
  v33 = *(_BYTE *)(v6 + 10);
  v34 = a1 + 336;
  v122 = v33;
  v112 = (__int64 *)v32;
  while ( 2 )
  {
    if ( v28 > 0xFF00 )
    {
      v35 = -256;
      v125 = -256;
      if ( v28 == 65281 )
      {
        v35 = -272;
        v125 = -272;
      }
      *(_BYTE *)(v29 + 10) = 0;
    }
    else
    {
      v35 = v28;
      *(_BYTE *)(v29 + 10) = v33;
      v125 = v28;
    }
    *(_WORD *)(v29 + 12) = *(_WORD *)(a1 + 140) ^ v30;
    v36 = *(_QWORD *)(v32 + 40);
    if ( v36 == v32 )
    {
      LOBYTE(v37) = 0;
    }
    else
    {
      v37 = ((v29 - v32) >> 16) + 1;
      if ( (v29 - v32) >> 16 > 0xFC )
      {
        RtlpLogHeapFailure(3, v36, v29, v32, 0LL, 0LL);
        v35 = v125;
        v34 = a1 + 336;
      }
    }
    *(_BYTE *)(v29 + 10) &= 0xF0u;
    *(_BYTE *)(v29 + 14) = v37;
    *(_WORD *)(v29 + 8) = v35;
    *(_BYTE *)(v29 + 11) = 0;
    v38 = v35;
    *(_BYTE *)(v29 + 15) = 0;
    v24 = (*(_BYTE *)(a1 + 112) & 0x40) == 0;
    v111 = v35;
    if ( !v24 )
    {
      v105 = (_DWORD *)(v29 + 32);
      v106 = (16 * (unsigned __int64)v35 - 32) >> 2;
      if ( v106 )
      {
        if ( ((unsigned __int8)v105 & 4) == 0 )
          goto LABEL_227;
        *v105 = -17891602;
        if ( --v106 )
        {
          v105 = (_DWORD *)(v29 + 36);
LABEL_227:
          memset64(v105, 0xFEEEFEEEFEEEFEEEuLL, v106 >> 1);
          if ( (v106 & 1) != 0 )
            v105[v106 - 1] = -17891602;
        }
      }
      *(_BYTE *)(v29 + 10) |= 4u;
      v34 = a1 + 336;
    }
    v39 = *(__int64 **)(a1 + 312);
    if ( v39 )
    {
      if ( v38 < *((unsigned int *)v39 + 2) )
      {
LABEL_123:
        v41 = v38;
      }
      else
      {
        while ( 1 )
        {
          v40 = (__int64 *)*v39;
          if ( !*v39 )
            break;
          v39 = (__int64 *)*v39;
          if ( v38 < *((unsigned int *)v40 + 2) )
            goto LABEL_123;
        }
        v41 = *((_DWORD *)v39 + 2) - 1;
      }
      v42 = v39;
      v43 = v39 + 3;
      while ( 2 )
      {
        v110 = v42;
        v44 = (_QWORD *)v42[4];
        v45 = (unsigned int)(v41 - *v43);
        v46 = (_QWORD *)v44[1];
        if ( v44 == v46 )
          goto LABEL_49;
        v59 = *((_DWORD *)v46 - 2);
        v24 = *(_DWORD *)(a1 + 124) == 0;
        v119 = v59;
        if ( !v24 )
        {
          v119 = *(_DWORD *)(a1 + 136) ^ v59;
          if ( HIBYTE(v119) != ((unsigned __int8)v119 ^ (unsigned __int8)(BYTE1(v119) ^ BYTE2(v119))) )
          {
            RtlpLogHeapFailure(3, a1, (_DWORD)v46 - 16, 0, 0LL, 0LL);
            v42 = v110;
          }
        }
        v38 = v111;
        if ( (int)(v111 - (unsigned __int16)v119) > 0 )
          goto LABEL_49;
        LOBYTE(v34) = 1;
        v60 = RtlpHeapListCompare(a1, *v44, v111, v34);
        v42 = v110;
        if ( v60 <= 0 )
        {
          v44 = (_QWORD *)*v44;
          goto LABEL_171;
        }
        if ( *v110 || v41 != *((_DWORD *)v110 + 2) - 1 )
        {
          v94 = v110[5];
          v95 = (unsigned int)v45 >> 5;
          v96 = *(_DWORD *)(v94 + 4 * v95) & ~((1 << (v45 & 0x1F)) - 1);
          v34 = v94 + 4 * v95;
          if ( v96 )
          {
LABEL_175:
            if ( (_WORD)v96 )
            {
              if ( (_BYTE)v96 )
                v97 = RtlpBitsClearLow[(unsigned __int8)v96];
              else
                v97 = RtlpBitsClearLow[BYTE1(v96)] + 8;
            }
            else if ( (v96 & 0xFF0000) != 0 )
            {
              v97 = RtlpBitsClearLow[BYTE2(v96)] + 16;
            }
            else
            {
              v97 = RtlpBitsClearLow[(unsigned __int64)v96 >> 24] + 24;
            }
            v98 = (unsigned int)(v97 + 32 * v95);
            if ( *((_DWORD *)v110 + 3) )
              v98 = (unsigned int)(2 * v98);
            v44 = *(_QWORD **)(v110[6] + 8 * v98);
            goto LABEL_171;
          }
          while ( (unsigned int)v95 <= ((unsigned int)(*((_DWORD *)v110 + 2) - *v43) >> 5) - 1 )
          {
            v96 = *(_DWORD *)(v34 + 4);
            v34 += 4LL;
            LODWORD(v95) = v95 + 1;
            if ( v96 )
              goto LABEL_175;
          }
        }
        else
        {
          if ( *((_DWORD *)v110 + 3) )
            v45 = (unsigned int)(2 * v45);
          v61 = *(_QWORD **)(v110[6] + 8 * v45);
          if ( v44 != v61 )
          {
            while ( 1 )
            {
              LOBYTE(v34) = 1;
              if ( (int)RtlpHeapListCompare(a1, v61, v111, v34) <= 0 )
                break;
              v61 = (_QWORD *)*v61;
              if ( v44 == v61 )
              {
                v42 = v110;
                goto LABEL_231;
              }
            }
            v42 = v110;
            v44 = v61;
LABEL_171:
            v38 = v111;
LABEL_49:
            if ( v44 )
            {
              v6 = v115;
              v34 = a1 + 336;
              v28 = v114;
              goto LABEL_51;
            }
          }
        }
LABEL_231:
        v42 = (__int64 *)*v42;
        v41 = *((_DWORD *)v42 + 6);
        v43 = v42 + 3;
        v38 = v111;
        continue;
      }
    }
    v44 = *(_QWORD **)v34;
LABEL_51:
    if ( (_QWORD *)v34 != v44 )
    {
      v91 = *(_DWORD *)(a1 + 124);
      do
      {
        if ( v91 )
        {
          v92 = *((_DWORD *)v44 - 2);
          v91 = *(_DWORD *)(a1 + 124);
          v120 = v92;
          if ( (v92 & v91) != 0 )
            v120 = *(_DWORD *)(a1 + 136) ^ v92;
          v93 = v120;
        }
        else
        {
          v93 = *((_WORD *)v44 - 4);
        }
        if ( v38 <= v93 )
          break;
        v44 = (_QWORD *)*v44;
      }
      while ( (_QWORD *)v34 != v44 );
    }
    v47 = (__int64 *)v44[1];
    v48 = (_QWORD *)(v29 + 16);
    if ( (_QWORD *)*v47 == v44 )
    {
      *v48 = v44;
      *(_QWORD *)(v29 + 24) = v47;
      *v47 = (__int64)v48;
      v44[1] = v48;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v44, 0, *v47, 0LL);
      v34 = a1 + 336;
    }
    *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v29 + 8);
    v49 = *(__int64 **)(a1 + 312);
    if ( v49 )
    {
      v50 = *(unsigned __int16 *)(v29 + 8);
      if ( v50 < *((unsigned int *)v49 + 2) )
      {
LABEL_125:
        v52 = *(unsigned __int16 *)(v29 + 8);
      }
      else
      {
        while ( 1 )
        {
          v51 = (__int64 *)*v49;
          if ( !*v49 )
            break;
          v49 = (__int64 *)*v49;
          if ( v50 < *((unsigned int *)v51 + 2) )
            goto LABEL_125;
        }
        v52 = *((_DWORD *)v49 + 2) - 1;
      }
      v53 = v52 - *((_DWORD *)v49 + 6);
      if ( *((_DWORD *)v49 + 3) )
        v54 = 2 * v53;
      else
        v54 = v53;
      ++*((_DWORD *)v49 + 4);
      v55 = 8 * v54;
      v56 = v49[6];
      v114 = v55;
      v57 = *(__int64 **)(v55 + v56);
      LODWORD(v56) = *((_DWORD *)v49 + 2) - 1;
      v110 = v57;
      if ( v52 == (_DWORD)v56 )
        ++*((_DWORD *)v49 + 5);
      if ( !v57 || (LOBYTE(v34) = 1, v82 = RtlpHeapListCompare(a1, v57, v50, v34), v57 = v110, v82 <= 0) )
        *(_QWORD *)(v114 + v49[6]) = v48;
      v34 = a1 + 336;
      if ( !v57 )
        *(_DWORD *)(v49[5] + 4LL * (v53 >> 5)) |= 1 << (v53 & 0x1F);
    }
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_BYTE *)(v29 + 11) = *(_BYTE *)(v29 + 8) ^ *(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10);
      *(_DWORD *)(v29 + 8) ^= *(_DWORD *)(a1 + 136);
    }
    v32 = (unsigned __int64)v112;
    v28 -= v111;
    v30 = v125;
    v29 += 16 * v111;
    v114 = v28;
    if ( v29 >= v112[9] )
      goto LABEL_71;
    v33 = v122;
    if ( v28 )
      continue;
    break;
  }
  *(_WORD *)(v29 + 12) = *(_WORD *)(a1 + 140) ^ v125;
  if ( !v125 && RtlpHeapErrorHandlerThreshold >= 1 && ((v29 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v29 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v32, v34);
    else
      DbgPrint("HEAP: ", 65280LL, v32, v34);
    DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
    RtlpHeapHandleError(1LL);
  }
LABEL_71:
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v6 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v6);
  }
  return v6;
}
