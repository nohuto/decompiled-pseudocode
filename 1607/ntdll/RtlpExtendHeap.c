/*
 * XREFs of RtlpExtendHeap @ 0x180027780
 * Callers:
 *     RtlpAllocateHeap @ 0x180025050 (RtlpAllocateHeap.c)
 * Callees:
 *     RtlpFindAndCommitPages @ 0x1800283F0 (RtlpFindAndCommitPages.c)
 *     RtlpCommitBlock @ 0x180028B24 (RtlpCommitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DEC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x1800436D4 (RtlpGetHeapProtection.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 *     RtlpHeapListCompare @ 0x18004C404 (RtlpHeapListCompare.c)
 *     RtlpInitializeHeapSegment @ 0x18004CCBC (RtlpInitializeHeapSegment.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpCoalesceHeap @ 0x180090B34 (RtlpCoalesceHeap.c)
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

__int64 __fastcall RtlpExtendHeap(unsigned __int16 *BaseAddress, unsigned __int64 a2)
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
  ULONG_PTR v27; // rdi
  ULONG_PTR v28; // r13
  unsigned __int64 v29; // r14
  __int16 v30; // di
  unsigned __int8 v31; // al
  unsigned __int16 *v32; // r8
  char v33; // al
  char *v34; // r9
  unsigned __int16 v35; // cx
  unsigned __int16 *v36; // rdx
  __int64 v37; // rdi
  unsigned __int64 v38; // rdx
  __int64 *v39; // rcx
  __int64 *v40; // rax
  int v41; // esi
  __int64 *v42; // r8
  _DWORD *v43; // r12
  char *v44; // rdi
  __int64 v45; // r15
  char *v46; // rax
  __int64 *v47; // rax
  char **v48; // r12
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
  char *v61; // r15
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
  unsigned __int64 v83; // rax
  ULONG_PTR v84; // rdi
  ULONG Protect; // esi
  unsigned __int64 v86; // rdx
  __int64 v87; // rcx
  __int64 v88; // rdx
  int v89; // ecx
  int v90; // eax
  unsigned __int16 v91; // ax
  __int64 v92; // rax
  __int64 v93; // rdi
  unsigned int v94; // edx
  int v95; // eax
  __int64 v96; // rdi
  __int64 *v97; // rax
  SIZE_T v98; // rsi
  SIZE_T v99; // r14
  SIZE_T v100; // r14
  SIZE_T v101; // r12
  _DWORD *v102; // r9
  unsigned __int64 v103; // r8
  ULONG_PTR v104; // rcx
  PVOID BaseAddressa; // [rsp+40h] [rbp-69h] BYREF
  ULONG_PTR RegionSize; // [rsp+48h] [rbp-61h] BYREF
  __int64 *v107; // [rsp+50h] [rbp-59h]
  unsigned __int64 v108; // [rsp+58h] [rbp-51h]
  __int64 *v109; // [rsp+60h] [rbp-49h]
  ULONG_PTR v110; // [rsp+68h] [rbp-41h] BYREF
  ULONG_PTR v111; // [rsp+70h] [rbp-39h]
  __int64 v112; // [rsp+78h] [rbp-31h]
  int v113; // [rsp+88h] [rbp-21h]
  int v114; // [rsp+98h] [rbp-11h]
  int v115; // [rsp+A8h] [rbp-1h]
  int v116; // [rsp+B8h] [rbp+Fh]
  int v117; // [rsp+C8h] [rbp+1Fh]
  __int64 v118; // [rsp+118h] [rbp+6Fh]
  char v119; // [rsp+118h] [rbp+6Fh]
  __int64 v120; // [rsp+118h] [rbp+6Fh]
  int v121; // [rsp+120h] [rbp+77h]
  __int16 v122; // [rsp+120h] [rbp+77h]
  __int64 v123; // [rsp+120h] [rbp+77h]
  ULONG_PTR v124; // [rsp+128h] [rbp+7Fh] BYREF

  v124 = ((_DWORD)a2 + 4095) & 0xFFFFF000;
  v4 = 0LL;
  v5 = RtlpFindAndCommitPages(BaseAddress, &v124);
  v112 = v5;
  v6 = v5;
  if ( !v5 )
  {
    if ( (BaseAddress[56] & 2) != 0 )
    {
      v83 = *((_QWORD *)BaseAddress + 20);
      v84 = a2 + 0x2000;
      BaseAddressa = 0LL;
      if ( a2 + 0x2000 > v83 )
        v83 = a2 + 0x2000;
      if ( (*((_BYTE *)BaseAddress + 386) != 2 || !*((_QWORD *)BaseAddress + 47)) && v83 >= 0x3F4000 )
        *((_DWORD *)BaseAddress + 30) |= 0x20000000u;
      RegionSize = (v83 + 0xFFFF) & 0xFFFFFFFFFFFF0000uLL;
      if ( RegionSize >= 0xFD0000 )
        RegionSize = 16580608LL;
      Protect = RtlpGetHeapProtection(BaseAddress);
      if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) < 0 )
      {
        while ( RegionSize != v84 )
        {
          v104 = RegionSize >> 1;
          if ( RegionSize >> 1 < v84 )
            v104 = a2 + 0x2000;
          RegionSize = v104;
          if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &RegionSize, 0x2000u, Protect) >= 0 )
            goto LABEL_145;
        }
        ++*((_DWORD *)BaseAddress + 150);
      }
      else
      {
LABEL_145:
        *((_QWORD *)BaseAddress + 20) += RegionSize;
        v86 = *((_QWORD *)BaseAddress + 21);
        if ( a2 + 4096 > v86 )
          v86 = a2 + 4096;
        v110 = (v86 + 4095) & 0xFFFFFFFFFFFFF000uLL;
        if ( ZwAllocateVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddressa, 0LL, &v110, 0x1000u, Protect) >= 0
          && (unsigned __int8)RtlpInitializeHeapSegment(
                                BaseAddress,
                                2,
                                (__int64)BaseAddressa,
                                (char *)BaseAddressa + v110,
                                (__int64)BaseAddressa + RegionSize - 4096) )
        {
          if ( MEMORY[0x7FFE0380] && (NtCurrentPeb()->TracingFlags & 1) != 0 )
          {
            RtlpLogHeapCommit(BaseAddress, BaseAddressa, v110, 4LL);
            RtlpLogHeapExtendEvent(
              (int)BaseAddress,
              *((_QWORD *)BaseAddressa + 8),
              v110,
              16 * *((_QWORD *)BaseAddress + 24),
              (HANDLE)MEMORY[0x7FFE0380]);
          }
          if ( MEMORY[0x7FFE038A] )
            RtlpLogHeapExtendEvent(
              (int)BaseAddress,
              *((_QWORD *)BaseAddressa + 8),
              v110,
              16 * *((_QWORD *)BaseAddress + 24),
              (HANDLE)MEMORY[0x7FFE038A]);
          if ( MEMORY[0x7FFE0388] )
            RtlpHeapLogRangeReserve(BaseAddress, BaseAddressa, RegionSize);
          v88 = *((_QWORD *)BaseAddressa + 8);
          if ( *((_DWORD *)BaseAddress + 31) )
          {
            *(_DWORD *)(v88 + 8) ^= *((_DWORD *)BaseAddress + 34);
            if ( *(_BYTE *)(v88 + 11) != (*(_BYTE *)(v88 + 8) ^ (unsigned __int8)(*(_BYTE *)(v88 + 9) ^ *(_BYTE *)(v88 + 10))) )
              RtlpAnalyzeHeapFailure(BaseAddress, v88);
          }
          return *((_QWORD *)BaseAddressa + 8);
        }
        RtlpSecMemFreeVirtualMemory(v87, &BaseAddressa, &RegionSize, 0x8000LL);
      }
    }
    if ( *((char *)BaseAddress + 112) >= 0
      || (result = RtlpCoalesceHeap((int)BaseAddress), (v4 = (_BYTE *)result) == 0LL)
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
  v124 >>= 4;
  v7 = v5 - 16 * (BaseAddress[70] ^ (unsigned __int64)*(unsigned __int16 *)(v5 + 12));
  if ( v7 != v5
    && ((*(_BYTE *)(v7 + 10) ^ (unsigned __int8)((*((_DWORD *)BaseAddress + 31) >> 20) & BaseAddress[69])) & 1) == 0 )
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
      *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v7 + 8);
      v13 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v13 )
      {
        v14 = *(unsigned __int16 *)(v7 + 8);
        v121 = *(unsigned __int16 *)(v7 + 8);
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
        v109 = (__int64 *)v19;
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
            v118 = v22;
            if ( v22 == v13[4] )
              goto LABEL_25;
            v23 = *(_DWORD *)(v22 - 8);
            v24 = *((_DWORD *)BaseAddress + 31) == 0;
            v113 = v23;
            if ( !v24 )
            {
              v113 = *((_DWORD *)BaseAddress + 34) ^ v23;
              if ( HIBYTE(v113) != (BYTE2(v113) ^ (unsigned __int8)(BYTE1(v113) ^ v113)) )
              {
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v22 - 16, 0, 0LL, 0LL);
                LODWORD(v14) = v121;
                v19 = (__int64)v109;
                v22 = v118;
              }
            }
            if ( (_DWORD)v14 == (unsigned __int16)v113 )
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
          v98 = 16LL * *(unsigned __int16 *)(v7 + 8) - 32;
          if ( (v25 & 2) != 0 && v98 > 4 )
            v98 = 16LL * *(unsigned __int16 *)(v7 + 8) - 36;
          v99 = RtlCompareMemoryUlong((PVOID)(v7 + 32), v98, 0xFEEEFEEE);
          if ( v99 != v98 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v7,
              (const void *)(v99 + v7 + 32));
            RtlpBreakPointHeap();
          }
        }
        v26 = *(unsigned __int16 *)(v7 + 8);
        v6 = v7;
        *(_BYTE *)(v7 + 10) = 0;
        *(_BYTE *)(v7 + 15) = 0;
        v112 = v7;
        v124 += v26;
        *(_WORD *)(v7 + 8) = v124;
        *(_WORD *)(v7 + 16 * v124 + 12) = v124 ^ BaseAddress[70];
      }
      else
      {
        RtlpDeCommitFreeBlock((int)BaseAddress);
      }
    }
    else
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v9, v11, v12, 0LL);
    }
  }
  v27 = v6 + 16 * v124;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v114 = *((_DWORD *)BaseAddress + 34) ^ *(_DWORD *)(v27 + 8);
    if ( HIBYTE(v114) != (BYTE2(v114) ^ (unsigned __int8)(BYTE1(v114) ^ v114)) )
      RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v6 + 16 * v124, 0, 0LL, 0LL);
  }
  while ( ((*(_BYTE *)(v27 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) == 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v27 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v27 + 11) != (*(_BYTE *)(v27 + 8) ^ (unsigned __int8)(*(_BYTE *)(v27 + 9) ^ *(_BYTE *)(v27 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v27);
    }
    v63 = *(_QWORD *)(v27 + 16);
    v64 = (_QWORD *)(v27 + 16);
    v109 = *(__int64 **)(v27 + 24);
    v123 = v63;
    v65 = *(_QWORD *)(v63 + 8);
    v66 = *v109;
    if ( *v109 == v65 && (_QWORD *)v66 == v64 )
    {
      *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v27 + 8);
      v67 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v67 )
      {
        v68 = *(unsigned __int16 *)(v27 + 8);
        if ( v68 >= *((unsigned int *)v67 + 2) )
        {
          while ( 1 )
          {
            v97 = (__int64 *)*v67;
            if ( !*v67 )
              break;
            v67 = (__int64 *)*v67;
            if ( v68 < *((unsigned int *)v97 + 2) )
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
        v120 = 8 * v71;
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
              v115 = v77;
              if ( !v24 )
              {
                v115 = *((_DWORD *)BaseAddress + 34) ^ v77;
                if ( HIBYTE(v115) != ((unsigned __int8)v115 ^ (unsigned __int8)(BYTE1(v115) ^ BYTE2(v115))) )
                {
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v76 - 16, 0, 0LL, 0LL);
                  v73 = v120;
                  v63 = v123;
                }
              }
              if ( (_DWORD)v68 == (unsigned __int16)v115 )
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
      v79 = v109;
      *v109 = v63;
      *(_QWORD *)(v63 + 8) = v79;
      if ( (*(_BYTE *)(v27 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
      {
        v80 = *(_BYTE *)(v27 + 10);
        if ( (v80 & 4) != 0 )
        {
          v100 = 16LL * *(unsigned __int16 *)(v27 + 8) - 32;
          if ( (v80 & 2) != 0 && v100 > 4 )
            v100 = 16LL * *(unsigned __int16 *)(v27 + 8) - 36;
          v101 = RtlCompareMemoryUlong((PVOID)(v27 + 32), v100, 0xFEEEFEEE);
          if ( v101 != v100 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v27,
              (const void *)(v101 + v27 + 32));
            RtlpBreakPointHeap();
          }
        }
        *(_BYTE *)(v6 + 10) = 0;
        *(_BYTE *)(v6 + 15) = 0;
        v124 += *(unsigned __int16 *)(v27 + 8);
        *(_WORD *)(v6 + 8) = v124;
        *(_WORD *)(16 * v124 + v6 + 12) = v124 ^ BaseAddress[70];
        break;
      }
      RtlpDeCommitFreeBlock((int)BaseAddress);
    }
    else
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v64, v65, v66, 0LL);
    }
  }
  v28 = v124;
  v29 = v6;
  v111 = v124;
  if ( !v124 )
    goto LABEL_71;
  v30 = BaseAddress[70] ^ *(_WORD *)(v6 + 12);
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
    v32 = (unsigned __int16 *)((v6 & 0xFFFFFFFFFFFF0000uLL) - ((unsigned __int64)v31 << 16) + 0x10000);
  else
    v32 = BaseAddress;
  v33 = *(_BYTE *)(v6 + 10);
  v34 = (char *)(BaseAddress + 168);
  v119 = v33;
  v109 = (__int64 *)v32;
  while ( 2 )
  {
    if ( v28 > 0xFF00 )
    {
      v35 = -256;
      v122 = -256;
      if ( v28 == 65281 )
      {
        v35 = -272;
        v122 = -272;
      }
      *(_BYTE *)(v29 + 10) = 0;
    }
    else
    {
      v35 = v28;
      *(_BYTE *)(v29 + 10) = v33;
      v122 = v28;
    }
    *(_WORD *)(v29 + 12) = BaseAddress[70] ^ v30;
    v36 = (unsigned __int16 *)*((_QWORD *)v32 + 5);
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
        v35 = v122;
        v34 = (char *)(BaseAddress + 168);
      }
    }
    *(_BYTE *)(v29 + 10) &= 0xF0u;
    *(_BYTE *)(v29 + 14) = v37;
    *(_WORD *)(v29 + 8) = v35;
    *(_BYTE *)(v29 + 11) = 0;
    v38 = v35;
    *(_BYTE *)(v29 + 15) = 0;
    v24 = (BaseAddress[56] & 0x40) == 0;
    v108 = v35;
    if ( !v24 )
    {
      v102 = (_DWORD *)(v29 + 32);
      v103 = (16 * (unsigned __int64)v35 - 32) >> 2;
      if ( v103 )
      {
        if ( ((unsigned __int8)v102 & 4) == 0 )
          goto LABEL_227;
        *v102 = -17891602;
        if ( --v103 )
        {
          v102 = (_DWORD *)(v29 + 36);
LABEL_227:
          memset64(v102, 0xFEEEFEEEFEEEFEEEuLL, v103 >> 1);
          if ( (v103 & 1) != 0 )
            v102[v103 - 1] = -17891602;
        }
      }
      *(_BYTE *)(v29 + 10) |= 4u;
      v34 = (char *)(BaseAddress + 168);
    }
    v39 = (__int64 *)*((_QWORD *)BaseAddress + 39);
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
        v107 = v42;
        v44 = (char *)v42[4];
        v45 = (unsigned int)(v41 - *v43);
        v46 = (char *)*((_QWORD *)v44 + 1);
        if ( v44 == v46 )
          goto LABEL_49;
        v59 = *((_DWORD *)v46 - 2);
        v24 = *((_DWORD *)BaseAddress + 31) == 0;
        v116 = v59;
        if ( !v24 )
        {
          v116 = *((_DWORD *)BaseAddress + 34) ^ v59;
          if ( HIBYTE(v116) != ((unsigned __int8)v116 ^ (unsigned __int8)(BYTE1(v116) ^ BYTE2(v116))) )
          {
            RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)v46 - 16, 0, 0LL, 0LL);
            v42 = v107;
          }
        }
        v38 = v108;
        if ( (int)(v108 - (unsigned __int16)v116) > 0 )
          goto LABEL_49;
        LOBYTE(v34) = 1;
        v60 = RtlpHeapListCompare(BaseAddress, *(_QWORD *)v44, v108, v34);
        v42 = v107;
        if ( v60 <= 0 )
        {
          v44 = *(char **)v44;
          goto LABEL_171;
        }
        if ( *v107 || v41 != *((_DWORD *)v107 + 2) - 1 )
        {
          v92 = v107[5];
          v93 = (unsigned int)v45 >> 5;
          v94 = *(_DWORD *)(v92 + 4 * v93) & ~((1 << (v45 & 0x1F)) - 1);
          v34 = (char *)(v92 + 4 * v93);
          if ( v94 )
          {
LABEL_175:
            if ( (_WORD)v94 )
            {
              if ( (_BYTE)v94 )
                v95 = RtlpBitsClearLow[(unsigned __int8)v94];
              else
                v95 = RtlpBitsClearLow[BYTE1(v94)] + 8;
            }
            else if ( (v94 & 0xFF0000) != 0 )
            {
              v95 = RtlpBitsClearLow[BYTE2(v94)] + 16;
            }
            else
            {
              v95 = RtlpBitsClearLow[(unsigned __int64)v94 >> 24] + 24;
            }
            v96 = (unsigned int)(v95 + 32 * v93);
            if ( *((_DWORD *)v107 + 3) )
              v96 = (unsigned int)(2 * v96);
            v44 = *(char **)(v107[6] + 8 * v96);
            goto LABEL_171;
          }
          while ( (unsigned int)v93 <= ((unsigned int)(*((_DWORD *)v107 + 2) - *v43) >> 5) - 1 )
          {
            v94 = *((_DWORD *)v34 + 1);
            v34 += 4;
            LODWORD(v93) = v93 + 1;
            if ( v94 )
              goto LABEL_175;
          }
        }
        else
        {
          if ( *((_DWORD *)v107 + 3) )
            v45 = (unsigned int)(2 * v45);
          v61 = *(char **)(v107[6] + 8 * v45);
          if ( v44 != v61 )
          {
            while ( 1 )
            {
              LOBYTE(v34) = 1;
              if ( (int)RtlpHeapListCompare(BaseAddress, v61, v108, v34) <= 0 )
                break;
              v61 = *(char **)v61;
              if ( v44 == v61 )
              {
                v42 = v107;
                goto LABEL_231;
              }
            }
            v42 = v107;
            v44 = v61;
LABEL_171:
            v38 = v108;
LABEL_49:
            if ( v44 )
            {
              v6 = v112;
              v34 = (char *)(BaseAddress + 168);
              v28 = v111;
              goto LABEL_51;
            }
          }
        }
LABEL_231:
        v42 = (__int64 *)*v42;
        v41 = *((_DWORD *)v42 + 6);
        v43 = v42 + 3;
        v38 = v108;
        continue;
      }
    }
    v44 = *(char **)v34;
LABEL_51:
    if ( v34 != v44 )
    {
      v89 = *((_DWORD *)BaseAddress + 31);
      do
      {
        if ( v89 )
        {
          v90 = *((_DWORD *)v44 - 2);
          v89 = *((_DWORD *)BaseAddress + 31);
          v117 = v90;
          if ( (v90 & v89) != 0 )
            v117 = *((_DWORD *)BaseAddress + 34) ^ v90;
          v91 = v117;
        }
        else
        {
          v91 = *((_WORD *)v44 - 4);
        }
        if ( v38 <= v91 )
          break;
        v44 = *(char **)v44;
      }
      while ( v34 != v44 );
    }
    v47 = (__int64 *)*((_QWORD *)v44 + 1);
    v48 = (char **)(v29 + 16);
    if ( (char *)*v47 == v44 )
    {
      *v48 = v44;
      *(_QWORD *)(v29 + 24) = v47;
      *v47 = (__int64)v48;
      *((_QWORD *)v44 + 1) = v48;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, (_DWORD)v44, 0, *v47, 0LL);
      v34 = (char *)(BaseAddress + 168);
    }
    *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(v29 + 8);
    v49 = (__int64 *)*((_QWORD *)BaseAddress + 39);
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
      v111 = v55;
      v57 = *(__int64 **)(v55 + v56);
      LODWORD(v56) = *((_DWORD *)v49 + 2) - 1;
      v107 = v57;
      if ( v52 == (_DWORD)v56 )
        ++*((_DWORD *)v49 + 5);
      if ( !v57 || (LOBYTE(v34) = 1, v82 = RtlpHeapListCompare(BaseAddress, v57, v50, v34), v57 = v107, v82 <= 0) )
        *(_QWORD *)(v111 + v49[6]) = v48;
      v34 = (char *)(BaseAddress + 168);
      if ( !v57 )
        *(_DWORD *)(v49[5] + 4LL * (v53 >> 5)) |= 1 << (v53 & 0x1F);
    }
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_BYTE *)(v29 + 11) = *(_BYTE *)(v29 + 8) ^ *(_BYTE *)(v29 + 9) ^ *(_BYTE *)(v29 + 10);
      *(_DWORD *)(v29 + 8) ^= *((_DWORD *)BaseAddress + 34);
    }
    v32 = (unsigned __int16 *)v109;
    v28 -= v108;
    v30 = v122;
    v29 += 16 * v108;
    v111 = v28;
    if ( v29 >= v109[9] )
      goto LABEL_71;
    v33 = v119;
    if ( v28 )
      continue;
    break;
  }
  *(_WORD *)(v29 + 12) = BaseAddress[70] ^ v122;
  if ( !v122 && RtlpHeapErrorHandlerThreshold >= 1 && ((v29 + 4095) & 0xFFFFFFFFFFFFF000uLL) != v29 )
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
