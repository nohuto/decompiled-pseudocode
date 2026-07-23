/*
 * XREFs of MiAgeWorkingSet @ 0x140046C10
 * Callers:
 *     MiTrimOrAgeWorkingSet @ 0x1400CBB40 (MiTrimOrAgeWorkingSet.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiLogPageAccess @ 0x1400484C0 (MiLogPageAccess.c)
 *     MiCompressTbFlushList @ 0x140096CF0 (MiCompressTbFlushList.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiInsertWsle @ 0x1400DFF30 (MiInsertWsle.c)
 *     MiRemoveEntryWsle @ 0x1400E0420 (MiRemoveEntryWsle.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     MiVolunteerForTrimFirst @ 0x1400E3E30 (MiVolunteerForTrimFirst.c)
 *     MiIsStoreProcess @ 0x14010AC04 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     _TlgCreateSz @ 0x1401CDD4C (_TlgCreateSz.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     _TlgWriteEx @ 0x1401E1128 (_TlgWriteEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 *     MiDemoteCombinedPte @ 0x1401F95DC (MiDemoteCombinedPte.c)
 *     EtwTraceShouldYieldProcessor @ 0x140225FE8 (EtwTraceShouldYieldProcessor.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall MiAgeWorkingSet(__int64 a1, char a2, int a3, unsigned __int64 a4)
{
  unsigned __int64 v4; // rbp
  ULONG_PTR *v5; // rbx
  __int64 v6; // r13
  char v7; // al
  int v8; // r15d
  __int64 v9; // r14
  ULONG_PTR v10; // r11
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rdi
  __int64 v13; // r12
  unsigned int v14; // esi
  unsigned __int64 v15; // rcx
  __int64 v16; // r8
  unsigned __int64 v17; // r10
  ULONG_PTR v18; // r13
  int *v19; // r15
  unsigned __int64 v20; // r12
  ULONG_PTR v21; // r10
  ULONG_PTR v22; // rdx
  ULONG_PTR i; // rdi
  unsigned __int16 v24; // ax
  __int64 v25; // r9
  int *v26; // rax
  bool v27; // zf
  char *v28; // r8
  unsigned __int64 v29; // r11
  char *v30; // rbx
  __int64 v31; // r9
  __int64 v32; // r10
  __int64 v33; // r10
  int v34; // eax
  int v35; // ebx
  int *PoolWithTag; // rax
  unsigned __int8 v37; // al
  int v38; // eax
  __int64 v39; // r12
  unsigned __int64 v40; // r12
  unsigned __int64 *v41; // r12
  __int64 v42; // rax
  __int64 v43; // rbx
  __int64 v44; // rsi
  __int64 v45; // r9
  __int64 v46; // r10
  unsigned __int64 v47; // r11
  unsigned __int16 v48; // ax
  int *v49; // rcx
  unsigned __int16 v50; // ax
  int *v51; // rax
  __int64 v52; // r8
  unsigned int v53; // r15d
  __int64 v54; // rax
  ULONG_PTR *v55; // rcx
  ULONG_PTR v56; // r14
  __int64 v57; // rcx
  __int64 v58; // r9
  __int64 v59; // r10
  __int64 v60; // rdx
  __int64 v61; // rbx
  unsigned __int64 v62; // rdx
  unsigned __int64 v63; // rcx
  ULONG_PTR v64; // rdx
  __int64 v65; // r11
  ULONG_PTR v66; // rcx
  unsigned __int64 v67; // r9
  ULONG_PTR *v68; // r10
  unsigned __int64 v69; // rdx
  __int64 v70; // rbx
  unsigned __int64 v71; // rcx
  unsigned __int64 v72; // rcx
  __int64 v73; // r11
  __int64 v74; // rcx
  __int64 v75; // rcx
  __int64 v76; // rax
  char v77; // al
  unsigned int v78; // eax
  __int64 v79; // r15
  int v80; // r14d
  int v81; // ebx
  __int64 v82; // rax
  __int64 v83; // rdx
  __int64 v84; // rcx
  int v85; // ebx
  ULONG_PTR *v86; // rcx
  ULONG_PTR v87; // rsi
  unsigned __int64 v88; // rcx
  __int64 v89; // r9
  __int64 v90; // r10
  unsigned __int64 v91; // rdx
  __int64 v92; // rbx
  unsigned __int64 v93; // rdx
  unsigned __int64 v94; // rcx
  __int64 v95; // r11
  ULONG_PTR v96; // rdx
  ULONG_PTR v97; // rcx
  unsigned __int64 v98; // rcx
  ULONG_PTR *v99; // r10
  unsigned __int64 v100; // r8
  __int64 v101; // rbx
  unsigned __int64 v102; // rdx
  unsigned __int64 v103; // rdx
  __int64 v104; // r11
  __int64 v105; // rdx
  __int64 v106; // rdx
  __int64 v107; // rax
  unsigned __int64 v108; // rbx
  unsigned __int64 v109; // rbx
  unsigned __int64 v110; // rbx
  __int64 v111; // rdi
  int v112; // edx
  char v113; // cl
  unsigned __int64 j; // rcx
  unsigned int v115; // r9d
  char *v116; // r10
  __int64 v117; // rax
  unsigned __int64 v118; // r8
  char *v119; // r8
  __int64 v120; // rax
  unsigned __int64 v121; // rdx
  __int64 v122; // rdx
  unsigned __int64 v123; // rax
  unsigned int v124; // eax
  unsigned __int64 v125; // rdx
  char v126; // al
  unsigned int v127; // r12d
  int v128; // r9d
  unsigned int v129; // r15d
  ULONG_PTR *v130; // rcx
  ULONG_PTR v131; // r14
  unsigned __int64 v132; // rcx
  __int64 v133; // r9
  __int64 v134; // r10
  unsigned __int64 v135; // rdx
  __int64 v136; // rbx
  unsigned __int64 v137; // rdx
  unsigned __int64 v138; // rcx
  ULONG_PTR v139; // rdx
  __int64 v140; // r11
  ULONG_PTR v141; // rcx
  unsigned __int64 v142; // r9
  ULONG_PTR *v143; // r10
  unsigned __int64 v144; // rdx
  __int64 v145; // rbx
  unsigned __int64 v146; // rcx
  unsigned __int64 v147; // rcx
  __int64 v148; // r11
  __int64 v149; // rcx
  __int64 v150; // rcx
  __int64 v151; // rax
  unsigned __int64 v152; // rdx
  unsigned __int8 v153; // cl
  unsigned __int8 v154; // r8
  __int64 v155; // rax
  unsigned int v156; // ebx
  char v157; // cl
  int v158; // ecx
  LONG *v159; // rax
  struct _KPRCB *v160; // rcx
  unsigned int v161; // esi
  volatile int v162; // r9d
  unsigned int v163; // edi
  int v164; // r8d
  _KTHREAD *v165; // rax
  ULONG_PTR v166; // r11
  __int64 v167; // rbx
  ULONG_PTR v168; // r10
  unsigned __int64 v169; // rax
  LONG *v170; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  int v172; // r8d
  unsigned int DpcWatchdogCount; // esi
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // edi
  unsigned int v176; // ebx
  _KTHREAD *NextThread; // rax
  __int64 v178; // rbx
  ULONG_PTR v179; // rax
  __int64 v180; // rcx
  unsigned __int8 v181; // dl
  int v182; // r8d
  const CHAR *v183; // r9
  TraceLoggingHProvider v184; // r10
  LPCGUID pActivityId; // r11
  char v187; // [rsp+60h] [rbp+0h] BYREF

  v4 = (unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL;
  v5 = &BugCheckParameter2;
  v6 = *(_QWORD *)(a1 + 16);
  v7 = *(_BYTE *)(a1 + 184) & 7;
  *(_DWORD *)(v4 + 24) = a3;
  v8 = a3;
  *(_BYTE *)(v4 + 2) = a2;
  v9 = a1;
  *(_QWORD *)(v4 + 16) = a1;
  *(_QWORD *)(v4 + 160) = v6;
  if ( v7 != 2 )
    v5 = (ULONG_PTR *)(v6 + 416);
  v10 = v5[1];
  v11 = *(_QWORD *)(a1 + 128);
  *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v5[2];
  *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = v5;
  v12 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = v10;
  v13 = 0LL;
  *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = 0LL;
  v14 = 0;
  *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
  if ( v11 > v10 )
  {
    if ( !(_DWORD)a4 )
      a4 = 10LL;
    v15 = v11 - v10;
    *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = a4;
    if ( (a3 & 2) != 0 )
    {
      v16 = *(unsigned int *)(v6 + 24);
      v17 = v16 + v15;
      *(_DWORD *)(v6 + 24) = (v16 + v15) % a4;
      v18 = *(_QWORD *)(v6 + 16);
    }
    else
    {
      v16 = *(unsigned int *)(v6 + 28);
      v17 = v16 + v15;
      *(_DWORD *)(v6 + 28) = (v16 + v15) % a4;
      v18 = *(_QWORD *)(v6 + 8);
    }
    v19 = 0LL;
    if ( v17 < v15 )
      v16 = 0LL;
    v20 = a4 * (v16 + v15) / 0x3E8;
    *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v20;
    if ( v20 > v15 )
    {
      v20 = v15 * a4 / 0x3E8;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v20;
    }
    v21 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
    if ( v18 > v21 || v18 < v10 )
      v18 = v10;
    v22 = v5[10];
    for ( i = v22 + v18 * *((unsigned int *)v5 + 8); (*(_BYTE *)i & 1) == 0; i = v22 + v18 * *((unsigned int *)v5 + 8) )
    {
      if ( ++v18 > v21 )
        v18 = v10;
    }
    v24 = *(_WORD *)(v9 + 164);
    v25 = qword_140327038;
    *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = 0;
    *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = 0;
    *(_BYTE *)v4 = 0;
    *(_BYTE *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = 0;
    if ( v24 == 1023 )
      v26 = MiSystemPartition;
    else
      v26 = *(int **)(v25 + 8LL * v24);
    v27 = (*(_BYTE *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) & 3) == 0;
    *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *((_QWORD *)v26 + 781);
    *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = v26;
    if ( v27 )
      goto LABEL_49;
    v28 = (char *)(v26 + 496);
    v29 = *((_QWORD *)v26 + 224) + *((_QWORD *)v26 + 232);
    v30 = (char *)(v26 + 546);
    v31 = 0LL;
    v32 = 0LL;
    if ( v26 + 496 < v26 + 546 )
    {
      if ( (v30 - v28 + 39) / 0x28uLL >= 2 )
      {
        do
        {
          v31 += *(_QWORD *)v28;
          v32 += *((_QWORD *)v28 + 5);
          v28 += 80;
        }
        while ( v28 < (char *)v26 + 2144 );
      }
      if ( v28 < v30 )
        v29 += *(_QWORD *)v28;
      v29 += v31 + v32;
    }
    v33 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    if ( v29 + *(_QWORD *)v30 < *(_QWORD *)(v33 + 80) )
    {
      if ( *(_BYTE *)(v9 + 186) != 2 )
      {
        v34 = 3;
        if ( v29 >= *(_QWORD *)(v33 + 72) )
          v34 = 5;
        *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30) = v34;
      }
      if ( !(unsigned int)MiIsStoreProcess(v9 - 1280) )
      {
        *(_BYTE *)v4 = *(_BYTE *)(v33 + 2362);
        *(_BYTE *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = *(_BYTE *)(v33 + 2363);
      }
    }
    if ( v20 > 0x100 )
    {
      v35 = 509;
      if ( v20 < 0x1FD )
        v35 = v20;
      PoolWithTag = (int *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)(v35 - 256) + 2072, 0x73576D4Du);
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = PoolWithTag;
      v19 = PoolWithTag;
      if ( PoolWithTag )
        goto LABEL_45;
      v33 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    }
    if ( _InterlockedCompareExchange((volatile signed __int32 *)(v33 + 132), 1, 0) )
    {
      v19 = (int *)(v4 + 368);
      v35 = 20;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = ((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                         + 368;
    }
    else
    {
      v19 = (int *)(v33 + 136);
      v35 = 256;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = v33 + 136;
    }
LABEL_45:
    v37 = *(_BYTE *)(v9 + 184) & 7;
    if ( v37 )
      v38 = v37 < 2u ? 2 : 0;
    else
      v38 = 1;
    *v19 = v38;
    v19[3] = 0;
    *((_WORD *)v19 + 2) = 0;
    *((_QWORD *)v19 + 2) = 0LL;
    v19[2] = v35;
    *((_QWORD *)v19 + 3) = 0LL;
LABEL_49:
    *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) = 0xF000000000000LL;
    *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) = 0xF0000000000000LL;
LABEL_50:
    if ( *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) >= v20 )
    {
LABEL_370:
      v12 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
      goto LABEL_371;
    }
    v39 = *(_QWORD *)i;
    if ( (*(_QWORD *)i & 0x800000000000LL) != 0 )
      v40 = v39 | 0xFFFF000000000000uLL;
    else
      v40 = v39 & 0xFFFFFFFFFFFFLL;
    v41 = (unsigned __int64 *)(((v40 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
    v42 = MI_READ_PTE_LOCK_FREE(v41);
    *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = v42;
    LOBYTE(v43) = v42;
    v44 = MI_GET_PFN_FROM_PTE(v4 + 144);
    if ( (*(_BYTE *)(v9 + 184) & 7) == 2 )
    {
      v48 = *(_WORD *)(v9 + 164);
      v49 = v48 == 1023 ? MiSystemPartition : *(int **)(v45 + 8LL * v48);
      v50 = ((unsigned int)HIDWORD(*(_QWORD *)(v44 + 40)) >> 8) & 0x3FF;
      v51 = v50 == 1023 ? MiSystemPartition : *(int **)(v45 + 8LL * v50);
      if ( v49 != v51 )
        goto LABEL_289;
    }
    v52 = *(_QWORD *)(v44 + 8);
    if ( (v52 & v46) == 0 )
    {
      if ( (unsigned int)MiDemoteCombinedPte(v9, v41, v46 | v52) == 1 )
      {
        v43 = MI_READ_PTE_LOCK_FREE(v41);
        *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x90) = v43;
      }
      v47 = 0xFFFFF68000000000uLL;
    }
    v53 = (*(_DWORD *)i >> 9) & 7;
    if ( (v43 & 0x20) != 0 )
    {
      v54 = v53 - 1;
      if ( (unsigned int)v54 <= 5 )
      {
        --*(_QWORD *)(v9 + 8 * v54 + 40);
        v53 = 0;
        if ( (*(_BYTE *)(v9 + 184) & 7) == 2 )
          v55 = &BugCheckParameter2;
        else
          v55 = (ULONG_PTR *)(*(_QWORD *)(v9 + 16) + 416LL);
        if ( *((_DWORD *)v55 + 8) == 16 )
        {
          v56 = v55[10];
          if ( (__int64)(i - v56) >> 4 >= v55[1] )
          {
            v57 = *(_QWORD *)i;
            v58 = *(unsigned int *)(i + 8) | (*(_QWORD *)i >> 16) & 0xF00000000LL;
            v59 = *(unsigned int *)(i + 12) | (*(_QWORD *)i >> 20) & 0xF00000000LL;
            v60 = *(_QWORD *)i;
            v61 = 2 * ((unsigned int)(*(_QWORD *)i >> 9) & 7);
            if ( (*(_QWORD *)i & 0x800000000000LL) != 0 )
              v62 = v60 | 0xFFFF000000000000uLL;
            else
              v62 = v60 & 0xFFFFFFFFFFFFLL;
            if ( v62 < v47
              || ((*(_QWORD *)i & 0x800000000000LL) == 0
                ? (v63 = v57 & 0xFFFFFFFFFFFFLL)
                : (v63 = v57 | 0xFFFF000000000000uLL),
                  v63 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v61 = (unsigned int)(v61 + 1);
            }
            v64 = v56 + 16 * v58;
            v65 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 16LL);
            v66 = v56 + 16 * v59;
            if ( v59 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v65 + 16 * (v61 + 10)) = v58;
            }
            else
            {
              *(_DWORD *)(v66 + 8) = *(_DWORD *)(i + 8);
              *(_QWORD *)v66 ^= *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) & (*(_QWORD *)v66 ^ (v58 << 16));
            }
            if ( v58 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v65 + 16 * (v61 + 10) + 8) = v59;
            }
            else
            {
              *(_DWORD *)(v64 + 12) = v59;
              *(_QWORD *)v64 ^= (*(_QWORD *)v64 ^ (v59 << 20)) & 0xF0000000000000LL;
            }
            --*(_QWORD *)(v65 + 8 * v61 + 32);
          }
          v9 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        }
        *(_QWORD *)i &= 0xFFFFFFFFFFFFF1FFuLL;
        v67 = *(_QWORD *)i;
        if ( (*(_BYTE *)(v9 + 184) & 7) == 2 )
          v68 = &BugCheckParameter2;
        else
          v68 = (ULONG_PTR *)(*(_QWORD *)(v9 + 16) + 416LL);
        if ( *((_DWORD *)v68 + 8) == 16 )
        {
          v69 = (__int64)(i - v68[10]) >> 4;
          if ( v69 >= v68[1] )
          {
            v70 = 2 * ((unsigned int)(v67 >> 9) & 7);
            if ( (v67 & 0x800000000000LL) != 0 )
              v71 = v67 | 0xFFFF000000000000uLL;
            else
              v71 = *(_QWORD *)i & 0xFFFFFFFFFFFFLL;
            if ( v71 < 0xFFFFF68000000000uLL
              || ((v67 & 0x800000000000LL) == 0
                ? (v72 = *(_QWORD *)i & 0xFFFFFFFFFFFFLL)
                : (v72 = v67 | 0xFFFF000000000000uLL),
                  v72 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v70 = (unsigned int)(v70 + 1);
            }
            v73 = *(_QWORD *)(v9 + 16);
            v74 = *(_QWORD *)(v73 + 16 * (v70 + 10) + 8);
            *(_DWORD *)(i + 8) = -1;
            *(_DWORD *)(i + 12) = v74;
            *(_QWORD *)i = v67 ^ *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) & (v67 ^ (v74 << 20)) | 0xF000000000000LL;
            if ( v74 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v73 + 16 * (v70 + 10)) = v69;
            }
            else
            {
              v75 = v68[10] + 16 * v74;
              v76 = (*(_QWORD *)v75 ^ (v69 << 16)) & 0xF000000000000LL;
              *(_DWORD *)(v75 + 8) = v69;
              *(_QWORD *)v75 ^= v76;
            }
            *(_QWORD *)(v73 + 16 * (v70 + 10) + 8) = v69;
            ++*(_QWORD *)(v73 + 8 * v70 + 32);
          }
        }
      }
      if ( (*(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18) & 3) != 0 )
      {
        if ( v53 != 7 )
        {
          v77 = *(_BYTE *)(v44 + 35);
          v78 = (v77 & 8) != 0 ? 5 : v77 & 7;
          if ( v78 < 5 )
          {
            *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = 0;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
            {
              do
                KeYieldProcessorEx((_DWORD *)(v4 + 80));
              while ( (*(_QWORD *)(v44 + 24) & 0x8000000000000000uLL) != 0 );
            }
            *(_BYTE *)(v44 + 35) ^= (*(_BYTE *)(v44 + 35) ^ 5) & 7;
            _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        v79 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v80 = dword_1403271C8;
        v81 = 0;
        if ( (*(_BYTE *)(v79 + 184) & 7) != 0 )
        {
          *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x54) = 0;
          v81 = 1;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx((_DWORD *)(v4 + 84));
              while ( (*(_QWORD *)(v44 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v44 + 24), 0x3FuLL) );
            v79 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          }
          if ( (*(_QWORD *)(v44 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && (*(_QWORD *)(v44 + 40) & 0x200000000000000LL) == 0
            || (*(_BYTE *)(v79 + 184) & 7) != 0 && *(_WORD *)(v44 + 32) > 1u )
          {
            goto LABEL_210;
          }
        }
        if ( *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
        {
          v82 = MI_READ_PTE_LOCK_FREE(v41);
          *v41 = v82 & 0xFFFFFFFFFFFFFFDFuLL;
          if ( (unsigned int)MiPteInShadowRange(v41, v82 & 0xFFFFFFFFFFFFFFDFuLL) )
            MiWritePteShadow(v84, v83);
          if ( v81 == 1 )
            _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v85 = (*(_DWORD *)i >> 9) & 7;
          if ( v80 && v85 != 7 )
            MiLogPageAccess(v79, v41);
          if ( !v85 )
          {
            if ( (*(_BYTE *)(v79 + 184) & 7) == 2 )
              v86 = &BugCheckParameter2;
            else
              v86 = (ULONG_PTR *)(*(_QWORD *)(v79 + 16) + 416LL);
            if ( *((_DWORD *)v86 + 8) == 16 )
            {
              v87 = v86[10];
              if ( (__int64)(i - v87) >> 4 >= v86[1] )
              {
                v88 = *(_QWORD *)i;
                v89 = *(unsigned int *)(i + 8) | (*(_QWORD *)i >> 16) & 0xF00000000LL;
                v90 = *(unsigned int *)(i + 12) | (*(_QWORD *)i >> 20) & 0xF00000000LL;
                v91 = *(_QWORD *)i;
                v92 = 2 * ((unsigned int)(*(_QWORD *)i >> 9) & 7);
                if ( (*(_QWORD *)i & 0x800000000000LL) != 0 )
                  v93 = v91 | 0xFFFF000000000000uLL;
                else
                  v93 = v91 & 0xFFFFFFFFFFFFLL;
                if ( v93 < 0xFFFFF68000000000uLL
                  || ((*(_QWORD *)i & 0x800000000000LL) == 0
                    ? (v94 = v88 & 0xFFFFFFFFFFFFLL)
                    : (v94 = v88 | 0xFFFF000000000000uLL),
                      v94 > 0xFFFFF6FFFFFFFFFFuLL) )
                {
                  v92 = (unsigned int)(v92 + 1);
                }
                v95 = *(_QWORD *)(v79 + 16);
                v96 = v87 + 16 * v89;
                v97 = v87 + 16 * v90;
                if ( v90 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v95 + 16 * (v92 + 10)) = v89;
                }
                else
                {
                  *(_DWORD *)(v97 + 8) = *(_DWORD *)(i + 8);
                  *(_QWORD *)v97 ^= (*(_QWORD *)v97 ^ (v89 << 16)) & 0xF000000000000LL;
                }
                if ( v89 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v95 + 16 * (v92 + 10) + 8) = v90;
                }
                else
                {
                  *(_DWORD *)(v96 + 12) = v90;
                  *(_QWORD *)v96 ^= (*(_QWORD *)v96 ^ (v90 << 20)) & 0xF0000000000000LL;
                }
                --*(_QWORD *)(v95 + 8 * v92 + 32);
              }
            }
            v98 = *(_QWORD *)i & 0xFFFFFFFFFFFFF1FFuLL | 0x200;
            *(_QWORD *)i = v98;
            if ( (*(_BYTE *)(v79 + 184) & 7) == 2 )
              v99 = &BugCheckParameter2;
            else
              v99 = (ULONG_PTR *)(*(_QWORD *)(v79 + 16) + 416LL);
            if ( *((_DWORD *)v99 + 8) == 16 )
            {
              v100 = (__int64)(i - v99[10]) >> 4;
              if ( v100 >= v99[1] )
              {
                v101 = 2 * ((unsigned int)(v98 >> 9) & 7);
                if ( (v98 & 0x800000000000LL) != 0 )
                  v102 = v98 | 0xFFFF000000000000uLL;
                else
                  v102 = v98 & 0xFFFFFFFFFFFFLL;
                if ( v102 < 0xFFFFF68000000000uLL
                  || ((v98 & 0x800000000000LL) == 0
                    ? (v103 = v98 & 0xFFFFFFFFFFFFLL)
                    : (v103 = v98 | 0xFFFF000000000000uLL),
                      v103 > 0xFFFFF6FFFFFFFFFFuLL) )
                {
                  v101 = (unsigned int)(v101 + 1);
                }
                v104 = *(_QWORD *)(v79 + 16);
                v105 = *(_QWORD *)(v104 + 16 * (v101 + 10) + 8);
                *(_DWORD *)(i + 8) = -1;
                *(_DWORD *)(i + 12) = v105;
                *(_QWORD *)i = v98 ^ (v98 ^ (v105 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
                if ( v105 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v104 + 16 * (v101 + 10)) = v100;
                }
                else
                {
                  v106 = v99[10] + 16 * v105;
                  v107 = (*(_QWORD *)v106 ^ (v100 << 16)) & 0xF000000000000LL;
                  *(_DWORD *)(v106 + 8) = v100;
                  *(_QWORD *)v106 ^= v107;
                }
                *(_QWORD *)(v104 + 16 * (v101 + 10) + 8) = v100;
                ++*(_QWORD *)(v104 + 8 * v101 + 32);
              }
            }
            ++*(_QWORD *)(v79 + 40);
          }
          v108 = *(_QWORD *)i;
          if ( (*(_QWORD *)i & 0x800000000000LL) != 0 )
            v109 = v108 | 0xFFFF000000000000uLL;
          else
            v109 = v108 & 0xFFFFFFFFFFFFLL;
          v19 = *(int **)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          v110 = v109 & 0xFFFFFFFFFFFFF000uLL;
          v111 = 1LL;
          v112 = *v19;
          if ( *v19 != 1 )
          {
            v113 = *((_BYTE *)v19 + 4);
            if ( (v113 & 4) == 0 && v110 >= 0xFFFFF68000000000uLL && v110 <= 0xFFFFF6FFFFFFFFFFuLL )
              *((_BYTE *)v19 + 4) = v113 | 4;
            if ( v112 )
            {
              for ( j = v110; j >= 0xFFFFF68000000000uLL; j = (__int64)(j << 25) >> 16 )
              {
                if ( j > 0xFFFFF6FFFFFFFFFFuLL )
                  break;
              }
            }
          }
          v115 = v19[3];
          if ( !v115 )
            goto LABEL_199;
          v116 = (char *)&v19[2 * v115 - 2];
          v117 = *((_QWORD *)v116 + 3);
          if ( (v117 & 0xC00) == 0 )
          {
            v118 = *((_QWORD *)v116 + 3) & 0x3FFLL;
            if ( (*((_QWORD *)v116 + 3) & 0xFFFFFFFFFFFFF000uLL) + ((v118 + 1) << 12) == v110
              && v118 + 1 >= v118
              && v118 + 1 <= 0x3FF )
            {
              ++*((_QWORD *)v19 + 2);
              *((_QWORD *)v116 + 3) = (v117 ^ (v117 + 1)) & 0x3FF ^ v117;
              goto LABEL_212;
            }
          }
          v119 = (char *)&v19[2 * v115 - 2];
          v120 = *((_QWORD *)v119 + 3);
          if ( (v120 & 0xC00) != 0
            || (v120 & 0xFFFFFFFFFFFFF000uLL) != v110 + 4096
            || (v121 = (*((_QWORD *)v119 + 3) & 0x3FFLL) + 1, v121 <= (*((_QWORD *)v119 + 3) & 0x3FFuLL))
            || v121 > 0x3FF )
          {
LABEL_199:
            if ( v115 < v19[2] )
            {
              while ( 1 )
              {
                v122 = 1024LL;
                if ( (unsigned __int64)(v111 - 1) <= 0x3FF )
                  v122 = v111;
                v111 -= v122;
                v123 = v110 & 0xFFFFFFFFFFFFF000uLL | (v122 - 1) & 0x3FF;
                v110 += v122 << 12;
                *(_QWORD *)&v19[2 * v19[3]++ + 6] = v123;
                v124 = v19[3];
                *((_QWORD *)v19 + 2) += v122;
                if ( v124 == v19[2] )
                {
                  qsort(v19 + 6, v124, 8uLL, MiTbFlushSort);
                  MiCompressTbFlushList(v19);
                  if ( v19[3] == v19[2] )
                    break;
                }
                if ( !v111 )
                  goto LABEL_212;
              }
              if ( v111 )
              {
                *((_QWORD *)v19 + 2) = (unsigned int)v19[3];
                *((_BYTE *)v19 + 5) = 1;
              }
            }
            else
            {
              *((_BYTE *)v19 + 5) = 1;
            }
            goto LABEL_212;
          }
          ++*((_QWORD *)v19 + 2);
          *((_QWORD *)v119 + 3) = ((v120 - 4096) ^ (v120 - 4096 + 1)) & 0x3FF ^ (v120 - 4096);
LABEL_212:
          ++*(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88);
          v125 = qword_140326A58;
          if ( (v19[1] & 2) == 0 && KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[14] )
            v125 = -1LL;
          if ( (v19[3] >= (unsigned int)v19[2] || *((_BYTE *)v19 + 5) || *((_QWORD *)v19 + 2) > v125)
            && v125 >= 0x400
            && !*((_BYTE *)v19 + 5) )
          {
            MiFlushTbList(v19);
          }
          v9 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
          goto LABEL_289;
        }
        if ( v81 == 1 )
LABEL_210:
          _InterlockedAnd64((volatile signed __int64 *)(v44 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v19 = *(int **)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
        goto LABEL_212;
      }
    }
    else
    {
      v126 = *(_BYTE *)(v44 + 35);
      if ( (v126 & 8) != 0 )
        v127 = 5;
      else
        v127 = v126 & 7;
      if ( v53 < 6 && v127 < 5 )
      {
        if ( v53 )
          --*(_QWORD *)(v9 + 8LL * (v53 - 1) + 40);
        ++*(_QWORD *)(v9 + 80);
        v53 = 6;
        MiRemoveEntryWsle(v9, i);
        *(_QWORD *)i = *(_QWORD *)i & 0xFFFFFFFFFFFFF1FFuLL | 0xC00;
        MiInsertWsle(v9, i, 0LL);
        ++*(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
      }
      v128 = *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      if ( (v128 & 1) != 0 && v53 < 6 )
      {
        if ( v53 )
          --*(_QWORD *)(v9 + 8LL * (v53 - 1) + 40);
        v129 = v53 + 1;
        ++*(_QWORD *)(v9 + 8LL * (v129 - 1) + 40);
        if ( (*(_BYTE *)(v9 + 184) & 7) == 2 )
          v130 = &BugCheckParameter2;
        else
          v130 = (ULONG_PTR *)(*(_QWORD *)(v9 + 16) + 416LL);
        if ( *((_DWORD *)v130 + 8) == 16 )
        {
          v131 = v130[10];
          if ( (__int64)(i - v131) >> 4 >= v130[1] )
          {
            v132 = *(_QWORD *)i;
            v133 = *(unsigned int *)(i + 8) | (*(_QWORD *)i >> 16) & 0xF00000000LL;
            v134 = *(unsigned int *)(i + 12) | (*(_QWORD *)i >> 20) & 0xF00000000LL;
            v135 = *(_QWORD *)i;
            v136 = 2 * ((unsigned int)(*(_QWORD *)i >> 9) & 7);
            if ( (*(_QWORD *)i & 0x800000000000LL) != 0 )
              v137 = v135 | 0xFFFF000000000000uLL;
            else
              v137 = v135 & 0xFFFFFFFFFFFFLL;
            if ( v137 < 0xFFFFF68000000000uLL
              || ((*(_QWORD *)i & 0x800000000000LL) == 0
                ? (v138 = v132 & 0xFFFFFFFFFFFFLL)
                : (v138 = v132 | 0xFFFF000000000000uLL),
                  v138 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v136 = (unsigned int)(v136 + 1);
            }
            v139 = v131 + 16 * v133;
            v140 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) + 16LL);
            v141 = v131 + 16 * v134;
            if ( v134 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v140 + 16 * (v136 + 10)) = v133;
            }
            else
            {
              *(_DWORD *)(v141 + 8) = *(_DWORD *)(i + 8);
              *(_QWORD *)v141 ^= *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98) & (*(_QWORD *)v141 ^ (v133 << 16));
            }
            if ( v133 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v140 + 16 * (v136 + 10) + 8) = v134;
            }
            else
            {
              *(_DWORD *)(v139 + 12) = v134;
              *(_QWORD *)v139 ^= (*(_QWORD *)v139 ^ (v134 << 20)) & 0xF0000000000000LL;
            }
            --*(_QWORD *)(v140 + 8 * v136 + 32);
          }
          v9 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        }
        *(_QWORD *)i ^= (*(_DWORD *)i ^ (v129 << 9)) & 0xE00;
        v142 = *(_QWORD *)i;
        if ( (*(_BYTE *)(v9 + 184) & 7) == 2 )
          v143 = &BugCheckParameter2;
        else
          v143 = (ULONG_PTR *)(*(_QWORD *)(v9 + 16) + 416LL);
        if ( *((_DWORD *)v143 + 8) == 16 )
        {
          v144 = (__int64)(i - v143[10]) >> 4;
          if ( v144 >= v143[1] )
          {
            v145 = 2 * ((unsigned int)(v142 >> 9) & 7);
            if ( (v142 & 0x800000000000LL) != 0 )
              v146 = v142 | 0xFFFF000000000000uLL;
            else
              v146 = v142 & 0xFFFFFFFFFFFFLL;
            if ( v146 < 0xFFFFF68000000000uLL
              || ((v142 & 0x800000000000LL) == 0
                ? (v147 = v142 & 0xFFFFFFFFFFFFLL)
                : (v147 = v142 | 0xFFFF000000000000uLL),
                  v147 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v145 = (unsigned int)(v145 + 1);
            }
            v148 = *(_QWORD *)(v9 + 16);
            v149 = *(_QWORD *)(v148 + 16 * (v145 + 10) + 8);
            *(_DWORD *)(i + 8) = -1;
            *(_DWORD *)(i + 12) = v149;
            *(_QWORD *)i = v142 ^ (v142 ^ (v149 << 20)) & 0xF0000000000000LL | 0xF000000000000LL;
            if ( v149 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v148 + 16 * (v145 + 10)) = v144;
            }
            else
            {
              v150 = v143[10] + 16 * v149;
              v151 = (*(_QWORD *)v150 ^ (v144 << 16)) & 0xF000000000000LL;
              *(_DWORD *)(v150 + 8) = v144;
              *(_QWORD *)v150 ^= v151;
            }
            *(_QWORD *)(v148 + 16 * (v145 + 10) + 8) = v144;
            ++*(_QWORD *)(v148 + 8 * v145 + 32);
          }
        }
        ++*(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
        v128 = *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      }
      v152 = *(_QWORD *)(v44 + 40);
      v153 = *(_BYTE *)v4;
      if ( (v152 & 0x200000000000000LL) != 0 )
        v153 = *(_BYTE *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
      v154 = v153;
      if ( !v153 )
        v154 = 7;
      if ( (*(_BYTE *)(v9 + 184) & 7) == 3
        && ((v152 >> 54) & 7) == 4
        && (*(_QWORD *)(v44 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1
        && *(_WORD *)(v44 + 32) == 1
        || (v128 & 3) != 0
        && (((*(_DWORD *)i >> 9) & 7u) >= (unsigned __int64)v154
         || v127 < *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30)) )
      {
        v155 = *(unsigned int *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0);
        ++*(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80);
        *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD8 + 8 * v155) = v18;
        LODWORD(v155) = *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) + 1;
        *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = v155;
        if ( (_DWORD)v155 == 19 )
        {
          MiFreeWsleList(v9, v4 + 208, 0LL);
          v19 = *(int **)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
          v156 = 0;
          *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = 0;
LABEL_290:
          v12 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) + 1LL;
          v157 = *(_BYTE *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) + 1;
          *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = v12;
          v158 = v157 & 0x3F;
          if ( !v158
            && *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) + 6464LL) < 0x420uLL )
          {
            v14 = 1;
            *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 1;
            goto LABEL_320;
          }
          v14 = *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
          if ( v14 == 1 )
          {
LABEL_320:
            if ( v19 )
              MiFlushTbList(v19);
            if ( *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) )
            {
              MiFreeWsleList(v9, v4 + 208, 0LL);
              *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) = 0;
            }
            MiRelockWorkingSetExclusive(v9, *(unsigned __int8 *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 2));
            if ( v14 != 1 )
            {
              v167 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
              v169 = *(_QWORD *)(v9 + 128);
              v166 = *(_QWORD *)(v167 + 8);
              v168 = *(_QWORD *)(v167 + 16);
              *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v168;
              if ( v18 < v166 )
                v18 = v166;
              *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = v166;
              if ( v18 > v168 )
                v18 = v166;
              if ( v169 > v166 )
              {
                v20 = (v169 - v166)
                    * *(unsigned int *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58)
                    / 0x3E8;
                *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v20;
LABEL_331:
                if ( v12 < v20 || *(_QWORD *)(v9 + 128) != v166 )
                {
                  while ( 1 )
                  {
                    if ( ++v18 > v168 )
                      v18 = v166;
                    if ( (v18 & 0x3F) == 0
                      && *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) + 6464LL) < 0x420uLL )
                    {
                      v14 = 1;
                      goto LABEL_370;
                    }
                    if ( (v18 & 0x3F) == 0 )
                    {
                      v170 = &dword_140327CC0;
                      if ( (*(_BYTE *)(v9 + 184) & 7) != 2 )
                        v170 = (LONG *)(v9 + 192);
                      if ( (*v170 & 0x40000000) != 0 )
                        goto LABEL_365;
                    }
                    CurrentPrcb = KeGetCurrentPrcb();
                    v172 = 1;
                    DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
                    DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
                    DpcTimeCount = CurrentPrcb->DpcTimeCount;
                    if ( (DpcRequestSummary & 1) == 0 )
                      break;
                    if ( DpcTimeCount <= 7 )
                      goto LABEL_352;
                    if ( CurrentPrcb->QuantumEnd )
                    {
                      v176 = 1;
                      goto LABEL_359;
                    }
LABEL_354:
                    if ( (DpcRequestSummary & 0x1E) != 0 )
                    {
                      v176 = 5;
                    }
                    else
                    {
                      if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
                        goto LABEL_358;
                      v176 = 6;
                    }
LABEL_359:
                    if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                      EtwTraceShouldYieldProcessor(v176, DpcWatchdogCount, DpcTimeCount);
                    if ( v176 )
                    {
                      v14 = *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
                      v12 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
                      goto LABEL_320;
                    }
                    v166 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78);
                    v167 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
                    v168 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
LABEL_363:
                    i = *(_QWORD *)(v167 + 80) + v18 * *(unsigned int *)(v167 + 32);
                    if ( (*(_BYTE *)i & 1) != 0 )
                    {
                      v14 = *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
                      goto LABEL_50;
                    }
                  }
                  v172 = 0;
                  if ( (DpcRequestSummary & 0x1E) != 0 )
                  {
                    v176 = 2;
                    goto LABEL_359;
                  }
                  if ( CurrentPrcb->QuantumEnd )
                  {
                    v176 = 3;
                    goto LABEL_359;
                  }
                  NextThread = CurrentPrcb->NextThread;
                  if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
                  {
                    v176 = 4;
                    goto LABEL_359;
                  }
LABEL_352:
                  if ( DpcWatchdogCount <= 7 )
                    goto LABEL_363;
                  if ( !v172 )
                  {
LABEL_358:
                    _disable();
                    v176 = 0;
                    CurrentPrcb->DpcWatchdogCount = 0;
                    CurrentPrcb->DpcTimeCount = 0;
                    KiResetGlobalDpcWatchdogProfiler();
                    _enable();
                    goto LABEL_359;
                  }
                  goto LABEL_354;
                }
                v18 = v166 - 1;
              }
            }
LABEL_371:
            if ( v19 )
            {
              MiFlushTbList(v19);
              v178 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
              if ( v19 == (int *)(v178 + 136) )
              {
                _InterlockedAnd((volatile signed __int32 *)(v178 + 132), 0);
              }
              else if ( v19 != (int *)(v4 + 368) )
              {
                ExFreePoolWithTag(v19, 0);
              }
            }
            else
            {
              v178 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
            }
            if ( *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xD0) )
              MiFreeWsleList(v9, v4 + 208, 0LL);
            v8 = *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
            v179 = v18 + 1;
            v180 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0);
            if ( (v8 & 2) != 0 )
              *(_QWORD *)(v180 + 16) = v179;
            else
              *(_QWORD *)(v180 + 8) = v179;
            v13 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28);
            if ( v14 == 1 )
              ++*(_DWORD *)(v178 + 2572);
            goto LABEL_384;
          }
          if ( !v158 )
          {
            v159 = &dword_140327CC0;
            if ( (*(_BYTE *)(v9 + 184) & 7) != 2 )
              v159 = (LONG *)(v9 + 192);
            if ( (*v159 & 0x40000000) != 0 )
            {
LABEL_366:
              v14 = *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
              goto LABEL_320;
            }
          }
          v160 = KeGetCurrentPrcb();
          v161 = v160->DpcWatchdogCount;
          v162 = v160->DpcRequestSummary;
          v163 = v160->DpcTimeCount;
          if ( (v162 & 1) != 0 )
          {
            v164 = 1;
            if ( v163 > 7 )
            {
              if ( v160->QuantumEnd )
              {
                v156 = 1;
LABEL_316:
                if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
                  EtwTraceShouldYieldProcessor(v156, v161, v163);
                if ( !v156 )
                  goto LABEL_319;
LABEL_365:
                v12 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
                goto LABEL_366;
              }
LABEL_311:
              if ( (v162 & 0x1E) != 0 )
              {
                v156 = 5;
                goto LABEL_316;
              }
              if ( v160->CurrentThread != v160->IdleThread )
              {
                v156 = 6;
                goto LABEL_316;
              }
LABEL_315:
              _disable();
              v160->DpcWatchdogCount = 0;
              v160->DpcTimeCount = 0;
              KiResetGlobalDpcWatchdogProfiler();
              _enable();
              goto LABEL_316;
            }
          }
          else
          {
            v164 = 0;
            if ( (v162 & 0x1E) != 0 )
            {
              v156 = 2;
              goto LABEL_316;
            }
            if ( v160->QuantumEnd )
            {
              v156 = 3;
              goto LABEL_316;
            }
            v165 = v160->NextThread;
            if ( v165 && v165 != v160->CurrentThread )
            {
              v156 = 4;
              goto LABEL_316;
            }
          }
          if ( v161 <= 7 )
          {
LABEL_319:
            v20 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
            v166 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78);
            v167 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
            v168 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
            v14 = *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
            v12 = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
            goto LABEL_331;
          }
          if ( !v164 )
            goto LABEL_315;
          goto LABEL_311;
        }
      }
    }
    v19 = *(int **)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
LABEL_289:
    v156 = 0;
    goto LABEL_290;
  }
LABEL_384:
  if ( qword_1403277E0 )
  {
    v181 = *(_BYTE *)(v9 + 184) & 7;
    if ( v181 )
    {
      v183 = 0LL;
      v182 = 0;
      if ( v181 < 2u )
        v182 = *(_DWORD *)(v9 - 3000);
    }
    else
    {
      v182 = *(_DWORD *)(v9 - 536);
      v183 = (const CHAR *)(v9 - 176);
    }
    if ( qword_1403277E0->LevelPlus1 > 5
      && (qword_1403277E0->KeywordAny & 1) != 0
      && (qword_1403277E0->KeywordAll & 1) == qword_1403277E0->KeywordAll )
    {
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC0) = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                        + 0x80);
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC8) = *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                        + 0x88);
      *(_BYTE *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 3) = v181;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x250) = ((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 3;
      *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x5C) = v182;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = v12;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8) = v13;
      *(_DWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v8;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x258) = 1LL;
      TlgCreateSz((PEVENT_DATA_DESCRIPTOR)(v4 + 608), v183);
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x278) = 4LL;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x280) = ((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 176;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x270) = ((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 92;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x290) = ((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 184;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A0) = ((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 192;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2B0) = ((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 200;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C0) = ((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                             + 96;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x288) = 8LL;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x298) = 8LL;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2A8) = 8LL;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2B8) = 8LL;
      *(_QWORD *)(((unsigned __int64)&v187 & 0xFFFFFFFFFFFFFFE0uLL) + 0x2C8) = 4LL;
      TlgWriteEx(v184, &unk_14027C544, 0LL, 1u, pActivityId, pActivityId, 0xAu, (EVENT_DATA_DESCRIPTOR *)(v4 + 560));
    }
  }
  return v14;
}
