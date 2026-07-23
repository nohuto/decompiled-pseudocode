/*
 * XREFs of MiStealPage @ 0x140105C04
 * Callers:
 *     MiClaimPhysicalRun @ 0x14010415C (MiClaimPhysicalRun.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400169DC (MI_WSLE_LOG_ACCESS.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiPageToNode @ 0x14001B5D4 (MiPageToNode.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiClearPfnImageVerified @ 0x14001D838 (MiClearPfnImageVerified.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x14001D8E0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiFinalizePageAttribute @ 0x1400232DC (MiFinalizePageAttribute.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     MiGetPteFromCopyList @ 0x140034700 (MiGetPteFromCopyList.c)
 *     MiGetPageChain @ 0x14003D000 (MiGetPageChain.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MiLocateWsle @ 0x1400466D0 (MiLocateWsle.c)
 *     MiGetSharedWorkingSetList @ 0x140046BF0 (MiGetSharedWorkingSetList.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiIsPfnFileOnly @ 0x14004E500 (MiIsPfnFileOnly.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     PsIsSystemProcess @ 0x140071EA8 (PsIsSystemProcess.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x140096C30 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiLockNestedPageAtDpcInline @ 0x14009DAE0 (MiLockNestedPageAtDpcInline.c)
 *     MiReplacePageTablePage @ 0x1400A3B30 (MiReplacePageTablePage.c)
 *     MiReplacePageOfProtoPool @ 0x1400A7F4C (MiReplacePageOfProtoPool.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiDetachFromOwningSession @ 0x1400B3404 (MiDetachFromOwningSession.c)
 *     MiRotatedToFrameBuffer @ 0x1400BBC90 (MiRotatedToFrameBuffer.c)
 *     MiGetSessionVm @ 0x1400BECF0 (MiGetSessionVm.c)
 *     KeAbPostReleaseEx @ 0x1400C455C (KeAbPostReleaseEx.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     MiFlushTbList @ 0x1400DE330 (MiFlushTbList.c)
 *     MiCopyPage @ 0x1400E1100 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x1400E15D0 (MiGetPagePrivilege.c)
 *     MiFreeWsleList @ 0x1400E1970 (MiFreeWsleList.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x1400E8250 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     ExReleaseFastMutexUnsafe @ 0x1400EE580 (ExReleaseFastMutexUnsafe.c)
 *     MiTbFlushType @ 0x1400FEB3C (MiTbFlushType.c)
 *     MiSessionWsMetaPage @ 0x140103DF0 (MiSessionWsMetaPage.c)
 *     MiPageInRange @ 0x140103ED0 (MiPageInRange.c)
 *     MiSystemWsMetaPage @ 0x140103FD0 (MiSystemWsMetaPage.c)
 *     MiCopyPfnEntry @ 0x1401058C0 (MiCopyPfnEntry.c)
 *     MiSmallVaStillMapsFrame @ 0x1401077A0 (MiSmallVaStillMapsFrame.c)
 *     KeFlushSingleTb @ 0x1401083A8 (KeFlushSingleTb.c)
 *     MiVaIsPageFileHash @ 0x1401086A4 (MiVaIsPageFileHash.c)
 *     MiGetTopLevelPfn @ 0x1401086F0 (MiGetTopLevelPfn.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x140108DC4 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiAttachThreadDone @ 0x140108E2C (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x140108EA0 (MiPrepareAttachThread.c)
 *     MiAttachToOwningSession @ 0x14010A1DC (MiAttachToOwningSession.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140135B38 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeSwapDirectoryTableBase @ 0x1401D2108 (KeSwapDirectoryTableBase.c)
 *     MiReleasePushLockUnordered @ 0x1401E6684 (MiReleasePushLockUnordered.c)
 *     MiTryAcquirePushLockUnordered @ 0x1401E66D4 (MiTryAcquirePushLockUnordered.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiSetOriginalPtePfnFromFreeList @ 0x1401F2DE4 (MiSetOriginalPtePfnFromFreeList.c)
 *     MiClusterVadActive @ 0x1401F5F24 (MiClusterVadActive.c)
 */

__int64 __fastcall MiStealPage(__int64 a1, unsigned __int8 a2, int a3, __int64 a4, int a5, _QWORD *a6)
{
  unsigned __int8 *v6; // rbp
  __int64 v7; // r9
  unsigned int v10; // esi
  unsigned __int64 v11; // r14
  unsigned __int64 v12; // r15
  __int64 v13; // r8
  __int64 v14; // r8
  unsigned __int64 v15; // r9
  int *v16; // r10
  unsigned __int64 v17; // r11
  __int64 result; // rax
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rdx
  unsigned __int64 SessionVm; // r13
  __int64 v22; // rdx
  unsigned __int64 v23; // rcx
  __int64 v24; // rax
  struct _KTHREAD *v25; // rax
  LONG *v26; // rbx
  KIRQL v27; // al
  __int64 v28; // rdx
  unsigned __int64 v29; // rcx
  int v30; // eax
  int v31; // esi
  __int64 IsPageFileHash; // rax
  unsigned __int64 v33; // rdx
  __int64 v34; // rcx
  struct _KTHREAD *v35; // rdx
  int v36; // ecx
  char *v37; // r15
  unsigned int v38; // r13d
  char *AnyMultiplexedVm; // rax
  LONG *v40; // rbx
  KIRQL v41; // al
  int v42; // eax
  int v43; // esi
  unsigned __int64 Wsle; // rbx
  ULONG_PTR *SharedWorkingSetList; // rax
  __int64 v46; // rcx
  unsigned __int64 v47; // rbx
  int v48; // eax
  int v49; // esi
  __int64 TopLevelPfn; // rax
  struct _KPROCESS *v51; // r9
  int v52; // eax
  volatile signed __int64 **v53; // rcx
  struct _KTHREAD *CurrentThread; // rax
  LONG *SharedVm; // rbx
  unsigned __int64 Address; // rax
  unsigned __int64 v57; // rbx
  __int64 v58; // rax
  __int64 v59; // rdx
  __int64 v60; // rax
  unsigned int v61; // ecx
  _QWORD *v62; // rdx
  int v63; // r8d
  unsigned int v64; // edx
  int v65; // ebx
  int v66; // eax
  __int64 v67; // rbx
  int v68; // eax
  __int64 v69; // rcx
  unsigned int v70; // ebx
  __int64 Page; // rax
  __int64 v72; // r13
  int v73; // eax
  unsigned int v74; // r9d
  __int64 PageChain; // rax
  unsigned __int8 v76; // al
  bool v77; // zf
  unsigned __int8 v78; // r15
  unsigned __int64 v79; // rcx
  __int64 v80; // rax
  signed __int64 v81; // rbx
  unsigned __int64 v82; // rax
  __int64 v83; // r14
  unsigned __int8 v84; // al
  unsigned __int64 v85; // r10
  ULONG_PTR v86; // r15
  unsigned __int64 v87; // rax
  signed __int64 v88; // rax
  __int64 v89; // rdx
  __int64 v90; // r8
  unsigned __int64 *v91; // rcx
  unsigned __int64 v92; // rdx
  __int64 v93; // rdx
  __int64 v94; // rcx
  unsigned int v95; // r9d
  unsigned int v96; // eax
  __int64 v97; // r8
  int v98; // r9d
  char v99; // r15
  int v100; // eax
  __int64 v101; // rax
  __int64 v102; // rcx
  __int64 v103; // r9
  char v104; // r11
  __int64 v105; // rax
  unsigned __int64 *v106; // rcx
  __int64 v107; // rdx
  __int64 v108; // rcx
  __int64 v109; // r9
  __int64 v110; // rax
  struct _KEVENT *v111; // rax
  unsigned __int64 v112; // r9
  char v113; // r15
  __int64 v114; // r15
  __int64 *PteFromCopyList; // rax
  __int64 v116; // rdx
  _QWORD *v117; // r9
  __int64 v118; // rcx
  int v119; // r15d
  __int64 v120; // rax
  __int64 v121; // rcx
  __int64 v122; // rax
  __int64 v123; // rcx
  LONG *v124; // r15
  __int64 v125; // rax
  __int64 v126; // rax
  __int64 v127; // rdx
  __int64 v128; // rcx
  __int64 v129; // r9
  __int64 v130; // rcx
  __int64 v131; // r10
  __int64 v132; // rcx
  int v133; // r11d
  __int64 v134; // r10
  __int64 v135; // rax
  unsigned int v136; // r15d
  unsigned __int64 v137; // rbx
  unsigned __int64 v138; // rbx
  unsigned __int8 v139; // al
  int v140; // r14d
  unsigned int v141; // eax
  __int64 v142; // rbx
  __int64 v143; // rax
  __int64 v144; // r10
  unsigned __int64 *v145; // rcx
  __int64 v146; // rcx
  unsigned __int64 *v147; // rcx
  __int64 v148; // rcx
  unsigned __int8 v149; // bl
  unsigned int v150; // eax
  unsigned __int8 v151; // dl
  char v152; // [rsp+60h] [rbp+0h] BYREF

  v6 = (unsigned __int8 *)((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL);
  *((_QWORD *)v6 + 11) = a4;
  v7 = *(_QWORD *)(a1 + 8);
  *((_QWORD *)v6 + 25) = 0LL;
  *((_QWORD *)v6 + 26) = 0LL;
  *((_QWORD *)v6 + 28) = 0LL;
  *((_QWORD *)v6 + 29) = 0LL;
  v10 = 0;
  *((_DWORD *)v6 + 1) = a3;
  v7 |= 0x8000000000000000uLL;
  *((_QWORD *)v6 + 24) = 0LL;
  v11 = 0LL;
  *((_QWORD *)v6 + 3) = v7;
  *((_QWORD *)v6 + 23) = a6;
  *((_QWORD *)v6 + 27) = 0LL;
  *((_DWORD *)v6 + 3) = 0;
  *((_QWORD *)v6 + 5) = 0LL;
  *((_QWORD *)v6 + 14) = 0LL;
  *((_QWORD *)v6 + 4) = 0LL;
  v6[3] = 17;
  v6[1] = 17;
  *((_DWORD *)v6 + 36) = 0;
  *((_QWORD *)v6 + 20) = -1LL;
  *((_QWORD *)v6 + 19) = 0LL;
  *((_QWORD *)v6 + 17) = 0LL;
  v12 = v7 << 25 >> 16;
  *((_QWORD *)v6 + 6) = v12;
  *((_QWORD *)v6 + 9) = -1LL;
  *((_QWORD *)v6 + 2) = (a1 + 0x58000000000LL) / 48;
  if ( a6 )
    *a6 = -1LL;
  v13 = *(_QWORD *)(a1 + 40);
  *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x170) = 1;
  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x178) = 20LL;
  *(_WORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x174) = 0;
  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x180) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x188) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = 0LL;
  v16 = MiPartitionIdToPointer((HIDWORD(v13) >> 8) & 0x3FF);
  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v16;
  if ( v12 <= 0x7FFFFFFEFFFFLL )
    goto LABEL_130;
  v14 &= 0xFFFFFFFFFuLL;
  if ( v14 == v17 )
  {
    if ( !*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) + 16LL) )
      return 0LL;
    v10 = 8;
LABEL_130:
    TopLevelPfn = MiGetTopLevelPfn(a1, 0LL, v14, v15);
    if ( (*(_QWORD *)(TopLevelPfn + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
    {
      if ( TopLevelPfn != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    v51 = *(struct _KPROCESS **)TopLevelPfn;
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = *(_QWORD *)TopLevelPfn;
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = (char *)v51 + 1280;
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
    {
      if ( PsIsSystemProcess(v51) )
        return 0LL;
      v51 = *(struct _KPROCESS **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    }
    if ( v51 == KeGetCurrentThread()->ApcState.Process )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    else
    {
      if ( !(unsigned int)MiTryToAcquireExpansionLockAtDpc(v6 + 192) )
        return 0LL;
      v10 |= 0x80000u;
      v52 = MiPrepareAttachThread(
              *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40),
              *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v53 = (volatile signed __int64 **)(v6 + 192);
      if ( !v52 )
      {
        KxReleaseQueuedSpinLock(v53);
        MiLockPageAtDpcInline(a1);
        return 0LL;
      }
      KxReleaseQueuedSpinLock(v53);
      v51 = *(struct _KPROCESS **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
    }
    __writecr8(a2);
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 0;
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 0LL;
    if ( (v10 & 0x80000) != 0 )
      KiStackAttachProcess(v51, 1, (__int64)(v6 + 320));
    CurrentThread = KeGetCurrentThread();
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = CurrentThread;
    --CurrentThread->SpecialApcDisable;
    SessionVm = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
    SharedVm = MiGetSharedVm(SessionVm);
    *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 3) = ExAcquireSpinLockExclusive(SharedVm);
    SharedVm[1] = 0;
    if ( (v10 & 8) != 0 )
    {
      if ( (v10 & 1) != 0 )
      {
        v58 = *(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) + 1032LL);
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = v58;
        if ( v58 )
        {
          if ( !(unsigned __int8)ExTryAcquireAutoExpandPushLockExclusive(v58 + 16, 0LL) )
          {
            *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
            goto LABEL_158;
          }
        }
      }
      v57 = 0LL;
    }
    else
    {
      Address = MiLocateAddress(v12);
      v57 = Address;
      if ( !Address )
        goto LABEL_158;
      v20 = (unsigned int)(1 << (*(_BYTE *)(Address + 48) & 7));
      if ( (v20 & 0x15) == 0 )
      {
        if ( (*(_DWORD *)(Address + 48) & 7) != 6 )
          goto LABEL_158;
        v10 |= 0x10000u;
      }
    }
    if ( (unsigned int)MiSmallVaStillMapsFrame(
                         v12,
                         *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10))
      && (unsigned int)MiIsPfnFileOnly(a1) != 1
      && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
      && ((*(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4) & 0x800000) == 0
       || !v57
       || (*(_DWORD *)(v57 + 48) & 0x108000) != 0x108000
       || (unsigned int)MiClusterVadActive(v57, a1, v6 + 160) != 1)
      && ((v10 & 0x10000) == 0
       || !MiRotatedToFrameBuffer(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18))) )
    {
      goto LABEL_114;
    }
LABEL_158:
    MiFlushTbList((__int64)(v6 + 368), (_KPROCESS *)v20, v14, v15);
    LOBYTE(v59) = *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 3);
    MiUnlockWorkingSetExclusive(SessionVm, v59);
    v60 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68);
    if ( v60 )
      ExReleaseAutoExpandPushLockExclusive((_DWORD *)(v60 + 16), 0LL);
    goto LABEL_160;
  }
  v19 = 0xFFFFF6FB40000000uLL;
  v20 = 0xFFFFF6FB5FFFFFF8uLL;
  v14 = 0LL;
  do
  {
    if ( v15 >= v19 && v15 <= v20 )
    {
      if ( !(_DWORD)v14 )
        v10 = 1;
      v10 |= 8u;
      goto LABEL_130;
    }
    v19 = ((v19 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v20 = ((v20 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    v14 = (unsigned int)(v14 + 1);
  }
  while ( (unsigned int)v14 < 3 );
  if ( v12 < qword_140327F60[0] || v12 >= qword_140327F60[0] + 0x100000000000LL )
  {
    v22 = 0x8000000000LL;
    if ( v12 >= qword_140326950 && v12 < qword_140326950 + 0x8000000000LL
      || v12 >= 0xFFFFF68000000000uLL
      && v12 <= 0xFFFFF6FFFFFFFFFFuLL
      && (v23 = (__int64)((v12 << 25) - *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88)) >> 16,
          v23 >= qword_140326950)
      && v23 < qword_140326950 + 0x8000000000LL )
    {
      LOBYTE(v22) = a2;
      v24 = MiAttachToOwningSession(a1, v22, v6 + 320);
      *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = v24;
      if ( !v24 )
        return 0LL;
      SessionVm = MiGetSessionVm();
      *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = SessionVm;
      v25 = KeGetCurrentThread();
      *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = v25;
      --v25->SpecialApcDisable;
      v26 = MiGetSharedVm(SessionVm);
      v27 = ExAcquireSpinLockExclusive(v26);
      v26[1] = 0;
      v10 = 1024;
      *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = v27;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_140326D78);
      if ( (unsigned int)MiSmallVaStillMapsFrame(v12, -1LL) )
      {
        if ( v12 >= qword_140326950 && v12 < qword_140326950 + 0x8000000000LL
          || v12 >= 0xFFFFF68000000000uLL
          && v12 <= 0xFFFFF6FFFFFFFFFFuLL
          && (v29 = (__int64)((v12 << 25) - *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88)) >> 16,
              v29 >= qword_140326950)
          && v29 < qword_140326950 + 0x8000000000LL )
        {
          if ( (unsigned int)MiSmallVaStillMapsFrame(
                               v12,
                               *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10)) == 1 )
          {
            *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x178) = 20LL;
            *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x170) = 2;
            v10 = 3072;
            *(_WORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x174) = 0;
            *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x180) = 0LL;
            *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x188) = 0LL;
          }
        }
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
        if ( (v10 & 0x800) != 0
          && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
          && (unsigned int)MiIsPfnFileOnly(a1) != 1 )
        {
          v30 = MiSessionWsMetaPage(a1);
          if ( v30 )
          {
            v31 = v10 | 0x108;
            if ( v30 == 2 )
            {
              v10 = v31 | 4;
              *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2]
                                                                                    + 7952;
            }
            else
            {
              v10 = v31 | 2;
            }
          }
          *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
          *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
          *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 1;
          goto LABEL_114;
        }
      }
      else
      {
        ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
      }
      LOBYTE(v28) = *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
      MiUnlockWorkingSetExclusive(SessionVm, v28);
      KiLeaveGuardedRegionUnsafe(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50));
      MiDetachFromOwningSession(
        *(void **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78),
        (__int64)(v6 + 320));
      MiLockPageInline(a1);
      return 2 * (unsigned int)((*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) == 0);
    }
    IsPageFileHash = MiVaIsPageFileHash(v16, v12);
    v33 = qword_140326C70;
    v34 = IsPageFileHash;
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) = IsPageFileHash;
    if ( v33 && v12 >= v33 )
    {
      if ( v12 >= v33 + (qword_140326C50 << 21) )
      {
        v34 = IsPageFileHash;
      }
      else
      {
        if ( (*(_BYTE *)(48 * ((*(_QWORD *)(((v12 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                       - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
        {
          v10 = 512;
          goto LABEL_67;
        }
        v34 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70);
      }
    }
    if ( v12 < qword_140327F70 || v12 >= qword_140327F70 + 0xF8000000000LL )
    {
      if ( v34 )
      {
        v10 = 0x20000;
      }
      else if ( v12 >= qword_140328030 && v12 < qword_140328030 + 0x8000000000LL
             || PsNtosImageBase
             && (v12 >= (unsigned __int64)PsNtosImageBase && v12 < PsNtosImageEnd
              || v12 >= (unsigned __int64)PsHalImageBase && v12 < PsHalImageEnd) )
      {
        v10 = 64;
      }
      else if ( (unsigned int)MiSystemWsMetaPage(a1, (_QWORD *)v6 + 19) )
      {
        v10 = 256;
      }
    }
    else
    {
      v10 = 16;
    }
LABEL_67:
    *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v10 >> 8;
    if ( (((unsigned __int8)v10 | (unsigned __int8)((v10 | ((v10 | ((v10 | (v10 >> 8)) >> 1)) >> 2)) >> 2)) & 0x10) == 0 )
    {
      v47 = qword_140327FD0;
      v48 = MiPageInRange(
              a1,
              (((unsigned __int64)qword_140327FD0 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              (((unsigned __int64)qword_140326D38 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL,
              0);
      if ( !v48 )
        return 0LL;
      v49 = v10 | 8;
      if ( v48 == (_DWORD)v15 + 2 )
      {
        v10 = v49 | 4;
      }
      else
      {
        v10 = (v15 + 2) | v49;
        if ( v12 >= v47 && v12 <= v47 + 276840816 )
          v10 |= 0x1000u;
      }
      goto LABEL_130;
    }
    if ( (!*(_QWORD *)a1 || (*(_BYTE *)(a1 + 35) & 8) != 0) && (v10 & 0x20100) == 0 )
      return 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    v35 = KeGetCurrentThread();
    v36 = 1;
    v37 = *(char **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x98);
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
    *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 1;
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = v35;
    *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = 0;
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 0LL;
    v38 = ((v10 | (v10 >> 5)) >> 4) & 1;
    if ( v38 )
    {
      v36 = 2;
    }
    else if ( (((unsigned __int8)v10 | (unsigned __int8)(v10 >> 11)) & 0x40) == 0 )
    {
      AnyMultiplexedVm = v37;
LABEL_76:
      *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) = AnyMultiplexedVm;
      --v35->SpecialApcDisable;
      v40 = MiGetSharedVm((__int64)AnyMultiplexedVm);
      v41 = ExAcquireSpinLockExclusive(v40);
      v40[1] = 0;
      *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 1) = v41;
      ExAcquireSpinLockSharedAtDpcLevel(&dword_140326D78);
      if ( (unsigned int)MiSmallVaStillMapsFrame(
                           *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
                           -1LL) )
      {
        if ( v38 )
        {
          v12 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
          if ( (v12 < qword_140327F70 || v12 >= qword_140327F70 + 0xF8000000000LL)
            && (!qword_140326C70
             || v12 < qword_140326C70
             || v12 >= qword_140326C70 + (qword_140326C50 << 21)
             || (*(_BYTE *)(48 * ((*(_QWORD *)(((v12 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                          - 0x57FFFFFFFDALL) & 0xF0) != 0x70) )
          {
            goto LABEL_84;
          }
LABEL_104:
          if ( !(unsigned int)MiSmallVaStillMapsFrame(
                                v12,
                                *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10))
            || (unsigned int)MiIsPfnFileOnly(a1) == 1 )
          {
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
            if ( !v38 )
              goto LABEL_85;
          }
          else
          {
            ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
            if ( (*(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) & 1) != 0 )
            {
              SessionVm = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
              v43 = v10 | 8;
              v15 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
              v17 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              if ( *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4) == 2 )
                v10 = v43 | 4;
              else
                v10 = v43 | 2;
              goto LABEL_115;
            }
            if ( (v10 & 0x20000) != 0 || (*(_BYTE *)(a1 + 35) & 8) == 0 && *(_QWORD *)a1 )
            {
              SessionVm = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
LABEL_114:
              v15 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
              v17 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
              goto LABEL_115;
            }
          }
LABEL_86:
          LOBYTE(v20) = *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
          MiUnlockWorkingSetExclusive(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20), v20);
          KiLeaveGuardedRegionUnsafe(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50));
          MiLockPageInline(a1);
          result = *(unsigned int *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
          if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
            return 0LL;
          return result;
        }
        if ( (v10 & 0x20000) != 0 )
        {
          v12 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
          if ( MiVaIsPageFileHash(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38), v12) )
            goto LABEL_104;
        }
        else
        {
          if ( (v10 & 0x40) != 0 )
          {
            v12 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
            if ( (v12 < qword_140328030 || v12 >= qword_140328030 + 0x8000000000LL)
              && (!PsNtosImageBase
               || (v12 < (unsigned __int64)PsNtosImageBase || v12 >= PsNtosImageEnd)
               && (v12 < (unsigned __int64)PsHalImageBase || v12 >= PsHalImageEnd)) )
            {
              goto LABEL_84;
            }
            goto LABEL_104;
          }
          v42 = MiSystemWsMetaPage(a1, (_QWORD *)v6 + 21);
          *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v42;
          if ( v42 && *(char **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA8) == v37 )
          {
            v12 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
            goto LABEL_104;
          }
        }
      }
LABEL_84:
      ExReleaseSpinLockSharedFromDpcLevel(&dword_140326D78);
LABEL_85:
      *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 2;
      goto LABEL_86;
    }
    AnyMultiplexedVm = MiGetAnyMultiplexedVm(v36);
    goto LABEL_76;
  }
  if ( !*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) + 16LL) )
    return 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(a2);
  v10 = 32;
  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50) = KeGetCurrentThread();
  SessionVm = 0LL;
  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40) = 0LL;
  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x68) = 0LL;
  *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 1;
  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78) = 0LL;
LABEL_115:
  if ( !*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) + 16LL) )
  {
    if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0
      && (v10 & 0x20008) == 0
      && (MI_READ_PTE_LOCK_FREE(v15) & 0x42) == 0
      && (*(_BYTE *)(a1 + 35) & 8) == 0 )
    {
      Wsle = MiLocateWsle(v12, SessionVm, *(_QWORD *)a1);
      SharedWorkingSetList = MiGetSharedWorkingSetList(SessionVm);
      if ( Wsle >= SharedWorkingSetList[1] )
      {
        if ( dword_1403271C8 )
          MI_WSLE_LOG_ACCESS(
            v46,
            (_DWORD *)(SharedWorkingSetList[10] + Wsle * *((unsigned int *)SharedWorkingSetList + 8)),
            *(_BYTE **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x238) = Wsle;
        *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x230) = 1;
        if ( !MiFreeWsleList(SessionVm, (unsigned int *)v6 + 140, 0) )
          *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 2;
      }
    }
    goto LABEL_211;
  }
  v63 = *(unsigned __int8 *)(a1 + 34) >> 6;
  *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v63;
  if ( a5 == -1 )
  {
    v67 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v68 = MiPageToNode(v17, 0);
    v64 = 0;
    v63 = *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
    v66 = v68 << byte_140326A09;
    v65 = dword_140326A38 & *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) | ((_DWORD)v67 << byte_140326A18);
  }
  else
  {
    v64 = 16;
    v65 = a5 & ~dword_140326A38;
    v66 = dword_140326A38 & v17;
  }
  v69 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xA0);
  v70 = v66 | v65;
  if ( v69 == -1 )
  {
    Page = MiGetPage(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38), v70, v64);
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = Page;
    if ( Page == -1 )
      goto LABEL_211;
    v72 = 48 * Page - 0x58000000000LL;
  }
  else
  {
    v73 = ((*(_QWORD *)(a1 + 40) >> 58) & 0x3F) + 1;
    if ( v63 == 2 )
    {
      v74 = 28;
    }
    else
    {
      v74 = 4;
      if ( !v63 )
        v74 = 12;
    }
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB0) = 1LL;
    PageChain = MiGetPageChain(
                  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
                  SessionVm,
                  v73,
                  v74,
                  v64,
                  v69,
                  (unsigned __int64 *)v6 + 22);
    v72 = PageChain;
    if ( !PageChain )
    {
      *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = -1LL;
      goto LABEL_211;
    }
    v20 = (unsigned __int128)((PageChain + 0x58000000000LL) * (__int128)0x2AAAAAAAAAAAAAABLL) >> 64;
    *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) = (PageChain + 0x58000000000LL) / 48;
  }
  if ( v72 == a1 )
  {
LABEL_193:
    *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = 1;
    goto LABEL_211;
  }
  v76 = MiLockPageInline(a1);
  v77 = (MiFlags & 0x20000) == 0;
  v78 = v76;
  *v6 = v76;
  if ( !v77 && (unsigned int)MiGetPagePrivilege(a1, 1, 0LL) )
    v10 |= 0x40000u;
  v14 = (v10 >> 5) & 1;
  *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v14;
  if ( ((v10 >> 5) & 1) != 0 )
  {
    v79 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
    if ( v79 < qword_140327F60[0] )
      goto LABEL_206;
    v20 = 0x100000000000LL;
    if ( v79 >= qword_140327F60[0] + 0x100000000000LL )
      goto LABEL_206;
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
      goto LABEL_206;
    v20 = 0x8000000000000000uLL;
    if ( (*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) != *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                    + 0x18) )
      goto LABEL_206;
    if ( !(unsigned int)MiSmallVaStillMapsFrame(
                          v79,
                          *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10)) )
      goto LABEL_206;
    if ( (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
      goto LABEL_206;
    v80 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
    v81 = v80;
    if ( (v80 & 0x200) != 0 || (v80 & 0x20) == 0 )
      goto LABEL_206;
    v14 = *(unsigned int *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
  }
  else
  {
    v15 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
    v81 = 0LL;
  }
  if ( *(_WORD *)(a1 + 32) != 1
    || ((*(_BYTE *)(a1 + 35) & 8) != 0 || !*(_QWORD *)a1) && (v10 & 0x20026) == 0
    || (*(_BYTE *)(a1 + 34) & 7) != 6
    || *(int **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) != MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF) )
  {
LABEL_206:
    v82 = v78;
    goto LABEL_207;
  }
  if ( !(_DWORD)v14 )
    v81 = MI_READ_PTE_LOCK_FREE(v15);
  v15 = *(unsigned int *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
  if ( (v10 & 0x100) != 0 || (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) <= v85 || (_DWORD)v15 != (_DWORD)v85 )
  {
LABEL_237:
    if ( (v10 & 0x20000) == 0 )
    {
      if ( (v10 & 0x20) != 0 )
      {
        v11 = v81 & 0xFFFFFFFFFFFFFFDFuLL;
        v88 = _InterlockedCompareExchange64(
                *(volatile signed __int64 **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                v81 & 0xFFFFFFFFFFFFFFDFuLL,
                v81);
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = v88;
        if ( v81 != v88 )
          goto LABEL_206;
        v89 = 0LL;
        *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8) = 2;
        v90 = 2LL;
        goto LABEL_254;
      }
      if ( ((v10 & 8) == 0 || (v10 & 0x1000) != 0) && ((v81 & 0x42) != 0 || (v10 & 0x40000) != 0) )
      {
        v91 = *(unsigned __int64 **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
        if ( (v10 & 0x1000) != 0 )
        {
          v92 = v81 & 0xFFFFFFFFFFFFFFBDuLL;
        }
        else
        {
          v10 |= 0x80u;
          v92 = v81 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
        }
        *v91 = v92;
        if ( (unsigned int)MiPteInShadowRange(v91, v92) )
          MiWritePteShadow(v94, v93);
        if ( *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
          v96 = MiTbFlushType(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
        else
          v96 = 0;
        v90 = v95;
        v89 = v96;
LABEL_254:
        KeFlushSingleTb(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30), v89, v90);
      }
    }
    MiLockNestedPageAtDpcInline(v72);
    MiFinalizePageAttribute(v72, *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4), 1u);
    if ( (v10 & 0x20000) != 0 )
    {
      KeAcquireInStackQueuedSpinLock(
        (PKSPIN_LOCK)(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) + 232LL),
        (PKLOCK_QUEUE_HANDLE)v6 + 9);
      if ( *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x70) != MiVaIsPageFileHash(
                                                                                      *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                + 0x38),
                                                                                      *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                                + 0x30))
        || !(unsigned int)MiSmallVaStillMapsFrame(
                            *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
                            *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10)) )
      {
        KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)v6 + 9);
        _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v82 = v78;
        goto LABEL_207;
      }
    }
    MiCopyPfnEntry(v72, (__int128 *)a1);
    v97 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v97 )
      *(_QWORD *)(v72 + 40) ^= (*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48) ^ *(_QWORD *)(v72 + 40)) & 0xFFFFFFFFFLL;
    _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (v10 & 0x20020) == 0 )
    {
      if ( (v10 & 0x2000) != 0 )
      {
LABEL_271:
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v78);
        v99 = 17;
        *v6 = 17;
        goto LABEL_274;
      }
      v98 = *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
      if ( ((v10 >> 3) & 1) == 0 && !v98 || (v10 & 0xA) == 0xA || (v10 & 0x1000) != 0 )
      {
        *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
        goto LABEL_271;
      }
      if ( ((v10 >> 3) & 1) != 0 && (v10 & 2) == 0 && !v98 || (v10 & 0x104) == 0x104 )
        goto LABEL_271;
    }
    v99 = *v6;
LABEL_274:
    v100 = (v10 >> 13) & 1;
    *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v100;
    if ( v100 )
    {
      v101 = MiLockProtoPoolPage(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30), v6 + 2);
      *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = v101;
      if ( !v101 )
      {
LABEL_276:
        MiSetOriginalPtePfnFromFreeList(v72 + 16);
        goto LABEL_208;
      }
      if ( *(_WORD *)(v101 + 32) > 2u )
      {
        v102 = v101;
LABEL_279:
        MiUnlockProtoPoolPage(v102, *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 2));
        goto LABEL_276;
      }
      v81 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18));
      if ( (v81 & 0x42) == 0 )
      {
        v100 = *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
        v97 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
LABEL_291:
        if ( !v100
          && (v10 & 0x104) != 0x104
          && ((v10 & 8) == 0
           || ((unsigned __int8)v10 & (unsigned __int8)v104) != 0
           || *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8)) )
        {
          if ( v99 == 17 )
          {
            v113 = 0;
          }
          else
          {
            v113 = 4;
            MiLockNestedPageAtDpcInline(v72);
          }
          if ( (v10 & 0x40000) != 0 )
            v113 |= 2u;
          MiCopyPage(
            *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48),
            *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10),
            *(int **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58),
            v113);
          if ( (v113 & 4) != 0 )
            _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v10 & 0x20) == 0 )
          {
            v14 = 1LL;
            if ( *v6 != 17 )
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
LABEL_333:
            v132 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
            v133 = 2;
            v134 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
            if ( (v10 & 2) != 0
              && v132
              && *(_QWORD *)(v132 + 864) == *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10) )
            {
              *(_QWORD *)(v132 + 864) = v134;
            }
            v135 = (v134 & 0xFFFFFFFFFLL) << 12;
            v20 = 0xFFFF000000000FFFuLL;
            v136 = v10 >> 5;
            v137 = v135 | v81 & 0xFFFF000000000FFFuLL;
            if ( (v10 & 0x20) != 0 )
            {
              v138 = v135 | v11 & 0xFFFF000000000FFFuLL | 0x20;
              MiLockNestedPageAtDpcInline(v72);
              if ( v11 != _InterlockedCompareExchange64(
                            *(volatile signed __int64 **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18),
                            v138,
                            v11) )
              {
                MiSetOriginalPtePfnFromFreeList(v72 + 16);
                *(_BYTE *)(v72 + 34) = *(_BYTE *)(v72 + 34) & 0xF8 | 5;
                _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                v82 = *v6;
                goto LABEL_207;
              }
              _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
            }
            else if ( (v10 & 0x8000) != 0 )
            {
              if ( (v10 & 0x100000) != 0 )
              {
                v15 = *(_QWORD *)(v132 + 1536);
                if ( !v15 )
                  goto LABEL_351;
                v143 = MI_GET_PAGE_FRAME_FROM_PTE(((v15 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
                if ( v143 != v144 )
                  v15 = 0LL;
                if ( !v15 )
                {
LABEL_351:
                  *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC) = v133;
                  v83 = a1;
                  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = a1;
                  goto LABEL_209;
                }
              }
            }
            else
            {
              if ( (v10 & 0x80u) == 0 )
              {
                v140 = *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
                if ( !v140 && (((unsigned __int8)v10 | (unsigned __int8)v136) & 0x10) != 0 )
                  MiLockNestedPageAtDpcInline(v72);
                v147 = *(unsigned __int64 **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
                *v147 = v137;
                if ( (unsigned int)MiPteInShadowRange(v147, v20) )
                  MiWritePteShadow(v148, v137);
                goto LABEL_343;
              }
              v145 = *(unsigned __int64 **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
              *v145 = v137;
              if ( (unsigned int)MiPteInShadowRange(v145, 0xFFFF000000000FFFuLL) )
                MiWritePteShadow(v146, v137);
            }
            v140 = *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
LABEL_343:
            if ( (v10 & 0xA0) != 0 )
            {
              v142 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
            }
            else
            {
              v141 = MiTbFlushType(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
              v142 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30);
              KeFlushSingleTb(v142, v141, *(unsigned int *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
            }
            if ( v140 )
            {
              _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockProtoPoolPage(
                *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38),
                *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 2));
              v149 = 17;
            }
            else
            {
              if ( (((unsigned __int8)v10 | (unsigned __int8)v136) & 0x10) != 0 && (v10 & 0x80u) == 0 )
              {
                if ( *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20) )
                  v150 = MiTbFlushType(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
                else
                  v150 = 0;
                KeFlushSingleTb(v142, v150, *(unsigned int *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8));
                _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              }
              v149 = *v6;
            }
            if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
            {
              v151 = 8;
              if ( v149 != 17 )
                v151 = 12;
              MiClearPfnImageVerified(a1, v151);
            }
            if ( (v10 & 0x20000) != 0 )
              KeReleaseInStackQueuedSpinLock((PKLOCK_QUEUE_HANDLE)v6 + 9);
            if ( v149 == 17 )
              v149 = MiLockPageInline(a1);
            *(_QWORD *)(a1 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
            *(_BYTE *)(a1 + 34) &= 0xC7u;
            *(_BYTE *)(a1 + 35) &= ~0x20u;
            *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
            *(_WORD *)(a1 + 32) = 0;
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            __writecr8(v149);
            goto LABEL_193;
          }
LABEL_332:
          v14 = 1LL;
          goto LABEL_333;
        }
        v114 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
        PteFromCopyList = MiGetPteFromCopyList(
                            *(unsigned int **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58),
                            v114,
                            v97);
        v116 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
        v117 = PteFromCopyList;
        v118 = (__int64)(((_QWORD)PteFromCopyList << 25)
                       - *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x88)) >> 16;
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58) = PteFromCopyList;
        if ( *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4) )
        {
          v119 = MiReplacePageOfProtoPool(
                   *(char **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30),
                   v116,
                   v114,
                   (char *)v118);
LABEL_322:
          v117 = *(_QWORD **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x58);
          goto LABEL_323;
        }
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF0) = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                                          + 0x30);
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xF8) = v118;
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x110) = ((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL)
                                                                               + 368;
        v120 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50);
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x118) = v120;
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x108) = v114;
        v119 = 1;
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x128) = 0LL;
        v121 = *(_QWORD *)(v120 + 184);
        v122 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x100) = v116;
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x130) = 0LL;
        *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x120) = v121;
        *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60) = 1;
        if ( v122 == v116 )
        {
          if ( (*(_BYTE *)(v121 + 1467) & 8) != 0
            || _interlockedbittestandset(
                 (volatile signed __int32 *)(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40)
                                           + 1740LL),
                 1u) )
          {
            v119 = 0;
LABEL_323:
            *v117 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v117, v116) )
              MiWritePteShadow(v128, 0LL);
            *(_QWORD *)(v129 + 8) = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v129 + 8, v127) )
              MiWritePteShadow(v130, 0LL);
            if ( !v119 )
            {
              if ( (v10 & 0x2000) == 0 )
                goto LABEL_276;
              v102 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
              goto LABEL_279;
            }
            *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4) = v131 & (v10 >> 13);
            if ( ((unsigned int)v131 & (v10 >> 13)) == 0 )
            {
              v139 = MiLockPageInline(a1);
              v14 = 1LL;
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v139);
              *v6 = 17;
              goto LABEL_333;
            }
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
            *(_QWORD *)(a1 + 24) = v131 | *(_QWORD *)(a1 + 24) & 0xC000000000000001uLL;
            MiLockNestedPageAtDpcInline(v72);
            goto LABEL_332;
          }
          v123 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x120);
          v10 |= 0x8000u;
          if ( *(_QWORD *)(v123 + 40) >> 12 != v116 )
          {
            *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x12C) = 1;
            v10 |= 0x100000u;
            *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x130) = *(_QWORD *)(v123 + 1536);
          }
          LOBYTE(v116) = *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 3);
          MiUnlockWorkingSetExclusive(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20), v116);
          KeSwapDirectoryTableBase(
            *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x120),
            *(unsigned int *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x12C),
            v6 + 240);
          v124 = MiGetSharedVm(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20));
          *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 3) = ExAcquireSpinLockExclusive(v124);
          v125 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x40);
          v124[1] = 0;
          _InterlockedAnd((volatile signed __int32 *)(v125 + 1740), 0xFFFFFFFD);
          v119 = *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x60);
        }
        else
        {
          v126 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80);
          if ( v126 )
          {
            if ( !(unsigned __int8)MiTryAcquirePushLockUnordered(*(_QWORD *)(v126 + 48)) )
            {
              *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) = 0LL;
              v119 = 0;
              goto LABEL_322;
            }
            v10 |= 0x4000u;
          }
          MiReplacePageTablePage((__int64)(v6 + 240));
        }
        if ( *(int *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x128) < 0 )
          v119 = 0;
        goto LABEL_322;
      }
      MiLockPageAtDpcInline(v103);
      v105 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
      if ( *(_WORD *)(v105 + 32) > 2u )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v105 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v105, *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 2));
        MiSetOriginalPtePfnFromFreeList(v72 + 16);
        goto LABEL_208;
      }
      v106 = *(unsigned __int64 **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x18);
      *v106 = v81 & 0xFFFFFFFFFFFFFFBDuLL;
      if ( (unsigned int)MiPteInShadowRange(v106, v81 & 0xFFFFFFFFFFFFFFBDuLL) )
        MiWritePteShadow(v108, v107);
      KeFlushSingleTb(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x30), 0LL, 1LL);
      v109 = MiCaptureDirtyBitToPfn(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38));
      v110 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38);
      _InterlockedAnd64((volatile signed __int64 *)(v110 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v109 )
      {
        v111 = (struct _KEVENT *)MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v110 + 40)) >> 8) & 0x3FF);
        MiReleasePageFileInfo(v111, v112, 1);
      }
      MiLockPageAtDpcInline(v72);
      MiCaptureDirtyBitToPfn(v72);
      _InterlockedAnd64((volatile signed __int64 *)(v72 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v100 = *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 4);
      v97 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x10);
    }
    else
    {
      *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 2) = 17;
      *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x38) = 0LL;
    }
    v104 = 2;
    goto LABEL_291;
  }
  if ( (v10 & 0x10) == 0 )
    goto LABEL_206;
  v86 = qword_1403AA520 + 8;
  v87 = KeAbPreAcquire(qword_1403AA520 + 8, 0LL, v85);
  if ( _interlockedbittestandreset((volatile signed __int32 *)v86, 0) )
  {
    if ( v87 )
      *(_BYTE *)(v87 + 26) |= 1u;
    v10 |= 0x2008u;
    v15 = *(unsigned int *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8);
    *(_QWORD *)(v86 + 8) = KeGetCurrentThread();
    v78 = *v6;
    goto LABEL_237;
  }
  if ( v87 )
    KeAbPostReleaseEx(v86, v87);
  v82 = *v6;
LABEL_207:
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v82);
LABEL_208:
  *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) = v72;
  v83 = v72;
LABEL_209:
  if ( v83 )
  {
    v84 = MiLockPageInline(v83);
    *(_BYTE *)(v83 + 34) = *(_BYTE *)(v83 + 34) & 0xF8 | 5;
    _InterlockedAnd64((volatile signed __int64 *)(v83 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v84);
  }
LABEL_211:
  SessionVm = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20);
  if ( !*(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 8) )
    goto LABEL_158;
  if ( (v10 & 0x400) != 0 )
  {
    LOBYTE(v20) = *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
    MiUnlockWorkingSetExclusive(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20), v20);
    if ( (v10 & 0x4000) != 0 )
      MiReleasePushLockUnordered(*(_QWORD *)(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x80) + 48LL));
    KiLeaveGuardedRegionUnsafe(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50));
    MiDetachFromOwningSession(*(void **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x78), (__int64)(v6 + 320));
    goto LABEL_161;
  }
  if ( SessionVm )
  {
    LOBYTE(v20) = *(_BYTE *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 1);
    MiUnlockWorkingSetExclusive(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x20), v20);
  }
  if ( (v10 & 0x2000) != 0 )
    ExReleaseFastMutexUnsafe((PFAST_MUTEX)(qword_1403AA520 + 8));
  if ( SessionVm )
LABEL_160:
    KiLeaveGuardedRegionUnsafe(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x50));
LABEL_161:
  if ( (v10 & 0x80000) != 0 )
  {
    KiUnstackDetachProcess((struct _KTHREAD *)(v6 + 320), 1);
    MiAttachThreadDone(SessionVm);
  }
  if ( *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28) )
    MiReleaseFreshPage(*(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x28));
  MiLockPageInline(a1);
  v61 = *(_DWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xC);
  if ( v61 == 1 )
  {
    v62 = *(_QWORD **)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0xB8);
    if ( v62 )
      *v62 = *(_QWORD *)(((unsigned __int64)&v152 & 0xFFFFFFFFFFFFFFE0uLL) + 0x48);
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 34) & 7) != 6 )
      v61 = 2;
    if ( v61 == 2 && (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
  }
  return v61;
}
