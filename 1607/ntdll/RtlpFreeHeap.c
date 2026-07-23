/*
 * XREFs of RtlpFreeHeap @ 0x180049360
 * Callers:
 *     RtlFreeHeap @ 0x1800466E0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F80 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x1800480F0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B40 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DB0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapRemoveListEntry @ 0x1800289DC (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180028B24 (RtlpCommitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DEC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpUpdateHeapRates @ 0x180028FC0 (RtlpUpdateHeapRates.c)
 *     RtlLogStackBackTraceEx @ 0x18002B1F8 (RtlLogStackBackTraceEx.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A800 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004ADF0 (RtlpInsertFreeBlock.c)
 *     RtlpFindEntry @ 0x18004BE78 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18004C2E4 (RtlpHeapAddListEntry.c)
 *     RtlNtStatusToDosError @ 0x18005A4D0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005C3D0 (DbgPrint.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180066D18 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlDebugFreeHeap @ 0x180091B50 (RtlDebugFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800AA730 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800D3BC0 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800D3D78 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpUpdateTagEntry @ 0x1800EAEBC (RtlpUpdateTagEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800EC3E4 (RtlpUpdateHeapWatermarks.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F7E90 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x1800F9154 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F93BC (RtlpLogHeapFreeEvent.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpFreeHeap(unsigned __int8 *BaseAddress, int a2, unsigned __int8 *a3, __int64 a4)
{
  char *v4; // rsi
  char v6; // r13
  _QWORD *v7; // r14
  int v9; // edi
  __int64 v10; // r8
  __int64 v11; // rcx
  struct _TEB *v12; // rax
  signed __int8 v13; // cf
  void *UniqueThread; // rax
  __int64 **v15; // rcx
  _BYTE *v16; // r8
  char v17; // al
  unsigned __int16 *v18; // rdi
  unsigned __int16 v19; // ax
  _WORD *v20; // rdx
  bool v21; // zf
  int v22; // r8d
  int v23; // edx
  ULONG_PTR v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 *v28; // r15
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r8
  char v34; // al
  SIZE_T v35; // rsi
  SIZE_T v36; // r14
  __int64 v37; // rdi
  __int64 v38; // r14
  __int64 *v39; // r15
  __int64 v40; // rax
  __int64 v41; // r9
  __int64 v42; // rdx
  unsigned __int64 v43; // rcx
  unsigned __int64 v44; // r8
  char v45; // al
  SIZE_T v46; // r14
  SIZE_T v47; // r15
  unsigned __int64 v48; // rdi
  _QWORD *v49; // rax
  __int64 *v50; // r12
  unsigned __int64 v51; // rcx
  unsigned int v52; // r15d
  __int64 v53; // r15
  _QWORD *v54; // r13
  _QWORD *v55; // rax
  int v56; // r8d
  int v57; // eax
  __int64 v58; // r8
  int v59; // eax
  _QWORD *i; // rdi
  int v61; // eax
  __int64 v62; // rdi
  unsigned int v63; // r9d
  unsigned int *v64; // r8
  unsigned int v65; // edx
  int v66; // eax
  __int64 v67; // rdi
  int v68; // ecx
  unsigned __int16 v69; // ax
  _QWORD *v70; // rcx
  __int64 *v71; // rax
  __int64 *v72; // rdi
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rdx
  int v75; // r15d
  unsigned int v76; // r14d
  __int64 v77; // rax
  __int64 v78; // r12
  __int64 v79; // r13
  int v80; // eax
  unsigned __int64 v81; // r14
  _DWORD *v82; // r8
  unsigned __int64 v83; // rdx
  _QWORD *v84; // rdi
  _QWORD *Entry; // r8
  int v86; // ecx
  unsigned __int16 v87; // ax
  _QWORD *v88; // r14
  __int64 *v89; // rax
  __int64 **v90; // rdx
  unsigned __int64 v91; // rcx
  unsigned __int64 v92; // rdi
  char *v93; // rdi
  unsigned __int64 v94; // rsi
  __int64 v95; // rax
  __int64 v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r9
  __int64 v99; // r8
  unsigned int v100; // edx
  unsigned __int64 v101; // rcx
  char v102; // cl
  __int64 v103; // rdi
  signed __int32 v104; // ebx
  __int64 DeferredCriticalSectionEvent; // r8
  int v106; // edx
  signed __int32 v107; // eax
  char v108; // [rsp+40h] [rbp-188h]
  __int16 updated; // [rsp+44h] [rbp-184h]
  ULONG_PTR v110; // [rsp+50h] [rbp-178h] BYREF
  unsigned __int8 v111; // [rsp+58h] [rbp-170h]
  unsigned __int16 v112; // [rsp+5Ah] [rbp-16Eh]
  unsigned __int16 v113; // [rsp+5Ch] [rbp-16Ch]
  unsigned __int64 v114; // [rsp+60h] [rbp-168h]
  unsigned int v115; // [rsp+68h] [rbp-160h]
  unsigned int v116; // [rsp+6Ch] [rbp-15Ch]
  int v117[2]; // [rsp+70h] [rbp-158h]
  __int64 v118; // [rsp+78h] [rbp-150h]
  unsigned __int64 v119; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v120; // [rsp+88h] [rbp-140h]
  int v121[4]; // [rsp+90h] [rbp-138h]
  int v122; // [rsp+A0h] [rbp-128h]
  int v123; // [rsp+B0h] [rbp-118h]
  int v124; // [rsp+C0h] [rbp-108h]
  int v125; // [rsp+D0h] [rbp-F8h]
  int v126; // [rsp+E0h] [rbp-E8h]
  unsigned int NtGlobalFlag; // [rsp+E8h] [rbp-E0h]
  unsigned __int64 v128; // [rsp+F0h] [rbp-D8h]
  SIZE_T v129; // [rsp+F8h] [rbp-D0h]
  __int64 v130; // [rsp+100h] [rbp-C8h]
  unsigned __int64 v131; // [rsp+118h] [rbp-B0h]
  SIZE_T v132; // [rsp+120h] [rbp-A8h]
  unsigned int *v133; // [rsp+128h] [rbp-A0h]
  unsigned __int64 v134; // [rsp+130h] [rbp-98h]
  char *v135; // [rsp+138h] [rbp-90h]
  unsigned __int64 v136; // [rsp+140h] [rbp-88h]
  unsigned int v137; // [rsp+148h] [rbp-80h]
  int v138; // [rsp+14Ch] [rbp-7Ch]
  int v139; // [rsp+150h] [rbp-78h]
  int v140; // [rsp+154h] [rbp-74h]
  int v141; // [rsp+158h] [rbp-70h]
  int v142; // [rsp+168h] [rbp-60h]
  int v143; // [rsp+178h] [rbp-50h]
  __int64 v144; // [rsp+180h] [rbp-48h]
  __int64 v145; // [rsp+188h] [rbp-40h]
  __int64 v146; // [rsp+190h] [rbp-38h]
  struct _TEB *v147; // [rsp+198h] [rbp-30h]
  char *v148; // [rsp+1E0h] [rbp+18h]

  v148 = (char *)a3;
  v4 = (char *)a3;
  v6 = 1;
  v108 = 0;
  v116 = 1;
  v7 = 0LL;
  v119 = 0LL;
  updated = 0;
  if ( BaseAddress == a3 )
  {
    RtlpLogHeapFailure(9, (_DWORD)BaseAddress, (_DWORD)a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v9 = *((_DWORD *)BaseAddress + 29) | a2;
  if ( (v9 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    v10 = 4LL;
    if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
      return RtlDebugFreeHeap(BaseAddress);
  }
  else
  {
    v10 = 3LL;
  }
  if ( MEMORY[0x7FFE0380] )
  {
    v4 = v148;
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0
      && (((unsigned __int8)v148[10] ^ (unsigned __int8)(BaseAddress[138] & (*((_DWORD *)BaseAddress + 31) >> 17))) & 8) == 0 )
    {
      RtlpLogHeapFreeEvent(BaseAddress, a4, v10);
    }
  }
  if ( (v9 & 1) != 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *((_DWORD *)v4 + 2) ^= *((_DWORD *)BaseAddress + 34);
      if ( v4[11] != ((unsigned __int8)v4[8] ^ (unsigned __int8)(v4[9] ^ v4[10])) )
        RtlpAnalyzeHeapFailure(BaseAddress, v4);
    }
    goto LABEL_31;
  }
  v11 = *((_QWORD *)BaseAddress + 44);
  v12 = NtCurrentTeb();
  v13 = _interlockedbittestandreset((volatile signed __int32 *)(v11 + 8), 0);
  UniqueThread = v12->ClientId.UniqueThread;
  if ( v13 )
  {
    *(_QWORD *)(v11 + 16) = UniqueThread;
    *(_DWORD *)(v11 + 12) = 1;
  }
  else
  {
    if ( *(void **)(v11 + 16) != UniqueThread )
    {
      if ( byte_180152408 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v147 = NtCurrentTeb();
        v147->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v116 = 0;
        goto LABEL_254;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      RtlpUpdateHeapRates((__int64)BaseAddress, 1);
      goto LABEL_20;
    }
    ++*(_DWORD *)(v11 + 12);
  }
  ++*((_DWORD *)BaseAddress + 146);
LABEL_20:
  v108 = 1;
  v4 = v148;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    *((_DWORD *)v148 + 2) ^= *((_DWORD *)BaseAddress + 34);
    if ( v148[11] != ((unsigned __int8)v148[8] ^ (unsigned __int8)(v148[9] ^ v148[10])) )
      RtlpAnalyzeHeapFailure(BaseAddress, v148);
  }
  v15 = (__int64 **)*((_QWORD *)BaseAddress + 39);
  do
  {
    if ( *((unsigned __int16 *)v148 + 4) < (unsigned __int64)*((unsigned int *)v15 + 2) )
      break;
    v15 = (__int64 **)*v15;
  }
  while ( v15 );
LABEL_31:
  v16 = v4 + 10;
  v17 = v4[10];
  if ( (v17 & 8) != 0 )
    *v16 = v17 & 0xF7;
  if ( v4[15] == 4 )
  {
    v94 = (unsigned __int64)(v4 - 48);
    *(_QWORD *)v117 = v94;
    *(_QWORD *)v121 = *(_QWORD *)(v94 + 32);
    v119 = v94 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)BaseAddress + 70) -= *(_QWORD *)v121;
    v95 = *(_QWORD *)v94;
    v96 = *(_QWORD *)(v94 + 8);
    v97 = *(_QWORD *)v96;
    v98 = *(_QWORD *)(*(_QWORD *)v94 + 8LL);
    if ( *(_QWORD *)v96 == v98 && v97 == v94 )
    {
      *(_QWORD *)v96 = v95;
      *(_QWORD *)(v95 + 8) = v96;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, v94, v98, v97, 0LL);
    }
    if ( !v6 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      v96 = NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v99 = *(_QWORD *)(v94 + 32) >> 4;
        v94 = *(_QWORD *)v117;
        RtlpUpdateTagEntry((_DWORD)BaseAddress, *(unsigned __int16 *)(*(_QWORD *)v117 + 18LL), v99, 0, 3);
      }
      else
      {
        v94 = *(_QWORD *)v117;
      }
    }
    if ( v108 )
    {
      RtlLeaveCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      v108 = 0;
    }
    v145 = *(_QWORD *)(v94 + 40);
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(BaseAddress, v119);
    v110 = 0LL;
    RtlpSecMemFreeVirtualMemory(v96, (PVOID *)&v119, &v110, 0x8000u);
    if ( MEMORY[0x7FFE0380] )
    {
      LODWORD(v94) = v117[0];
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapContractEvent(
          (int)BaseAddress,
          v117[0],
          v121[0],
          16 * *((_QWORD *)BaseAddress + 24),
          0,
          0LL,
          (HANDLE)MEMORY[0x7FFE0380]);
    }
    if ( MEMORY[0x7FFE038A] )
      RtlpLogHeapContractEvent(
        (int)BaseAddress,
        v94,
        v121[0],
        16 * *((_QWORD *)BaseAddress + 24),
        0,
        0LL,
        (HANDLE)MEMORY[0x7FFE038A]);
    goto LABEL_254;
  }
  v18 = (unsigned __int16 *)(v4 + 8);
  v19 = *((_WORD *)v4 + 4);
  if ( v19 < *((_WORD *)BaseAddress + 200) )
  {
    if ( ((unsigned __int8)(1 << (v19 & 7)) & BaseAddress[((unsigned __int64)v19 >> 3) + 402]) == 0 )
    {
      v20 = (_WORD *)(*((_QWORD *)BaseAddress + 49) + 2LL * *v18);
      if ( *v20 > 1u )
        --*v20;
    }
    v4 = v148;
  }
  if ( !v6 )
  {
    v137 = NtCurrentPeb()->NtGlobalFlag;
    v4 = v148;
    if ( (v137 & 0x800) != 0 )
    {
      v21 = (*v16 & 2) == 0;
      v22 = *v18;
      if ( v21 )
      {
        v111 = v148[11];
        v23 = v111;
      }
      else
      {
        v146 = (__int64)&v148[16 * *v18 - 16];
        v23 = *(unsigned __int16 *)(v146 + 2);
      }
      updated = RtlpUpdateTagEntry((_DWORD)BaseAddress, v23, v22, 0, 2);
    }
  }
  v24 = *v18;
  v110 = v24;
  if ( (BaseAddress[112] & 0x80u) == 0 )
  {
    v130 = (__int64)v4;
    v25 = 16 * (*((unsigned __int16 *)v4 + 6) ^ (unsigned __int64)*((unsigned __int16 *)BaseAddress + 70));
    v26 = (__int64)&v4[-v25];
    if ( &v4[-v25] != v4
      && ((*(_BYTE *)(v26 + 10) ^ (unsigned __int8)(BaseAddress[138] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) == 0 )
    {
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v26 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v26 + 11) != (*(_BYTE *)(v26 + 8) ^ (unsigned __int8)(*(_BYTE *)(v26 + 9) ^ *(_BYTE *)(v26 + 10))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v26);
      }
      v27 = *(_QWORD *)(v26 + 16);
      v28 = *(__int64 **)(v26 + 24);
      v29 = *v28;
      v30 = *(_QWORD *)(v27 + 8);
      if ( *v28 == v30 && v29 == v26 + 16 )
      {
        *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v26 + 8);
        v31 = *((_QWORD *)BaseAddress + 39);
        if ( v31 )
        {
          v32 = *(unsigned __int16 *)(v26 + 8);
          while ( 1 )
          {
            v33 = *(unsigned int *)(v31 + 8);
            if ( v32 < v33 )
              break;
            if ( !*(_QWORD *)v31 )
            {
              v32 = (unsigned int)(v33 - 1);
              break;
            }
            v31 = *(_QWORD *)v31;
          }
          v128 = v32;
          RtlpHeapRemoveListEntry(
            (__int64)BaseAddress,
            v31,
            1,
            (__int64 *)(v26 + 16),
            v32,
            *(unsigned __int16 *)(v26 + 8));
        }
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        if ( (*(_BYTE *)(v26 + 10) & 8) == 0 || RtlpCommitBlock(BaseAddress, v26) )
        {
          v34 = *(_BYTE *)(v26 + 10);
          if ( (v34 & 4) != 0 )
          {
            v35 = 16LL * *(unsigned __int16 *)(v26 + 8) - 32;
            v129 = v35;
            if ( (v34 & 2) != 0 && v35 > 4 )
            {
              v35 -= 4LL;
              v129 = v35;
            }
            v36 = RtlCompareMemoryUlong((PVOID)(v26 + 32), v35, 0xFEEEFEEE);
            if ( v36 != v35 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v26,
                (const void *)(v36 + v26 + 32));
              RtlpBreakPointHeap();
            }
          }
          *(_BYTE *)(v26 + 10) = 0;
          *(_BYTE *)(v26 + 15) = 0;
          v4 = (char *)v26;
          v130 = v26;
          v110 += *(unsigned __int16 *)(v26 + 8);
          *(_WORD *)(v26 + 8) = v110;
          *(_WORD *)(v26 + 16 * v110 + 12) = v110 ^ *((_WORD *)BaseAddress + 70);
        }
        else
        {
          RtlpDeCommitFreeBlock((int)BaseAddress);
        }
      }
      else
      {
        RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v26 + 16, v30, v29, 0LL);
      }
      v24 = v110;
    }
    v37 = (__int64)&v4[16 * v24];
    if ( !*((_DWORD *)BaseAddress + 31) )
      goto LABEL_79;
    v123 = *(_DWORD *)(v37 + 8) ^ *((_DWORD *)BaseAddress + 34);
    if ( HIBYTE(v123) != (BYTE2(v123) ^ (unsigned __int8)(BYTE1(v123) ^ v123)) )
      RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)v4 + 16 * v24, 0, 0LL, 0LL);
    while ( 1 )
    {
      v24 = v110;
LABEL_79:
      if ( ((*(_BYTE *)(v37 + 10) ^ (unsigned __int8)(BaseAddress[138] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
        break;
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_DWORD *)(v37 + 8) ^= *((_DWORD *)BaseAddress + 34);
        if ( *(_BYTE *)(v37 + 11) != (*(_BYTE *)(v37 + 8) ^ (unsigned __int8)(*(_BYTE *)(v37 + 9) ^ *(_BYTE *)(v37 + 10))) )
          RtlpAnalyzeHeapFailure(BaseAddress, v37);
      }
      v38 = *(_QWORD *)(v37 + 16);
      v39 = *(__int64 **)(v37 + 24);
      v40 = *v39;
      v41 = *(_QWORD *)(v38 + 8);
      if ( *v39 == v41 && v40 == v37 + 16 )
      {
        *((_QWORD *)BaseAddress + 24) -= *(unsigned __int16 *)(v37 + 8);
        v42 = *((_QWORD *)BaseAddress + 39);
        if ( v42 )
        {
          v43 = *(unsigned __int16 *)(v37 + 8);
          while ( 1 )
          {
            v44 = *(unsigned int *)(v42 + 8);
            if ( v43 < v44 )
              break;
            if ( !*(_QWORD *)v42 )
            {
              v43 = (unsigned int)(v44 - 1);
              break;
            }
            v42 = *(_QWORD *)v42;
          }
          v131 = v43;
          RtlpHeapRemoveListEntry(
            (__int64)BaseAddress,
            v42,
            1,
            (__int64 *)(v37 + 16),
            v43,
            *(unsigned __int16 *)(v37 + 8));
        }
        *v39 = v38;
        *(_QWORD *)(v38 + 8) = v39;
        if ( (*(_BYTE *)(v37 + 10) & 8) == 0 || RtlpCommitBlock(BaseAddress, v37) )
        {
          v45 = *(_BYTE *)(v37 + 10);
          if ( (v45 & 4) != 0 )
          {
            v46 = 16LL * *(unsigned __int16 *)(v37 + 8) - 32;
            v132 = v46;
            if ( (v45 & 2) != 0 && v46 > 4 )
            {
              v46 -= 4LL;
              v132 = v46;
            }
            v47 = RtlCompareMemoryUlong((PVOID)(v37 + 32), v46, 0xFEEEFEEE);
            if ( v47 != v46 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v37,
                (const void *)(v47 + v37 + 32));
              RtlpBreakPointHeap();
            }
          }
          v4[10] = 0;
          v4[15] = 0;
          v110 += *(unsigned __int16 *)(v37 + 8);
          *((_WORD *)v4 + 4) = v110;
          *(_WORD *)&v4[16 * v110 + 12] = v110 ^ *((_WORD *)BaseAddress + 70);
          v24 = v110;
          break;
        }
        RtlpDeCommitFreeBlock((int)BaseAddress);
      }
      else
      {
        RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v37 + 16, v41, v40, 0LL);
      }
    }
    v148 = v4;
    v7 = 0LL;
  }
  if ( (v24 < *((_QWORD *)BaseAddress + 22) || v24 + *((_QWORD *)BaseAddress + 24) < *((_QWORD *)BaseAddress + 23))
    && (v24 + *((_QWORD *)BaseAddress + 24) <= *((_QWORD *)BaseAddress + 23)
     || v24 < 0x100
     || *((_WORD *)v4 + 6) != *((_WORD *)BaseAddress + 70)) )
  {
    if ( v24 > 0xFF00 )
    {
      RtlpInsertFreeBlock(BaseAddress, v4, v24);
LABEL_228:
      if ( updated )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *((_DWORD *)v4 + 2) ^= *((_DWORD *)BaseAddress + 34);
          if ( v4[11] != ((unsigned __int8)v4[8] ^ (unsigned __int8)(v4[9] ^ v4[10])) )
            RtlpAnalyzeHeapFailure(BaseAddress, v4);
        }
        v4[10] |= 2u;
        v93 = &v4[16 * *((unsigned __int16 *)v4 + 4)];
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v4[11] = v4[8] ^ v4[9] ^ v4[10];
          *((_DWORD *)v4 + 2) ^= *((_DWORD *)BaseAddress + 34);
        }
        *((_WORD *)v93 - 2) = updated;
        *((_WORD *)v93 - 1) = 0;
        if ( (*((_DWORD *)BaseAddress + 28) & 0x8000000) != 0 )
          *((_WORD *)v93 - 1) = RtlLogStackBackTraceEx(1u);
      }
      goto LABEL_254;
    }
    if ( v6 )
    {
      v48 = (unsigned __int16)v24;
      v114 = (unsigned __int16)v24;
      v4[10] = 0;
      v4[15] = 0;
      v49 = BaseAddress + 336;
      v50 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v50 )
      {
        while ( 1 )
        {
          v51 = *((unsigned int *)v50 + 2);
          if ( (unsigned __int16)v24 < v51 )
          {
            v52 = (unsigned __int16)v24;
            v118 = (unsigned __int16)v24;
            goto LABEL_120;
          }
          if ( !*v50 )
            break;
          v50 = (__int64 *)*v50;
        }
        v52 = v51 - 1;
        v118 = (unsigned int)(v51 - 1);
        while ( 1 )
        {
LABEL_120:
          v53 = v52 - *((_DWORD *)v50 + 6);
          v54 = (_QWORD *)v50[4];
          v55 = (_QWORD *)v54[1];
          if ( v54 == v55 )
          {
            v7 = (_QWORD *)v50[4];
          }
          else
          {
            v56 = (_DWORD)v55 - 16;
            v57 = *((_DWORD *)v55 - 2);
            v124 = v57;
            if ( *((_DWORD *)BaseAddress + 31) )
            {
              v124 = v57 ^ *((_DWORD *)BaseAddress + 34);
              if ( HIBYTE(v124) != (BYTE1(v124) ^ (unsigned __int8)(v124 ^ BYTE2(v124))) )
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v56, 0, 0LL, 0LL);
            }
            v138 = v48 - (unsigned __int16)v124;
            if ( v138 <= 0 )
            {
              v58 = *v54 - 16LL;
              v59 = *(_DWORD *)(v58 + 8);
              v125 = v59;
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v125 = v59 ^ *((_DWORD *)BaseAddress + 34);
                if ( HIBYTE(v125) != ((unsigned __int8)v125 ^ (unsigned __int8)(BYTE1(v125) ^ BYTE2(v125))) )
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v58, 0, 0LL, 0LL);
              }
              v139 = v48 - (unsigned __int16)v125;
              if ( v139 > 0 )
              {
                if ( *v50 || (_DWORD)v118 != *((_DWORD *)v50 + 2) - 1 )
                {
                  v62 = (unsigned int)v53 >> 5;
                  v115 = (unsigned int)v53 >> 5;
                  v63 = ((unsigned int)(*((_DWORD *)v50 + 2) - *((_DWORD *)v50 + 6)) >> 5) - 1;
                  v64 = (unsigned int *)(v50[5] + 4 * v62);
                  v133 = v64;
                  v65 = *v64 & ~((1 << (v53 & 0x1F)) - 1);
                  while ( !v65 )
                  {
                    if ( (unsigned int)v62 > v63 )
                    {
                      v4 = v148;
                      goto LABEL_163;
                    }
                    v133 = ++v64;
                    v65 = *v64;
                    LODWORD(v62) = v62 + 1;
                    v115 = v62;
                  }
                  if ( (_WORD)v65 )
                  {
                    if ( (_BYTE)v65 )
                      v66 = RtlpBitsClearLow[(unsigned __int8)v65];
                    else
                      v66 = RtlpBitsClearLow[BYTE1(v65)] + 8;
                  }
                  else if ( (v65 & 0xFF0000) != 0 )
                  {
                    v66 = RtlpBitsClearLow[BYTE2(v65)] + 16;
                  }
                  else
                  {
                    v66 = RtlpBitsClearLow[(unsigned __int64)v65 >> 24] + 24;
                  }
                  v67 = (unsigned int)(v66 + 32 * v62);
                  v115 = v67;
                  if ( *((_DWORD *)v50 + 3) )
                    v67 = (unsigned int)(2 * v67);
                  v7 = *(_QWORD **)(v50[6] + 8 * v67);
                }
                else
                {
                  if ( *((_DWORD *)v50 + 3) )
                    v53 = (unsigned int)(2 * v53);
                  for ( i = *(_QWORD **)(v50[6] + 8 * v53); v54 != i; i = (_QWORD *)*i )
                  {
                    v61 = *((_DWORD *)i - 2);
                    v126 = v61;
                    if ( *((_DWORD *)BaseAddress + 31) )
                    {
                      v126 = v61 ^ *((_DWORD *)BaseAddress + 34);
                      if ( HIBYTE(v126) != ((unsigned __int8)v126 ^ (unsigned __int8)(BYTE1(v126) ^ BYTE2(v126))) )
                        RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)i - 16, 0, 0LL, 0LL);
                    }
                    v140 = v114 - (unsigned __int16)v126;
                    if ( v140 <= 0 )
                    {
                      v7 = i;
                      break;
                    }
                  }
                }
                v48 = v114;
              }
              else
              {
                v7 = (_QWORD *)*v54;
              }
            }
            else
            {
              v7 = v54;
            }
            v4 = v148;
          }
          if ( v7 )
            break;
LABEL_163:
          v50 = (__int64 *)*v50;
          v52 = *((_DWORD *)v50 + 6);
          v118 = v52;
          v48 = v114;
          v7 = 0LL;
        }
        v49 = BaseAddress + 336;
      }
      else
      {
        v7 = (_QWORD *)*v49;
      }
      while ( v49 != v7 )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v68 = *((_DWORD *)v7 - 2);
          v143 = v68;
          if ( (v68 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v143 = v68 ^ *((_DWORD *)BaseAddress + 34);
          v69 = v143;
          v4 = v148;
        }
        else
        {
          v69 = *((_WORD *)v7 - 4);
        }
        v112 = v69;
        if ( v48 <= v69 )
          break;
        v7 = (_QWORD *)*v7;
        v49 = BaseAddress + 336;
      }
      v70 = v4 + 16;
      v114 = (unsigned __int64)(v4 + 16);
      v71 = (__int64 *)v7[1];
      if ( (_QWORD *)*v71 == v7 )
      {
        *v70 = v7;
        *((_QWORD *)v4 + 3) = v71;
        *v71 = (__int64)v70;
        v7[1] = v70;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v7, 0, *v71, 0LL);
      }
      *((_QWORD *)BaseAddress + 24) += *((unsigned __int16 *)v4 + 4);
      v72 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v72 )
      {
        v73 = *((unsigned __int16 *)v4 + 4);
        while ( 1 )
        {
          v74 = *((unsigned int *)v72 + 2);
          if ( v73 < v74 )
            break;
          if ( !*v72 )
          {
            v73 = (unsigned int)(v74 - 1);
            break;
          }
          v72 = (__int64 *)*v72;
        }
        v134 = v73;
        v75 = *((unsigned __int16 *)v4 + 4);
        v144 = *((unsigned __int16 *)v4 + 4);
        v76 = v73 - *((_DWORD *)v72 + 6);
        if ( *((_DWORD *)v72 + 3) )
          v77 = 2 * v76;
        else
          v77 = v76;
        ++*((_DWORD *)v72 + 4);
        v78 = 8 * v77;
        v79 = *(_QWORD *)(8 * v77 + v72[6]);
        if ( (_DWORD)v73 == *((_DWORD *)v72 + 2) - 1 )
          ++*((_DWORD *)v72 + 5);
        if ( !v79 )
          goto LABEL_192;
        v80 = *(_DWORD *)(v79 - 16 + 8);
        v122 = v80;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v122 = v80 ^ *((_DWORD *)BaseAddress + 34);
          if ( HIBYTE(v122) != (BYTE2(v122) ^ (unsigned __int8)(BYTE1(v122) ^ v122)) )
            RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v79 - 16, 0, 0LL, 0LL);
        }
        v141 = v75 - (unsigned __int16)v122;
        v4 = v148;
        if ( v141 <= 0 )
LABEL_192:
          *(_QWORD *)(v78 + v72[6]) = v114;
        if ( !v79 )
          *(_DWORD *)(v72[5] + 4LL * (v76 >> 5)) |= 1 << (v76 & 0x1F);
      }
LABEL_225:
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        v4[11] = v4[8] ^ v4[9] ^ v4[10];
        *((_DWORD *)v4 + 2) ^= *((_DWORD *)BaseAddress + 34);
      }
      goto LABEL_228;
    }
    v81 = (unsigned __int16)v24;
    v4[10] &= 0xF0u;
    v4[15] = 0;
    if ( (BaseAddress[112] & 0x40) == 0 )
    {
LABEL_204:
      v84 = BaseAddress + 336;
      if ( *((_QWORD *)BaseAddress + 39) )
        Entry = (_QWORD *)RtlpFindEntry(BaseAddress, v81);
      else
        Entry = (_QWORD *)*v84;
      while ( v84 != Entry )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v86 = *((_DWORD *)Entry - 2);
          v142 = v86;
          if ( (v86 & *((_DWORD *)BaseAddress + 31)) != 0 )
            v142 = v86 ^ *((_DWORD *)BaseAddress + 34);
          v87 = v142;
          v4 = v148;
        }
        else
        {
          v87 = *((_WORD *)Entry - 4);
        }
        v113 = v87;
        if ( v81 <= v87 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v88 = v4 + 16;
      v89 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v89 == Entry )
      {
        *v88 = Entry;
        *((_QWORD *)v4 + 3) = v89;
        *v89 = (__int64)v88;
        Entry[1] = v88;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v89, 0LL);
      }
      *((_QWORD *)BaseAddress + 24) += *((unsigned __int16 *)v4 + 4);
      v90 = (__int64 **)*((_QWORD *)BaseAddress + 39);
      if ( v90 )
      {
        v91 = *((unsigned __int16 *)v4 + 4);
        while ( 1 )
        {
          v92 = *((unsigned int *)v90 + 2);
          if ( v91 < v92 )
            break;
          if ( !*v90 )
          {
            v91 = (unsigned int)(v92 - 1);
            break;
          }
          v90 = (__int64 **)*v90;
        }
        v136 = v91;
        LOBYTE(Entry) = 1;
        RtlpHeapAddListEntry(
          (_DWORD)BaseAddress,
          (_DWORD)v90,
          (_DWORD)Entry,
          (_DWORD)v4 + 16,
          v91,
          *((unsigned __int16 *)v4 + 4));
      }
      goto LABEL_225;
    }
    v82 = v4 + 32;
    v135 = v4 + 32;
    v83 = (16 * (unsigned __int64)(unsigned int)v81 - 32) >> 2;
    v120 = v83;
    if ( v83 )
    {
      if ( ((unsigned __int8)v82 & 4) == 0 )
        goto LABEL_201;
      *v82 = -17891602;
      v120 = --v83;
      if ( v83 )
      {
        v82 = v4 + 36;
        v135 = v4 + 36;
LABEL_201:
        memset64(v82, 0xFEEEFEEEFEEEFEEEuLL, v83 >> 1);
        if ( (v83 & 1) != 0 )
          v82[v83 - 1] = -17891602;
      }
    }
    v4[10] |= 4u;
    goto LABEL_204;
  }
  RtlpDeCommitFreeBlock((int)BaseAddress);
LABEL_254:
  if ( v108 )
  {
    if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) == 0 )
    {
      ++*((_DWORD *)BaseAddress + 152);
      v100 = *((_DWORD *)BaseAddress + 154);
      if ( *((_DWORD *)BaseAddress + 152) > v100 )
      {
        *((_DWORD *)BaseAddress + 152) = 0;
        v101 = *((_QWORD *)BaseAddress + 68) - 16LL * *((_QWORD *)BaseAddress + 24);
        if ( v101 > *((_QWORD *)BaseAddress + 80) )
          *((_QWORD *)BaseAddress + 80) = v101;
        *((_QWORD *)BaseAddress + 81) = v101;
      }
      if ( ++*((_DWORD *)BaseAddress + 155) >= 0x1000u )
      {
        if ( BaseAddress[386] != 2 || (v102 = 4, *((_DWORD *)BaseAddress + 156) <= 0x10u) )
          v102 = 8;
        if ( *((_DWORD *)BaseAddress + 153) > (unsigned int)(4096 >> v102) && v100 < 0x10000 )
          *((_DWORD *)BaseAddress + 154) = 2 * v100;
        *((_DWORD *)BaseAddress + 153) = 0;
        *((_DWORD *)BaseAddress + 155) = 0;
      }
    }
    v103 = *((_QWORD *)BaseAddress + 44);
    v21 = (*(_DWORD *)(v103 + 12))-- == 1;
    if ( v21 )
    {
      *(_QWORD *)(v103 + 16) = 0LL;
      v104 = _InterlockedCompareExchange((volatile signed __int32 *)(v103 + 8), -1, -2);
      if ( v104 != -2 )
      {
        if ( (*(_BYTE *)(v103 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v103);
        DeferredCriticalSectionEvent = *(_QWORD *)(v103 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v103);
        do
        {
          v106 = v104 & 2 | 1;
          v107 = _InterlockedCompareExchange((volatile signed __int32 *)(v103 + 8), v106 + v104, v104);
          v21 = v104 == v107;
          v104 = v107;
        }
        while ( !v21 );
        if ( (v106 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v103, DeferredCriticalSectionEvent);
      }
    }
  }
  return v116;
}
