/*
 * XREFs of RtlpFreeHeap @ 0x180049370
 * Callers:
 *     RtlFreeHeap @ 0x1800466F0 (RtlFreeHeap.c)
 *     RtlpHpFreeWithExceptionProtection @ 0x180046F90 (RtlpHpFreeWithExceptionProtection.c)
 *     RtlpFreeHeapInternal @ 0x180048100 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlEnterCriticalSection @ 0x180019B50 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x180019DC0 (RtlLeaveCriticalSection.c)
 *     RtlpHeapRemoveListEntry @ 0x1800289EC (RtlpHeapRemoveListEntry.c)
 *     RtlpCommitBlock @ 0x180028B34 (RtlpCommitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028DFC (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpUpdateHeapRates @ 0x180028FD0 (RtlpUpdateHeapRates.c)
 *     RtlLogStackBackTraceEx @ 0x18002B208 (RtlLogStackBackTraceEx.c)
 *     RtlpDeCommitFreeBlock @ 0x18004A810 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x18004AE00 (RtlpInsertFreeBlock.c)
 *     RtlpFindEntry @ 0x18004BE88 (RtlpFindEntry.c)
 *     RtlpHeapAddListEntry @ 0x18004C2F4 (RtlpHeapAddListEntry.c)
 *     RtlNtStatusToDosError @ 0x18005A4E0 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x18005C3E0 (DbgPrint.c)
 *     RtlpCreateDeferredCriticalSectionEvent @ 0x180066D28 (RtlpCreateDeferredCriticalSectionEvent.c)
 *     RtlDebugFreeHeap @ 0x180091B60 (RtlDebugFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x1800A5E64 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800AA730 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800D3B00 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUnWaitCriticalSectionEx @ 0x1800D3CB8 (RtlpUnWaitCriticalSectionEx.c)
 *     RtlpUpdateTagEntry @ 0x1800EADFC (RtlpUpdateTagEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800EC324 (RtlpUpdateHeapWatermarks.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F79F4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F7E90 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x1800F9154 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F93BC (RtlpLogHeapFreeEvent.c)
 *     RtlpBreakPointHeap @ 0x1800FB678 (RtlpBreakPointHeap.c)
 */

__int64 __fastcall RtlpFreeHeap(__int64 a1, int a2, __int64 a3, __int64 a4)
{
  __int64 v4; // rsi
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
  unsigned __int64 v24; // r8
  unsigned __int64 v25; // rcx
  __int64 v26; // rdi
  __int64 v27; // r14
  __int64 *v28; // r15
  __int64 v29; // rax
  __int64 v30; // r9
  __int64 v31; // rdx
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // r8
  __int64 v34; // r9
  char v35; // al
  unsigned __int64 v36; // rsi
  __int64 v37; // r14
  __int64 v38; // rdi
  __int64 v39; // r14
  __int64 *v40; // r15
  __int64 v41; // rax
  __int64 v42; // r9
  __int64 v43; // rdx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // r8
  __int64 v46; // r9
  char v47; // al
  unsigned __int64 v48; // r14
  __int64 v49; // r15
  unsigned __int64 v50; // rdi
  _QWORD *v51; // rax
  __int64 *v52; // r12
  unsigned __int64 v53; // rcx
  unsigned int v54; // r15d
  __int64 v55; // r15
  _QWORD *v56; // r13
  _QWORD *v57; // rax
  int v58; // r8d
  int v59; // eax
  __int64 v60; // r8
  int v61; // eax
  _QWORD *i; // rdi
  int v63; // eax
  __int64 v64; // rdi
  unsigned int v65; // r9d
  unsigned int *v66; // r8
  unsigned int v67; // edx
  int v68; // eax
  __int64 v69; // rdi
  int v70; // ecx
  unsigned __int16 v71; // ax
  _QWORD *v72; // rcx
  __int64 *v73; // rax
  __int64 *v74; // rdi
  unsigned __int64 v75; // rcx
  unsigned __int64 v76; // rdx
  int v77; // r15d
  unsigned int v78; // r14d
  __int64 v79; // rax
  __int64 v80; // r12
  __int64 v81; // r13
  int v82; // eax
  unsigned __int64 v83; // r14
  _DWORD *v84; // r8
  unsigned __int64 v85; // rdx
  _QWORD *v86; // rdi
  _QWORD *Entry; // r8
  int v88; // ecx
  unsigned __int16 v89; // ax
  _QWORD *v90; // r14
  __int64 *v91; // rax
  __int64 **v92; // rdx
  unsigned __int64 v93; // rcx
  unsigned __int64 v94; // rdi
  __int64 v95; // rdi
  unsigned __int64 v96; // rsi
  __int64 v97; // rax
  __int64 v98; // rcx
  __int64 v99; // rdx
  __int64 v100; // r9
  __int64 v101; // r8
  unsigned int v102; // edx
  unsigned __int64 v103; // rcx
  char v104; // cl
  __int64 v105; // rdi
  signed __int32 v106; // ebx
  __int64 DeferredCriticalSectionEvent; // r8
  int v108; // edx
  signed __int32 v109; // eax
  char v110; // [rsp+40h] [rbp-188h]
  __int16 updated; // [rsp+44h] [rbp-184h]
  unsigned __int64 v112; // [rsp+50h] [rbp-178h] BYREF
  unsigned __int8 v113; // [rsp+58h] [rbp-170h]
  unsigned __int16 v114; // [rsp+5Ah] [rbp-16Eh]
  unsigned __int16 v115; // [rsp+5Ch] [rbp-16Ch]
  unsigned __int64 v116; // [rsp+60h] [rbp-168h]
  unsigned int v117; // [rsp+68h] [rbp-160h]
  unsigned int v118; // [rsp+6Ch] [rbp-15Ch]
  _QWORD *v119; // [rsp+70h] [rbp-158h]
  __int64 v120; // [rsp+78h] [rbp-150h]
  unsigned __int64 v121; // [rsp+80h] [rbp-148h] BYREF
  unsigned __int64 v122; // [rsp+88h] [rbp-140h]
  __int64 v123; // [rsp+90h] [rbp-138h]
  int v124; // [rsp+A0h] [rbp-128h]
  int v125; // [rsp+B0h] [rbp-118h]
  int v126; // [rsp+C0h] [rbp-108h]
  int v127; // [rsp+D0h] [rbp-F8h]
  int v128; // [rsp+E0h] [rbp-E8h]
  unsigned int NtGlobalFlag; // [rsp+E8h] [rbp-E0h]
  unsigned __int64 v130; // [rsp+F0h] [rbp-D8h]
  unsigned __int64 v131; // [rsp+F8h] [rbp-D0h]
  __int64 v132; // [rsp+100h] [rbp-C8h]
  unsigned __int64 v133; // [rsp+118h] [rbp-B0h]
  unsigned __int64 v134; // [rsp+120h] [rbp-A8h]
  unsigned int *v135; // [rsp+128h] [rbp-A0h]
  unsigned __int64 v136; // [rsp+130h] [rbp-98h]
  __int64 v137; // [rsp+138h] [rbp-90h]
  unsigned __int64 v138; // [rsp+140h] [rbp-88h]
  unsigned int v139; // [rsp+148h] [rbp-80h]
  int v140; // [rsp+14Ch] [rbp-7Ch]
  int v141; // [rsp+150h] [rbp-78h]
  int v142; // [rsp+154h] [rbp-74h]
  int v143; // [rsp+158h] [rbp-70h]
  int v144; // [rsp+168h] [rbp-60h]
  int v145; // [rsp+178h] [rbp-50h]
  __int64 v146; // [rsp+180h] [rbp-48h]
  __int64 v147; // [rsp+188h] [rbp-40h]
  __int64 v148; // [rsp+190h] [rbp-38h]
  struct _TEB *v149; // [rsp+198h] [rbp-30h]
  __int64 v150; // [rsp+1E0h] [rbp+18h]

  v150 = a3;
  v4 = a3;
  v6 = 1;
  v110 = 0;
  v118 = 1;
  v7 = 0LL;
  v121 = 0LL;
  updated = 0;
  if ( a1 == a3 )
  {
    RtlpLogHeapFailure(9, a1, a3, 0, 0LL, 0LL);
    return 0LL;
  }
  v9 = *(_DWORD *)(a1 + 116) | a2;
  if ( (v9 & 0x7D010F60) != 0 )
  {
    v6 = 0;
    v10 = 4LL;
    if ( (v9 & 0x61000000) != 0 && (v9 & 0x10000000) == 0 )
      return RtlDebugFreeHeap((void *)a1);
  }
  else
  {
    v10 = 3LL;
  }
  if ( MEMORY[0x7FFE0380] )
  {
    v4 = v150;
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0
      && ((*(unsigned __int8 *)(v150 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 17))) & 8) == 0 )
    {
      RtlpLogHeapFreeEvent(a1, a4, v10);
    }
  }
  if ( (v9 & 1) != 0 )
  {
    if ( *(_DWORD *)(a1 + 124) )
    {
      *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
      if ( *(_BYTE *)(v4 + 11) != (*(_BYTE *)(v4 + 8) ^ (unsigned __int8)(*(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10))) )
        RtlpAnalyzeHeapFailure(a1, v4);
    }
    goto LABEL_31;
  }
  v11 = *(_QWORD *)(a1 + 352);
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
        v149 = NtCurrentTeb();
        v149->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v118 = 0;
        goto LABEL_254;
      }
      RtlEnterCriticalSection(*(_QWORD *)(a1 + 352));
      RtlpUpdateHeapRates(a1, 1);
      goto LABEL_20;
    }
    ++*(_DWORD *)(v11 + 12);
  }
  ++*(_DWORD *)(a1 + 584);
LABEL_20:
  v110 = 1;
  v4 = v150;
  if ( *(_DWORD *)(a1 + 124) )
  {
    *(_DWORD *)(v150 + 8) ^= *(_DWORD *)(a1 + 136);
    if ( *(_BYTE *)(v150 + 11) != (*(_BYTE *)(v150 + 8) ^ (unsigned __int8)(*(_BYTE *)(v150 + 9) ^ *(_BYTE *)(v150 + 10))) )
      RtlpAnalyzeHeapFailure(a1, v150);
  }
  v15 = *(__int64 ***)(a1 + 312);
  do
  {
    if ( *(unsigned __int16 *)(v150 + 8) < (unsigned __int64)*((unsigned int *)v15 + 2) )
      break;
    v15 = (__int64 **)*v15;
  }
  while ( v15 );
LABEL_31:
  v16 = (_BYTE *)(v4 + 10);
  v17 = *(_BYTE *)(v4 + 10);
  if ( (v17 & 8) != 0 )
    *v16 = v17 & 0xF7;
  if ( *(_BYTE *)(v4 + 15) == 4 )
  {
    v96 = v4 - 48;
    v119 = (_QWORD *)v96;
    v123 = *(_QWORD *)(v96 + 32);
    v121 = v96 & 0xFFFFFFFFFFFF0000uLL;
    *(_QWORD *)(a1 + 560) -= v123;
    v97 = *(_QWORD *)v96;
    v98 = *(_QWORD *)(v96 + 8);
    v99 = *(_QWORD *)v98;
    v100 = *(_QWORD *)(*(_QWORD *)v96 + 8LL);
    if ( *(_QWORD *)v98 == v100 && v99 == v96 )
    {
      *(_QWORD *)v98 = v97;
      *(_QWORD *)(v97 + 8) = v98;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, v96, v100, v99, 0LL);
    }
    if ( !v6 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      v98 = NtGlobalFlag;
      if ( (NtGlobalFlag & 0x800) != 0 )
      {
        v101 = *(_QWORD *)(v96 + 32) >> 4;
        v96 = (unsigned __int64)v119;
        RtlpUpdateTagEntry(a1, *((unsigned __int16 *)v119 + 9), v101, 0, 3);
      }
      else
      {
        v96 = (unsigned __int64)v119;
      }
    }
    if ( v110 )
    {
      RtlLeaveCriticalSection(*(_QWORD *)(a1 + 352));
      v110 = 0;
    }
    v147 = *(_QWORD *)(v96 + 40);
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(a1, v121);
    v112 = 0LL;
    RtlpSecMemFreeVirtualMemory(v98, &v121, &v112, 0x8000LL);
    if ( MEMORY[0x7FFE0380] )
    {
      LODWORD(v96) = (_DWORD)v119;
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapContractEvent(a1, (_DWORD)v119, v123, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, MEMORY[0x7FFE0380]);
    }
    if ( MEMORY[0x7FFE038A] )
      RtlpLogHeapContractEvent(a1, v96, v123, 16 * *(_QWORD *)(a1 + 192), 0, 0LL, MEMORY[0x7FFE038A]);
    goto LABEL_254;
  }
  v18 = (unsigned __int16 *)(v4 + 8);
  v19 = *(_WORD *)(v4 + 8);
  if ( v19 < *(_WORD *)(a1 + 400) )
  {
    if ( ((unsigned __int8)(1 << (v19 & 7)) & *(_BYTE *)(((unsigned __int64)v19 >> 3) + a1 + 402)) == 0 )
    {
      v20 = (_WORD *)(*(_QWORD *)(a1 + 392) + 2LL * *v18);
      if ( *v20 > 1u )
        --*v20;
    }
    v4 = v150;
  }
  if ( !v6 )
  {
    v139 = NtCurrentPeb()->NtGlobalFlag;
    v4 = v150;
    if ( (v139 & 0x800) != 0 )
    {
      v21 = (*v16 & 2) == 0;
      v22 = *v18;
      if ( v21 )
      {
        v113 = *(_BYTE *)(v150 + 11);
        v23 = v113;
      }
      else
      {
        v148 = 16LL * *v18 + v150 - 16;
        v23 = *(unsigned __int16 *)(v148 + 2);
      }
      updated = RtlpUpdateTagEntry(a1, v23, v22, 0, 2);
    }
  }
  v24 = *v18;
  v112 = v24;
  if ( *(char *)(a1 + 112) >= 0 )
  {
    v132 = v4;
    v25 = 16 * (*(unsigned __int16 *)(v4 + 12) ^ (unsigned __int64)*(unsigned __int16 *)(a1 + 140));
    v26 = v4 - v25;
    if ( v4 - v25 != v4
      && ((*(_BYTE *)(v26 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) == 0 )
    {
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v26 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v26 + 11) != (*(_BYTE *)(v26 + 8) ^ (unsigned __int8)(*(_BYTE *)(v26 + 9) ^ *(_BYTE *)(v26 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v26);
      }
      v27 = *(_QWORD *)(v26 + 16);
      v28 = *(__int64 **)(v26 + 24);
      v29 = *v28;
      v30 = *(_QWORD *)(v27 + 8);
      if ( *v28 == v30 && v29 == v26 + 16 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v26 + 8);
        v31 = *(_QWORD *)(a1 + 312);
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
          v130 = v32;
          RtlpHeapRemoveListEntry(a1, v31, 1, (__int64 *)(v26 + 16), v32, *(unsigned __int16 *)(v26 + 8));
        }
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        if ( (*(_BYTE *)(v26 + 10) & 8) == 0 || RtlpCommitBlock(a1, v26) )
        {
          v35 = *(_BYTE *)(v26 + 10);
          if ( (v35 & 4) != 0 )
          {
            v36 = 16LL * *(unsigned __int16 *)(v26 + 8) - 32;
            v131 = v36;
            if ( (v35 & 2) != 0 && v36 > 4 )
            {
              v36 -= 4LL;
              v131 = v36;
            }
            v37 = RtlCompareMemoryUlong(v26 + 32, v36, 4277075694LL);
            if ( v37 != v36 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v26,
                (const void *)(v37 + v26 + 32));
              RtlpBreakPointHeap();
            }
          }
          *(_BYTE *)(v26 + 10) = 0;
          *(_BYTE *)(v26 + 15) = 0;
          v4 = v26;
          v132 = v26;
          v112 += *(unsigned __int16 *)(v26 + 8);
          *(_WORD *)(v26 + 8) = v112;
          *(_WORD *)(v26 + 16 * v112 + 12) = v112 ^ *(_WORD *)(a1 + 140);
        }
        else
        {
          LOBYTE(v34) = 1;
          RtlpDeCommitFreeBlock(a1, v26, *(unsigned __int16 *)(v26 + 8), v34);
        }
      }
      else
      {
        RtlpLogHeapFailure(12, a1, v26 + 16, v30, v29, 0LL);
      }
      v24 = v112;
    }
    v38 = v4 + 16 * v24;
    if ( !*(_DWORD *)(a1 + 124) )
      goto LABEL_79;
    v125 = *(_DWORD *)(v38 + 8) ^ *(_DWORD *)(a1 + 136);
    if ( HIBYTE(v125) != (BYTE2(v125) ^ (unsigned __int8)(BYTE1(v125) ^ v125)) )
      RtlpLogHeapFailure(3, a1, v4 + 16 * v24, 0, 0LL, 0LL);
    while ( 1 )
    {
      v24 = v112;
LABEL_79:
      if ( ((*(_BYTE *)(v38 + 10) ^ (unsigned __int8)(*(_BYTE *)(a1 + 138) & (*(_DWORD *)(a1 + 124) >> 20))) & 1) != 0 )
        break;
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_DWORD *)(v38 + 8) ^= *(_DWORD *)(a1 + 136);
        if ( *(_BYTE *)(v38 + 11) != (*(_BYTE *)(v38 + 8) ^ (unsigned __int8)(*(_BYTE *)(v38 + 9) ^ *(_BYTE *)(v38 + 10))) )
          RtlpAnalyzeHeapFailure(a1, v38);
      }
      v39 = *(_QWORD *)(v38 + 16);
      v40 = *(__int64 **)(v38 + 24);
      v41 = *v40;
      v42 = *(_QWORD *)(v39 + 8);
      if ( *v40 == v42 && v41 == v38 + 16 )
      {
        *(_QWORD *)(a1 + 192) -= *(unsigned __int16 *)(v38 + 8);
        v43 = *(_QWORD *)(a1 + 312);
        if ( v43 )
        {
          v44 = *(unsigned __int16 *)(v38 + 8);
          while ( 1 )
          {
            v45 = *(unsigned int *)(v43 + 8);
            if ( v44 < v45 )
              break;
            if ( !*(_QWORD *)v43 )
            {
              v44 = (unsigned int)(v45 - 1);
              break;
            }
            v43 = *(_QWORD *)v43;
          }
          v133 = v44;
          RtlpHeapRemoveListEntry(a1, v43, 1, (__int64 *)(v38 + 16), v44, *(unsigned __int16 *)(v38 + 8));
        }
        *v40 = v39;
        *(_QWORD *)(v39 + 8) = v40;
        if ( (*(_BYTE *)(v38 + 10) & 8) == 0 || RtlpCommitBlock(a1, v38) )
        {
          v47 = *(_BYTE *)(v38 + 10);
          if ( (v47 & 4) != 0 )
          {
            v48 = 16LL * *(unsigned __int16 *)(v38 + 8) - 32;
            v134 = v48;
            if ( (v47 & 2) != 0 && v48 > 4 )
            {
              v48 -= 4LL;
              v134 = v48;
            }
            v49 = RtlCompareMemoryUlong(v38 + 32, v48, 4277075694LL);
            if ( v49 != v48 )
            {
              if ( NtCurrentPeb()->Ldr )
                DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
              else
                DbgPrint("HEAP: ");
              DbgPrint(
                "HEAP: Free Heap block %p modified at %p after it was freed\n",
                (const void *)v38,
                (const void *)(v49 + v38 + 32));
              RtlpBreakPointHeap();
            }
          }
          *(_BYTE *)(v4 + 10) = 0;
          *(_BYTE *)(v4 + 15) = 0;
          v112 += *(unsigned __int16 *)(v38 + 8);
          *(_WORD *)(v4 + 8) = v112;
          *(_WORD *)(v4 + 16 * v112 + 12) = v112 ^ *(_WORD *)(a1 + 140);
          v24 = v112;
          break;
        }
        LOBYTE(v46) = 1;
        RtlpDeCommitFreeBlock(a1, v38, *(unsigned __int16 *)(v38 + 8), v46);
      }
      else
      {
        RtlpLogHeapFailure(12, a1, v38 + 16, v42, v41, 0LL);
      }
    }
    v150 = v4;
    v7 = 0LL;
  }
  if ( (v24 < *(_QWORD *)(a1 + 176) || v24 + *(_QWORD *)(a1 + 192) < *(_QWORD *)(a1 + 184))
    && (v24 + *(_QWORD *)(a1 + 192) <= *(_QWORD *)(a1 + 184)
     || v24 < 0x100
     || *(_WORD *)(v4 + 12) != *(_WORD *)(a1 + 140)) )
  {
    if ( v24 > 0xFF00 )
    {
      RtlpInsertFreeBlock(a1, v4, v24);
LABEL_228:
      if ( updated )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
          if ( *(_BYTE *)(v4 + 11) != (*(_BYTE *)(v4 + 8) ^ (unsigned __int8)(*(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10))) )
            RtlpAnalyzeHeapFailure(a1, v4);
        }
        *(_BYTE *)(v4 + 10) |= 2u;
        v95 = 16LL * *(unsigned __int16 *)(v4 + 8) + v4;
        if ( *(_DWORD *)(a1 + 124) )
        {
          *(_BYTE *)(v4 + 11) = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
          *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
        }
        *(_WORD *)(v95 - 4) = updated;
        *(_WORD *)(v95 - 2) = 0;
        if ( (*(_DWORD *)(a1 + 112) & 0x8000000) != 0 )
          *(_WORD *)(v95 - 2) = RtlLogStackBackTraceEx(1u);
      }
      goto LABEL_254;
    }
    if ( v6 )
    {
      v50 = (unsigned __int16)v24;
      v116 = (unsigned __int16)v24;
      *(_BYTE *)(v4 + 10) = 0;
      *(_BYTE *)(v4 + 15) = 0;
      v51 = (_QWORD *)(a1 + 336);
      v52 = *(__int64 **)(a1 + 312);
      if ( v52 )
      {
        while ( 1 )
        {
          v53 = *((unsigned int *)v52 + 2);
          if ( (unsigned __int16)v24 < v53 )
          {
            v54 = (unsigned __int16)v24;
            v120 = (unsigned __int16)v24;
            goto LABEL_120;
          }
          if ( !*v52 )
            break;
          v52 = (__int64 *)*v52;
        }
        v54 = v53 - 1;
        v120 = (unsigned int)(v53 - 1);
        while ( 1 )
        {
LABEL_120:
          v55 = v54 - *((_DWORD *)v52 + 6);
          v56 = (_QWORD *)v52[4];
          v57 = (_QWORD *)v56[1];
          if ( v56 == v57 )
          {
            v7 = (_QWORD *)v52[4];
          }
          else
          {
            v58 = (_DWORD)v57 - 16;
            v59 = *((_DWORD *)v57 - 2);
            v126 = v59;
            if ( *(_DWORD *)(a1 + 124) )
            {
              v126 = v59 ^ *(_DWORD *)(a1 + 136);
              if ( HIBYTE(v126) != (BYTE1(v126) ^ (unsigned __int8)(v126 ^ BYTE2(v126))) )
                RtlpLogHeapFailure(3, a1, v58, 0, 0LL, 0LL);
            }
            v140 = v50 - (unsigned __int16)v126;
            if ( v140 <= 0 )
            {
              v60 = *v56 - 16LL;
              v61 = *(_DWORD *)(v60 + 8);
              v127 = v61;
              if ( *(_DWORD *)(a1 + 124) )
              {
                v127 = v61 ^ *(_DWORD *)(a1 + 136);
                if ( HIBYTE(v127) != ((unsigned __int8)v127 ^ (unsigned __int8)(BYTE1(v127) ^ BYTE2(v127))) )
                  RtlpLogHeapFailure(3, a1, v60, 0, 0LL, 0LL);
              }
              v141 = v50 - (unsigned __int16)v127;
              if ( v141 > 0 )
              {
                if ( *v52 || (_DWORD)v120 != *((_DWORD *)v52 + 2) - 1 )
                {
                  v64 = (unsigned int)v55 >> 5;
                  v117 = (unsigned int)v55 >> 5;
                  v65 = ((unsigned int)(*((_DWORD *)v52 + 2) - *((_DWORD *)v52 + 6)) >> 5) - 1;
                  v66 = (unsigned int *)(v52[5] + 4 * v64);
                  v135 = v66;
                  v67 = *v66 & ~((1 << (v55 & 0x1F)) - 1);
                  while ( !v67 )
                  {
                    if ( (unsigned int)v64 > v65 )
                    {
                      v4 = v150;
                      goto LABEL_163;
                    }
                    v135 = ++v66;
                    v67 = *v66;
                    LODWORD(v64) = v64 + 1;
                    v117 = v64;
                  }
                  if ( (_WORD)v67 )
                  {
                    if ( (_BYTE)v67 )
                      v68 = RtlpBitsClearLow[(unsigned __int8)v67];
                    else
                      v68 = RtlpBitsClearLow[BYTE1(v67)] + 8;
                  }
                  else if ( (v67 & 0xFF0000) != 0 )
                  {
                    v68 = RtlpBitsClearLow[BYTE2(v67)] + 16;
                  }
                  else
                  {
                    v68 = RtlpBitsClearLow[(unsigned __int64)v67 >> 24] + 24;
                  }
                  v69 = (unsigned int)(v68 + 32 * v64);
                  v117 = v69;
                  if ( *((_DWORD *)v52 + 3) )
                    v69 = (unsigned int)(2 * v69);
                  v7 = *(_QWORD **)(v52[6] + 8 * v69);
                }
                else
                {
                  if ( *((_DWORD *)v52 + 3) )
                    v55 = (unsigned int)(2 * v55);
                  for ( i = *(_QWORD **)(v52[6] + 8 * v55); v56 != i; i = (_QWORD *)*i )
                  {
                    v63 = *((_DWORD *)i - 2);
                    v128 = v63;
                    if ( *(_DWORD *)(a1 + 124) )
                    {
                      v128 = v63 ^ *(_DWORD *)(a1 + 136);
                      if ( HIBYTE(v128) != ((unsigned __int8)v128 ^ (unsigned __int8)(BYTE1(v128) ^ BYTE2(v128))) )
                        RtlpLogHeapFailure(3, a1, (_DWORD)i - 16, 0, 0LL, 0LL);
                    }
                    v142 = v116 - (unsigned __int16)v128;
                    if ( v142 <= 0 )
                    {
                      v7 = i;
                      break;
                    }
                  }
                }
                v50 = v116;
              }
              else
              {
                v7 = (_QWORD *)*v56;
              }
            }
            else
            {
              v7 = v56;
            }
            v4 = v150;
          }
          if ( v7 )
            break;
LABEL_163:
          v52 = (__int64 *)*v52;
          v54 = *((_DWORD *)v52 + 6);
          v120 = v54;
          v50 = v116;
          v7 = 0LL;
        }
        v51 = (_QWORD *)(a1 + 336);
      }
      else
      {
        v7 = (_QWORD *)*v51;
      }
      while ( v51 != v7 )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v70 = *((_DWORD *)v7 - 2);
          v145 = v70;
          if ( (v70 & *(_DWORD *)(a1 + 124)) != 0 )
            v145 = v70 ^ *(_DWORD *)(a1 + 136);
          v71 = v145;
          v4 = v150;
        }
        else
        {
          v71 = *((_WORD *)v7 - 4);
        }
        v114 = v71;
        if ( v50 <= v71 )
          break;
        v7 = (_QWORD *)*v7;
        v51 = (_QWORD *)(a1 + 336);
      }
      v72 = (_QWORD *)(v4 + 16);
      v116 = v4 + 16;
      v73 = (__int64 *)v7[1];
      if ( (_QWORD *)*v73 == v7 )
      {
        *v72 = v7;
        *(_QWORD *)(v4 + 24) = v73;
        *v73 = (__int64)v72;
        v7[1] = v72;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v7, 0, *v73, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v4 + 8);
      v74 = *(__int64 **)(a1 + 312);
      if ( v74 )
      {
        v75 = *(unsigned __int16 *)(v4 + 8);
        while ( 1 )
        {
          v76 = *((unsigned int *)v74 + 2);
          if ( v75 < v76 )
            break;
          if ( !*v74 )
          {
            v75 = (unsigned int)(v76 - 1);
            break;
          }
          v74 = (__int64 *)*v74;
        }
        v136 = v75;
        v77 = *(unsigned __int16 *)(v4 + 8);
        v146 = *(unsigned __int16 *)(v4 + 8);
        v78 = v75 - *((_DWORD *)v74 + 6);
        if ( *((_DWORD *)v74 + 3) )
          v79 = 2 * v78;
        else
          v79 = v78;
        ++*((_DWORD *)v74 + 4);
        v80 = 8 * v79;
        v81 = *(_QWORD *)(8 * v79 + v74[6]);
        if ( (_DWORD)v75 == *((_DWORD *)v74 + 2) - 1 )
          ++*((_DWORD *)v74 + 5);
        if ( !v81 )
          goto LABEL_192;
        v82 = *(_DWORD *)(v81 - 16 + 8);
        v124 = v82;
        if ( *(_DWORD *)(a1 + 124) )
        {
          v124 = v82 ^ *(_DWORD *)(a1 + 136);
          if ( HIBYTE(v124) != (BYTE2(v124) ^ (unsigned __int8)(BYTE1(v124) ^ v124)) )
            RtlpLogHeapFailure(3, a1, v81 - 16, 0, 0LL, 0LL);
        }
        v143 = v77 - (unsigned __int16)v124;
        v4 = v150;
        if ( v143 <= 0 )
LABEL_192:
          *(_QWORD *)(v80 + v74[6]) = v116;
        if ( !v81 )
          *(_DWORD *)(v74[5] + 4LL * (v78 >> 5)) |= 1 << (v78 & 0x1F);
      }
LABEL_225:
      if ( *(_DWORD *)(a1 + 124) )
      {
        *(_BYTE *)(v4 + 11) = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
        *(_DWORD *)(v4 + 8) ^= *(_DWORD *)(a1 + 136);
      }
      goto LABEL_228;
    }
    v83 = (unsigned __int16)v24;
    *(_BYTE *)(v4 + 10) &= 0xF0u;
    *(_BYTE *)(v4 + 15) = 0;
    if ( (*(_BYTE *)(a1 + 112) & 0x40) == 0 )
    {
LABEL_204:
      v86 = (_QWORD *)(a1 + 336);
      if ( *(_QWORD *)(a1 + 312) )
        Entry = (_QWORD *)RtlpFindEntry(a1, v83);
      else
        Entry = (_QWORD *)*v86;
      while ( v86 != Entry )
      {
        if ( *(_DWORD *)(a1 + 124) )
        {
          v88 = *((_DWORD *)Entry - 2);
          v144 = v88;
          if ( (v88 & *(_DWORD *)(a1 + 124)) != 0 )
            v144 = v88 ^ *(_DWORD *)(a1 + 136);
          v89 = v144;
          v4 = v150;
        }
        else
        {
          v89 = *((_WORD *)Entry - 4);
        }
        v115 = v89;
        if ( v83 <= v89 )
          break;
        Entry = (_QWORD *)*Entry;
      }
      v90 = (_QWORD *)(v4 + 16);
      v91 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v91 == Entry )
      {
        *v90 = Entry;
        *(_QWORD *)(v4 + 24) = v91;
        *v91 = (__int64)v90;
        Entry[1] = v90;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v91, 0LL);
      }
      *(_QWORD *)(a1 + 192) += *(unsigned __int16 *)(v4 + 8);
      v92 = *(__int64 ***)(a1 + 312);
      if ( v92 )
      {
        v93 = *(unsigned __int16 *)(v4 + 8);
        while ( 1 )
        {
          v94 = *((unsigned int *)v92 + 2);
          if ( v93 < v94 )
            break;
          if ( !*v92 )
          {
            v93 = (unsigned int)(v94 - 1);
            break;
          }
          v92 = (__int64 **)*v92;
        }
        v138 = v93;
        LOBYTE(Entry) = 1;
        RtlpHeapAddListEntry(a1, (_DWORD)v92, (_DWORD)Entry, v4 + 16, v93, *(unsigned __int16 *)(v4 + 8));
      }
      goto LABEL_225;
    }
    v84 = (_DWORD *)(v4 + 32);
    v137 = v4 + 32;
    v85 = (16 * (unsigned __int64)(unsigned int)v83 - 32) >> 2;
    v122 = v85;
    if ( v85 )
    {
      if ( ((unsigned __int8)v84 & 4) == 0 )
        goto LABEL_201;
      *v84 = -17891602;
      v122 = --v85;
      if ( v85 )
      {
        v84 = (_DWORD *)(v4 + 36);
        v137 = v4 + 36;
LABEL_201:
        memset64(v84, 0xFEEEFEEEFEEEFEEEuLL, v85 >> 1);
        if ( (v85 & 1) != 0 )
          v84[v85 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v4 + 10) |= 4u;
    goto LABEL_204;
  }
  RtlpDeCommitFreeBlock(a1, v4, v24, 0LL);
LABEL_254:
  if ( v110 )
  {
    if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
    {
      ++*(_DWORD *)(a1 + 608);
      v102 = *(_DWORD *)(a1 + 616);
      if ( *(_DWORD *)(a1 + 608) > v102 )
      {
        *(_DWORD *)(a1 + 608) = 0;
        v103 = *(_QWORD *)(a1 + 544) - 16LL * *(_QWORD *)(a1 + 192);
        if ( v103 > *(_QWORD *)(a1 + 640) )
          *(_QWORD *)(a1 + 640) = v103;
        *(_QWORD *)(a1 + 648) = v103;
      }
      if ( ++*(_DWORD *)(a1 + 620) >= 0x1000u )
      {
        if ( *(_BYTE *)(a1 + 386) != 2 || (v104 = 4, *(_DWORD *)(a1 + 624) <= 0x10u) )
          v104 = 8;
        if ( *(_DWORD *)(a1 + 612) > (unsigned int)(4096 >> v104) && v102 < 0x10000 )
          *(_DWORD *)(a1 + 616) = 2 * v102;
        *(_DWORD *)(a1 + 612) = 0;
        *(_DWORD *)(a1 + 620) = 0;
      }
    }
    v105 = *(_QWORD *)(a1 + 352);
    v21 = (*(_DWORD *)(v105 + 12))-- == 1;
    if ( v21 )
    {
      *(_QWORD *)(v105 + 16) = 0LL;
      v106 = _InterlockedCompareExchange((volatile signed __int32 *)(v105 + 8), -1, -2);
      if ( v106 != -2 )
      {
        if ( (*(_BYTE *)(v105 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v105);
        DeferredCriticalSectionEvent = *(_QWORD *)(v105 + 24);
        if ( !DeferredCriticalSectionEvent )
          DeferredCriticalSectionEvent = RtlpCreateDeferredCriticalSectionEvent(v105);
        do
        {
          v108 = v106 & 2 | 1;
          v109 = _InterlockedCompareExchange((volatile signed __int32 *)(v105 + 8), v108 + v106, v106);
          v21 = v106 == v109;
          v106 = v109;
        }
        while ( !v21 );
        if ( (v108 & 2) != 0 )
          RtlpUnWaitCriticalSectionEx(v105, DeferredCriticalSectionEvent);
      }
    }
  }
  return v118;
}
