/*
 * XREFs of MiDeleteVirtualAddresses @ 0x140057CB0
 * Callers:
 *     MiDeleteFinalPageTables @ 0x1400055B8 (MiDeleteFinalPageTables.c)
 *     MiDeleteVad @ 0x14006AE10 (MiDeleteVad.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiDeleteRotateAndStopFaults @ 0x140103598 (MiDeleteRotateAndStopFaults.c)
 * Callees:
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiCreateDecayPfn @ 0x140011C44 (MiCreateDecayPfn.c)
 *     MiDecrementCloneBlockReference @ 0x140011D94 (MiDecrementCloneBlockReference.c)
 *     MiLocateCloneAddress @ 0x14001EDA8 (MiLocateCloneAddress.c)
 *     MiRotatedToFrameBuffer @ 0x14001EE20 (MiRotatedToFrameBuffer.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x140021840 (MiRemoveLockedPageFromWorkingSet.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiDeletePteRun @ 0x14004FE20 (MiDeletePteRun.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x14005A690 (MiLogPageAccess.c)
 *     MiUpdateWsleHash @ 0x14005A900 (MiUpdateWsleHash.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiGetNextPageTable @ 0x14005F080 (MiGetNextPageTable.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiDeletePageTableHierarchy @ 0x14006D570 (MiDeletePageTableHierarchy.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiDecayPfnFullyInitialized @ 0x1400B253C (MiDecayPfnFullyInitialized.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiCompressTbFlushList @ 0x1400D92A0 (MiCompressTbFlushList.c)
 *     MiLockSetPfnPriority @ 0x1400E8410 (MiLockSetPfnPriority.c)
 *     MiUnmapFrameBuffer @ 0x140103140 (MiUnmapFrameBuffer.c)
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     qsort @ 0x140144B80 (qsort.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401CE7C4 (MI_GET_PFN_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_INTERLOCKED_EXCHANGE_PTE @ 0x1401D1940 (MI_INTERLOCKED_EXCHANGE_PTE.c)
 *     MiLogRemoveWsleEvent @ 0x1401D297C (MiLogRemoveWsleEvent.c)
 *     MiPteHasShadow @ 0x1401DE8C4 (MiPteHasShadow.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x1401DEC20 (MI_GET_USED_PTES_HANDLE.c)
 *     EtwTraceShouldYieldProcessor @ 0x14020E308 (EtwTraceShouldYieldProcessor.c)
 */

char __fastcall MiDeleteVirtualAddresses(
        unsigned __int64 a1,
        unsigned __int64 a2,
        int a3,
        unsigned __int8 a4,
        __int64 a5)
{
  char v5; // bl
  _KPROCESS *Process; // r13
  unsigned __int16 SignalState; // ax
  __int64 NextPageTable; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdi
  ULONG_PTR v11; // r12
  int v12; // eax
  ULONG_PTR v13; // r14
  _BOOL8 v14; // rdx
  ULONG_PTR v15; // rbx
  __int64 v16; // r8
  ULONG_PTR v17; // rdi
  int v18; // eax
  unsigned __int64 v19; // rax
  ULONG_PTR v20; // r15
  ULONG_PTR v21; // rax
  ULONG_PTR v22; // rdi
  unsigned __int16 v23; // bx
  unsigned __int16 v24; // cx
  __int64 v25; // rbx
  ULONG_PTR v26; // rdi
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int v28; // ebx
  unsigned int DpcWatchdogCount; // r11d
  __int64 DpcRequestSummary; // r9
  unsigned int DpcTimeCount; // r10d
  __int64 Wsle; // rax
  char v33; // dl
  __int64 v34; // rcx
  unsigned int v35; // eax
  struct _LIST_ENTRY *v36; // rbx
  __int64 v37; // r13
  __int64 v38; // r8
  ULONG_PTR v39; // r12
  ULONG_PTR v40; // rcx
  ULONG_PTR v41; // r15
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v43; // rcx
  unsigned __int64 v44; // rcx
  unsigned __int64 v45; // rcx
  unsigned __int64 v46; // rcx
  ULONG_PTR *v47; // rax
  unsigned __int64 v48; // r15
  ULONG_PTR v49; // r12
  unsigned __int64 v50; // r8
  __int64 v51; // r14
  unsigned __int64 *v52; // rdx
  unsigned __int64 v53; // rax
  __int64 v54; // r10
  __int64 v55; // r11
  __int64 v56; // r8
  unsigned __int64 v57; // rcx
  unsigned __int64 v58; // rcx
  __int64 v59; // rbx
  __int64 v60; // r9
  __int64 v61; // r8
  __int64 v62; // rdx
  int v63; // eax
  int *v64; // r14
  unsigned __int16 v65; // ax
  __int64 v66; // r15
  __int64 v67; // rbx
  __int64 v68; // rcx
  _QWORD *v69; // rax
  int **v70; // rcx
  ULONG_PTR v71; // r9
  _QWORD *v72; // rdx
  __int64 v73; // rax
  __int64 v74; // rbx
  unsigned int v75; // eax
  __int64 v76; // rdx
  __int64 v77; // rcx
  unsigned int v78; // r8d
  unsigned __int64 v79; // rdx
  unsigned int v80; // r8d
  __int64 v81; // rbx
  ULONG_PTR v82; // rdi
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // r9
  unsigned __int64 v85; // r10
  unsigned __int64 v86; // rcx
  __int64 v87; // rdx
  __int64 v88; // rdx
  unsigned __int64 v89; // rax
  bool v90; // zf
  unsigned __int64 v91; // rdx
  ULONG_PTR v92; // rax
  int v93; // eax
  _QWORD *CloneAddress; // rax
  ULONG_PTR v95; // rdx
  ULONG_PTR v96; // rbx
  __int64 v97; // rax
  _KTHREAD *NextThread; // rax
  __int64 v99; // r8
  unsigned __int8 v101; // [rsp+30h] [rbp-D0h]
  unsigned __int16 v102; // [rsp+32h] [rbp-CEh]
  unsigned __int16 v103; // [rsp+38h] [rbp-C8h]
  unsigned __int64 v104; // [rsp+40h] [rbp-C0h] BYREF
  ULONG_PTR v105; // [rsp+48h] [rbp-B8h]
  int v106; // [rsp+50h] [rbp-B0h]
  ULONG_PTR BugCheckParameter2; // [rsp+58h] [rbp-A8h]
  int v108; // [rsp+60h] [rbp-A0h]
  ULONG_PTR DecayPfn; // [rsp+68h] [rbp-98h]
  ULONG_PTR v110; // [rsp+70h] [rbp-90h] BYREF
  struct _LIST_ENTRY *Flink; // [rsp+78h] [rbp-88h]
  ULONG_PTR v112; // [rsp+80h] [rbp-80h]
  int v113; // [rsp+88h] [rbp-78h] BYREF
  ULONG_PTR v114; // [rsp+90h] [rbp-70h]
  int v115; // [rsp+98h] [rbp-68h]
  __int64 v116; // [rsp+A0h] [rbp-60h]
  int *v117; // [rsp+A8h] [rbp-58h]
  unsigned __int64 v118; // [rsp+B0h] [rbp-50h]
  _KPROCESS *v119; // [rsp+B8h] [rbp-48h]
  ULONG_PTR v120; // [rsp+C0h] [rbp-40h]
  __int64 v121; // [rsp+C8h] [rbp-38h]
  ULONG_PTR v122; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v123; // [rsp+D8h] [rbp-28h]
  struct _LIST_ENTRY *v124; // [rsp+E0h] [rbp-20h]
  char v125[8]; // [rsp+E8h] [rbp-18h] BYREF
  char v126[8]; // [rsp+F0h] [rbp-10h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F8h] [rbp-8h] BYREF
  int v128; // [rsp+110h] [rbp+10h] BYREF
  __int16 v129; // [rsp+114h] [rbp+14h]
  __int64 v130; // [rsp+118h] [rbp+18h]
  __int64 v131; // [rsp+120h] [rbp+20h]
  _QWORD Base[21]; // [rsp+128h] [rbp+28h] BYREF

  v116 = a5;
  v5 = a3;
  v101 = a4;
  v106 = a3;
  Process = KeGetCurrentThread()->ApcState.Process;
  v119 = Process;
  SignalState = Process[2].Header.SignalState;
  if ( SignalState == 1023 )
    v117 = &MiSystemPartition;
  else
    v117 = *(int **)(qword_1402FEC28 + 8LL * SignalState);
  v128 = 1;
  LOBYTE(NextPageTable) = 0;
  DecayPfn = 0LL;
  v130 = 20LL;
  v129 = 0;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v131 = 0LL;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Base[0] = 0LL;
  v122 = v9;
  if ( v10 <= v9 )
  {
    v123 = 0xFFFFF68000000000uLL;
    v121 = 0xF000000000000LL;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v10, v9, (unsigned int)&v128, a4, 4, (__int64)v125);
      v112 = NextPageTable;
      v11 = NextPageTable;
      if ( !NextPageTable )
        return NextPageTable;
      v12 = BYTE3(Process[2].DirectoryTableBase) & 1;
      v115 = v12;
      if ( (v5 & 2) != 0 && !v12 && dword_1402FED88 )
        Flink = Process[2].Header.WaitListHead.Flink;
      else
        Flink = 0LL;
      v108 = 0;
      v13 = (__int64)(v11 << 25) >> 16;
      BugCheckParameter2 = v13;
      v15 = MI_GET_USED_PTES_HANDLE(v13);
      v120 = v15;
      v102 = 0;
      v17 = 0LL;
      v105 = 0LL;
      v18 = (*(_DWORD *)(v15 + 16) >> 14) & 0x3FF;
      v114 = 0LL;
      v103 = v18;
      v19 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      if ( v19 > v9 )
        v19 = v9;
      v20 = 0LL;
      v118 = v19;
      if ( v11 > v19 )
        goto LABEL_199;
      while ( 1 )
      {
        v21 = MI_READ_PTE_LOCK_FREE(v11);
        v104 = v21;
        v22 = v21;
        if ( !v21 )
        {
          v26 = v118;
          goto LABEL_216;
        }
        v23 = v103;
        v24 = v102 + 1;
        v102 = v24;
        if ( v24 > v103 )
          KeBugCheckEx(0x1Au, 0x41793uLL, v11, v24, v103);
        if ( (v21 & 1) != 0 )
        {
          v25 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v104) - 0x58000000000LL;
          if ( (v106 & 8) != 0 && MiRotatedToFrameBuffer(v11) )
          {
            MiUnmapFrameBuffer(v11, 3LL, 0LL, v126);
            MiInsertTbFlushEntry(&v128, v13, 1LL, 0LL);
            goto LABEL_21;
          }
          if ( Flink )
          {
            Wsle = MiLocateWsle(BugCheckParameter2);
            if ( (*(_BYTE *)v11 & 0x20) != 0
              && (*(_DWORD *)((_BYTE *)&Flink[31].Flink->Flink + Wsle * LODWORD(Flink[4].Flink)) & 0xE00) != 0xE00LL )
            {
              MiLogPageAccess(&Process[1].IdealNode[12], v11);
            }
            v13 = BugCheckParameter2;
          }
          if ( (*(_QWORD *)(v25 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          {
            v33 = v106;
            if ( (v106 & 1) != 0 && (unsigned int)MI_GET_PFN_PRIORITY(v25) - 3 <= 2 )
            {
              MiLockSetPfnPriority(v34, 2LL);
              v33 = v106;
            }
            if ( (v33 & 4) != 0
              && !DecayPfn
              && (v22 & 0x42) == 0
              && (*(_QWORD *)(v25 + 40) & 0x200000000000000LL) != 0
              && (*(_BYTE *)(v25 + 34) & 0x10) == 0 )
            {
              v35 = MI_GET_PFN_PRIORITY(v25);
              if ( v35 < 5 )
                DecayPfn = (ULONG_PTR)MiCreateDecayPfn(v35);
            }
          }
          if ( !v115 )
          {
            v36 = Process[2].Header.WaitListHead.Flink;
            v37 = (__int64)&Process[1].IdealNode[12];
            v124 = v36;
            v39 = MiLocateWsle(v13);
            v40 = v39 * LODWORD(v36[4].Flink);
            v104 = v39;
            if ( (*(__int64 *)((_BYTE *)&v36[31].Flink->Flink + v40) & 8) != 0
              && (*(_QWORD *)(MI_GET_PFN_FROM_PTE(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL) + 40) & 0x200000000000000LL) == 0 )
            {
              --*(_QWORD *)(v37 + 128);
              if ( v13 + 0x98000000000LL > 0x7FFFFFFFFFLL )
                --*(_QWORD *)(v37 + 112);
            }
            v41 = *(_QWORD *)(v37 + 184);
            if ( v39 > *(_QWORD *)(v41 + 32) )
              KeBugCheckEx(0x1Au, 0x41785uLL, v41, v39, 0LL);
            BugCheckParameter4 = *(_QWORD *)(*(_QWORD *)(v41 + 496) + v39 * *(unsigned int *)(v41 + 64));
            if ( (BugCheckParameter4 & 1) == 0 )
              KeBugCheckEx(0x1Au, 0x5010uLL, v41, v39, BugCheckParameter4);
            v43 = *(_QWORD *)(*(_QWORD *)(v41 + 496) + v39 * *(unsigned int *)(v41 + 64));
            if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
              v44 = v43 | 0xFFFF000000000000uLL;
            else
              v44 = v43 & 0xFFFFFFFFFFFFLL;
            v45 = v44 & 0xFFFFFFFFFFFFF000uLL;
            if ( (LONG *)v37 == &dword_1402FFA80 )
            {
              if ( PsNtosImageBase
                && (v45 >= (unsigned __int64)PsNtosImageBase && v45 < PsNtosImageEnd
                 || v45 >= (unsigned __int64)PsHalImageBase && v45 < PsHalImageEnd) )
              {
                LODWORD(xmmword_1402FE598) = xmmword_1402FE598 - 1;
              }
              else if ( v45 + 0x80000000000LL <= 0x7FFFFFFFFFLL )
              {
                --DWORD1(xmmword_1402FE598);
              }
            }
            if ( (BugCheckParameter4 & 8) == 0 && (BugCheckParameter4 & 4) != 0 )
              MiUpdateWsleHash(v45, v39, v37, 1LL);
            if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
            {
              if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
                v46 = BugCheckParameter4 | 0xFFFF000000000000uLL;
              else
                v46 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
              MiLogRemoveWsleEvent(v46, *(_BYTE *)(v37 + 216) & 7, v38);
            }
            v47 = (ULONG_PTR *)(*(_QWORD *)(v41 + 496) + v39 * *(unsigned int *)(v41 + 64));
            v48 = v104;
            *v47 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL;
            v49 = *(_QWORD *)(v37 + 184);
            v50 = *(_QWORD *)(v49 + 8);
            if ( v48 >= v50 )
            {
              v51 = *(_QWORD *)(v49 + 496);
              v52 = (unsigned __int64 *)(v51 + v48 * *(unsigned int *)(v49 + 64));
              v53 = *v52;
              if ( *(_DWORD *)(v49 + 64) == 16 && (__int64)(v48 * *(unsigned int *)(v49 + 64)) >> 4 >= v50 )
              {
                v54 = *((unsigned int *)v52 + 2) | (v53 >> 16) & 0xF00000000LL;
                v55 = *((unsigned int *)v52 + 3) | (v53 >> 20) & 0xF00000000LL;
                v56 = 2 * ((unsigned int)(v53 >> 9) & 7);
                if ( (v53 & 0x800000000000LL) != 0 )
                  v57 = v53 | 0xFFFF000000000000uLL;
                else
                  v57 = v53 & 0xFFFFFFFFFFFFLL;
                if ( v57 < v123
                  || ((v53 & 0x800000000000LL) == 0
                    ? (v58 = v53 & 0xFFFFFFFFFFFFLL)
                    : (v58 = v53 | 0xFFFF000000000000uLL),
                      v58 > 0xFFFFF6FFFFFFFFFFuLL) )
                {
                  v56 = (unsigned int)(v56 + 1);
                }
                v59 = (unsigned int)v56;
                v60 = 2 * (v56 + 15);
                v61 = v51 + 16 * v54;
                v62 = v51 + 16 * v55;
                if ( v55 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v49 + 8 * v60) = v54;
                }
                else
                {
                  *(_DWORD *)(v62 + 8) = v54;
                  *(_QWORD *)v62 ^= v121 & (*(_QWORD *)v62 ^ (v54 << 16));
                }
                if ( v54 == 0xFFFFFFFFFLL )
                {
                  *(_QWORD *)(v49 + 8 * v60 + 8) = v55;
                }
                else
                {
                  *(_DWORD *)(v61 + 12) = v55;
                  *(_QWORD *)v61 ^= (*(_QWORD *)v61 ^ (v55 << 20)) & 0xF0000000000000LL;
                }
                --*(_QWORD *)(v49 + 8 * v59 + 112);
              }
              v63 = (v53 >> 9) & 7;
              if ( v63 )
              {
                --*(_QWORD *)(v37 + 8LL * (unsigned int)(v63 - 1) + 40);
                if ( v63 == 7 )
                {
                  v64 = &MiSystemPartition;
                  if ( (*(_BYTE *)(v37 + 216) & 7) == 0 )
                  {
                    v65 = *(_WORD *)(v37 + 180);
                    if ( v65 != 1023 )
                      v64 = *(int **)(qword_1402FEC28 + 8LL * v65);
                  }
                  v66 = *((_QWORD *)v64 + 702);
                  if ( *(_QWORD *)(v37 + 88) < *(_QWORD *)(v66 + 64) )
                  {
                    v67 = v37 + 24;
                    if ( *(_QWORD *)(v37 + 24) )
                    {
                      if ( *((_QWORD *)v64 + 704) != v67 )
                      {
                        KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
                        if ( *(_BYTE *)(v66 + 53) || !*(_QWORD *)v67 )
                        {
                          *(_BYTE *)(v66 + 54) = 1;
                        }
                        else
                        {
                          v68 = *(_QWORD *)v67;
                          v69 = *(_QWORD **)(v37 + 32);
                          if ( *(_QWORD *)(*(_QWORD *)v67 + 8LL) != v67 || *v69 != v67 )
                            __fastfail(3u);
                          *v69 = v68;
                          *(_QWORD *)(v68 + 8) = v69;
                          v70 = (int **)*((_QWORD *)v64 + 704);
                          *(_QWORD *)v67 = v64 + 1406;
                          *(_QWORD *)(v37 + 32) = v70;
                          if ( *v70 != v64 + 1406 )
                            __fastfail(3u);
                          *v70 = (int *)v67;
                          *((_QWORD *)v64 + 704) = v67;
                        }
                        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
                      }
                    }
                  }
                  v48 = v104;
                }
              }
            }
            v71 = *(_QWORD *)v49;
            if ( *(_QWORD *)v49 != 0xFFFFFFFFFLL )
            {
              if ( v71 < *(_QWORD *)(v49 + 8) || v71 > *(_QWORD *)(v49 + 32) )
                KeBugCheckEx(0x1Au, 0x5004uLL, v49, v71, *(_QWORD *)(v49 + 32));
              v72 = (_QWORD *)(*(_QWORD *)(v49 + 496) + v71 * *(unsigned int *)(v49 + 64));
              *v72 ^= (*(_DWORD *)v72 ^ (2 * (_DWORD)v48)) & 0xFFFFFFE;
            }
            v13 = BugCheckParameter2;
            *(_QWORD *)(*(_QWORD *)(v49 + 496) + v48 * *(unsigned int *)(v49 + 64)) = (v71 << 28) | 0xFFFFFFE;
            *(_QWORD *)v49 = v48;
            --*(_QWORD *)(v37 + 120);
            if ( v13 + 0x98000000000LL > 0x7FFFFFFFFFLL )
              --*(_QWORD *)(v37 + 104);
            if ( (struct _LIST_ENTRY *)v48 < v124->Blink )
            {
              v73 = MI_GET_PFN_FROM_PTE(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              MiRemoveLockedPageFromWorkingSet(v37, v13, v48, v73);
            }
            Process = v119;
            v11 = v112;
          }
          v74 = *(_QWORD *)v11;
          v104 = v22 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          v75 = MiPteInShadowRange(v11);
          v78 = v75;
          if ( v75 && (unsigned int)MiPteHasShadow(v77, v76, v75) )
            LOBYTE(v74) = v74 | 0x20;
          v79 = v104;
          if ( (v74 & 0x20) != 0 )
          {
            *(_QWORD *)v11 = v104;
            if ( v78 )
              MiWritePteShadow(v11, v79);
          }
          else if ( (MI_INTERLOCKED_EXCHANGE_PTE(v11, v104) & 0x20) == 0 )
          {
            goto LABEL_21;
          }
          v80 = HIDWORD(v130);
          v81 = 1LL;
          v82 = v13;
          if ( HIDWORD(v130) )
          {
            v83 = Base[HIDWORD(v130) - 1];
            if ( (v83 & 0x800) == 0 )
            {
              v84 = Base[HIDWORD(v130) - 1] & 0x7FFLL;
              v85 = v84 + 1;
              if ( ((v84 + 1) << 12) + (v83 & 0xFFFFFFFFFFFFF000uLL) == v13 && v85 > v84 && v85 <= 0x7FF )
                goto LABEL_136;
              if ( (v83 & 0x800) == 0 && (v83 & 0xFFFFFFFFFFFFF000uLL) == v13 + 4096 )
              {
                v86 = Base[HIDWORD(v130) - 1] & 0x7FFLL;
                if ( v86 + 1 >= v86 && v86 + 1 <= 0x7FF )
                {
                  v87 = 4096LL;
                  if ( (v83 & 0x800) != 0 )
                    v87 = 0x200000LL;
                  v83 -= v87;
LABEL_136:
                  ++v131;
                  Base[HIDWORD(v130) - 1] = ((unsigned __int16)v83 ^ (unsigned __int16)(v83 + 1)) & 0x7FF ^ v83;
LABEL_21:
                  v20 = v105;
LABEL_22:
                  v23 = v103;
                  goto LABEL_23;
                }
              }
            }
          }
          if ( HIDWORD(v130) >= (unsigned int)v130 )
          {
            HIBYTE(v129) = 1;
            goto LABEL_21;
          }
          while ( 1 )
          {
            v88 = 2048LL;
            if ( (unsigned __int64)(v81 - 1) <= 0x7FF )
              v88 = v81;
            v81 -= v88;
            v89 = v82 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v88 - 1) & 0x7FF;
            v82 += v88 << 12;
            Base[v80] = v89;
            v131 += v88;
            v80 = HIDWORD(v130) + 1;
            HIDWORD(v130) = v80;
            if ( v80 == (_DWORD)v130 )
            {
              qsort(Base, v80, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList(&v128);
              v80 = HIDWORD(v130);
              if ( HIDWORD(v130) == (_DWORD)v130 )
                break;
            }
            if ( !v81 )
              goto LABEL_21;
          }
          v20 = v105;
          v90 = v81 == 0;
          v23 = v103;
          if ( !v90 )
          {
            HIBYTE(v129) = 1;
            v131 = HIDWORD(v130);
          }
        }
        else
        {
          if ( (v21 & 0x400) != 0 )
          {
            v91 = (__int64)v21 >> 16;
            v92 = HIDWORD(v21);
            if ( v92 == 0xFFFFFFFF || (v22 & 0x200) == 0 )
            {
              if ( Process[1].Affinity.Bitmap[12] )
              {
                if ( v92 != 0xFFFFFFFF )
                {
                  CloneAddress = MiLocateCloneAddress((__int64)Process, v91);
                  if ( CloneAddress )
                  {
                    v93 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, v95, (__int64)Process);
                    goto LABEL_162;
                  }
                }
              }
            }
            else
            {
              v93 = MiDecrementCombinedPte(v91);
LABEL_162:
              if ( v93 == 3 )
              {
                ++*(_QWORD *)(v116 + 8);
              }
              else if ( v93 == 5 )
              {
                ++*(_QWORD *)(v116 + 16);
              }
            }
            *(_QWORD *)v11 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v11) )
              MiWritePteShadow(v11, 0LL);
            goto LABEL_23;
          }
          if ( (v21 & 0x800) == 0 )
          {
            if ( (v21 & 0x3E0) == 0 )
              KeBugCheckEx(0x1Au, 0x41792uLL, v11, v21, 0LL);
            v110 = v21;
            v96 = v21 >> 13;
            if ( (v21 & 0x2000) != 0 || (v21 & 0x1000) != 0 )
              v97 = MI_READ_PTE_LOCK_FREE(&v110);
            else
              v97 = 0LL;
            v110 = v97;
            if ( v97 )
              MiReleasePageFileInfo(v117, v97, 0LL);
            if ( (v96 & 1) != 0 )
              _InterlockedExchangeAdd64(
                (volatile signed __int64 *)&Process[1].Affinity.Bitmap[13],
                0xFFFFFFFFFFFFFFFFuLL);
            *(_QWORD *)v11 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v11) )
              MiWritePteShadow(v11, 0LL);
            goto LABEL_22;
          }
        }
LABEL_23:
        v104 = MI_READ_PTE_LOCK_FREE(v11);
        if ( v104 )
        {
          v114 = v11;
          if ( !v20 )
            v20 = v11;
          v105 = v20;
        }
        v26 = v118;
        if ( v11 == v118 || v102 == v23 )
          goto LABEL_216;
        if ( (((_BYTE)v11 + 8) & 0x78) == 0 && (*(_DWORD *)&Process[1].IdealNode[12] & 0x40000000) != 0 )
          goto LABEL_197;
        CurrentPrcb = KeGetCurrentPrcb();
        v28 = 1;
        DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
        DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
        DpcTimeCount = CurrentPrcb->DpcTimeCount;
        v14 = DpcWatchdogCount > 7;
        if ( (DpcRequestSummary & 1) != 0 )
        {
          v16 = 1LL;
          if ( DpcTimeCount > 7 )
          {
            if ( !CurrentPrcb->QuantumEnd )
              goto LABEL_189;
            goto LABEL_194;
          }
        }
        else
        {
          v16 = 0LL;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v28 = 2;
            goto LABEL_194;
          }
          if ( CurrentPrcb->QuantumEnd )
          {
            v28 = 3;
            goto LABEL_194;
          }
          NextThread = CurrentPrcb->NextThread;
          if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
          {
            v28 = 4;
            goto LABEL_194;
          }
        }
        if ( DpcWatchdogCount > 7 )
          break;
LABEL_216:
        v11 += 8LL;
        v13 += 4096LL;
        v112 = v11;
        BugCheckParameter2 = v13;
        if ( v11 > v26 )
          goto LABEL_198;
      }
      if ( (_DWORD)v16 )
      {
LABEL_189:
        if ( (DpcRequestSummary & 0x1E) != 0 )
        {
          v28 = 5;
          goto LABEL_194;
        }
        if ( CurrentPrcb->CurrentThread != CurrentPrcb->IdleThread )
        {
          v28 = 6;
          goto LABEL_194;
        }
      }
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      _enable();
      v28 = 0;
LABEL_194:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v28, DpcWatchdogCount, DpcTimeCount, DpcRequestSummary);
      if ( !v28 )
        goto LABEL_216;
LABEL_197:
      v108 = 2;
      v11 += 8LL;
LABEL_198:
      v17 = v114;
      v15 = v120;
LABEL_199:
      MiFlushTbList(&v128, v14, v16);
      if ( v20 )
        MiDeletePteRun(v20, v17, (__int64)Process, DecayPfn, v116);
      if ( DecayPfn )
      {
        MiDecayPfnFullyInitialized(DecayPfn);
        DecayPfn = 0LL;
      }
      if ( v102 )
      {
        if ( (((unsigned __int64)*(unsigned int *)(v15 + 16) >> 14) & 0x3FF) < v102 )
          KeBugCheckEx(0x1Au, 0x41790uLL, v15, ((unsigned __int64)*(unsigned int *)(v15 + 16) >> 14) & 0x3FF, v102);
        v113 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v15 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v113);
          while ( (*(_QWORD *)(v15 + 24) & 0x8000000000000000uLL) != 0 );
        }
        *(_QWORD *)(v15 + 16) ^= ((unsigned int)*(_QWORD *)(v15 + 16) ^ ((unsigned __int16)((*(_QWORD *)(v15 + 16) >> 14)
                                                                                          - v102) << 14)) & 0xFFC000;
        _InterlockedAnd64((volatile signed __int64 *)(v15 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( ((*(_DWORD *)(v15 + 16) >> 14) & 0x3FF) == 0 )
        MiDeletePageTableHierarchy(0LL, v11 - 8);
      if ( v108 == 2
        || (*(_DWORD *)&Process[1].IdealNode[12] & 0x40000000) != 0
        || (LODWORD(NextPageTable) = KeShouldYieldProcessor(), (_DWORD)NextPageTable) )
      {
        MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[12], v101, v99);
        LOBYTE(NextPageTable) = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)&Process[1].IdealNode[12]);
        a4 = NextPageTable;
        v101 = NextPageTable;
      }
      else
      {
        a4 = v101;
      }
      v9 = v122;
      LODWORD(v10) = v11;
      if ( v11 > v122 )
        return NextPageTable;
      v5 = v106;
    }
  }
  return NextPageTable;
}
