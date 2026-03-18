/*
 * XREFs of MiAgeWorkingSet @ 0x140095760
 * Callers:
 *     MiCountSharedPages @ 0x14003A9D0 (MiCountSharedPages.c)
 *     MiChargeWsles @ 0x14003EE30 (MiChargeWsles.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400543B0 (MiMakeSystemCacheRangeValid.c)
 *     NtResetWriteWatch @ 0x14007CF90 (NtResetWriteWatch.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiFinishVadDeletion @ 0x14008C870 (MiFinishVadDeletion.c)
 *     MiGetVadWakeList @ 0x14008CFD0 (MiGetVadWakeList.c)
 *     MiCommitExistingVad @ 0x14008E680 (MiCommitExistingVad.c)
 *     MiSetProtectionOnSection @ 0x14008FAB0 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400922F0 (MiDecommitPages.c)
 *     MiTrimOrAgeWorkingSet @ 0x140099740 (MiTrimOrAgeWorkingSet.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 * Callees:
 *     MiCompressTbFlushList @ 0x14007B750 (MiCompressTbFlushList.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiVolunteerForTrimFirst @ 0x1400AD700 (MiVolunteerForTrimFirst.c)
 *     MiInsertWsle @ 0x1400AD8A0 (MiInsertWsle.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiRemoveEntryWsle @ 0x1400AFC70 (MiRemoveEntryWsle.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     _TlgCreateSz @ 0x1401FB4C0 (_TlgCreateSz.c)
 *     _MmTlgWrite @ 0x14020EAE0 (_MmTlgWrite.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiDemoteCombinedPte @ 0x14022A174 (MiDemoteCombinedPte.c)
 *     EtwTraceShouldYieldProcessor @ 0x14025D5E8 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
unsigned __int64 __fastcall MiAgeWorkingSet(__int64 a1, char a2, int a3, unsigned int a4)
{
  __int64 v4; // r11
  unsigned __int64 result; // rax
  unsigned __int64 v6; // r9
  __int64 v7; // r12
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // r13
  unsigned __int64 v10; // r9
  __int64 v11; // rcx
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // r10
  bool v14; // cf
  __int64 v15; // r10
  unsigned __int64 v16; // r14
  __int64 v17; // rdx
  unsigned __int64 *v18; // rdi
  char v19; // al
  __int16 *v20; // rcx
  _BYTE *v21; // r15
  unsigned __int16 v22; // ax
  __int64 v23; // r13
  char v24; // bl
  char *v25; // r8
  unsigned __int64 v26; // r11
  char *v27; // rbx
  __int64 v28; // r9
  int v29; // edx
  int v30; // ebx
  unsigned __int8 v31; // al
  int v32; // eax
  unsigned __int64 v33; // rax
  __int64 Process; // rcx
  unsigned __int64 v35; // r9
  __int64 v36; // r11
  unsigned __int64 v37; // r12
  unsigned __int64 v38; // r12
  unsigned __int64 v39; // r12
  unsigned __int64 v40; // rdx
  unsigned __int64 v41; // r13
  __int64 v42; // r8
  __int64 v43; // rax
  __int64 v44; // r8
  __int64 v45; // rax
  __int64 v46; // r15
  __int64 v47; // rdx
  __int64 PteShadow; // rax
  unsigned int v49; // esi
  __int64 v50; // rax
  __int64 v51; // r11
  __int64 v52; // rbx
  unsigned __int64 v53; // rcx
  __int64 v54; // r9
  __int64 v55; // r10
  __int64 v56; // r8
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  unsigned __int64 v59; // rcx
  __int64 v60; // r11
  __int64 v61; // rdx
  __int64 *v62; // r8
  __int64 v63; // rcx
  __int64 v64; // rax
  unsigned __int64 v65; // r8
  unsigned __int64 v66; // rdx
  __int64 v67; // r9
  unsigned __int64 v68; // rax
  unsigned __int64 v69; // rax
  __int64 v70; // r10
  __int64 v71; // r9
  __int64 v72; // rcx
  __int64 v73; // rcx
  __int64 v74; // rax
  char v75; // al
  unsigned int v76; // eax
  unsigned int v77; // ebx
  __int64 v78; // rcx
  int v79; // r14d
  int v80; // esi
  unsigned int v81; // ebx
  __int64 v82; // rax
  unsigned __int64 v83; // rax
  __int64 v84; // rsi
  int v85; // ebx
  __int64 v86; // r10
  __int64 v87; // rsi
  unsigned __int64 v88; // rcx
  __int64 v89; // r9
  __int64 v90; // r11
  __int64 v91; // r8
  unsigned __int64 v92; // rax
  unsigned __int64 v93; // rax
  unsigned __int64 v94; // rcx
  __int64 v95; // rbx
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // rcx
  __int64 v99; // rax
  unsigned __int64 v100; // rcx
  unsigned __int64 v101; // r8
  __int64 v102; // r9
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // rax
  __int64 v105; // r11
  __int64 v106; // r9
  __int64 v107; // rdx
  __int64 v108; // rdx
  __int64 v109; // rax
  unsigned __int64 v110; // rbx
  unsigned __int64 v111; // rbx
  unsigned __int64 v112; // rbx
  __int64 v113; // rdi
  unsigned int v114; // r9d
  char *v115; // r11
  unsigned __int64 v116; // rax
  unsigned __int64 v117; // r8
  unsigned __int64 v118; // r10
  char *v119; // r8
  __int64 v120; // rax
  unsigned __int64 v121; // rcx
  __int64 v122; // rdx
  __int64 v123; // rdx
  unsigned __int64 v124; // rax
  unsigned int v125; // eax
  unsigned __int64 v126; // rdx
  char v127; // al
  unsigned int v128; // r14d
  __int64 v129; // r13
  unsigned int v130; // esi
  __int64 v131; // rbx
  unsigned __int64 v132; // rcx
  __int64 v133; // r9
  __int64 v134; // r10
  __int64 v135; // r8
  unsigned __int64 v136; // rax
  unsigned __int64 v137; // rax
  unsigned __int64 v138; // rcx
  __int64 v139; // r11
  __int64 v140; // rdx
  __int64 v141; // r8
  __int64 v142; // rcx
  unsigned __int64 v143; // r8
  unsigned __int64 v144; // rdx
  __int64 v145; // r9
  unsigned __int64 v146; // rax
  unsigned __int64 v147; // rax
  __int64 v148; // r10
  __int64 v149; // r9
  __int64 v150; // rcx
  __int64 v151; // rcx
  __int64 v152; // rax
  unsigned __int8 v153; // dl
  unsigned __int8 v154; // r9
  unsigned int v155; // ebx
  unsigned __int64 v156; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r11d
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // r10d
  int v161; // r8d
  _KTHREAD *NextThread; // rax
  unsigned __int64 v163; // rbx
  unsigned __int64 v164; // r13
  unsigned int v165; // r11d
  int v166; // r9d
  unsigned int v167; // r10d
  int v168; // r8d
  unsigned int v169; // ebx
  __int64 v170; // rax
  unsigned int v171; // ebx
  signed __int32 i; // edx
  unsigned __int64 v173; // r14
  unsigned __int8 v174; // dl
  int v175; // r8d
  const CHAR *v176; // r9
  int v177; // r10d
  unsigned __int8 v178; // [rsp+30h] [rbp-D0h]
  unsigned __int8 v179; // [rsp+31h] [rbp-CFh]
  unsigned __int8 v181; // [rsp+40h] [rbp-C0h] BYREF
  int v182; // [rsp+44h] [rbp-BCh]
  PVOID P; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v184; // [rsp+50h] [rbp-B0h]
  __int64 v185; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v186; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v187; // [rsp+68h] [rbp-98h]
  unsigned int v188; // [rsp+70h] [rbp-90h]
  __int64 v189; // [rsp+78h] [rbp-88h]
  __int64 v190; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int64 v191; // [rsp+88h] [rbp-78h]
  unsigned __int64 v192; // [rsp+90h] [rbp-70h]
  int v193; // [rsp+98h] [rbp-68h] BYREF
  __int64 v194; // [rsp+A0h] [rbp-60h]
  unsigned int v195; // [rsp+A8h] [rbp-58h]
  __int64 v196; // [rsp+B0h] [rbp-50h]
  unsigned __int64 v197; // [rsp+B8h] [rbp-48h]
  __int64 CurrentIrql; // [rsp+C0h] [rbp-40h]
  __int64 v199; // [rsp+C8h] [rbp-38h]
  __int64 v200; // [rsp+D0h] [rbp-30h] BYREF
  __int64 v201; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v202; // [rsp+E0h] [rbp-20h] BYREF
  __int64 v203; // [rsp+E8h] [rbp-18h]
  __int64 v204; // [rsp+F0h] [rbp-10h] BYREF
  _DWORD v205[40]; // [rsp+100h] [rbp+0h] BYREF
  _BYTE v206[192]; // [rsp+1A0h] [rbp+A0h] BYREF
  __int64 v207[6]; // [rsp+260h] [rbp+160h] BYREF
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+290h] [rbp+190h] BYREF
  int *v209; // [rsp+2A0h] [rbp+1A0h]
  __int64 v210; // [rsp+2A8h] [rbp+1A8h]
  unsigned __int64 *v211; // [rsp+2B0h] [rbp+1B0h]
  __int64 v212; // [rsp+2B8h] [rbp+1B8h]
  __int64 *v213; // [rsp+2C0h] [rbp+1C0h]
  __int64 v214; // [rsp+2C8h] [rbp+1C8h]
  __int64 *v215; // [rsp+2D0h] [rbp+1D0h]
  __int64 v216; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v217; // [rsp+2E0h] [rbp+1E0h]
  __int64 v218; // [rsp+2E8h] [rbp+1E8h]

  v4 = *(_QWORD *)(a1 + 184);
  result = a4;
  v6 = *(_QWORD *)(a1 + 120);
  v7 = a1;
  v182 = a3;
  LOBYTE(CurrentIrql) = a2;
  v8 = *(_QWORD *)(v4 + 8);
  v9 = *(_QWORD *)(v4 + 16);
  v185 = v4;
  v197 = v9;
  v192 = v8;
  if ( v6 <= v8 )
    return result;
  if ( !(_DWORD)result )
    LODWORD(result) = 10;
  v10 = v6 - v8;
  v195 = result;
  if ( (a3 & 2) != 0 )
  {
    v11 = *(unsigned int *)(v4 + 56);
    v12 = *(_QWORD *)(v4 + 48);
    v13 = v11 + v10;
    *(_DWORD *)(v4 + 56) = (v11 + v10) % (unsigned int)result;
  }
  else
  {
    v11 = *(unsigned int *)(v4 + 60);
    v12 = *(_QWORD *)(v4 + 40);
    v13 = v11 + v10;
    *(_DWORD *)(v4 + 60) = (v11 + v10) % (unsigned int)result;
  }
  v14 = v13 < v10;
  v184 = v12;
  v15 = 0LL;
  if ( v14 )
    v11 = 0LL;
  v16 = (unsigned int)result * (v11 + v10) / 0x3E8;
  v186 = v16;
  if ( v16 > v10 )
  {
    v16 = v10 * (unsigned int)result / 0x3E8;
    v186 = v16;
  }
  if ( v12 > v9 || v12 < v8 )
  {
    v12 = v8;
    v184 = v8;
  }
  v17 = *(_QWORD *)(v4 + 496);
  v18 = (unsigned __int64 *)(v17 + v12 * *(unsigned int *)(v4 + 64));
  if ( (*(_BYTE *)v18 & 1) == 0 )
  {
    do
    {
      if ( ++v12 > v9 )
        v12 = v8;
      v18 = (unsigned __int64 *)(v17 + v12 * *(unsigned int *)(v4 + 64));
    }
    while ( (*(_BYTE *)v18 & 1) == 0 );
    v184 = v12;
  }
  v19 = *(_BYTE *)(v7 + 216);
  v20 = MiSystemPartition;
  P = 0LL;
  v21 = 0LL;
  v205[0] = 0;
  v188 = 0;
  v178 = 0;
  v179 = 0;
  if ( (v19 & 7) == 0 )
  {
    v22 = *(_WORD *)(v7 + 180);
    if ( v22 != 1023 )
      v20 = *(__int16 **)(qword_14034F0E8 + 8LL * v22);
  }
  v23 = *((_QWORD *)v20 + 657);
  v24 = v182;
  v203 = v23;
  if ( (v182 & 3) != 0 )
  {
    v25 = (char *)(v20 + 864);
    v26 = *((_QWORD *)v20 + 192) + *((_QWORD *)v20 + 200);
    v27 = (char *)(v20 + 964);
    v28 = 0LL;
    if ( v20 + 864 < v20 + 964 )
    {
      if ( (v27 - v25 + 39) / 0x28uLL >= 2 )
      {
        do
        {
          v28 += *(_QWORD *)v25;
          v15 += *((_QWORD *)v25 + 5);
          v25 += 80;
        }
        while ( v25 < (char *)v20 + 1888 );
      }
      if ( v25 < v27 )
        v26 += *(_QWORD *)v25;
      v26 += v28 + v15;
    }
    if ( v26 + *(_QWORD *)v27 < *(_QWORD *)(v23 + 80) )
    {
      if ( *(_BYTE *)(v7 + 218) != 2 )
      {
        v29 = 3;
        if ( v26 >= *(_QWORD *)(v23 + 72) )
          v29 = 5;
        v188 = v29;
      }
      if ( (unsigned __int16 *)v7 != &PsInitialSystemProcess[1].IdealNode[8] )
      {
        v178 = *(_BYTE *)(v23 + 2362);
        v179 = *(_BYTE *)(v23 + 2363);
      }
    }
    if ( v16 <= 0x100 )
      goto LABEL_392;
    v30 = 509;
    if ( v16 < 0x1FD )
      v30 = v16;
    P = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v30 - 256) + 2072, 0x73576D4Du);
    v21 = P;
    if ( !P )
    {
LABEL_392:
      if ( _InterlockedCompareExchange((volatile signed __int32 *)(v23 + 132), 1, 0) )
      {
        v21 = v206;
        v30 = 20;
        P = v206;
      }
      else
      {
        v21 = (_BYTE *)(v23 + 136);
        v30 = 256;
        P = (PVOID)(v23 + 136);
      }
    }
    v31 = *(_BYTE *)(v7 + 216) & 7;
    if ( v31 )
      v32 = v31 < 2u ? 2 : 0;
    else
      v32 = 1;
    LODWORD(v15) = 0;
    *((_DWORD *)v21 + 2) = v30;
    v24 = v182;
    *((_DWORD *)v21 + 3) = 0;
    *((_WORD *)v21 + 2) = 0;
    *((_QWORD *)v21 + 2) = 0LL;
    *(_DWORD *)v21 = v32;
    *((_QWORD *)v21 + 3) = 0LL;
  }
  v189 = 0LL;
  v191 = 0xFFFFF68000000000uLL;
  v33 = 0LL;
  Process = 0xF000000000000LL;
  v187 = 0LL;
  v199 = 0xF000000000000LL;
  v194 = 0LL;
  v196 = 0LL;
LABEL_48:
  v35 = 0x8000000000000000uLL;
  v36 = 0xFFFFFFFFFLL;
  if ( v33 >= v16 )
  {
    v156 = v187;
    goto LABEL_371;
  }
  v37 = *v18;
  if ( (*v18 & 0x800000000000LL) != 0 )
    v38 = v37 | 0xFFFF000000000000uLL;
  else
    v38 = v37 & 0xFFFFFFFFFFFFLL;
  v39 = ((v38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v40 = *(_QWORD *)v39;
  v41 = v39 + 0x90482413000LL;
  if ( v39 + 0x90482413000LL <= 0x7F8
    && (unsigned int)MiPteHasShadow(Process, v40)
    && (v40 & 1) != 0
    && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
  {
    Process = (__int64)KeGetCurrentThread()->ApcState.Process;
    v42 = *(_QWORD *)(Process + 1520);
    if ( v42 )
    {
      v43 = *(_QWORD *)(v42 + 8 * ((v39 >> 3) & 0x1FF));
      if ( (v43 & 0x20) != 0 )
        v40 |= 0x20uLL;
      if ( (v43 & 0x42) != 0 )
        v40 |= 0x42uLL;
    }
  }
  v190 = v40;
  if ( (unsigned __int64)&STACK[0x90482413080] <= 0x7F8
    && (unsigned int)MiPteHasShadow(Process, v40)
    && (v40 & 1) != 0
    && ((v40 & 0x20) == 0 || (v40 & 0x42) == 0) )
  {
    v44 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
    if ( v44 )
    {
      v45 = *(_QWORD *)(v44 + 8 * (((unsigned __int64)&v190 >> 3) & 0x1FF));
      if ( (v45 & 0x20) != 0 )
        v40 |= 0x20uLL;
      if ( (v45 & 0x42) != 0 )
        v40 |= 0x42uLL;
    }
  }
  v46 = 48 * (v36 & (v40 >> 12)) - 0x58000000000LL;
  v47 = *(_QWORD *)(v46 + 8);
  if ( (v47 & v35) == 0 )
  {
    if ( (unsigned int)MiDemoteCombinedPte(v39, v35 | v47) == 1 )
    {
      PteShadow = *(_QWORD *)v39;
      if ( v41 <= 0x7F8 )
        PteShadow = MiReadPteShadow(v39, *(_QWORD *)v39);
      v190 = PteShadow;
    }
    LODWORD(v15) = 0;
  }
  v49 = (*(_DWORD *)v18 >> 9) & 7;
  if ( (v190 & 0x20) == 0 )
  {
    v127 = *(_BYTE *)(v46 + 35);
    if ( (v127 & 8) != 0 )
      v128 = 5;
    else
      v128 = v127 & 7;
    if ( v49 >= 6 || v128 >= 5 )
    {
      v129 = v185;
      v7 = a1;
    }
    else
    {
      v7 = a1;
      if ( v49 )
        --*(_QWORD *)(a1 + 8LL * (v49 - 1) + 40);
      v129 = v185;
      ++*(_QWORD *)(a1 + 80);
      v49 = 6;
      MiRemoveEntryWsle(v129, v18);
      *v18 = *v18 & 0xFFFFFFFFFFFFF1FFuLL | 0xC00;
      MiInsertWsle(v129, v18, 0LL);
      ++v189;
    }
    if ( (v24 & 1) != 0 && v49 < 6 )
    {
      if ( v49 )
        --*(_QWORD *)(v7 + 8LL * (v49 - 1) + 40);
      v130 = v49 + 1;
      ++*(_QWORD *)(v7 + 8LL * (v130 - 1) + 40);
      if ( *(_DWORD *)(v129 + 64) == 16 )
      {
        v131 = *(_QWORD *)(v129 + 496);
        if ( (unsigned __int64)(((__int64)v18 - v131) >> 4) >= *(_QWORD *)(v129 + 8) )
        {
          v132 = *v18;
          v133 = *((unsigned int *)v18 + 2) | (*v18 >> 16) & 0xF00000000LL;
          v134 = *((unsigned int *)v18 + 3) | (*v18 >> 20) & 0xF00000000LL;
          v135 = 2 * ((unsigned int)(*v18 >> 9) & 7);
          v136 = *v18;
          if ( (*v18 & 0x800000000000LL) != 0 )
            v137 = v136 | 0xFFFF000000000000uLL;
          else
            v137 = v136 & 0xFFFFFFFFFFFFLL;
          if ( v137 < v191
            || ((*v18 & 0x800000000000LL) == 0
              ? (v138 = v132 & 0xFFFFFFFFFFFFLL)
              : (v138 = v132 | 0xFFFF000000000000uLL),
                v138 > 0xFFFFF6FFFFFFFFFFuLL) )
          {
            v135 = (unsigned int)(v135 + 1);
          }
          v139 = (unsigned int)v135;
          v140 = v131 + 16 * v133;
          v141 = 2 * (v135 + 15);
          v142 = v131 + 16 * v134;
          if ( v134 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v129 + 8 * v141) = v133;
          }
          else
          {
            *(_DWORD *)(v142 + 8) = *((_DWORD *)v18 + 2);
            *(_QWORD *)v142 ^= v199 & (*(_QWORD *)v142 ^ (v133 << 16));
          }
          if ( v133 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v129 + 8 * v141 + 8) = v134;
          }
          else
          {
            *(_DWORD *)(v140 + 12) = v134;
            *(_QWORD *)v140 ^= (*(_QWORD *)v140 ^ (v134 << 20)) & 0xF0000000000000LL;
          }
          --*(_QWORD *)(v129 + 8 * v139 + 112);
        }
        v24 = v182;
      }
      *v18 ^= (*(_DWORD *)v18 ^ (v130 << 9)) & 0xE00;
      v143 = *v18;
      if ( *(_DWORD *)(v129 + 64) == 16 )
      {
        v144 = ((__int64)v18 - *(_QWORD *)(v129 + 496)) >> 4;
        if ( v144 >= *(_QWORD *)(v129 + 8) )
        {
          v145 = 2 * ((unsigned int)(v143 >> 9) & 7);
          if ( (v143 & 0x800000000000LL) != 0 )
            v146 = v143 | 0xFFFF000000000000uLL;
          else
            v146 = v143 & 0xFFFFFFFFFFFFLL;
          if ( v146 < 0xFFFFF68000000000uLL
            || ((v143 & 0x800000000000LL) == 0
              ? (v147 = v143 & 0xFFFFFFFFFFFFLL)
              : (v147 = v143 | 0xFFFF000000000000uLL),
                v147 > 0xFFFFF6FFFFFFFFFFuLL) )
          {
            v145 = (unsigned int)(v145 + 1);
          }
          v148 = (unsigned int)v145;
          v149 = 2 * (v145 + 15);
          v150 = *(_QWORD *)(v129 + 8 * v149 + 8);
          *((_DWORD *)v18 + 2) = -1;
          *((_DWORD *)v18 + 3) = v150;
          *v18 = v143 ^ (v143 ^ (v150 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
          if ( v150 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v129 + 8 * v149) = v144;
          }
          else
          {
            v151 = *(_QWORD *)(v129 + 496) + 16 * v150;
            v152 = (*(_QWORD *)v151 ^ (v144 << 16)) & 0xF000000000000LL;
            *(_DWORD *)(v151 + 8) = v144;
            *(_QWORD *)v151 ^= v152;
          }
          *(_QWORD *)(v129 + 8 * v149 + 8) = v144;
          ++*(_QWORD *)(v129 + 8 * v148 + 112);
        }
      }
      ++v189;
    }
    v153 = v178;
    if ( (*(_QWORD *)(v46 + 40) & 0x200000000000000LL) != 0 )
      v153 = v179;
    v154 = v153;
    if ( !v153 )
      v154 = 7;
    if ( (signed __int32 *)v7 == dword_14034FE40
      && ((*(_QWORD *)(v46 + 40) >> 54) & 7) == 4
      && (*(_QWORD *)(v46 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
      && *(_WORD *)(v46 + 32) == 1
      || (v24 & 3) != 0 && (((*(_DWORD *)v18 >> 9) & 7u) >= (unsigned __int64)v154 || v128 < v188) )
    {
      v12 = v184;
      ++v196;
      *(_QWORD *)&v205[2 * v205[0] + 2] = v184;
      if ( ++v205[0] == 19 )
      {
        MiFreeWsleList(v7, v205, 0LL);
        v21 = P;
        v155 = 0;
        v205[0] = 0;
LABEL_290:
        v16 = v186;
        goto LABEL_291;
      }
    }
    else
    {
      v12 = v184;
    }
    v21 = P;
LABEL_289:
    v155 = 0;
    goto LABEL_290;
  }
  v50 = v49 - 1;
  if ( (unsigned int)v50 <= 5 )
  {
    v49 = v15;
    v51 = v185;
    --*(_QWORD *)(a1 + 8 * v50 + 40);
    if ( *(_DWORD *)(v51 + 64) == 16 )
    {
      v52 = *(_QWORD *)(v51 + 496);
      if ( (unsigned __int64)(((__int64)v18 - v52) >> 4) >= *(_QWORD *)(v51 + 8) )
      {
        v53 = *v18;
        v54 = *((unsigned int *)v18 + 2) | (*v18 >> 16) & 0xF00000000LL;
        v55 = *((unsigned int *)v18 + 3) | (*v18 >> 20) & 0xF00000000LL;
        v56 = 2 * ((unsigned int)(*v18 >> 9) & 7);
        v57 = *v18;
        if ( (*v18 & 0x800000000000LL) != 0 )
          v58 = v57 | 0xFFFF000000000000uLL;
        else
          v58 = v57 & 0xFFFFFFFFFFFFLL;
        if ( v58 < v191
          || ((*v18 & 0x800000000000LL) == 0 ? (v59 = v53 & 0xFFFFFFFFFFFFLL) : (v59 = v53 | 0xFFFF000000000000uLL),
              v59 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v56 = (unsigned int)(v56 + 1);
        }
        v60 = (unsigned int)v56;
        v61 = v52 + 16 * v54;
        v62 = (__int64 *)(v185 + 16 * (v56 + 15));
        v63 = v52 + 16 * v55;
        if ( v55 == 0xFFFFFFFFFLL )
        {
          *v62 = v54;
        }
        else
        {
          *(_DWORD *)(v63 + 8) = *((_DWORD *)v18 + 2);
          *(_QWORD *)v63 ^= v199 & (*(_QWORD *)v63 ^ (v54 << 16));
        }
        if ( v54 == 0xFFFFFFFFFLL )
        {
          v62[1] = v55;
        }
        else
        {
          *(_DWORD *)(v61 + 12) = v55;
          *(_QWORD *)v61 ^= (*(_QWORD *)v61 ^ (v55 << 20)) & 0xF0000000000000LL;
        }
        v64 = v185;
        --*(_QWORD *)(v185 + 8 * v60 + 112);
        v51 = v64;
      }
    }
    *v18 &= 0xFFFFFFFFFFFFF1FFuLL;
    v65 = *v18;
    if ( *(_DWORD *)(v51 + 64) == 16 )
    {
      v66 = ((__int64)v18 - *(_QWORD *)(v51 + 496)) >> 4;
      if ( v66 >= *(_QWORD *)(v51 + 8) )
      {
        v67 = 2 * ((unsigned int)(v65 >> 9) & 7);
        if ( (v65 & 0x800000000000LL) != 0 )
          v68 = v65 | 0xFFFF000000000000uLL;
        else
          v68 = v65 & 0xFFFFFFFFFFFFLL;
        if ( v68 < v191
          || ((v65 & 0x800000000000LL) == 0 ? (v69 = v65 & 0xFFFFFFFFFFFFLL) : (v69 = v65 | 0xFFFF000000000000uLL),
              v69 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v67 = (unsigned int)(v67 + 1);
        }
        v70 = (unsigned int)v67;
        v71 = 2 * (v67 + 15);
        v72 = *(_QWORD *)(v51 + 8 * v71 + 8);
        *((_DWORD *)v18 + 2) = -1;
        *((_DWORD *)v18 + 3) = v72;
        *v18 = v65 ^ (v65 ^ (v72 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
        if ( v72 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v51 + 8 * v71) = v66;
        }
        else
        {
          v73 = *(_QWORD *)(v51 + 496) + 16 * v72;
          v74 = (*(_QWORD *)v73 ^ (v66 << 16)) & 0xF000000000000LL;
          *(_DWORD *)(v73 + 8) = v66;
          *(_QWORD *)v73 ^= v74;
        }
        *(_QWORD *)(v51 + 8 * v71 + 8) = v66;
        ++*(_QWORD *)(v51 + 8 * v70 + 112);
      }
    }
  }
  if ( (v182 & 3) != 0 )
  {
    if ( v49 != 7 )
    {
      v75 = *(_BYTE *)(v46 + 35);
      v76 = (v75 & 8) != 0 ? 5 : v75 & 7;
      if ( v76 < 5 )
      {
        v77 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v77 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v77);
          }
          while ( (*(_QWORD *)(v46 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) );
        }
        *(_BYTE *)(v46 + 35) ^= (*(_BYTE *)(v46 + 35) ^ 5) & 7;
        _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v78 = a1;
    v79 = dword_14034F248;
    v80 = 0;
    if ( (*(_BYTE *)(a1 + 216) & 7) != 0 )
    {
      v80 = 1;
      v81 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v81 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v81);
        }
        while ( (*(_QWORD *)(v46 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v46 + 24), 0x3FuLL) );
        v78 = a1;
      }
      if ( (*(_QWORD *)(v46 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v46 + 40) & 0x200000000000000LL) == 0
        || (*(_BYTE *)(v78 + 216) & 7) != 0 && *(_WORD *)(v46 + 32) > 1u )
      {
        goto LABEL_213;
      }
    }
    if ( P )
    {
      v82 = *(_QWORD *)v39;
      if ( v41 <= 0x7F8 )
        v82 = MiReadPteShadow(v39, *(_QWORD *)v39);
      v83 = v82 & 0xFFFFFFFFFFFFFFDFuLL;
      *(_QWORD *)v39 = v83;
      if ( v41 <= 0x7F8 )
        MiWritePteShadow(v39, v83);
      if ( v80 == 1 )
        _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v84 = a1;
      v85 = (*(_DWORD *)v18 >> 9) & 7;
      if ( v79 && v85 != 7 )
        MiLogPageAccess(a1, v39);
      if ( !v85 )
      {
        v86 = *(_QWORD *)(a1 + 184);
        if ( *(_DWORD *)(v86 + 64) == 16 )
        {
          v87 = *(_QWORD *)(v86 + 496);
          if ( (unsigned __int64)(((__int64)v18 - v87) >> 4) < *(_QWORD *)(v86 + 8) )
          {
            v84 = a1;
          }
          else
          {
            v88 = *v18;
            v89 = *((unsigned int *)v18 + 2) | (*v18 >> 16) & 0xF00000000LL;
            v90 = *((unsigned int *)v18 + 3) | (*v18 >> 20) & 0xF00000000LL;
            v91 = 2 * ((unsigned int)(*v18 >> 9) & 7);
            v92 = *v18;
            if ( (*v18 & 0x800000000000LL) != 0 )
              v93 = v92 | 0xFFFF000000000000uLL;
            else
              v93 = v92 & 0xFFFFFFFFFFFFLL;
            if ( v93 < 0xFFFFF68000000000uLL
              || ((*v18 & 0x800000000000LL) == 0 ? (v94 = v88 & 0xFFFFFFFFFFFFLL) : (v94 = v88 | 0xFFFF000000000000uLL),
                  v94 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v91 = (unsigned int)(v91 + 1);
            }
            v95 = (unsigned int)v91;
            v96 = v87 + 16 * v89;
            v97 = 2 * (v91 + 15);
            v98 = v87 + 16 * v90;
            if ( v90 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v86 + 8 * v97) = v89;
            }
            else
            {
              *(_DWORD *)(v98 + 8) = *((_DWORD *)v18 + 2);
              *(_QWORD *)v98 ^= (*(_QWORD *)v98 ^ (v89 << 16)) & 0xF000000000000LL;
            }
            v84 = a1;
            if ( v89 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v86 + 8 * v97 + 8) = v90;
            }
            else
            {
              v99 = (*(_QWORD *)v96 ^ (v90 << 20)) & 0xF0000000000000LL;
              *(_DWORD *)(v96 + 12) = v90;
              *(_QWORD *)v96 ^= v99;
            }
            --*(_QWORD *)(v86 + 8 * v95 + 112);
          }
        }
        v100 = *v18 & 0xFFFFFFFFFFFFF1FFuLL | 0x200;
        *v18 = v100;
        if ( *(_DWORD *)(v86 + 64) == 16 )
        {
          v101 = ((__int64)v18 - *(_QWORD *)(v86 + 496)) >> 4;
          if ( v101 >= *(_QWORD *)(v86 + 8) )
          {
            v102 = 2 * ((unsigned int)(v100 >> 9) & 7);
            if ( (v100 & 0x800000000000LL) != 0 )
              v103 = v100 | 0xFFFF000000000000uLL;
            else
              v103 = v100 & 0xFFFFFFFFFFFFLL;
            if ( v103 < 0xFFFFF68000000000uLL
              || ((v100 & 0x800000000000LL) == 0
                ? (v104 = v100 & 0xFFFFFFFFFFFFLL)
                : (v104 = v100 | 0xFFFF000000000000uLL),
                  v104 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v102 = (unsigned int)(v102 + 1);
            }
            v105 = (unsigned int)v102;
            v106 = 2 * (v102 + 15);
            v107 = *(_QWORD *)(v86 + 8 * v106 + 8);
            *((_DWORD *)v18 + 2) = -1;
            *((_DWORD *)v18 + 3) = v107;
            *v18 = v100 ^ (v100 ^ (v107 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
            if ( v107 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v86 + 8 * v106) = v101;
            }
            else
            {
              v108 = *(_QWORD *)(v86 + 496) + 16 * v107;
              v109 = (*(_QWORD *)v108 ^ (v101 << 16)) & 0xF000000000000LL;
              *(_DWORD *)(v108 + 8) = v101;
              *(_QWORD *)v108 ^= v109;
            }
            *(_QWORD *)(v86 + 8 * v106 + 8) = v101;
            ++*(_QWORD *)(v86 + 8 * v105 + 112);
          }
        }
        ++*(_QWORD *)(v84 + 40);
      }
      v110 = *v18;
      if ( (*v18 & 0x800000000000LL) != 0 )
        v111 = v110 | 0xFFFF000000000000uLL;
      else
        v111 = v110 & 0xFFFFFFFFFFFFLL;
      v21 = P;
      v112 = v111 & 0xFFFFFFFFFFFFF000uLL;
      v113 = 1LL;
      v114 = *((_DWORD *)P + 3);
      if ( v114 )
      {
        v115 = (char *)P + 8 * v114 - 8;
        v116 = *((_QWORD *)v115 + 3);
        if ( (v116 & 0x800) == 0 )
        {
          v117 = *((_QWORD *)v115 + 3) & 0x7FFLL;
          v118 = v117 + 1;
          if ( ((v117 + 1) << 12) + (v116 & 0xFFFFFFFFFFFFF000uLL) == v112 && v118 > v117 && v118 <= 0x7FF )
          {
            ++*((_QWORD *)P + 2);
            *((_QWORD *)v115 + 3) = ((unsigned __int16)v116 ^ (unsigned __int16)(v116 + 1)) & 0x7FF ^ v116;
            goto LABEL_215;
          }
        }
        v119 = (char *)P + 8 * v114 - 8;
        v120 = *((_QWORD *)v119 + 3);
        if ( (v120 & 0x800) == 0 && (v120 & 0xFFFFFFFFFFFFF000uLL) == v112 + 4096 )
        {
          v121 = *((_QWORD *)v119 + 3) & 0x7FFLL;
          if ( v121 + 1 >= v121 && v121 + 1 <= 0x7FF )
          {
            v122 = 4096LL;
            if ( (v120 & 0x800) != 0 )
              v122 = 0x200000LL;
            ++*((_QWORD *)P + 2);
            *((_QWORD *)v119 + 3) = ((unsigned __int16)(v120 - v122) ^ (unsigned __int16)(v120 - v122 + 1)) & 0x7FF ^ (unsigned __int64)(v120 - v122);
            goto LABEL_215;
          }
        }
      }
      if ( v114 < *((_DWORD *)P + 2) )
      {
        while ( 1 )
        {
          v123 = 2048LL;
          if ( (unsigned __int64)(v113 - 1) <= 0x7FF )
            v123 = v113;
          v113 -= v123;
          v124 = v112 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v123 - 1) & 0x7FF;
          v112 += v123 << 12;
          *(_QWORD *)&v21[8 * (*((_DWORD *)v21 + 3))++ + 24] = v124;
          v125 = *((_DWORD *)v21 + 3);
          *((_QWORD *)v21 + 2) += v123;
          if ( v125 == *((_DWORD *)v21 + 2) )
          {
            qsort(v21 + 24, v125, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList((__int64)v21);
            if ( *((_DWORD *)v21 + 3) == *((_DWORD *)v21 + 2) )
              break;
          }
          if ( !v113 )
            goto LABEL_215;
        }
        if ( v113 )
        {
          *((_QWORD *)v21 + 2) = *((unsigned int *)v21 + 3);
          v21[5] = 1;
        }
      }
      else
      {
        *((_BYTE *)P + 5) = 1;
      }
      goto LABEL_215;
    }
    if ( v80 == 1 )
LABEL_213:
      _InterlockedAnd64((volatile signed __int64 *)(v46 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v21 = P;
LABEL_215:
    ++v194;
    v126 = qword_14034EBD8;
    if ( (v21[4] & 2) == 0 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[11] )
      v126 = -1LL;
    if ( (*((_DWORD *)v21 + 3) >= *((_DWORD *)v21 + 2) || v21[5] || *((_QWORD *)v21 + 2) > v126)
      && v126 >= 0x400
      && !v21[5] )
    {
      MiFlushTbList((__int64)v21);
    }
    v12 = v184;
    v7 = a1;
    goto LABEL_289;
  }
  v12 = v184;
  v155 = 0;
  v7 = a1;
  v21 = P;
LABEL_291:
  v156 = v187 + 1;
  v187 = v156;
  if ( (v156 & 0xF) != 0 || (*(_DWORD *)v7 & 0x40000000) == 0 )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    if ( (DpcRequestSummary & 1) != 0 )
    {
      v161 = 1;
      if ( DpcTimeCount > 7 )
      {
        if ( CurrentPrcb->QuantumEnd )
        {
          v155 = 1;
          goto LABEL_311;
        }
LABEL_306:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v155 = 5;
          goto LABEL_311;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v155 = 6;
          goto LABEL_311;
        }
LABEL_310:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        _enable();
LABEL_311:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v155, DpcWatchdogCount, DpcTimeCount);
        if ( !v155 )
          goto LABEL_314;
        goto LABEL_346;
      }
    }
    else
    {
      v161 = 0;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v155 = 2;
        goto LABEL_311;
      }
      if ( CurrentPrcb->QuantumEnd )
      {
        v155 = 3;
        goto LABEL_311;
      }
      NextThread = CurrentPrcb->NextThread;
      if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
      {
        v155 = 4;
        goto LABEL_311;
      }
    }
    if ( DpcWatchdogCount <= 7 )
    {
LABEL_314:
      v163 = v192;
      v164 = v197;
      goto LABEL_315;
    }
    if ( !v161 )
      goto LABEL_310;
    goto LABEL_306;
  }
LABEL_346:
  if ( v21 )
    MiFlushTbList((__int64)v21);
  if ( v205[0] )
  {
    MiFreeWsleList(v7, v205, 0LL);
    v171 = 0;
    v205[0] = 0;
  }
  else
  {
    v171 = 0;
  }
  MiUnlockWorkingSetExclusive(v7, CurrentIrql);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7);
  }
  else
  {
    if ( _interlockedbittestandset((volatile signed __int32 *)v7, 0x1Fu) )
      v171 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v7);
    for ( i = *(_DWORD *)v7; (*(_DWORD *)v7 & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)v7 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)v7, i | 0x40000000, i);
      if ( (++v171 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v171);
    }
  }
  v173 = *(_QWORD *)(v7 + 120);
  v163 = *(_QWORD *)(v185 + 8);
  v164 = *(_QWORD *)(v185 + 16);
  v197 = v164;
  if ( v12 < v163 )
    v12 = v163;
  v192 = v163;
  if ( v12 > v164 )
    v12 = v163;
  if ( v173 > v163 )
  {
    v16 = v195 * (v173 - v163) / 0x3E8;
    v186 = v16;
LABEL_315:
    if ( v156 < v16 || *(_QWORD *)(v7 + 120) != v163 )
    {
      while ( 1 )
      {
        if ( ++v12 > v164 )
          v12 = v163;
        v184 = v12;
        if ( (v12 & 0xF) == 0 && (*(_DWORD *)v7 & 0x40000000) != 0 )
        {
LABEL_345:
          v156 = v187;
          goto LABEL_346;
        }
        Process = (__int64)KeGetCurrentPrcb();
        v165 = *(_DWORD *)(Process + 22636);
        v166 = *(_DWORD *)(Process + 11756);
        v167 = *(_DWORD *)(Process + 23328);
        if ( (v166 & 1) == 0 )
          break;
        v168 = 1;
        if ( v167 <= 7 )
          goto LABEL_332;
        if ( *(_BYTE *)(Process + 11753) )
        {
          v169 = 1;
          goto LABEL_339;
        }
LABEL_334:
        if ( (v166 & 0x1E) != 0 )
        {
          v169 = 5;
        }
        else
        {
          if ( *(_QWORD *)(Process + 8) == *(_QWORD *)(Process + 24) )
            goto LABEL_338;
          v169 = 6;
        }
LABEL_339:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v169, v165, v167);
        if ( v169 )
          goto LABEL_345;
        v163 = v192;
LABEL_343:
        v18 = (unsigned __int64 *)(*(_QWORD *)(v185 + 496) + v12 * *(unsigned int *)(v185 + 64));
        if ( (*(_BYTE *)v18 & 1) != 0 )
        {
          v33 = v187;
          LODWORD(v15) = 0;
          v24 = v182;
          goto LABEL_48;
        }
      }
      v168 = 0;
      if ( (v166 & 0x1E) != 0 )
      {
        v169 = 2;
        goto LABEL_339;
      }
      if ( *(_BYTE *)(Process + 11753) )
      {
        v169 = 3;
        goto LABEL_339;
      }
      v170 = *(_QWORD *)(Process + 16);
      if ( v170 && v170 != *(_QWORD *)(Process + 8) )
      {
        v169 = 4;
        goto LABEL_339;
      }
LABEL_332:
      if ( v165 <= 7 )
        goto LABEL_343;
      if ( !v168 )
      {
LABEL_338:
        _disable();
        *(_DWORD *)(Process + 22636) = 0;
        *(_DWORD *)(Process + 23328) = 0;
        _enable();
        v169 = 0;
        goto LABEL_339;
      }
      goto LABEL_334;
    }
    v12 = v163 - 1;
  }
LABEL_371:
  if ( v21 )
  {
    MiFlushTbList((__int64)v21);
    if ( v21 == (_BYTE *)(v203 + 136) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v203 + 132), 0);
    }
    else if ( v21 != v206 )
    {
      ExFreePoolWithTag(v21, 0);
    }
  }
  if ( v205[0] )
    MiFreeWsleList(v7, v205, 0LL);
  result = v12 + 1;
  if ( (v182 & 2) != 0 )
    *(_QWORD *)(v185 + 48) = result;
  else
    *(_QWORD *)(v185 + 40) = result;
  if ( hProvider )
  {
    v174 = *(_BYTE *)(v7 + 216) & 7;
    if ( v174 )
    {
      v176 = 0LL;
      v175 = 0;
      if ( v174 < 2u )
        v175 = *(_DWORD *)(v7 - 2960);
    }
    else
    {
      v175 = *(_DWORD *)(v7 - 528);
      v176 = (const CHAR *)(v7 - 176);
    }
    if ( hProvider->LevelPlus1 > 5 && (hProvider->KeywordAny & 1) != 0 )
    {
      result = hProvider->KeywordAll & 1;
      if ( result == hProvider->KeywordAll )
      {
        v204 = v189;
        v181 = v174;
        v201 = v196;
        v200 = v194;
        v193 = v175;
        v202 = v156;
        v207[4] = (__int64)&v181;
        v207[5] = 1LL;
        TlgCreateSz(&pDesc, v176);
        v210 = 4LL;
        v211 = &v202;
        v209 = &v193;
        v213 = &v200;
        v215 = &v204;
        v217 = &v201;
        v212 = 8LL;
        v214 = 8LL;
        v216 = 8LL;
        v218 = 8LL;
        return MmTlgWrite(v177, (int)&dword_1402A44C4, 0, 0, 9u, (__int64)v207);
      }
    }
  }
  return result;
}
