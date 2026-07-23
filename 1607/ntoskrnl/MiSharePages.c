/*
 * XREFs of MiSharePages @ 0x1401FA710
 * Callers:
 *     MiProcessCrcList @ 0x140663EAC (MiProcessCrcList.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x14002E520 (ExReleaseSpinLockExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiReleasePtes @ 0x140051250 (MiReleasePtes.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140055B20 (KiLeaveCriticalRegionUnsafe.c)
 *     MiFlushTbListEarly @ 0x140088F20 (MiFlushTbListEarly.c)
 *     KeShouldYieldProcessor @ 0x140094EC0 (KeShouldYieldProcessor.c)
 *     MiComputeHash64 @ 0x1400B0EC4 (MiComputeHash64.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MiWorkingSetIsContended @ 0x1400B8870 (MiWorkingSetIsContended.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiReservePtes @ 0x1400DB9F0 (MiReservePtes.c)
 *     MiInsertTbFlushEntry @ 0x1400DE0E0 (MiInsertTbFlushEntry.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiClearPteAccessed @ 0x1400DFD90 (MiClearPteAccessed.c)
 *     MiDecrementShareCount @ 0x1400E2F40 (MiDecrementShareCount.c)
 *     MiProtectionToCacheAttribute @ 0x1400E538C (MiProtectionToCacheAttribute.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     MiAttachThreadDone @ 0x140108E2C (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x140108EA0 (MiPrepareAttachThread.c)
 *     MiIsStoreProcess @ 0x14010AC04 (MiIsStoreProcess.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiAllocateCombineProto @ 0x1401F7974 (MiAllocateCombineProto.c)
 *     MiCombineCandidate @ 0x1401F7CA4 (MiCombineCandidate.c)
 *     MiConvertPrivateToDemandZero @ 0x1401F8668 (MiConvertPrivateToDemandZero.c)
 *     MiConvertPrivateToProto @ 0x1401F8734 (MiConvertPrivateToProto.c)
 *     MiConvertStandbyToProto @ 0x1401F8EE8 (MiConvertStandbyToProto.c)
 *     MiCrcStillIntact @ 0x1401F9300 (MiCrcStillIntact.c)
 *     MiDereferenceCombineBlock @ 0x1401F9960 (MiDereferenceCombineBlock.c)
 *     MiHashIsCommon @ 0x1401F9C40 (MiHashIsCommon.c)
 *     MiMakeCombineCandidateClean @ 0x1401F9DA0 (MiMakeCombineCandidateClean.c)
 *     MiMapArbitraryPage @ 0x1401F9E68 (MiMapArbitraryPage.c)
 *     MiPerformCombineScan @ 0x1401F9F98 (MiPerformCombineScan.c)
 *     MiRecheckVaVm @ 0x1401FA118 (MiRecheckVaVm.c)
 *     MiReleaseArbitraryPage @ 0x1401FA254 (MiReleaseArbitraryPage.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

_QWORD *__fastcall MiSharePages(__int64 a1, _QWORD *a2, __int64 *a3, __int64 *a4, int a5, __int64 a6)
{
  __int64 *v7; // r15
  __int64 v8; // r14
  int v9; // eax
  __int64 v10; // rdx
  unsigned __int64 v11; // rcx
  _BYTE *v12; // r13
  __int64 *v13; // r12
  __int64 v14; // rsi
  __int64 v15; // rbx
  _BYTE *PoolWithTag; // rax
  __int64 v17; // rdi
  _QWORD *v18; // rax
  __int64 v19; // rcx
  LONG *SharedVm; // rbx
  KIRQL v21; // al
  __int64 v22; // rdx
  KIRQL v23; // r9
  char v24; // bl
  int v25; // eax
  _KPROCESS *v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9
  unsigned __int64 v29; // rdi
  unsigned __int64 v30; // rbx
  __int64 v31; // rax
  ULONG_PTR v32; // r9
  unsigned __int64 v33; // r12
  __int64 v34; // rsi
  int v35; // eax
  unsigned __int64 v36; // r8
  int v37; // r14d
  char v38; // r10
  unsigned int v39; // ebx
  __int64 v40; // r15
  __int64 v41; // rcx
  unsigned __int64 v42; // rdx
  __int64 v43; // rcx
  unsigned __int64 v44; // r8
  ULONG_PTR *SharedWorkingSetList; // r10
  unsigned __int64 v46; // r11
  unsigned __int64 Address; // rax
  int v48; // ecx
  unsigned int v49; // r14d
  unsigned __int64 v50; // rbx
  __int64 v51; // rbx
  _KPROCESS *v52; // rdx
  __int64 v53; // r8
  __int64 v54; // r9
  __int64 v55; // rbx
  _KPROCESS *v56; // rdx
  __int64 v57; // r8
  __int64 v58; // r9
  bool v59; // zf
  ULONG_PTR v60; // rax
  __int64 v61; // rsi
  unsigned __int64 ValidKernelPte; // rax
  unsigned __int64 *v63; // r8
  __int64 v64; // rdx
  __int64 v65; // rcx
  int v66; // ebx
  __int64 v67; // rbx
  unsigned __int64 v68; // rax
  __int64 v69; // r11
  unsigned __int64 v70; // r11
  __int64 *v71; // r12
  __int64 CombineProto; // rax
  __int64 v73; // rax
  __int64 *v74; // rsi
  __m128i *v75; // rax
  char v76; // cl
  char v77; // r12
  ULONG_PTR v78; // r13
  int v79; // eax
  __int64 v80; // r14
  unsigned __int64 v81; // r10
  __int64 v82; // rax
  __int64 v83; // rax
  KIRQL v84; // al
  bool v85; // r8
  KIRQL v86; // r14
  unsigned __int64 *v87; // rcx
  unsigned __int64 v88; // rdx
  unsigned __int64 v89; // r8
  unsigned __int64 v90; // rax
  unsigned __int64 v91; // rax
  __int64 *v92; // rdi
  int i; // esi
  __int64 v94; // rbx
  __int64 v95; // r14
  __int64 v96; // rdx
  __int64 v97; // r8
  __int64 v98; // r9
  __int64 v99; // rdi
  unsigned __int64 v100; // rbx
  __int64 v101; // rdx
  __int64 v102; // r8
  __int64 v103; // r9
  _QWORD *result; // rax
  int v105; // [rsp+40h] [rbp-C0h]
  char v106; // [rsp+44h] [rbp-BCh]
  ULONG_PTR v107; // [rsp+48h] [rbp-B8h]
  KIRQL v109; // [rsp+58h] [rbp-A8h]
  unsigned int v110; // [rsp+5Ch] [rbp-A4h]
  __int64 v111; // [rsp+60h] [rbp-A0h]
  __int64 v112; // [rsp+68h] [rbp-98h]
  int v113; // [rsp+70h] [rbp-90h]
  int v114; // [rsp+74h] [rbp-8Ch]
  __int64 v115; // [rsp+78h] [rbp-88h]
  __int64 *v116; // [rsp+80h] [rbp-80h]
  int v117; // [rsp+88h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+90h] [rbp-70h]
  unsigned __int64 *v119; // [rsp+98h] [rbp-68h]
  _BYTE *v120; // [rsp+A0h] [rbp-60h]
  _QWORD *v121; // [rsp+A8h] [rbp-58h]
  _QWORD *v122; // [rsp+B0h] [rbp-50h]
  int v123; // [rsp+B8h] [rbp-48h]
  unsigned __int64 v124; // [rsp+C0h] [rbp-40h] BYREF
  unsigned __int64 Wsle; // [rsp+C8h] [rbp-38h]
  __int64 v126; // [rsp+D0h] [rbp-30h]
  __int64 v127; // [rsp+D8h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-20h]
  __int64 v129; // [rsp+E8h] [rbp-18h]
  __int64 *v130; // [rsp+F0h] [rbp-10h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v132; // [rsp+110h] [rbp+10h]
  _BYTE v133[48]; // [rsp+130h] [rbp+30h] BYREF
  _BYTE v134[208]; // [rsp+160h] [rbp+60h] BYREF
  _QWORD v135[8]; // [rsp+230h] [rbp+130h] BYREF
  char v136; // [rsp+270h] [rbp+170h] BYREF

  v126 = a1;
  v127 = a6;
  v7 = a3;
  v8 = a2[4];
  v121 = *(_QWORD **)(a1 + 16);
  v122 = *(_QWORD **)(a1 + 24);
  v123 = *(_DWORD *)(a1 + 40);
  v112 = *a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v110 = 0;
  v115 = 0LL;
  v107 = v8;
  v9 = MiTbFlushType(v8);
  v11 = a2[3];
  v12 = v134;
  v13 = (__int64 *)a2[6];
  LODWORD(v14) = v9;
  v113 = v10;
  v114 = v10;
  v120 = v134;
  if ( v11 <= 0x14 )
  {
    LODWORD(v15) = a2[3];
  }
  else
  {
    v15 = 509LL;
    if ( v11 < 0x1FD )
      v15 = a2[3];
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 8 * v15 + 24, 0x73576D4Du);
    v10 = 0LL;
    v120 = PoolWithTag;
    v12 = PoolWithTag;
    if ( !PoolWithTag )
    {
      v12 = v134;
      v120 = v134;
      LODWORD(v15) = 20;
    }
  }
  *((_WORD *)v12 + 2) = 0;
  *((_DWORD *)v12 + 2) = v15;
  *((_DWORD *)v12 + 3) = v10;
  *(_DWORD *)v12 = v14;
  *((_QWORD *)v12 + 2) = v10;
  *((_QWORD *)v12 + 3) = v10;
  v17 = a2[5];
  v129 = v17;
  if ( v17 && (_KPROCESS *)v17 != KeGetCurrentThread()->ApcState.Process )
  {
    KeAcquireInStackQueuedSpinLock(&qword_140327780, &LockHandle);
    v114 = MiPrepareAttachThread(v17, v17 + 1280);
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    if ( !v114 )
      goto LABEL_156;
    KiStackAttachProcess((_KPROCESS *)v17, 1, (__int64)v133);
    v10 = 0LL;
  }
  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  while ( 2 )
  {
    v18 = v135;
    v19 = 4LL;
    do
    {
      *v18 = v10;
      v18 += 4;
      --v19;
    }
    while ( v19 );
    LOBYTE(v14) = v10;
    v105 = v14;
    SharedVm = MiGetSharedVm(v8);
    v21 = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    v23 = v21;
    v109 = v21;
    if ( v17 && ((*(_DWORD *)(v17 + 772) & 0xC00u) < 0xC00 || *(_QWORD *)(v8 + 96) || MiIsStoreProcess(v17)) )
    {
      LOBYTE(v22) = v23;
      MiUnlockWorkingSetExclusive(v8, v22);
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v101, v102, v103);
    }
    else
    {
LABEL_18:
      v24 = 0;
      v116 = v13;
      if ( (_BYTE)v14 == 1 )
      {
        LOBYTE(v14) = 0;
        v105 = v14;
        v25 = 0;
      }
      else
      {
        v25 = v113 + 1;
      }
      v113 = v25;
      if ( (v25 & 7) == 0 && MiWorkingSetIsContended(v8)
        || KeShouldYieldProcessor()
        || (unsigned int)MiFlushTbListEarly((__int64)v12, 2) )
      {
        v24 = 1;
      }
      if ( v13 )
      {
        if ( v24 )
          goto LABEL_141;
        v29 = v13[3];
        v30 = v13[1];
        v130 = (__int64 *)v13[2];
        v111 = *v13;
        BugCheckParameter2 = v30;
        if ( (unsigned int)v29 >= 0x100 )
        {
          v117 = *(_DWORD *)(v29 + 40);
        }
        else
        {
          v117 = v29;
          v29 = 0LL;
        }
        if ( !(unsigned int)MiRecheckVaVm(v8, v30) )
        {
LABEL_32:
          MiDereferenceCombineBlock(v7, (_QWORD *)v29);
          goto LABEL_138;
        }
        v119 = (unsigned __int64 *)(((v30 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
        v31 = MI_READ_PTE_LOCK_FREE((unsigned __int64)v119);
        v124 = v31;
        if ( (v31 & 1) != 0 )
        {
          v33 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE((unsigned __int64)&v124) >> 12) & 0xFFFFFFFFFLL;
          if ( !MiIsPfnInline(v33) )
            goto LABEL_32;
          v34 = 48 * v33 - 0x58000000000LL;
          MiLockPageAtDpcInline(v34);
        }
        else
        {
          if ( (v31 & 0x400) != 0 || (v31 & 0x800) == 0 )
            goto LABEL_32;
          v34 = MiLockTransitionLeafPage(v32, 0LL);
          if ( !v34 )
            goto LABEL_39;
          v33 = (v34 + 0x58000000000LL) / 48;
        }
        v35 = MiCombineCandidate(v112, v34);
        v37 = v35;
        if ( !v35
          || (v38 = *(_BYTE *)(v34 + 34) & 7, v39 = (*(_DWORD *)(v34 + 16) >> 5) & 0x1F, (v123 & 4) != 0)
          && v35 == 1
          && !(unsigned int)MiHashIsCommon(v126, v111)
          || (unsigned __int8)HIBYTE(*(_QWORD *)(v34 + 40)) >> 2 != a5 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          goto LABEL_44;
        }
        v106 = 0;
        v40 = 0LL;
        _InterlockedAnd64((volatile signed __int64 *)(v34 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v38 == 6 )
        {
          if ( v119 != (unsigned __int64 *)(*(_QWORD *)(v34 + 8) | 0x8000000000000000uLL) )
            goto LABEL_55;
          v41 = *(_QWORD *)(v34 + 40);
          if ( (v41 & 0x200000000000000LL) != 0 )
            goto LABEL_55;
          if ( (*(_BYTE *)(v34 + 35) & 8) != 0 )
            goto LABEL_55;
          if ( (v41 & 0xFFFFFFFFFLL) == 0xFFFFFFFFDLL )
            goto LABEL_55;
          Wsle = MiLocateWsle(BugCheckParameter2, v107, *(_QWORD *)v34);
          SharedWorkingSetList = MiGetSharedWorkingSetList(v107);
          if ( v42 < SharedWorkingSetList[1] )
            goto LABEL_55;
          if ( *(_WORD *)(v34 + 32) != 1 )
            goto LABEL_57;
          v46 = BugCheckParameter2;
          Address = 0LL;
          if ( v37 == 1 )
          {
            Address = MiLocateAddress(BugCheckParameter2);
            if ( !Address || (v48 = *(_DWORD *)(Address + 48), (v48 & 0x100000) != 0) || ((1 << (v48 & 7)) & 0x55) == 0 )
            {
LABEL_57:
              v7 = a3;
              MiDereferenceCombineBlock(a3, (_QWORD *)v29);
              v8 = v107;
              LODWORD(v14) = v105;
              goto LABEL_138;
            }
            v42 = Wsle;
            v43 = v107;
          }
          v49 = (*(_DWORD *)(v34 + 16) >> 5) & 0x1F;
          if ( v49 != v117 )
            goto LABEL_57;
          v50 = v124;
          if ( (v124 & 0x42) != 0 )
          {
            if ( v110 < 8 )
            {
              v51 = 2LL;
LABEL_73:
              MiInsertTbFlushEntry((__int64)v12, v46, 1LL, 0);
              v7 = a3;
              v8 = v107;
              LODWORD(v14) = v105;
              v55 = 4 * v51;
              v116[2] = v135[v55];
              v135[v55] = v116;
              goto LABEL_138;
            }
            MiMakeCombineCandidateClean((unsigned __int64)v119, Address);
            MiInsertTbFlushEntry((__int64)v12, BugCheckParameter2, 1LL, 0);
            MiFlushTbList((__int64)v12, v52, v53, v54);
          }
          else
          {
            if ( v111 != qword_140326E50 )
              goto LABEL_83;
            if ( ((*(_DWORD *)(v34 + 16) >> 5) & 0x18) == 0 && (v124 & 0x20) != 0 )
            {
              if ( v110 < 3 )
              {
                v51 = 3LL;
                goto LABEL_73;
              }
              if ( !(unsigned int)MiClearPteAccessed(
                                    v43,
                                    v34,
                                    v119,
                                    (_DWORD *)(SharedWorkingSetList[10]
                                             + v42 * *((unsigned int *)SharedWorkingSetList + 8)),
                                    (__int64)v12,
                                    dword_1403271C8) )
                goto LABEL_55;
              v124 = v50 & 0xFFFFFFFFFFFFFFDFuLL;
              MiFlushTbList((__int64)v12, v56, v57, v58);
            }
          }
          if ( v111 == qword_140326E50 )
          {
            v59 = (v49 & 0x18) == 0;
            if ( (v49 & 0x18) != 0 )
              goto LABEL_84;
            v60 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, v44);
            v61 = v60;
            if ( v60 )
            {
              ValidKernelPte = MiMakeValidKernelPte(v33, 1, v60);
              *v63 = ValidKernelPte;
              if ( MiPteInShadowRange((unsigned __int64)v63) )
                MiWritePteShadow(v65, v64);
              v66 = MiConvertPrivateToDemandZero(v107, v61 << 25 >> 16, Wsle);
              MiReleasePtes((__int64)&qword_1403278B0, v61, 1u);
              if ( v66 )
              {
                v7 = a3;
                ++v115;
                ++v122[1];
                MiDereferenceCombineBlock(a3, (_QWORD *)v29);
                v8 = v107;
                LODWORD(v14) = v105;
                goto LABEL_138;
              }
            }
          }
LABEL_83:
          v59 = (v49 & 0x18) == 0;
LABEL_84:
          LODWORD(v14) = (unsigned __int8)v105;
          if ( !v59 )
            LODWORD(v14) = 1;
          v67 = -1LL;
          v105 = v14;
          if ( v29 )
          {
            v71 = (__int64 *)v112;
          }
          else
          {
            v68 = MiComputeHash64(BugCheckParameter2);
            if ( v68 != v69 )
              goto LABEL_136;
            v40 = *(_QWORD *)(v127 + 8LL * (int)MiProtectionToCacheAttribute(v49));
            if ( !v40 || *(_DWORD *)(v40 + 44) >= *(_DWORD *)(v40 + 40) )
              goto LABEL_136;
            v71 = (__int64 *)v112;
            CombineProto = MiAllocateCombineProto(v112, v70, v49, 0);
            v29 = CombineProto;
            if ( CombineProto )
            {
              v74 = v116;
              v116[3] = CombineProto;
LABEL_97:
              v8 = v107;
              v75 = MiConvertPrivateToProto(v107, v119, v29 + 48, v71, (__int64)v12, v67);
              if ( !v75 )
              {
                v7 = a3;
LABEL_39:
                MiDereferenceCombineBlock(v7, (_QWORD *)v29);
LABEL_40:
                LODWORD(v14) = v105;
                goto LABEL_138;
              }
              ++v122[1];
              if ( v67 == -1 )
              {
                v29 = 0LL;
                ++v115;
                v76 = 0;
              }
              else
              {
                *(_DWORD *)(v40 + 44) += 4096;
                v76 = 1;
              }
              v74[1] = (__int64)v75;
              v74[2] = v135[0];
              v135[0] = v74;
              goto LABEL_124;
            }
            v29 = *a3;
            v73 = *(_QWORD *)*a3;
            if ( *(__int64 **)(*a3 + 8) != a3 || *(_QWORD *)(v73 + 8) != v29 )
              __fastfail(3u);
            *a3 = v73;
            *(_QWORD *)(v73 + 8) = a3;
            *(_DWORD *)(v29 + 40) = v49;
            v67 = *(_QWORD *)(v40 + 8 * ((unsigned __int64)*(unsigned int *)(v40 + 44) >> 12) + 48);
          }
          v74 = v116;
          goto LABEL_97;
        }
        v77 = 0;
        v78 = MiReservePtes((__int64)&qword_1403278B0, 1uLL, v36);
        if ( !v78 )
          goto LABEL_55;
        v121[9] = v78;
        v121[8] = v34;
        if ( !(unsigned int)MiMapArbitraryPage(v112, v121, v37, 1) )
        {
          MiReleasePtes((__int64)&qword_1403278B0, v78, 1u);
LABEL_55:
          v7 = a3;
LABEL_44:
          MiDereferenceCombineBlock(v7, (_QWORD *)v29);
          LODWORD(v14) = v105;
          goto LABEL_137;
        }
        v79 = (unsigned __int8)v105;
        if ( (v39 & 0x18) != 0 )
          v79 = 1;
        v80 = -1LL;
        v105 = v79;
        if ( !v29 )
        {
          if ( !(unsigned int)MiPerformCombineScan(v126, (__int64)v121)
            || v132 != v111
            || (v40 = *(_QWORD *)(v127 + 8LL * (int)MiProtectionToCacheAttribute(v39))) == 0
            || *(_DWORD *)(v40 + 44) >= *(_DWORD *)(v40 + 40) )
          {
LABEL_122:
            MiReleaseArbitraryPage((__int64)v121);
            MiReleasePtes((__int64)&qword_1403278B0, v78, 1u);
            if ( !v77 )
              goto LABEL_55;
            v76 = v106;
            v8 = v107;
            v71 = (__int64 *)v112;
LABEL_124:
            if ( v76 != 1 )
            {
              v7 = a3;
              goto LABEL_40;
            }
            *(_QWORD *)(v29 + 24) = v111;
            v14 = 16 * (v111 & 0xF);
            v84 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)((char *)v71 + v14 + 104));
            v85 = 0;
            v86 = v84;
            v87 = (unsigned __int64 *)&v71[2 * (v111 & 0xF) + 12];
            v88 = *v87;
            if ( !*v87 )
              goto LABEL_135;
            v89 = *(_QWORD *)(v29 + 24);
            while ( 1 )
            {
              v90 = *(_QWORD *)(v88 + 24);
              if ( v89 > v90 || v89 >= v90 && *(_DWORD *)(v29 + 40) >= *(_DWORD *)(v88 + 40) )
              {
                v91 = *(_QWORD *)(v88 + 8);
                if ( !v91 )
                {
                  v85 = 1;
LABEL_135:
                  RtlAvlInsertNodeEx(v87, v88, v85, v29);
                  ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)((char *)v71 + v14 + 104), v86);
                  LODWORD(v14) = v105;
LABEL_136:
                  v7 = a3;
LABEL_137:
                  v8 = v107;
LABEL_138:
                  v13 = v130;
                  v12 = v120;
                  goto LABEL_18;
                }
              }
              else
              {
                v91 = *(_QWORD *)v88;
                if ( !*(_QWORD *)v88 )
                {
                  v85 = 0;
                  goto LABEL_135;
                }
              }
              v88 = v91;
            }
          }
          v82 = MiAllocateCombineProto(v112, v81, v39, 0);
          v29 = v82;
          if ( v82 )
          {
            v116[3] = v82;
          }
          else
          {
            v29 = *a3;
            v83 = *(_QWORD *)*a3;
            if ( *(__int64 **)(*a3 + 8) != a3 || *(_QWORD *)(v83 + 8) != v29 )
              __fastfail(3u);
            *a3 = v83;
            *(_QWORD *)(v83 + 8) = a3;
            *(_DWORD *)(v29 + 40) = v39;
            v80 = *(_QWORD *)(v40 + 8 * ((unsigned __int64)*(unsigned int *)(v40 + 44) >> 12) + 48);
          }
        }
        if ( (unsigned int)MiConvertStandbyToProto(v107, v112, (__int64)v121, v29, v34, (__int64)v119, v80) )
        {
          v77 = 1;
          ++v122[1];
          if ( v80 == -1 )
          {
            v29 = 0LL;
            ++v115;
          }
          else
          {
            *(_DWORD *)(v40 + 44) += 4096;
            v106 = 1;
          }
        }
        goto LABEL_122;
      }
      ++v110;
LABEL_141:
      v92 = (__int64 *)&v136;
      for ( i = 2; i <= 3; ++i )
      {
        v94 = *v92;
        if ( *v92 )
        {
          do
          {
            v95 = *(_QWORD *)(v94 + 16);
            if ( MiCrcStillIntact(v112, v107, v94, i) )
            {
              *(_QWORD *)(v94 + 16) = v13;
              v13 = (__int64 *)v94;
            }
            v94 = v95;
          }
          while ( v95 );
        }
        *v92 = 0LL;
        v92 += 4;
      }
      v12 = v120;
      v7 = a3;
      MiFlushTbList((__int64)v120, v26, v27, v28);
      v8 = v107;
      LOBYTE(v96) = v109;
      MiUnlockWorkingSetExclusive(v107, v96);
      v14 = v135[0];
      v10 = 0LL;
      if ( v135[0] )
      {
        do
        {
          v99 = *(_QWORD *)(v14 + 8);
          v100 = (unsigned __int8)MiLockPageInline(v99);
          *(_BYTE *)(v99 + 34) = *(_BYTE *)(v99 + 34) & 0xF8 | 6;
          MiDecrementShareCount(v99);
          _InterlockedAnd64((volatile signed __int64 *)(v99 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v100);
          v14 = *(_QWORD *)(v14 + 16);
          v10 = 0LL;
        }
        while ( v14 );
        v12 = v120;
      }
      if ( v13 )
      {
        v17 = v129;
        v135[0] = 0LL;
        continue;
      }
      KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, 0LL, v97, v98);
      v17 = v129;
    }
    break;
  }
LABEL_156:
  if ( v114 == 1 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)v133, 1);
    MiAttachThreadDone(v17 + 1280);
  }
  if ( v12 != v134 )
    ExFreePoolWithTag(v12, 0);
  result = v122;
  *v122 += v115;
  return result;
}
