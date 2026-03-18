/*
 * XREFs of CcUnmapInactiveViews @ 0x140167FCC
 * Callers:
 *     MiObtainSystemCacheView @ 0x14003DD60 (MiObtainSystemCacheView.c)
 *     CcGetVacbMiss @ 0x14003F1B0 (CcGetVacbMiss.c)
 *     MiDereferenceSegmentThread @ 0x140167DD0 (MiDereferenceSegmentThread.c)
 *     MiRemoveUnusedSegments @ 0x140167F4C (MiRemoveUnusedSegments.c)
 * Callees:
 *     CcScheduleLazyWriteScan @ 0x140030E38 (CcScheduleLazyWriteScan.c)
 *     KeAcquireQueuedSpinLock @ 0x140041D50 (KeAcquireQueuedSpinLock.c)
 *     KeReleaseQueuedSpinLock @ 0x140041DC0 (KeReleaseQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     SetVacb @ 0x140078644 (SetVacb.c)
 *     CcGetVacbLargeOffset @ 0x1400855D0 (CcGetVacbLargeOffset.c)
 *     CcSetVacbInFreeList @ 0x140086BB4 (CcSetVacbInFreeList.c)
 *     CcDereferenceVacbArray @ 0x140086C14 (CcDereferenceVacbArray.c)
 *     ExpAcquireFastMutexContended @ 0x1400F2E54 (ExpAcquireFastMutexContended.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     CcReferenceVacbArray @ 0x14011A9DC (CcReferenceVacbArray.c)
 *     CcCanReuseVacb @ 0x1401DDEF0 (CcCanReuseVacb.c)
 *     CcGetRandomVacbArrayWithReference @ 0x1401DE088 (CcGetRandomVacbArrayWithReference.c)
 *     CcRecalculateVacbArrayHighwaterMark @ 0x1401DE120 (CcRecalculateVacbArrayHighwaterMark.c)
 *     CcReferenceSharedCacheMapByVacb @ 0x1401DE2D8 (CcReferenceSharedCacheMapByVacb.c)
 *     RtlRandomEx @ 0x1404A2FFC (RtlRandomEx.c)
 *     CcUnmapVacb @ 0x1404B2D44 (CcUnmapVacb.c)
 */

__int64 __fastcall CcUnmapInactiveViews(unsigned int a1, char a2, _QWORD *a3, __int64 a4)
{
  __int64 v4; // r12
  unsigned int v5; // esi
  __int64 RandomVacbArrayWithReference; // r13
  int v7; // r15d
  __int64 v8; // rbp
  unsigned int v9; // r14d
  bool v11; // bl
  unsigned int v12; // ebx
  KIRQL v13; // di
  _DWORD *v14; // rax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // rdi
  __int64 v18; // r10
  KIRQL v19; // si
  char CanReuseVacb; // al
  __int64 v21; // rbx
  __int64 v22; // rdi
  int v23; // r15d
  __int64 v24; // r9
  char v25; // r15
  __int64 v26; // rax
  __int64 v27; // rsi
  unsigned __int8 CurrentIrql; // r14
  int v29; // eax
  signed __int64 *v30; // rsi
  __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r9
  __int64 v34; // rbp
  int v35; // ebp
  __int64 v36; // rax
  __int64 VacbLargeOffset; // r14
  unsigned int v38; // ecx
  __int64 v39; // rdx
  signed __int64 v40; // rax
  signed __int64 v41; // rcx
  signed __int64 v42; // rtt
  unsigned __int8 v43; // si
  signed __int32 v44; // eax
  KIRQL v45; // al
  KIRQL v46; // bl
  KIRQL v47; // al
  bool v48; // zf
  KIRQL v49; // bl
  int v50; // ecx
  __int64 *v51; // rax
  __int64 *v52; // rdx
  __int64 **v53; // rcx
  __int64 **v54; // rcx
  __int64 *v55; // rdi
  __int64 v56; // rcx
  __int64 **v57; // rax
  __int64 **v58; // rax
  char v59; // r8
  __int64 *v60; // rax
  __int64 *v61; // rdx
  __int64 **v62; // rcx
  __int64 **v63; // rcx
  __int64 *v64; // rdi
  __int64 v65; // rdx
  __int64 **v66; // rax
  __int64 **v67; // rax
  signed __int64 v68; // rax
  signed __int64 v69; // rcx
  signed __int64 v70; // rtt
  unsigned __int8 v71; // si
  signed __int32 v72; // eax
  KIRQL v73; // al
  KIRQL v74; // bl
  int v75; // ecx
  __int64 *v76; // rax
  __int64 *v77; // rdx
  __int64 **v78; // rcx
  __int64 **v79; // rcx
  __int64 *v80; // rdi
  __int64 v81; // rcx
  __int64 **v82; // rax
  __int64 **v83; // rax
  char v84; // r8
  __int64 *v85; // rax
  __int64 *v86; // rdx
  __int64 **v87; // rcx
  __int64 **v88; // rcx
  __int64 *v89; // rdi
  __int64 v90; // rdx
  __int64 **v91; // rax
  __int64 **v92; // rax
  signed __int64 v93; // rax
  signed __int64 v94; // rcx
  signed __int64 v95; // rtt
  unsigned __int8 v96; // si
  signed __int32 v97; // eax
  KIRQL v98; // al
  KIRQL v99; // bl
  int v100; // ecx
  __int64 *v101; // rax
  __int64 *v102; // rdx
  __int64 **v103; // rcx
  __int64 **v104; // rcx
  __int64 *v105; // rdi
  __int64 v106; // rcx
  __int64 **v107; // rax
  __int64 **v108; // rax
  char v109; // r8
  __int64 *v110; // rax
  __int64 *v111; // rdx
  __int64 **v112; // rcx
  __int64 **v113; // rcx
  __int64 *v114; // rdi
  __int64 v115; // rdx
  __int64 **v116; // rax
  __int64 **v117; // rax
  __int64 v118; // r14
  int v119; // ebp
  __int64 v120; // rax
  __int64 v121; // rbx
  unsigned __int8 v122; // di
  int v123; // eax
  __int64 v124; // rdi
  unsigned __int8 v125; // bl
  signed __int32 v126; // eax
  __int64 v127; // r9
  __int64 v128; // rax
  __int64 v129; // rbx
  unsigned __int8 v130; // si
  unsigned __int8 v131; // bl
  signed __int32 v132; // eax
  unsigned int v133; // [rsp+20h] [rbp-68h]
  int v134; // [rsp+24h] [rbp-64h]
  unsigned int v135; // [rsp+28h] [rbp-60h]
  int v136; // [rsp+2Ch] [rbp-5Ch]
  int v137; // [rsp+30h] [rbp-58h]
  unsigned int v138; // [rsp+34h] [rbp-54h]
  __int64 v139; // [rsp+38h] [rbp-50h]
  unsigned int v140; // [rsp+90h] [rbp+8h]
  int v141; // [rsp+98h] [rbp+10h]
  bool v143; // [rsp+A8h] [rbp+20h]

  v140 = a1;
  LODWORD(v4) = -1;
  v133 = 0;
  v5 = 0;
  v138 = 0;
  RandomVacbArrayWithReference = 0LL;
  v134 = 0;
  v7 = 0;
  v137 = 0;
  v136 = 0;
  v8 = 0LL;
  v139 = 0LL;
  v9 = 0;
  v135 = 0;
  if ( a3 )
  {
    *a3 = 0LL;
    v137 = 1;
  }
  if ( !CcInitializationComplete || !CcNumberOfMappedVacbs )
    return 0LL;
  v141 = a2 & 1;
  v11 = v141 == 0;
  v143 = v11;
  while ( v5 < a1 && v9 <= CcVacbArraysHighestUsedIndex )
  {
    if ( RandomVacbArrayWithReference )
      goto LABEL_20;
    LODWORD(v4) = -1;
    if ( v11 )
    {
      RandomVacbArrayWithReference = CcGetRandomVacbArrayWithReference();
      goto LABEL_19;
    }
    v12 = v9;
    v13 = KeAcquireQueuedSpinLock(4uLL);
    while ( 1 )
    {
      v14 = CcReferenceVacbArray(v12);
      RandomVacbArrayWithReference = (__int64)v14;
      if ( v14 )
        break;
      if ( ++v12 >= 0x500 )
      {
        KeReleaseQueuedSpinLock(4uLL, v13);
        RandomVacbArrayWithReference = 0LL;
        goto LABEL_16;
      }
    }
    CcRecalculateVacbArrayHighwaterMark(v14);
    KeReleaseQueuedSpinLock(4uLL, v13);
LABEL_16:
    v11 = v143;
    v135 = ++v9;
    if ( RandomVacbArrayWithReference )
    {
LABEL_19:
      if ( *(_DWORD *)(RandomVacbArrayWithReference + 4) == 1 )
        goto LABEL_27;
LABEL_20:
      if ( v11 )
      {
        v15 = 0;
        while ( 1 )
        {
          v16 = RtlRandomEx(&CcRandomSeed) % (*(_DWORD *)(RandomVacbArrayWithReference + 8) + 1);
          v17 = RandomVacbArrayWithReference + 8 * ((unsigned int)v16 + 2LL + 4 * v16);
          if ( !(unsigned __int8)CcCanReuseVacb(v17, 0LL) )
          {
            ++v15;
            v17 = 0LL;
          }
          if ( v17 )
            break;
          if ( v15 > 0x10 )
          {
            ++CcDbgRandomFailed;
            v11 = 0;
            v143 = 0;
            goto LABEL_27;
          }
        }
        v11 = v143;
        goto LABEL_36;
      }
      if ( (_DWORD)v4 == -1 )
        LODWORD(v4) = *(_DWORD *)(RandomVacbArrayWithReference + 8) + 1;
      if ( !(_DWORD)v4 )
        goto LABEL_27;
      do
      {
        v4 = (unsigned int)(v4 - 1);
        v17 = RandomVacbArrayWithReference + 8 * ((unsigned int)v4 + 2LL + 4 * v4);
        if ( (unsigned __int8)CcCanReuseVacb(v17, v8) )
          break;
        v17 = v18;
      }
      while ( (_DWORD)v4 );
      if ( !v17 )
      {
LABEL_27:
        CcDereferenceVacbArray(RandomVacbArrayWithReference, 0);
        RandomVacbArrayWithReference = 0LL;
        goto LABEL_172;
      }
LABEL_36:
      v19 = KeAcquireQueuedSpinLock(4uLL);
      CanReuseVacb = CcCanReuseVacb(v17, v8);
      v8 = 0LL;
      if ( CanReuseVacb && (unsigned __int8)CcReferenceSharedCacheMapByVacb(v17) )
      {
        v21 = *(_QWORD *)(v17 + 16);
        v22 = *(_QWORD *)(v17 + 8);
        v23 = *(_DWORD *)(v22 + 152) >> 9;
        KeReleaseQueuedSpinLock(4uLL, v19);
        v25 = v23 & 1;
        if ( v25 )
        {
          v26 = KeAbPreAcquire(v22 + 280, 0LL, 0LL, v24);
          v27 = v26;
          CurrentIrql = KeGetCurrentIrql();
          __writecr8(1uLL);
          if ( !_interlockedbittestandreset((volatile signed __int32 *)(v22 + 280), 0) )
            ExpAcquireFastMutexContended(v22 + 280, v26);
          if ( v27 )
            *(_BYTE *)(v27 + 26) |= 1u;
          *(_QWORD *)(v22 + 288) = KeGetCurrentThread();
          v29 = CurrentIrql;
          v9 = v135;
          *(_DWORD *)(v22 + 328) = v29;
        }
        v30 = (signed __int64 *)(v22 + 104);
        v31 = KeAbPreAcquire(v22 + 104, 0LL, 0LL, v24);
        v34 = v31;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v22 + 104), 0LL) )
          ExfAcquirePushLockExclusiveEx((unsigned __int64 *)(v22 + 104), v31, v22 + 104, v33);
        if ( v34 )
          *(_BYTE *)(v34 + 26) |= 1u;
        v35 = 0;
        if ( v21 >= 0 )
        {
          v36 = *(_QWORD *)(v22 + 32);
          if ( v21 < v36 )
          {
            if ( v36 <= 0x2000000 )
              VacbLargeOffset = *(_QWORD *)(*(_QWORD *)(v22 + 88) + 8 * ((unsigned __int64)(unsigned int)v21 >> 18));
            else
              VacbLargeOffset = CcGetVacbLargeOffset(v22, v21);
            if ( !VacbLargeOffset || *(_WORD *)(VacbLargeOffset + 16) )
            {
              _m_prefetchw(v30);
              v68 = *v30;
              v69 = *v30 - 16;
              if ( (*v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
                v69 = 0LL;
              if ( (v68 & 2) != 0 || (v70 = *v30, v70 != _InterlockedCompareExchange64(v30, v69, v68)) )
                ExfReleasePushLock((_QWORD *)(v22 + 104), v32);
              KeAbPostRelease(v22 + 104);
              if ( v25 )
              {
                v71 = *(_BYTE *)(v22 + 328);
                *(_QWORD *)(v22 + 288) = 0LL;
                v72 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 280), 1, 0);
                if ( v72 )
                  ExpReleaseFastMutexContended((volatile signed __int32 *)(v22 + 280), v72);
                __writecr8(v71);
                KeAbPostRelease(v22 + 280);
              }
              v73 = KeAcquireQueuedSpinLock(5uLL);
              v48 = (*(_DWORD *)(v22 + 4))-- == 1;
              v74 = v73;
              if ( v48 )
              {
                byte_14034E041 = 1;
                v75 = *(_DWORD *)(v22 + 152);
                if ( (v75 & 0x10000) != 0 )
                {
                  if ( !*(_DWORD *)(v22 + 112) )
                  {
                    if ( (v75 & 0x3000000) != 0 )
                    {
                      v76 = (__int64 *)(v22 + 120);
                      v77 = *(__int64 **)(v22 + 120);
                      v78 = *(__int64 ***)(v22 + 128);
                      if ( v77[1] != v22 + 120 || *v78 != v76 )
                        __fastfail(3u);
                      *v78 = v77;
                      v77[1] = (__int64)v78;
                      v79 = (__int64 **)qword_14034DE38;
                      *v76 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
                      *(_QWORD *)(v22 + 128) = v79;
                      if ( *v79 != &CcDirtySharedCacheMapWithLogHandleList )
                        __fastfail(3u);
                      *v79 = v76;
                      qword_14034DE38 = v22 + 120;
                    }
                    v80 = (__int64 *)(v22 + 136);
                    v81 = *v80;
                    v82 = (__int64 **)v80[1];
                    if ( *(__int64 **)(*v80 + 8) != v80 || *v82 != v80 )
                      __fastfail(3u);
                    *v82 = (__int64 *)v81;
                    *(_QWORD *)(v81 + 8) = v82;
                    v83 = (__int64 **)qword_14034DE68;
                    *v80 = (__int64)&CcLazyWriterCursor;
                    v80[1] = (__int64)v83;
                    if ( *v83 != &CcLazyWriterCursor )
                      __fastfail(3u);
                    *v83 = v80;
                    qword_14034DE68 = (__int64)v80;
                  }
                  CcScheduleLazyWriteScan(1, 1);
                }
                else if ( !*(_DWORD *)(v22 + 112) && (v75 & 0x20) == 0 )
                {
                  v84 = *(_QWORD *)(v22 + 272) != 0LL;
                  if ( (v75 & 0x3000000) != 0 )
                  {
                    v85 = (__int64 *)(v22 + 120);
                    v86 = *(__int64 **)(v22 + 120);
                    v87 = *(__int64 ***)(v22 + 128);
                    if ( v86[1] != v22 + 120 || *v87 != v85 )
                      __fastfail(3u);
                    *v87 = v86;
                    v86[1] = (__int64)v87;
                    v88 = (__int64 **)qword_14034DE38;
                    *v85 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
                    *(_QWORD *)(v22 + 128) = v88;
                    if ( *v88 != &CcDirtySharedCacheMapWithLogHandleList )
                      __fastfail(3u);
                    *v88 = v85;
                    qword_14034DE38 = v22 + 120;
                  }
                  v89 = (__int64 *)(v22 + 136);
                  v90 = *v89;
                  v91 = (__int64 **)v89[1];
                  if ( *(__int64 **)(*v89 + 8) != v89 || *v91 != v89 )
                    __fastfail(3u);
                  *v91 = (__int64 *)v90;
                  *(_QWORD *)(v90 + 8) = v91;
                  v92 = (__int64 **)qword_14034DE68;
                  *v89 = (__int64)&CcLazyWriterCursor;
                  v89[1] = (__int64)v92;
                  if ( *v92 != &CcLazyWriterCursor )
                    __fastfail(3u);
                  *v92 = v89;
                  qword_14034DE68 = (__int64)v89;
                  CcScheduleLazyWriteScan(v84, 0);
                }
              }
              KeReleaseQueuedSpinLock(5uLL, v74);
              v5 = v133;
              goto LABEL_133;
            }
            SetVacb(v22, v21, 0LL);
            if ( CcNumberOfFreeHighPriorityVacbs >= (unsigned int)CcMinimumFreeHighPriorityVacbs )
            {
              if ( !v137 )
              {
                v38 = v136 & 0xFFFFFFFD;
                v136 &= ~2u;
                if ( !v139 && v141 )
                  v139 = *(_QWORD *)VacbLargeOffset;
                goto LABEL_58;
              }
            }
            else
            {
              v35 = 1;
            }
            v38 = v136 | 2;
            v139 = 0LL;
            v136 |= 2u;
LABEL_58:
            CcUnmapVacb(VacbLargeOffset, v22, v38);
            _m_prefetchw(v30);
            v40 = *v30;
            v41 = *v30 - 16;
            if ( (*v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
              v41 = 0LL;
            if ( (v40 & 2) != 0 || (v42 = *v30, v42 != _InterlockedCompareExchange64(v30, v41, v40)) )
              ExfReleasePushLock((_QWORD *)(v22 + 104), v39);
            KeAbPostRelease(v22 + 104);
            if ( v25 )
            {
              v43 = *(_BYTE *)(v22 + 328);
              *(_QWORD *)(v22 + 288) = 0LL;
              v44 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 280), 1, 0);
              if ( v44 )
                ExpReleaseFastMutexContended((volatile signed __int32 *)(v22 + 280), v44);
              __writecr8(v43);
              KeAbPostRelease(v22 + 280);
            }
            v5 = v133;
            if ( !v35 )
            {
              v5 = v133 + 1;
              v138 = 1;
              ++v133;
              if ( v137 )
              {
                v137 = 0;
                *a3 = *(_QWORD *)VacbLargeOffset;
                *(_QWORD *)VacbLargeOffset = 0LL;
              }
            }
            v45 = KeAcquireQueuedSpinLock(4uLL);
            *(_QWORD *)(VacbLargeOffset + 8) = 0LL;
            v46 = v45;
            CcSetVacbInFreeList((_QWORD *)VacbLargeOffset, v35);
            KeReleaseQueuedSpinLock(4uLL, v46);
            v47 = KeAcquireQueuedSpinLock(5uLL);
            v48 = (*(_DWORD *)(v22 + 4))-- == 1;
            v49 = v47;
            if ( v48 )
            {
              byte_14034E041 = 1;
              v50 = *(_DWORD *)(v22 + 152);
              if ( (v50 & 0x10000) != 0 )
              {
                if ( !*(_DWORD *)(v22 + 112) )
                {
                  if ( (v50 & 0x3000000) != 0 )
                  {
                    v51 = (__int64 *)(v22 + 120);
                    v52 = *(__int64 **)(v22 + 120);
                    v53 = *(__int64 ***)(v22 + 128);
                    if ( v52[1] != v22 + 120 || *v53 != v51 )
                      __fastfail(3u);
                    *v53 = v52;
                    v52[1] = (__int64)v53;
                    v54 = (__int64 **)qword_14034DE38;
                    *v51 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
                    *(_QWORD *)(v22 + 128) = v54;
                    if ( *v54 != &CcDirtySharedCacheMapWithLogHandleList )
                      __fastfail(3u);
                    *v54 = v51;
                    qword_14034DE38 = v22 + 120;
                  }
                  v55 = (__int64 *)(v22 + 136);
                  v56 = *v55;
                  v57 = (__int64 **)v55[1];
                  if ( *(__int64 **)(*v55 + 8) != v55 || *v57 != v55 )
                    __fastfail(3u);
                  *v57 = (__int64 *)v56;
                  *(_QWORD *)(v56 + 8) = v57;
                  v58 = (__int64 **)qword_14034DE68;
                  *v55 = (__int64)&CcLazyWriterCursor;
                  v55[1] = (__int64)v58;
                  if ( *v58 != &CcLazyWriterCursor )
                    __fastfail(3u);
                  *v58 = v55;
                  qword_14034DE68 = (__int64)v55;
                }
                CcScheduleLazyWriteScan(1, 1);
              }
              else if ( !*(_DWORD *)(v22 + 112) && (v50 & 0x20) == 0 )
              {
                v59 = *(_QWORD *)(v22 + 272) != 0LL;
                if ( (v50 & 0x3000000) != 0 )
                {
                  v60 = (__int64 *)(v22 + 120);
                  v61 = *(__int64 **)(v22 + 120);
                  v62 = *(__int64 ***)(v22 + 128);
                  if ( v61[1] != v22 + 120 || *v62 != v60 )
                    __fastfail(3u);
                  *v62 = v61;
                  v61[1] = (__int64)v62;
                  v63 = (__int64 **)qword_14034DE38;
                  *v60 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
                  *(_QWORD *)(v22 + 128) = v63;
                  if ( *v63 != &CcDirtySharedCacheMapWithLogHandleList )
                    __fastfail(3u);
                  *v63 = v60;
                  qword_14034DE38 = v22 + 120;
                }
                v64 = (__int64 *)(v22 + 136);
                v65 = *v64;
                v66 = (__int64 **)v64[1];
                if ( *(__int64 **)(*v64 + 8) != v64 || *v66 != v64 )
                  __fastfail(3u);
                *v66 = (__int64 *)v65;
                *(_QWORD *)(v65 + 8) = v66;
                v67 = (__int64 **)qword_14034DE68;
                *v64 = (__int64)&CcLazyWriterCursor;
                v64[1] = (__int64)v67;
                if ( *v67 != &CcLazyWriterCursor )
                  __fastfail(3u);
                *v67 = v64;
                qword_14034DE68 = (__int64)v64;
                CcScheduleLazyWriteScan(v59, 0);
              }
            }
            KeReleaseQueuedSpinLock(5uLL, v49);
LABEL_133:
            v9 = v135;
            goto LABEL_136;
          }
        }
        _m_prefetchw(v30);
        v93 = *v30;
        v94 = *v30 - 16;
        if ( (*v30 & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
          v94 = 0LL;
        if ( (v93 & 2) != 0 || (v95 = *v30, v95 != _InterlockedCompareExchange64(v30, v94, v93)) )
          ExfReleasePushLock((_QWORD *)(v22 + 104), v32);
        KeAbPostRelease(v22 + 104);
        if ( v25 )
        {
          v96 = *(_BYTE *)(v22 + 328);
          *(_QWORD *)(v22 + 288) = 0LL;
          v97 = _InterlockedCompareExchange((volatile signed __int32 *)(v22 + 280), 1, 0);
          if ( v97 )
            ExpReleaseFastMutexContended((volatile signed __int32 *)(v22 + 280), v97);
          __writecr8(v96);
          KeAbPostRelease(v22 + 280);
        }
        v98 = KeAcquireQueuedSpinLock(5uLL);
        v48 = (*(_DWORD *)(v22 + 4))-- == 1;
        v99 = v98;
        if ( v48 )
        {
          byte_14034E041 = 1;
          v100 = *(_DWORD *)(v22 + 152);
          if ( (v100 & 0x10000) != 0 )
          {
            if ( !*(_DWORD *)(v22 + 112) )
            {
              if ( (v100 & 0x3000000) != 0 )
              {
                v101 = (__int64 *)(v22 + 120);
                v102 = *(__int64 **)(v22 + 120);
                v103 = *(__int64 ***)(v22 + 128);
                if ( v102[1] != v22 + 120 || *v103 != v101 )
                  __fastfail(3u);
                *v103 = v102;
                v102[1] = (__int64)v103;
                v104 = (__int64 **)qword_14034DE38;
                *v101 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
                *(_QWORD *)(v22 + 128) = v104;
                if ( *v104 != &CcDirtySharedCacheMapWithLogHandleList )
                  __fastfail(3u);
                *v104 = v101;
                qword_14034DE38 = v22 + 120;
              }
              v105 = (__int64 *)(v22 + 136);
              v106 = *v105;
              v107 = (__int64 **)v105[1];
              if ( *(__int64 **)(*v105 + 8) != v105 || *v107 != v105 )
                __fastfail(3u);
              *v107 = (__int64 *)v106;
              *(_QWORD *)(v106 + 8) = v107;
              v108 = (__int64 **)qword_14034DE68;
              *v105 = (__int64)&CcLazyWriterCursor;
              v105[1] = (__int64)v108;
              if ( *v108 != &CcLazyWriterCursor )
                __fastfail(3u);
              *v108 = v105;
              qword_14034DE68 = (__int64)v105;
            }
            CcScheduleLazyWriteScan(1, 1);
          }
          else if ( !*(_DWORD *)(v22 + 112) && (v100 & 0x20) == 0 )
          {
            v109 = *(_QWORD *)(v22 + 272) != 0LL;
            if ( (v100 & 0x3000000) != 0 )
            {
              v110 = (__int64 *)(v22 + 120);
              v111 = *(__int64 **)(v22 + 120);
              v112 = *(__int64 ***)(v22 + 128);
              if ( v111[1] != v22 + 120 || *v112 != v110 )
                __fastfail(3u);
              *v112 = v111;
              v111[1] = (__int64)v112;
              v113 = (__int64 **)qword_14034DE38;
              *v110 = (__int64)&CcDirtySharedCacheMapWithLogHandleList;
              *(_QWORD *)(v22 + 128) = v113;
              if ( *v113 != &CcDirtySharedCacheMapWithLogHandleList )
                __fastfail(3u);
              *v113 = v110;
              qword_14034DE38 = v22 + 120;
            }
            v114 = (__int64 *)(v22 + 136);
            v115 = *v114;
            v116 = (__int64 **)v114[1];
            if ( *(__int64 **)(*v114 + 8) != v114 || *v116 != v114 )
              __fastfail(3u);
            *v116 = (__int64 *)v115;
            *(_QWORD *)(v115 + 8) = v116;
            v117 = (__int64 **)qword_14034DE68;
            *v114 = (__int64)&CcLazyWriterCursor;
            v114[1] = (__int64)v117;
            if ( *v117 != &CcLazyWriterCursor )
              __fastfail(3u);
            *v117 = v114;
            qword_14034DE68 = (__int64)v114;
            CcScheduleLazyWriteScan(v109, 0);
          }
        }
        KeReleaseQueuedSpinLock(5uLL, v99);
        v5 = v133;
LABEL_136:
        v8 = v139;
        v11 = v143;
        a1 = v140;
        v7 = v134;
      }
      else
      {
        v139 = 0LL;
        KeReleaseQueuedSpinLock(4uLL, v19);
        v5 = v133;
        a1 = v140;
      }
    }
    else
    {
LABEL_172:
      a1 = v140;
    }
  }
  if ( RandomVacbArrayWithReference )
  {
    CcDereferenceVacbArray(RandomVacbArrayWithReference, 0);
    a1 = v140;
    RandomVacbArrayWithReference = 0LL;
  }
  if ( !v7 && v5 < a1 )
  {
    v134 = 1;
    v118 = (a1 - v5) << 18;
    v7 = 1;
    v119 = 0;
    v120 = KeAbPreAcquire((ULONG_PTR)&CcBcbTrimNotificationListLock, 0LL, 0LL, a4);
    v121 = v120;
    v122 = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)&CcBcbTrimNotificationListLock, 0) )
      ExpAcquireFastMutexContended((ULONG_PTR)&CcBcbTrimNotificationListLock, v120);
    if ( v121 )
      *(_BYTE *)(v121 + 26) |= 1u;
    v123 = v122;
    v124 = CcBcbTrimNotificationList;
    dword_14034DED0 = v123;
    if ( (__int64 *)CcBcbTrimNotificationList != &CcBcbTrimNotificationList )
    {
      do
      {
        v125 = dword_14034DED0;
        qword_14034DEA8 = 0LL;
        v126 = _InterlockedCompareExchange((volatile signed __int32 *)&CcBcbTrimNotificationListLock, 1, 0);
        if ( v126 )
          ExpReleaseFastMutexContended((volatile signed __int32 *)&CcBcbTrimNotificationListLock, v126);
        __writecr8(v125);
        KeAbPostRelease((ULONG_PTR)&CcBcbTrimNotificationListLock);
        v119 |= (*(__int64 (__fastcall **)(__int64))(v124 + 16))(v118);
        v128 = KeAbPreAcquire((ULONG_PTR)&CcBcbTrimNotificationListLock, 0LL, 0LL, v127);
        v129 = v128;
        v130 = KeGetCurrentIrql();
        __writecr8(1uLL);
        if ( !_interlockedbittestandreset((volatile signed __int32 *)&CcBcbTrimNotificationListLock, 0) )
          ExpAcquireFastMutexContended((ULONG_PTR)&CcBcbTrimNotificationListLock, v128);
        if ( v129 )
          *(_BYTE *)(v129 + 26) |= 1u;
        qword_14034DEA8 = (__int64)KeGetCurrentThread();
        dword_14034DED0 = v130;
        v124 = *(_QWORD *)v124;
      }
      while ( (__int64 *)v124 != &CcBcbTrimNotificationList );
      v5 = v133;
      v7 = 1;
    }
    v131 = dword_14034DED0;
    qword_14034DEA8 = 0LL;
    v132 = _InterlockedCompareExchange((volatile signed __int32 *)&CcBcbTrimNotificationListLock, 1, 0);
    if ( v132 )
      ExpReleaseFastMutexContended((volatile signed __int32 *)&CcBcbTrimNotificationListLock, v132);
    __writecr8(v131);
    KeAbPostRelease((ULONG_PTR)&CcBcbTrimNotificationListLock);
    if ( v119 )
    {
      v8 = v139;
      v9 = v135;
      v11 = v143;
      goto LABEL_172;
    }
  }
  _InterlockedAdd(&CcDbgNumberOfCcUnmapInactiveViews, 1u);
  return v138;
}
