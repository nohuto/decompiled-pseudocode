/*
 * XREFs of ExpReleaseResourceForThreadLite @ 0x1400C92E0
 * Callers:
 *     ExReleaseResourceAndLeavePriorityRegion @ 0x1400C8960 (ExReleaseResourceAndLeavePriorityRegion.c)
 *     ExReleaseResourceAndLeaveCriticalRegion @ 0x1400C89D0 (ExReleaseResourceAndLeaveCriticalRegion.c)
 *     ExReleaseResourceLite @ 0x1400C92D0 (ExReleaseResourceLite.c)
 *     SepMandatoryIntegrityCheck @ 0x1400CC5F0 (SepMandatoryIntegrityCheck.c)
 *     SeAccessCheckByType @ 0x1400CD4D0 (SeAccessCheckByType.c)
 *     CcUnpinFileDataEx @ 0x1400F2430 (CcUnpinFileDataEx.c)
 *     ExReleaseResourceForThreadLite @ 0x140125CC4 (ExReleaseResourceForThreadLite.c)
 * Callees:
 *     KiWakeQueueWaiter @ 0x140043EC0 (KiWakeQueueWaiter.c)
 *     KiExitDispatcher @ 0x14004C6B0 (KiExitDispatcher.c)
 *     KiTryUnwaitThread @ 0x14004DFB0 (KiTryUnwaitThread.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     KiRemoveBoostThread @ 0x14009AE80 (KiRemoveBoostThread.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KiSelectReadyThread @ 0x1400A19C0 (KiSelectReadyThread.c)
 *     ExpUnlockResource @ 0x1400C66F0 (ExpUnlockResource.c)
 *     PsBoostThreadIoEx @ 0x1400CA890 (PsBoostThreadIoEx.c)
 *     KiAbQueueAutoBoostDpc @ 0x1400D6414 (KiAbQueueAutoBoostDpc.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiChooseLowestRankedThread @ 0x1400ED5E4 (KiChooseLowestRankedThread.c)
 *     KxWaitForLockOwnerShipWithIrql @ 0x140103D00 (KxWaitForLockOwnerShipWithIrql.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     KiFastAcquireQueuedSpinLockInstrumented @ 0x140200C08 (KiFastAcquireQueuedSpinLockInstrumented.c)
 *     EtwTraceEnqueueWork @ 0x14025CFD4 (EtwTraceEnqueueWork.c)
 *     PerfLogExecutiveResourceRelease @ 0x14025F75C (PerfLogExecutiveResourceRelease.c)
 */

__int64 __fastcall ExpReleaseResourceForThreadLite(ULONG_PTR BugCheckParameter1, ULONG_PTR BugCheckParameter2)
{
  bool v3; // r14
  volatile signed __int64 *v4; // rcx
  unsigned int v6; // r15d
  char v7; // al
  __int64 v8; // rdx
  int v9; // eax
  __int64 result; // rax
  ULONG_PTR v11; // rdx
  __int64 v12; // r9
  __int64 v13; // rcx
  __int64 v14; // r8
  unsigned __int64 v15; // rcx
  _QWORD *v16; // rsi
  unsigned int v17; // edi
  int v18; // eax
  __int64 v19; // rcx
  __int64 *v20; // r13
  struct _KPRCB *v21; // r10
  __int64 *v22; // r14
  unsigned int v23; // ebx
  __int64 *j; // r13
  __int64 v25; // rsi
  __int64 v26; // rcx
  _QWORD *v27; // rax
  char v28; // al
  bool v29; // zf
  __int64 v30; // rdi
  __int64 v31; // r15
  bool v32; // al
  unsigned int v33; // ebx
  __int64 *v34; // rcx
  char v35; // al
  unsigned int v36; // ecx
  unsigned int v37; // r9d
  __int64 v38; // rcx
  int v39; // eax
  __int64 v40; // r13
  struct _KPRCB *v41; // r10
  unsigned int v42; // ebx
  __int64 *v43; // rax
  signed int v44; // r15d
  __int64 v45; // r12
  __int64 v46; // rcx
  __int64 *v47; // rax
  char v48; // al
  __int64 v49; // r14
  char v50; // di
  __int64 v51; // rsi
  unsigned int v52; // ebx
  char v53; // al
  int v54; // ecx
  __int64 v55; // r10
  bool v56; // r12
  __int64 v57; // rdx
  __int64 v58; // rcx
  __int64 v59; // rdi
  unsigned int v60; // ebx
  __int64 v61; // rdx
  _QWORD *v62; // rcx
  int *v63; // rcx
  char v64; // dl
  _QWORD *v65; // rcx
  _QWORD *v66; // rdx
  unsigned int v67; // ebx
  __int64 v68; // rdi
  struct _KPRCB *v69; // r15
  _KTHREAD *CurrentThread; // rsi
  unsigned __int8 v71; // al
  __int64 *v72; // rcx
  __int64 v73; // rdi
  unsigned int v74; // ebx
  unsigned __int8 v75; // al
  __int64 v76; // r8
  char v77; // si
  char v78; // cl
  char v79; // al
  char v80; // r14
  unsigned int v81; // eax
  int v82; // edx
  char v83; // r15
  unsigned int v84; // ebx
  __int64 v85; // rdx
  __int64 v86; // rdx
  __int64 ready; // rax
  __int64 v88; // r9
  char v89; // cl
  __int64 v90; // rdx
  __int64 v91; // rdx
  int ThreadEffectiveRankNonZero; // eax
  char v93; // r8
  char v94; // bl
  struct _KPRCB *v95; // rcx
  struct _SINGLE_LIST_ENTRY *v96; // rdx
  _SINGLE_LIST_ENTRY *p_AbPropagateBoostsList; // r8
  __int64 v98; // rdx
  __int64 v99; // rdx
  int v100; // eax
  char v101; // r8
  char v102; // cl
  unsigned int v103; // r8d
  _QWORD *v104; // r12
  unsigned __int64 v105; // rdi
  unsigned int v106; // eax
  unsigned int v107; // esi
  unsigned int v108; // eax
  ULONG_PTR v109; // r9
  __int64 v110; // rdx
  unsigned __int64 v111; // rax
  unsigned __int64 v112; // rcx
  __int64 v113; // rcx
  int v114; // eax
  __int16 v115; // dx
  __int64 v116; // r14
  unsigned __int8 CurrentIrql; // si
  struct _KPRCB *CurrentPrcb; // r10
  unsigned int v119; // ebx
  _QWORD *v120; // r13
  signed int v121; // ebx
  __int64 v122; // rsi
  __int64 v123; // rcx
  _QWORD *v124; // rax
  char v125; // al
  bool v126; // bl
  __int64 v127; // rdi
  __int64 v128; // r15
  unsigned __int8 v129; // al
  unsigned int v130; // ebx
  __int64 *v131; // rcx
  char v132; // al
  char v133; // dl
  unsigned int v134; // r8d
  volatile signed __int64 *v135; // rax
  __int64 i; // [rsp+30h] [rbp-39h]
  __int64 v137; // [rsp+30h] [rbp-39h]
  __int64 v138; // [rsp+30h] [rbp-39h]
  _QWORD *v139; // [rsp+38h] [rbp-31h]
  __int64 *v140; // [rsp+38h] [rbp-31h]
  unsigned __int8 v141; // [rsp+38h] [rbp-31h]
  volatile signed __int64 *v142; // [rsp+40h] [rbp-29h] BYREF
  volatile signed __int64 *v143; // [rsp+48h] [rbp-21h]
  __int64 v144; // [rsp+58h] [rbp-11h]
  __int64 v145; // [rsp+60h] [rbp-9h]
  int v146; // [rsp+68h] [rbp-1h]
  int v147; // [rsp+70h] [rbp+7h]
  void *retaddr; // [rsp+C8h] [rbp+5Fh]
  unsigned __int8 v149; // [rsp+D0h] [rbp+67h] BYREF
  signed int v150; // [rsp+E0h] [rbp+77h]
  signed int v151; // [rsp+E8h] [rbp+7Fh]

  v3 = (DWORD1(PerfGlobalGroupMask) & 0x20000) != 0;
  v149 = 2;
  v4 = (volatile signed __int64 *)(BugCheckParameter1 + 96);
  v142 = 0LL;
  v143 = v4;
  v6 = 0;
  _disable();
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    v7 = KiFastAcquireQueuedSpinLockInstrumented(&v142, v4, &v149);
  }
  else
  {
    v7 = 0;
    v8 = _InterlockedExchange64(v4, (__int64)&v142);
    if ( v8 )
    {
      KxWaitForLockOwnerShipWithIrql(&v142, v8, &v149);
      v7 = 1;
    }
  }
  if ( v7 )
  {
    _disable();
    __writecr8(v149);
  }
  if ( *(char *)(BugCheckParameter1 + 26) >= 0 )
  {
    v104 = (_QWORD *)(BugCheckParameter1 + 48);
    v144 = BugCheckParameter1 + 48;
    if ( *(_QWORD *)(BugCheckParameter1 + 48) == BugCheckParameter2 )
    {
      v105 = BugCheckParameter1 + 48;
    }
    else
    {
      v108 = 1;
      if ( (BugCheckParameter2 & 3) == 0 )
        v108 = *(unsigned __int8 *)(BugCheckParameter2 + 649);
      v109 = *(_QWORD *)(BugCheckParameter1 + 16);
      if ( !v109 )
        KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, 0LL, 2uLL);
      v110 = *(unsigned int *)(v109 + 8);
      if ( v108 < (unsigned int)v110 && *(_QWORD *)(v109 + 16LL * v108) == BugCheckParameter2 )
      {
        v105 = v109 + 16LL * v108;
      }
      else
      {
        v105 = v109 + 16;
        v111 = v109 + 16 * v110;
        if ( v109 + 16 >= v111 )
LABEL_364:
          KeBugCheckEx(0xE3u, BugCheckParameter1, BugCheckParameter2, v109, 3uLL);
        while ( *(_QWORD *)v105 != BugCheckParameter2 )
        {
          v105 += 16LL;
          if ( v105 >= v111 )
            goto LABEL_364;
        }
      }
    }
    v106 = *(_DWORD *)(v105 + 8) & 3 | (4 * (*(_DWORD *)(v105 + 8) >> 2) - 4);
    *(_DWORD *)(v105 + 8) = v106;
    v107 = v106 >> 2;
    if ( !(v106 >> 2) )
    {
      if ( (v106 & 1) != 0 )
      {
        if ( (v106 & 2) != 0 )
        {
          v112 = *(_QWORD *)v105 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          v112 = 0LL;
          if ( (*(_QWORD *)v105 & 3) == 0 )
            v112 = *(_QWORD *)v105;
        }
        PsBoostThreadIoEx(v112, 1LL, 0LL, 0LL);
        *(_DWORD *)(v105 + 8) &= ~1u;
      }
      if ( (*(_DWORD *)(v105 + 8) & 2) != 0 )
      {
        ObDereferenceObjectDeferDeleteWithTag((PVOID)(*(_QWORD *)v105 & 0xFFFFFFFFFFFFFFFCuLL), 0x746C6644u);
        *(_DWORD *)(v105 + 8) &= ~2u;
      }
      *(_QWORD *)v105 = 0LL;
      __incgsdword(0x6330u);
      if ( v3 )
      {
        v17 = *(_DWORD *)(BugCheckParameter1 + 68);
        v6 = 65602;
      }
      else
      {
        v17 = 0;
      }
      v29 = (*(_DWORD *)(BugCheckParameter1 + 64))-- == 1;
      if ( v29 )
      {
        v113 = *(unsigned int *)(BugCheckParameter1 + 76);
        if ( (_DWORD)v113 )
        {
          v114 = *(_DWORD *)(BugCheckParameter1 + 56);
          *(_WORD *)(BugCheckParameter1 + 26) |= 0x80u;
          v115 = *(_WORD *)(BugCheckParameter1 + 26);
          *(_DWORD *)(BugCheckParameter1 + 56) = v114 & 3 | 4;
          *v104 = 1LL;
          *(_DWORD *)(BugCheckParameter1 + 64) = 1;
          *(_DWORD *)(BugCheckParameter1 + 76) = v113 - 1;
          if ( (_DWORD)v113 == 1 && !*(_DWORD *)(BugCheckParameter1 + 72) )
            *(_WORD *)(BugCheckParameter1 + 26) = v115 & 0xFB;
          v150 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
          ExpUnlockResource(v113, &v142);
          if ( v6 == 65602 )
            PerfLogExecutiveResourceRelease(65602LL, BugCheckParameter1, 0LL, v17);
          v116 = *(_QWORD *)(BugCheckParameter1 + 40);
          CurrentIrql = KeGetCurrentIrql();
          v141 = CurrentIrql;
          __writecr8(2uLL);
          CurrentPrcb = KeGetCurrentPrcb();
          v138 = (__int64)CurrentPrcb;
          v119 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v116, 7u) )
          {
            do
            {
              if ( (++v119 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v119);
            }
            while ( (*(_DWORD *)v116 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v116, 7u) );
            CurrentPrcb = (struct _KPRCB *)v138;
          }
          *(_DWORD *)(v116 + 4) = 1;
          v120 = *(_QWORD **)(v116 + 8);
          v121 = 0;
          v151 = 0;
          if ( v120 == (_QWORD *)(v116 + 8) )
            goto LABEL_316;
          while ( 1 )
          {
            v122 = (__int64)v120;
            v120 = (_QWORD *)*v120;
            v123 = *(_QWORD *)v122;
            v124 = *(_QWORD **)(v122 + 8);
            if ( *(_QWORD *)(*(_QWORD *)v122 + 8LL) != v122 || *v124 != v122 )
              __fastfail(3u);
            *v124 = v123;
            *(_QWORD *)(v123 + 8) = v124;
            v125 = *(_BYTE *)(v122 + 16);
            if ( v125 == 1 )
            {
              if ( (unsigned __int8)KiTryUnwaitThread(
                                      (__int64)CurrentPrcb,
                                      v122,
                                      *(unsigned __int16 *)(v122 + 18),
                                      v104) )
              {
                v29 = (*(_DWORD *)(v116 + 4))-- == 1;
                if ( v29 )
                {
                  v151 = v121 + 1;
LABEL_315:
                  CurrentIrql = v141;
LABEL_316:
                  if ( v144 )
                    v126 = v151 > 0;
                  else
                    v126 = 0;
                  _InterlockedAnd((volatile signed __int32 *)v116, 0xFFFFFF7F);
                  v132 = KiRemoveBoostThread(v138, *(_QWORD *)(v138 + 8));
                  if ( !v150 )
                    goto LABEL_352;
                  v133 = v132;
                  if ( (char)v150 > v132 )
                    v133 = v150;
                  if ( v126 )
                  {
                    v134 = 2;
                  }
                  else
                  {
LABEL_352:
                    v134 = 1;
                    v133 = 1;
                  }
                  return KiExitDispatcher(v138, 0, v134, v133, CurrentIrql);
                }
              }
            }
            else if ( v125 == 2 )
            {
              *(_BYTE *)(v122 + 17) = 5;
              v127 = *(_QWORD *)(v122 + 24);
              *(_QWORD *)v122 = 0LL;
              __writecr8(2uLL);
              v145 = (__int64)KeGetCurrentPrcb();
              v128 = *(_QWORD *)(v145 + 8);
              if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
              {
                if ( *(_BYTE *)(v128 + 388) != 2 || (v129 = 1, *(_DWORD *)(v128 + 536) != KeGetPcr()->Prcb.Number) )
                  v129 = 0;
                EtwTraceEnqueueWork(v128, v122, v129);
              }
              v130 = 0;
              if ( _interlockedbittestandset((volatile signed __int32 *)v127, 7u) )
              {
                do
                {
                  if ( (++v130 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                    _mm_pause();
                  else
                    HvlNotifyLongSpinWait(v130);
                }
                while ( (*(_DWORD *)v127 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v127, 7u) );
              }
              if ( *(_QWORD *)(v127 + 16) == v127 + 8
                || *(_DWORD *)(v127 + 40) >= *(_DWORD *)(v127 + 44)
                || *(_QWORD *)(v128 + 232) == v127 && *(_BYTE *)(v128 + 643) == 15
                || !KiWakeQueueWaiter(v145, v127, v122) )
              {
                ++*(_DWORD *)(v127 + 4);
                v131 = *(__int64 **)(v127 + 32);
                *(_QWORD *)v122 = v127 + 24;
                *(_QWORD *)(v122 + 8) = v131;
                if ( *v131 != v127 + 24 )
                  __fastfail(3u);
                *v131 = v122;
                *(_QWORD *)(v127 + 32) = v122;
              }
              _InterlockedAnd((volatile signed __int32 *)v127, 0xFFFFFF7F);
              v29 = (*(_DWORD *)(v116 + 4))-- == 1;
              if ( v29 )
                goto LABEL_315;
              v121 = v151;
              v104 = (_QWORD *)v144;
            }
            else if ( (unsigned __int8)KiTryUnwaitThread((__int64)CurrentPrcb, v122, 256LL, 0LL) )
            {
              v151 = --v121;
            }
            if ( v120 == (_QWORD *)(v116 + 8) )
              goto LABEL_315;
            CurrentPrcb = (struct _KPRCB *)v138;
          }
        }
        *(_WORD *)(BugCheckParameter1 + 26) &= 0xFBu;
        *(_WORD *)(BugCheckParameter1 + 24) = 0;
      }
LABEL_355:
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        KiReleaseQueuedSpinLockInstrumented(&v142, retaddr);
LABEL_361:
        _enable();
        result = v6 - 65570;
        if ( (result & 0xFFFFFFDF) != 0 )
          return result;
        v12 = v17;
        v14 = 0LL;
        v11 = BugCheckParameter1;
        v13 = v6;
        return PerfLogExecutiveResourceRelease(v13, v11, v14, v12);
      }
      _m_prefetchw(&v142);
      v135 = v142;
      if ( !v142 )
      {
        if ( (volatile signed __int64 **)_InterlockedCompareExchange64(v143, 0LL, (signed __int64)&v142) == &v142 )
          goto LABEL_361;
        v135 = (volatile signed __int64 *)KxWaitForLockChainValid((__int64 *)&v142);
      }
      v142 = 0LL;
      _InterlockedXor64(v135 + 1, 1uLL);
      goto LABEL_361;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      result = KiReleaseQueuedSpinLockInstrumented(&v142, retaddr);
LABEL_280:
      _enable();
      __incgsdword(0x6330u);
      if ( !v3 )
        return result;
      v12 = *(unsigned int *)(BugCheckParameter1 + 68);
      v14 = v107;
      v11 = BugCheckParameter1;
      v13 = 65618LL;
      return PerfLogExecutiveResourceRelease(v13, v11, v14, v12);
    }
    _m_prefetchw(&v142);
    result = (__int64)v142;
    if ( !v142 )
    {
      result = _InterlockedCompareExchange64(v143, 0LL, (signed __int64)&v142);
      if ( (volatile signed __int64 **)result == &v142 )
        goto LABEL_280;
      result = KxWaitForLockChainValid((__int64 *)&v142);
    }
    v142 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    goto LABEL_280;
  }
  v9 = *(_DWORD *)(BugCheckParameter1 + 56) & 3 | (4 * (*(_DWORD *)(BugCheckParameter1 + 56) >> 2) - 4);
  *(_DWORD *)(BugCheckParameter1 + 56) = v9;
  if ( (v9 & 0xFFFFFFFC) != 0 )
  {
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    {
      result = KiReleaseQueuedSpinLockInstrumented(&v142, retaddr);
LABEL_15:
      _enable();
      __incgsdword(0x632Cu);
      if ( !v3 )
        return result;
      v11 = BugCheckParameter1;
      v12 = *(unsigned int *)(BugCheckParameter1 + 68);
      v13 = 65586LL;
      v14 = *(_DWORD *)(BugCheckParameter1 + 56) >> 2;
      return PerfLogExecutiveResourceRelease(v13, v11, v14, v12);
    }
    _m_prefetchw(&v142);
    result = (__int64)v142;
    if ( !v142 )
    {
      result = _InterlockedCompareExchange64(v143, 0LL, (signed __int64)&v142);
      if ( (volatile signed __int64 **)result == &v142 )
        goto LABEL_15;
      result = KxWaitForLockChainValid((__int64 *)&v142);
    }
    v142 = 0LL;
    _InterlockedXor64((volatile signed __int64 *)(result + 8), 1uLL);
    goto LABEL_15;
  }
  if ( (v9 & 1) != 0 )
  {
    if ( (v9 & 2) != 0 )
    {
      v15 = *(_QWORD *)(BugCheckParameter1 + 48) & 0xFFFFFFFFFFFFFFFCuLL;
    }
    else
    {
      v8 = *(_QWORD *)(BugCheckParameter1 + 48);
      v15 = 0LL;
      if ( (v8 & 3) == 0 )
        v15 = *(_QWORD *)(BugCheckParameter1 + 48);
    }
    LOBYTE(v8) = 1;
    PsBoostThreadIoEx(v15, v8, 0LL, 0LL);
    *(_DWORD *)(BugCheckParameter1 + 56) &= ~1u;
  }
  if ( (*(_DWORD *)(BugCheckParameter1 + 56) & 2) != 0 )
  {
    ObDereferenceObjectDeferDeleteWithTag(
      (PVOID)(*(_QWORD *)(BugCheckParameter1 + 48) & 0xFFFFFFFFFFFFFFFCuLL),
      0x746C6644u);
    *(_DWORD *)(BugCheckParameter1 + 56) &= ~2u;
  }
  --*(_DWORD *)(BugCheckParameter1 + 64);
  v16 = (_QWORD *)(BugCheckParameter1 + 48);
  *(_QWORD *)(BugCheckParameter1 + 48) = 0LL;
  __incgsdword(0x632Cu);
  v139 = (_QWORD *)(BugCheckParameter1 + 48);
  if ( v3 )
  {
    v17 = *(_DWORD *)(BugCheckParameter1 + 68);
    v6 = 65570;
  }
  else
  {
    v17 = 0;
  }
  v18 = *(_DWORD *)(BugCheckParameter1 + 72);
  if ( v18 )
  {
    *(_DWORD *)(BugCheckParameter1 + 64) = v18;
    *(_WORD *)(BugCheckParameter1 + 26) &= ~0x80u;
    v19 = *(unsigned __int16 *)(BugCheckParameter1 + 26);
    *(_DWORD *)(BugCheckParameter1 + 72) = 0;
    if ( !*(_DWORD *)(BugCheckParameter1 + 76) )
    {
      LOWORD(v19) = v19 & 0xFB;
      *(_WORD *)(BugCheckParameter1 + 26) = v19;
    }
    v20 = *(__int64 **)(BugCheckParameter1 + 32);
    v151 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
    v150 = v151;
    *(_QWORD *)(BugCheckParameter1 + 32) = 0LL;
    result = ExpUnlockResource(v19, &v142);
    if ( v6 == 65570 )
      result = PerfLogExecutiveResourceRelease(65570LL, BugCheckParameter1, 0LL, v17);
    if ( !v20 )
      return result;
    v145 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v21 = KeGetCurrentPrcb();
    for ( i = (__int64)v21; ; v21 = (struct _KPRCB *)i )
    {
      v22 = v20;
      v23 = 0;
      v140 = (__int64 *)*v20;
      if ( _interlockedbittestandset((volatile signed __int32 *)v20 + 2, 7u) )
      {
        do
        {
          if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v23);
        }
        while ( (*((_DWORD *)v20 + 2) & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v20 + 2, 7u) );
        v21 = (struct _KPRCB *)i;
      }
      *((_DWORD *)v20 + 3) = 1;
      for ( j = (__int64 *)v20[2]; j != v22 + 2; v21 = (struct _KPRCB *)i )
      {
        v25 = (__int64)j;
        j = (__int64 *)*j;
        v26 = *(_QWORD *)v25;
        v27 = *(_QWORD **)(v25 + 8);
        if ( *(_QWORD *)(*(_QWORD *)v25 + 8LL) != v25 || *v27 != v25 )
          __fastfail(3u);
        *v27 = v26;
        *(_QWORD *)(v26 + 8) = v27;
        v28 = *(_BYTE *)(v25 + 16);
        if ( v28 == 1 )
        {
          if ( (unsigned __int8)KiTryUnwaitThread((__int64)v21, v25, *(unsigned __int16 *)(v25 + 18), 0LL) )
          {
            v29 = (*((_DWORD *)v22 + 3))-- == 1;
            if ( v29 )
              break;
          }
        }
        else if ( v28 == 2 )
        {
          *(_BYTE *)(v25 + 17) = 5;
          v30 = *(_QWORD *)(v25 + 24);
          *(_QWORD *)v25 = 0LL;
          __writecr8(2uLL);
          v144 = (__int64)KeGetCurrentPrcb();
          v31 = *(_QWORD *)(v144 + 8);
          if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
          {
            v32 = *(_BYTE *)(v31 + 388) == 2 && *(_DWORD *)(v31 + 536) == KeGetPcr()->Prcb.Number;
            EtwTraceEnqueueWork(v31, v25, v32);
          }
          v33 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v30, 7u) )
          {
            do
            {
              if ( (++v33 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v33);
            }
            while ( (*(_DWORD *)v30 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v30, 7u) );
          }
          if ( *(_QWORD *)(v30 + 16) == v30 + 8
            || *(_DWORD *)(v30 + 40) >= *(_DWORD *)(v30 + 44)
            || *(_QWORD *)(v31 + 232) == v30 && *(_BYTE *)(v31 + 643) == 15
            || !KiWakeQueueWaiter(v144, v30, v25) )
          {
            ++*(_DWORD *)(v30 + 4);
            v34 = *(__int64 **)(v30 + 32);
            *(_QWORD *)v25 = v30 + 24;
            *(_QWORD *)(v25 + 8) = v34;
            if ( *v34 != v30 + 24 )
              __fastfail(3u);
            *v34 = v25;
            *(_QWORD *)(v30 + 32) = v25;
          }
          _InterlockedAnd((volatile signed __int32 *)v30, 0xFFFFFF7F);
          v29 = (*((_DWORD *)v22 + 3))-- == 1;
          if ( v29 )
            break;
        }
        else
        {
          KiTryUnwaitThread((__int64)v21, v25, 256LL, 0LL);
        }
      }
      _InterlockedAnd((volatile signed __int32 *)v22 + 2, 0xFFFFFF7F);
      v20 = v140;
      if ( !v140 )
        break;
    }
    v35 = KiRemoveBoostThread(i, *(_QWORD *)(i + 8));
    if ( v150 )
    {
      v36 = 2;
      if ( v35 > (char)v150 )
      {
        v37 = v35;
        return KiExitDispatcher(i, 0, v36, v37, v145);
      }
    }
    else
    {
      v36 = 1;
    }
    v37 = v151;
    return KiExitDispatcher(i, 0, v36, v37, v145);
  }
  v38 = *(unsigned int *)(BugCheckParameter1 + 76);
  if ( !(_DWORD)v38 )
  {
    *(_WORD *)(BugCheckParameter1 + 26) &= 0x7Bu;
    *(_WORD *)(BugCheckParameter1 + 24) = 0;
    goto LABEL_355;
  }
  v39 = *(_DWORD *)(BugCheckParameter1 + 56) & 3;
  *v16 = 1LL;
  *(_DWORD *)(BugCheckParameter1 + 64) = 1;
  *(_DWORD *)(BugCheckParameter1 + 56) = v39 | 4;
  *(_DWORD *)(BugCheckParameter1 + 76) = v38 - 1;
  if ( (_DWORD)v38 == 1 )
    *(_WORD *)(BugCheckParameter1 + 26) &= 0xFBu;
  v150 = *(unsigned __int8 *)(BugCheckParameter1 + 27);
  ExpUnlockResource(v38, &v142);
  if ( v6 == 65570 )
    PerfLogExecutiveResourceRelease(65570LL, BugCheckParameter1, 0LL, v17);
  v40 = *(_QWORD *)(BugCheckParameter1 + 40);
  v144 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v41 = KeGetCurrentPrcb();
  v42 = 0;
  v137 = (__int64)v41;
  if ( _interlockedbittestandset((volatile signed __int32 *)v40, 7u) )
  {
    do
    {
      if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v42);
    }
    while ( (*(_DWORD *)v40 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v40, 7u) );
    v41 = (struct _KPRCB *)v137;
  }
  v43 = *(__int64 **)(v40 + 8);
  *(_DWORD *)(v40 + 4) = 1;
  v44 = 0;
  v151 = 0;
  if ( v43 == (__int64 *)(v40 + 8) )
    goto LABEL_123;
  while ( 1 )
  {
    v45 = (__int64)v43;
    v145 = *v43;
    v46 = *v43;
    v47 = (__int64 *)v43[1];
    if ( *(_QWORD *)(v46 + 8) != v45 || *v47 != v45 )
      __fastfail(3u);
    *v47 = v46;
    *(_QWORD *)(v46 + 8) = v47;
    v48 = *(_BYTE *)(v45 + 16);
    if ( v48 == 1 )
      break;
    if ( v48 == 2 )
    {
      *(_BYTE *)(v45 + 17) = 5;
      v67 = 0;
      v68 = *(_QWORD *)(v45 + 24);
      *(_QWORD *)v45 = 0LL;
      __writecr8(2uLL);
      v69 = KeGetCurrentPrcb();
      CurrentThread = v69->CurrentThread;
      if ( (DWORD1(PerfGlobalGroupMask) & 0x1000000) != 0 )
      {
        if ( CurrentThread->WaitBlockFill6[68] != 2
          || (v71 = 1, CurrentThread->NextProcessor != KeGetPcr()->Prcb.Number) )
        {
          v71 = 0;
        }
        EtwTraceEnqueueWork(v69->CurrentThread, v45, v71);
      }
      if ( _interlockedbittestandset((volatile signed __int32 *)v68, 7u) )
      {
        do
        {
          if ( (++v67 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v67);
        }
        while ( (*(_DWORD *)v68 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)v68, 7u) );
      }
      if ( *(_QWORD *)(v68 + 16) == v68 + 8
        || *(_DWORD *)(v68 + 40) >= *(_DWORD *)(v68 + 44)
        || CurrentThread->Queue == (_DISPATCHER_HEADER *volatile)v68 && CurrentThread->WaitReason == 15
        || !KiWakeQueueWaiter((__int64)v69, v68, v45) )
      {
        ++*(_DWORD *)(v68 + 4);
        v72 = *(__int64 **)(v68 + 32);
        *(_QWORD *)v45 = v68 + 24;
        *(_QWORD *)(v45 + 8) = v72;
        if ( *v72 != v68 + 24 )
          __fastfail(3u);
        *v72 = v45;
        *(_QWORD *)(v68 + 32) = v45;
      }
      _InterlockedAnd((volatile signed __int32 *)v68, 0xFFFFFF7F);
      v29 = (*(_DWORD *)(v40 + 4))-- == 1;
      if ( v29 )
        goto LABEL_122;
      v44 = v151;
    }
    else if ( (unsigned __int8)KiTryUnwaitThread((__int64)v41, v45, 256LL, 0LL) )
    {
      v151 = --v44;
    }
LABEL_180:
    v43 = (__int64 *)v145;
    if ( v145 == v40 + 8 )
      goto LABEL_122;
    v41 = (struct _KPRCB *)v137;
  }
  v49 = *(unsigned __int16 *)(v45 + 18);
  v50 = 0;
  v51 = *(_QWORD *)(v45 + 24);
  v52 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 64), 0LL) )
  {
    do
    {
      if ( (++v52 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v52);
    }
    while ( *(_QWORD *)(v51 + 64) );
  }
  if ( *(_BYTE *)(v51 + 388) != 5 )
    goto LABEL_119;
  v53 = *(_BYTE *)(v51 + 112);
  v50 = 0;
  v54 = v53 & 7;
  if ( v54 == 1 || v54 == 4 )
  {
    v57 = *(_QWORD *)(v51 + 232);
    if ( v57 )
    {
      if ( (*(_BYTE *)v57 & 0x7F) == 0x15 )
      {
        v58 = (unsigned __int8)*(_DWORD *)(v51 + 540);
        *(_DWORD *)(v51 + 540) = v58;
        _InterlockedIncrement((volatile signed __int32 *)(v57 + 4 * v58 + 536));
      }
      else
      {
        _InterlockedIncrement((volatile signed __int32 *)(v57 + 40));
      }
    }
    v59 = *(_QWORD *)(v51 + 712);
    if ( v59 )
    {
      v60 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v59 + 22672), 0LL) )
      {
        do
        {
          if ( (++v60 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v60);
        }
        while ( *(_QWORD *)(v59 + 22672) );
      }
      if ( *(_QWORD *)(v51 + 712) )
      {
        v61 = *(_QWORD *)(v51 + 216);
        v62 = *(_QWORD **)(v51 + 224);
        if ( *(_QWORD *)(v61 + 8) != v51 + 216 || *v62 != v51 + 216 )
          __fastfail(3u);
        *v62 = v61;
        *(_QWORD *)(v61 + 8) = v62;
        *(_QWORD *)(v51 + 712) = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)(v59 + 22672), 0LL);
      }
      else
      {
        _InterlockedAnd64((volatile signed __int64 *)(v59 + 22672), 0LL);
      }
    }
    v55 = v137;
    *(_BYTE *)(v51 + 388) = 7;
    v50 = 1;
    *(_QWORD *)(v51 + 216) = *(_QWORD *)(v137 + 11400);
    *(_QWORD *)(v137 + 11400) = v51 + 216;
    *(_QWORD *)(v51 + 200) = v49;
LABEL_146:
    if ( !v50 )
      goto LABEL_119;
    goto LABEL_147;
  }
  if ( (*(_BYTE *)(v51 + 112) & 7) != 0 )
  {
    if ( v54 == 5 )
    {
      *(_BYTE *)(v51 + 112) = v53 & 0xF8 | 6;
      goto LABEL_119;
    }
    v55 = v137;
    if ( v54 == 3 )
      *(_BYTE *)(v45 + 17) = 2;
    goto LABEL_146;
  }
  v55 = v137;
  v50 = 1;
  *(_BYTE *)(v51 + 112) = v53 & 0xF8 | 2;
  *(_QWORD *)(v51 + 200) = v49;
  *(_BYTE *)(v45 + 17) = 0;
LABEL_147:
  if ( v139 )
  {
    *v139 = v51;
    v63 = *(int **)(v45 + 32);
    if ( (*(_BYTE *)v63 & 0x7F) == 2 )
    {
      *(_WORD *)(v51 + 484) -= *((unsigned __int8 *)v63 + 49);
      if ( *(_QWORD *)(v55 + 8) == v51 )
        v64 = *(_BYTE *)(v55 + 11754);
      else
        v64 = 0;
      v147 = *v63;
      BYTE2(v147) = v64;
      *v63 = v147;
      v29 = *((_BYTE *)v63 + 48) == 0;
      *((_QWORD *)v63 + 5) = v51;
      if ( !v29 )
      {
        *((_BYTE *)v63 + 48) = 0;
        *(_QWORD *)(v51 + 200) |= 0x80uLL;
      }
      v65 = v63 + 6;
      v66 = *(_QWORD **)(v51 + 784);
      *v65 = v51 + 776;
      v65[1] = v66;
      if ( *v66 != v51 + 776 )
        __fastfail(3u);
      *v66 = v65;
      *(_QWORD *)(v51 + 784) = v65;
    }
  }
LABEL_119:
  *(_QWORD *)(v51 + 64) = 0LL;
  ++*(_BYTE *)(v45 + 17);
  if ( !v50 )
    goto LABEL_180;
  v29 = (*(_DWORD *)(v40 + 4))-- == 1;
  if ( !v29 )
    goto LABEL_180;
  v151 = v44 + 1;
LABEL_122:
  v16 = v139;
LABEL_123:
  if ( v16 )
    v56 = v151 > 0;
  else
    v56 = 0;
  _InterlockedAnd((volatile signed __int32 *)v40, 0xFFFFFF7F);
  v73 = *(_QWORD *)(v137 + 8);
  if ( !*(_BYTE *)(v73 + 564) )
  {
    v77 = *(_BYTE *)(v73 + 195) + 1;
    goto LABEL_253;
  }
  v74 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v73 + 64), 0LL) )
  {
    do
    {
      if ( (++v74 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v74);
    }
    while ( *(_QWORD *)(v73 + 64) );
  }
  v75 = *(_BYTE *)(v73 + 564);
  v76 = *(unsigned __int8 *)(v73 + 195);
  v77 = *(_BYTE *)(v73 + 195);
  v78 = v75 & 0xF;
  if ( (v75 & 0xF) != 0 )
    v77 -= v78;
  v79 = v75 >> 4;
  if ( !v79 )
  {
    ++v77;
LABEL_251:
    *(_QWORD *)(v73 + 64) = 0LL;
    goto LABEL_253;
  }
  *(_BYTE *)(v73 + 564) = v78;
  v80 = v76 - v79;
  v81 = *(_DWORD *)(v73 + 1408);
  if ( v81 )
  {
    _BitScanReverse((unsigned int *)&v82, v81);
    if ( v80 < v82 )
      v80 = v82;
    v146 = v82;
  }
  if ( v80 == (_BYTE)v76 )
    goto LABEL_251;
  v83 = 0;
  v84 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v137 + 48), 0LL) )
  {
    do
    {
      if ( (++v84 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v84);
    }
    while ( *(_QWORD *)(v137 + 48) );
  }
  if ( !*(_QWORD *)(v137 + 16) )
  {
    if ( *(_BYTE *)(v73 + 195) == 31
      || ((v85 = *(_QWORD *)(v73 + 104)) == 0
       || (v86 = *(unsigned int *)(v137 + 1624) + v85) == 0
       || ((struct _KPRCB *)v137 == KeGetCurrentPrcb() || v73 != *(_QWORD *)(v137 + 8)
         ? (LOBYTE(v76) = 1)
         : (LOBYTE(v76) = 0),
           !(unsigned int)KiGetThreadEffectiveRankNonZero(v73, v86, v76))
        ? (ready = KiSelectReadyThread(*(char *)(v73 + 195) + 1, v137))
        : (ready = KiChooseLowestRankedThread(v137, v73, (unsigned int)(*(char *)(v73 + 195) + 1))),
          (v88 = ready) == 0) )
    {
      v83 = 1;
    }
    else
    {
      if ( (*(_BYTE *)(ready + 2) & 4) != 0 )
      {
        if ( *(char *)(ready + 195) >= 16
          || !*(_QWORD *)(ready + 104)
          || (v90 = *(_QWORD *)(ready + 104)) == 0
          || (v91 = *(unsigned int *)(v137 + 1624) + v90) == 0
          || (ThreadEffectiveRankNonZero = KiGetThreadEffectiveRankNonZero(ready, v91, 0LL),
              v89 = v93 + 1,
              !ThreadEffectiveRankNonZero) )
        {
          v89 = *(_BYTE *)(v88 + 195);
        }
      }
      else
      {
        v89 = *(_BYTE *)(ready + 195);
      }
      **(_BYTE **)(v137 + 56) = v89;
      *(_QWORD *)(v137 + 16) = v88;
      *(_BYTE *)(v88 + 388) = 3;
    }
  }
  v94 = v80;
  if ( KiAbEnabled )
  {
    v95 = KeGetCurrentPrcb();
    if ( v80 > *(char *)(v73 + 195) )
    {
      if ( *(_BYTE *)(v73 + 793) )
      {
        v96 = (struct _SINGLE_LIST_ENTRY *)(v73 + 1376);
        if ( *(_QWORD *)(v73 + 1376) == 1LL )
        {
          p_AbPropagateBoostsList = &v95->AbPropagateBoostsList;
          if ( v95 != (struct _KPRCB *)-25656LL )
          {
            v96->Next = p_AbPropagateBoostsList->Next;
            p_AbPropagateBoostsList->Next = v96;
            _InterlockedIncrement16((volatile signed __int16 *)(v73 + 1416));
            KiAbQueueAutoBoostDpc(v95);
          }
        }
      }
    }
  }
  *(_BYTE *)(v73 + 195) = v80;
  if ( v83 )
  {
    if ( (*(_BYTE *)(v73 + 2) & 4) != 0 )
    {
      if ( v80 >= 16
        || !*(_QWORD *)(v73 + 104)
        || (v98 = *(_QWORD *)(v73 + 104)) == 0
        || (v99 = *(unsigned int *)(v137 + 1624) + v98) == 0
        || (v100 = KiGetThreadEffectiveRankNonZero(v73, v99, 0LL), v94 = v101 + 1, !v100) )
      {
        v94 = *(_BYTE *)(v73 + 195);
      }
    }
    **(_BYTE **)(v137 + 56) = v94;
  }
  _InterlockedAnd64((volatile signed __int64 *)(v137 + 48), 0LL);
  *(_QWORD *)(v73 + 64) = 0LL;
LABEL_253:
  if ( !v150 )
    goto LABEL_258;
  v102 = v77;
  if ( (char)v150 > v77 )
    v102 = v150;
  if ( v56 )
  {
    v103 = 2;
  }
  else
  {
LABEL_258:
    v103 = 1;
    v102 = 1;
  }
  return KiExitDispatcher(v137, 0, v103, v102, v144);
}
