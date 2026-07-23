/*
 * XREFs of RtlpExtendHeap @ 0x1800334C0
 * Callers:
 *     RtlpAllocateHeap @ 0x180030C30 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpHeapListCompare @ 0x180007060 (RtlpHeapListCompare.c)
 *     RtlpInitializeHeapSegment @ 0x180007164 (RtlpInitializeHeapSegment.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpFindAndCommitPages @ 0x180034110 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpGetHeapProtection @ 0x1800374CC (RtlpGetHeapProtection.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpCoalesceHeap @ 0x180078F24 (RtlpCoalesceHeap.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     ZwAllocateVirtualMemory @ 0x180093A80 (ZwAllocateVirtualMemory.c)
 *     RtlCompareMemoryUlong @ 0x180095F60 (RtlCompareMemoryUlong.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapHandleError @ 0x1800EEE50 (RtlpHeapHandleError.c)
 *     RtlpHeapLogRangeReserve @ 0x1800EEFF4 (RtlpHeapLogRangeReserve.c)
 *     RtlpLogHeapCommit @ 0x1800EF668 (RtlpLogHeapCommit.c)
 *     RtlpLogHeapExtendEvent @ 0x1800EF8B8 (RtlpLogHeapExtendEvent.c)
 */

unsigned __int64 __fastcall RtlpExtendHeap(__int64 **BaseAddress, unsigned __int64 a2)
{
  _BYTE *v4; // r15
  __int64 v5; // rax
  unsigned __int64 v6; // rsi
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
  ULONG_PTR v28; // r13
  unsigned __int64 v29; // r14
  __int16 v30; // di
  unsigned __int8 v31; // al
  __int64 *v32; // r8
  char v33; // al
  __int64 **v34; // r9
  unsigned __int16 v35; // cx
  __int64 *v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  __int64 *v39; // rcx
  __int64 v40; // rax
  int v41; // esi
  __int64 v42; // r8
  _DWORD *v43; // r12
  __int64 *v44; // rdi
  __int64 v45; // r15
  __int64 *v46; // rax
  __int64 *v47; // rax
  __int64 **v48; // r12
  __int64 *v49; // rdi
  unsigned __int64 v50; // r8
  __int64 v51; // rax
  int v52; // ecx
  unsigned int v53; // r15d
  __int64 v54; // rax
  __int64 v55; // rdx
  __int64 v56; // rax
  __int64 v57; // rdx
  unsigned __int64 result; // rax
  int v59; // ecx
  int v60; // eax
  __int64 *v61; // r15
  __int64 v62; // rax
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
  unsigned __int64 v83; // rax
  ULONG_PTR v84; // rdi
  ULONG Protect; // esi
  unsigned __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // r9
  __int64 v89; // rdx
  int v90; // ecx
  int v91; // eax
  unsigned __int16 v92; // ax
  __int64 v93; // rax
  __int64 v94; // rdi
  unsigned int v95; // edx
  __int64 v96; // r9
  int v97; // eax
  __int64 v98; // rdi
  __int64 v99; // rax
  SIZE_T v100; // rsi
  SIZE_T v101; // r14
  SIZE_T v102; // r14
  SIZE_T v103; // r12
  _DWORD *v104; // r9
  unsigned __int64 v105; // r8
  ULONG_PTR v106; // rcx
  PVOID BaseAddressa; // [rsp+40h] [rbp-69h] BYREF
  __int64 v108; // [rsp+48h] [rbp-61h]
  ULONG_PTR RegionSize; // [rsp+50h] [rbp-59h] BYREF
  unsigned __int64 v110; // [rsp+58h] [rbp-51h]
  __int64 *v111; // [rsp+60h] [rbp-49h]
  ULONG_PTR v112; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR v113; // [rsp+70h] [rbp-39h]
  int v114; // [rsp+80h] [rbp-29h]
  int v115; // [rsp+90h] [rbp-19h]
  unsigned __int64 v116; // [rsp+98h] [rbp-11h]
  int v117; // [rsp+A8h] [rbp-1h]
  int v118; // [rsp+B8h] [rbp+Fh]
  int v119; // [rsp+C8h] [rbp+1Fh]
  __int64 v120; // [rsp+118h] [rbp+6Fh]
  char v121; // [rsp+118h] [rbp+6Fh]
  __int64 v122; // [rsp+118h] [rbp+6Fh]
  int v123; // [rsp+120h] [rbp+77h]
  __int16 v124; // [rsp+120h] [rbp+77h]
  __int64 v125; // [rsp+120h] [rbp+77h]
  ULONG_PTR v126; // [rsp+128h] [rbp+7Fh] BYREF

  v126 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(BaseAddress, &v126);
  v116 = v5;
  v6 = v5;
  if ( !v5 )
  {
    if ( ((_BYTE)BaseAddress[14] & 2) != 0 )
    {
      v83 = (unsigned __int64)BaseAddress[20];
      v84 = a2 + 0x2000;
      BaseAddressa = 0LL;
      if ( a2 + 0x2000 > v83 )
        v83 = a2 + 0x2000;
      if ( (*((_BYTE *)BaseAddress + 378) != 2 || !BaseAddress[46]) && v83 >= 0x3F4000 )
        *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
      RegionSize = (v83 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      if ( RegionSize >= 0xFD0000 )
        RegionSize = 16580608LL;
      Protect = RtlpGetHeapProtection(BaseAddress);
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
      {
        while ( RegionSize != v84 )
        {
          v106 = RegionSize >> 1;
          if ( RegionSize >> 1 < v84 )
            v106 = a2 + 0x2000;
          RegionSize = v106;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) >= 0 )
            goto LABEL_145;
        }
        ++*((_DWORD *)BaseAddress + 148);
      }
      else
      {
LABEL_145:
        BaseAddress[20] = (__int64 *)((char *)BaseAddress[20] + RegionSize);
        v86 = (unsigned __int64)BaseAddress[21];
        if ( a2 + 4096 > v86 )
          v86 = a2 + 4096;
        v112 = (v86 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &v112, 0x1000u, Protect) >= 0
          && RtlpInitializeHeapSegment(
               (char *)BaseAddress,
               (__int64)BaseAddressa,
               112LL,
               v88,
               2,
               (__int64)BaseAddressa,
               (char *)BaseAddressa + v112,
               (unsigned __int64)BaseAddressa + RegionSize - 4096) )
        {
          if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapCommit(BaseAddress, BaseAddressa, v112, 4LL);
            RtlpLogHeapExtendEvent(
              (int)BaseAddress,
              *((_QWORD *)BaseAddressa + 8),
              v112,
              16 * (unsigned int)BaseAddress[24],
              (HANDLE)MEMORY[0x7FFE0380]);
          }
          if ( MEMORY[0x7FFE038A] )
            RtlpLogHeapExtendEvent(
              (int)BaseAddress,
              *((_QWORD *)BaseAddressa + 8),
              v112,
              16 * (unsigned int)BaseAddress[24],
              (HANDLE)MEMORY[0x7FFE038A]);
          if ( MEMORY[0x7FFE0388] )
            RtlpHeapLogRangeReserve(BaseAddress, BaseAddressa, RegionSize);
          v89 = *((_QWORD *)BaseAddressa + 8);
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            *(_DWORD *)(v89 + 8) ^= *((_DWORD *)BaseAddress + 34);
            if ( *(_BYTE *)(v89 + 11) != (*(_BYTE *)(v89 + 8) ^ (unsigned __int8)(*(_BYTE *)(v89 + 9) ^ *(_BYTE *)(v89 + 10))) )
              RtlpAnalyzeHeapFailure(BaseAddress, v89);
          }
          return *((_QWORD *)BaseAddressa + 8);
        }
        RtlpSecMemFreeVirtualMemory(v87, &BaseAddressa, &RegionSize, 0x8000LL);
      }
    }
    if ( *((char *)BaseAddress + 112) >= 0
      || (result = RtlpCoalesceHeap(BaseAddress), (v4 = (_BYTE *)result) == 0LL)
      || *(unsigned __int16 *)(result + 8) < a2 )
    {
      if ( v4 && *((_DWORD *)BaseAddress + 31) )
      {
        v4[11] = v4[8] ^ v4[9] ^ v4[10];
        *((_DWORD *)v4 + 2) ^= *((_DWORD *)BaseAddress + 34);
      }
      return 0LL;
    }
    return result;
  }
  v126 >>= 4;
  v7 = v5 - 16 * (*((unsigned __int16 *)BaseAddress + 70) ^ (unsigned __int64)*(unsigned __int16 *)(v5 + 12));
  if ( v7 != v5
    && ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)((*((_DWORD *)BaseAddress + 31) >> 20) & *((_BYTE *)BaseAddress + 138))) & 1) == 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v7 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v7 + 11) != (*(_BYTE *)(v7 + 8) ^ (unsigned __int8)(*(_BYTE *)(v7 + 9) ^ *(_BYTE *)(v7 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v7);
    }
    v8 = *(_QWORD *)(v7 + 16);
    v9 = (_QWORD *)(v7 + 16);
    v10 = *(__int64 **)(v7 + 24);
    v11 = *(_QWORD *)(v8 + 8);
    v12 = *v10;
    if ( *v10 == v11 && (_QWORD *)v12 == v9 )
    {
      BaseAddress[24] = (__int64 *)((char *)BaseAddress[24] - *(unsigned __int16 *)(v7 + 8));
      v13 = BaseAddress[39];
      if ( v13 )
      {
        v14 = *(unsigned __int16 *)(v7 + 8);
        v123 = *(unsigned __int16 *)(v7 + 8);
        if ( v14 >= *((unsigned int *)v13 + 2) )
        {
          while ( 1 )
          {
            v62 = *v13;
            if ( !*v13 )
              break;
            v13 = (__int64 *)*v13;
            if ( v14 < *(unsigned int *)(v62 + 8) )
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
        v111 = (__int64 *)v19;
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
            v120 = v22;
            if ( v22 == v13[4] )
              goto LABEL_25;
            v23 = *(_DWORD *)(v22 - 8);
            v24 = *((_DWORD *)BaseAddress + 31) == 0;
            v115 = v23;
            if ( !v24 )
            {
              v115 = *((_DWORD *)BaseAddress + 34) ^ v23;
              if ( HIBYTE(v115) != (BYTE2(v115) ^ (unsigned __int8)(BYTE1(v115) ^ v115)) )
              {
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v22 - 16, 0, 0LL, 0LL);
                LODWORD(v14) = v123;
                v19 = (__int64)v111;
                v22 = v120;
              }
            }
            if ( (_DWORD)v14 == (unsigned __int16)v115 )
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
      if ( (*(_BYTE *)(v7 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
      {
        v25 = *(_BYTE *)(v7 + 10);
        if ( (v25 & 4) != 0 )
        {
          v100 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v25 & 2) != 0 && v100 > 4 )
            v100 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v101 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v100, 0xFEEEFEEE);
          if ( v101 != v100 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v101 + v7 + 32));
            RtlpBreakPointHeap(v7);
          }
        }
        v26 = *(unsigned __int16 *)(v7 + 8);
        v6 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        v116 = v7;
        v126 += v26;
        *(_WORD *)(v7 + 8) = v126;
        *(_WORD *)(v7 + 16 * v126 + 12) = v126 ^ *((_WORD *)BaseAddress + 70);
      }
      else
      {
        RtlpDeCommitFreeBlock(BaseAddress, v7, *(unsigned __int16 *)(v7 + 8), 1);
      }
    }
    else
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v9, v11, v12, 0LL);
    }
  }
  v27 = v6 + 16 * v126;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v114 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v27 + 8);
    if ( HIBYTE(v114) != (BYTE2(v114) ^ (unsigned __int8)(BYTE1(v114) ^ v114)) )
      RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v6 + 16 * v126, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v27 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) == 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v27 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v27 + 11) != (*(_BYTE *)(v27 + 8) ^ (unsigned __int8)(*(_BYTE *)(v27 + 9) ^ *(_BYTE *)(v27 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v27);
    }
    v63 = *(_QWORD *)(v27 + 16);
    v64 = (_QWORD *)(v27 + 16);
    v111 = *(__int64 **)(v27 + 24);
    v125 = v63;
    v65 = *(_QWORD *)(v63 + 8);
    v66 = *v111;
    if ( *v111 == v65 && (_QWORD *)v66 == v64 )
    {
      BaseAddress[24] = (__int64 *)((char *)BaseAddress[24] - *(unsigned __int16 *)(v27 + 8));
      v67 = BaseAddress[39];
      if ( v67 )
      {
        v68 = *(unsigned __int16 *)(v27 + 8);
        if ( v68 >= *((unsigned int *)v67 + 2) )
        {
          while ( 1 )
          {
            v99 = *v67;
            if ( !*v67 )
              break;
            v67 = (__int64 *)*v67;
            if ( v68 < *(unsigned int *)(v99 + 8) )
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
        v122 = 8 * v71;
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
              v24 = *((_DWORD *)BaseAddress + 31) == 0;
              v117 = v77;
              if ( !v24 )
              {
                v117 = *((_DWORD *)BaseAddress + 34) ^ v77;
                if ( HIBYTE(v117) != ((unsigned __int8)v117 ^ (unsigned __int8)(BYTE1(v117) ^ BYTE2(v117))) )
                {
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v76 - 16, 0, 0LL, 0LL);
                  v73 = v122;
                  v63 = v125;
                }
              }
              if ( (_DWORD)v68 == (unsigned __int16)v117 )
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
      v79 = v111;
      *v111 = v63;
      *(_QWORD *)(v63 + 8) = v79;
      if ( (*(_BYTE *)(v27 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
      {
        v80 = *(_BYTE *)(v27 + 10);
        if ( (v80 & 4) != 0 )
        {
          v102 = 16LL * *(unsigned __int16 *)(v27 + 8) - 32;
          if ( (v80 & 2) != 0 && v102 > 4 )
            v102 = 16LL * *(unsigned __int16 *)(v27 + 8) - 36;
          v103 = RtlCompareMemoryUlong((PVOID)(v27 + 32), v102, 0xFEEEFEEE);
          if ( v103 != v102 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v27,
              (const void *)(v103 + v27 + 32));
            RtlpBreakPointHeap(v27);
          }
        }
        *(_BYTE *)(v6 + 10) = 0;
        *(_BYTE *)(v6 + 15) = 0;
        v126 += *(unsigned __int16 *)(v27 + 8);
        *(_WORD *)(v6 + 8) = v126;
        *(_WORD *)(16 * v126 + v6 + 12) = v126 ^ *((_WORD *)BaseAddress + 70);
        break;
      }
      RtlpDeCommitFreeBlock(BaseAddress, v27, *(unsigned __int16 *)(v27 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v64, v65, v66, 0LL);
    }
  }
  v28 = v126;
  v29 = v6;
  v113 = v126;
  if ( !v126 )
    goto LABEL_71;
  v30 = *((_WORD *)BaseAddress + 70) ^ *(_WORD *)(v6 + 12);
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
    v32 = (__int64 *)((v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v31 << 16) + 0x10000);
  else
    v32 = (__int64 *)BaseAddress;
  v33 = *(_BYTE *)(v6 + 10);
  v34 = BaseAddress + 42;
  v121 = v33;
  v111 = v32;
  while ( 2 )
  {
    if ( v28 > 0xFF00 )
    {
      v35 = -256;
      v124 = -256;
      if ( v28 == 65281 )
      {
        v35 = -272;
        v124 = -272;
      }
      *(_BYTE *)(v29 + 10) = 0;
    }
    else
    {
      v35 = v28;
      *(_BYTE *)(v29 + 10) = v33;
      v124 = v28;
    }
    *(_WORD *)(v29 + 12) = *((_WORD *)BaseAddress + 70) ^ v30;
    v36 = (__int64 *)v32[5];
    if ( v36 == v32 )
    {
      LOBYTE(v37) = 0;
    }
    else
    {
      v37 = ((v29 - (unsigned __int64)v32) >> 16) + 1;
      if ( (v29 - (unsigned __int64)v32) >> 16 > 0xFC )
      {
        RtlpLogHeapFailure(3, (_DWORD)v36, v29, (_DWORD)v32, 0LL, 0LL);
        v35 = v124;
        v34 = BaseAddress + 42;
      }
    }
    *(_BYTE *)(v29 + 10) &= 0xF0u;
    *(_BYTE *)(v29 + 14) = v37;
    *(_WORD *)(v29 + 8) = v35;
    *(_BYTE *)(v29 + 11) = 0;
    v38 = v35;
    *(_BYTE *)(v29 + 15) = 0;
    v24 = ((_BYTE)BaseAddress[14] & 0x40) == 0;
    v110 = v35;
    if ( !v24 )
    {
      v104 = (_DWORD *)(v29 + 32);
      v105 = (16 * (unsigned __int64)v35 - 32) >> 2;
      if ( v105 )
      {
        if ( ((unsigned __int8)v104 & 4) == 0 )
          goto LABEL_226;
        *v104 = -17891602;
        if ( --v105 )
        {
          v104 = (_DWORD *)(v29 + 36);
LABEL_226:
          memset64(v104, 0xFEEEFEEEFEEEFEEEuLL, v105 >> 1);
          if ( (v105 & 1) != 0 )
            v104[v105 - 1] = -17891602;
        }
      }
      *(_BYTE *)(v29 + 10) |= 4u;
      v34 = BaseAddress + 42;
    }
    v39 = BaseAddress[39];
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
          v40 = *v39;
          if ( !*v39 )
            break;
          v39 = (__int64 *)*v39;
          if ( v38 < *(unsigned int *)(v40 + 8) )
            goto LABEL_123;
        }
        v41 = *((_DWORD *)v39 + 2) - 1;
      }
      v42 = (__int64)v39;
      v43 = v39 + 3;
      while ( 2 )
      {
        v108 = v42;
        v44 = *(__int64 **)(v42 + 32);
        v45 = (unsigned int)(v41 - *v43);
        v46 = (__int64 *)v44[1];
        if ( v44 == v46 )
          goto LABEL_49;
        v59 = *((_DWORD *)v46 - 2);
        v24 = *((_DWORD *)BaseAddress + 31) == 0;
        v118 = v59;
        if ( !v24 )
        {
          v118 = *((_DWORD *)BaseAddress + 34) ^ v59;
          if ( HIBYTE(v118) != ((unsigned __int8)v118 ^ (unsigned __int8)(BYTE1(v118) ^ BYTE2(v118))) )
          {
            RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)v46 - 16, 0, 0LL, 0LL);
            v42 = v108;
          }
        }
        v38 = v110;
        if ( (int)(v110 - (unsigned __int16)v118) > 0 )
          goto LABEL_49;
        v60 = RtlpHeapListCompare((__int64)BaseAddress, *v44, v110, 1);
        v42 = v108;
        if ( v60 <= 0 )
        {
          v44 = (__int64 *)*v44;
          goto LABEL_171;
        }
        if ( *(_QWORD *)v108 || v41 != *(_DWORD *)(v108 + 8) - 1 )
        {
          v93 = *(_QWORD *)(v108 + 40);
          v94 = (unsigned int)v45 >> 5;
          v95 = *(_DWORD *)(v93 + 4 * v94) & ~((1 << (v45 & 0x1F)) - 1);
          v96 = v93 + 4 * v94;
          if ( v95 )
          {
LABEL_175:
            if ( (_WORD)v95 )
            {
              if ( (_BYTE)v95 )
                v97 = RtlpBitsClearLow[(unsigned __int8)v95];
              else
                v97 = RtlpBitsClearLow[BYTE1(v95)] + 8;
            }
            else if ( (v95 & 0xFF0000) != 0 )
            {
              v97 = RtlpBitsClearLow[BYTE2(v95)] + 16;
            }
            else
            {
              v97 = RtlpBitsClearLow[(unsigned __int64)v95 >> 24] + 24;
            }
            v98 = (unsigned int)(v97 + 32 * v94);
            if ( *(_DWORD *)(v108 + 12) )
              v98 = (unsigned int)(2 * v98);
            v44 = *(__int64 **)(*(_QWORD *)(v108 + 48) + 8 * v98);
            goto LABEL_171;
          }
          while ( (unsigned int)v94 <= ((unsigned int)(*(_DWORD *)(v108 + 8) - *v43) >> 5) - 1 )
          {
            v95 = *(_DWORD *)(v96 + 4);
            v96 += 4LL;
            LODWORD(v94) = v94 + 1;
            if ( v95 )
              goto LABEL_175;
          }
        }
        else
        {
          if ( *(_DWORD *)(v108 + 12) )
            v45 = (unsigned int)(2 * v45);
          v61 = *(__int64 **)(*(_QWORD *)(v108 + 48) + 8 * v45);
          if ( v44 != v61 )
          {
            while ( (int)RtlpHeapListCompare((__int64)BaseAddress, (__int64)v61, v110, 1) > 0 )
            {
              v61 = (__int64 *)*v61;
              if ( v44 == v61 )
              {
                v42 = v108;
                goto LABEL_230;
              }
            }
            v42 = v108;
            v44 = v61;
LABEL_171:
            v38 = v110;
LABEL_49:
            if ( v44 )
            {
              v6 = v116;
              v34 = BaseAddress + 42;
              v28 = v113;
              goto LABEL_51;
            }
          }
        }
LABEL_230:
        v42 = *(_QWORD *)v42;
        v41 = *(_DWORD *)(v42 + 24);
        v43 = (_DWORD *)(v42 + 24);
        v38 = v110;
        continue;
      }
    }
    v44 = *v34;
LABEL_51:
    if ( v34 != (__int64 **)v44 )
    {
      v90 = *((_DWORD *)BaseAddress + 31);
      do
      {
        if ( v90 )
        {
          v91 = *((_DWORD *)v44 - 2);
          v90 = *((_DWORD *)BaseAddress + 31);
          v119 = v91;
          if ( (v91 & v90) != 0 )
            v119 = *((_DWORD *)BaseAddress + 34) ^ v91;
          v92 = v119;
        }
        else
        {
          v92 = *((_WORD *)v44 - 4);
        }
        if ( v38 <= v92 )
          break;
        v44 = (__int64 *)*v44;
      }
      while ( v34 != (__int64 **)v44 );
    }
    v47 = (__int64 *)v44[1];
    v48 = (__int64 **)(v29 + 16);
    if ( (__int64 *)*v47 == v44 )
    {
      *v48 = v44;
      *(_QWORD *)(v29 + 24) = v47;
      *v47 = (__int64)v48;
      v44[1] = (__int64)v48;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v44, 0, *v47, 0LL);
      v34 = BaseAddress + 42;
    }
    BaseAddress[24] = (__int64 *)((char *)BaseAddress[24] + *(unsigned __int16 *)(v29 + 8));
    v49 = BaseAddress[39];
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
          v51 = *v49;
          if ( !*v49 )
            break;
          v49 = (__int64 *)*v49;
          if ( v50 < *(unsigned int *)(v51 + 8) )
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
      v113 = v55;
      v57 = *(_QWORD *)(v55 + v56);
      LODWORD(v56) = *((_DWORD *)v49 + 2) - 1;
      v108 = v57;
      if ( v52 == (_DWORD)v56 )
        ++*((_DWORD *)v49 + 5);
      if ( !v57 || (v82 = RtlpHeapListCompare((__int64)BaseAddress, v57, v50, 1), v57 = v108, v82 <= 0) )
        *(_QWORD *)(v113 + v49[6]) = v48;
      v34 = BaseAddress + 42;
      if ( !v57 )
        *(_DWORD *)(v49[5] + 4LL * (v53 >> 5)) |= 1 << (v53 & 0x1F);
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v29 + 11) = *(_BYTE *)(v29 + 8) ^ *(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10);
      *(_DWORD *)(v29 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    v32 = v111;
    v28 -= v110;
    v30 = v124;
    v29 += 16 * v110;
    v113 = v28;
    if ( v29 >= v111[9] )
      goto LABEL_71;
    v33 = v121;
    if ( v28 )
      continue;
    break;
  }
  *(_WORD *)(v29 + 12) = *((_WORD *)BaseAddress + 70) ^ v124;
  if ( !v124 && RtlpHeapErrorHandlerThreshold >= 1 && ((v29 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v29 )
  {
    if ( NtCurrentPeb()->Ldr )
      DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink, v32, v34);
    else
      DbgPrint("HEAP: ", 65280LL, v32, v34);
    DbgPrint("ROUND_UP_TO_POWER2(FreeBlock, PAGE_SIZE) == (ULONG_PTR)FreeBlock");
    RtlpHeapHandleError(1LL);
  }
LABEL_71:
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v6 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v6 + 11) != (*(_BYTE *)(v6 + 8) ^ (unsigned __int8)(*(_BYTE *)(v6 + 9) ^ *(_BYTE *)(v6 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v6);
  }
  return v6;
}
