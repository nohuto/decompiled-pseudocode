/*
 * XREFs of MiDecommitPages @ 0x1400922F0
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x14014BBEC (MmStoreDecommitVirtualMemory.c)
 *     NtFreeVirtualMemory @ 0x1404B9FC0 (NtFreeVirtualMemory.c)
 *     MmStoreAllocateVirtualMemory @ 0x140567F04 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiGetVmPartition @ 0x14003C15C (MiGetVmPartition.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     MiMakeSystemAddressValid @ 0x14005E6FC (MiMakeSystemAddressValid.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14005E830 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     MiCompressTbFlushList @ 0x14007B750 (MiCompressTbFlushList.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x14007CAB4 (MiRemoveLockedPageFromWorkingSet.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiVadPureReserve @ 0x14008F840 (MiVadPureReserve.c)
 *     MiDeletePteList @ 0x140093740 (MiDeletePteList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiAgeWorkingSet @ 0x140095760 (MiAgeWorkingSet.c)
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiVolunteerForTrimFirst @ 0x1400AD700 (MiVolunteerForTrimFirst.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     MiReduceWs @ 0x14012F17C (MiReduceWs.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiLogRemoveWsleEvent @ 0x140213CAC (MiLogRemoveWsleEvent.c)
 *     MmFlushAllFilesystemPages @ 0x140217008 (MmFlushAllFilesystemPages.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x140226040 (MiTransferSoftwarePte.c)
 *     MiDecrementCombinedPte @ 0x14022A0F0 (MiDecrementCombinedPte.c)
 *     EtwTraceShouldYieldProcessor @ 0x14025D5E8 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDecommitPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v6; // r14
  __int64 v7; // rbx
  __int64 DemandZeroPte; // rax
  unsigned __int64 v10; // r8
  __int64 v11; // r9
  int v12; // r10d
  int v13; // edx
  __int64 v14; // rsi
  __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // r11
  unsigned int v18; // r8d
  int v19; // eax
  unsigned __int64 v20; // r13
  ULONG_PTR v21; // r12
  unsigned __int64 BugCheckParameter4; // r13
  unsigned __int16 v23; // ax
  __int64 v24; // rdi
  unsigned __int8 CurrentIrql; // r15
  unsigned int v26; // ebx
  signed __int32 i; // edx
  unsigned __int64 v28; // r9
  __int64 v29; // r11
  __int64 v30; // rcx
  int v31; // r14d
  __int64 v32; // r10
  __int64 v33; // r12
  unsigned int v34; // edi
  unsigned __int64 v35; // rax
  unsigned __int64 v36; // rbx
  unsigned __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // rax
  char v40; // al
  __int16 *VmPartition; // rax
  char v42; // al
  __int64 v43; // r8
  unsigned int v44; // r8d
  __int64 v45; // r8
  __int64 v46; // r8
  __int64 v47; // rax
  _KPROCESS *Process; // r15
  __int64 v49; // r10
  ULONG_PTR v50; // r12
  int v51; // r14d
  volatile signed __int32 *v52; // rbx
  int v53; // eax
  ULONG_PTR v54; // rdi
  unsigned int v55; // edi
  signed __int32 j; // edx
  signed __int32 v57; // ett
  unsigned __int64 v58; // rbx
  __int64 v59; // r10
  unsigned __int64 v60; // r15
  __int64 v61; // rax
  __int64 v62; // rax
  __int64 v63; // r13
  ULONG_PTR Wsle; // r12
  unsigned __int64 v65; // r9
  unsigned __int64 *v66; // rcx
  unsigned __int64 PteShadow; // rdx
  ULONG_PTR v68; // r14
  ULONG_PTR v69; // rdi
  __int64 v70; // rcx
  unsigned __int64 v71; // rcx
  __int64 v72; // rdx
  unsigned __int64 v73; // rcx
  unsigned __int64 v74; // rcx
  ULONG_PTR *v75; // rax
  __int64 v76; // r14
  ULONG_PTR v77; // rdi
  unsigned __int64 v78; // r8
  __int64 v79; // r15
  unsigned __int64 *v80; // rdx
  unsigned __int64 v81; // rax
  __int64 v82; // r10
  __int64 v83; // r11
  __int64 v84; // r8
  unsigned __int64 v85; // rcx
  unsigned __int64 v86; // rcx
  __int64 v87; // r14
  __int64 v88; // r9
  __int64 v89; // r8
  __int64 v90; // rdx
  int v91; // eax
  ULONG_PTR v92; // r9
  __int64 v93; // r10
  _QWORD *v94; // rdx
  unsigned __int64 *v95; // rcx
  unsigned __int64 v96; // rdx
  __int64 v97; // r8
  unsigned __int64 v98; // rbx
  unsigned __int64 v99; // rax
  unsigned int v100; // r8d
  __int64 v101; // rbx
  ULONG_PTR v102; // rdi
  unsigned __int64 v103; // rax
  unsigned __int64 v104; // r9
  unsigned __int64 v105; // r10
  unsigned __int64 v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rdx
  unsigned __int64 v109; // rax
  __int64 v110; // rdi
  __int64 v111; // r15
  __int64 PrototypePteDirect; // rdi
  __int64 v113; // rdx
  __int64 v114; // r8
  __int64 v115; // r9
  int v116; // eax
  _QWORD *CloneAddress; // rax
  __int64 v118; // rbx
  ULONG_PTR v119; // rax
  BOOL v120; // edi
  __int16 v121; // cx
  __int64 v122; // r8
  __int64 v123; // r9
  __int64 v124; // rax
  __int64 v125; // rdx
  __int64 v126; // rax
  __int16 v127; // ax
  __int64 v128; // r8
  __int64 v129; // r9
  __int64 v130; // r10
  __int16 v131; // cx
  int v132; // r14d
  __int64 v133; // rax
  __int64 v134; // rdx
  __int64 v135; // rax
  __int64 v136; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v138; // ebx
  unsigned int DpcWatchdogCount; // r11d
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // r10d
  int v142; // r8d
  _KTHREAD *NextThread; // rax
  unsigned __int8 v144; // di
  unsigned int v145; // ebx
  signed __int32 k; // edx
  __int64 result; // rax
  __int64 v149; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v150; // [rsp+48h] [rbp-B8h]
  unsigned __int8 v151; // [rsp+50h] [rbp-B0h]
  __int16 *v152; // [rsp+58h] [rbp-A8h]
  unsigned __int64 v153; // [rsp+60h] [rbp-A0h] BYREF
  int v154; // [rsp+68h] [rbp-98h]
  unsigned __int64 v155; // [rsp+70h] [rbp-90h]
  unsigned __int64 v156; // [rsp+78h] [rbp-88h] BYREF
  int v157; // [rsp+80h] [rbp-80h]
  unsigned __int64 v158; // [rsp+88h] [rbp-78h]
  _QWORD *v159; // [rsp+90h] [rbp-70h]
  __int64 v160; // [rsp+98h] [rbp-68h]
  __int64 v161; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v162; // [rsp+A8h] [rbp-58h]
  int v163; // [rsp+B0h] [rbp-50h] BYREF
  __int16 v164; // [rsp+B4h] [rbp-4Ch]
  __int64 v165; // [rsp+B8h] [rbp-48h]
  __int64 v166; // [rsp+C0h] [rbp-40h]
  _QWORD Base[263]; // [rsp+C8h] [rbp-38h] BYREF
  char v168; // [rsp+908h] [rbp+808h] BYREF
  void *retaddr; // [rsp+948h] [rbp+848h]

  v6 = a6;
  v7 = a3;
  v160 = a4;
  v155 = a2;
  v165 = 256LL;
  v163 = 1;
  v164 = 0;
  v166 = 0LL;
  Base[0] = 0LL;
  v154 = 0;
  DemandZeroPte = MiMakeDemandZeroPte(16LL);
  v13 = *(_DWORD *)(v11 + 52);
  v14 = DemandZeroPte;
  v15 = (unsigned int)v13;
  LODWORD(v15) = v13 & 0x7FFFFFFF;
  v16 = v15 | ((unsigned __int64)*(unsigned __int8 *)(v11 + 34) << 31);
  v17 = 0xFFFFF68000000000uLL;
  v162 = 0xFFFFF68000000000uLL;
  if ( v16 == 0x7FFFFFFFELL )
  {
    v14 = MiMakeDemandZeroPte((*(_DWORD *)(v11 + 48) >> 3) & 0x1F);
LABEL_4:
    v158 = v17
         + 8
         * ((*(unsigned int *)(v11 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v11 + 33) << 32)) & 0xFFFFFFFFFLL);
    v18 = 0;
    goto LABEL_6;
  }
  if ( v13 < 0 )
    goto LABEL_4;
  v158 = v10;
  v154 = MiVadPureReserve(v11);
LABEL_6:
  v19 = v12;
  if ( !a5 )
    v19 = 3;
  v20 = a1;
  v157 = v19;
  v21 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v150 = v21;
  BugCheckParameter4 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v23 = *(_WORD *)(v7 + 1452);
  v159 = (_QWORD *)BugCheckParameter4;
  if ( v23 == 1023 )
    v152 = MiSystemPartition;
  else
    v152 = *(__int16 **)(qword_14034F0E8 + 8LL * v23);
  v24 = v7 + 1272;
  v149 = v7 + 1272;
  CurrentIrql = KeGetCurrentIrql();
  v151 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v7 + 1272);
  }
  else
  {
    v26 = v18;
    if ( _interlockedbittestandset((volatile signed __int32 *)v24, 0x1Fu) )
      v26 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v24);
    for ( i = *(_DWORD *)v24; (*(_DWORD *)v24 & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)v24 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)v24, i | 0x40000000, i);
      if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v26);
    }
    v7 = a3;
  }
  v28 = v155;
  if ( BugCheckParameter4 <= v155 )
  {
    v161 = 0xF000000000000LL;
    while ( 1 )
    {
      v29 = 0x90482413000LL;
      if ( HIDWORD(v165) )
      {
        MiDeletePteList(&v163, v7, v14, v6);
        v28 = v155;
        v29 = 0x90482413000LL;
      }
      if ( v154 )
        break;
      Process = KeGetCurrentThread()->ApcState.Process;
      if ( !MiIsAddressValid(BugCheckParameter4) )
      {
        v50 = v49 | ((unsigned __int64)(unsigned int)v46 << 57);
        v51 = v157 & 1;
        do
        {
          v52 = (volatile signed __int32 *)&Process[1].IdealNode[8];
          if ( v51 )
          {
            MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[8], v151);
          }
          else
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            {
              ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&Process[1].IdealNode[8], retaddr);
            }
            else
            {
              _InterlockedAnd(v52, 0xBFFFFFFF);
              _InterlockedDecrement(v52);
            }
            __writecr8(v151);
          }
          v53 = MmAccessFault(v50, BugCheckParameter4);
          v54 = v53;
          if ( v53 < 0 )
          {
            MmFlushAllFilesystemPages(1LL);
            KeBugCheckEx(0x7Au, 1uLL, v54, (ULONG_PTR)Process, BugCheckParameter4);
          }
          __writecr8(2uLL);
          if ( v51 )
          {
            if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
            {
              ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
            }
            else
            {
              v55 = 0;
              if ( _interlockedbittestandset(v52, 0x1Fu) )
                v55 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
              for ( j = *v52; (*v52 & 0xBFFFFFFF) != 0x80000000; j = *v52 )
              {
                if ( (j & 0x40000000) == 0 )
                  _InterlockedCompareExchange(v52, j | 0x40000000, j);
                if ( (++v55 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v55);
              }
            }
          }
          else if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&Process[1].IdealNode[8]);
          }
          else
          {
            _m_prefetchw((const void *)v52);
            v57 = *v52 & 0x7FFFFFFF;
            if ( v57 != _InterlockedCompareExchange(v52, v57 + 1, v57) )
              ExpWaitForSpinLockSharedAndAcquire((volatile signed __int32 *)&Process[1].IdealNode[8]);
          }
        }
        while ( !MiIsAddressValid(BugCheckParameter4) );
        v21 = v150;
        v6 = a6;
LABEL_98:
        v24 = v149;
      }
      v58 = *(_QWORD *)BugCheckParameter4;
      v59 = 0x90482413000LL;
      v60 = BugCheckParameter4 + 0x90482413000LL;
      if ( BugCheckParameter4 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(v30, v37)
        && (v58 & 1) != 0
        && ((v58 & 0x20) == 0 || (v58 & 0x42) == 0) )
      {
        v30 = (__int64)KeGetCurrentThread()->ApcState.Process;
        v37 = *(_QWORD *)(v30 + 1520);
        if ( v37 )
        {
          v61 = *(_QWORD *)(v37 + 8 * ((BugCheckParameter4 >> 3) & 0x1FF));
          if ( (v61 & 0x20) != 0 )
            v58 |= 0x20uLL;
          if ( (v61 & 0x42) != 0 )
            v58 |= 0x42uLL;
        }
      }
      v156 = v58;
      if ( !v58 )
      {
        v62 = MI_GET_USED_PTES_HANDLE(v21);
        MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v62, 1u);
        if ( BugCheckParameter4 > v158 )
          ++v6[3];
        *(_QWORD *)BugCheckParameter4 = v14;
        if ( v60 <= 0x7F8 )
LABEL_113:
          MiWritePteShadow(BugCheckParameter4, v14);
LABEL_258:
        v76 = v149;
LABEL_259:
        v110 = (__int64)a6;
        v111 = a3;
        goto LABEL_260;
      }
      if ( (v58 & 1) == 0 )
      {
        if ( (v58 & 0x400) != 0 )
        {
          PrototypePteDirect = MiGetPrototypePteDirect(v58, v37, v46, v28);
          if ( !(unsigned int)MiIsPrototypePteVadLookup(v58) )
          {
            if ( (v58 & 0x800) != 0 )
            {
              v116 = MiDecrementCombinedPte(PrototypePteDirect, v113, v114, v115);
LABEL_211:
              if ( v116 == 3 )
              {
                ++v6[1];
              }
              else if ( v116 == 5 )
              {
                ++v6[2];
              }
            }
            else
            {
              CloneAddress = MiLocateCloneAddress(a3, PrototypePteDirect);
              if ( CloneAddress )
              {
                v116 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, PrototypePteDirect, a3);
                goto LABEL_211;
              }
            }
          }
          *(_QWORD *)BugCheckParameter4 = v14;
          if ( v60 <= 0x7F8 )
            goto LABEL_113;
          goto LABEL_258;
        }
        if ( (v58 & 0x800) != 0 )
        {
          v118 = 0LL;
          v119 = MiLockTransitionLeafPage((_KPROCESS *)BugCheckParameter4, 0LL);
          if ( !v119 )
            goto LABEL_299;
          v120 = 1;
          if ( !*(_WORD *)(v119 + 32) )
          {
            v118 = *(_QWORD *)(v119 + 16);
            if ( (v118 & 2) != 0 )
            {
              v121 = *(_WORD *)(*(_QWORD *)&MiSystemPartition[4 * ((unsigned __int16)v118 >> 12) + 2672] + 164LL);
              if ( (v121 & 0x10) == 0 )
                v120 = (v121 & 0x20) != 0;
            }
          }
          if ( (unsigned int)MiDeleteLockedTransitionPte((ULONG_PTR *)BugCheckParameter4, v119, 0x11u, 0LL) == 3 )
            ++v6[1];
          if ( v118 )
            MiReleasePageFileSpace(v152, v118, v120);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          if ( v120 )
          {
            v126 = v14;
          }
          else
          {
            v124 = MiReverseSwizzleInvalidPte(
                     v118,
                     *(_QWORD *)&v152[4 * ((unsigned __int16)v118 >> 12) + 2672],
                     v122,
                     v123);
            v126 = MiTransferSoftwarePte(v14, v125, HIDWORD(v124));
          }
          *(_QWORD *)BugCheckParameter4 = v126;
          if ( v60 <= 0x7F8 )
            MiWritePteShadow(BugCheckParameter4, v126);
          goto LABEL_258;
        }
        if ( ((v58 >> 5) & 0x1F) == 0x10 )
          ++v6[3];
        v127 = MiReverseSwizzleInvalidPte(v58, v37, v46, v28);
        if ( (v127 & 0x400) != 0 || (v127 & 0x800) != 0 || (v127 & 4) != 0 )
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        if ( ((v58 >> 1) & 1) == 0
          || (v131 = *(_WORD *)(*(_QWORD *)&MiSystemPartition[4 * ((unsigned __int16)v58 >> 12) + 2672] + 164LL),
              (v131 & 0x10) != 0)
          || (v131 & 0x20) != 0 )
        {
          v135 = v14;
          v132 = 1;
        }
        else
        {
          v132 = 0;
          v133 = MiReverseSwizzleInvalidPte(v58, *(_QWORD *)&v152[4 * ((unsigned __int16)v58 >> 12) + 2672], v128, v129);
          v135 = MiTransferSoftwarePte(v14, v134, HIDWORD(v133));
        }
        *(_QWORD *)BugCheckParameter4 = v135;
        if ( v60 <= 0x7F8 )
        {
          MiWritePteShadow(BugCheckParameter4, v135);
          v130 = 0x90482413000LL;
        }
        v153 = v58;
        if ( (v58 & 4) != 0 )
        {
          if ( (unsigned __int64)&v153 + v130 <= 0x7F8 )
            v58 = MiReadPteShadow(&v153, v58);
          if ( !v132 )
            v58 &= ~2uLL;
          goto LABEL_256;
        }
        if ( v132 && ((v58 >> 1) & 1) != 0 )
        {
          if ( (unsigned __int64)&v153 + v130 <= 0x7F8 )
          {
            v136 = MiReadPteShadow(&v153, v58);
            goto LABEL_255;
          }
        }
        else
        {
          v136 = 0LL;
LABEL_255:
          v58 = v136;
        }
LABEL_256:
        v153 = v58;
        if ( v58 )
          MiReleasePageFileInfo(v152, v58, 0LL);
        goto LABEL_258;
      }
      if ( (unsigned __int64)&v156 + v59 <= 0x7F8 )
        MiPteHasShadow(v30, v58);
      v63 = *(_QWORD *)(v24 + 184);
      Wsle = MiLocateWsle(v21);
      if ( (*(_QWORD *)(*(_QWORD *)(v63 + 496) + Wsle * *(unsigned int *)(v63 + 64)) & 8) != 0 )
      {
        v65 = v150;
        v66 = (unsigned __int64 *)(((v150 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        PteShadow = *v66;
        if ( (unsigned __int64)(v66 + 0x12090482600LL) <= 0x7F8 )
          PteShadow = MiReadPteShadow(v66, PteShadow);
        if ( (*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
        {
          --*(_QWORD *)(v24 + 128);
          if ( v65 + 0x98000000000LL > 0x7FFFFFFFFFLL )
            --*(_QWORD *)(v24 + 112);
        }
      }
      v68 = *(_QWORD *)(v24 + 184);
      if ( Wsle > *(_QWORD *)(v68 + 32) )
        KeBugCheckEx(0x1Au, 0x41785uLL, v68, Wsle, 0LL);
      v69 = *(_QWORD *)(*(_QWORD *)(v68 + 496) + Wsle * *(unsigned int *)(v68 + 64));
      if ( (v69 & 1) == 0 )
        KeBugCheckEx(0x1Au, 0x5010uLL, v68, Wsle, v69);
      v70 = *(_QWORD *)(*(_QWORD *)(v68 + 496) + Wsle * *(unsigned int *)(v68 + 64));
      if ( (v69 & 0x800000000000LL) != 0 )
        v71 = v70 | 0xFFFF000000000000uLL;
      else
        v71 = v70 & 0xFFFFFFFFFFFFLL;
      v72 = v149;
      v73 = v71 & 0xFFFFFFFFFFFFF000uLL;
      if ( (signed __int32 *)v149 == dword_14034FF40 )
      {
        if ( PsNtosImageBase
          && (v73 >= (unsigned __int64)PsNtosImageBase && v73 < PsNtosImageEnd
           || v73 >= (unsigned __int64)PsHalImageBase && v73 < PsHalImageEnd) )
        {
          LODWORD(xmmword_14034EA58) = xmmword_14034EA58 - 1;
        }
        else if ( v73 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
        {
          --DWORD1(xmmword_14034EA58);
        }
      }
      if ( (v69 & 8) == 0 && (v69 & 4) != 0 )
      {
        MiUpdateWsleHash(v73, Wsle, v149, 1LL);
        v72 = v149;
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
      {
        if ( (v69 & 0x800000000000LL) != 0 )
          v74 = v69 | 0xFFFF000000000000uLL;
        else
          v74 = v69 & 0xFFFFFFFFFFFFLL;
        MiLogRemoveWsleEvent(v74, *(_BYTE *)(v72 + 216) & 7);
      }
      v75 = (ULONG_PTR *)(*(_QWORD *)(v68 + 496) + Wsle * *(unsigned int *)(v68 + 64));
      v76 = v149;
      *v75 = v69 & 0xFFFFFFFFFFFFFFFEuLL;
      v77 = *(_QWORD *)(v149 + 184);
      v78 = *(_QWORD *)(v77 + 8);
      if ( Wsle >= v78 )
      {
        v79 = *(_QWORD *)(v77 + 496);
        v80 = (unsigned __int64 *)(v79 + Wsle * *(unsigned int *)(v77 + 64));
        v81 = *v80;
        if ( *(_DWORD *)(v77 + 64) == 16 && (__int64)(Wsle * *(unsigned int *)(v77 + 64)) >> 4 >= v78 )
        {
          v82 = *((unsigned int *)v80 + 2) | (v81 >> 16) & 0xF00000000LL;
          v83 = *((unsigned int *)v80 + 3) | (v81 >> 20) & 0xF00000000LL;
          v84 = 2 * ((unsigned int)(v81 >> 9) & 7);
          if ( (v81 & 0x800000000000LL) != 0 )
            v85 = v81 | 0xFFFF000000000000uLL;
          else
            v85 = v81 & 0xFFFFFFFFFFFFLL;
          if ( v85 < v162
            || ((v81 & 0x800000000000LL) == 0 ? (v86 = v81 & 0xFFFFFFFFFFFFLL) : (v86 = v81 | 0xFFFF000000000000uLL),
                v86 > 0xFFFFF6FFFFFFFFFFuLL) )
          {
            v84 = (unsigned int)(v84 + 1);
          }
          v87 = (unsigned int)v84;
          v88 = 2 * (v84 + 15);
          v89 = v79 + 16 * v82;
          v90 = v79 + 16 * v83;
          if ( v83 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v77 + 8 * v88) = v82;
          }
          else
          {
            *(_DWORD *)(v90 + 8) = v82;
            *(_QWORD *)v90 ^= v161 & (*(_QWORD *)v90 ^ (v82 << 16));
          }
          if ( v82 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v77 + 8 * v88 + 8) = v83;
          }
          else
          {
            *(_DWORD *)(v89 + 12) = v83;
            *(_QWORD *)v89 ^= (*(_QWORD *)v89 ^ (v83 << 20)) & 0xF0000000000000LL;
          }
          --*(_QWORD *)(v77 + 8 * v87 + 112);
          v76 = v149;
        }
        v91 = (v81 >> 9) & 7;
        if ( v91 )
        {
          --*(_QWORD *)(v76 + 8LL * (unsigned int)(v91 - 1) + 40);
          if ( v91 == 7 )
            MiVolunteerForTrimFirst(v76, -1LL);
        }
      }
      v92 = *(_QWORD *)v77;
      v93 = 0xFFFFFFFFFLL;
      if ( *(_QWORD *)v77 != 0xFFFFFFFFFLL )
      {
        if ( v92 < *(_QWORD *)(v77 + 8) || v92 > *(_QWORD *)(v77 + 32) )
          KeBugCheckEx(0x1Au, 0x5004uLL, v77, v92, *(_QWORD *)(v77 + 32));
        v94 = (_QWORD *)(*(_QWORD *)(v77 + 496) + v92 * *(unsigned int *)(v77 + 64));
        *v94 ^= (*(_DWORD *)v94 ^ (2 * (_DWORD)Wsle)) & 0xFFFFFFE;
      }
      *(_QWORD *)(*(_QWORD *)(v77 + 496) + Wsle * *(unsigned int *)(v77 + 64)) = (v92 << 28) | 0xFFFFFFE;
      *(_QWORD *)v77 = Wsle;
      --*(_QWORD *)(v76 + 120);
      if ( v150 + 0x98000000000LL > 0x7FFFFFFFFFLL )
        --*(_QWORD *)(v76 + 104);
      if ( Wsle >= *(_QWORD *)(v63 + 8) )
      {
        v21 = v150;
      }
      else
      {
        v95 = (unsigned __int64 *)(((v150 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v96 = *v95;
        if ( (unsigned __int64)(v95 + 0x12090482600LL) <= 0x7F8 )
          v96 = MiReadPteShadow(v95, v96);
        v97 = Wsle;
        v21 = v150;
        MiRemoveLockedPageFromWorkingSet(v76, v150, v97, 48 * (v93 & (v96 >> 12)) - 0x58000000000LL);
      }
      BugCheckParameter4 = (unsigned __int64)v159;
      v98 = v58 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v99 = (unsigned __int64)(v159 + 0x12090482600LL);
      v156 = v98;
      *v159 = v98;
      if ( v99 <= 0x7F8 )
        MiWritePteShadow(BugCheckParameter4, v98);
      v100 = HIDWORD(v165);
      v101 = 1LL;
      v102 = v21;
      if ( HIDWORD(v165) )
      {
        v103 = Base[HIDWORD(v165) - 1];
        if ( (v103 & 0x800) == 0 )
        {
          v104 = Base[HIDWORD(v165) - 1] & 0x7FFLL;
          v105 = v104 + 1;
          if ( (v103 & 0xFFFFFFFFFFFFF000uLL) + ((v104 + 1) << 12) == v21 && v105 > v104 && v105 <= 0x7FF )
            goto LABEL_185;
          if ( (v103 & 0x800) == 0 && (v103 & 0xFFFFFFFFFFFFF000uLL) == v21 + 4096 )
          {
            v106 = Base[HIDWORD(v165) - 1] & 0x7FFLL;
            if ( v106 + 1 >= v106 && v106 + 1 <= 0x7FF )
            {
              v107 = 4096LL;
              if ( (v103 & 0x800) != 0 )
                v107 = 0x200000LL;
              v103 -= v107;
LABEL_185:
              ++v166;
              Base[HIDWORD(v165) - 1] = ((unsigned __int16)v103 ^ (unsigned __int16)(v103 + 1)) & 0x7FF ^ v103;
              v100 = HIDWORD(v165);
              goto LABEL_203;
            }
          }
        }
      }
      if ( HIDWORD(v165) < (unsigned int)v165 )
      {
        while ( 1 )
        {
          v108 = 2048LL;
          if ( (unsigned __int64)(v101 - 1) <= 0x7FF )
            v108 = v101;
          v101 -= v108;
          v109 = v102 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v108 - 1) & 0x7FF;
          v102 += v108 << 12;
          Base[v100] = v109;
          v166 += v108;
          v100 = HIDWORD(v165) + 1;
          HIDWORD(v165) = v100;
          if ( v100 == (_DWORD)v165 )
          {
            qsort(Base, v100, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList((__int64)&v163);
            v100 = HIDWORD(v165);
            if ( HIDWORD(v165) == (_DWORD)v165 )
              break;
          }
          if ( !v101 )
            goto LABEL_203;
        }
        if ( v101 )
        {
          HIBYTE(v164) = 1;
          v166 = HIDWORD(v165);
        }
      }
      else
      {
        HIBYTE(v164) = 1;
      }
LABEL_203:
      if ( v100 != (_DWORD)v165 - 1 )
        goto LABEL_259;
      v110 = (__int64)a6;
      v111 = a3;
      MiDeletePteList(&v163, a3, v14, a6);
LABEL_260:
      BugCheckParameter4 += 8LL;
      v159 = (_QWORD *)BugCheckParameter4;
      if ( (BugCheckParameter4 & 0x78) == 0 && (*(_DWORD *)v76 & 0x40000000) != 0 )
        goto LABEL_283;
      CurrentPrcb = KeGetCurrentPrcb();
      v138 = 0;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v142 = 1;
        if ( DpcTimeCount > 7 )
        {
          if ( CurrentPrcb->QuantumEnd )
          {
            v138 = 1;
            goto LABEL_280;
          }
LABEL_275:
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v138 = 5;
          }
          else
          {
            if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
              goto LABEL_279;
            v138 = 6;
          }
          goto LABEL_280;
        }
      }
      else
      {
        v142 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v138 = 2;
          goto LABEL_280;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v138 = 3;
          goto LABEL_280;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v138 = 4;
          goto LABEL_280;
        }
      }
      if ( DpcWatchdogCount > 7 )
      {
        if ( v142 )
          goto LABEL_275;
LABEL_279:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        _enable();
LABEL_280:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v138, DpcWatchdogCount, DpcTimeCount);
        if ( !v138 )
          goto LABEL_298;
LABEL_283:
        if ( HIDWORD(v165) )
          MiDeletePteList(&v163, v111, v14, v110);
        MiUnlockWorkingSetExclusive(v76, v151);
        v144 = KeGetCurrentIrql();
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v76);
        }
        else
        {
          v145 = 0;
          if ( _interlockedbittestandset((volatile signed __int32 *)v76, 0x1Fu) )
            v145 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v76);
          for ( k = *(_DWORD *)v76; (*(_DWORD *)v76 & 0xBFFFFFFF) != 0x80000000; k = *(_DWORD *)v76 )
          {
            if ( (k & 0x40000000) == 0 )
              _InterlockedCompareExchange((volatile signed __int32 *)v76, k | 0x40000000, k);
            if ( (++v145 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v145);
          }
        }
        v151 = v144;
      }
LABEL_298:
      v21 += 4096LL;
      v150 = v21;
LABEL_299:
      v28 = v155;
      v24 = v149;
      CurrentIrql = v151;
      v6 = a6;
      if ( BugCheckParameter4 > v155 )
        goto LABEL_48;
      v7 = a3;
    }
    v30 = (__int64)&v168;
    v31 = 0;
    v32 = 0x7FFFFFFFF8LL;
    v33 = BugCheckParameter4;
    v34 = 2;
    Base[261] = ((BugCheckParameter4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    Base[262] = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    do
    {
      v35 = *(_QWORD *)(v30 - 24);
      v30 -= 16LL;
      *(_QWORD *)(v30 - 24) = ((v35 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      *(_QWORD *)(v30 - 16) = ((*(_QWORD *)v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
      --v34;
    }
    while ( v34 );
    do
    {
      v36 = Base[2 * v34 + 257];
      while ( 1 )
      {
        v37 = *(_QWORD *)v36;
        if ( v36 + v29 <= 0x7F8
          && (unsigned int)MiPteHasShadow(v30, v37)
          && (v37 & 1) != 0
          && ((v37 & 0x20) == 0 || (v37 & 0x42) == 0) )
        {
          v30 = (__int64)KeGetCurrentThread()->ApcState.Process;
          v38 = *(_QWORD *)(v30 + 1520);
          if ( v38 )
          {
            v39 = *(_QWORD *)(v38 + 8 * ((v36 >> 3) & 0x1FF));
            if ( (v39 & 0x20) != 0 )
              v37 |= 0x20uLL;
            if ( (v39 & 0x42) != 0 )
              v37 |= 0x42uLL;
          }
        }
        if ( v37 )
          break;
        v36 += 8LL;
        for ( v31 |= 3u; (v36 & 0xFFF) == 0; v36 = (v32 & (v36 >> 9)) - 0x98000000000LL )
        {
          if ( !v34 )
            break;
          --v34;
        }
        if ( v36 > Base[2 * v34 + 258] )
          goto LABEL_47;
      }
      if ( (v37 & 1) == 0 )
      {
        MiMakeSystemAddressValid((__int64)(v36 << 25) >> 16, 0LL, 0, CurrentIrql, 1);
        v32 = 0x7FFFFFFFF8LL;
        v29 = 0x90482413000LL;
      }
      if ( (v31 & 1) != 0 )
      {
        v44 = v34 + 1;
        v30 = (__int64)(v36 << 25) >> 16;
        if ( v34 + 1 < 3 )
        {
          v37 = (unsigned __int64)&Base[2 * v44 + 257];
          v45 = 3 - v44;
          do
          {
            *(_QWORD *)v37 = v30;
            v37 += 16LL;
            v30 = v30 << 25 >> 16;
            --v45;
          }
          while ( v45 );
        }
        v31 &= ~1u;
      }
      ++v34;
      v46 = 0x98000000000LL;
    }
    while ( v34 < 3 );
    if ( (v31 & 2) != 0 || *(char *)v36 < 0 )
      v33 = (__int64)(v36 << 25) >> 16;
    if ( !v33 )
    {
LABEL_47:
      v6 = a6;
      v24 = v149;
      a6[3] += ((__int64)(v155 - BugCheckParameter4) >> 3) + 1;
      goto LABEL_48;
    }
    v6 = a6;
    v159 = (_QWORD *)v33;
    v47 = (__int64)(v33 - BugCheckParameter4) >> 3;
    BugCheckParameter4 = v33;
    a6[3] += v47;
    v21 = v33 << 25 >> 16;
    v150 = v21;
    goto LABEL_98;
  }
LABEL_48:
  if ( HIDWORD(v165) )
    MiDeletePteList(&v163, a3, v14, v6);
  v40 = *(_BYTE *)(v24 + 219);
  if ( (v40 & 0x10) != 0 )
  {
    *(_BYTE *)(v24 + 219) = v40 & 0xEF;
    VmPartition = MiGetVmPartition(v24);
    MiAgeWorkingSet(v24, CurrentIrql, 1LL, *(unsigned __int16 *)(*((_QWORD *)VmPartition + 657) + 2358LL));
  }
  v42 = *(_BYTE *)(v24 + 219);
  if ( (v42 & 0x20) != 0 )
  {
    v43 = *(_QWORD *)(v24 + 136);
    *(_BYTE *)(v24 + 219) = v42 & 0xDF;
    MiReduceWs(v24, CurrentIrql, v43);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v24, retaddr);
  else
    *(_DWORD *)v24 = 0;
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
