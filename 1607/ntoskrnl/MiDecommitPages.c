/*
 * XREFs of MiDecommitPages @ 0x1400448D0
 * Callers:
 *     MmStoreDecommitVirtualMemory @ 0x140125E38 (MmStoreDecommitVirtualMemory.c)
 *     MiDecommitRegion @ 0x14042F060 (MiDecommitRegion.c)
 *     MmStoreAllocateVirtualMemory @ 0x14053260C (MmStoreAllocateVirtualMemory.c)
 * Callees:
 *     MiLockWorkingSetShared @ 0x140014170 (MiLockWorkingSetShared.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14001B870 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiVadPureReserve @ 0x14002B610 (MiVadPureReserve.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiLockWorkingSetExclusive @ 0x14002E580 (MiLockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiIncreaseUsedPtesCount @ 0x140037030 (MiIncreaseUsedPtesCount.c)
 *     MiIsAddressValid @ 0x1400370C0 (MiIsAddressValid.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiGetNextPageTable @ 0x140043470 (MiGetNextPageTable.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiRemoveWsle @ 0x140046A90 (MiRemoveWsle.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiCompressTbFlushList @ 0x140096CF0 (MiCompressTbFlushList.c)
 *     MI_IS_PTE_IN_WS_SWAP_SET @ 0x14009DBAC (MI_IS_PTE_IN_WS_SWAP_SET.c)
 *     MiDecrementCloneBlockReference @ 0x1400B6B30 (MiDecrementCloneBlockReference.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x1400B899C (MiRemoveLockedPageFromWorkingSet.c)
 *     MiLocateCloneAddress @ 0x1400BB990 (MiLocateCloneAddress.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiDeletePteList @ 0x1400DD960 (MiDeletePteList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     qsort @ 0x14014E520 (qsort.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     KiResetGlobalDpcWatchdogProfiler @ 0x1401D1CD8 (KiResetGlobalDpcWatchdogProfiler.c)
 *     MmFlushAllFilesystemPages @ 0x1401E5C00 (MmFlushAllFilesystemPages.c)
 *     MiGetPageFileReservationOffset @ 0x1401EE7AC (MiGetPageFileReservationOffset.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiGetUsedPtesHandle @ 0x1401EF60C (MiGetUsedPtesHandle.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiReverseSwizzleInvalidPte @ 0x1401F2760 (MiReverseSwizzleInvalidPte.c)
 *     MiTransferSoftwarePte @ 0x1401F27A4 (MiTransferSoftwarePte.c)
 *     MiRelockWorkingSetExclusive @ 0x1401F2918 (MiRelockWorkingSetExclusive.c)
 *     MiDecrementCombinedPte @ 0x1401F9558 (MiDecrementCombinedPte.c)
 *     EtwTraceShouldYieldProcessor @ 0x140225FE8 (EtwTraceShouldYieldProcessor.c)
 */

__int64 __fastcall MiDecommitPages(
        unsigned __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        __int64 a4,
        int a5,
        _QWORD *a6)
{
  _QWORD *v6; // r13
  __int64 DemandZeroPte; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  unsigned __int64 v11; // r10
  __int64 v12; // rdx
  __int64 v13; // rdi
  unsigned __int64 v14; // r11
  int v15; // eax
  unsigned __int64 BugCheckParameter4; // r12
  unsigned __int16 v17; // ax
  __int64 v18; // r14
  ULONG_PTR v19; // r15
  int v20; // esi
  struct _KEVENT *v21; // rax
  KIRQL v22; // bl
  unsigned __int64 v23; // rsi
  __int64 NextPageTable; // rax
  unsigned __int64 v25; // r15
  __int64 v26; // rax
  unsigned int v27; // esi
  _KPROCESS *Process; // r13
  ULONG_PTR v29; // r15
  int v30; // r14d
  __int64 v31; // rcx
  LONG *SharedVm; // rax
  int v33; // eax
  ULONG_PTR v34; // rsi
  __int64 v35; // rcx
  unsigned __int64 v36; // rax
  __int64 v37; // rdx
  __int64 v38; // r8
  __int64 v39; // r9
  unsigned __int64 v40; // rbx
  __int64 UsedPtesHandle; // rax
  __int64 v42; // rdx
  __int64 v43; // rcx
  ULONG_PTR *v44; // rsi
  ULONG_PTR Wsle; // r13
  unsigned __int64 v46; // rdx
  char v47; // cl
  ULONG_PTR *v48; // r12
  unsigned __int64 v49; // rax
  ULONG_PTR *v50; // r8
  ULONG_PTR v51; // r15
  __int64 v52; // r10
  __int64 v53; // r11
  unsigned __int64 v54; // rdx
  __int64 v55; // r9
  unsigned __int64 v56; // rdx
  unsigned __int64 v57; // rdx
  __int64 v58; // rsi
  ULONG_PTR v59; // r8
  __int64 v60; // r14
  __int64 v61; // r9
  int v62; // eax
  unsigned __int16 v63; // ax
  int *v64; // r14
  __int64 v65; // r15
  int *v66; // rsi
  __int64 v67; // rcx
  int **v68; // rax
  int **v69; // rcx
  ULONG_PTR v70; // r9
  int v71; // ecx
  __int64 v72; // rax
  unsigned __int64 v73; // rbx
  _QWORD *v74; // rcx
  __int64 v75; // rcx
  ULONG_PTR v76; // r9
  __int64 v77; // rbx
  ULONG_PTR v78; // rsi
  unsigned __int64 i; // rax
  unsigned int v80; // r8d
  __int64 v81; // rax
  unsigned __int64 v82; // r9
  unsigned __int64 v83; // rdx
  __int64 v84; // rdx
  unsigned __int64 v85; // rax
  __int64 v86; // r13
  __int64 v87; // r9
  int v88; // eax
  ULONG_PTR v89; // rdx
  __int64 v90; // r9
  ULONG_PTR CloneAddress; // rax
  unsigned __int64 v92; // rbx
  __int64 v93; // rax
  __int64 v94; // rdx
  __int64 v95; // r8
  __int64 v96; // r9
  ULONG_PTR v97; // r10
  BOOL v98; // esi
  __int64 v99; // rdx
  unsigned int PageFileReservationOffset; // eax
  __int64 v101; // rdx
  __int64 v102; // rdx
  __int64 v103; // rcx
  __int16 v104; // ax
  __int64 v105; // rdx
  __int64 v106; // r8
  __int64 v107; // r9
  struct _KEVENT *v108; // rsi
  unsigned int v109; // eax
  __int64 v110; // rdx
  __int64 v111; // rcx
  __int64 v112; // r9
  int v113; // r10d
  int v114; // r11d
  unsigned __int64 v115; // rax
  int v116; // r11d
  LONG *v117; // rax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v119; // ebx
  unsigned int DpcWatchdogCount; // r14d
  volatile int DpcRequestSummary; // r9d
  unsigned int DpcTimeCount; // esi
  int v123; // r8d
  _KTHREAD *NextThread; // rax
  KIRQL v126; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v128; // [rsp+48h] [rbp-B8h] BYREF
  int v129; // [rsp+50h] [rbp-B0h]
  struct _KEVENT *v130; // [rsp+58h] [rbp-A8h]
  __int64 v131; // [rsp+60h] [rbp-A0h]
  int v132; // [rsp+68h] [rbp-98h]
  unsigned __int64 v133; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v134; // [rsp+78h] [rbp-88h]
  int v135; // [rsp+80h] [rbp-80h]
  unsigned __int64 v136; // [rsp+88h] [rbp-78h]
  unsigned __int64 v137; // [rsp+90h] [rbp-70h] BYREF
  _QWORD *v138; // [rsp+98h] [rbp-68h]
  unsigned __int64 v139; // [rsp+A0h] [rbp-60h]
  int v140; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v141; // [rsp+B0h] [rbp-50h]
  __int64 v142; // [rsp+B8h] [rbp-48h]
  __int64 v143; // [rsp+C0h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  int v145; // [rsp+E0h] [rbp-20h] BYREF
  __int16 v146; // [rsp+E4h] [rbp-1Ch]
  __int64 v147; // [rsp+E8h] [rbp-18h]
  __int64 v148; // [rsp+F0h] [rbp-10h]
  _QWORD Base[257]; // [rsp+F8h] [rbp-8h] BYREF

  v6 = a6;
  v141 = a4;
  v139 = a2;
  v147 = 256LL;
  v145 = 1;
  v146 = 0;
  v148 = 0LL;
  Base[0] = 0LL;
  v132 = 0;
  DemandZeroPte = MiMakeDemandZeroPte(16LL, a2, a3, a4);
  v12 = *(unsigned int *)(v10 + 52);
  v13 = DemandZeroPte;
  v14 = 0xFFFFF68000000000uLL;
  if ( (v12 & 0xFFFFFFFF7FFFFFFFuLL | ((unsigned __int64)*(unsigned __int8 *)(v10 + 34) << 31)) == 0x7FFFFFFFELL )
  {
    v13 = MiMakeDemandZeroPte((*(_DWORD *)(v10 + 48) >> 3) & 0x1F, v12, v9, v10);
LABEL_4:
    v136 = v14
         + 8
         * ((*(unsigned int *)(v10 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v10 + 33) << 32)) & 0xFFFFFFFFFLL);
    goto LABEL_6;
  }
  if ( (int)v12 < 0 )
    goto LABEL_4;
  v136 = v11;
  v132 = MiVadPureReserve(v10);
LABEL_6:
  v15 = 1;
  if ( !a5 )
    v15 = 3;
  v135 = v15;
  BugCheckParameter4 = v14 + ((a1 >> 9) & 0x7FFFFFFFF8LL);
  v129 = 1;
  v17 = *(_WORD *)(v9 + 1444);
  v18 = v9 + 1280;
  v19 = a1 & 0xFFFFFFFFFFFFF000uLL;
  v138 = (_QWORD *)BugCheckParameter4;
  v134 = v19;
  v131 = v9 + 1280;
  v20 = 1;
  if ( v17 == 1023 )
    v21 = (struct _KEVENT *)MiSystemPartition;
  else
    v21 = *(struct _KEVENT **)(qword_140327038 + 8LL * v17);
  v130 = v21;
  v22 = MiLockWorkingSetExclusive(v9 + 1280);
  v126 = v22;
  if ( BugCheckParameter4 <= v139 )
  {
    v142 = 0xF000000000000LL;
    while ( 1 )
    {
      if ( v20 == 1 || (BugCheckParameter4 & 0xFFF) == 0 )
      {
        if ( HIDWORD(v147) )
          MiDeletePteList(&v145, a3, v13, v6);
        if ( v132 )
        {
          v23 = v139;
          NextPageTable = MiGetNextPageTable(BugCheckParameter4, v139, 0LL, v22, 4, &v140);
          v25 = NextPageTable;
          if ( !NextPageTable )
          {
            v6[3] += ((__int64)(v23 - BugCheckParameter4) >> 3) + 1;
            goto LABEL_214;
          }
          v138 = (_QWORD *)NextPageTable;
          v26 = (__int64)(NextPageTable - BugCheckParameter4) >> 3;
          BugCheckParameter4 = v25;
          v6[3] += v26;
          v19 = (__int64)(v25 << 25) >> 16;
          v134 = v19;
          v129 = 0;
        }
        else
        {
          v27 = (*(_DWORD *)(v141 + 48) >> 8) & 0x3F;
          Process = KeGetCurrentThread()->ApcState.Process;
          if ( !MiIsAddressValid(BugCheckParameter4) )
          {
            v29 = ((unsigned __int64)v27 << 57) | 0x100000000000002LL;
            v30 = v135 & 1;
            do
            {
              v31 = (__int64)&Process[1].IdealNode[12];
              if ( v30 )
              {
                MiUnlockWorkingSetExclusive(v31, v126);
              }
              else
              {
                SharedVm = MiGetSharedVm(v31);
                ExReleaseSpinLockSharedFromDpcLevel(SharedVm);
                __writecr8(v126);
              }
              v33 = MmAccessFault(v29, BugCheckParameter4, 0, 0LL);
              v34 = v33;
              if ( v33 < 0 )
              {
                MmFlushAllFilesystemPages(1LL);
                KeBugCheckEx(0x7Au, 1uLL, v34, (ULONG_PTR)Process, BugCheckParameter4);
              }
              v35 = (__int64)&Process[1].IdealNode[12];
              if ( v30 )
                MiLockWorkingSetExclusive(v35);
              else
                MiLockWorkingSetShared(v35);
            }
            while ( !MiIsAddressValid(BugCheckParameter4) );
            v19 = v134;
            v18 = v131;
          }
          v6 = a6;
          v129 = 0;
        }
      }
      v36 = MI_READ_PTE_LOCK_FREE(BugCheckParameter4);
      v128 = v36;
      v40 = v36;
      if ( !v36 )
      {
        UsedPtesHandle = MiGetUsedPtesHandle(v19);
        MiIncreaseUsedPtesCount(UsedPtesHandle, 1LL);
        if ( BugCheckParameter4 > v136 )
          ++v6[3];
        *(_QWORD *)BugCheckParameter4 = v13;
        if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4, v42) )
          goto LABEL_36;
        goto LABEL_180;
      }
      if ( (v36 & 1) == 0 )
      {
        if ( (v36 & 0x400) != 0 )
        {
          MiGetPrototypePteDirect(v36);
          if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v40) )
          {
            v88 = MiDecrementCombinedPte(v87);
LABEL_140:
            if ( v88 == 3 )
            {
              ++v6[1];
            }
            else if ( v88 == 5 )
            {
              ++v6[2];
            }
          }
          else if ( !(unsigned int)MiIsPrototypePteVadLookup(v40) )
          {
            CloneAddress = MiLocateCloneAddress(a3, v90);
            if ( CloneAddress )
            {
              v88 = MiDecrementCloneBlockReference(CloneAddress, v89);
              goto LABEL_140;
            }
          }
          *(_QWORD *)BugCheckParameter4 = v13;
          if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4, v89) )
LABEL_36:
            MiWritePteShadow(v43, v13);
        }
        else if ( (v36 & 0x800) != 0 )
        {
          v92 = 0LL;
          v133 = 0LL;
          v93 = MiLockTransitionLeafPage(BugCheckParameter4);
          v97 = v93;
          if ( !v93 )
            goto LABEL_211;
          v98 = 1;
          if ( !*(_WORD *)(v93 + 32) )
          {
            v133 = *(_QWORD *)(v93 + 16);
            v92 = v133;
            if ( (v133 & 2) != 0 )
              v98 = MI_IS_PTE_IN_WS_SWAP_SET(&v133, v94, v95, v96) != 0;
          }
          if ( (unsigned int)MiDeleteTransitionPte(BugCheckParameter4, v97) == 3 )
            ++v6[1];
          if ( v92 )
            MiReleasePageFileSpace(v130, v92, v98);
          _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
          v99 = v13;
          if ( !v98 )
          {
            PageFileReservationOffset = MiGetPageFileReservationOffset(&v133);
            v99 = MiTransferSoftwarePte(v13, v101, PageFileReservationOffset, 2LL);
          }
          *(_QWORD *)BugCheckParameter4 = v99;
          if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4, v99) )
            MiWritePteShadow(v103, v102);
        }
        else
        {
          if ( ((v36 >> 5) & 0x1F) == 0x10 )
            ++v6[3];
          v104 = MiReverseSwizzleInvalidPte(v36, v37, v38, v39);
          if ( (v104 & 0x400) != 0 || (v104 & 0x800) != 0 || (v104 & 4) != 0 )
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(a3 + 920), 0xFFFFFFFFFFFFFFFFuLL);
            v40 = v128;
          }
          v107 = v13;
          if ( ((v40 >> 1) & 1) == 0 || (unsigned int)MI_IS_PTE_IN_WS_SWAP_SET(&v128, v105, v106, v13) )
          {
            v108 = v130;
          }
          else
          {
            v108 = v130;
            v109 = MiGetPageFileReservationOffset(&v128);
            v107 = MiTransferSoftwarePte(v13, v110, v109, 2LL);
          }
          *(_QWORD *)BugCheckParameter4 = v107;
          if ( (unsigned int)MiPteInShadowRange(BugCheckParameter4, v105) )
            MiWritePteShadow(v111, v112);
          v137 = v40;
          if ( (v40 & 4) != 0 )
          {
            v115 = MI_READ_PTE_LOCK_FREE(&v137);
            if ( !v116 )
              v115 &= ~2uLL;
          }
          else if ( v114 && v113 )
          {
            v115 = MI_READ_PTE_LOCK_FREE(&v137);
          }
          else
          {
            v115 = 0LL;
          }
          v137 = v115;
          if ( v115 )
            MiReleasePageFileInfo(v108, v115, 0);
        }
LABEL_180:
        v86 = (__int64)a6;
        goto LABEL_181;
      }
      MI_GET_PFN_FROM_PTE(&v128);
      if ( (*(_BYTE *)(v18 + 184) & 7) == 2 )
        v44 = &BugCheckParameter2;
      else
        v44 = (ULONG_PTR *)(*(_QWORD *)(v18 + 16) + 416LL);
      v128 = (unsigned __int64)v44;
      Wsle = MiLocateWsle(v19);
      v143 = *(_QWORD *)(v44[10] + Wsle * *((unsigned int *)v44 + 8));
      if ( (v143 & 8) != 0
        && (*(_QWORD *)(MI_GET_PFN_FROM_PTE(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) + 40) & 0x200000000000000LL) == 0 )
      {
        --*(_QWORD *)(v18 + 136);
        if ( v19 < 0xFFFFF68000000000uLL || v19 > 0xFFFFF6FFFFFFFFFFuLL )
          --*(_QWORD *)(v18 + 120);
      }
      MiRemoveWsle(Wsle);
      v47 = *(_BYTE *)(v18 + 184) & 7;
      if ( v47 == 2 )
        v48 = &BugCheckParameter2;
      else
        v48 = (ULONG_PTR *)(*(_QWORD *)(v18 + 16) + 416LL);
      if ( Wsle >= v48[1] )
      {
        v46 = v48[10] + Wsle * *((unsigned int *)v48 + 8);
        v49 = *(_QWORD *)v46;
        if ( v47 == 2 )
          v50 = &BugCheckParameter2;
        else
          v50 = (ULONG_PTR *)(*(_QWORD *)(v18 + 16) + 416LL);
        if ( *((_DWORD *)v50 + 8) == 16 )
        {
          v51 = v50[10];
          if ( (__int64)(v46 - v51) >> 4 >= v50[1] )
          {
            v52 = *(unsigned int *)(v46 + 8) | (v49 >> 16) & 0xF00000000LL;
            v53 = *(unsigned int *)(v46 + 12) | (v49 >> 20) & 0xF00000000LL;
            v54 = *(_QWORD *)v46;
            v55 = 2 * ((unsigned int)(v49 >> 9) & 7);
            if ( (v49 & 0x800000000000LL) != 0 )
              v56 = v54 | 0xFFFF000000000000uLL;
            else
              v56 = v54 & 0xFFFFFFFFFFFFLL;
            if ( v56 < 0xFFFFF68000000000uLL
              || ((v49 & 0x800000000000LL) == 0 ? (v57 = v49 & 0xFFFFFFFFFFFFLL) : (v57 = v49 | 0xFFFF000000000000uLL),
                  v57 > 0xFFFFF6FFFFFFFFFFuLL) )
            {
              v55 = (unsigned int)(v55 + 1);
            }
            v58 = *(_QWORD *)(v18 + 16);
            v59 = v51 + 16 * v52;
            v60 = (unsigned int)v55;
            v46 = v51 + 16 * v53;
            v61 = 2 * (v55 + 10);
            if ( v53 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v58 + 8 * v61) = v52;
            }
            else
            {
              *(_DWORD *)(v46 + 8) = v52;
              *(_QWORD *)v46 ^= v142 & (*(_QWORD *)v46 ^ (v52 << 16));
            }
            if ( v52 == 0xFFFFFFFFFLL )
            {
              *(_QWORD *)(v58 + 8 * v61 + 8) = v53;
            }
            else
            {
              *(_DWORD *)(v59 + 12) = v53;
              v46 = 0xF0000000000000LL;
              *(_QWORD *)v59 ^= (*(_QWORD *)v59 ^ (v53 << 20)) & 0xF0000000000000LL;
            }
            --*(_QWORD *)(v58 + 8 * v60 + 32);
            v18 = v131;
          }
        }
        v62 = (v49 >> 9) & 7;
        if ( v62 )
        {
          --*(_QWORD *)(v18 + 8LL * (unsigned int)(v62 - 1) + 40);
          if ( v62 == 7 )
          {
            v63 = *(_WORD *)(v18 + 164);
            v46 = *(_QWORD *)(v18 + 88);
            v64 = v63 == 1023 ? MiSystemPartition : *(int **)(qword_140327038 + 8LL * v63);
            v65 = *((_QWORD *)v64 + 781);
            if ( v46 < *(_QWORD *)(v65 + 64) )
            {
              v66 = (int *)(a3 + 1304);
              if ( *(_QWORD *)(a3 + 1304) )
              {
                if ( *((int **)v64 + 783) != v66 )
                {
                  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140327780, &LockHandle);
                  if ( *(_BYTE *)(v65 + 53) || !*(_QWORD *)v66 )
                  {
                    *(_BYTE *)(v65 + 54) = 1;
                  }
                  else
                  {
                    v67 = *(_QWORD *)v66;
                    v68 = *(int ***)(a3 + 1312);
                    if ( *(int **)(*(_QWORD *)v66 + 8LL) != v66 || *v68 != v66 )
                      __fastfail(3u);
                    *v68 = (int *)v67;
                    *(_QWORD *)(v67 + 8) = v68;
                    v69 = (int **)*((_QWORD *)v64 + 783);
                    if ( *v69 != v64 + 1564 )
                      __fastfail(3u);
                    *(_QWORD *)v66 = v64 + 1564;
                    *(_QWORD *)(a3 + 1312) = v69;
                    *v69 = v66;
                    *((_QWORD *)v64 + 783) = v66;
                  }
                  KxReleaseQueuedSpinLock(&LockHandle);
                }
              }
            }
          }
        }
      }
      v70 = *v48;
      if ( *v48 != 0xFFFFFFFFFLL )
      {
        if ( v70 < v48[1] || v70 > v48[3] )
          KeBugCheckEx(0x1Au, 0x5004uLL, (ULONG_PTR)v48, v70, v48[3]);
        v46 = v48[10] + v70 * *((unsigned int *)v48 + 8);
        *(_QWORD *)v46 ^= (*(_DWORD *)v46 ^ (2 * (_DWORD)Wsle)) & 0xFFFFFFE;
      }
      v18 = v131;
      *(_QWORD *)(v48[10] + Wsle * *((unsigned int *)v48 + 8)) = (v70 << 28) | 0xFFFFFFE;
      *v48 = Wsle;
      --*(_QWORD *)(v18 + 128);
      v19 = v134;
      if ( v134 < 0xFFFFF68000000000uLL || v134 > 0xFFFFF6FFFFFFFFFFuLL )
      {
        --*(_QWORD *)(v18 + 112);
        v71 = 1;
      }
      else
      {
        v71 = 0;
      }
      if ( (*(_BYTE *)(v18 + 184) & 7) == 2 )
      {
        --qword_140327D48;
        if ( v71 == 1 )
          --qword_140327D50;
      }
      if ( Wsle < *(_QWORD *)(v128 + 8) )
      {
        v72 = MI_GET_PFN_FROM_PTE(((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        MiRemoveLockedPageFromWorkingSet(v18, v19, Wsle, v72);
      }
      BugCheckParameter4 = (unsigned __int64)v138;
      v73 = v40 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      v74 = v138;
      v128 = v73;
      *v138 = v73;
      if ( (unsigned int)MiPteInShadowRange(v74, v46) )
        MiWritePteShadow(v75, v73);
      v77 = 1LL;
      v78 = v19;
      if ( v145 != 1 )
      {
        if ( (v146 & 4) == 0 && v19 >= v76 && v19 <= 0xFFFFF6FFFFFFFFFFuLL )
          LOBYTE(v146) = v146 | 4;
        if ( v145 )
        {
          for ( i = v19; i >= v76; i = (__int64)((i << 25) - (v76 << 25)) >> 16 )
          {
            if ( i > 0xFFFFF6FFFFFFFFFFuLL )
              break;
          }
        }
      }
      v80 = HIDWORD(v147);
      if ( HIDWORD(v147) )
      {
        v81 = Base[HIDWORD(v147) - 1];
        if ( (v81 & 0xC00) == 0 )
        {
          v82 = Base[HIDWORD(v147) - 1] & 0x3FFLL;
          if ( (v81 & 0xFFFFFFFFFFFFF000uLL) + (((v81 & 0x3FF) + 1) << 12) == v19 && v82 + 1 >= v82 && v82 + 1 <= 0x3FF )
            goto LABEL_116;
          if ( (v81 & 0xC00) == 0 && (v81 & 0xFFFFFFFFFFFFF000uLL) == v19 + 4096 )
          {
            v83 = (Base[HIDWORD(v147) - 1] & 0x3FFLL) + 1;
            if ( v83 > (Base[HIDWORD(v147) - 1] & 0x3FFuLL) && v83 <= 0x3FF )
              break;
          }
        }
      }
      if ( HIDWORD(v147) < (unsigned int)v147 )
      {
        while ( 1 )
        {
          v84 = 1024LL;
          if ( (unsigned __int64)(v77 - 1) <= 0x3FF )
            v84 = v77;
          v77 -= v84;
          v85 = v78 & 0xFFFFFFFFFFFFF000uLL | (v84 - 1) & 0x3FF;
          v78 += v84 << 12;
          Base[v80] = v85;
          v148 += v84;
          v80 = HIDWORD(v147) + 1;
          HIDWORD(v147) = v80;
          if ( v80 == (_DWORD)v147 )
          {
            qsort(Base, v80, 8uLL, MiTbFlushSort);
            MiCompressTbFlushList(&v145);
            v80 = HIDWORD(v147);
            if ( HIDWORD(v147) == (_DWORD)v147 )
              break;
          }
          if ( !v77 )
            goto LABEL_132;
        }
        if ( !v77 )
          goto LABEL_132;
        v148 = HIDWORD(v147);
      }
      HIBYTE(v146) = 1;
LABEL_132:
      v86 = (__int64)a6;
      if ( v80 == (_DWORD)v147 - 1 )
        MiDeletePteList(&v145, a3, v13, a6);
LABEL_181:
      BugCheckParameter4 += 8LL;
      v138 = (_QWORD *)BugCheckParameter4;
      if ( (BugCheckParameter4 & 0x78) == 0 )
      {
        v117 = &dword_140327CC0;
        if ( (*(_BYTE *)(v18 + 184) & 7) != 2 )
          v117 = (LONG *)(v18 + 192);
        if ( (*v117 & 0x40000000) != 0 )
          goto LABEL_206;
      }
      CurrentPrcb = KeGetCurrentPrcb();
      v119 = 0;
      DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
      DpcRequestSummary = CurrentPrcb->DpcRequestSummary;
      DpcTimeCount = CurrentPrcb->DpcTimeCount;
      if ( (DpcRequestSummary & 1) != 0 )
      {
        v123 = 1;
        if ( DpcTimeCount > 7 )
        {
          if ( CurrentPrcb->QuantumEnd )
          {
            v119 = 1;
            goto LABEL_203;
          }
LABEL_198:
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v119 = 5;
          }
          else
          {
            if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
              goto LABEL_202;
            v119 = 6;
          }
          goto LABEL_203;
        }
      }
      else
      {
        v123 = 0;
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v119 = 2;
          goto LABEL_203;
        }
        if ( CurrentPrcb->QuantumEnd )
        {
          v119 = 3;
          goto LABEL_203;
        }
        NextThread = CurrentPrcb->NextThread;
        if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
        {
          v119 = 4;
          goto LABEL_203;
        }
      }
      if ( DpcWatchdogCount > 7 )
      {
        if ( v123 )
          goto LABEL_198;
LABEL_202:
        _disable();
        CurrentPrcb->DpcWatchdogCount = 0;
        CurrentPrcb->DpcTimeCount = 0;
        KiResetGlobalDpcWatchdogProfiler();
        _enable();
LABEL_203:
        if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
          EtwTraceShouldYieldProcessor(v119, DpcWatchdogCount, DpcTimeCount);
        v18 = v131;
        if ( !v119 )
          goto LABEL_210;
LABEL_206:
        if ( HIDWORD(v147) )
          MiDeletePteList(&v145, a3, v13, v86);
        v129 = 1;
        MiRelockWorkingSetExclusive(v18, v126);
        goto LABEL_210;
      }
      v18 = v131;
LABEL_210:
      v19 += 4096LL;
      v134 = v19;
LABEL_211:
      v6 = a6;
      v22 = v126;
      if ( BugCheckParameter4 > v139 )
        goto LABEL_214;
      v20 = v129;
    }
    v81 -= 4096LL;
LABEL_116:
    ++v148;
    Base[HIDWORD(v147) - 1] = (v81 ^ (v81 + 1)) & 0x3FF ^ v81;
    v80 = HIDWORD(v147);
    goto LABEL_132;
  }
LABEL_214:
  if ( HIDWORD(v147) )
    MiDeletePteList(&v145, a3, v13, v6);
  return MiUnlockWorkingSetExclusive(v18, v22);
}
