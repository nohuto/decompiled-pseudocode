/*
 * XREFs of RtlpFreeHeap @ 0x180022430
 * Callers:
 *     RtlFreeHeap @ 0x1800207C0 (RtlFreeHeap.c)
 *     RtlpFreeHeapInternal @ 0x1800214A0 (RtlpFreeHeapInternal.c)
 * Callees:
 *     RtlpDeCommitFreeBlock @ 0x18001F148 (RtlpDeCommitFreeBlock.c)
 *     RtlpInsertFreeBlock @ 0x180020000 (RtlpInsertFreeBlock.c)
 *     RtlEnterCriticalSection @ 0x18002E900 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18002EE00 (RtlLeaveCriticalSection.c)
 *     RtlpUnWaitCriticalSection @ 0x1800301D0 (RtlpUnWaitCriticalSection.c)
 *     RtlNtStatusToDosError @ 0x180048C10 (RtlNtStatusToDosError.c)
 *     DbgPrint @ 0x180049950 (DbgPrint.c)
 *     RtlpCommitBlock @ 0x180052BE8 (RtlpCommitBlock.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180052EB0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlLogStackBackTraceEx @ 0x180054FC8 (RtlLogStackBackTraceEx.c)
 *     RtlpHeapAddListEntry @ 0x1800573C4 (RtlpHeapAddListEntry.c)
 *     RtlpFindEntry @ 0x180057470 (RtlpFindEntry.c)
 *     RtlpHeapRemoveListEntry @ 0x180057774 (RtlpHeapRemoveListEntry.c)
 *     RtlpUpdateHeapRates @ 0x18007BE7C (RtlpUpdateHeapRates.c)
 *     RtlDebugFreeHeap @ 0x180092900 (RtlDebugFreeHeap.c)
 *     RtlpLogHeapFailure @ 0x1800A4B04 (RtlpLogHeapFailure.c)
 *     RtlCompareMemoryUlong @ 0x1800A92F0 (RtlCompareMemoryUlong.c)
 *     RtlpNotOwnerCriticalSection @ 0x1800CBE40 (RtlpNotOwnerCriticalSection.c)
 *     RtlpUpdateTagEntry @ 0x1800E1BE4 (RtlpUpdateTagEntry.c)
 *     RtlpUpdateHeapWatermarks @ 0x1800E328C (RtlpUpdateHeapWatermarks.c)
 *     RtlpBreakPointHeap @ 0x1800F019C (RtlpBreakPointHeap.c)
 *     RtlpAnalyzeHeapFailure @ 0x1800F09E4 (RtlpAnalyzeHeapFailure.c)
 *     RtlpHeapLogRangeRelease @ 0x1800F0EC4 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapContractEvent @ 0x1800F1650 (RtlpLogHeapContractEvent.c)
 *     RtlpLogHeapFreeEvent @ 0x1800F18BC (RtlpLogHeapFreeEvent.c)
 */

__int64 __fastcall RtlpFreeHeap(unsigned __int16 *BaseAddress, int a2, unsigned __int16 *a3, __int64 a4)
{
  unsigned __int64 v4; // rsi
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
  __int64 **v31; // rdx
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
  __int64 **v42; // rdx
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
  unsigned __int64 v93; // rdi
  unsigned __int64 v94; // rsi
  __int64 v95; // rax
  __int64 *v96; // rcx
  __int64 v97; // rdx
  __int64 v98; // r9
  __int64 v99; // r8
  __int64 v100; // r8
  unsigned int v101; // edx
  unsigned __int64 v102; // rcx
  char v103; // cl
  __int64 v104; // rdi
  signed __int32 v105; // ebx
  int v106; // edx
  signed __int32 v107; // eax
  char v108; // [rsp+40h] [rbp-198h]
  __int16 updated; // [rsp+44h] [rbp-194h]
  unsigned __int64 v110; // [rsp+50h] [rbp-188h] BYREF
  unsigned __int64 v111; // [rsp+58h] [rbp-180h]
  unsigned __int16 v112; // [rsp+60h] [rbp-178h]
  unsigned __int16 v113; // [rsp+62h] [rbp-176h]
  unsigned __int8 v114; // [rsp+64h] [rbp-174h]
  unsigned int v115; // [rsp+68h] [rbp-170h]
  unsigned int v116; // [rsp+6Ch] [rbp-16Ch]
  int v117[2]; // [rsp+70h] [rbp-168h]
  unsigned __int64 v118; // [rsp+78h] [rbp-160h] BYREF
  __int64 v119; // [rsp+80h] [rbp-158h]
  int v120; // [rsp+90h] [rbp-148h]
  unsigned __int64 v121; // [rsp+98h] [rbp-140h]
  int v122[4]; // [rsp+A0h] [rbp-138h]
  int v123; // [rsp+B0h] [rbp-128h]
  int v124; // [rsp+C0h] [rbp-118h]
  int v125; // [rsp+D0h] [rbp-108h]
  int v126; // [rsp+E0h] [rbp-F8h]
  unsigned __int64 v127; // [rsp+E8h] [rbp-F0h]
  unsigned __int64 v128; // [rsp+F0h] [rbp-E8h]
  unsigned __int64 v129; // [rsp+F8h] [rbp-E0h]
  unsigned __int64 v130; // [rsp+100h] [rbp-D8h]
  unsigned __int64 v131; // [rsp+108h] [rbp-D0h]
  int v132; // [rsp+118h] [rbp-C0h]
  unsigned __int64 v133; // [rsp+120h] [rbp-B8h]
  SIZE_T v134; // [rsp+128h] [rbp-B0h]
  unsigned int *v135; // [rsp+130h] [rbp-A8h]
  int v136; // [rsp+138h] [rbp-A0h]
  int v137; // [rsp+148h] [rbp-90h]
  unsigned int v138; // [rsp+14Ch] [rbp-8Ch]
  int v139; // [rsp+150h] [rbp-88h]
  SIZE_T v140; // [rsp+158h] [rbp-80h]
  unsigned int NtGlobalFlag; // [rsp+160h] [rbp-78h]
  int v142; // [rsp+170h] [rbp-68h]
  int v143; // [rsp+180h] [rbp-58h]
  struct _TEB *v144; // [rsp+188h] [rbp-50h]
  __int64 v145; // [rsp+190h] [rbp-48h]
  __int64 v146; // [rsp+198h] [rbp-40h]
  __int64 v147; // [rsp+1A0h] [rbp-38h]
  _DWORD *v148; // [rsp+1F0h] [rbp+18h]

  v148 = a3;
  v4 = (unsigned __int64)a3;
  v6 = 1;
  v108 = 0;
  v115 = 1;
  v7 = 0LL;
  v118 = 0LL;
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
    v4 = (unsigned __int64)v148;
    if ( (NtCurrentPeb()->TracingFlags & 1) != 0
      && ((*((unsigned __int8 *)v148 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 17))) & 8) == 0 )
    {
      RtlpLogHeapFreeEvent(BaseAddress, a4, v10);
    }
  }
  if ( (v9 & 1) != 0 )
  {
    if ( *((_DWORD *)BaseAddress + 31) )
    {
      *(_DWORD *)(v4 + 8) ^= *((_DWORD *)BaseAddress + 34);
      if ( *(_BYTE *)(v4 + 11) != (*(_BYTE *)(v4 + 8) ^ (unsigned __int8)(*(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10))) )
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
      if ( byte_180145248 )
      {
        NtCurrentTeb()->LastStatusValue = -1073741420;
        v144 = NtCurrentTeb();
        v144->LastErrorValue = RtlNtStatusToDosError(-1073741420);
        v115 = 0;
        goto LABEL_254;
      }
      RtlEnterCriticalSection(*((PRTL_CRITICAL_SECTION *)BaseAddress + 44));
      RtlpUpdateHeapRates(BaseAddress, 1LL);
      goto LABEL_20;
    }
    ++*(_DWORD *)(v11 + 12);
  }
  ++*((_DWORD *)BaseAddress + 144);
LABEL_20:
  v108 = 1;
  v4 = (unsigned __int64)v148;
  if ( *((_DWORD *)BaseAddress + 31) )
  {
    v148[2] ^= *((_DWORD *)BaseAddress + 34);
    if ( *((_BYTE *)v148 + 11) != (*((_BYTE *)v148 + 8) ^ (unsigned __int8)(*((_BYTE *)v148 + 9) ^ *((_BYTE *)v148 + 10))) )
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
  v16 = (_BYTE *)(v4 + 10);
  v17 = *(_BYTE *)(v4 + 10);
  if ( (v17 & 8) != 0 )
    *v16 = v17 & 0xF7;
  if ( *(_BYTE *)(v4 + 15) == 4 )
  {
    v94 = v4 - 48;
    *(_QWORD *)v117 = v94;
    *(_QWORD *)v122 = *(_QWORD *)(v94 + 32);
    v118 = v94 & 0xFFFFFFFFFFFF0000uLL;
    *((_QWORD *)BaseAddress + 69) -= *(_QWORD *)v122;
    v95 = *(_QWORD *)v94;
    v96 = *(__int64 **)(v94 + 8);
    v97 = *v96;
    v98 = *(_QWORD *)(*(_QWORD *)v94 + 8LL);
    if ( *v96 == v98 && v97 == v94 )
    {
      *v96 = v95;
      *(_QWORD *)(v95 + 8) = v96;
    }
    else
    {
      RtlpLogHeapFailure(12, 0, v94, v98, v97, 0LL);
    }
    if ( !v6 )
    {
      NtGlobalFlag = NtCurrentPeb()->NtGlobalFlag;
      v96 = (__int64 *)NtGlobalFlag;
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
    v100 = *(_QWORD *)(v94 + 40);
    v145 = v100;
    if ( MEMORY[0x7FFE0388] )
      RtlpHeapLogRangeRelease(BaseAddress, v118, v100);
    v110 = 0LL;
    RtlpSecMemFreeVirtualMemory(v96, &v118, &v110, 0x8000LL);
    if ( MEMORY[0x7FFE0380] )
    {
      LODWORD(v94) = v117[0];
      if ( (NtCurrentPeb()->TracingFlags & 1) != 0 )
        RtlpLogHeapContractEvent(
          (int)BaseAddress,
          v117[0],
          v122[0],
          16 * *((_QWORD *)BaseAddress + 24),
          0,
          0LL,
          (HANDLE)MEMORY[0x7FFE0380]);
    }
    if ( MEMORY[0x7FFE038A] )
      RtlpLogHeapContractEvent(
        (int)BaseAddress,
        v94,
        v122[0],
        16 * *((_QWORD *)BaseAddress + 24),
        0,
        0LL,
        (HANDLE)MEMORY[0x7FFE038A]);
    goto LABEL_254;
  }
  v18 = (unsigned __int16 *)(v4 + 8);
  v19 = *(_WORD *)(v4 + 8);
  if ( v19 < BaseAddress[196] )
  {
    if ( ((unsigned __int8)(1 << (v19 & 7)) & *((_BYTE *)BaseAddress + ((unsigned __int64)v19 >> 3) + 394)) == 0 )
    {
      v20 = (_WORD *)(*((_QWORD *)BaseAddress + 48) + 2LL * *v18);
      if ( *v20 > 1u )
        --*v20;
    }
    v4 = (unsigned __int64)v148;
  }
  if ( !v6 )
  {
    v138 = NtCurrentPeb()->NtGlobalFlag;
    v4 = (unsigned __int64)v148;
    if ( (v138 & 0x800) != 0 )
    {
      v21 = (*v16 & 2) == 0;
      v22 = *v18;
      if ( v21 )
      {
        v114 = *((_BYTE *)v148 + 11);
        v23 = v114;
      }
      else
      {
        v147 = (__int64)&v148[4 * *v18 - 4];
        v23 = *(unsigned __int16 *)(v147 + 2);
      }
      updated = RtlpUpdateTagEntry((_DWORD)BaseAddress, v23, v22, 0, 2);
    }
  }
  v24 = *v18;
  v110 = v24;
  if ( *((char *)BaseAddress + 112) >= 0 )
  {
    v131 = v4;
    v25 = 16 * (*(unsigned __int16 *)(v4 + 12) ^ (unsigned __int64)BaseAddress[70]);
    v26 = v4 - v25;
    if ( v4 - v25 != v4
      && ((*(_BYTE *)(v26 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) == 0 )
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
        v31 = (__int64 **)*((_QWORD *)BaseAddress + 39);
        if ( v31 )
        {
          v32 = *(unsigned __int16 *)(v26 + 8);
          while ( 1 )
          {
            v33 = *((unsigned int *)v31 + 2);
            if ( v32 < v33 )
              break;
            if ( !*v31 )
            {
              v32 = (unsigned int)(v33 - 1);
              break;
            }
            v31 = (__int64 **)*v31;
          }
          v127 = v32;
          LOBYTE(v33) = 1;
          RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v31, v33, v26 + 16, v32, *(unsigned __int16 *)(v26 + 8));
        }
        *v28 = v27;
        *(_QWORD *)(v27 + 8) = v28;
        if ( (*(_BYTE *)(v26 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
        {
          v34 = *(_BYTE *)(v26 + 10);
          if ( (v34 & 4) != 0 )
          {
            v35 = 16LL * *(unsigned __int16 *)(v26 + 8) - 32;
            v134 = v35;
            if ( (v34 & 2) != 0 && v35 > 4 )
            {
              v35 -= 4LL;
              v134 = v35;
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
              RtlpBreakPointHeap(v26);
            }
          }
          *(_BYTE *)(v26 + 10) = 0;
          *(_BYTE *)(v26 + 15) = 0;
          v4 = v26;
          v131 = v26;
          v110 += *(unsigned __int16 *)(v26 + 8);
          *(_WORD *)(v26 + 8) = v110;
          *(_WORD *)(v26 + 16 * v110 + 12) = v110 ^ BaseAddress[70];
        }
        else
        {
          RtlpDeCommitFreeBlock((unsigned __int64)BaseAddress, v26, *(unsigned __int16 *)(v26 + 8), 1);
        }
      }
      else
      {
        RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v26 + 16, v30, v29, 0LL);
      }
      v24 = v110;
    }
    v37 = v4 + 16 * v24;
    if ( !*((_DWORD *)BaseAddress + 31) )
      goto LABEL_79;
    v123 = *(_DWORD *)(v37 + 8) ^ *((_DWORD *)BaseAddress + 34);
    if ( HIBYTE(v123) != (BYTE2(v123) ^ (unsigned __int8)(BYTE1(v123) ^ v123)) )
      RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v4 + 16 * v24, 0, 0LL, 0LL);
    while ( 1 )
    {
      v24 = v110;
LABEL_79:
      if ( ((*(_BYTE *)(v37 + 10) ^ (unsigned __int8)(BaseAddress[69] & (*((_DWORD *)BaseAddress + 31) >> 20))) & 1) != 0 )
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
        v42 = (__int64 **)*((_QWORD *)BaseAddress + 39);
        if ( v42 )
        {
          v43 = *(unsigned __int16 *)(v37 + 8);
          while ( 1 )
          {
            v44 = *((unsigned int *)v42 + 2);
            if ( v43 < v44 )
              break;
            if ( !*v42 )
            {
              v43 = (unsigned int)(v44 - 1);
              break;
            }
            v42 = (__int64 **)*v42;
          }
          v133 = v43;
          LOBYTE(v44) = 1;
          RtlpHeapRemoveListEntry((_DWORD)BaseAddress, (_DWORD)v42, v44, v37 + 16, v43, *(unsigned __int16 *)(v37 + 8));
        }
        *v39 = v38;
        *(_QWORD *)(v38 + 8) = v39;
        if ( (*(_BYTE *)(v37 + 10) & 8) == 0 || (unsigned __int8)RtlpCommitBlock(BaseAddress) )
        {
          v45 = *(_BYTE *)(v37 + 10);
          if ( (v45 & 4) != 0 )
          {
            v46 = 16LL * *(unsigned __int16 *)(v37 + 8) - 32;
            v140 = v46;
            if ( (v45 & 2) != 0 && v46 > 4 )
            {
              v46 -= 4LL;
              v140 = v46;
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
              RtlpBreakPointHeap(v37);
            }
          }
          *(_BYTE *)(v4 + 10) = 0;
          *(_BYTE *)(v4 + 15) = 0;
          v110 += *(unsigned __int16 *)(v37 + 8);
          *(_WORD *)(v4 + 8) = v110;
          *(_WORD *)(v4 + 16 * v110 + 12) = v110 ^ BaseAddress[70];
          v24 = v110;
          break;
        }
        RtlpDeCommitFreeBlock((unsigned __int64)BaseAddress, v37, *(unsigned __int16 *)(v37 + 8), 1);
      }
      else
      {
        RtlpLogHeapFailure(12, (_DWORD)BaseAddress, v37 + 16, v41, v40, 0LL);
      }
    }
    v148 = (_DWORD *)v4;
    v7 = 0LL;
  }
  if ( (v24 < *((_QWORD *)BaseAddress + 22) || v24 + *((_QWORD *)BaseAddress + 24) < *((_QWORD *)BaseAddress + 23))
    && (v24 + *((_QWORD *)BaseAddress + 24) <= *((_QWORD *)BaseAddress + 23)
     || v24 < 0x100
     || *(_WORD *)(v4 + 12) != BaseAddress[70]) )
  {
    if ( v24 > 0xFF00 )
    {
      RtlpInsertFreeBlock((unsigned __int64)BaseAddress, v4, v24);
LABEL_228:
      if ( updated )
      {
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_DWORD *)(v4 + 8) ^= *((_DWORD *)BaseAddress + 34);
          if ( *(_BYTE *)(v4 + 11) != (*(_BYTE *)(v4 + 8) ^ (unsigned __int8)(*(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10))) )
            RtlpAnalyzeHeapFailure(BaseAddress, v4);
        }
        *(_BYTE *)(v4 + 10) |= 2u;
        v93 = 16LL * *(unsigned __int16 *)(v4 + 8) + v4;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          *(_BYTE *)(v4 + 11) = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
          *(_DWORD *)(v4 + 8) ^= *((_DWORD *)BaseAddress + 34);
        }
        *(_WORD *)(v93 - 4) = updated;
        *(_WORD *)(v93 - 2) = 0;
        if ( (*((_DWORD *)BaseAddress + 28) & 0x8000000) != 0 )
          *(_WORD *)(v93 - 2) = RtlLogStackBackTraceEx(1LL);
      }
      goto LABEL_254;
    }
    if ( v6 )
    {
      v48 = (unsigned __int16)v24;
      v111 = (unsigned __int16)v24;
      *(_BYTE *)(v4 + 10) = 0;
      *(_BYTE *)(v4 + 15) = 0;
      v49 = BaseAddress + 168;
      v50 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v50 )
      {
        while ( 1 )
        {
          v51 = *((unsigned int *)v50 + 2);
          if ( (unsigned __int16)v24 < v51 )
          {
            v52 = (unsigned __int16)v24;
            v119 = (unsigned __int16)v24;
            goto LABEL_120;
          }
          if ( !*v50 )
            break;
          v50 = (__int64 *)*v50;
        }
        v52 = v51 - 1;
        v119 = (unsigned int)(v51 - 1);
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
              if ( HIBYTE(v124) != ((unsigned __int8)v124 ^ (unsigned __int8)(BYTE1(v124) ^ BYTE2(v124))) )
                RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v56, 0, 0LL, 0LL);
            }
            v132 = v48 - (unsigned __int16)v124;
            if ( v132 <= 0 )
            {
              v58 = *v54 - 16LL;
              v59 = *(_DWORD *)(v58 + 8);
              v126 = v59;
              if ( *((_DWORD *)BaseAddress + 31) )
              {
                v126 = v59 ^ *((_DWORD *)BaseAddress + 34);
                if ( HIBYTE(v126) != ((unsigned __int8)v126 ^ (unsigned __int8)(BYTE1(v126) ^ BYTE2(v126))) )
                  RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v58, 0, 0LL, 0LL);
              }
              v136 = v48 - (unsigned __int16)v126;
              if ( v136 > 0 )
              {
                if ( *v50 || (_DWORD)v119 != *((_DWORD *)v50 + 2) - 1 )
                {
                  v62 = (unsigned int)v53 >> 5;
                  v116 = (unsigned int)v53 >> 5;
                  v63 = ((unsigned int)(*((_DWORD *)v50 + 2) - *((_DWORD *)v50 + 6)) >> 5) - 1;
                  v64 = (unsigned int *)(v50[5] + 4 * v62);
                  v135 = v64;
                  v65 = *v64 & ~((1 << (v53 & 0x1F)) - 1);
                  while ( !v65 )
                  {
                    if ( (unsigned int)v62 > v63 )
                    {
                      v4 = (unsigned __int64)v148;
                      goto LABEL_163;
                    }
                    v135 = ++v64;
                    v65 = *v64;
                    LODWORD(v62) = v62 + 1;
                    v116 = v62;
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
                  v116 = v67;
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
                    v125 = v61;
                    if ( *((_DWORD *)BaseAddress + 31) )
                    {
                      v125 = v61 ^ *((_DWORD *)BaseAddress + 34);
                      if ( HIBYTE(v125) != ((unsigned __int8)v125 ^ (unsigned __int8)(BYTE1(v125) ^ BYTE2(v125))) )
                        RtlpLogHeapFailure(3, (_DWORD)BaseAddress, (_DWORD)i - 16, 0, 0LL, 0LL);
                    }
                    v137 = v111 - (unsigned __int16)v125;
                    if ( v137 <= 0 )
                    {
                      v7 = i;
                      break;
                    }
                  }
                }
                v48 = v111;
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
            v4 = (unsigned __int64)v148;
          }
          if ( v7 )
            break;
LABEL_163:
          v50 = (__int64 *)*v50;
          v52 = *((_DWORD *)v50 + 6);
          v119 = v52;
          v48 = v111;
          v7 = 0LL;
        }
        v49 = BaseAddress + 168;
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
          v4 = (unsigned __int64)v148;
        }
        else
        {
          v69 = *((_WORD *)v7 - 4);
        }
        v112 = v69;
        if ( v48 <= v69 )
          break;
        v7 = (_QWORD *)*v7;
        v49 = BaseAddress + 168;
      }
      v70 = (_QWORD *)(v4 + 16);
      v111 = v4 + 16;
      v71 = (__int64 *)v7[1];
      if ( (_QWORD *)*v71 == v7 )
      {
        *v70 = v7;
        *(_QWORD *)(v4 + 24) = v71;
        *v71 = (__int64)v70;
        v7[1] = v70;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)v7, 0, *v71, 0LL);
      }
      *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(v4 + 8);
      v72 = (__int64 *)*((_QWORD *)BaseAddress + 39);
      if ( v72 )
      {
        v73 = *(unsigned __int16 *)(v4 + 8);
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
        v130 = v73;
        v75 = *(unsigned __int16 *)(v4 + 8);
        v146 = *(unsigned __int16 *)(v4 + 8);
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
        v120 = v80;
        if ( *((_DWORD *)BaseAddress + 31) )
        {
          v120 = v80 ^ *((_DWORD *)BaseAddress + 34);
          if ( HIBYTE(v120) != (BYTE2(v120) ^ (unsigned __int8)(BYTE1(v120) ^ v120)) )
            RtlpLogHeapFailure(3, (_DWORD)BaseAddress, v79 - 16, 0, 0LL, 0LL);
        }
        v139 = v75 - (unsigned __int16)v120;
        v4 = (unsigned __int64)v148;
        if ( v139 <= 0 )
LABEL_192:
          *(_QWORD *)(v78 + v72[6]) = v111;
        if ( !v79 )
          *(_DWORD *)(v72[5] + 4LL * (v76 >> 5)) |= 1 << (v76 & 0x1F);
      }
LABEL_225:
      if ( *((_DWORD *)BaseAddress + 31) )
      {
        *(_BYTE *)(v4 + 11) = *(_BYTE *)(v4 + 8) ^ *(_BYTE *)(v4 + 9) ^ *(_BYTE *)(v4 + 10);
        *(_DWORD *)(v4 + 8) ^= *((_DWORD *)BaseAddress + 34);
      }
      goto LABEL_228;
    }
    v81 = (unsigned __int16)v24;
    *(_BYTE *)(v4 + 10) &= 0xF0u;
    *(_BYTE *)(v4 + 15) = 0;
    if ( (BaseAddress[56] & 0x40) == 0 )
    {
LABEL_204:
      v84 = BaseAddress + 168;
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
          v4 = (unsigned __int64)v148;
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
      v88 = (_QWORD *)(v4 + 16);
      v89 = (__int64 *)Entry[1];
      if ( (_QWORD *)*v89 == Entry )
      {
        *v88 = Entry;
        *(_QWORD *)(v4 + 24) = v89;
        *v89 = (__int64)v88;
        Entry[1] = v88;
      }
      else
      {
        RtlpLogHeapFailure(12, 0, (_DWORD)Entry, 0, *v89, 0LL);
      }
      *((_QWORD *)BaseAddress + 24) += *(unsigned __int16 *)(v4 + 8);
      v90 = (__int64 **)*((_QWORD *)BaseAddress + 39);
      if ( v90 )
      {
        v91 = *(unsigned __int16 *)(v4 + 8);
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
        v128 = v91;
        LOBYTE(Entry) = 1;
        RtlpHeapAddListEntry(
          (_DWORD)BaseAddress,
          (_DWORD)v90,
          (_DWORD)Entry,
          v4 + 16,
          v91,
          *(unsigned __int16 *)(v4 + 8));
      }
      goto LABEL_225;
    }
    v82 = (_DWORD *)(v4 + 32);
    v129 = v4 + 32;
    v83 = (16 * (unsigned __int64)(unsigned int)v81 - 32) >> 2;
    v121 = v83;
    if ( v83 )
    {
      if ( ((unsigned __int8)v82 & 4) == 0 )
        goto LABEL_201;
      *v82 = -17891602;
      v121 = --v83;
      if ( v83 )
      {
        v82 = (_DWORD *)(v4 + 36);
        v129 = v4 + 36;
LABEL_201:
        memset64(v82, 0xFEEEFEEEFEEEFEEEuLL, v83 >> 1);
        if ( (v83 & 1) != 0 )
          v82[v83 - 1] = -17891602;
      }
    }
    *(_BYTE *)(v4 + 10) |= 4u;
    goto LABEL_204;
  }
  RtlpDeCommitFreeBlock((unsigned __int64)BaseAddress, v4, v24, 0);
LABEL_254:
  if ( v108 )
  {
    if ( (*((_DWORD *)BaseAddress + 29) & 0x1000000) == 0 )
    {
      ++*((_DWORD *)BaseAddress + 150);
      v101 = *((_DWORD *)BaseAddress + 152);
      if ( *((_DWORD *)BaseAddress + 150) > v101 )
      {
        *((_DWORD *)BaseAddress + 150) = 0;
        v102 = *((_QWORD *)BaseAddress + 67) - 16LL * *((_QWORD *)BaseAddress + 24);
        if ( v102 > *((_QWORD *)BaseAddress + 79) )
          *((_QWORD *)BaseAddress + 79) = v102;
        *((_QWORD *)BaseAddress + 80) = v102;
      }
      if ( ++*((_DWORD *)BaseAddress + 153) >= 0x1000u )
      {
        if ( *((_BYTE *)BaseAddress + 378) != 2 || (v103 = 4, *((_DWORD *)BaseAddress + 154) <= 0x10u) )
          v103 = 8;
        if ( *((_DWORD *)BaseAddress + 151) > (unsigned int)(4096 >> v103) && v101 < 0x10000 )
          *((_DWORD *)BaseAddress + 152) = 2 * v101;
        *((_DWORD *)BaseAddress + 151) = 0;
        *((_DWORD *)BaseAddress + 153) = 0;
      }
    }
    v104 = *((_QWORD *)BaseAddress + 44);
    v21 = (*(_DWORD *)(v104 + 12))-- == 1;
    if ( v21 )
    {
      *(_QWORD *)(v104 + 16) = 0LL;
      v105 = _InterlockedCompareExchange((volatile signed __int32 *)(v104 + 8), -1, -2);
      if ( v105 != -2 )
      {
        if ( (*(_BYTE *)(v104 + 8) & 1) != 0 )
          RtlpNotOwnerCriticalSection(v104);
        do
        {
          v106 = v105 & 2 | 1;
          v107 = _InterlockedCompareExchange((volatile signed __int32 *)(v104 + 8), v106 + v105, v105);
          v21 = v105 == v107;
          v105 = v107;
        }
        while ( !v21 );
        if ( (v106 & 2) != 0 )
          RtlpUnWaitCriticalSection(v104);
      }
    }
  }
  return v115;
}
