/*
 * XREFs of MiSharePages @ 0x140128D20
 * Callers:
 *     MiProcessCrcList @ 0x14050E300 (MiProcessCrcList.c)
 * Callees:
 *     MiPrepareAttachThread @ 0x1400095D0 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x140009620 (MiAttachThreadDone.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     RtlAvlInsertNodeEx @ 0x14000C920 (RtlAvlInsertNodeEx.c)
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiFlushTbListEarly @ 0x140015ED0 (MiFlushTbListEarly.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiReservePtes @ 0x140049FD0 (MiReservePtes.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14004CC00 (ExReleaseSpinLockExclusive.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiInsertTbFlushEntry @ 0x1400606D0 (MiInsertTbFlushEntry.c)
 *     MiReleasePtes @ 0x1400680A0 (MiReleasePtes.c)
 *     MiDecrementShareCount @ 0x14006A8C0 (MiDecrementShareCount.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140088F60 (KiLeaveCriticalRegionUnsafe.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiClearPteAccessed @ 0x1400B72A0 (MiClearPteAccessed.c)
 *     KeShouldYieldProcessor @ 0x1400D54D0 (KeShouldYieldProcessor.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiAllocateCombineProto @ 0x140128770 (MiAllocateCombineProto.c)
 *     MiCrcStillIntact @ 0x140128AC0 (MiCrcStillIntact.c)
 *     MiRecheckVaVm @ 0x140129974 (MiRecheckVaVm.c)
 *     MiMapArbitraryPage @ 0x140129AC0 (MiMapArbitraryPage.c)
 *     MiCombineCandidate @ 0x14012A1D0 (MiCombineCandidate.c)
 *     MiPerformCombineScan @ 0x14012A464 (MiPerformCombineScan.c)
 *     MiMakeCombineCandidateClean @ 0x14012A4AC (MiMakeCombineCandidateClean.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiConvertPrivateToDemandZero @ 0x14012B468 (MiConvertPrivateToDemandZero.c)
 *     MiDecrementCombinedPte @ 0x14012B580 (MiDecrementCombinedPte.c)
 *     MiReleaseArbitraryPage @ 0x14012B824 (MiReleaseArbitraryPage.c)
 *     MiComputeHash64 @ 0x1401321E0 (MiComputeHash64.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     ExAllocatePoolWithTag @ 0x140238380 (ExAllocatePoolWithTag.c)
 *     ExFreePoolWithTag @ 0x1402391D0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall MiSharePages(__int64 a1, __int64 **a2, __int64 **a3, __int64 a4, int a5, __int64 a6, _QWORD *a7)
{
  __int64 *v7; // r14
  __int64 *v8; // r13
  __int64 v9; // rdi
  __int64 v10; // r12
  int v11; // eax
  _QWORD *v12; // rdx
  unsigned __int64 v13; // rcx
  int v14; // esi
  unsigned __int64 *v15; // r15
  _BYTE *PoolWithTag; // rax
  __int64 v17; // rbx
  __int64 v18; // rbx
  _QWORD *v19; // rsi
  KIRQL v20; // al
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // rax
  char v24; // bl
  int v25; // eax
  _KPROCESS *v26; // r8
  int v27; // esi
  ULONG_PTR v28; // rbx
  int v29; // r13d
  ULONG_PTR v30; // rbx
  __int64 v31; // rax
  unsigned __int64 v32; // r12
  __int64 v33; // r8
  __int64 v34; // rdi
  __int64 v35; // rax
  unsigned __int64 v36; // r8
  unsigned int v37; // r14d
  char v38; // cl
  unsigned int v39; // ebx
  __int64 v40; // r15
  __int64 v41; // rcx
  unsigned __int64 Wsle; // rax
  __int64 v43; // r11
  __int64 v44; // r10
  unsigned __int64 Address; // rax
  unsigned __int64 v46; // r8
  unsigned int v47; // r14d
  unsigned __int64 v48; // rbx
  __int64 v49; // rbx
  _KPROCESS *v50; // rdx
  unsigned __int64 v51; // r13
  __int64 v52; // rbx
  ULONG_PTR v53; // rax
  __int64 v54; // r9
  ULONG_PTR v55; // rdi
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 v57; // rbx
  int v58; // ebx
  __int64 v59; // rbx
  unsigned int v60; // r8d
  __int64 v61; // rcx
  __int64 CombineProto; // rax
  __int64 v63; // rax
  unsigned __int64 *v64; // rdi
  __int64 v65; // rax
  char v66; // cl
  char v67; // r12
  _QWORD *v68; // r13
  __int64 v69; // rcx
  ULONG_PTR v70; // r14
  __int64 v71; // rcx
  __int64 v72; // rax
  __int64 v73; // rax
  bool v74; // zf
  unsigned __int64 v75; // rdi
  unsigned __int64 v76; // rbx
  KIRQL v77; // al
  bool v78; // r8
  KIRQL v79; // r14
  unsigned __int64 *v80; // rbx
  unsigned __int64 v81; // rdx
  unsigned __int64 v82; // rcx
  unsigned __int64 v83; // rax
  unsigned __int64 v84; // rax
  __int64 *v85; // r14
  __int64 v86; // rbx
  _BYTE *v87; // r14
  __int64 v88; // r8
  __int64 v89; // rsi
  unsigned __int64 v90; // rbx
  __int64 result; // rax
  int v92; // [rsp+40h] [rbp-C0h]
  __int64 *v93; // [rsp+48h] [rbp-B8h]
  char v94; // [rsp+50h] [rbp-B0h]
  __int64 v95; // [rsp+58h] [rbp-A8h]
  KIRQL v97; // [rsp+68h] [rbp-98h]
  _BYTE *P; // [rsp+70h] [rbp-90h]
  unsigned int v99; // [rsp+78h] [rbp-88h]
  __int64 v100; // [rsp+80h] [rbp-80h]
  int v101; // [rsp+88h] [rbp-78h]
  int v102; // [rsp+8Ch] [rbp-74h]
  unsigned __int64 *v103; // [rsp+90h] [rbp-70h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-68h]
  unsigned __int64 *v105; // [rsp+A0h] [rbp-60h]
  unsigned __int64 v107; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v108; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v109; // [rsp+C8h] [rbp-38h]
  struct _KTHREAD *CurrentThread; // [rsp+D0h] [rbp-30h]
  __int64 v111; // [rsp+D8h] [rbp-28h]
  unsigned __int64 v112; // [rsp+E0h] [rbp-20h]
  unsigned __int64 *v113; // [rsp+E8h] [rbp-18h]
  __int64 v114; // [rsp+F0h] [rbp-10h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v116[4]; // [rsp+110h] [rbp+10h] BYREF
  $D4FCF91253F76F57393CBFE908971F67 v117; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v118[208]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v119[8]; // [rsp+230h] [rbp+130h]
  _QWORD v120[6]; // [rsp+270h] [rbp+170h] BYREF

  v7 = (__int64 *)a2;
  v8 = *a3;
  v9 = a1;
  v10 = *(_QWORD *)(a1 + 32);
  v111 = a6;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v114 = *v8;
  v99 = 0;
  v100 = 0LL;
  v93 = v8;
  v95 = v10;
  v11 = MiTbFlushType(v10);
  v13 = *(_QWORD *)(v9 + 24);
  v14 = v11;
  v15 = *(unsigned __int64 **)(v9 + 48);
  PoolWithTag = v118;
  P = v118;
  v102 = (int)v12;
  v101 = (int)v12;
  if ( v13 <= 0x14 )
  {
    LODWORD(v17) = *(_QWORD *)(v9 + 24);
  }
  else
  {
    v17 = 509LL;
    if ( v13 < 0x1FD )
      v17 = *(_QWORD *)(v9 + 24);
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v17 + 24, 0x73576D4Du);
    v12 = 0LL;
    P = PoolWithTag;
    if ( !PoolWithTag )
    {
      PoolWithTag = v118;
      P = v118;
      LODWORD(v17) = 20;
    }
  }
  *((_DWORD *)PoolWithTag + 3) = (_DWORD)v12;
  *(_DWORD *)PoolWithTag = v14;
  *((_WORD *)PoolWithTag + 2) = 0;
  *((_QWORD *)PoolWithTag + 2) = v12;
  *((_DWORD *)PoolWithTag + 2) = v17;
  *((_QWORD *)PoolWithTag + 3) = v12;
  v18 = *(_QWORD *)(v9 + 40);
  LODWORD(v9) = 1;
  v109 = v18;
  if ( v18 && (_KPROCESS *)v18 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&SpinLock, &LockHandle);
    v101 = MiPrepareAttachThread(v18, v18 + 1280);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v101 )
    {
LABEL_163:
      v87 = P;
      goto LABEL_164;
    }
    KiStackAttachProcess((_KPROCESS *)v18, 1LL, (__int64)&v117);
    v12 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 2 )
  {
    LOBYTE(v9) = 0;
    v119[0] = v12;
    v92 = v9;
    v119[4] = v12;
    v19 = v12;
    v120[0] = v12;
    v120[4] = v12;
    v20 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)v10);
    v97 = v20;
    if ( v18
      && ((*(_DWORD *)(v18 + 772) & 0xC00u) < 0xC00
       || *(_QWORD *)(v10 + 8)
       || (PEPROCESS)v18 == PsInitialSystemProcess && *(_DWORD *)(v114 + 1080)) )
    {
      MiUnlockWorkingSetExclusive(v10, v20, v22);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
      goto LABEL_163;
    }
LABEL_17:
    while ( 2 )
    {
      v103 = v15;
      if ( v19 )
      {
        if ( v19[3] )
        {
          MiDecrementCombinedPte(v19 + 6);
        }
        else
        {
          v23 = *v7;
          *v19 = *v7;
          v19[1] = v7;
          if ( *(__int64 **)(v23 + 8) != v7 )
            __fastfail(3u);
          *(_QWORD *)(v23 + 8) = v19;
          *v7 = (__int64)v19;
        }
      }
      v24 = 0;
      if ( (_BYTE)v9 == 1 )
      {
        LOBYTE(v9) = 0;
        v92 = v9;
        v25 = 0;
      }
      else
      {
        v25 = v102 + 1;
      }
      v102 = v25;
      if ( (v25 & 0x1F) == 0 && (*(_DWORD *)v10 & 0x40000000) != 0 )
      {
        v27 = 2;
      }
      else
      {
        v27 = 2;
        if ( !KeShouldYieldProcessor() && !(unsigned int)MiFlushTbListEarly((__int64)P, 2LL, v26) )
          goto LABEL_33;
      }
      v24 = 1;
LABEL_33:
      if ( v15 )
      {
        if ( v24 )
          goto LABEL_151;
        v19 = (_QWORD *)v15[3];
        v28 = v15[1];
        v113 = (unsigned __int64 *)v15[2];
        v107 = *v15;
        BugCheckParameter2 = v28;
        if ( (unsigned int)v19 >= 0x100 )
        {
          v29 = *((_DWORD *)v19 + 10);
        }
        else
        {
          v29 = (int)v19;
          v19 = 0LL;
        }
        if ( !(unsigned int)MiRecheckVaVm(v10, v28) )
          goto LABEL_51;
        v30 = ((v28 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
        v105 = (unsigned __int64 *)v30;
        v31 = MI_READ_PTE_LOCK_FREE(v30);
        v108 = v31;
        if ( (v31 & 1) != 0 )
        {
          v32 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v108) >> 12) & 0xFFFFFFFFFLL;
          if ( !MI_IS_PFN(v32) )
          {
            v10 = v95;
            v8 = v93;
            v15 = v113;
            continue;
          }
          v34 = 48 * v32 - 0x58000000000LL;
          MiLockPageAtDpcInline(v34, v21, v33);
        }
        else
        {
          if ( (v31 & 0x400) != 0 || (v31 & 0x800) == 0 )
            goto LABEL_51;
          v35 = MiLockTransitionLeafPage(v30, 0LL);
          v34 = v35;
          if ( !v35 )
            goto LABEL_50;
          v32 = (v35 + 0x58000000000LL) / 48;
        }
        v37 = MiCombineCandidate(v93, v34);
        if ( !v37
          || (v38 = *(_BYTE *)(v34 + 34) & 7,
              v39 = (*(_DWORD *)(v34 + 16) >> 5) & 0x1F,
              (unsigned __int8)HIBYTE(*(_QWORD *)(v34 + 40)) >> 2 != a5) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_48;
        }
        v94 = 0;
        v40 = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v38 == 6 )
        {
          if ( v105 != (unsigned __int64 *)(*(_QWORD *)(v34 + 8) | 0x8000000000000000uLL) )
            goto LABEL_48;
          v41 = *(_QWORD *)(v34 + 40);
          if ( (v41 & 0x200000000000000LL) != 0
            || (*(_BYTE *)(v34 + 35) & 8) != 0
            || (v41 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
          {
            goto LABEL_48;
          }
          Wsle = MiLocateWsle(BugCheckParameter2, v95, *(_QWORD *)v34);
          v43 = v95;
          v21 = Wsle;
          v112 = Wsle;
          if ( Wsle < *(_QWORD *)(*(_QWORD *)(v95 + 184) + 8LL) || *(_WORD *)(v34 + 32) != 1 )
          {
LABEL_147:
            v7 = (__int64 *)a2;
            v10 = v43;
            LODWORD(v9) = v92;
            v8 = v93;
            v15 = v113;
            continue;
          }
          v44 = BugCheckParameter2;
          Address = 0LL;
          if ( v37 == 1 )
          {
            Address = MiLocateAddress(BugCheckParameter2);
            if ( !Address )
              goto LABEL_147;
            v46 = 1LL;
            v21 = (unsigned int)(1 << (*(_BYTE *)(Address + 48) & 7));
            if ( (v21 & 0x55) == 0 )
              goto LABEL_147;
            v21 = v112;
          }
          else
          {
            v46 = 1LL;
          }
          v47 = (*(_DWORD *)(v34 + 16) >> 5) & 0x1F;
          if ( v47 != v29 )
            goto LABEL_147;
          v48 = v108;
          if ( (v108 & 0x42) != 0 )
          {
            if ( v99 < 8 )
            {
              v49 = 2LL;
LABEL_75:
              MiInsertTbFlushEntry((__int64)P, v44, 1LL, 0);
              v52 = 4 * v49;
              v19 = 0LL;
              v103[2] = v119[v52];
              v119[v52] = v103;
              goto LABEL_48;
            }
            MiMakeCombineCandidateClean(v105, Address);
            MiInsertTbFlushEntry((__int64)P, BugCheckParameter2, 1LL, 0);
            MiFlushTbList((__int64)P, v50);
            v51 = v107;
          }
          else
          {
            v51 = v107;
            if ( v107 != qword_1402FEA50 )
            {
              v10 = v43;
              goto LABEL_87;
            }
            if ( ((*(_DWORD *)(v34 + 16) >> 5) & 0x18) == 0 && (v108 & 0x20) != 0 )
            {
              if ( v99 < 3 )
              {
                v49 = 3LL;
                goto LABEL_75;
              }
              if ( !(unsigned int)MiClearPteAccessed(
                                    v43,
                                    v34,
                                    v105,
                                    (_DWORD *)(*(_QWORD *)(*(_QWORD *)(v43 + 184) + 496LL)
                                             + v21 * *(unsigned int *)(*(_QWORD *)(v43 + 184) + 64LL)),
                                    (__int64)P,
                                    dword_1402FED88) )
                goto LABEL_48;
              v108 = v48 & 0xFFFFFFFFFFFFFFDFuLL;
              MiFlushTbList((__int64)P, (_KPROCESS *)v21);
            }
          }
          if ( v51 == qword_1402FEA50
            && (v47 & 0x18) == 0
            && (v53 = MiReservePtes((__int64)&qword_1402FF7B0, 1u, v46), (v55 = v53) != 0) )
          {
            ValidKernelPte = MiMakeValidKernelPte(v32, 1, v53, v54);
            *(_QWORD *)v55 = ValidKernelPte;
            v57 = ValidKernelPte;
            if ( (unsigned int)MiPteInShadowRange(v55) )
              MiWritePteShadow(v55, v57);
            v10 = v95;
            v58 = MiConvertPrivateToDemandZero(v95, (__int64)(v55 << 25) >> 16, v112);
            MiReleasePtes((__int64)&qword_1402FF7B0, (_QWORD *)v55, 1u);
            if ( v58 )
            {
              v21 = (__int64)a7;
              ++v100;
              v7 = (__int64 *)a2;
              LODWORD(v9) = v92;
              ++a7[1];
              v8 = v93;
              v15 = v113;
              continue;
            }
          }
          else
          {
            v10 = v95;
          }
LABEL_87:
          LODWORD(v9) = (unsigned __int8)v92;
          if ( (v47 & 0x18) != 0 )
            LODWORD(v9) = 1;
          v59 = -1LL;
          v92 = v9;
          if ( !v19 )
          {
            if ( MiComputeHash64(BugCheckParameter2) != v51 )
              goto LABEL_149;
            v61 = v60;
            if ( v47 >> 3 == v60 )
            {
              v61 = 0LL;
            }
            else if ( v47 >> 3 == 3 && (v47 & 7) != 0 )
            {
              v61 = 2LL;
            }
            v40 = *(_QWORD *)(v111 + 8 * v61);
            if ( !v40 || *(_DWORD *)(v40 + 44) >= *(_DWORD *)(v40 + 40) )
            {
LABEL_149:
              v7 = (__int64 *)a2;
              v8 = v93;
              v15 = v113;
              continue;
            }
            CombineProto = MiAllocateCombineProto((__int64)v93, v51, v47, 0LL);
            v19 = (_QWORD *)CombineProto;
            if ( CombineProto )
            {
              v64 = v103;
              v103[3] = CombineProto;
              goto LABEL_103;
            }
            v19 = *a2;
            v63 = **a2;
            if ( (__int64 **)(*a2)[1] != a2 || *(_QWORD **)(v63 + 8) != v19 )
              __fastfail(3u);
            *a2 = (__int64 *)v63;
            *(_QWORD *)(v63 + 8) = a2;
            *((_DWORD *)v19 + 10) = v47;
            v59 = *(_QWORD *)(v40 + 8 * ((unsigned __int64)*(unsigned int *)(v40 + 44) >> 12) + 48);
          }
          v64 = v103;
LABEL_103:
          v65 = MiConvertPrivateToProto(v10, (_DWORD)v105, (int)v19 + 48, (_DWORD)v93, (__int64)P, v59);
          if ( !v65 )
            goto LABEL_49;
          ++a7[1];
          if ( v59 == -1 )
          {
            v19 = 0LL;
            ++v100;
            v66 = 0;
          }
          else
          {
            *(_DWORD *)(v40 + 44) += 4096;
            v66 = 1;
          }
          v64[1] = v65;
          v64[2] = v119[0];
          v119[0] = v64;
LABEL_135:
          if ( v66 != 1 )
            goto LABEL_49;
          v19[3] = v51;
          v75 = v51 & 0xF;
          v76 = v75;
          v8 = v93;
          v9 = 16 * v75;
          v77 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)((char *)v93 + v9 + 104));
          v78 = 0;
          v79 = v77;
          v80 = (unsigned __int64 *)&v93[2 * v76 + 12];
          v81 = *v80;
          if ( !*v80 )
            goto LABEL_146;
          v82 = v19[3];
          while ( 1 )
          {
            v83 = *(_QWORD *)(v81 + 24);
            if ( v82 > v83 || v82 >= v83 && *((_DWORD *)v19 + 10) >= *(_DWORD *)(v81 + 40) )
            {
              v84 = *(_QWORD *)(v81 + 8);
              if ( !v84 )
              {
                v78 = 1;
LABEL_146:
                RtlAvlInsertNodeEx(v80, v81, v78, (unsigned __int64)v19);
                ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)((char *)v93 + v9 + 104), v79);
                v7 = (__int64 *)a2;
                v19 = 0LL;
                LODWORD(v9) = v92;
                v15 = v113;
                goto LABEL_17;
              }
            }
            else
            {
              v84 = *(_QWORD *)v81;
              if ( !*(_QWORD *)v81 )
              {
                v78 = 0;
                goto LABEL_146;
              }
            }
            v81 = v84;
          }
        }
        v67 = 0;
        v68 = (_QWORD *)MiReservePtes((__int64)&qword_1402FF7B0, 1u, v36);
        if ( !v68 )
          goto LABEL_48;
        *(_QWORD *)(a4 + 72) = v68;
        *(_QWORD *)(a4 + 64) = v34;
        if ( !(unsigned int)MiMapArbitraryPage(v93, a4, v37, 1LL) )
        {
          MiReleasePtes((__int64)&qword_1402FF7B0, v68, 1u);
LABEL_48:
          v10 = v95;
LABEL_49:
          v7 = (__int64 *)a2;
LABEL_50:
          LODWORD(v9) = v92;
LABEL_51:
          v8 = v93;
          v15 = v113;
          continue;
        }
        v69 = (unsigned __int8)v92;
        if ( (v39 & 0x18) != 0 )
          v69 = 1LL;
        v70 = -1LL;
        v92 = v69;
        if ( !v19 )
        {
          if ( !(unsigned int)MiPerformCombineScan(v69, a4, v116) || v116[0] != v107 )
            goto LABEL_133;
          v71 = 1LL;
          if ( v39 >> 3 == 1 )
          {
            v71 = 0LL;
          }
          else if ( v39 >> 3 == 3 && (v39 & 7) != 0 )
          {
            v71 = 2LL;
          }
          v40 = *(_QWORD *)(v111 + 8 * v71);
          if ( !v40 || *(_DWORD *)(v40 + 44) >= *(_DWORD *)(v40 + 40) )
            goto LABEL_133;
          v72 = MiAllocateCombineProto((__int64)v93, v107, v39, 0LL);
          v19 = (_QWORD *)v72;
          if ( v72 )
          {
            v103[3] = v72;
          }
          else
          {
            v19 = *a2;
            v73 = **a2;
            if ( (__int64 **)(*a2)[1] != a2 || *(_QWORD **)(v73 + 8) != v19 )
              __fastfail(3u);
            *a2 = (__int64 *)v73;
            *(_QWORD *)(v73 + 8) = a2;
            *((_DWORD *)v19 + 10) = v39;
            v70 = *(_QWORD *)(v40 + 8 * ((unsigned __int64)*(unsigned int *)(v40 + 44) >> 12) + 48);
          }
        }
        if ( (unsigned int)MiConvertStandbyToProto(v95, v93, a4, (__int64)v19, v34, (__int64)v105, v70) )
        {
          v67 = 1;
          ++a7[1];
          if ( v70 == -1LL )
          {
            v19 = 0LL;
            ++v100;
          }
          else
          {
            *(_DWORD *)(v40 + 44) += 4096;
            v94 = 1;
          }
        }
LABEL_133:
        MiReleaseArbitraryPage(a4);
        MiReleasePtes((__int64)&qword_1402FF7B0, v68, 1u);
        v74 = v67 == 0;
        v10 = v95;
        if ( v74 )
          goto LABEL_49;
        v51 = v107;
        v66 = v94;
        goto LABEL_135;
      }
      break;
    }
    ++v99;
LABEL_151:
    v85 = v120;
    do
    {
      v86 = *v85;
      if ( *v85 )
      {
        do
        {
          v9 = *(_QWORD *)(v86 + 16);
          if ( MiCrcStillIntact((__int64)v8, v10, v86, v27) )
          {
            *(_QWORD *)(v86 + 16) = v15;
            v15 = (unsigned __int64 *)v86;
          }
          v86 = v9;
        }
        while ( v9 );
      }
      *v85 = 0LL;
      ++v27;
      v85 += 4;
    }
    while ( v27 <= 3 );
    v87 = P;
    MiFlushTbList((__int64)P, (_KPROCESS *)v21);
    MiUnlockWorkingSetExclusive(v10, v97, v88);
    v89 = v119[0];
    if ( v119[0] )
    {
      do
      {
        v9 = *(_QWORD *)(v89 + 8);
        v90 = (unsigned __int8)MiLockPageInline(v9);
        *(_BYTE *)(v9 + 34) = *(_BYTE *)(v9 + 34) & 0xF8 | 6;
        MiDecrementShareCount(v9);
        _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v90);
        v89 = *(_QWORD *)(v89 + 16);
      }
      while ( v89 );
      v8 = v93;
    }
    if ( v15 )
    {
      v7 = (__int64 *)a2;
      v12 = 0LL;
      v18 = v109;
      continue;
    }
    break;
  }
  KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
  v18 = v109;
LABEL_164:
  if ( v101 == 1 )
  {
    KiUnstackDetachProcess(&v117, 1LL);
    MiAttachThreadDone(v18 + 1280);
  }
  if ( v87 != v118 )
    ExFreePoolWithTag(v87, 0);
  result = v100;
  *a7 += v100;
  return result;
}
