/*
 * XREFs of MiDeleteVirtualAddresses @ 0x140094110
 * Callers:
 *     MiDeleteVad @ 0x14008B8E0 (MiDeleteVad.c)
 *     MiDeleteFinalPageTables @ 0x1400EEEC4 (MiDeleteFinalPageTables.c)
 *     MiDeletePartialVad @ 0x1400F14D0 (MiDeletePartialVad.c)
 *     MiDeleteRotateAndStopFaults @ 0x140135C44 (MiDeleteRotateAndStopFaults.c)
 * Callees:
 *     MiDecrementCloneBlockReference @ 0x14000539C (MiDecrementCloneBlockReference.c)
 *     MiDeletePageTableHierarchy @ 0x140039EA0 (MiDeletePageTableHierarchy.c)
 *     MiGetNextPageTable @ 0x14003BAA0 (MiGetNextPageTable.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x14003E5A0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MiLocateCloneAddress @ 0x140059A90 (MiLocateCloneAddress.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     MiCompressTbFlushList @ 0x14007B750 (MiCompressTbFlushList.c)
 *     MiRemoveLockedPageFromWorkingSet @ 0x14007CAB4 (MiRemoveLockedPageFromWorkingSet.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRotatedToFrameBuffer @ 0x140080948 (MiRotatedToFrameBuffer.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     MiUpdateWsleHash @ 0x140097290 (MiUpdateWsleHash.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiDeletePteRun @ 0x1400C3A20 (MiDeletePteRun.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiCreateDecayPfn @ 0x1400E0F20 (MiCreateDecayPfn.c)
 *     MiDecayPfnFullyInitialized @ 0x1400E10AC (MiDecayPfnFullyInitialized.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     MiLockSetPfnPriority @ 0x140120268 (MiLockSetPfnPriority.c)
 *     MiUnmapFrameBuffer @ 0x1401351C4 (MiUnmapFrameBuffer.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     qsort @ 0x140172BB0 (qsort.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiLogRemoveWsleEvent @ 0x140213CAC (MiLogRemoveWsleEvent.c)
 *     MI_GET_USED_PTES_HANDLE @ 0x140223A68 (MI_GET_USED_PTES_HANDLE.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiGetPrototypePteDirect @ 0x140225B58 (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x140225BE8 (MiIsPrototypePteVadLookup.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiDecrementCombinedPte @ 0x14022A0F0 (MiDecrementCombinedPte.c)
 *     EtwTraceShouldYieldProcessor @ 0x14025D5E8 (EtwTraceShouldYieldProcessor.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

// local variable allocation has failed, the output may be wrong!
int __fastcall MiDeleteVirtualAddresses(
        unsigned __int64 a1,
        unsigned __int64 a2,
        unsigned int a3,
        unsigned __int8 a4,
        __int64 a5)
{
  __int64 CurrentIrql; // r12
  char v6; // bl
  unsigned __int16 v7; // ax
  __int64 NextPageTable; // rax
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // r14
  ULONG_PTR v11; // r12
  int v12; // eax
  ULONG_PTR v13; // r14
  ULONG_PTR v14; // rdi
  __int64 v15; // r8
  unsigned __int64 DpcRequestSummary; // r9
  unsigned __int64 v17; // rbx
  unsigned __int64 p_LockHandle; // rcx
  unsigned int v19; // eax
  ULONG_PTR v20; // r15
  ULONG_PTR v21; // rdi
  __int64 v22; // rdx
  unsigned __int64 v23; // r13
  __int64 v24; // rdx
  __int64 v25; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 Wsle; // rax
  unsigned __int8 v29; // dl
  char v30; // al
  signed __int32 *v31; // r13
  __int64 v32; // rbx
  ULONG_PTR v33; // r12
  unsigned __int64 *v34; // rcx
  unsigned __int64 PteShadow; // rdx
  ULONG_PTR v36; // r15
  ULONG_PTR BugCheckParameter4; // rbx
  __int64 v38; // rcx
  unsigned __int64 v39; // rcx
  unsigned __int64 v40; // rcx
  ULONG_PTR *v41; // rax
  unsigned __int64 v42; // r15
  ULONG_PTR v43; // r12
  unsigned __int64 v44; // r8
  __int64 v45; // rbx
  unsigned __int64 *v46; // rdx
  unsigned __int64 v47; // rax
  __int64 v48; // r10
  __int64 v49; // r14
  __int64 v50; // r8
  __int64 v51; // r11
  __int64 v52; // r9
  __int64 v53; // r8
  __int64 v54; // rdx
  int v55; // eax
  __int16 *v56; // r14
  unsigned __int16 v57; // ax
  __int64 v58; // r15
  char *p_IdealGlobalNode; // rbx
  struct _LIST_ENTRY *v60; // rcx
  struct _LIST_ENTRY *Flink; // rax
  __int64 Next; // rax
  ULONG_PTR v63; // r9
  __int64 v64; // r10
  unsigned __int64 *v65; // rcx
  unsigned __int64 v66; // rdx
  signed __int64 v67; // rdx
  unsigned __int64 v68; // rdx
  __int64 v69; // rbx
  ULONG_PTR v70; // rdi
  __int64 v71; // rax
  unsigned __int64 v72; // r10
  unsigned __int64 v73; // rdx
  __int64 v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rdx
  unsigned __int64 v77; // rax
  bool v78; // zf
  __int64 PrototypePteDirect; // rbx
  int IsPrototypePteVadLookup; // eax
  __int64 v81; // rdx
  __int64 v82; // r11
  int v83; // eax
  _QWORD *CloneAddress; // rax
  __int64 v85; // rax
  __int16 v86; // ax
  struct _KPRCB *CurrentPrcb; // rcx
  unsigned int DpcWatchdogCount; // r11d
  unsigned int DpcTimeCount; // r10d
  unsigned int v90; // ebx
  _KTHREAD *NextThread; // rax
  unsigned __int64 *v92; // r14
  unsigned int v93; // ebx
  volatile signed __int32 *v94; // rbx
  unsigned int v95; // edi
  signed __int32 v96; // edx
  unsigned __int16 v98; // [rsp+30h] [rbp-D0h]
  unsigned __int64 v99; // [rsp+38h] [rbp-C8h]
  _KPROCESS *Process; // [rsp+40h] [rbp-C0h]
  ULONG_PTR v101; // [rsp+48h] [rbp-B8h]
  ULONG_PTR v103; // [rsp+58h] [rbp-A8h]
  ULONG_PTR BugCheckParameter2; // [rsp+60h] [rbp-A0h]
  ULONG_PTR v105; // [rsp+68h] [rbp-98h] BYREF
  int v106; // [rsp+70h] [rbp-90h]
  __int64 v107; // [rsp+78h] [rbp-88h]
  unsigned __int64 v108; // [rsp+80h] [rbp-80h] BYREF
  ULONG_PTR DecayPfn; // [rsp+88h] [rbp-78h]
  __int64 v110; // [rsp+90h] [rbp-70h]
  ULONG_PTR v111; // [rsp+98h] [rbp-68h]
  int v112; // [rsp+A0h] [rbp-60h]
  __int64 v113; // [rsp+A8h] [rbp-58h]
  unsigned __int64 *v114; // [rsp+B0h] [rbp-50h]
  __int64 v115; // [rsp+B8h] [rbp-48h]
  __int16 *v116; // [rsp+C0h] [rbp-40h]
  ULONG_PTR v117; // [rsp+C8h] [rbp-38h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+D0h] [rbp-30h] BYREF
  unsigned __int64 *v119; // [rsp+E8h] [rbp-18h]
  __int64 v120; // [rsp+F0h] [rbp-10h]
  unsigned __int64 v121; // [rsp+F8h] [rbp-8h]
  int v122; // [rsp+100h] [rbp+0h] BYREF
  unsigned __int64 v123; // [rsp+108h] [rbp+8h]
  __int64 v124; // [rsp+110h] [rbp+10h]
  char v125[8]; // [rsp+118h] [rbp+18h] BYREF
  int v126; // [rsp+120h] [rbp+20h] BYREF
  __int16 v127; // [rsp+124h] [rbp+24h]
  __int64 v128; // [rsp+128h] [rbp+28h]
  __int64 v129; // [rsp+130h] [rbp+30h]
  _QWORD Base[21]; // [rsp+138h] [rbp+38h] BYREF
  void *retaddr; // [rsp+228h] [rbp+128h]

  v113 = a5;
  LOBYTE(CurrentIrql) = a4;
  v6 = a3;
  v115 = a4;
  Process = KeGetCurrentThread()->ApcState.Process;
  v7 = WORD2(Process[1].SecurePid);
  if ( v7 == 1023 )
    v116 = MiSystemPartition;
  else
    v116 = *(__int16 **)(qword_14034F0E8 + 8LL * v7);
  DecayPfn = 0LL;
  v128 = 20LL;
  LODWORD(NextPageTable) = 0;
  v127 = 0;
  v9 = ((a2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v129 = 0LL;
  v10 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  Base[0] = 0LL;
  v121 = v9;
  v126 = 1;
  if ( v10 <= v9 )
  {
    v123 = 0xFFFFF68000000000uLL;
    v120 = 0xF000000000000LL;
    while ( 1 )
    {
      NextPageTable = MiGetNextPageTable(v10, v9, (unsigned __int64)&v126, (unsigned __int8)CurrentIrql, 1, &v122);
      v114 = (unsigned __int64 *)NextPageTable;
      v11 = NextPageTable;
      if ( !NextPageTable )
        return NextPageTable;
      v12 = BYTE3(Process[2].ProfileListHead.Blink) & 1;
      v112 = v12;
      if ( (v6 & 2) != 0 && !v12 && dword_14034F248 )
        v110 = *(_QWORD *)&Process[2].Header.Lock;
      else
        v110 = 0LL;
      v106 = 0;
      v13 = (__int64)(v11 << 25) >> 16;
      BugCheckParameter2 = v13;
      v14 = MI_GET_USED_PTES_HANDLE(v13);
      v117 = v14;
      v101 = 0LL;
      v111 = 0LL;
      v17 = (v11 & 0xFFFFFFFFFFFFF000uLL) + 4088;
      p_LockHandle = 0LL;
      v19 = HIWORD(*(_DWORD *)(v14 + 16)) & 0x3FF;
      v98 = 0;
      v107 = v19;
      if ( v17 > v9 )
        v17 = v9;
      v20 = 0LL;
      v99 = v17;
      if ( v11 > v17 )
        goto LABEL_241;
      while ( 1 )
      {
        v21 = *(_QWORD *)v11;
        v22 = 0x90482413000LL;
        v23 = v11 + 0x90482413000LL;
        v119 = (unsigned __int64 *)(v11 + 0x90482413000LL);
        if ( v11 + 0x90482413000LL <= 0x7F8 )
        {
          if ( (unsigned int)MiPteHasShadow(p_LockHandle, 0x90482413000LL)
            && (v21 & 1) != 0
            && ((v21 & 0x20) == 0 || (v21 & 0x42) == 0) )
          {
            v24 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
            if ( v24 )
            {
              v25 = *(_QWORD *)(v24 + 8 * ((v11 >> 3) & 0x1FF));
              if ( (v25 & 0x20) != 0 )
                v21 |= 0x20uLL;
              if ( (v25 & 0x42) != 0 )
                v21 |= 0x42uLL;
            }
          }
          LOWORD(v19) = v107;
          v22 = 0x90482413000LL;
          p_LockHandle = v98;
        }
        v108 = v21;
        if ( !v21 )
          goto LABEL_237;
        LOWORD(p_LockHandle) = p_LockHandle + 1;
        v98 = p_LockHandle;
        if ( (unsigned __int16)p_LockHandle > (unsigned __int16)v19 )
          KeBugCheckEx(0x1Au, 0x41793uLL, v11, (unsigned __int16)p_LockHandle, (unsigned __int16)v19);
        if ( (v21 & 1) != 0 )
        {
          v26 = v21;
          if ( (unsigned __int64)&STACK[0x90482413080] <= 0x7F8 )
            v26 = MiReadPteShadow(&v108, v21);
          v27 = 48 * ((v26 >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
          if ( (a3 & 8) != 0 && MiRotatedToFrameBuffer((unsigned __int64 *)v11) )
          {
            MiUnmapFrameBuffer(v11, 3LL, 0LL, v125);
            MiInsertTbFlushEntry(&v126, v13, 1LL, 0LL);
            v20 = v101;
            v17 = v99;
            goto LABEL_150;
          }
          if ( v110 )
          {
            Wsle = MiLocateWsle(BugCheckParameter2);
            if ( (*(_BYTE *)v11 & 0x20) != 0
              && (*(_DWORD *)(*(_QWORD *)(v110 + 496) + Wsle * *(unsigned int *)(v110 + 64)) & 0xE00) != 0xE00LL )
            {
              MiLogPageAccess(&Process[1].IdealNode[8], v11);
            }
            v13 = BugCheckParameter2;
          }
          p_LockHandle = 0x3FFFFFFFFFFFFFFFLL;
          if ( (*(_QWORD *)(v27 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
          {
            v15 = a3;
            if ( (a3 & 1) != 0 )
            {
              v29 = *(_BYTE *)(v27 + 35);
              p_LockHandle = v29;
              LOBYTE(p_LockHandle) = (v29 & 8) != 0;
              if ( ((v29 & 8) != 0 || (v29 & 7u) > 2) && ((v29 & 8) != 0 || (v29 & 7u) <= 5) )
              {
                MiLockSetPfnPriority(v27, 2LL);
                v15 = a3;
              }
            }
            if ( (v15 & 4) != 0 && !DecayPfn && (v21 & 0x42) == 0 )
            {
              p_LockHandle = 0x200000000000000LL;
              if ( (*(_QWORD *)(v27 + 40) & 0x200000000000000LL) != 0 && (*(_BYTE *)(v27 + 34) & 0x10) == 0 )
              {
                v30 = *(_BYTE *)(v27 + 35);
                if ( (v30 & 8) == 0 )
                {
                  p_LockHandle = v30 & 7;
                  if ( (unsigned int)p_LockHandle < 5 )
                    DecayPfn = MiCreateDecayPfn();
                }
              }
            }
          }
          if ( !v112 )
          {
            v31 = (signed __int32 *)&Process[1].IdealNode[8];
            v124 = *(_QWORD *)&Process[2].Header.Lock;
            v32 = v124;
            v33 = MiLocateWsle(v13);
            v103 = v33;
            if ( (*(_QWORD *)(*(_QWORD *)(v32 + 496) + v33 * *(unsigned int *)(v32 + 64)) & 8) != 0 )
            {
              v34 = (unsigned __int64 *)(((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              PteShadow = *v34;
              if ( (unsigned __int64)(v34 + 0x12090482600LL) <= 0x7F8 )
                PteShadow = MiReadPteShadow(v34, PteShadow);
              if ( (*(_QWORD *)(48 * ((PteShadow >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL + 40) & 0x200000000000000LL) == 0 )
              {
                --*(_QWORD *)&Process[1].Spare2[31];
                if ( v13 + 0x98000000000LL > 0x7FFFFFFFFFLL )
                  --*(_QWORD *)&Process[1].Spare2[15];
              }
            }
            v36 = *(_QWORD *)&Process[2].Header.Lock;
            if ( v33 > *(_QWORD *)(v36 + 32) )
              KeBugCheckEx(0x1Au, 0x41785uLL, v36, v33, 0LL);
            BugCheckParameter4 = *(_QWORD *)(*(_QWORD *)(v36 + 496) + v33 * *(unsigned int *)(v36 + 64));
            if ( (BugCheckParameter4 & 1) == 0 )
              KeBugCheckEx(0x1Au, 0x5010uLL, v36, v33, BugCheckParameter4);
            v38 = *(_QWORD *)(*(_QWORD *)(v36 + 496) + v33 * *(unsigned int *)(v36 + 64));
            if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
              v39 = v38 | 0xFFFF000000000000uLL;
            else
              v39 = v38 & 0xFFFFFFFFFFFFLL;
            p_LockHandle = v39 & 0xFFFFFFFFFFFFF000uLL;
            if ( v31 == dword_14034FF40 )
            {
              if ( PsNtosImageBase
                && (p_LockHandle >= (unsigned __int64)PsNtosImageBase && p_LockHandle < PsNtosImageEnd
                 || p_LockHandle >= (unsigned __int64)PsHalImageBase && p_LockHandle < PsHalImageEnd) )
              {
                LODWORD(xmmword_14034EA58) = xmmword_14034EA58 - 1;
              }
              else if ( p_LockHandle + 0x80000000000LL <= 0x7FFFFFFFFFLL )
              {
                --DWORD1(xmmword_14034EA58);
              }
            }
            if ( (BugCheckParameter4 & 8) == 0 && (BugCheckParameter4 & 4) != 0 )
              MiUpdateWsleHash(p_LockHandle, v33, v31, 1LL);
            if ( (DWORD1(PerfGlobalGroupMask) & 0x8000000) != 0 )
            {
              if ( (BugCheckParameter4 & 0x800000000000LL) != 0 )
                v40 = BugCheckParameter4 | 0xFFFF000000000000uLL;
              else
                v40 = BugCheckParameter4 & 0xFFFFFFFFFFFFLL;
              MiLogRemoveWsleEvent(v40, (__int64)Process[2].ProfileListHead.Blink & 7);
            }
            v41 = (ULONG_PTR *)(*(_QWORD *)(v36 + 496) + v33 * *(unsigned int *)(v36 + 64));
            v42 = v33;
            *v41 = BugCheckParameter4 & 0xFFFFFFFFFFFFFFFEuLL;
            v43 = *(_QWORD *)&Process[2].Header.Lock;
            v44 = *(_QWORD *)(v43 + 8);
            if ( v103 >= v44 )
            {
              p_LockHandle = *(unsigned int *)(v43 + 64);
              v45 = *(_QWORD *)(v43 + 496);
              v46 = (unsigned __int64 *)(v45 + v103 * p_LockHandle);
              v47 = *v46;
              if ( (_DWORD)p_LockHandle == 16 )
              {
                p_LockHandle = (__int64)(v103 * *(unsigned int *)(v43 + 64)) >> 4;
                if ( p_LockHandle >= v44 )
                {
                  v48 = (v47 >> 16) & 0xF00000000LL | *((unsigned int *)v46 + 2);
                  v49 = (v47 >> 20) & 0xF00000000LL | *((unsigned int *)v46 + 3);
                  v50 = 2 * ((unsigned int)(v47 >> 9) & 7);
                  if ( (v47 & 0x800000000000LL) != 0 )
                    p_LockHandle = v47 | 0xFFFF000000000000uLL;
                  else
                    p_LockHandle = v47 & 0xFFFFFFFFFFFFLL;
                  if ( p_LockHandle < v123
                    || ((v47 & 0x800000000000LL) == 0
                      ? (p_LockHandle = v47 & 0xFFFFFFFFFFFFLL)
                      : (p_LockHandle = v47 | 0xFFFF000000000000uLL),
                        p_LockHandle > 0xFFFFF6FFFFFFFFFFuLL) )
                  {
                    v50 = (unsigned int)(v50 + 1);
                  }
                  v51 = (unsigned int)v50;
                  v52 = 2 * (v50 + 15);
                  v53 = v45 + 16 * v48;
                  v54 = v45 + 16 * v49;
                  if ( v49 == 0xFFFFFFFFFLL )
                  {
                    *(_QWORD *)(v43 + 8 * v52) = v48;
                  }
                  else
                  {
                    *(_DWORD *)(v54 + 8) = v48;
                    p_LockHandle = v120 & (*(_QWORD *)v54 ^ (v48 << 16));
                    *(_QWORD *)v54 ^= p_LockHandle;
                  }
                  if ( v48 == 0xFFFFFFFFFLL )
                  {
                    *(_QWORD *)(v43 + 8 * v52 + 8) = v49;
                  }
                  else
                  {
                    *(_DWORD *)(v53 + 12) = v49;
                    p_LockHandle = (*(_QWORD *)v53 ^ (v49 << 20)) & 0xF0000000000000LL;
                    *(_QWORD *)v53 ^= p_LockHandle;
                  }
                  --*(_QWORD *)(v43 + 8 * v51 + 112);
                }
              }
              v55 = (v47 >> 9) & 7;
              if ( v55 )
              {
                p_LockHandle = (unsigned int)(v55 - 1);
                --*(_QWORD *)&v31[2 * p_LockHandle + 10];
                if ( v55 == 7 )
                {
                  v56 = MiSystemPartition;
                  if ( ((__int64)Process[2].ProfileListHead.Blink & 7) == 0 )
                  {
                    v57 = WORD2(Process[1].SecurePid);
                    p_LockHandle = 1023LL;
                    if ( v57 != 1023 )
                    {
                      p_LockHandle = v57;
                      v56 = *(__int16 **)(qword_14034F0E8 + 8LL * v57);
                    }
                  }
                  v58 = *((_QWORD *)v56 + 657);
                  if ( Process[1].UserDirectoryTableBase < *(_QWORD *)(v58 + 64) )
                  {
                    p_IdealGlobalNode = (char *)&Process[1].IdealGlobalNode;
                    if ( *(_QWORD *)&Process[1].IdealGlobalNode )
                    {
                      if ( *((char **)v56 + 659) != p_IdealGlobalNode )
                      {
                        KeAcquireInStackQueuedSpinLockAtDpcLevel(&SpinLock, &LockHandle);
                        if ( *(_BYTE *)(v58 + 53) || !*(_QWORD *)p_IdealGlobalNode )
                        {
                          *(_BYTE *)(v58 + 54) = 1;
                        }
                        else
                        {
                          v60 = *(struct _LIST_ENTRY **)p_IdealGlobalNode;
                          Flink = Process[1].ProcessListEntry.Flink;
                          if ( *(char **)(*(_QWORD *)p_IdealGlobalNode + 8LL) != p_IdealGlobalNode
                            || (char *)Flink->Flink != p_IdealGlobalNode )
                          {
                            __fastfail(3u);
                          }
                          Flink->Flink = v60;
                          v60->Blink = Flink;
                          p_LockHandle = *((_QWORD *)v56 + 659);
                          *(_QWORD *)p_IdealGlobalNode = v56 + 2632;
                          Process[1].ProcessListEntry.Flink = (struct _LIST_ENTRY *)p_LockHandle;
                          if ( *(__int16 **)p_LockHandle != v56 + 2632 )
                            __fastfail(3u);
                          *(_QWORD *)p_LockHandle = p_IdealGlobalNode;
                          *((_QWORD *)v56 + 659) = p_IdealGlobalNode;
                        }
                        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
                        {
                          KiReleaseQueuedSpinLockInstrumented(&LockHandle, retaddr);
                          goto LABEL_123;
                        }
                        _m_prefetchw(&LockHandle);
                        Next = (__int64)LockHandle.LockQueue.Next;
                        if ( LockHandle.LockQueue.Next )
                        {
LABEL_122:
                          LockHandle.LockQueue.Next = 0LL;
                          _InterlockedXor64((volatile signed __int64 *)(Next + 8), 1uLL);
                        }
                        else
                        {
                          p_LockHandle = (unsigned __int64)&LockHandle;
                          if ( (struct _KLOCK_QUEUE_HANDLE *)_InterlockedCompareExchange64(
                                                               (volatile signed __int64 *)LockHandle.LockQueue.Lock,
                                                               0LL,
                                                               (signed __int64)&LockHandle) != &LockHandle )
                          {
                            Next = KxWaitForLockChainValid((__int64 *)&LockHandle);
                            goto LABEL_122;
                          }
                        }
                      }
                    }
                  }
LABEL_123:
                  v42 = v103;
                }
              }
            }
            v63 = *(_QWORD *)v43;
            v64 = 0xFFFFFFFFFLL;
            if ( *(_QWORD *)v43 != 0xFFFFFFFFFLL )
            {
              if ( v63 < *(_QWORD *)(v43 + 8) || v63 > *(_QWORD *)(v43 + 32) )
                KeBugCheckEx(0x1Au, 0x5004uLL, v43, v63, *(_QWORD *)(v43 + 32));
              p_LockHandle = v63 * *(unsigned int *)(v43 + 64);
              *(_QWORD *)(*(_QWORD *)(v43 + 496) + p_LockHandle) ^= (*(_DWORD *)(*(_QWORD *)(v43 + 496) + p_LockHandle) ^ (2 * (_DWORD)v42)) & 0xFFFFFFE;
            }
            v13 = BugCheckParameter2;
            v15 = 0x7FFFFFFFFFLL;
            DpcRequestSummary = (v63 << 28) | 0xFFFFFFE;
            *(_QWORD *)(*(_QWORD *)(v43 + 496) + v42 * *(unsigned int *)(v43 + 64)) = DpcRequestSummary;
            *(_QWORD *)v43 = v42;
            --*(_QWORD *)&Process[1].Spare2[23];
            if ( BugCheckParameter2 + 0x98000000000LL > 0x7FFFFFFFFFLL )
              --*(_QWORD *)&Process[1].Spare2[7];
            if ( v42 < *(_QWORD *)(v124 + 8) )
            {
              v65 = (unsigned __int64 *)(((BugCheckParameter2 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
              v66 = *v65;
              if ( (unsigned __int64)(v65 + 0x12090482600LL) <= 0x7F8 )
                v66 = MiReadPteShadow(v65, v66);
              MiRemoveLockedPageFromWorkingSet(
                (__int64)v31,
                BugCheckParameter2,
                v42,
                48 * (v64 & (v66 >> 12)) - 0x58000000000LL);
            }
            v23 = (unsigned __int64)v119;
            v11 = (ULONG_PTR)v114;
          }
          v67 = *(_QWORD *)v11;
          v108 = v21 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
          if ( v23 <= 0x7F8 && (unsigned int)MiPteHasShadow(p_LockHandle, v67) )
            v67 |= 0x20uLL;
          if ( (v67 & 0x20) == 0 )
          {
            p_LockHandle = v108;
            if ( v67 == _InterlockedCompareExchange64((volatile signed __int64 *)v11, v108, v67) )
              goto LABEL_148;
          }
          v68 = v108;
          *(_QWORD *)v11 = v108;
          if ( v23 <= 0x7F8 )
            MiWritePteShadow(v11, v68);
          v15 = HIDWORD(v128);
          v69 = 1LL;
          v70 = v13;
          if ( HIDWORD(v128) )
          {
            p_LockHandle = (unsigned int)(HIDWORD(v128) - 1);
            v71 = Base[p_LockHandle];
            if ( (v71 & 0x800) == 0 )
            {
              DpcRequestSummary = Base[HIDWORD(v128) - 1] & 0x7FFLL;
              v72 = DpcRequestSummary + 1;
              p_LockHandle = (DpcRequestSummary + 1) << 12;
              if ( p_LockHandle + (v71 & 0xFFFFFFFFFFFFF000uLL) == v13 && v72 > DpcRequestSummary && v72 <= 0x7FF )
                goto LABEL_147;
              if ( (v71 & 0x800) == 0 )
              {
                p_LockHandle = v71 & 0xFFFFFFFFFFFFF000uLL;
                if ( (v71 & 0xFFFFFFFFFFFFF000uLL) == v13 + 4096 )
                {
                  p_LockHandle = v71 & 0x7FF;
                  if ( p_LockHandle + 1 >= p_LockHandle && p_LockHandle + 1 <= 0x7FF )
                  {
                    v75 = 4096LL;
                    if ( (v71 & 0x800) != 0 )
                      v75 = 0x200000LL;
                    v71 -= v75;
LABEL_147:
                    p_LockHandle = ((unsigned __int16)v71 ^ (unsigned __int16)(v71 + 1)) & 0x7FF;
                    ++v129;
                    Base[HIDWORD(v128) - 1] = p_LockHandle ^ v71;
LABEL_148:
                    v20 = v101;
LABEL_149:
                    v17 = v99;
                    goto LABEL_150;
                  }
                }
              }
            }
          }
          if ( HIDWORD(v128) >= (unsigned int)v128 )
          {
            HIBYTE(v127) = 1;
            goto LABEL_148;
          }
          while ( 1 )
          {
            v76 = 2048LL;
            if ( (unsigned __int64)(v69 - 1) <= 0x7FF )
              v76 = v69;
            v69 -= v76;
            v77 = v70 & 0xFFFFFFFFFFFFF000uLL | ((_WORD)v76 - 1) & 0x7FF;
            v70 += v76 << 12;
            p_LockHandle = (unsigned int)v15;
            Base[(unsigned int)v15] = v77;
            v129 += v76;
            v15 = (unsigned int)(HIDWORD(v128) + 1);
            HIDWORD(v128) = v15;
            if ( (_DWORD)v15 == (_DWORD)v128 )
            {
              qsort(Base, (unsigned int)v15, 8uLL, MiTbFlushSort);
              MiCompressTbFlushList((__int64)&v126);
              v15 = HIDWORD(v128);
              if ( HIDWORD(v128) == (_DWORD)v128 )
                break;
            }
            if ( !v69 )
              goto LABEL_148;
          }
          v20 = v101;
          v78 = v69 == 0;
          v17 = v99;
          if ( !v78 )
          {
            HIBYTE(v127) = 1;
            v129 = HIDWORD(v128);
          }
          goto LABEL_150;
        }
        if ( (v21 & 0x400) != 0 )
        {
          PrototypePteDirect = MiGetPrototypePteDirect(v21, 0x90482413000LL, v15, DpcRequestSummary);
          IsPrototypePteVadLookup = MiIsPrototypePteVadLookup(v21);
          if ( IsPrototypePteVadLookup || (v21 & 0x800) == 0 )
          {
            if ( *(_QWORD *)(v82 + 912) )
            {
              if ( !IsPrototypePteVadLookup )
              {
                CloneAddress = MiLocateCloneAddress(v82, PrototypePteDirect);
                if ( CloneAddress )
                {
                  v83 = MiDecrementCloneBlockReference((ULONG_PTR)CloneAddress, PrototypePteDirect, (__int64)Process);
                  goto LABEL_189;
                }
              }
            }
          }
          else
          {
            v83 = MiDecrementCombinedPte(PrototypePteDirect, v81, v15, DpcRequestSummary);
LABEL_189:
            if ( v83 == 3 )
            {
              ++*(_QWORD *)(v113 + 8);
            }
            else if ( v83 == 5 )
            {
              ++*(_QWORD *)(v113 + 16);
            }
          }
          *(_QWORD *)v11 = 0LL;
          if ( v23 <= 0x7F8 )
            MiWritePteShadow(v11, 0LL);
          goto LABEL_149;
        }
        if ( (v21 & 0x800) == 0 )
        {
          if ( (v21 & 0x3E0) == 0 )
            KeBugCheckEx(0x1Au, 0x41792uLL, v11, v21, 0LL);
          v105 = v21;
          if ( (v21 & 4) != 0 || (v21 & 2) != 0 )
          {
            v85 = v21;
            if ( (unsigned __int64)&STACK[0x90482413068] <= 0x7F8 )
              v85 = MiReadPteShadow(&v105, v21);
          }
          else
          {
            v85 = 0LL;
          }
          v105 = v85;
          if ( v85 )
            MiReleasePageFileInfo(v116, v85, 0LL);
          v86 = MiReverseSwizzleInvalidPte(v21, v22, v15, DpcRequestSummary);
          if ( (v86 & 0x400) != 0 || (v86 & 0x800) != 0 || (v86 & 4) != 0 )
          {
            p_LockHandle = (unsigned __int64)Process;
            _InterlockedExchangeAdd64((volatile signed __int64 *)&Process[1].Affinity.Bitmap[13], 0xFFFFFFFFFFFFFFFFuLL);
          }
          *(_QWORD *)v11 = 0LL;
          if ( v23 <= 0x7F8 )
            MiWritePteShadow(v11, 0LL);
        }
LABEL_150:
        v73 = *(_QWORD *)v11;
        if ( v23 <= 0x7F8
          && (unsigned int)MiPteHasShadow(p_LockHandle, v73)
          && (v73 & 1) != 0
          && ((v73 & 0x20) == 0 || (v73 & 0x42) == 0) )
        {
          v15 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v15 )
          {
            v74 = *(_QWORD *)(v15 + 8 * ((v11 >> 3) & 0x1FF));
            if ( (v74 & 0x20) != 0 )
              v73 |= 0x20uLL;
            if ( (v74 & 0x42) != 0 )
              v73 |= 0x42uLL;
          }
        }
        if ( v73 )
        {
          v111 = v11;
          if ( !v20 )
            v20 = v11;
          v101 = v20;
        }
        LOWORD(v19) = v107;
        p_LockHandle = v98;
        if ( v11 == v17 || v98 == (_WORD)v107 )
          goto LABEL_237;
        if ( (((_BYTE)v11 + 8) & 0x78) == 0 && (*(_DWORD *)&Process[1].IdealNode[8] & 0x40000000) != 0 )
          goto LABEL_239;
        CurrentPrcb = KeGetCurrentPrcb();
        DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
        DpcRequestSummary = (unsigned int)CurrentPrcb->DpcRequestSummary;
        DpcTimeCount = CurrentPrcb->DpcTimeCount;
        if ( (DpcRequestSummary & 1) != 0 )
        {
          v15 = 1LL;
          if ( DpcTimeCount > 7 )
          {
            if ( CurrentPrcb->QuantumEnd )
            {
              v90 = 1;
              goto LABEL_232;
            }
LABEL_227:
            if ( (DpcRequestSummary & 0x1E) != 0 )
            {
              v90 = 5;
            }
            else
            {
              if ( CurrentPrcb->CurrentThread == CurrentPrcb->IdleThread )
                goto LABEL_231;
              v90 = 6;
            }
            goto LABEL_232;
          }
        }
        else
        {
          v15 = 0LL;
          if ( (DpcRequestSummary & 0x1E) != 0 )
          {
            v90 = 2;
            goto LABEL_232;
          }
          if ( CurrentPrcb->QuantumEnd )
          {
            v90 = 3;
            goto LABEL_232;
          }
          NextThread = CurrentPrcb->NextThread;
          if ( NextThread && NextThread != CurrentPrcb->CurrentThread )
          {
            v90 = 4;
            goto LABEL_232;
          }
        }
        if ( DpcWatchdogCount > 7 )
          break;
LABEL_236:
        p_LockHandle = v98;
        LOWORD(v19) = v107;
LABEL_237:
        v11 += 8LL;
        v13 += 4096LL;
        v114 = (unsigned __int64 *)v11;
        BugCheckParameter2 = v13;
        if ( v11 > v17 )
          goto LABEL_240;
      }
      if ( (_DWORD)v15 )
        goto LABEL_227;
LABEL_231:
      _disable();
      CurrentPrcb->DpcWatchdogCount = 0;
      CurrentPrcb->DpcTimeCount = 0;
      _enable();
      v90 = 0;
LABEL_232:
      if ( (DWORD1(PerfGlobalGroupMask) & 0x4000000) != 0 )
        EtwTraceShouldYieldProcessor(v90, DpcWatchdogCount, DpcTimeCount);
      if ( !v90 )
      {
        v17 = v99;
        goto LABEL_236;
      }
LABEL_239:
      v106 = 2;
      v11 += 8LL;
LABEL_240:
      v14 = v117;
LABEL_241:
      MiFlushTbList((__int64)&v126);
      if ( v20 )
        MiDeletePteRun(v20, v113);
      if ( DecayPfn )
      {
        MiDecayPfnFullyInitialized(DecayPfn);
        DecayPfn = 0LL;
      }
      v92 = (unsigned __int64 *)(v11 - 8);
      if ( v98 )
      {
        if ( (((unsigned __int64)*(unsigned int *)(v14 + 16) >> 16) & 0x3FF) < v98 )
          KeBugCheckEx(0x1Au, 0x41790uLL, v14, ((unsigned __int64)*(unsigned int *)(v14 + 16) >> 16) & 0x3FF, v98);
        v93 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v93 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v93);
          }
          while ( (*(_QWORD *)(v14 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v14 + 24), 0x3FuLL) );
        }
        *(_QWORD *)(v14 + 16) ^= ((unsigned int)*(_QWORD *)(v14 + 16) ^ ((unsigned __int16)(WORD1(*(_QWORD *)(v14 + 16))
                                                                                          - v98) << 16)) & 0x3FF0000;
        _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
      if ( (*(_DWORD *)(v14 + 16) & 0x3FF0000) == 0 )
        MiDeletePageTableHierarchy(0LL, v11 - 8);
      if ( v106 == 2
        || (*(_DWORD *)&Process[1].IdealNode[8] & 0x40000000) != 0
        || (LODWORD(NextPageTable) = KeShouldYieldProcessor(), (_DWORD)NextPageTable) )
      {
        v94 = (volatile signed __int32 *)&Process[1].IdealNode[8];
        MiUnlockWorkingSetExclusive((__int64)&Process[1].IdealNode[8], v115);
        CurrentIrql = KeGetCurrentIrql();
        v115 = CurrentIrql;
        LODWORD(NextPageTable) = 2;
        __writecr8(2uLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          LODWORD(NextPageTable) = ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v94);
        }
        else
        {
          v95 = 0;
          if ( _interlockedbittestandset(v94, 0x1Fu) )
          {
            LODWORD(NextPageTable) = ExpWaitForSpinLockExclusiveAndAcquire(v94);
            v95 = NextPageTable;
          }
          v96 = *v94;
          if ( (*v94 & 0xBFFFFFFF) != 0x80000000 )
          {
            do
            {
              if ( (v96 & 0x40000000) == 0 )
                _InterlockedCompareExchange(v94, v96 | 0x40000000, v96);
              if ( (++v95 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v95);
              v96 = *v94;
              LODWORD(NextPageTable) = *v94 & 0xBFFFFFFF;
            }
            while ( (_DWORD)NextPageTable != 0x80000000 );
          }
        }
      }
      else
      {
        LOBYTE(CurrentIrql) = v115;
      }
      v9 = v121;
      v10 = (unsigned __int64)(v92 + 1);
      if ( v10 > v121 )
        return NextPageTable;
      v6 = a3;
    }
  }
  return NextPageTable;
}
