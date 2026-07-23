/*
 * XREFs of MiDecommitPages @ 0x14005ADD0
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x140116440 (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x14041AE10 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x1404F3C18 (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiDecrementCloneBlockReference @ 0x140011D94 (MiDecrementCloneBlockReference.c)
 *     MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER @ 0x14001EC70 (MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x140021840 (MiRemoveLockedPageFromWorkingSet.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiAgeWorkingSet @ 0x140058F90 (MiAgeWorkingSet.c)
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiDeletePteList @ 0x140060900 (MiDeletePteList.c)
 *     MiVadPureReserve @ 0x140061050 (MiVadPureReserve.c)
 *     MiVolunteerForTrimFirst @ 0x14006DCF0 (MiVolunteerForTrimFirst.c)
 *     MiGetVmPartition @ 0x1400A8E60 (MiGetVmPartition.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiCompressTbFlushList @ 0x1400D92A0 (MiCompressTbFlushList.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x1400E2724 (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiReduceWs @ 0x1400F12BC (MiReduceWs.c)
 *     MI_SET_PAGING_FILE_INFO @ 0x1400F5214 (MI_SET_PAGING_FILE_INFO.c)
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiLogRemoveWsleEvent @ 0x1401D297C (MiLogRemoveWsleEvent.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 *     EtwTraceShouldYieldProcessor @ 0x14020E308 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14021422C (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiDecommitPages(unsigned __int64 a1, ULONG_PTR a2, __int64 a3, __int64 a4, int a5, _QWORD *a6)
{
  _QWORD *v6; // r12
  __int64 v8; // rdi
  unsigned __int64 v9; // rcx
  int v10; // r10d
  __int64 v11; // rsi
  int v12; // edx
  __int64 v13; // rax
  __int64 v14; // r8
  int v15; // eax
  unsigned __int64 v16; // r13
  ULONG_PTR v17; // r15
  ULONG_PTR v18; // r13
  unsigned __int16 v19; // ax
  LONG *v20; // r14
  __int64 CurrentIrql; // rbx
  __int64 v22; // rdx
  unsigned int v23; // ebx
  bool v24; // zf
  unsigned __int32 v25; // eax
  int v26; // r9d
  ULONG_PTR v27; // rbx
  __int64 NextPageTable; // rax
  ULONG_PTR v29; // r15
  __int64 v30; // rax
  unsigned __int64 v31; // rax
  __int64 v32; // rdx
  __int64 v33; // r8
  __int64 v34; // r9
  unsigned __int64 v35; // rbx
  __int64 v36; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v38; // ebx
  unsigned int DpcWatchdogCount; // r11d
  __int64 DpcRequestSummary; // r9
  unsigned int DpcTimeCount; // r10d
  ULONG_PTR *v42; // rax
  unsigned __int64 v43; // rdi
  unsigned __int64 Wsle; // r12
  __int64 v45; // rax
  __int64 v46; // r8
  ULONG_PTR v47; // r14
  ULONG_PTR BugCheckParameter4; // rdi
  __int64 v49; // rcx
  unsigned __int64 v50; // rcx
  LONG *v51; // rdx
  ULONG_PTR v52; // rcx
  unsigned __int64 v53; // rcx
  ULONG_PTR *v54; // rax
  ULONG_PTR v55; // rdi
  unsigned __int64 v56; // r8
  __int64 v57; // r15
  unsigned __int64 *v58; // rdx
  unsigned __int64 v59; // rax
  __int64 v60; // r10
  __int64 v61; // r11
  __int64 v62; // r8
  unsigned __int64 v63; // rcx
  unsigned __int64 v64; // rcx
  __int64 v65; // r14
  __int64 v66; // r9
  __int64 v67; // r8
  __int64 v68; // rdx
  int v69; // eax
  ULONG_PTR v70; // r9
  _QWORD *v71; // rdx
  __int64 v72; // rax
  unsigned __int64 v73; // rbx
  __int64 v74; // rbx
  ULONG_PTR v75; // rdi
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // r9
  unsigned __int64 v78; // r10
  unsigned __int64 v79; // rcx
  __int64 v80; // rdx
  __int64 v81; // rdx
  unsigned __int64 v82; // rax
  unsigned __int64 v83; // r9
  int v84; // eax
  _QWORD *CloneAddress; // rax
  ULONG_PTR v86; // rdx
  unsigned __int64 v87; // rbx
  __int64 v88; // rax
  __int64 v89; // r9
  ULONG_PTR v90; // r10
  BOOL v91; // edi
  unsigned __int64 v92; // rdx
  int *v93; // rbx
  __int64 v94; // rbx
  unsigned __int64 v95; // r14
  int v96; // r15d
  __int64 v97; // rax
  _KTHREAD *NextThread; // rax
  KIRQL v99; // bl
  char v100; // al
  __int64 VmPartition; // rax
  char v102; // al
  __int64 v103; // r8
  __int64 result; // rax
  __int64 v105; // [rsp+30h] [rbp-D0h]
  __int64 v106; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v107; // [rsp+40h] [rbp-C0h]
  int v108; // [rsp+48h] [rbp-B8h]
  LONG *v109; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v110; // [rsp+58h] [rbp-A8h] BYREF
  ULONG_PTR v111; // [rsp+60h] [rbp-A0h]
  __int64 v112; // [rsp+68h] [rbp-98h] BYREF
  int v113; // [rsp+70h] [rbp-90h]
  int *v114; // [rsp+78h] [rbp-88h]
  unsigned __int64 v115; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR v116; // [rsp+88h] [rbp-78h]
  int v117; // [rsp+90h] [rbp-70h]
  unsigned __int64 v118; // [rsp+98h] [rbp-68h]
  __int64 v119; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v120; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v121; // [rsp+B0h] [rbp-50h]
  char v122[8]; // [rsp+B8h] [rbp-48h] BYREF
  __int64 v123; // [rsp+C0h] [rbp-40h]
  __int64 v124; // [rsp+C8h] [rbp-38h]
  int v125; // [rsp+D0h] [rbp-30h] BYREF
  __int16 v126; // [rsp+D4h] [rbp-2Ch]
  __int64 v127; // [rsp+D8h] [rbp-28h]
  __int64 v128; // [rsp+E0h] [rbp-20h]
  _QWORD Base[257]; // [rsp+E8h] [rbp-18h] BYREF
  void *retaddr; // [rsp+948h] [rbp+848h]

  v6 = a6;
  v8 = a3;
  v9 = (unsigned __int64)*(unsigned __int8 *)(a4 + 34) << 31;
  v10 = 1;
  v116 = a2;
  v11 = 512LL;
  v12 = *(_DWORD *)(a4 + 52);
  v13 = (unsigned int)v12;
  v107 = a3;
  v124 = a4;
  LODWORD(v13) = v12 & 0x7FFFFFFF;
  v120 = (__int64)a6;
  v127 = 256LL;
  v125 = 1;
  v126 = 0;
  v128 = 0LL;
  Base[0] = 0LL;
  v113 = 0;
  v106 = 512LL;
  v121 = 0xFFFFF68000000000uLL;
  if ( (v13 | v9) == 0x7FFFFFFFELL )
  {
    v11 = 4LL * (*(_DWORD *)(a4 + 48) & 0xF8);
    v106 = v11;
  }
  else if ( v12 >= 0 )
  {
    v118 = 0LL;
    v113 = MiVadPureReserve(a4);
    goto LABEL_6;
  }
  v118 = 8 * ((*(unsigned int *)(a4 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a4 + 33) << 32)) & 0xFFFFFFFFFLL)
       - 0x98000000000LL;
  v14 = 0LL;
LABEL_6:
  v15 = v10;
  v108 = v10;
  if ( !a5 )
    v15 = 3;
  v16 = a1;
  v117 = v15;
  v17 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v111 = v17;
  v18 = ((v16 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v19 = *(_WORD *)(v8 + 1460);
  if ( v19 == 1023 )
    v114 = &MiSystemPartition;
  else
    v114 = *(int **)(qword_1402FEC28 + 8LL * v19);
  v20 = (LONG *)(v8 + 1280);
  v109 = (LONG *)(v8 + 1280);
  CurrentIrql = KeGetCurrentIrql();
  v105 = CurrentIrql;
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8 + 1280, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v23 = v14;
    if ( _interlockedbittestandset(v20, 0x1Fu) )
      v23 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)(v8 + 1280), v105, v14);
    v22 = (unsigned int)*v20;
    if ( (*v20 & 0xBFFFFFFF) != 0x80000000 )
    {
      do
      {
        if ( (v22 & 0x40000000) == 0 )
        {
          v25 = _InterlockedCompareExchange(v20, v22 | 0x40000000, v22);
          v24 = (_DWORD)v22 == v25;
          v22 = v25;
          if ( !v24 )
            continue;
        }
        if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v23, v22, v14);
        v22 = (unsigned int)*v20;
      }
      while ( (v22 & 0xBFFFFFFF) != 0x80000000 );
    }
    LOBYTE(CurrentIrql) = v105;
    v11 = v106;
  }
  if ( v18 > v116 )
    goto LABEL_203;
  v123 = 0xF000000000000LL;
  while ( v108 != 1 && (v18 & 0xFFF) != 0 )
  {
LABEL_36:
    v31 = MI_READ_PTE_LOCK_FREE(v18);
    v110 = v31;
    v35 = v31;
    if ( !v31 )
    {
      v36 = MI_GET_USED_PTES_HANDLE(v17);
      MI_INCREMENT_USED_PTES_BY_HANDLE_CLUSTER(v36, 1u);
      if ( v18 > v118 )
        ++v6[3];
      goto LABEL_39;
    }
    if ( (v31 & 1) != 0 )
    {
      v42 = (ULONG_PTR *)MI_GET_PFN_FROM_PTE(&v110);
      v110 = *((_QWORD *)v20 + 23);
      v43 = v110;
      Wsle = MiLocateWsle(v17, (__int64)v20, *v42);
      if ( (*(_QWORD *)(*(_QWORD *)(v43 + 496) + Wsle * *(unsigned int *)(v43 + 64)) & 8) != 0 )
      {
        v45 = MI_GET_PFN_FROM_PTE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v46 = 0x7FFFFFFFFFLL;
        if ( (*(_QWORD *)(v45 + 40) & 0x200000000000000LL) == 0 )
        {
          --*((_QWORD *)v20 + 16);
          if ( v17 + 0x98000000000LL > 0x7FFFFFFFFFLL )
            --*((_QWORD *)v20 + 14);
        }
      }
      else
      {
        v46 = 0x7FFFFFFFFFLL;
      }
      v47 = *((_QWORD *)v20 + 23);
      if ( Wsle > *(_QWORD *)(v47 + 32) )
        KeBugCheckEx(0x1Au, 0x41785uLL, v47, Wsle, 0LL);
      BugCheckParameter4 = *(_QWORD *)(*(_QWORD *)(v47 + 496) + Wsle * *(unsigned int *)(v47 + 64));
      if ( (BugCheckParameter4 & 1) == 0 )
        KeBugCheckEx(0x1Au, 0x5010uLL, v47, Wsle, BugCheckParameter4);
      v49 = *(_QWORD *)(*(_QWORD *)(v47 + 496) + Wsle * *(unsigned int *)(v47 + 64));
      if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
        v50 = v49 | 0xFFFF000000000000uLL;
      else
        v50 = v49 & 0xFFFFFFFFFFFFLL;
      v51 = v109;
      v52 = v50 & 0xFFFFFFFFFFFFF000uLL;
      if ( v109 == &dword_1402FFA80 )
      {
        if ( PsNtosImageBase
          && (v52 >= (unsigned __int64)PsNtosImageBase && v52 < PsNtosImageEnd
           || v52 >= (unsigned __int64)PsHalImageBase && v52 < PsHalImageEnd) )
        {
          LODWORD(xmmword_1402FE598) = xmmword_1402FE598 - 1;
        }
        else if ( v52 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
        {
          --DWORD1(xmmword_1402FE598);
        }
      }
      if ( (BugCheckParameter4 & 8) == 0 && (BugCheckParameter4 & 4) != 0 )
      {
        MiUpdateWsleHash(v52, Wsle, (ULONG_PTR)v109, 1u);
        v51 = v109;
      }
      if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
      {
        if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
          v53 = BugCheckParameter4 | 0xFFFF000000000000uLL;
        else
          v53 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
        MiLogRemoveWsleEvent(v53, v51[54] & 7, v46);
      }
      v54 = (ULONG_PTR *)(*(_QWORD *)(v47 + 496) + Wsle * *(unsigned int *)(v47 + 64));
      v20 = v109;
      *v54 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL;
      v55 = *((_QWORD *)v20 + 23);
      v56 = *(_QWORD *)(v55 + 8);
      if ( Wsle >= v56 )
      {
        v57 = *(_QWORD *)(v55 + 496);
        v58 = (unsigned __int64 *)(v57 + Wsle * *(unsigned int *)(v55 + 64));
        v59 = *v58;
        if ( *(_DWORD *)(v55 + 64) == 16 && (__int64)(Wsle * *(unsigned int *)(v55 + 64)) >> 4 >= v56 )
        {
          v60 = *((unsigned int *)v58 + 2) | (v59 >> 16) & 0xF00000000LL;
          v61 = *((unsigned int *)v58 + 3) | (v59 >> 20) & 0xF00000000LL;
          v62 = 2 * ((unsigned int)(v59 >> 9) & 7);
          if ( (v59 & 0x800000000000LL) != 0 )
            v63 = v59 | 0xFFFF000000000000uLL;
          else
            v63 = v59 & 0xFFFFFFFFFFFFLL;
          if ( v63 < v121
            || ((v59 & 0x800000000000LL) == 0 ? (v64 = v59 & 0xFFFFFFFFFFFFLL) : (v64 = v59 | 0xFFFF000000000000uLL),
                v64 > 0xFFFFF6FFFFFFFFFFuLL) )
          {
            v62 = (unsigned int)(v62 + 1);
          }
          v65 = (unsigned int)v62;
          v66 = 2 * (v62 + 15);
          v67 = v57 + 16 * v60;
          v68 = v57 + 16 * v61;
          if ( v61 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v55 + 8 * v66) = v60;
          }
          else
          {
            *(_DWORD *)(v68 + 8) = v60;
            *(_QWORD *)v68 ^= v123 & (*(_QWORD *)v68 ^ (v60 << 16));
          }
          if ( v60 == 0xFFFFFFFFFLL )
          {
            *(_QWORD *)(v55 + 8 * v66 + 8) = v61;
          }
          else
          {
            *(_DWORD *)(v67 + 12) = v61;
            *(_QWORD *)v67 ^= (*(_QWORD *)v67 ^ (v61 << 20)) & 0xF0000000000000LL;
          }
          --*(_QWORD *)(v55 + 8 * v65 + 112);
          v20 = v109;
        }
        v69 = (v59 >> 9) & 7;
        if ( v69 )
        {
          --*(_QWORD *)&v20[2 * (v69 - 1) + 10];
          if ( v69 == 7 )
            MiVolunteerForTrimFirst(v20, -1LL);
        }
      }
      v70 = *(_QWORD *)v55;
      if ( *(_QWORD *)v55 != 0xFFFFFFFFFLL )
      {
        if ( v70 < *(_QWORD *)(v55 + 8) || v70 > *(_QWORD *)(v55 + 32) )
          KeBugCheckEx(0x1Au, 0x5004uLL, v55, v70, *(_QWORD *)(v55 + 32));
        v71 = (_QWORD *)(*(_QWORD *)(v55 + 496) + v70 * *(unsigned int *)(v55 + 64));
        *v71 ^= (*(_DWORD *)v71 ^ (2 * (_DWORD)Wsle)) & 0xFFFFFFE;
      }
      v17 = v111;
      *(_QWORD *)(*(_QWORD *)(v55 + 496) + Wsle * *(unsigned int *)(v55 + 64)) = (v70 << 28) | 0xFFFFFFE;
      *(_QWORD *)v55 = Wsle;
      --*((_QWORD *)v20 + 15);
      if ( v17 + 0x98000000000LL > 0x7FFFFFFFFFLL )
        --*((_QWORD *)v20 + 13);
      if ( Wsle < *(_QWORD *)(v110 + 8) )
      {
        v72 = MI_GET_PFN_FROM_PTE(((v17 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        MiRemoveLockedPageFromWorkingSet((__int64)v20, v17, Wsle, v72);
      }
      v73 = v35 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v110 = v73;
      *(_QWORD *)v18 = v73;
      if ( (unsigned int)MiPteInShadowRange(v18) )
        MiWritePteShadow(v18, v73);
      v14 = HIDWORD(v127);
      v74 = 1LL;
      v75 = v17;
      if ( !HIDWORD(v127) )
        goto LABEL_120;
      v76 = Base[HIDWORD(v127) - 1];
      if ( (v76 & 0x800) != 0 )
        goto LABEL_120;
      v77 = Base[HIDWORD(v127) - 1] & 0x7FFLL;
      v78 = v77 + 1;
      if ( (v76 & 0xFFFFFFFFFFFFF000uLL) + ((v77 + 1) << 12) == v17 && v78 > v77 && v78 <= 0x7FF )
        goto LABEL_112;
      if ( (v76 & 0x800) != 0
        || (v76 & 0xFFFFFFFFFFFFF000uLL) != v17 + 4096
        || (v79 = Base[HIDWORD(v127) - 1] & 0x7FFLL, v79 + 1 < v79)
        || v79 + 1 > 0x7FF )
      {
LABEL_120:
        if ( HIDWORD(v127) < (unsigned int)v127 )
        {
          while ( 1 )
          {
            v81 = 2048LL;
            if ( (unsigned __int64)(v74 - 1) <= 0x7FF )
              v81 = v74;
            v74 -= v81;
            v82 = v75 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v81 - 1) & 0x7FF;
            v75 += v81 << 12;
            Base[(unsigned int)v14] = v82;
            v128 += v81;
            v14 = (unsigned int)(HIDWORD(v127) + 1);
            HIDWORD(v127) = v14;
            if ( (_DWORD)v14 == (_DWORD)v127 )
            {
              qsort(Base, (unsigned int)v14, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(&v125);
              v14 = HIDWORD(v127);
              if ( HIDWORD(v127) == (_DWORD)v127 )
                break;
            }
            if ( !v74 )
              goto LABEL_130;
          }
          if ( v74 )
          {
            HIBYTE(v126) = 1;
            v128 = HIDWORD(v127);
          }
        }
        else
        {
          HIBYTE(v126) = 1;
        }
      }
      else
      {
        v80 = 4096LL;
        if ( (v76 & 0x800) != 0 )
          v80 = 0x200000LL;
        v76 -= v80;
LABEL_112:
        ++v128;
        Base[HIDWORD(v127) - 1] = ((unsigned __int16)v76 ^ (unsigned __int16)(v76 + 1)) & 0x7FF ^ v76;
        v14 = HIDWORD(v127);
      }
LABEL_130:
      v6 = (_QWORD *)v120;
      v8 = v107;
      if ( (_DWORD)v14 == (_DWORD)v127 - 1 )
        MiDeletePteList(&v125, v107, v11, v120);
      goto LABEL_41;
    }
    if ( (v31 & 0x400) != 0 )
    {
      if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v31) )
      {
        v84 = MiDecrementCombinedPte(v83);
LABEL_138:
        if ( v84 == 3 )
        {
          ++v6[1];
        }
        else if ( v84 == 5 )
        {
          ++v6[2];
        }
      }
      else if ( HIDWORD(v35) != 0xFFFFFFFF )
      {
        CloneAddress = MiLocateCloneAddress(v8, v83);
        if ( CloneAddress )
        {
          v84 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v86, v8);
          goto LABEL_138;
        }
      }
LABEL_39:
      *(_QWORD *)v18 = v11;
      if ( (unsigned int)MiPteInShadowRange(v18) )
        MiWritePteShadow(v18, v11);
      goto LABEL_41;
    }
    if ( (v31 & 0x800) != 0 )
    {
      v115 = 0LL;
      v87 = 0LL;
      v88 = MiLockTransitionLeafPage(v18, 0LL);
      v90 = v88;
      if ( !v88 )
      {
        v99 = v105;
        goto LABEL_200;
      }
      v91 = 1;
      if ( !*(_WORD *)(v88 + 32) )
      {
        v115 = *(_QWORD *)(v88 + 16);
        v87 = v115;
        if ( (v115 & 0x1000) != 0 )
          v91 = MI_IS_PTE_IN_WS_SWAP_SET(&v115, v22, v14, v89) != 0;
      }
      LOBYTE(v14) = 17;
      if ( (unsigned int)MiDeleteLockedTransitionPte((_QWORD *)v18, v90, v14, 0) == 3 )
        ++v6[1];
      if ( v87 )
      {
        v92 = v87;
        v93 = v114;
        MiReleasePageFileSpace(v114, v92, v91);
      }
      else
      {
        v93 = v114;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)(v107 + 920), 0xFFFFFFFFFFFFFFFFuLL);
      if ( v91 )
      {
        v94 = v106;
        v112 = v106;
      }
      else
      {
        MI_SET_PAGING_FILE_INFO(
          (unsigned int)&v112,
          (unsigned int)&v106,
          *(_QWORD *)&v93[2 * ((v115 >> 1) & 0xF) + 1432],
          HIDWORD(v115),
          2);
        v94 = v112;
      }
      *(_QWORD *)v18 = v94;
      if ( (unsigned int)MiPteInShadowRange(v18) )
        MiWritePteShadow(v18, v94);
      v8 = v107;
    }
    else
    {
      if ( ((v31 >> 5) & 0x1F) == 0x10 )
        ++v6[3];
      v95 = v31 >> 13;
      if ( (v31 & 0x2000) != 0 )
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v8 + 920), 0xFFFFFFFFFFFFFFFFuLL);
        v11 = v106;
        v35 = v110;
      }
      if ( ((v35 >> 12) & 1) == 0 || (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(&v110, v32, v33, v34) )
      {
        v112 = v11;
        v96 = 1;
      }
      else
      {
        v96 = 0;
        MI_SET_PAGING_FILE_INFO(
          (unsigned int)&v112,
          (unsigned int)&v106,
          *(_QWORD *)&v114[2 * ((v35 >> 1) & 0xF) + 1432],
          HIDWORD(v35),
          2);
        v11 = v112;
      }
      *(_QWORD *)v18 = v11;
      if ( (unsigned int)MiPteInShadowRange(v18) )
        MiWritePteShadow(v18, v11);
      v119 = v35;
      if ( (v95 & 1) != 0 )
      {
        v97 = MI_READ_PTE_LOCK_FREE(&v119);
        if ( !v96 )
          v97 &= ~0x1000uLL;
      }
      else if ( v96 && ((v35 >> 12) & 1) != 0 )
      {
        v97 = MI_READ_PTE_LOCK_FREE(&v119);
      }
      else
      {
        v97 = 0LL;
      }
      v119 = v97;
      if ( v97 )
        MiReleasePageFileInfo(v114, v97, 0LL);
      v20 = v109;
      v17 = v111;
      v8 = v107;
    }
LABEL_41:
    v18 += 8LL;
    if ( (v18 & 0x78) != 0 || (*v20 & 0x40000000) == 0 )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      v38 = 0;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      v22 = DpcWatchdogCount > 7;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v14 = 1LL;
        if ( DpcTimeCount > 7 )
        {
          if ( CurrentPrcb->QuantumEnd )
          {
            v38 = 1;
            goto LABEL_192;
          }
LABEL_187:
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v38 = 5;
            goto LABEL_192;
          }
          if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
          {
            v38 = 6;
            goto LABEL_192;
          }
LABEL_191:
          _disable();
          CurrentPrcb->DpcWatchdogCount = 0;
          CurrentPrcb->DpcTimeCount = 0;
          _enable();
LABEL_192:
          if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
            EtwTraceShouldYieldProcessor(v38, DpcWatchdogCount, DpcTimeCount, DpcRequestSummary);
          if ( !v38 )
          {
LABEL_198:
            v11 = v106;
            v17 += 4096LL;
            v99 = v105;
            v111 = v17;
            goto LABEL_200;
          }
          goto LABEL_195;
        }
      }
      else
      {
        v14 = 0LL;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v38 = 2;
          goto LABEL_192;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v38 = 3;
          goto LABEL_192;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v38 = 4;
          goto LABEL_192;
        }
      }
      if ( DpcWatchdogCount <= 7 )
        goto LABEL_198;
      if ( (_DWORD)v14 )
        goto LABEL_187;
      goto LABEL_191;
    }
LABEL_195:
    v11 = v106;
    if ( HIDWORD(v127) )
      MiDeletePteList(&v125, v8, v106, v6);
    MiUnlockWorkingSetExclusive((__int64)v20, (unsigned __int8)v105, v14);
    v108 = 1;
    v99 = ExAcquireSpinLockExclusive(v20);
    v17 += 4096LL;
    LOBYTE(v105) = v99;
    v111 = v17;
LABEL_200:
    if ( v18 > v116 )
      goto LABEL_204;
    LOBYTE(CurrentIrql) = v105;
  }
  if ( HIDWORD(v127) )
    MiDeletePteList(&v125, v8, v11, v6);
  v26 = (unsigned __int8)CurrentIrql;
  if ( !v113 )
  {
    MiMakeSystemAddressValid(v18, v117);
    goto LABEL_35;
  }
  v27 = v116;
  NextPageTable = MiGetNextPageTable(v18, v116, 0, v26, 4, (__int64)v122);
  v29 = NextPageTable;
  if ( NextPageTable )
  {
    v30 = NextPageTable - v18;
    v18 = v29;
    v6[3] += v30 >> 3;
    v17 = (__int64)(v29 << 25) >> 16;
    v111 = v17;
LABEL_35:
    v108 = 0;
    goto LABEL_36;
  }
  v6[3] += ((__int64)(v27 - v18) >> 3) + 1;
LABEL_203:
  v99 = v105;
LABEL_204:
  if ( HIDWORD(v127) )
    MiDeletePteList(&v125, v8, v11, v6);
  v100 = *((_BYTE *)v20 + 219);
  if ( (v100 & 0x10) != 0 )
  {
    *((_BYTE *)v20 + 219) = v100 & 0xEF;
    VmPartition = MiGetVmPartition(v20, v22, v14);
    MiAgeWorkingSet((__int64)v20, v99, 1, *(unsigned __int16 *)(*(_QWORD *)(VmPartition + 5616) + 2358LL));
  }
  v102 = *((_BYTE *)v20 + 219);
  if ( (v102 & 0x20) != 0 )
  {
    v103 = *((_QWORD *)v20 + 17);
    *((_BYTE *)v20 + 219) = v102 & 0xDF;
    MiReduceWs(v20, v99, v103);
  }
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v20, retaddr);
  else
    *v20 = 0;
  result = v99;
  __writecr8(v99);
  return result;
}
