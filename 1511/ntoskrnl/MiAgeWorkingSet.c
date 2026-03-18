/*
 * XREFs of MiAgeWorkingSet @ 0x140058F90
 * Callers:
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiDecommitPages @ 0x14005ADD0 (MiDecommitPages.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiTrimOrAgeWorkingSet @ 0x1400A59F0 (MiTrimOrAgeWorkingSet.c)
 *     NtResetWriteWatch @ 0x1400A5E20 (NtResetWriteWatch.c)
 *     MiCountSharedPages @ 0x1400A6110 (MiCountSharedPages.c)
 *     MiInsertVadEvent @ 0x1400A6EF0 (MiInsertVadEvent.c)
 *     MiJumpStackTarget @ 0x1400D82EC (MiJumpStackTarget.c)
 *     MmStealTopLevelPage @ 0x1400D95E8 (MmStealTopLevelPage.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiVolunteerForTrimFirst @ 0x14006DCF0 (MiVolunteerForTrimFirst.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiInsertWsle @ 0x1400B7450 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400B7840 (MiRemoveEntryWsle.c)
 *     MiCompressTbFlushList @ 0x1400D92A0 (MiCompressTbFlushList.c)
 *     MiDemoteCombinedPte @ 0x14012836C (MiDemoteCombinedPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     _TlgCreateSz @ 0x1401BF978 (_TlgCreateSz.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     _TlgWriteEx @ 0x1401CF38C (_TlgWriteEx.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     EtwTraceShouldYieldProcessor @ 0x14020E308 (EtwTraceShouldYieldProcessor.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiAgeWorkingSet(__int64 a1, KIRQL a2, int a3, unsigned int a4)
{
  __int64 v4; // r15
  __int64 v5; // r12
  int v6; // esi
  __int64 v7; // r13
  unsigned __int64 v8; // rbx
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r11
  unsigned int v11; // r14d
  unsigned int v12; // eax
  unsigned __int64 v13; // rcx
  unsigned __int64 v14; // rcx
  __int64 v15; // r8
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r10
  bool v18; // cf
  __int64 v19; // r10
  unsigned __int64 v20; // r14
  __int64 v21; // rdx
  __int64 *i; // rdi
  char v23; // al
  int *v24; // rbx
  _BYTE *v25; // rsi
  unsigned __int16 v26; // ax
  __int64 v27; // rdx
  char *v28; // r8
  unsigned __int64 v29; // r11
  __int64 v30; // r9
  char *v31; // rbx
  int v32; // eax
  int v33; // ebx
  unsigned __int8 v34; // al
  int v35; // eax
  signed __int128 v36; // rax
  unsigned __int64 v37; // r8
  __int64 v38; // r12
  unsigned __int64 v39; // r12
  unsigned __int64 *v40; // r12
  char v41; // bl
  __int64 v42; // rsi
  unsigned int v43; // r14d
  __int64 v44; // rax
  __int64 v45; // rbx
  __int64 v46; // rcx
  __int64 v47; // r9
  __int64 v48; // r10
  __int64 v49; // r8
  __int64 v50; // rax
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rcx
  __int64 v53; // r11
  __int64 v54; // r8
  __int64 v55; // rcx
  __int64 v56; // r9
  unsigned __int64 v57; // rax
  unsigned __int64 v58; // rax
  __int64 v59; // r10
  __int64 v60; // r9
  __int64 v61; // rcx
  __int64 v62; // rax
  __int64 v63; // rcx
  char v64; // al
  unsigned int v65; // eax
  __int64 v66; // rcx
  int v67; // r14d
  int v68; // r15d
  unsigned __int64 v69; // rbx
  __int64 v70; // rsi
  int v71; // ebx
  __int64 v72; // r10
  __int64 v73; // rsi
  unsigned __int64 v74; // rcx
  __int64 v75; // r9
  __int64 v76; // r11
  __int64 v77; // r8
  unsigned __int64 v78; // rax
  unsigned __int64 v79; // rax
  unsigned __int64 v80; // rcx
  __int64 v81; // rbx
  __int64 v82; // rdx
  __int64 v83; // rcx
  __int64 v84; // rax
  unsigned __int64 v85; // rcx
  __int64 v86; // r9
  unsigned __int64 v87; // rax
  unsigned __int64 v88; // rax
  __int64 v89; // r11
  __int64 v90; // r9
  __int64 v91; // rdx
  __int64 v92; // rdx
  __int64 v93; // rax
  unsigned __int64 v94; // rbx
  unsigned __int64 v95; // rbx
  unsigned __int64 v96; // rbx
  __int64 v97; // rdi
  unsigned int v98; // r9d
  char *v99; // r11
  unsigned __int64 v100; // rax
  unsigned __int64 v101; // r10
  __int64 v102; // rax
  unsigned __int64 v103; // rcx
  __int64 v104; // rdx
  __int64 v105; // rdx
  unsigned __int64 v106; // rax
  unsigned int v107; // eax
  unsigned int v108; // ebx
  int *v109; // rdi
  unsigned __int64 v110; // rbx
  unsigned __int64 v111; // rcx
  unsigned __int64 v112; // rax
  unsigned __int64 v113; // r14
  struct _KPRCB *v114; // rcx
  unsigned int v115; // r11d
  __int64 v116; // r9
  unsigned int v117; // r10d
  unsigned int v118; // ebx
  char v119; // al
  unsigned int v120; // r15d
  __int64 v121; // rbx
  char v122; // r10
  unsigned int v123; // r14d
  __int64 v124; // rbx
  unsigned __int64 v125; // rcx
  __int64 v126; // r9
  __int64 v127; // r10
  __int64 v128; // r8
  unsigned __int64 v129; // rax
  unsigned __int64 v130; // rax
  unsigned __int64 v131; // rcx
  __int64 v132; // r11
  __int64 *v133; // r8
  __int64 v134; // rdx
  __int64 v135; // rcx
  __int64 v136; // rax
  unsigned __int64 v137; // r8
  unsigned __int64 v138; // rdx
  __int64 v139; // r9
  unsigned __int64 v140; // rax
  unsigned __int64 v141; // rax
  __int64 v142; // r10
  __int64 v143; // r9
  __int64 v144; // rcx
  __int64 v145; // rcx
  __int64 v146; // rax
  unsigned __int8 v147; // r9
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r11d
  __int64 DpcRequestSummary; // r9
  unsigned int DpcTimeCount; // r10d
  _KTHREAD *v152; // rax
  _KTHREAD *NextThread; // rax
  __int64 v154; // rbx
  unsigned __int64 v155; // rax
  unsigned __int8 v156; // dl
  int v157; // r8d
  const CHAR *v158; // r9
  TraceLoggingHProvider v159; // r10
  LPCGUID pActivityId; // r11
  unsigned __int8 v163; // [rsp+41h] [rbp-BFh]
  unsigned __int8 v164; // [rsp+42h] [rbp-BEh]
  unsigned __int8 v166; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v167; // [rsp+58h] [rbp-A8h]
  int v168; // [rsp+60h] [rbp-A0h]
  PVOID P; // [rsp+68h] [rbp-98h]
  int v170; // [rsp+70h] [rbp-90h]
  __int64 v171; // [rsp+78h] [rbp-88h]
  unsigned __int64 v172; // [rsp+80h] [rbp-80h]
  unsigned int v173; // [rsp+88h] [rbp-78h]
  int *v174; // [rsp+90h] [rbp-70h]
  __int64 v175; // [rsp+98h] [rbp-68h]
  unsigned __int64 v176; // [rsp+A0h] [rbp-60h]
  __int64 v177; // [rsp+A8h] [rbp-58h]
  __int64 v178; // [rsp+B0h] [rbp-50h]
  unsigned int v179; // [rsp+B8h] [rbp-48h]
  int v180; // [rsp+BCh] [rbp-44h] BYREF
  int v181; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 v182; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v183; // [rsp+D0h] [rbp-30h]
  int v184; // [rsp+D8h] [rbp-28h] BYREF
  unsigned __int64 v185; // [rsp+E0h] [rbp-20h]
  int v186; // [rsp+E8h] [rbp-18h] BYREF
  __int64 v187; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v188; // [rsp+F8h] [rbp-8h] BYREF
  unsigned __int64 v189; // [rsp+100h] [rbp+0h] BYREF
  __int64 v190; // [rsp+108h] [rbp+8h] BYREF
  __int64 v191; // [rsp+110h] [rbp+10h] BYREF
  _DWORD v192[40]; // [rsp+120h] [rbp+20h] BYREF
  _BYTE v193[192]; // [rsp+1C0h] [rbp+C0h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+280h] [rbp+180h] BYREF
  char *v195; // [rsp+2A0h] [rbp+1A0h]
  __int64 v196; // [rsp+2A8h] [rbp+1A8h]
  struct _EVENT_DATA_DESCRIPTOR pDesc; // [rsp+2B0h] [rbp+1B0h] BYREF
  int *v198; // [rsp+2C0h] [rbp+1C0h]
  __int64 v199; // [rsp+2C8h] [rbp+1C8h]
  unsigned __int64 *v200; // [rsp+2D0h] [rbp+1D0h]
  __int64 v201; // [rsp+2D8h] [rbp+1D8h]
  __int64 *v202; // [rsp+2E0h] [rbp+1E0h]
  __int64 v203; // [rsp+2E8h] [rbp+1E8h]
  __int64 *v204; // [rsp+2F0h] [rbp+1F0h]
  __int64 v205; // [rsp+2F8h] [rbp+1F8h]
  __int64 *v206; // [rsp+300h] [rbp+200h]
  __int64 v207; // [rsp+308h] [rbp+208h]
  int *v208; // [rsp+310h] [rbp+210h]
  __int64 v209; // [rsp+318h] [rbp+218h]

  v4 = *(_QWORD *)(a1 + 184);
  v5 = a1;
  v6 = a3;
  v170 = a3;
  v7 = 0LL;
  v172 = 0LL;
  v8 = *(_QWORD *)(v4 + 8);
  v9 = 0LL;
  v10 = *(_QWORD *)(v4 + 16);
  v11 = 0;
  v171 = 0LL;
  v12 = a4;
  v178 = 0LL;
  v177 = 0LL;
  v168 = 0;
  v13 = *(_QWORD *)(a1 + 120);
  v167 = v4;
  v182 = v10;
  v176 = v8;
  if ( v13 <= v8 )
    goto LABEL_347;
  if ( !a4 )
    v12 = 10;
  v14 = v13 - v8;
  v179 = v12;
  if ( (a3 & 2) != 0 )
  {
    v15 = *(unsigned int *)(v4 + 56);
    v16 = *(_QWORD *)(v4 + 48);
    v17 = v15 + v14;
    *(_DWORD *)(v4 + 56) = (v15 + v14) % v12;
  }
  else
  {
    v15 = *(unsigned int *)(v4 + 60);
    v16 = *(_QWORD *)(v4 + 40);
    v17 = v15 + v14;
    *(_DWORD *)(v4 + 60) = (v15 + v14) % v12;
  }
  v18 = v17 < v14;
  v19 = 0LL;
  if ( v18 )
    v15 = 0LL;
  v20 = v12 * (v15 + v14) / 0x3E8;
  v183 = v20;
  if ( v20 > v14 )
  {
    v20 = v14 * v12 / 0x3E8;
    v183 = v20;
  }
  if ( v16 > v10 || v16 < v8 )
    v16 = v8;
  v21 = *(_QWORD *)(v4 + 496);
  for ( i = (__int64 *)(v21 + v16 * *(unsigned int *)(v4 + 64));
        (*(_BYTE *)i & 1) == 0;
        i = (__int64 *)(v21 + v16 * *(unsigned int *)(v4 + 64)) )
  {
    if ( ++v16 > v10 )
      v16 = v8;
  }
  v23 = *(_BYTE *)(v5 + 216);
  v24 = &MiSystemPartition;
  P = 0LL;
  v25 = 0LL;
  v192[0] = 0;
  v173 = 0;
  v164 = 0;
  v163 = 0;
  v174 = &MiSystemPartition;
  if ( (v23 & 7) == 0 )
  {
    v26 = *(_WORD *)(v5 + 180);
    if ( v26 != 1023 )
      v24 = *(int **)(qword_1402FEC28 + 8LL * v26);
    v174 = v24;
  }
  v27 = *((_QWORD *)v24 + 702);
  v175 = v27;
  if ( (v170 & 3) != 0 )
  {
    v28 = (char *)(v24 + 464);
    v29 = *((_QWORD *)v24 + 208) + *((_QWORD *)v24 + 216);
    v30 = 0LL;
    v31 = (char *)(v24 + 514);
    if ( v28 < v31 )
    {
      if ( (v31 - v28 + 39) / 0x28uLL >= 2 )
      {
        do
        {
          v30 += *(_QWORD *)v28;
          v19 += *((_QWORD *)v28 + 5);
          v28 += 80;
        }
        while ( v28 < v31 - 40 );
      }
      if ( v28 < v31 )
        v29 += *(_QWORD *)v28;
      v27 = v175;
      v29 += v30 + v19;
    }
    if ( v29 + *(_QWORD *)v31 < *(_QWORD *)(v27 + 80) )
    {
      if ( *(_BYTE *)(v5 + 218) != 2 )
      {
        v32 = 3;
        if ( v29 >= *(_QWORD *)(v27 + 72) )
          v32 = 5;
        v173 = v32;
      }
      if ( (unsigned __int16 *)v5 != &PsInitialSystemProcess[1].IdealNode[12] )
      {
        v164 = *(_BYTE *)(v27 + 2362);
        v163 = *(_BYTE *)(v27 + 2363);
      }
    }
    if ( v20 > 0x100 )
    {
      v33 = 509;
      if ( v20 < 0x1FD )
        v33 = v20;
      P = ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v33 - 256) + 2072, 0x73576D4Du);
      v25 = P;
      if ( P )
        goto LABEL_44;
      v27 = v175;
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v27 + 132), 1, 0) )
    {
      v25 = v193;
      v33 = 20;
      P = v193;
    }
    else
    {
      v25 = (_BYTE *)(v27 + 136);
      v33 = 256;
      P = (PVOID)(v27 + 136);
    }
LABEL_44:
    v34 = *(_BYTE *)(v5 + 216) & 7;
    if ( v34 )
      v35 = v34 < 2u ? 2 : 0;
    else
      v35 = 1;
    *(_DWORD *)v25 = v35;
    *((_DWORD *)v25 + 3) = 0;
    *((_WORD *)v25 + 2) = 0;
    *((_QWORD *)v25 + 2) = 0LL;
    *((_DWORD *)v25 + 2) = v33;
    *((_QWORD *)v25 + 3) = 0LL;
  }
  *((_QWORD *)&v36 + 1) = 0xFFFFF68000000000uLL;
  v185 = 0xFFFFF68000000000uLL;
LABEL_49:
  v37 = 0x800000000000LL;
  if ( v172 >= v20 )
    goto LABEL_332;
  v38 = *i;
  if ( (*i & 0x800000000000LL) != 0 )
    v39 = v38 | 0xFFFF000000000000uLL;
  else
    v39 = v38 & 0xFFFFFFFFFFFFLL;
  v40 = (unsigned __int64 *)(((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v187 = MI_READ_PTE_LOCK_FREE(v40);
  v41 = v187;
  v42 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v187) - 0x58000000000LL;
  *((_QWORD *)&v36 + 1) = *(_QWORD *)(v42 + 8);
  if ( v36 >= 0 && (unsigned int)MiDemoteCombinedPte(v40, *((_QWORD *)&v36 + 1) | 0x8000000000000000uLL) == 1 )
  {
    *(_QWORD *)&v36 = MI_READ_PTE_LOCK_FREE(v40);
    v41 = v36;
    v187 = v36;
  }
  v43 = (*(_DWORD *)i >> 9) & 7;
  if ( (v41 & 0x20) != 0 )
  {
    v44 = v43 - 1;
    if ( (unsigned int)v44 <= 5 )
    {
      v43 = 0;
      --*(_QWORD *)(a1 + 8 * v44 + 40);
      if ( *(_DWORD *)(v4 + 64) == 16 )
      {
        v45 = *(_QWORD *)(v4 + 496);
        if ( (unsigned __int64)(((__int64)i - v45) >> 4) >= *(_QWORD *)(v4 + 8) )
        {
          v46 = *i;
          v47 = *((unsigned int *)i + 2) | ((unsigned __int64)*i >> 16) & 0xF00000000LL;
          v48 = *((unsigned int *)i + 3) | ((unsigned __int64)*i >> 20) & 0xF00000000LL;
          v49 = 2 * ((unsigned int)((unsigned __int64)*i >> 9) & 7);
          v50 = *i;
          if ( (*i & 0x800000000000LL) != 0 )
            v51 = v50 | 0xFFFF000000000000uLL;
          else
            v51 = v50 & 0xFFFFFFFFFFFFLL;
          if ( v51 < v185
            || ((*i & 0x800000000000LL) == 0 ? (v52 = v46 & 0xFFFFFFFFFFFFLL) : (v52 = v46 | 0xFFFF000000000000uLL),
                v52 > 0xFFFFF6FFFFFFFFFFuLL) )
          {
            v49 = (unsigned int)(v49 + 1);
          }
          v53 = (unsigned int)v49;
          *((_QWORD *)&v36 + 1) = v45 + 16 * v47;
          v54 = 2 * (v49 + 15);
          v55 = v45 + 16 * v48;
          if ( v48 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v4 + 8 * v54) = v47;
          }
          else
          {
            *(_DWORD *)(v55 + 8) = *((_DWORD *)i + 2);
            *(_QWORD *)v55 ^= (*(_QWORD *)v55 ^ (v47 << 16)) & 0xF000000000000LL;
          }
          if ( v47 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v4 + 8 * v54 + 8) = v48;
          }
          else
          {
            *(_DWORD *)(*((_QWORD *)&v36 + 1) + 12LL) = v48;
            **((_QWORD **)&v36 + 1) ^= (**((_QWORD **)&v36 + 1) ^ (v48 << 20)) & 0xF0000000000000LL;
          }
          --*(_QWORD *)(v4 + 8 * v53 + 112);
        }
      }
      *i &= 0xFFFFFFFFFFFFF1FFuLL;
      v37 = *i;
      if ( *(_DWORD *)(v4 + 64) == 16 )
      {
        *((_QWORD *)&v36 + 1) = ((__int64)i - *(_QWORD *)(v4 + 496)) >> 4;
        if ( *((_QWORD *)&v36 + 1) >= *(_QWORD *)(v4 + 8) )
        {
          v56 = 2 * ((unsigned int)(v37 >> 9) & 7);
          if ( (v37 & 0x800000000000LL) != 0 )
            v57 = v37 | 0xFFFF000000000000uLL;
          else
            v57 = v37 & 0xFFFFFFFFFFFFLL;
          if ( v57 < v185
            || ((v37 & 0x800000000000LL) == 0 ? (v58 = v37 & 0xFFFFFFFFFFFFLL) : (v58 = v37 | 0xFFFF000000000000uLL),
                v58 > 0xFFFFF6FFFFFFFFFFuLL) )
          {
            v56 = (unsigned int)(v56 + 1);
          }
          v59 = (unsigned int)v56;
          v60 = 2 * (v56 + 15);
          v61 = *(_QWORD *)(v4 + 8 * v60 + 8);
          *((_DWORD *)i + 2) = -1;
          *((_DWORD *)i + 3) = v61;
          v62 = v37 ^ (v37 ^ (v61 << 20)) & 0xF0000000000000LL;
          v37 = 0xF000000000000LL;
          *i = v62 | 0xF000000000000LL;
          if ( v61 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v4 + 8 * v60) = *((_QWORD *)&v36 + 1);
          }
          else
          {
            v63 = *(_QWORD *)(v4 + 496) + 16 * v61;
            *(_QWORD *)&v36 = (*(_QWORD *)v63 ^ (*((_QWORD *)&v36 + 1) << 16)) & 0xF000000000000LL;
            *(_DWORD *)(v63 + 8) = DWORD2(v36);
            *(_QWORD *)v63 ^= v36;
          }
          *(_QWORD *)(v4 + 8 * v60 + 8) = *((_QWORD *)&v36 + 1);
          ++*(_QWORD *)(v4 + 8 * v59 + 112);
        }
      }
    }
    if ( (v170 & 3) == 0 )
    {
      v25 = P;
      v108 = 0;
      v5 = a1;
      goto LABEL_195;
    }
    if ( v43 != 7 )
    {
      v64 = *(_BYTE *)(v42 + 35);
      v65 = (v64 & 8) != 0 ? 5 : v64 & 7;
      if ( v65 < 5 )
      {
        v186 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v186);
          while ( (*(_QWORD *)(v42 + 24) & 0x8000000000000000uLL) != 0 );
        }
        *(_BYTE *)(v42 + 35) ^= (*(_BYTE *)(v42 + 35) ^ 5) & 7;
        _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    v66 = a1;
    v67 = 0;
    v68 = dword_1402FED88;
    if ( (*(_BYTE *)(a1 + 216) & 7) != 0 )
    {
      v181 = 0;
      v67 = 1;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v181);
          while ( (*(_QWORD *)(v42 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v42 + 24), 0x3FuLL) );
        v66 = a1;
      }
      if ( (*(_QWORD *)(v42 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v42 + 40) & 0x200000000000000LL) == 0
        || (*(_BYTE *)(v66 + 216) & 7) != 0 && *(_WORD *)(v42 + 32) > 1u )
      {
        goto LABEL_181;
      }
    }
    if ( P )
    {
      v69 = MI_READ_PTE_LOCK_FREE(v40) & 0xFFFFFFFFFFFFFFDFuLL;
      *v40 = v69;
      if ( (unsigned int)MiPteInShadowRange(v40) )
        MiWritePteShadow(v40, v69);
      if ( v67 == 1 )
        _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v70 = a1;
      v71 = (*(_DWORD *)i >> 9) & 7;
      if ( v68 && v71 != 7 )
        MiLogPageAccess(a1, v40);
      if ( !v71 )
      {
        v72 = *(_QWORD *)(a1 + 184);
        if ( *(_DWORD *)(v72 + 64) == 16 )
        {
          v73 = *(_QWORD *)(v72 + 496);
          if ( (unsigned __int64)(((__int64)i - v73) >> 4) < *(_QWORD *)(v72 + 8) )
          {
            v70 = a1;
          }
          else
          {
            v74 = *i;
            v75 = *((unsigned int *)i + 2) | ((unsigned __int64)*i >> 16) & 0xF00000000LL;
            v76 = *((unsigned int *)i + 3) | ((unsigned __int64)*i >> 20) & 0xF00000000LL;
            v77 = 2 * ((unsigned int)((unsigned __int64)*i >> 9) & 7);
            v78 = *i;
            if ( (*i & 0x800000000000LL) != 0 )
              v79 = v78 | 0xFFFF000000000000uLL;
            else
              v79 = v78 & 0xFFFFFFFFFFFFLL;
            if ( v79 < 0xFFFFF68000000000uLL
              || ((*i & 0x800000000000LL) == 0 ? (v80 = v74 & 0xFFFFFFFFFFFFLL) : (v80 = v74 | 0xFFFF000000000000uLL),
                  v80 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v77 = (unsigned int)(v77 + 1);
            }
            v81 = (unsigned int)v77;
            v82 = v73 + 16 * v75;
            v37 = 2 * (v77 + 15);
            v83 = v73 + 16 * v76;
            if ( v76 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v72 + 8 * v37) = v75;
            }
            else
            {
              *(_DWORD *)(v83 + 8) = *((_DWORD *)i + 2);
              *(_QWORD *)v83 ^= (*(_QWORD *)v83 ^ (v75 << 16)) & 0xF000000000000LL;
            }
            v70 = a1;
            if ( v75 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v72 + 8 * v37 + 8) = v76;
            }
            else
            {
              v84 = (*(_QWORD *)v82 ^ (v76 << 20)) & 0xF0000000000000LL;
              *(_DWORD *)(v82 + 12) = v76;
              *(_QWORD *)v82 ^= v84;
            }
            --*(_QWORD *)(v72 + 8 * v81 + 112);
          }
        }
        v85 = *i & 0xFFFFFFFFFFFFF1FFuLL | 0x200;
        *i = v85;
        if ( *(_DWORD *)(v72 + 64) == 16 )
        {
          v37 = ((__int64)i - *(_QWORD *)(v72 + 496)) >> 4;
          if ( v37 >= *(_QWORD *)(v72 + 8) )
          {
            v86 = 2 * ((unsigned int)(v85 >> 9) & 7);
            if ( (v85 & 0x800000000000LL) != 0 )
              v87 = v85 | 0xFFFF000000000000uLL;
            else
              v87 = v85 & 0xFFFFFFFFFFFFLL;
            if ( v87 < 0xFFFFF68000000000uLL
              || ((v85 & 0x800000000000LL) == 0 ? (v88 = v85 & 0xFFFFFFFFFFFFLL) : (v88 = v85 | 0xFFFF000000000000uLL),
                  v88 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v86 = (unsigned int)(v86 + 1);
            }
            v89 = (unsigned int)v86;
            v90 = 2 * (v86 + 15);
            v91 = *(_QWORD *)(v72 + 8 * v90 + 8);
            *((_DWORD *)i + 2) = -1;
            *((_DWORD *)i + 3) = v91;
            *i = v85 ^ (v85 ^ (v91 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
            if ( v91 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v72 + 8 * v90) = v37;
            }
            else
            {
              v92 = *(_QWORD *)(v72 + 496) + 16 * v91;
              v93 = (*(_QWORD *)v92 ^ (v37 << 16)) & 0xF000000000000LL;
              *(_DWORD *)(v92 + 8) = v37;
              *(_QWORD *)v92 ^= v93;
            }
            *(_QWORD *)(v72 + 8 * v90 + 8) = v37;
            ++*(_QWORD *)(v72 + 8 * v89 + 112);
          }
        }
        ++*(_QWORD *)(v70 + 40);
      }
      v94 = *i;
      if ( (*i & 0x800000000000LL) != 0 )
        v95 = v94 | 0xFFFF000000000000uLL;
      else
        v95 = v94 & 0xFFFFFFFFFFFFLL;
      v25 = P;
      v96 = v95 & 0xFFFFFFFFFFFFF000uLL;
      v97 = 1LL;
      v98 = *((_DWORD *)P + 3);
      if ( v98 )
      {
        v99 = (char *)P + 8 * v98 - 8;
        v100 = *((_QWORD *)v99 + 3);
        if ( (v100 & 0x800) == 0 )
        {
          v37 = *((_QWORD *)v99 + 3) & 0x7FFLL;
          v101 = v37 + 1;
          if ( (v100 & 0xFFFFFFFFFFFFF000uLL) + ((v37 + 1) << 12) == v96 && v101 > v37 && v101 <= 0x7FF )
          {
            ++*((_QWORD *)P + 2);
            *((_QWORD *)v99 + 3) = ((unsigned __int16)v100 ^ (unsigned __int16)(v100 + 1)) & 0x7FF ^ v100;
            goto LABEL_183;
          }
        }
        v37 = (unsigned __int64)P + 8 * v98 - 8;
        v102 = *(_QWORD *)(v37 + 24);
        if ( (v102 & 0x800) == 0 && (v102 & 0xFFFFFFFFFFFFF000uLL) == v96 + 4096 )
        {
          v103 = *(_QWORD *)(v37 + 24) & 0x7FFLL;
          if ( v103 + 1 >= v103 && v103 + 1 <= 0x7FF )
          {
            v104 = 4096LL;
            if ( (v102 & 0x800) != 0 )
              v104 = 0x200000LL;
            ++*((_QWORD *)P + 2);
            *(_QWORD *)(v37 + 24) = ((unsigned __int16)(v102 - v104) ^ (unsigned __int16)(v102 - v104 + 1)) & 0x7FF ^ (unsigned __int64)(v102 - v104);
            goto LABEL_183;
          }
        }
      }
      if ( v98 < *((_DWORD *)P + 2) )
      {
        while ( 1 )
        {
          v105 = 2048LL;
          if ( (unsigned __int64)(v97 - 1) <= 0x7FF )
            v105 = v97;
          v97 -= v105;
          v106 = v96 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v105 - 1) & 0x7FF;
          v96 += v105 << 12;
          *(_QWORD *)&v25[8 * (*((_DWORD *)v25 + 3))++ + 24] = v106;
          v107 = *((_DWORD *)v25 + 3);
          *((_QWORD *)v25 + 2) += v105;
          if ( v107 == *((_DWORD *)v25 + 2) )
          {
            qsort(v25 + 24, v107, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList(v25);
            if ( *((_DWORD *)v25 + 3) == *((_DWORD *)v25 + 2) )
              break;
          }
          if ( !v97 )
            goto LABEL_183;
        }
        if ( v97 )
        {
          *((_QWORD *)v25 + 2) = *((unsigned int *)v25 + 3);
          v25[5] = 1;
        }
      }
      else
      {
        *((_BYTE *)P + 5) = 1;
      }
      goto LABEL_183;
    }
    if ( v67 == 1 )
LABEL_181:
      _InterlockedAnd64((volatile signed __int64 *)(v42 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v25 = P;
LABEL_183:
    ++v178;
    *((_QWORD *)&v36 + 1) = qword_1402FE720;
    if ( (v25[4] & 2) == 0 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[12] )
      *((_QWORD *)&v36 + 1) = -1LL;
    if ( (*((_DWORD *)v25 + 3) >= *((_DWORD *)v25 + 2) || v25[5] || *((_QWORD *)v25 + 2) > *((_QWORD *)&v36 + 1))
      && *((_QWORD *)&v36 + 1) >= 0x400uLL
      && !v25[5] )
    {
      MiFlushTbList(v25, *((_QWORD *)&v36 + 1), v37);
    }
    v5 = a1;
    goto LABEL_193;
  }
  v119 = *(_BYTE *)(v42 + 35);
  if ( (v119 & 8) != 0 )
    v120 = 5;
  else
    v120 = v119 & 7;
  if ( v43 >= 6 || v120 >= 5 )
  {
    v121 = v167;
    v5 = a1;
  }
  else
  {
    v5 = a1;
    if ( v43 )
      --*(_QWORD *)(a1 + 8LL * (v43 - 1) + 40);
    v121 = v167;
    ++*(_QWORD *)(a1 + 80);
    v43 = 6;
    MiRemoveEntryWsle(v121, i);
    *i = *i & 0xFFFFFFFFFFFFF1FFuLL | 0xC00;
    MiInsertWsle(v121, i, 0LL);
    ++v171;
  }
  v122 = v170;
  if ( (v170 & 1) != 0 && v43 < 6 )
  {
    if ( v43 )
      --*(_QWORD *)(v5 + 8LL * (v43 - 1) + 40);
    v123 = v43 + 1;
    ++*(_QWORD *)(v5 + 8LL * (v123 - 1) + 40);
    if ( *(_DWORD *)(v121 + 64) == 16 )
    {
      v124 = *(_QWORD *)(v121 + 496);
      if ( (unsigned __int64)(((__int64)i - v124) >> 4) < *(_QWORD *)(v167 + 8) )
      {
        v121 = v167;
      }
      else
      {
        v125 = *i;
        v126 = *((unsigned int *)i + 2) | ((unsigned __int64)*i >> 16) & 0xF00000000LL;
        v127 = *((unsigned int *)i + 3) | ((unsigned __int64)*i >> 20) & 0xF00000000LL;
        v128 = 2 * ((unsigned int)((unsigned __int64)*i >> 9) & 7);
        v129 = *i;
        if ( (*i & 0x800000000000LL) != 0 )
          v130 = v129 | 0xFFFF000000000000uLL;
        else
          v130 = v129 & 0xFFFFFFFFFFFFLL;
        if ( v130 < v185
          || ((*i & 0x800000000000LL) == 0 ? (v131 = v125 & 0xFFFFFFFFFFFFLL) : (v131 = v125 | 0xFFFF000000000000uLL),
              v131 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v128 = (unsigned int)(v128 + 1);
        }
        v132 = (unsigned int)v128;
        v133 = (__int64 *)(v167 + 16 * (v128 + 15));
        v134 = v124 + 16 * v126;
        v135 = v124 + 16 * v127;
        if ( v127 == 0xFFFFFFFFFLL )
        {
          *v133 = v126;
        }
        else
        {
          *(_DWORD *)(v135 + 8) = *((_DWORD *)i + 2);
          *(_QWORD *)v135 ^= (*(_QWORD *)v135 ^ (v126 << 16)) & 0xF000000000000LL;
        }
        v121 = v167;
        if ( v126 == 0xFFFFFFFFFLL )
        {
          v133[1] = v127;
        }
        else
        {
          v136 = (*(_QWORD *)v134 ^ (v127 << 20)) & 0xF0000000000000LL;
          *(_DWORD *)(v134 + 12) = v127;
          *(_QWORD *)v134 ^= v136;
        }
        --*(_QWORD *)(v121 + 8 * v132 + 112);
      }
    }
    *i = (*(_DWORD *)i ^ (v123 << 9)) & 0xE00 ^ (unsigned __int64)*i;
    v137 = *i;
    if ( *(_DWORD *)(v121 + 64) == 16 )
    {
      v138 = ((__int64)i - *(_QWORD *)(v121 + 496)) >> 4;
      if ( v138 >= *(_QWORD *)(v121 + 8) )
      {
        v139 = 2 * ((unsigned int)(v137 >> 9) & 7);
        if ( (v137 & 0x800000000000LL) != 0 )
          v140 = v137 | 0xFFFF000000000000uLL;
        else
          v140 = v137 & 0xFFFFFFFFFFFFLL;
        if ( v140 < 0xFFFFF68000000000uLL
          || ((v137 & 0x800000000000LL) == 0 ? (v141 = v137 & 0xFFFFFFFFFFFFLL) : (v141 = v137 | 0xFFFF000000000000uLL),
              v141 > 0xFFFFF6FFFFFFFFFFuLL) )
        {
          v139 = (unsigned int)(v139 + 1);
        }
        v142 = (unsigned int)v139;
        v143 = 2 * (v139 + 15);
        v144 = *(_QWORD *)(v121 + 8 * v143 + 8);
        *((_DWORD *)i + 2) = -1;
        *((_DWORD *)i + 3) = v144;
        *i = v137 ^ (v137 ^ (v144 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
        if ( v144 == 0xFFFFFFFFFLL )
        {
          *(_QWORD *)(v121 + 8 * v143) = v138;
        }
        else
        {
          v145 = *(_QWORD *)(v121 + 496) + 16 * v144;
          v146 = (*(_QWORD *)v145 ^ (v138 << 16)) & 0xF000000000000LL;
          *(_DWORD *)(v145 + 8) = v138;
          *(_QWORD *)v145 ^= v146;
        }
        *(_QWORD *)(v121 + 8 * v143 + 8) = v138;
        ++*(_QWORD *)(v121 + 8 * v142 + 112);
      }
    }
    ++v171;
    v122 = v170;
  }
  v37 = *(_QWORD *)(v42 + 40);
  *((_QWORD *)&v36 + 1) = v164;
  if ( (v37 & 0x200000000000000LL) != 0 )
    *((_QWORD *)&v36 + 1) = v163;
  v147 = BYTE8(v36);
  if ( !BYTE8(v36) )
    v147 = 7;
  if ( (LONG *)v5 == &dword_1402FF980
    && (v37 >>= 54, LOBYTE(v37) = v37 & 7, (_BYTE)v37 == 4)
    && (*(_QWORD *)(v42 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
    && *(_WORD *)(v42 + 32) == 1
    || (v122 & 3) != 0 && (((*(_DWORD *)i >> 9) & 7u) >= (unsigned __int64)v147 || v120 < v173) )
  {
    ++v177;
    *(_QWORD *)&v192[2 * v192[0] + 2] = v16;
    if ( ++v192[0] == 19 )
    {
      MiFreeWsleList(v5, v192, 0LL);
      v25 = P;
      v108 = 0;
      v192[0] = 0;
      goto LABEL_194;
    }
  }
  v25 = P;
LABEL_193:
  v108 = 0;
LABEL_194:
  v4 = v167;
LABEL_195:
  v109 = v174;
  if ( (++v172 & 0xF) != 0 || *((_QWORD *)v174 + 736) >= 0x420uLL )
  {
    v11 = v168;
    if ( v168 == 1 || (v172 & 0xF) == 0 && (*(_DWORD *)v5 & 0x40000000) != 0 )
      goto LABEL_198;
    CurrentPrcb = KeGetCurrentPrcb();
    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
    DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
    DpcTimeCount = CurrentPrcb->DpcTimeCount;
    *((_QWORD *)&v36 + 1) = DpcWatchdogCount > 7;
    if ( (DpcRequestSummary & 1) != 0 )
    {
      v37 = 1LL;
      if ( DpcTimeCount > 7 )
      {
        if ( CurrentPrcb->QuantumEnd )
        {
          v108 = 1;
          goto LABEL_305;
        }
LABEL_300:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v108 = 5;
          goto LABEL_305;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v108 = 6;
          goto LABEL_305;
        }
LABEL_304:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        _enable();
LABEL_305:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v108, DpcWatchdogCount, DpcTimeCount, DpcRequestSummary);
        if ( v108 )
          goto LABEL_198;
LABEL_308:
        v20 = v183;
        v110 = v176;
        v111 = v182;
LABEL_209:
        if ( v172 < v20 || *(_QWORD *)(v5 + 120) != v110 )
        {
          while ( 1 )
          {
            if ( ++v16 > v111 )
              v16 = v110;
            if ( (v16 & 0xF) == 0 && *((_QWORD *)v109 + 736) < 0x420uLL )
            {
              v11 = 1;
              goto LABEL_333;
            }
            if ( (v16 & 0xF) == 0 && (*(_DWORD *)v5 & 0x40000000) != 0 )
              goto LABEL_329;
            v114 = KeGetCurrentPrcb();
            v37 = 1LL;
            v115 = v114->DpcWatchdogCount;
            v116 = (unsigned int)v114->DpcRequestSummary;
            v117 = v114->DpcTimeCount;
            *((_QWORD *)&v36 + 1) = v115 > 7;
            if ( (v116 & 1) == 0 )
              break;
            if ( v117 <= 7 )
              goto LABEL_316;
            if ( v114->QuantumEnd )
            {
              v118 = 1;
              goto LABEL_323;
            }
LABEL_318:
            if ( (v116 & 0x1E) != 0 )
            {
              v118 = 5;
            }
            else
            {
              if ( v114->CurrentThread == v114->IdleThread )
                goto LABEL_322;
              v118 = 6;
            }
LABEL_323:
            if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
              EtwTraceShouldYieldProcessor(v118, v115, v117, v116);
            if ( v118 )
            {
LABEL_329:
              v11 = v168;
              goto LABEL_198;
            }
            v110 = v176;
LABEL_327:
            i = (__int64 *)(*(_QWORD *)(v4 + 496) + v16 * *(unsigned int *)(v4 + 64));
            if ( (*(_BYTE *)i & 1) != 0 )
              goto LABEL_49;
            v111 = v182;
            v109 = v174;
          }
          v37 = 0LL;
          if ( (v116 & 0x1E) != 0 )
          {
            v118 = 2;
            goto LABEL_323;
          }
          if ( v114->QuantumEnd )
          {
            v118 = 3;
            goto LABEL_323;
          }
          NextThread = v114->NextThread;
          if ( NextThread && NextThread != v114->CurrentThread )
          {
            v118 = 4;
            goto LABEL_323;
          }
LABEL_316:
          if ( v115 <= 7 )
            goto LABEL_327;
          if ( !(_DWORD)v37 )
          {
LABEL_322:
            _disable();
            v114->DpcWatchdogCount = 0;
            v114->DpcTimeCount = 0;
            _enable();
            v118 = 0;
            goto LABEL_323;
          }
          goto LABEL_318;
        }
        v16 = v110 - 1;
LABEL_332:
        v11 = v168;
        goto LABEL_333;
      }
    }
    else
    {
      v37 = 0LL;
      if ( (DpcRequestSummary & 0x1E) != 0 )
      {
        v108 = 2;
        goto LABEL_305;
      }
      if ( CurrentPrcb->QuantumEnd )
      {
        v108 = 3;
        goto LABEL_305;
      }
      v152 = CurrentPrcb->NextThread;
      if ( v152 && v152 != CurrentPrcb->CurrentThread )
      {
        v108 = 4;
        goto LABEL_305;
      }
    }
    if ( DpcWatchdogCount <= 7 )
      goto LABEL_308;
    if ( !(_DWORD)v37 )
      goto LABEL_304;
    goto LABEL_300;
  }
  v11 = 1;
  v168 = 1;
LABEL_198:
  if ( v25 )
    MiFlushTbList(v25, *((_QWORD *)&v36 + 1), v37);
  if ( v192[0] )
  {
    MiFreeWsleList(v5, v192, 0LL);
    v192[0] = 0;
  }
  MiUnlockWorkingSetExclusive(v5, a2, v37);
  a2 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v5);
  if ( v11 != 1 )
  {
    v110 = *(_QWORD *)(v4 + 8);
    v111 = *(_QWORD *)(v4 + 16);
    v112 = *(_QWORD *)(v5 + 120);
    if ( v16 < v110 )
      v16 = *(_QWORD *)(v4 + 8);
    v182 = *(_QWORD *)(v4 + 16);
    v176 = v110;
    if ( v16 > v111 )
      v16 = v110;
    if ( v112 > v110 )
    {
      v113 = (v112 - v110) * v179;
      v36 = v113 * (unsigned __int128)0x624DD2F1A9FBE77uLL;
      v20 = v113 / 0x3E8;
      v183 = v20;
      goto LABEL_209;
    }
  }
LABEL_333:
  if ( v25 )
  {
    MiFlushTbList(v25, *((_QWORD *)&v36 + 1), v37);
    v154 = v175;
    if ( v25 == (_BYTE *)(v175 + 136) )
    {
      _InterlockedAnd((volatile signed __int32 *)(v175 + 132), 0);
    }
    else if ( v25 != v193 )
    {
      ExFreePoolWithTag(v25, 0);
    }
  }
  else
  {
    v154 = v175;
  }
  if ( v192[0] )
    MiFreeWsleList(v5, v192, 0LL);
  v6 = v170;
  v155 = v16 + 1;
  if ( (v170 & 2) != 0 )
    *(_QWORD *)(v4 + 48) = v155;
  else
    *(_QWORD *)(v4 + 40) = v155;
  v9 = v172;
  v7 = v171;
  if ( v11 == 1 )
    ++*(_DWORD *)(v154 + 2572);
LABEL_347:
  if ( hProvider )
  {
    v156 = *(_BYTE *)(v5 + 216) & 7;
    if ( v156 )
    {
      v158 = 0LL;
      v157 = 0;
      if ( v156 < 2u )
        v157 = *(_DWORD *)(v5 - 2960);
    }
    else
    {
      v157 = *(_DWORD *)(v5 - 536);
      v158 = (const CHAR *)(v5 - 176);
    }
    if ( hProvider->LevelPlus1 > 5
      && (hProvider->KeywordAny & 1) != 0
      && (hProvider->KeywordAll & 1) == hProvider->KeywordAll )
    {
      v191 = v177;
      v188 = v178;
      v166 = v156;
      v195 = (char *)&v166;
      v180 = v157;
      v189 = v9;
      v190 = v7;
      v184 = v6;
      v196 = 1LL;
      TlgCreateSz(&pDesc, v158);
      v199 = 4LL;
      v200 = &v189;
      v198 = &v180;
      v202 = &v190;
      v204 = &v191;
      v206 = &v188;
      v208 = &v184;
      v201 = 8LL;
      v203 = 8LL;
      v205 = 8LL;
      v207 = 8LL;
      v209 = 4LL;
      TlgWriteEx(v159, &unk_1402544CF, 0LL, 1u, pActivityId, pActivityId, 0xAu, &pData);
    }
  }
  return v11;
}
