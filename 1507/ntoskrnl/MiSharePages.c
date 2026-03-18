/*
 * XREFs of MiSharePages @ 0x14022B7E8
 * Callers:
 *     MiProcessCrcList @ 0x1406A8BBC (MiProcessCrcList.c)
 * Callees:
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiIsAddressValid @ 0x14005E8E0 (MiIsAddressValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockTransitionLeafPage @ 0x140082F6C (MiLockTransitionLeafPage.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14008AD50 (RtlAvlInsertNodeEx.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiReservePtes @ 0x1400AAD50 (MiReservePtes.c)
 *     MiClearPteAccessed @ 0x1400ADE80 (MiClearPteAccessed.c)
 *     MiInsertTbFlushEntry @ 0x1400AE330 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1400B1800 (MiReleasePtes.c)
 *     MiPfnShareCountIsZero @ 0x1400B2270 (MiPfnShareCountIsZero.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400B9CB0 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiAttachThreadDone @ 0x1400FB904 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1400FB9A8 (MiPrepareAttachThread.c)
 *     KeShouldYieldProcessor @ 0x14010B540 (KeShouldYieldProcessor.c)
 *     MiFlushTbListEarly @ 0x1401118F0 (MiFlushTbListEarly.c)
 *     MiComputeHash64 @ 0x140163B48 (MiComputeHash64.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiAllocateCombineProto @ 0x140226FF8 (MiAllocateCombineProto.c)
 *     MiCombineCandidate @ 0x140227894 (MiCombineCandidate.c)
 *     MiCombineCompare @ 0x140227AFC (MiCombineCompare.c)
 *     MiConvertPrivateToDemandZero @ 0x140228598 (MiConvertPrivateToDemandZero.c)
 *     MiConvertPrivateToProto @ 0x140228698 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x14022926C (MiConvertStandbyToProto.c)
 *     MiCrcStillIntact @ 0x140229DF8 (MiCrcStillIntact.c)
 *     MiDecrementCombinedPte @ 0x14022A0F0 (MiDecrementCombinedPte.c)
 *     MiMakeCombineCandidateClean @ 0x14022AB3C (MiMakeCombineCandidateClean.c)
 *     MiMapArbitraryPage @ 0x14022AC30 (MiMapArbitraryPage.c)
 *     MiPerformCombineScan @ 0x14022AED0 (MiPerformCombineScan.c)
 *     MiRecheckVaVm @ 0x14022AFD8 (MiRecheckVaVm.c)
 *     MiReleaseArbitraryPage @ 0x14022B07C (MiReleaseArbitraryPage.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x140264210 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiSharePages(_QWORD *a1, __int64 **a2, __int64 **a3, _QWORD *a4, int a5, __int64 a6, _QWORD *a7)
{
  __int64 v8; // r14
  _QWORD *v9; // r15
  int v10; // eax
  __int64 v11; // rdx
  unsigned __int64 v12; // rcx
  _BYTE *v13; // r12
  __int64 *v14; // r13
  int v15; // esi
  __int64 v16; // rbx
  _BYTE *PoolWithTag; // rax
  __int64 v18; // rdi
  int v19; // ebx
  _QWORD *v20; // rax
  __int64 v21; // rcx
  __int64 *v22; // r15
  unsigned int v23; // ebx
  signed __int32 i; // edx
  __int64 **v25; // rcx
  __int64 *v26; // rax
  char v27; // r15
  __int64 *v28; // rdi
  int j; // esi
  __int64 v30; // rbx
  __int64 v31; // r14
  char v32; // r15
  __int64 v33; // rsi
  __int64 v34; // rbx
  unsigned int v35; // edi
  __int64 v36; // rcx
  unsigned __int64 v37; // rdx
  __int64 v38; // r15
  unsigned __int64 v39; // r12
  _KPROCESS *v40; // r8
  unsigned __int64 v41; // rbx
  __int64 v42; // rdx
  __int64 v43; // rax
  unsigned __int64 v44; // rdi
  __int64 v45; // rdx
  __int64 v46; // rax
  unsigned __int64 v47; // rdi
  unsigned int v48; // r14d
  __int64 v49; // rsi
  unsigned __int64 v50; // r8
  int v51; // r15d
  __int64 v52; // rax
  char v53; // cl
  unsigned int v54; // r14d
  __int64 v55; // r13
  __int64 v56; // rcx
  unsigned __int64 v57; // r8
  unsigned __int64 Wsle; // r12
  _QWORD *Address; // rax
  unsigned int v60; // r14d
  __int64 v61; // rbx
  __int64 v62; // rcx
  __int64 v63; // rbx
  __int64 v64; // rsi
  unsigned __int64 v65; // rsi
  __int64 v66; // rdi
  unsigned __int64 v67; // rdx
  __int64 v68; // rdi
  int v69; // ebx
  __int64 v70; // rbx
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 **v73; // rcx
  __int64 v74; // rax
  __int64 *v75; // r14
  __int64 v76; // rax
  char v77; // cl
  unsigned __int64 v78; // r15
  char v79; // di
  __int64 *v80; // r12
  __int64 v81; // rcx
  __int64 v82; // rbx
  __int64 v83; // rcx
  __int64 CombineProto; // rax
  __int64 **v85; // rcx
  __int64 v86; // rax
  volatile signed __int32 *v87; // rdi
  unsigned __int8 v88; // r14
  unsigned int v89; // ebx
  signed __int32 v90; // edx
  bool v91; // r8
  unsigned __int64 *v92; // rsi
  _QWORD *v93; // rbx
  _QWORD *v94; // rax
  __int64 result; // rax
  char v96; // [rsp+40h] [rbp-C0h]
  char v97; // [rsp+40h] [rbp-C0h]
  __int64 v98; // [rsp+48h] [rbp-B8h]
  _BYTE *v99; // [rsp+50h] [rbp-B0h]
  __int64 *v100; // [rsp+58h] [rbp-A8h]
  unsigned int v101; // [rsp+60h] [rbp-A0h]
  __int64 *v102; // [rsp+68h] [rbp-98h]
  __int64 *v103; // [rsp+70h] [rbp-90h]
  __int64 v104; // [rsp+78h] [rbp-88h]
  __int64 v105; // [rsp+80h] [rbp-80h]
  int v106; // [rsp+88h] [rbp-78h]
  int v107; // [rsp+8Ch] [rbp-74h]
  int v108; // [rsp+90h] [rbp-70h]
  __int64 *v109; // [rsp+98h] [rbp-68h]
  unsigned __int64 v110; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v112; // [rsp+B8h] [rbp-48h] BYREF
  __int64 **v113; // [rsp+C0h] [rbp-40h]
  __int64 CurrentIrql; // [rsp+C8h] [rbp-38h]
  __int64 v115; // [rsp+D0h] [rbp-30h]
  __int64 v116; // [rsp+D8h] [rbp-28h]
  __int64 v117; // [rsp+E0h] [rbp-20h]
  __int64 *v118; // [rsp+E8h] [rbp-18h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F0h] [rbp-10h] BYREF
  __int64 v120; // [rsp+108h] [rbp+8h]
  _BYTE v121[56]; // [rsp+128h] [rbp+28h] BYREF
  _BYTE v122[208]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v123[8]; // [rsp+230h] [rbp+130h] BYREF
  char v124; // [rsp+270h] [rbp+170h] BYREF
  void *retaddr; // [rsp+2F8h] [rbp+1F8h]

  v8 = a1[4];
  v9 = a7;
  v115 = a6;
  v102 = *a3;
  v113 = a2;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v117 = *v102;
  v101 = 0;
  v104 = 0LL;
  v98 = v8;
  v10 = MiTbFlushType(v8);
  v12 = a1[3];
  v13 = v122;
  v14 = (__int64 *)a1[6];
  v15 = v10;
  v107 = v11;
  v108 = v11;
  v99 = v122;
  if ( v12 <= 0x14 )
  {
    LODWORD(v16) = a1[3];
  }
  else
  {
    v16 = 509LL;
    if ( v12 < 0x1FD )
      v16 = a1[3];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v16 + 24, 0x73576D4Du);
    v11 = 0LL;
    v99 = PoolWithTag;
    v13 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v13 = v122;
      v99 = v122;
      LODWORD(v16) = 20;
    }
  }
  *(_DWORD *)v13 = v15;
  *((_DWORD *)v13 + 3) = v11;
  *((_WORD *)v13 + 2) = 0;
  *((_QWORD *)v13 + 2) = v11;
  *((_DWORD *)v13 + 2) = v16;
  *((_QWORD *)v13 + 3) = v11;
  v18 = a1[5];
  v116 = v18;
  if ( v18 && (_KPROCESS *)v18 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v108 = MiPrepareAttachThread(v18, v18 + 1272);
    v19 = v108;
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v108 )
      goto LABEL_243;
    KiStackAttachProcess((_KPROCESS *)v18, 1, (__int64)v121);
  }
LABEL_11:
  v20 = v123;
  v21 = 4LL;
  do
  {
    *v20 = 0LL;
    v20 += 4;
    --v21;
  }
  while ( v21 );
  v22 = 0LL;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v8);
  }
  else
  {
    v23 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)v8, 0x1Fu) )
      v23 = ExpWaitForSpinLockExclusiveAndAcquire((volatile signed __int32 *)v8);
    for ( i = *(_DWORD *)v8; (*(_DWORD *)v8 & 0xBFFFFFFF) != 0x80000000; i = *(_DWORD *)v8 )
    {
      if ( (i & 0x40000000) == 0 )
        _InterlockedCompareExchange((volatile signed __int32 *)v8, i | 0x40000000, i);
      if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v23);
    }
  }
  if ( !v18
    || (*(_DWORD *)(v18 + 772) & 0xC00u) >= 0xC00
    && !*(_QWORD *)(v8 + 8)
    && ((PEPROCESS)v18 != PsInitialSystemProcess || !*(_DWORD *)(v117 + 1048)) )
  {
    while ( 1 )
    {
      v103 = v14;
      if ( v22 )
      {
        if ( v22[3] )
        {
          MiDecrementCombinedPte(v22 + 6);
        }
        else
        {
          v25 = v113;
          v26 = *v113;
          *v22 = (__int64)*v113;
          v22[1] = (__int64)v25;
          if ( (__int64 **)v26[1] != v25 )
            __fastfail(3u);
          v26[1] = (__int64)v22;
          *v25 = v22;
        }
      }
      v27 = 0;
      v96 = 0;
      if ( (++v107 & 0x1F) == 0 && (*(_DWORD *)v8 & 0x40000000) != 0
        || KeShouldYieldProcessor()
        || (unsigned int)MiFlushTbListEarly((__int64)v13, 2) )
      {
        v27 = 1;
        v96 = 1;
      }
      if ( v14 )
      {
        if ( !v27 )
          goto LABEL_67;
      }
      else
      {
        ++v101;
      }
      v28 = (__int64 *)&v124;
      for ( j = 2; j <= 3; ++j )
      {
        v30 = *v28;
        if ( *v28 )
        {
          do
          {
            v31 = *(_QWORD *)(v30 + 16);
            if ( MiCrcStillIntact((__int64)v102, v98, v30, j) )
            {
              *(_QWORD *)(v30 + 16) = v14;
              v14 = (__int64 *)v30;
            }
            v30 = v31;
          }
          while ( v31 );
          v103 = v14;
        }
        *v28 = 0LL;
        v28 += 4;
      }
      v13 = v99;
      v32 = v96;
      MiFlushTbList((__int64)v99);
      v33 = v123[0];
      if ( v123[0] )
      {
        do
        {
          v34 = *(_QWORD *)(v33 + 8);
          v35 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v35 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v35);
            }
            while ( (*(_QWORD *)(v34 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v34 + 24), 0x3FuLL) );
          }
          if ( (*(_BYTE *)(v34 + 34) & 7) != 6 )
            KeBugCheckEx(
              0x4Eu,
              0x99uLL,
              (v34 + 0x58000000000LL) / 48,
              *(_BYTE *)(v34 + 34) & 7,
              *(_QWORD *)(v34 + 24) & 0x3FFFFFFFFFFFFFFFLL);
          v36 = *(_QWORD *)(v34 + 24);
          v37 = (v36 & 0x3FFFFFFFFFFFFFFFLL) - 1;
          *(_QWORD *)(v34 + 24) = v36 ^ (v37 ^ v36) & 0x3FFFFFFFFFFFFFFFLL;
          if ( (v36 & 0x3FFFFFFFFFFFFFFFLL) == 1 )
            MiPfnShareCountIsZero(v34, v37);
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v33 = *(_QWORD *)(v33 + 16);
        }
        while ( v33 );
        v32 = v96;
        v13 = v99;
        v14 = v103;
      }
      v123[0] = 0LL;
      v8 = v98;
      if ( !v14 )
      {
        v18 = v116;
        break;
      }
      if ( v32 )
      {
        MiUnlockWorkingSetExclusive(v98, CurrentIrql);
        v18 = v116;
        goto LABEL_11;
      }
LABEL_67:
      v38 = v14[3];
      v39 = v14[1];
      v118 = (__int64 *)v14[2];
      v105 = *v14;
      v110 = v39;
      v100 = (__int64 *)v38;
      if ( (unsigned int)v38 >= 0x100 )
      {
        v106 = *(_DWORD *)(v38 + 40);
      }
      else
      {
        v106 = v38;
        v100 = 0LL;
      }
      if ( !(unsigned int)MiRecheckVaVm(v8, v39) )
        goto LABEL_234;
      v109 = (__int64 *)(((v39 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      if ( !MiIsAddressValid((__int64)v109) )
        goto LABEL_234;
      v41 = *(_QWORD *)&v40->Header.Lock;
      if ( (unsigned __int64)&v40[0x32BC88773LL].ReadyListHead <= 0x7F8
        && (unsigned int)MiPteHasShadow()
        && (v41 & 1) != 0
        && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
      {
        v42 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( v42 )
        {
          v43 = *(_QWORD *)(v42 + 8 * (((unsigned __int64)v40 >> 3) & 0x1FF));
          if ( (v43 & 0x20) != 0 )
            v41 |= 0x20uLL;
          if ( (v43 & 0x42) != 0 )
            v41 |= 0x42uLL;
        }
      }
      v112 = v41;
      if ( (v41 & 1) != 0 )
      {
        v44 = v41;
        if ( (unsigned __int64)&STACK[0x904824130B8] <= 0x7F8
          && (unsigned int)MiPteHasShadow()
          && ((v41 & 0x20) == 0 || (v41 & 0x42) == 0) )
        {
          v45 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v45 )
          {
            v46 = *(_QWORD *)(v45 + 8 * (((unsigned __int64)&v112 >> 3) & 0x1FF));
            if ( (v46 & 0x20) != 0 )
              v44 = v41 | 0x20;
            if ( (v46 & 0x42) != 0 )
              v44 |= 0x42uLL;
          }
        }
        v47 = (v44 >> 12) & 0xFFFFFFFFFLL;
        if ( !MI_IS_PFN(v47) )
        {
LABEL_234:
          v22 = v100;
          v13 = v99;
          goto LABEL_113;
        }
        v48 = 0;
        v49 = 48 * v47 - 0x58000000000LL;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v48 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v48);
          }
          while ( (*(_QWORD *)(v49 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v49 + 24), 0x3FuLL) );
        }
        v8 = v98;
      }
      else
      {
        if ( (v41 & 0x400) != 0 || (v41 & 0x800) == 0 )
          goto LABEL_234;
        v52 = MiLockTransitionLeafPage(v40, 0LL);
        v49 = v52;
        if ( !v52 )
          goto LABEL_103;
        v47 = (v52 + 0x58000000000LL) / 48;
      }
      v51 = MiCombineCandidate((__int64)v102, v49);
      if ( !v51 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_103:
        v22 = v100;
        v13 = v99;
        goto LABEL_113;
      }
      v53 = *(_BYTE *)(v49 + 34) & 7;
      v54 = (*(_DWORD *)(v49 + 16) >> 5) & 0x1F;
      if ( ((*(_QWORD *)(v49 + 40) >> 58) & 0x3F) != a5 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_110:
        v22 = v100;
LABEL_111:
        v13 = v99;
LABEL_112:
        v8 = v98;
        goto LABEL_113;
      }
      v97 = 0;
      v55 = 0LL;
      _InterlockedAnd64((volatile signed __int64 *)(v49 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v53 != 6 )
      {
        v79 = 0;
        v80 = MiReservePtes((__int64)&qword_14034FC70, 1u, v50);
        if ( !v80 )
        {
          v22 = v100;
          v13 = v99;
          v8 = v98;
          goto LABEL_113;
        }
        a4[9] = v80;
        a4[8] = v49;
        if ( !(unsigned int)MiMapArbitraryPage((__int64)v102, a4, v51, 1) )
        {
          MiReleasePtes((__int64)&qword_14034FC70, v80, 1u);
          v22 = v100;
          v13 = v99;
          goto LABEL_136;
        }
        v22 = v100;
        v82 = -1LL;
        if ( v100 )
        {
LABEL_201:
          v8 = v98;
          if ( (unsigned int)MiConvertStandbyToProto(v98, v102, (__int64)a4, (__int64)v22, v49, (__int64)v109, v82) )
          {
            v79 = 1;
            ++a7[1];
            if ( v82 == -1 )
            {
              v22 = 0LL;
              ++v104;
              v100 = 0LL;
            }
            else
            {
              *(_DWORD *)(v55 + 44) += 4096;
              v97 = 1;
            }
          }
        }
        else
        {
          if ( (unsigned int)MiPerformCombineScan(v81, (__int64)a4) && v120 == v105 )
          {
            v83 = 1LL;
            if ( v54 >> 3 == 1 )
            {
              v83 = 0LL;
            }
            else if ( v54 >> 3 == 3 && (v54 & 7) != 0 )
            {
              v83 = 2LL;
            }
            v55 = *(_QWORD *)(v115 + 8 * v83);
            if ( v55 )
            {
              if ( *(_DWORD *)(v55 + 44) < *(_DWORD *)(v55 + 40) )
              {
                CombineProto = MiAllocateCombineProto((__int64)v102, v105, v54, 0);
                v100 = (__int64 *)CombineProto;
                v22 = (__int64 *)CombineProto;
                if ( CombineProto )
                {
                  v103[3] = CombineProto;
                }
                else
                {
                  v85 = v113;
                  v22 = *v113;
                  v100 = *v113;
                  v86 = **v113;
                  if ( (__int64 **)(*v113)[1] != v113 || *(__int64 **)(v86 + 8) != v22 )
                    __fastfail(3u);
                  *v113 = (__int64 *)v86;
                  *(_QWORD *)(v86 + 8) = v85;
                  *((_DWORD *)v22 + 10) = v54;
                  v82 = *(_QWORD *)(v55 + 8 * ((unsigned __int64)*(unsigned int *)(v55 + 44) >> 12) + 48);
                }
                goto LABEL_201;
              }
            }
          }
          v8 = v98;
        }
        MiReleaseArbitraryPage((__int64)a4);
        MiReleasePtes((__int64)&qword_14034FC70, v80, 1u);
        v13 = v99;
        if ( v79 )
        {
          v78 = (unsigned __int64)v100;
          v77 = v97;
          goto LABEL_208;
        }
        goto LABEL_113;
      }
      if ( v109 != (__int64 *)(*(_QWORD *)(v49 + 8) | 0x8000000000000000uLL) )
        goto LABEL_110;
      v56 = *(_QWORD *)(v49 + 40);
      if ( (v56 & 0x200000000000000LL) != 0 || (*(_BYTE *)(v49 + 35) & 8) != 0 )
        goto LABEL_110;
      v8 = v98;
      if ( (v56 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
        goto LABEL_103;
      Wsle = MiLocateWsle(v39, v98, *(_QWORD *)v49);
      if ( Wsle < *(_QWORD *)(*(_QWORD *)(v98 + 184) + 8LL) )
        goto LABEL_103;
      if ( *(_WORD *)(v49 + 32) != 1 )
      {
        v22 = v100;
        v13 = v99;
        goto LABEL_113;
      }
      Address = 0LL;
      if ( v51 == 1 )
      {
        Address = MiLocateAddress(v110);
        if ( !Address || ((1 << (Address[6] & 7)) & 0x55) == 0 )
          goto LABEL_103;
      }
      v60 = (*(_DWORD *)(v49 + 16) >> 5) & 0x1F;
      if ( v60 != v106 )
        goto LABEL_110;
      if ( (v41 & 0x42) != 0 )
      {
        if ( v101 < 8 )
        {
          v61 = 2LL;
LABEL_134:
          v13 = v99;
          MiInsertTbFlushEntry((__int64)v99, v110, 1LL, 0);
          v63 = 4 * v61;
          v103[2] = v123[v63];
          v123[v63] = v103;
          goto LABEL_135;
        }
        MiMakeCombineCandidateClean(v109, (__int64)Address);
        MiInsertTbFlushEntry((__int64)v99, v110, 1LL, 0);
        v62 = (__int64)v99;
LABEL_139:
        MiFlushTbList(v62);
        goto LABEL_140;
      }
      if ( v105 != qword_14034EF10 )
        goto LABEL_160;
      if ( ((*(_DWORD *)(v49 + 16) >> 5) & 0x18) == 0 && (v41 & 0x20) != 0 )
      {
        if ( v101 < 3 )
        {
          v61 = 3LL;
          goto LABEL_134;
        }
        if ( !(unsigned int)MiClearPteAccessed(
                              v98,
                              v49,
                              v109,
                              (unsigned __int64 *)(*(_QWORD *)(*(_QWORD *)(v98 + 184) + 496LL)
                                                 + Wsle * *(unsigned int *)(*(_QWORD *)(v98 + 184) + 64LL)),
                              (__int64)v99,
                              dword_14034F248) )
          goto LABEL_110;
        v62 = (__int64)v99;
        v112 = v41 & 0xFFFFFFFFFFFFFFDFuLL;
        goto LABEL_139;
      }
LABEL_140:
      v64 = v105;
      if ( v105 != qword_14034EF10 || (v60 & 0x18) != 0 )
        goto LABEL_161;
      v65 = (unsigned __int64)MiReservePtes((__int64)&qword_14034FC70, 1u, v57);
      if ( v65 )
      {
        v66 = qword_1403D0218 ^ (qword_1403D0218 ^ (v47 << 12)) & 0xFFFFFFFFF000LL | 0x21;
        if ( v65 + 0x904C0000000LL <= 0x3FFFFFFF )
          v66 &= ~qword_1403D0220 & 0x7FFFFFFFFFFFFFFFLL;
        if ( v65 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
          && v65 >= 0xFFFFF68000000000uLL
          || v65 >= 0xFFFFF6FB40000000uLL
          && v65 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
          || v65 >= 0xFFFFF6FB7DA00000uLL
          && v65 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
          || v65 >= 0xFFFFF6FB7DBED000uLL
          && v65 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
        {
          v66 |= 4uLL;
        }
        if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v65) )
          v66 |= 0x100uLL;
        v67 = v66 & 0xFFFFFFFFFFFFFE7FuLL | ((unsigned __int64)(word_14034EC18 & 1) << 8);
        *(_QWORD *)v65 = v67;
        if ( v65 + 0x90482413000LL <= 0x7F8 )
          MiWritePteShadow(v65, v67);
        v68 = v98;
        v69 = MiConvertPrivateToDemandZero(v98, (__int64)(v65 << 25) >> 16, Wsle);
        MiReleasePtes((__int64)&qword_14034FC70, (_QWORD *)v65, 1u);
        if ( v69 )
        {
          ++v104;
          v8 = v98;
          v13 = v99;
          ++a7[1];
          v22 = v100;
          goto LABEL_113;
        }
        v64 = v105;
        goto LABEL_162;
      }
LABEL_160:
      v64 = v105;
LABEL_161:
      v68 = v98;
LABEL_162:
      v22 = v100;
      v70 = -1LL;
      if ( v100 )
        goto LABEL_176;
      if ( MiComputeHash64(v110) != v64 )
        goto LABEL_111;
      v71 = 1LL;
      if ( v60 >> 3 == 1 )
      {
        v71 = 0LL;
      }
      else if ( v60 >> 3 == 3 && (v60 & 7) != 0 )
      {
        v71 = 2LL;
      }
      v55 = *(_QWORD *)(v115 + 8 * v71);
      if ( v55 && *(_DWORD *)(v55 + 44) < *(_DWORD *)(v55 + 40) )
      {
        v72 = MiAllocateCombineProto((__int64)v102, v64, v60, 0);
        v100 = (__int64 *)v72;
        v22 = (__int64 *)v72;
        if ( v72 )
        {
          v75 = v103;
          v103[3] = v72;
        }
        else
        {
          v73 = v113;
          v22 = *v113;
          v100 = *v113;
          v74 = **v113;
          if ( (__int64 **)(*v113)[1] != v113 || *(__int64 **)(v74 + 8) != v22 )
            __fastfail(3u);
          *v113 = (__int64 *)v74;
          *(_QWORD *)(v74 + 8) = v73;
          *((_DWORD *)v22 + 10) = v60;
          v70 = *(_QWORD *)(v55 + 8 * ((unsigned __int64)*(unsigned int *)(v55 + 44) >> 12) + 48);
LABEL_176:
          v75 = v103;
        }
        v13 = v99;
        v76 = MiConvertPrivateToProto(v68, v109, (unsigned __int64)(v22 + 6), v102, (__int64)v99, v70);
        if ( !v76 )
          goto LABEL_112;
        ++a7[1];
        if ( v70 == -1 )
        {
          v78 = 0LL;
          ++v104;
          v77 = 0;
          v100 = 0LL;
        }
        else
        {
          *(_DWORD *)(v55 + 44) += 4096;
          v77 = 1;
          v78 = (unsigned __int64)v100;
        }
        v75[1] = v76;
        v75[2] = v123[0];
        v123[0] = v75;
LABEL_208:
        if ( v77 == 1 )
        {
          *(_QWORD *)(v78 + 24) = v105;
          v87 = (volatile signed __int32 *)&v102[2 * (v105 & 0xF) + 13];
          v88 = KeGetCurrentIrql();
          __writecr8(2uLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
          {
            ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v87);
          }
          else
          {
            v89 = 0;
            if ( _interlockedbittestandset(v87, 0x1Fu) )
              v89 = ExpWaitForSpinLockExclusiveAndAcquire(v87);
            v90 = *v87;
            if ( (*v87 & 0xBFFFFFFF) != 0x80000000 )
            {
              do
              {
                if ( (v90 & 0x40000000) == 0 )
                  _InterlockedCompareExchange(v87, v90 | 0x40000000, v90);
                if ( (++v89 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                  _mm_pause();
                else
                  HvlNotifyLongSpinWait(v89);
                v90 = *v87;
              }
              while ( (*v87 & 0xBFFFFFFF) != 0x80000000 );
              v13 = v99;
            }
          }
          v91 = 0;
          v92 = (unsigned __int64 *)&v102[2 * (v105 & 0xF) + 12];
          v93 = (_QWORD *)*v92;
          if ( *v92 )
          {
            while ( 1 )
            {
              if ( (int)MiCombineCompare(v78, (__int64)v93) < 0 )
              {
                v94 = (_QWORD *)*v93;
                if ( !*v93 )
                {
                  v91 = 0;
                  break;
                }
              }
              else
              {
                v94 = (_QWORD *)v93[1];
                if ( !v94 )
                {
                  v91 = 1;
                  break;
                }
              }
              v93 = v94;
            }
          }
          RtlAvlInsertNodeEx(v92, (unsigned __int64)v93, v91, v78);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
            ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v87, retaddr);
          else
            *v87 = 0;
          __writecr8(v88);
LABEL_135:
          v22 = 0LL;
        }
        else
        {
          v22 = v100;
        }
LABEL_136:
        v8 = v98;
        goto LABEL_113;
      }
      v13 = v99;
      v8 = v98;
LABEL_113:
      v14 = v118;
    }
  }
  MiUnlockWorkingSetExclusive(v8, CurrentIrql);
  v9 = a7;
  v19 = v108;
LABEL_243:
  if ( v19 == 1 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v121, 1);
    MiAttachThreadDone(v18 + 1272);
  }
  if ( v13 != v122 )
    ExFreePoolWithTag(v13, 0);
  result = v104;
  *v9 += v104;
  return result;
}
