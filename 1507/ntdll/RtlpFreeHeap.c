/*
 * XREFs of RtlpFreeHeap @ 0x18002C140
 * Callers:
 *     RtlFreeHeap @ 0x18002AB90 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x18002B170 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800DD1F4 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpHeapAddListEntry @ 0x180006DF4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x180006EA0 (RtlpFindEntry.c)
 *     RtlpHeapListCompare @ 0x180007060 (RtlpHeapListCompare.c)
 *     RtlLogStackBackTraceEx @ 0x180007878 (RtlLogStackBackTraceEx.c)
 *     RtlNtStatusToDosError @ 0x18000F0C0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180010000 (DbgPrint.c)
 *     RtlpDeCommitFreeBlock @ 0x180029048 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180029B50 (RtlpInsertFreeBlock.c)
 *     RtlLeaveCriticalSection @ 0x180034710 (RtlLeaveCriticalSection.c)
 *     RtlEnterCriticalSection @ 0x1800351C0 (RtlEnterCriticalSection.c)
 *     RtlpCommitBlock @ 0x180036FB4 (RtlpCommitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18003776C (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpUpdateHeapRates @ 0x18006F630 (RtlpUpdateHeapRates.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180073144 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlpLogHeapFailure @ 0x180093344 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x180095F60 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800C2120 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800C22F4 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpUpdateTagEntry @ 0x1800DAB80 (RtlpUpdateTagEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800DDAD4 (RtlpUpdateHeapWatermarks.c)
 *     RtlDebugFreeHeap @ 0x1800EC7E4 (RtlDebugFreeHeap.c)
 *     RtlpBreakPointHeap @ 0x1800EDA10 (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800EEA14 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x1800EEF6C (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x1800EF6F8 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x1800EF964 (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpFreeHeap(_QWORD *BaseAddress, int a2, _QWORD *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
  char v6; // r14
  int v8; // edi
  __int64 v9; // r8
  __int64 v10; // rcx
  struct _TEB *v11; // rax
  signed __int8 v12; // cf
  void *UniqueThread; // rax
  __int64 **v14; // rcx
  _BYTE *v15; // r8
  char v16; // al
  unsigned __int16 *v17; // rdi
  unsigned __int16 v18; // ax
  _WORD *v19; // rdx
  bool v20; // zf
  int v21; // r8d
  int v22; // edx
  unsigned __int64 v23; // r8
  unsigned __int64 v24; // rcx
  unsigned __int64 v25; // r15
  _QWORD *v26; // r8
  __int64 v27; // rax
  __int64 v28; // r9
  __int64 *v29; // rdi
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rdx
  int v32; // r12d
  unsigned int v33; // r14d
  __int64 v34; // rax
  __int64 v35; // r10
  __int64 v36; // r9
  _QWORD *v37; // r11
  unsigned int v38; // edx
  __int64 v39; // r13
  int v40; // eax
  __int64 *v41; // rax
  __int64 *v42; // rcx
  char v43; // al
  SIZE_T v44; // rdi
  SIZE_T v45; // rsi
  unsigned __int64 v46; // r15
  _QWORD *v47; // r10
  __int64 *v48; // r11
  __int64 v49; // rax
  __int64 v50; // r9
  __int64 *v51; // rdi
  unsigned __int64 v52; // rcx
  unsigned __int64 v53; // rdx
  int v54; // r12d
  unsigned int v55; // r14d
  __int64 v56; // rax
  __int64 v57; // r13
  _QWORD *v58; // r8
  _QWORD *v59; // r9
  unsigned int v60; // edx
  __int64 v61; // r15
  int v62; // eax
  __int64 *v63; // rax
  char v64; // al
  SIZE_T v65; // rdi
  SIZE_T v66; // r14
  unsigned __int64 v67; // rdx
  _QWORD *v68; // rax
  __int64 *v69; // r15
  unsigned __int64 v70; // rcx
  unsigned int v71; // r12d
  __int64 v72; // r12
  _QWORD *v73; // r14
  _QWORD *v74; // r13
  _QWORD *v75; // rax
  int v76; // r8d
  int v77; // eax
  __int64 v78; // r8
  int v79; // eax
  _QWORD *v80; // rdi
  __int64 v81; // rdi
  unsigned int v82; // r9d
  unsigned int *v83; // r8
  unsigned int v84; // edx
  int v85; // eax
  __int64 v86; // rdi
  int v87; // ecx
  unsigned __int16 v88; // ax
  _QWORD *v89; // rax
  __int64 *v90; // rcx
  __int64 *v91; // rdi
  unsigned __int64 v92; // rcx
  unsigned __int64 v93; // rdx
  int v94; // r15d
  unsigned int v95; // r14d
  __int64 v96; // rax
  __int64 v97; // r12
  __int64 v98; // r13
  int v99; // eax
  unsigned __int64 v100; // r14
  _DWORD *v101; // r8
  unsigned __int64 v102; // rdx
  _QWORD *v103; // rdi
  _QWORD *Entry; // r8
  int v105; // ecx
  unsigned __int16 v106; // ax
  _QWORD *v107; // r14
  __int64 *v108; // rax
  __int64 v109; // rdx
  unsigned __int64 v110; // rcx
  unsigned __int64 v111; // rdi
  unsigned __int64 v112; // rdi
  unsigned __int64 v113; // rsi
  __int64 v114; // rax
  __int64 *v115; // rcx
  __int64 v116; // rdx
  __int64 v117; // r9
  __int64 v118; // r8
  __int64 v119; // r8
  unsigned int v120; // edx
  unsigned __int64 v121; // rcx
  char v122; // cl
  __int64 v123; // rdi
  signed __int32 v124; // ebx
  __int64 DeferredCriticalSectionEvent; // r8
  int v126; // edx
  signed __int32 v127; // eax
  char v128; // [rsp+48h] [rbp-1F0h]
  char v129; // [rsp+49h] [rbp-1EFh]
  __int16 updated; // [rsp+4Ch] [rbp-1ECh]
  unsigned __int64 v131; // [rsp+50h] [rbp-1E8h] BYREF
  __int64 v132; // [rsp+58h] [rbp-1E0h]
  unsigned __int16 v133; // [rsp+60h] [rbp-1D8h]
  unsigned __int8 v134; // [rsp+62h] [rbp-1D6h]
  unsigned __int16 v135; // [rsp+64h] [rbp-1D4h]
  __int64 *v136; // [rsp+68h] [rbp-1D0h]
  unsigned int v137; // [rsp+70h] [rbp-1C8h]
  unsigned int v138; // [rsp+74h] [rbp-1C4h]
  __int64 *v139; // [rsp+78h] [rbp-1C0h]
  int v140; // [rsp+80h] [rbp-1B8h]
  int v141[2]; // [rsp+88h] [rbp-1B0h]
  unsigned int v142; // [rsp+90h] [rbp-1A8h]
  unsigned __int64 v143; // [rsp+98h] [rbp-1A0h] BYREF
  unsigned int v144; // [rsp+A0h] [rbp-198h]
  __int64 v145; // [rsp+A8h] [rbp-190h]
  int v146[4]; // [rsp+B8h] [rbp-180h]
  int v147; // [rsp+C8h] [rbp-170h]
  unsigned __int64 v148; // [rsp+D0h] [rbp-168h]
  int v149; // [rsp+E0h] [rbp-158h]
  int v150; // [rsp+F0h] [rbp-148h]
  int v151; // [rsp+110h] [rbp-128h]
  int v152; // [rsp+120h] [rbp-118h]
  int v153; // [rsp+130h] [rbp-108h]
  unsigned int *v154; // [rsp+138h] [rbp-100h]
  unsigned __int64 v155; // [rsp+140h] [rbp-F8h]
  SIZE_T v156; // [rsp+148h] [rbp-F0h]
  int v157; // [rsp+150h] [rbp-E8h]
  unsigned __int64 v158; // [rsp+158h] [rbp-E0h]
  unsigned int NtGlobalFlag; // [rsp+168h] [rbp-D0h]
  unsigned __int64 v160; // [rsp+170h] [rbp-C8h]
  unsigned int v161; // [rsp+17Ch] [rbp-BCh]
  unsigned __int64 v163; // [rsp+188h] [rbp-B0h]
  int v164; // [rsp+190h] [rbp-A8h]
  SIZE_T v165; // [rsp+198h] [rbp-A0h]
  int v167; // [rsp+1B0h] [rbp-88h]
  unsigned __int64 v168; // [rsp+1B8h] [rbp-80h]
  unsigned __int64 v169; // [rsp+1C0h] [rbp-78h]
  int v170; // [rsp+1D0h] [rbp-68h]
  __int64 v171; // [rsp+1D8h] [rbp-60h]
  struct _TEB *v172; // [rsp+1E0h] [rbp-58h]
  __int64 v173; // [rsp+1E8h] [rbp-50h]
  __int64 v174; // [rsp+1F0h] [rbp-48h]
  __int64 v175; // [rsp+1F8h] [rbp-40h]
  _DWORD *v176; // [rsp+250h] [rbp+18h]

  v176 = a3;
  v4 = (unsigned __int64)a3;
  v6 = 1;
  v129 = 1;
  v128 = 0;
  v138 = 1;
  v143 = 0LL;
  updated = 0;
  if ( BaseAddress == a3 )
  {
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, (_DWORD)a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v8 = *((_DWORD *)BaseAddress + 29) | a2;
  if ( (v8 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    v129 = 0;
    v9 = 4LL;
    if ( (v8 & 0x61000000) != 0 && (v8 & 0x10000000) == 0 )
      return RtlDebugFreeHeap(BaseAddress);
  }
  else
  {
    v9 = 3LL;
  }
  if ( MEMORY[0x7FFE0380] )
  {
    v4 = (unsigned __int64)v176;
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0
      && ((*((unsigned __int8 *)v176 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress
                                                                                                + 31) >> 17))) & 8) == 0 )
    {
      RtlpLogHeapFreeEvent(BaseAddress, a4, v9);
    }
  }
  if ( (v8 & 1) == 0 )
  {
    v10 = BaseAddress[44];
    v11 = NtCurrentTeb();
    v12 = _interlockedbittestandreset((volatile signed __int32 *)(v10 + 8), 0);
    UniqueThread = v11->ClientId.UniqueThread;
    if ( v12 )
    {
      *(_QWORD *)(v10 + 16) = UniqueThread;
      *(_DWORD *)(v10 + 12) = 1;
    }
    else
    {
      if ( *(void **)(v10 + 16) != UniqueThread )
      {
        if ( byte_180146208 )
        {
          NtCurrentTeb()->LastStatusValue = -1073741420;
          v172 = NtCurrentTeb();
          v172->LastErrorValue = RtlNtStatusToDosError(-1073741420);
          v138 = 0;
          goto LABEL_289;
        }
        RtlEnterCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]);
        RtlpUpdateHeapRates(BaseAddress, 1LL);
        goto LABEL_20;
      }
      ++*(_DWORD *)(v10 + 12);
    }
    ++*((_DWORD *)BaseAddress + 144);
LABEL_20:
    v128 = 1;
    v4 = (unsigned __int64)v176;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      v176[2] ^= *((_DWORD *)BaseAddress + 34);
      if ( *((_BYTE *)v176 + 11) != (*((_BYTE *)v176 + 8) ^ (unsigned __int8)(*((_BYTE *)v176 + 9) ^ *((_BYTE *)v176 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v176);
    }
    v14 = (__int64 **)BaseAddress[39];
    do
    {
      if ( *((unsigned __int16 *)v176 + 4) < (unsigned __int64)*((unsigned int *)v14 + 2) )
        break;
      v14 = (__int64 **)*v14;
    }
    while ( v14 );
    goto LABEL_31;
  }
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *(_DWORD *)(v4 + 8) ^= *((_DWORD *)BaseAddress + 34);
    if ( *(_BYTE *)(v4 + 11) != (*(_BYTE *)(v4 + 8) ^ (unsigned __int8)(*(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10))) )
      RtlpAnalyzeHeapFailure(BaseAddress, v4);
  }
LABEL_31:
  v15 = (_BYTE *)(v4 + 10);
  v16 = *(_BYTE *)(v4 + 10);
  if ( (v16 & 8) != 0 )
    *v15 = v16 & 0xF7;
  if ( *(_BYTE *)(v4 + 15) == 4 )
  {
    v113 = v4 - 48;
    *(_QWORD *)v141 = v113;
    *(_QWORD *)v146 = *(_QWORD *)(v113 + 32);
    v143 = v113 & 0xFFFFFFFFFFFF0000uLL;
    BaseAddress[69] -= *(_QWORD *)v146;
    v114 = *(_QWORD *)v113;
    v115 = *(__int64 **)(v113 + 8);
    v116 = *v115;
    v117 = *(_QWORD *)(*(_QWORD *)v113 + 8LL);
    if ( *v115 == v117 && v116 == v113 )
    {
      *v115 = v114;
      *(_QWORD *)(v114 + 8) = v115;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, v113, v117, v116, 0LL);
    }
    if ( !v6 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      v115 = (__int64 *)NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v118 = *(_QWORD *)(v113 + 32) >> 4;
        v113 = *(_QWORD *)v141;
        RtlpUpdateTagEntry((_DWORD)BaseAddress, *(unsigned __int16 *)(*(_QWORD *)v141 + 18LL), v118, 0, 3);
      }
      else
      {
        v113 = *(_QWORD *)v141;
      }
    }
    if ( v128 )
    {
      RtlLeaveCriticalSection((PRTL_CRITICAL_SECTION)BaseAddress[44]);
      v128 = 0;
    }
    v119 = *(_QWORD *)(v113 + 40);
    v175 = v119;
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(BaseAddress, v143, v119);
    v131 = 0LL;
    RtlpSecMemFreeVirtualMemory(v115, &v143, &v131, 0x8000LL);
    if ( MEMORY[0x7FFE0380] )
    {
      LODWORD(v113) = v141[0];
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapContractEvent(
          (int)BaseAddress,
          v141[0],
          v146[0],
          16 * BaseAddress[24],
          0,
          0LL,
          (HANDLE)MEMORY[0x7FFE0380]);
    }
    if ( MEMORY[0x7FFE038A] )
      RtlpLogHeapContractEvent(
        (int)BaseAddress,
        v113,
        v146[0],
        16 * BaseAddress[24],
        0,
        0LL,
        (HANDLE)MEMORY[0x7FFE038A]);
    goto LABEL_289;
  }
  v17 = (unsigned __int16 *)(v4 + 8);
  v18 = *(_WORD *)(v4 + 8);
  if ( v18 < *((_WORD *)BaseAddress + 196) )
  {
    if ( ((unsigned __int8)(1 << (v18 & 7)) & *((_BYTE *)BaseAddress + ((unsigned __int64)v18 >> 3) + 394)) == 0 )
    {
      v19 = (_WORD *)(BaseAddress[48] + 2LL * *v17);
      if ( *v19 > 1u )
        --*v19;
    }
    v4 = (unsigned __int64)v176;
  }
  if ( !v6 )
  {
    v161 = NtCurrentPeb()->NtGlobalFlag;
    v4 = (unsigned __int64)v176;
    if ( (v161 & 0x800) != 0 )
    {
      v20 = (*v15 & 2) == 0;
      v21 = *v17;
      if ( v20 )
      {
        v134 = *((_BYTE *)v176 + 11);
        v22 = v134;
      }
      else
      {
        v171 = (__int64)&v176[4 * *v17 - 4];
        v22 = *(unsigned __int16 *)(v171 + 2);
      }
      updated = RtlpUpdateTagEntry((_DWORD)BaseAddress, v22, v21, 0, 2);
    }
  }
  v23 = *v17;
  v131 = v23;
  if ( *((char *)BaseAddress + 112) < 0 )
    goto LABEL_145;
  v163 = v4;
  v24 = 16 * (*(unsigned __int16 *)(v4 + 12) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70));
  v25 = v4 - v24;
  if ( v4 - v24 != v4
    && ((*(_BYTE *)(v25 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) == 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v25 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v25 + 11) != (*(_BYTE *)(v25 + 8) ^ (unsigned __int8)(*(_BYTE *)(v25 + 9) ^ *(_BYTE *)(v25 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v25);
    }
    v26 = (_QWORD *)(v25 + 16);
    v136 = *(__int64 **)(v25 + 16);
    v139 = *(__int64 **)(v25 + 24);
    v27 = *v139;
    v28 = v136[1];
    if ( *v139 != v28 || (_QWORD *)v27 != v26 )
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, (_DWORD)v26, v28, v27, 0LL);
LABEL_93:
      v23 = v131;
      goto LABEL_94;
    }
    BaseAddress[24] -= *(unsigned __int16 *)(v25 + 8);
    v29 = (__int64 *)BaseAddress[39];
    if ( v29 )
    {
      v30 = *(unsigned __int16 *)(v25 + 8);
      while ( 1 )
      {
        v31 = *((unsigned int *)v29 + 2);
        if ( v30 < v31 )
          break;
        if ( !*v29 )
        {
          v30 = (unsigned int)(v31 - 1);
          break;
        }
        v29 = (__int64 *)*v29;
      }
      v169 = v30;
      v32 = *(unsigned __int16 *)(v25 + 8);
      v174 = *(unsigned __int16 *)(v25 + 8);
      v33 = v30 - *((_DWORD *)v29 + 6);
      if ( *((_DWORD *)v29 + 3) )
        v34 = 2 * v33;
      else
        v34 = v33;
      v35 = 8 * v34;
      v132 = 8 * v34;
      v36 = v29[6];
      v37 = *(_QWORD **)(v36 + 8 * v34);
      --*((_DWORD *)v29 + 4);
      v38 = *((_DWORD *)v29 + 2);
      if ( (_DWORD)v30 == v38 - 1 )
        --*((_DWORD *)v29 + 5);
      if ( v37 == v26 )
      {
        v142 = v38;
        if ( !*v29 )
          v142 = --v38;
        if ( (unsigned int)v30 >= v38 )
        {
          if ( *v26 != v29[4] )
          {
            *(_QWORD *)(v36 + 8 * v34) = *v26;
            goto LABEL_79;
          }
          *(_QWORD *)(v36 + 8 * v34) = 0LL;
        }
        else
        {
          v39 = *v26;
          if ( *v26 != v29[4] )
          {
            v40 = *(_DWORD *)(v39 - 16 + 8);
            v149 = v40;
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v149 = v40 ^ *((_DWORD *)BaseAddress + 34);
              if ( HIBYTE(v149) != (BYTE2(v149) ^ (unsigned __int8)(BYTE1(v149) ^ v149)) )
              {
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v39 - 16, 0, 0LL, 0LL);
                v35 = v132;
              }
            }
            if ( !(v32 - (unsigned __int16)v149) )
            {
              *(_QWORD *)(v35 + v29[6]) = v39;
              goto LABEL_79;
            }
          }
          *(_QWORD *)(v35 + v29[6]) = 0LL;
        }
        *(_DWORD *)(v29[5] + 4LL * (v33 >> 5)) &= ~(1 << (v33 & 0x1F));
      }
    }
LABEL_79:
    v41 = v136;
    v42 = v139;
    *v139 = (__int64)v136;
    v41[1] = (__int64)v42;
    if ( (*(_BYTE *)(v25 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
    {
      v43 = *(_BYTE *)(v25 + 10);
      if ( (v43 & 4) != 0 )
      {
        v44 = 16LL * *(unsigned __int16 *)(v25 + 8) - 32;
        v156 = v44;
        if ( (v43 & 2) != 0 && v44 > 4 )
        {
          v44 -= 4LL;
          v156 = v44;
        }
        v45 = RtlCompareMemoryUlong((PVOID)(v25 + 32), v44, 0xFEEEFEEE);
        if ( v45 != v44 )
        {
          if ( NtCurrentPeb()->Ldr )
            DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
          else
            DbgPrint("HEAP: ");
          DbgPrint(
            "HEAP: Free Heap block %p modified at %p after it was freed\n",
            (const void *)v25,
            (const void *)(v45 + v25 + 32));
          RtlpBreakPointHeap(v25);
        }
      }
      *(_BYTE *)(v25 + 10) = 0;
      *(_BYTE *)(v25 + 15) = 0;
      v4 = v25;
      v163 = v25;
      v131 += *(unsigned __int16 *)(v25 + 8);
      *(_WORD *)(v25 + 8) = v131;
      *(_WORD *)(v25 + 16 * v131 + 12) = v131 ^ *((_WORD *)BaseAddress + 70);
    }
    else
    {
      RtlpDeCommitFreeBlock(BaseAddress, v25, *(unsigned __int16 *)(v25 + 8), 1);
    }
    goto LABEL_93;
  }
LABEL_94:
  v46 = v4 + 16 * v23;
  v132 = v46;
  if ( !*((_DWORD *)BaseAddress + 31) )
    goto LABEL_98;
  v150 = *(_DWORD *)(v46 + 8) ^ *((_DWORD *)BaseAddress + 34);
  if ( HIBYTE(v150) != (BYTE2(v150) ^ (unsigned __int8)(BYTE1(v150) ^ v150)) )
    RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v4 + 16 * v23, 0, 0LL, 0LL);
  while ( 1 )
  {
    v23 = v131;
LABEL_98:
    if ( ((*(_BYTE *)(v46 + 10) ^ (unsigned __int8)(*((_BYTE *)BaseAddress + 138) & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
      break;
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v46 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v46 + 11) != (*(_BYTE *)(v46 + 8) ^ (unsigned __int8)(*(_BYTE *)(v46 + 9) ^ *(_BYTE *)(v46 + 10))) )
        RtlpAnalyzeHeapFailure(BaseAddress, v46);
    }
    v47 = (_QWORD *)(v46 + 16);
    v48 = *(__int64 **)(v46 + 16);
    v139 = v48;
    v136 = *(__int64 **)(v46 + 24);
    v49 = *v136;
    v50 = v48[1];
    if ( *v136 == v50 && (_QWORD *)v49 == v47 )
    {
      BaseAddress[24] -= *(unsigned __int16 *)(v46 + 8);
      v51 = (__int64 *)BaseAddress[39];
      if ( v51 )
      {
        v52 = *(unsigned __int16 *)(v46 + 8);
        while ( 1 )
        {
          v53 = *((unsigned int *)v51 + 2);
          if ( v52 < v53 )
            break;
          if ( !*v51 )
          {
            v52 = (unsigned int)(v53 - 1);
            break;
          }
          v51 = (__int64 *)*v51;
        }
        v160 = v52;
        v54 = *(unsigned __int16 *)(v46 + 8);
        v173 = *(unsigned __int16 *)(v46 + 8);
        v55 = v52 - *((_DWORD *)v51 + 6);
        if ( *((_DWORD *)v51 + 3) )
          v56 = 2 * v55;
        else
          v56 = v55;
        v57 = 8 * v56;
        v58 = (_QWORD *)(8 * v56 + v51[6]);
        v59 = (_QWORD *)*v58;
        --*((_DWORD *)v51 + 4);
        v60 = *((_DWORD *)v51 + 2);
        if ( (_DWORD)v52 == v60 - 1 )
          --*((_DWORD *)v51 + 5);
        if ( v59 == v47 )
        {
          v144 = v60;
          if ( !*v51 )
            v144 = --v60;
          if ( (unsigned int)v52 >= v60 )
          {
            if ( *v47 == v51[4] )
            {
              *v58 = 0LL;
              *(_DWORD *)(v51[5] + 4LL * (v55 >> 5)) &= ~(1 << (v55 & 0x1F));
            }
            else
            {
              *v58 = *v47;
            }
          }
          else
          {
            v61 = *v47;
            if ( *v47 == v51[4] )
              goto LABEL_124;
            v62 = *(_DWORD *)(v61 - 16 + 8);
            v151 = v62;
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v151 = v62 ^ *((_DWORD *)BaseAddress + 34);
              if ( HIBYTE(v151) != ((unsigned __int8)v151 ^ (unsigned __int8)(BYTE1(v151) ^ BYTE2(v151))) )
              {
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v61 - 16, 0, 0LL, 0LL);
                v48 = v139;
              }
            }
            if ( v54 - (unsigned __int16)v151 )
            {
LABEL_124:
              *(_QWORD *)(v57 + v51[6]) = 0LL;
              *(_DWORD *)(v51[5] + 4LL * (v55 >> 5)) &= ~(1 << (v55 & 0x1F));
            }
            else
            {
              *(_QWORD *)(v57 + v51[6]) = v61;
            }
            v46 = v132;
          }
        }
      }
      v63 = v136;
      *v136 = (__int64)v48;
      v48[1] = (__int64)v63;
      if ( (*(_BYTE *)(v46 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
      {
        v64 = *(_BYTE *)(v46 + 10);
        if ( (v64 & 4) != 0 )
        {
          v65 = 16LL * *(unsigned __int16 *)(v46 + 8) - 32;
          v165 = v65;
          if ( (v64 & 2) != 0 && v65 > 4 )
          {
            v65 -= 4LL;
            v165 = v65;
          }
          v66 = RtlCompareMemoryUlong((PVOID)(v46 + 32), v65, 0xFEEEFEEE);
          if ( v66 != v65 )
          {
            if ( NtCurrentPeb()->Ldr )
              DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
            else
              DbgPrint("HEAP: ");
            DbgPrint(
              "HEAP: Free Heap block %p modified at %p after it was freed\n",
              (const void *)v46,
              (const void *)(v66 + v46 + 32));
            RtlpBreakPointHeap(v46);
          }
        }
        *(_BYTE *)(v4 + 10) = 0;
        *(_BYTE *)(v4 + 15) = 0;
        v131 += *(unsigned __int16 *)(v46 + 8);
        *(_WORD *)(v4 + 8) = v131;
        *(_WORD *)(v4 + 16 * v131 + 12) = v131 ^ *((_WORD *)BaseAddress + 70);
        v23 = v131;
        break;
      }
      RtlpDeCommitFreeBlock(BaseAddress, v46, *(unsigned __int16 *)(v46 + 8), 1);
    }
    else
    {
      RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v46 + 16, v50, v49, 0LL);
    }
  }
  v176 = (_DWORD *)v4;
  v6 = v129;
LABEL_145:
  if ( (v23 < BaseAddress[22] || v23 + BaseAddress[24] < BaseAddress[23])
    && (v23 + BaseAddress[24] <= BaseAddress[23] || v23 < 0x100 || *(_WORD *)(v4 + 12) != *((_WORD *)BaseAddress + 70)) )
  {
    if ( v23 > 0xFF00 )
    {
      RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v4, v23);
LABEL_263:
      if ( updated )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_DWORD *)(v4 + 8) ^= *((_DWORD *)BaseAddress + 34);
          if ( *(_BYTE *)(v4 + 11) != (*(_BYTE *)(v4 + 8) ^ (unsigned __int8)(*(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10))) )
            RtlpAnalyzeHeapFailure(BaseAddress, v4);
        }
        *(_BYTE *)(v4 + 10) |= 2u;
        v112 = 16LL * *(unsigned __int16 *)(v4 + 8) + v4;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_BYTE *)(v4 + 11) = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
          *(_DWORD *)(v4 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
        *(_WORD *)(v112 - 4) = updated;
        *(_WORD *)(v112 - 2) = 0;
        if ( (BaseAddress[14] & 0x8000000) != 0 )
          *(_WORD *)(v112 - 2) = RtlLogStackBackTraceEx(1u);
      }
      goto LABEL_289;
    }
    if ( v6 )
    {
      v67 = (unsigned __int16)v23;
      v132 = (unsigned __int16)v23;
      *(_BYTE *)(v4 + 10) = 0;
      *(_BYTE *)(v4 + 15) = 0;
      v68 = BaseAddress + 42;
      v69 = (__int64 *)BaseAddress[39];
      if ( v69 )
      {
        while ( 1 )
        {
          v70 = *((unsigned int *)v69 + 2);
          if ( (unsigned __int16)v23 < v70 )
          {
            v71 = (unsigned __int16)v23;
            v145 = (unsigned __int16)v23;
            goto LABEL_158;
          }
          if ( !*v69 )
            break;
          v69 = (__int64 *)*v69;
        }
        v71 = v70 - 1;
        v145 = (unsigned int)(v70 - 1);
        while ( 1 )
        {
LABEL_158:
          v72 = v71 - *((_DWORD *)v69 + 6);
          v73 = 0LL;
          v74 = (_QWORD *)v69[4];
          v75 = (_QWORD *)v74[1];
          if ( v74 == v75 )
          {
            v73 = (_QWORD *)v69[4];
          }
          else
          {
            v76 = (_DWORD)v75 - 16;
            v77 = *((_DWORD *)v75 - 2);
            v153 = v77;
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v153 = v77 ^ *((_DWORD *)BaseAddress + 34);
              if ( HIBYTE(v153) != ((unsigned __int8)v153 ^ (unsigned __int8)(BYTE1(v153) ^ BYTE2(v153))) )
              {
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v76, 0, 0LL, 0LL);
                v67 = v132;
              }
            }
            v164 = v67 - (unsigned __int16)v153;
            if ( v164 <= 0 )
            {
              v78 = *v74 - 16LL;
              v79 = *(_DWORD *)(v78 + 8);
              v152 = v79;
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v152 = v79 ^ *((_DWORD *)BaseAddress + 34);
                if ( HIBYTE(v152) != ((unsigned __int8)v152 ^ (unsigned __int8)(BYTE1(v152) ^ BYTE2(v152))) )
                {
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v78, 0, 0LL, 0LL);
                  v67 = v132;
                }
              }
              v167 = v67 - (unsigned __int16)v152;
              if ( v167 > 0 )
              {
                if ( *v69 || (_DWORD)v145 != *((_DWORD *)v69 + 2) - 1 )
                {
                  v81 = (unsigned int)v72 >> 5;
                  v137 = (unsigned int)v72 >> 5;
                  v82 = ((unsigned int)(*((_DWORD *)v69 + 2) - *((_DWORD *)v69 + 6)) >> 5) - 1;
                  v83 = (unsigned int *)(v69[5] + 4 * v81);
                  v154 = v83;
                  v84 = *v83 & ~((1 << (v72 & 0x1F)) - 1);
                  while ( !v84 )
                  {
                    if ( (unsigned int)v81 > v82 )
                    {
                      v4 = (unsigned __int64)v176;
                      goto LABEL_198;
                    }
                    v154 = ++v83;
                    v84 = *v83;
                    LODWORD(v81) = v81 + 1;
                    v137 = v81;
                  }
                  if ( (_WORD)v84 )
                  {
                    if ( (_BYTE)v84 )
                      v85 = RtlpBitsClearLow[(unsigned __int8)v84];
                    else
                      v85 = RtlpBitsClearLow[BYTE1(v84)] + 8;
                  }
                  else if ( (v84 & 0xFF0000) != 0 )
                  {
                    v85 = RtlpBitsClearLow[BYTE2(v84)] + 16;
                  }
                  else
                  {
                    v85 = RtlpBitsClearLow[(unsigned __int64)v84 >> 24] + 24;
                  }
                  v86 = (unsigned int)(v85 + 32 * v81);
                  v137 = v86;
                  if ( *((_DWORD *)v69 + 3) )
                    v86 = (unsigned int)(2 * v86);
                  v73 = *(_QWORD **)(v69[6] + 8 * v86);
LABEL_194:
                  v67 = v132;
                }
                else
                {
                  if ( *((_DWORD *)v69 + 3) )
                    v72 = (unsigned int)(2 * v72);
                  v80 = *(_QWORD **)(v69[6] + 8 * v72);
                  while ( v74 != v80 )
                  {
                    if ( (int)RtlpHeapListCompare((__int64)BaseAddress, (__int64)v80, v67, 1) <= 0 )
                    {
                      v73 = v80;
                      goto LABEL_194;
                    }
                    v80 = (_QWORD *)*v80;
                    v67 = v132;
                  }
                }
              }
              else
              {
                v73 = (_QWORD *)*v74;
              }
            }
            else
            {
              v73 = v74;
            }
            v4 = (unsigned __int64)v176;
          }
          if ( v73 )
            break;
LABEL_198:
          v69 = (__int64 *)*v69;
          v71 = *((_DWORD *)v69 + 6);
          v145 = v71;
          v67 = v132;
        }
        v68 = BaseAddress + 42;
      }
      else
      {
        v73 = (_QWORD *)*v68;
      }
      while ( v68 != v73 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v87 = *((_DWORD *)v73 - 2);
          v140 = v87;
          if ( (v87 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v140 = v87 ^ *((_DWORD *)BaseAddress + 34);
          v88 = v140;
          v4 = (unsigned __int64)v176;
        }
        else
        {
          v88 = *((_WORD *)v73 - 4);
        }
        v135 = v88;
        if ( v67 <= v88 )
          break;
        v73 = (_QWORD *)*v73;
        v68 = BaseAddress + 42;
      }
      v89 = (_QWORD *)(v4 + 16);
      v139 = (__int64 *)(v4 + 16);
      v90 = (__int64 *)v73[1];
      if ( (_QWORD *)*v90 == v73 )
      {
        *v89 = v73;
        *(_QWORD *)(v4 + 24) = v90;
        *v90 = (__int64)v89;
        v73[1] = v89;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v73, 0, *v90, 0LL);
      }
      BaseAddress[24] += *(unsigned __int16 *)(v4 + 8);
      v91 = (__int64 *)BaseAddress[39];
      if ( v91 )
      {
        v92 = *(unsigned __int16 *)(v4 + 8);
        while ( 1 )
        {
          v93 = *((unsigned int *)v91 + 2);
          if ( v92 < v93 )
            break;
          if ( !*v91 )
          {
            v92 = (unsigned int)(v93 - 1);
            break;
          }
          v91 = (__int64 *)*v91;
        }
        v168 = v92;
        v94 = *(unsigned __int16 *)(v4 + 8);
        v136 = (__int64 *)*(unsigned __int16 *)(v4 + 8);
        v95 = v92 - *((_DWORD *)v91 + 6);
        if ( *((_DWORD *)v91 + 3) )
          v96 = 2 * v95;
        else
          v96 = v95;
        ++*((_DWORD *)v91 + 4);
        v97 = 8 * v96;
        v98 = *(_QWORD *)(8 * v96 + v91[6]);
        if ( (_DWORD)v92 == *((_DWORD *)v91 + 2) - 1 )
          ++*((_DWORD *)v91 + 5);
        if ( !v98 )
          goto LABEL_227;
        v99 = *(_DWORD *)(v98 - 16 + 8);
        v147 = v99;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v147 = v99 ^ *((_DWORD *)BaseAddress + 34);
          if ( HIBYTE(v147) != (BYTE2(v147) ^ (unsigned __int8)(BYTE1(v147) ^ v147)) )
            RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v98 - 16, 0, 0LL, 0LL);
        }
        v157 = v94 - (unsigned __int16)v147;
        v4 = (unsigned __int64)v176;
        if ( v157 <= 0 )
LABEL_227:
          *(_QWORD *)(v97 + v91[6]) = v139;
        if ( !v98 )
          *(_DWORD *)(v91[5] + 4LL * (v95 >> 5)) |= 1 << (v95 & 0x1F);
      }
LABEL_260:
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v4 + 11) = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
        *(_DWORD *)(v4 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
      goto LABEL_263;
    }
    v100 = (unsigned __int16)v23;
    *(_BYTE *)(v4 + 10) &= 0xF0u;
    *(_BYTE *)(v4 + 15) = 0;
    if ( (BaseAddress[14] & 0x40) == 0 )
    {
LABEL_239:
      v103 = BaseAddress + 42;
      if ( BaseAddress[39] )
        Entry = (_QWORD *)RtlpFindEntry((__int64)BaseAddress, v100);
      else
        Entry = (_QWORD *)*v103;
      while ( v103 != Entry )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v105 = *((_DWORD *)Entry - 2);
          v170 = v105;
          if ( (v105 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v170 = v105 ^ *((_DWORD *)BaseAddress + 34);
          v106 = v170;
          v4 = (unsigned __int64)v176;
        }
        else
        {
          v106 = *((_WORD *)Entry - 4);
        }
        v133 = v106;
        if ( v100 <= v106 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v107 = (_QWORD *)(v4 + 16);
      v108 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v108 == Entry )
      {
        *v107 = Entry;
        *(_QWORD *)(v4 + 24) = v108;
        *v108 = (__int64)v107;
        Entry[1] = v107;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v108, 0LL);
      }
      BaseAddress[24] += *(unsigned __int16 *)(v4 + 8);
      v109 = BaseAddress[39];
      if ( v109 )
      {
        v110 = *(unsigned __int16 *)(v4 + 8);
        while ( 1 )
        {
          v111 = *(unsigned int *)(v109 + 8);
          if ( v110 < v111 )
            break;
          if ( !*(_QWORD *)v109 )
          {
            v110 = (unsigned int)(v111 - 1);
            break;
          }
          v109 = *(_QWORD *)v109;
        }
        v158 = v110;
        RtlpHeapAddListEntry((__int64)BaseAddress, v109, 1, v4 + 16, v110, *(unsigned __int16 *)(v4 + 8));
      }
      goto LABEL_260;
    }
    v101 = (_DWORD *)(v4 + 32);
    v155 = v4 + 32;
    v102 = (16 * (unsigned __int64)(unsigned int)v100 - 32) >> 2;
    v148 = v102;
    if ( v102 )
    {
      if ( ((unsigned __int8)v101 & 4) == 0 )
        goto LABEL_236;
      *v101 = -17891602;
      v148 = --v102;
      if ( v102 )
      {
        v101 = (_DWORD *)(v4 + 36);
        v155 = v4 + 36;
LABEL_236:
        memset64(v101, 0xFEEEFEEEFEEEFEEEuLL, v102 >> 1);
        if ( (v102 & 1) != 0 )
          v101[v102 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v4 + 10) |= 4u;
    goto LABEL_239;
  }
  RtlpDeCommitFreeBlock(BaseAddress, v4, v23, 0);
LABEL_289:
  if ( v128 )
  {
    if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) == 0 )
    {
      ++*((_DWORD *)BaseAddress + 150);
      v120 = *((_DWORD *)BaseAddress + 152);
      if ( *((_DWORD *)BaseAddress + 150) > v120 )
      {
        *((_DWORD *)BaseAddress + 150) = 0;
        v121 = BaseAddress[67] - 16LL * BaseAddress[24];
        if ( v121 > BaseAddress[79] )
          BaseAddress[79] = v121;
        BaseAddress[80] = v121;
      }
      if ( ++*((_DWORD *)BaseAddress + 153) >= 0x1000u )
      {
        if ( *((_BYTE *)BaseAddress + 378) != 2 || (v122 = 4, *((_DWORD *)BaseAddress + 154) <= 0x10u) )
          v122 = 8;
        if ( *((_DWORD *)BaseAddress + 151) > (unsigned int)(4096 >> v122) && v120 < 0x10000 )
          *((_DWORD *)BaseAddress + 152) = 2 * v120;
        *((_DWORD *)BaseAddress + 151) = 0;
        *((_DWORD *)BaseAddress + 153) = 0;
      }
    }
    v123 = BaseAddress[44];
    v20 = (*(_DWORD *)(v123 + 12))-- == 1;
    if ( v20 )
    {
      *(_QWORD *)(v123 + 16) = 0LL;
      v124 = _InterlockedCompareExchange((volatile signed __int32 *)(v123 + 8), -1, -2);
      if ( v124 != -2 )
      {
        if ( (*(_BYTE *)(v123 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v123);
        DeferredCriticalSectionEvent = *(_QWORD *)(v123 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v123);
        do
        {
          v126 = v124 & 2 | 1;
          v127 = _InterlockedCompareExchange((volatile signed __int32 *)(v123 + 8), v126 + v124, v124);
          v20 = v124 == v127;
          v124 = v127;
        }
        while ( !v20 );
        if ( (v126 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v123, DeferredCriticalSectionEvent);
      }
    }
  }
  return v138;
}
