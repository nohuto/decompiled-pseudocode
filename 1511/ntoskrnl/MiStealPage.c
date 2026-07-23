/*
 * XREFs of MiStealPage @ 0x1400ABC50
 * Callers:
 *     MiClaimPhysicalRun @ 0x1400720B0 (MiClaimPhysicalRun.c)
 * Callees:
 *     KeFlushSingleTb @ 0x1400076D8 (KeFlushSingleTb.c)
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiPrepareAttachThread @ 0x1400095D0 (MiPrepareAttachThread.c)
 *     MiAttachThreadDone @ 0x140009620 (MiAttachThreadDone.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiRotatedToFrameBuffer @ 0x14001EE20 (MiRotatedToFrameBuffer.c)
 *     ExfTryToWakePushLock @ 0x140030AD8 (ExfTryToWakePushLock.c)
 *     KeAbPostReleaseEx @ 0x1400317E4 (KeAbPostReleaseEx.c)
 *     ExAcquireSpinLockSharedAtDpcLevel @ 0x140035AF0 (ExAcquireSpinLockSharedAtDpcLevel.c)
 *     ExReleaseFastMutexUnsafe @ 0x140037BF0 (ExReleaseFastMutexUnsafe.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiGetPteAddress @ 0x14004EAF0 (MiGetPteAddress.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiLocateWsle @ 0x140058C00 (MiLocateWsle.c)
 *     MiFlushTbList @ 0x14005D650 (MiFlushTbList.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MiFreeWsleList @ 0x14006C330 (MiFreeWsleList.c)
 *     MiCopyPage @ 0x1400701E0 (MiCopyPage.c)
 *     MiGetPagePrivilege @ 0x140070730 (MiGetPagePrivilege.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiPageToNode @ 0x140071380 (MiPageToNode.c)
 *     MiCopyPfnEntry @ 0x140071D80 (MiCopyPfnEntry.c)
 *     MiFinalizePageAttribute @ 0x140072854 (MiFinalizePageAttribute.c)
 *     ExReleaseSpinLockSharedFromDpcLevel @ 0x140077FB0 (ExReleaseSpinLockSharedFromDpcLevel.c)
 *     PsIsSystemProcess @ 0x140091DCC (PsIsSystemProcess.c)
 *     MiTbFlushType @ 0x1400A086C (MiTbFlushType.c)
 *     MiLockNestedPageAtDpcInline @ 0x1400A0F7C (MiLockNestedPageAtDpcInline.c)
 *     MiReplacePageOfProtoPool @ 0x1400A1EB0 (MiReplacePageOfProtoPool.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     KiStackAttachProcess @ 0x1400A6700 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400A6A00 (KiUnstackDetachProcess.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiClearPfnImageVerified @ 0x1400B5370 (MiClearPfnImageVerified.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_WSLE_LOG_ACCESS @ 0x1400B82C4 (MI_WSLE_LOG_ACCESS.c)
 *     MiSessionWsMetaPage @ 0x1400BE144 (MiSessionWsMetaPage.c)
 *     MiSystemWsMetaPage @ 0x1400C0118 (MiSystemWsMetaPage.c)
 *     MiPageInRange @ 0x1400C0208 (MiPageInRange.c)
 *     PsGetCurrentProcess @ 0x1400C7D90 (PsGetCurrentProcess.c)
 *     MiAttachToOwningSession @ 0x1400D55A4 (MiAttachToOwningSession.c)
 *     MiTryToAcquireExpansionLockAtDpc @ 0x1400D5674 (MiTryToAcquireExpansionLockAtDpc.c)
 *     MiGetTopLevelPfn @ 0x1400D56E0 (MiGetTopLevelPfn.c)
 *     MiReplacePageTablePage @ 0x1400D98A0 (MiReplacePageTablePage.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x1400DCA70 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiSmallVaStillMapsFrame @ 0x1400E05CC (MiSmallVaStillMapsFrame.c)
 *     KeSwapDirectoryTableBase @ 0x1400E2F88 (KeSwapDirectoryTableBase.c)
 *     MiVaIsPageFileHash @ 0x1400E7828 (MiVaIsPageFileHash.c)
 *     MiDetachFromOwningSession @ 0x1400F1224 (MiDetachFromOwningSession.c)
 *     MiGetPteFromCopyList @ 0x1400FE324 (MiGetPteFromCopyList.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x14012DB9C (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiStealPage(__int64 a1, unsigned __int8 a2, unsigned int *a3, int a4, ULONG_PTR *a5)
{
  __int64 v5; // r10
  unsigned __int8 v7; // si
  unsigned int v8; // edi
  unsigned __int64 v9; // r15
  __int64 v10; // r8
  __int64 v11; // r8
  unsigned __int64 v12; // r9
  volatile signed __int64 *v13; // r10
  __int64 v14; // r11
  ULONG_PTR v15; // rbx
  __int64 TopLevelPfn; // rax
  __int64 result; // rax
  unsigned __int64 v18; // rax
  unsigned __int64 v19; // rbx
  unsigned int v20; // esi
  ULONG_PTR v21; // rdx
  __int64 v22; // r8
  bool v23; // zf
  volatile signed __int64 *v24; // rsi
  PEX_SPIN_LOCK v25; // r15
  __int64 v26; // rsi
  unsigned __int64 Wsle; // rax
  unsigned __int64 v28; // rbx
  ULONG_PTR IsPageFileHash; // rax
  ULONG_PTR v30; // rcx
  struct _KTHREAD *v31; // rdx
  PEX_SPIN_LOCK v32; // rbx
  unsigned int v33; // esi
  volatile LONG *v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  int v37; // edi
  int v38; // eax
  int v39; // edi
  __int64 v40; // rax
  volatile LONG *v41; // rsi
  __int64 v42; // r8
  int v43; // eax
  int v44; // edi
  ULONG_PTR v45; // rdx
  __int64 CurrentProcess; // rax
  _KPROCESS *v47; // rcx
  __int64 v48; // rdx
  __int64 v49; // r8
  struct _KTHREAD *CurrentThread; // rsi
  unsigned __int64 Address; // rax
  __int64 v52; // r8
  struct _KTHREAD *v53; // rcx
  unsigned int v54; // ecx
  __int64 v55; // rax
  unsigned int v56; // edx
  unsigned int v57; // eax
  __int64 v58; // rbx
  __int64 Page; // rax
  __int64 v60; // rbx
  unsigned __int8 v61; // si
  unsigned __int64 v62; // rax
  __int64 v63; // rax
  signed __int64 v64; // rsi
  unsigned __int8 v65; // al
  volatile signed __int64 *v66; // rbx
  ULONG_PTR v67; // rax
  unsigned int v68; // edx
  unsigned int v69; // r8d
  volatile signed __int64 *v70; // rcx
  unsigned __int64 v71; // rbx
  unsigned int v72; // eax
  unsigned int v73; // ebx
  __int64 v74; // rdx
  __int64 v75; // r8
  __int64 v76; // rdx
  unsigned __int64 v77; // rax
  int v78; // eax
  int *v79; // rax
  __int64 v80; // r8
  int *v81; // rax
  volatile signed __int64 *v82; // rcx
  int *v83; // rbx
  __int64 v84; // rax
  __int64 v85; // rdx
  __int64 v86; // r8
  int *v87; // rax
  __int64 v88; // r9
  int v89; // eax
  unsigned int *PteFromCopyList; // rax
  __int64 v91; // rdx
  int v92; // eax
  _KPROCESS *Process; // rcx
  __int64 v94; // rax
  ULONG_PTR v95; // rax
  ULONG_PTR v96; // rcx
  unsigned int *v97; // rcx
  unsigned int *v98; // rcx
  unsigned __int8 v99; // al
  ULONG_PTR v100; // rcx
  __int64 v101; // rcx
  unsigned __int64 v102; // rsi
  unsigned __int64 v103; // rbx
  signed __int64 v104; // rax
  int v105; // r15d
  unsigned int v106; // eax
  ULONG_PTR v107; // rsi
  unsigned __int64 v108; // rcx
  __int64 PteAddress; // rax
  __int64 v110; // rax
  volatile signed __int64 *v111; // r15
  volatile signed __int64 *v112; // rcx
  volatile signed __int64 *v113; // rcx
  unsigned __int8 v114; // bl
  unsigned int v115; // eax
  __int64 v116; // rdx
  unsigned __int8 v118; // [rsp+20h] [rbp-E0h]
  KIRQL v119; // [rsp+21h] [rbp-DFh]
  unsigned __int8 v120[2]; // [rsp+22h] [rbp-DEh] BYREF
  int v121; // [rsp+24h] [rbp-DCh]
  KIRQL v122; // [rsp+28h] [rbp-D8h]
  PEX_SPIN_LOCK v123; // [rsp+30h] [rbp-D0h]
  unsigned int v124; // [rsp+38h] [rbp-C8h]
  unsigned int v125; // [rsp+3Ch] [rbp-C4h]
  volatile signed __int64 *v126; // [rsp+40h] [rbp-C0h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-B8h]
  __int64 v128; // [rsp+50h] [rbp-B0h]
  __int64 v129; // [rsp+58h] [rbp-A8h]
  int v130; // [rsp+60h] [rbp-A0h]
  int *v131; // [rsp+68h] [rbp-98h]
  ULONG_PTR v132; // [rsp+70h] [rbp-90h]
  ULONG_PTR BugCheckParameter1; // [rsp+78h] [rbp-88h]
  struct _KTHREAD *v134; // [rsp+80h] [rbp-80h]
  unsigned int *v135; // [rsp+88h] [rbp-78h]
  ULONG_PTR v136; // [rsp+90h] [rbp-70h]
  ULONG_PTR v137; // [rsp+98h] [rbp-68h]
  __int64 v138; // [rsp+A0h] [rbp-60h]
  __int64 v139; // [rsp+A8h] [rbp-58h]
  __int64 v140; // [rsp+B0h] [rbp-50h]
  __int64 v141; // [rsp+B8h] [rbp-48h]
  PEX_SPIN_LOCK SpinLock; // [rsp+C0h] [rbp-40h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  volatile signed __int64 *v144[3]; // [rsp+E0h] [rbp-20h] BYREF
  volatile LONG *v145; // [rsp+F8h] [rbp-8h] BYREF
  ULONG_PTR *v146; // [rsp+100h] [rbp+0h]
  char v147[8]; // [rsp+110h] [rbp+10h] BYREF
  ULONG_PTR v148; // [rsp+118h] [rbp+18h]
  __int64 v149; // [rsp+120h] [rbp+20h]
  __int64 v150; // [rsp+128h] [rbp+28h]
  ULONG_PTR v151; // [rsp+130h] [rbp+30h]
  int *v152; // [rsp+138h] [rbp+38h]
  struct _KTHREAD *v153; // [rsp+140h] [rbp+40h]
  _KPROCESS *v154; // [rsp+148h] [rbp+48h]
  __int64 v155; // [rsp+150h] [rbp+50h]
  unsigned __int64 DeepFreezeStartTime; // [rsp+158h] [rbp+58h]
  $D4FCF91253F76F57393CBFE908971F67 v157; // [rsp+160h] [rbp+60h] BYREF
  int v158; // [rsp+190h] [rbp+90h] BYREF
  __int16 v159; // [rsp+194h] [rbp+94h]
  __int64 v160; // [rsp+198h] [rbp+98h]
  __int64 v161; // [rsp+1A0h] [rbp+A0h]
  __int64 v162; // [rsp+1A8h] [rbp+A8h]
  unsigned int v163; // [rsp+250h] [rbp+150h] BYREF
  unsigned __int64 v164; // [rsp+258h] [rbp+158h]

  v5 = *(_QWORD *)(a1 + 8);
  LODWORD(v136) = a4;
  v135 = a3;
  v7 = a2;
  memset(v144, 0, sizeof(v144));
  v146 = a5;
  v8 = 0;
  v9 = 0LL;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v124 = 0;
  v128 = 0LL;
  v137 = 0LL;
  v123 = 0LL;
  v122 = 17;
  v119 = 17;
  SpinLock = 0LL;
  v126 = (volatile signed __int64 *)(v5 | 0x8000000000000000uLL);
  BugCheckParameter2 = (__int64)((v5 | 0x8000000000000000uLL) << 25) >> 16;
  v129 = (a1 + 0x58000000000LL) / 48;
  v132 = -1LL;
  if ( a5 )
    *a5 = -1LL;
  v10 = *(_QWORD *)(a1 + 40);
  v158 = 1;
  v160 = 20LL;
  v159 = 0;
  v161 = 0LL;
  v162 = 0LL;
  v141 = 0LL;
  v131 = MiPartitionIdToPointer((HIDWORD(v10) >> 8) & 0x3FF);
  if ( v12 <= (unsigned __int64)MmHighestUserAddress )
  {
LABEL_7:
    v15 = v12;
LABEL_8:
    TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
    if ( (*(_QWORD *)(TopLevelPfn + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
    {
      if ( TopLevelPfn != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    v45 = *(_QWORD *)TopLevelPfn;
    BugCheckParameter1 = v45;
    v123 = (PEX_SPIN_LOCK)(v45 + 1280);
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v129 && PsIsSystemProcess((PEPROCESS)v45) )
      return 0LL;
    CurrentProcess = PsGetCurrentProcess();
    v47 = (_KPROCESS *)BugCheckParameter1;
    if ( BugCheckParameter1 == CurrentProcess )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_136;
    }
    if ( (unsigned int)MiTryToAcquireExpansionLockAtDpc(v144) )
    {
      v8 |= 0x80000u;
      if ( !(unsigned int)MiPrepareAttachThread(BugCheckParameter1, (__int64)v123) )
      {
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        KxReleaseQueuedSpinLock(v144);
        MiLockPageAtDpcInline(a1, v48, v49);
        return 0LL;
      }
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      KxReleaseQueuedSpinLock(v144);
      v47 = (_KPROCESS *)BugCheckParameter1;
LABEL_136:
      __writecr8(v7);
      v139 = 0LL;
      v125 = 0;
      v138 = 0LL;
      if ( (v8 & 0x80000) != 0 )
        KiStackAttachProcess(v47, 1LL, (__int64)&v157);
      CurrentThread = KeGetCurrentThread();
      v134 = CurrentThread;
      --CurrentThread->SpecialApcDisable;
      v122 = ExAcquireSpinLockExclusive(v123);
      if ( (v8 & 8) != 0 )
      {
        if ( (v8 & 1) != 0 )
        {
          v55 = *(_QWORD *)(BugCheckParameter1 + 1032);
          v139 = v55;
          if ( v55 )
          {
            if ( !(unsigned __int8)ExTryAcquireAutoExpandPushLockExclusive(v55 + 16, 0LL) )
            {
              v139 = 0LL;
              goto LABEL_165;
            }
          }
        }
      }
      else
      {
        Address = MiLocateAddress(v15);
        if ( !Address )
          goto LABEL_165;
        if ( ((1 << (*(_BYTE *)(Address + 48) & 7)) & 0x15) == 0 )
        {
          if ( (*(_DWORD *)(Address + 48) & 7) != 6 )
            goto LABEL_165;
          v8 |= 0x10000u;
        }
      }
      if ( (unsigned int)MiSmallVaStillMapsFrame(v15, v129)
        && (unsigned int)MI_IS_PFN_FILE_ONLY(a1) != 1
        && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0 )
      {
        if ( (v8 & 0x10000) == 0 )
          goto LABEL_23;
        v24 = v126;
        if ( MiRotatedToFrameBuffer((unsigned __int64)v126) )
        {
          v25 = v123;
LABEL_149:
          CurrentThread = v134;
LABEL_150:
          MiFlushTbList((__int64)&v158, (_KPROCESS *)v21);
          MiUnlockWorkingSetExclusive((__int64)v25, v122, v52);
          if ( v139 )
            ExReleaseAutoExpandPushLockExclusive(v139 + 16, 0LL);
          v53 = CurrentThread;
          goto LABEL_153;
        }
LABEL_24:
        if ( !*((_QWORD *)v135 + 2) )
        {
          if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 && (v8 & 0x20008) == 0 )
          {
            v25 = v123;
            if ( (MI_READ_PTE_LOCK_FREE(v24) & 0x42) == 0 && (*(_BYTE *)(a1 + 35) & 8) == 0 )
            {
              v26 = *((_QWORD *)v123 + 23);
              Wsle = MiLocateWsle(v15, (__int64)v123, *(_QWORD *)a1);
              v28 = Wsle;
              if ( Wsle >= *(_QWORD *)(v26 + 8) )
              {
                if ( dword_1402FED88 )
                  MI_WSLE_LOG_ACCESS(v123, *(_QWORD *)(v26 + 496) + Wsle * *(unsigned int *)(v26 + 64), v126);
                v164 = v28;
                v163 = 1;
                if ( !MiFreeWsleList((ULONG_PTR)v123, &v163, 0) )
                  v124 = 2;
              }
            }
            goto LABEL_189;
          }
LABEL_188:
          v25 = v123;
          goto LABEL_189;
        }
        if ( (_DWORD)v136 == -1 )
        {
          v58 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
          v56 = dword_1402FE708 & v129 | ((_DWORD)v58 << byte_1402FE6E8) | ((unsigned int)MiPageToNode(v129, 0) << byte_1402FE6D9);
          v57 = 0;
        }
        else
        {
          v56 = dword_1402FE708 & v129 | v136 & ~dword_1402FE708;
          v57 = 16;
        }
        Page = MiGetPage((__int64)v131, v56, v57);
        v132 = Page;
        if ( Page == -1 )
          goto LABEL_188;
        v60 = 48 * Page - 0x58000000000LL;
        v140 = v60;
        if ( v60 == a1 )
        {
          v124 = 1;
          goto LABEL_188;
        }
        v61 = MiLockPageInline(a1);
        v118 = v61;
        if ( (MiFlags & 0x80000) != 0 && (unsigned int)MiGetPagePrivilege(a1, 1, 0LL) )
          v8 |= 0x40000u;
        v22 = (v8 >> 5) & 1;
        LODWORD(v136) = (v8 >> 5) & 1;
        if ( (_DWORD)v136 )
        {
          v21 = 0xFFFFFFFFFFFLL;
          if ( BugCheckParameter2 + 0x200000000000LL > 0xFFFFFFFFFFFLL
            || (*(_BYTE *)(a1 + 34) & 7) != 6
            || (v21 = 0x8000000000000000uLL,
                (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) != v126)
            || !(unsigned int)MiSmallVaStillMapsFrame(BugCheckParameter2, v129)
            || (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
          {
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v62 = v61;
LABEL_185:
            __writecr8(v62);
            goto LABEL_186;
          }
          v63 = MI_READ_PTE_LOCK_FREE(v126);
          v64 = v63;
          if ( (v63 & 0x200) != 0 || (v63 & 0x20) == 0 )
          {
LABEL_184:
            v62 = v118;
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_185;
          }
          v22 = (unsigned int)v136;
        }
        else
        {
          v64 = 0LL;
        }
        if ( *(_WORD *)(a1 + 32) != 1
          || ((*(_BYTE *)(a1 + 35) & 8) != 0 || !*(_QWORD *)a1) && (v8 & 0x20026) == 0
          || (*(_BYTE *)(a1 + 34) & 7) != 6
          || v131 != MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF) )
        {
          goto LABEL_184;
        }
        if ( !(_DWORD)v22 )
          v64 = MI_READ_PTE_LOCK_FREE(v126);
        if ( (v8 & 0x100) == 0 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v125 == 1 )
        {
          if ( (v8 & 0x10) == 0 )
            goto LABEL_184;
          v136 = qword_1403824C0 + 8;
          v67 = KeAbPreAcquire(qword_1403824C0 + 8, 0LL, 1LL);
          v22 = v136;
          if ( !_interlockedbittestandreset((volatile signed __int32 *)v136, 0) )
          {
            if ( v67 )
              KeAbPostReleaseEx(v136, v67);
            goto LABEL_184;
          }
          if ( v67 )
            *(_BYTE *)(v67 + 26) |= 1u;
          v8 |= 0x2008u;
          *(_QWORD *)(v22 + 8) = KeGetCurrentThread();
        }
        if ( (v8 & 0x20000) == 0 )
        {
          if ( (v8 & 0x20) != 0 )
          {
            v9 = v64 & 0xFFFFFFFFFFFFFFDFuLL;
            v136 = _InterlockedCompareExchange64(v126, v64 & 0xFFFFFFFFFFFFFFDFuLL, v64);
            if ( v64 != v136 )
              goto LABEL_184;
            v68 = 0;
            v125 = 2;
            v69 = 2;
            goto LABEL_233;
          }
          if ( ((v8 & 8) == 0 || (v8 & 0x1000) != 0) && ((v64 & 0x42) != 0 || (v8 & 0x40000) != 0) )
          {
            v70 = v126;
            if ( (v8 & 0x1000) != 0 )
            {
              v71 = v64 & 0xFFFFFFFFFFFFFFBDuLL;
            }
            else
            {
              v8 |= 0x80u;
              v71 = v64 & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
            }
            *v126 = v71;
            if ( (unsigned int)MiPteInShadowRange(v70) )
              MiWritePteShadow(v126, v71);
            if ( v123 )
              v72 = MiTbFlushType((__int64)v123);
            else
              v72 = 0;
            v69 = v125;
            v68 = v72;
LABEL_233:
            KeFlushSingleTb(BugCheckParameter2, v68, v69);
          }
        }
        v73 = *(unsigned __int8 *)(a1 + 34) >> 6;
        MiLockNestedPageAtDpcInline(v140, v21, v22);
        v74 = v73;
        v60 = v140;
        MiFinalizePageAttribute(v140, v74, 1);
        if ( (v8 & 0x20000) != 0 )
        {
          KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v137 + 232), &LockHandle);
          if ( v137 != MiVaIsPageFileHash(v131, BugCheckParameter2)
            || !(unsigned int)MiSmallVaStillMapsFrame(BugCheckParameter2, v129) )
          {
            KeReleaseInStackQueuedSpinLock(&LockHandle);
            _InterlockedAnd64((volatile signed __int64 *)(v140 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            goto LABEL_184;
          }
        }
        MiCopyPfnEntry(v140, a1);
        v75 = v129;
        if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v129 )
          *(_QWORD *)(v140 + 40) ^= (v132 ^ *(_QWORD *)(v140 + 40)) & 0xFFFFFFFFFLL;
        v76 = 0x7FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (v8 & 0x20020) == 0 )
        {
          if ( (v8 & 0x2000) != 0 )
          {
LABEL_253:
            v77 = v118;
            _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v118 = 17;
            __writecr8(v77);
            goto LABEL_254;
          }
          if ( ((v8 >> 3) & 1) == 0 && !v125 )
          {
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
            goto LABEL_253;
          }
          if ( (v8 & 0xA) == 0xA )
          {
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
            goto LABEL_253;
          }
          if ( (v8 & 0x1000) != 0 )
          {
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
            goto LABEL_253;
          }
          if ( ((v8 >> 3) & 1) != 0 && (v8 & 2) == 0 && !v125 || (v8 & 0x104) == 0x104 )
            goto LABEL_253;
        }
LABEL_254:
        v78 = (v8 >> 13) & 1;
        v121 = v78;
        if ( v78 )
        {
          v79 = (int *)MiLockProtoPoolPage(BugCheckParameter2, v120);
          v131 = v79;
          if ( !v79 )
          {
LABEL_256:
            *(_QWORD *)(v60 + 16) = 128LL;
            goto LABEL_186;
          }
          if ( *((_WORD *)v79 + 16) > 2u )
          {
            MiUnlockProtoPoolPage((__int64)v79, v120[0]);
            goto LABEL_256;
          }
          v64 = MI_READ_PTE_LOCK_FREE(v126);
          if ( (v64 & 0x42) != 0 )
          {
            MiLockPageAtDpcInline((__int64)v131, v76, v80);
            v81 = v131;
            if ( *((_WORD *)v131 + 16) > 2u )
            {
              _InterlockedAnd64((volatile signed __int64 *)v131 + 3, 0x7FFFFFFFFFFFFFFFuLL);
              MiUnlockProtoPoolPage((__int64)v81, v120[0]);
              *(_QWORD *)(v60 + 16) = 128LL;
              goto LABEL_186;
            }
            v82 = v126;
            *v126 = v64 & 0xFFFFFFFFFFFFFFBDuLL;
            if ( (unsigned int)MiPteInShadowRange(v82) )
              MiWritePteShadow(v126, v64 & 0xFFFFFFFFFFFFFFBDuLL);
            KeFlushSingleTb(BugCheckParameter2, 0, 1u);
            v83 = v131;
            v84 = MiCaptureDirtyBitToPfn(v131);
            _InterlockedAnd64((volatile signed __int64 *)v83 + 3, 0x7FFFFFFFFFFFFFFFuLL);
            if ( v84 )
            {
              v87 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*((_QWORD *)v83 + 5)) >> 8) & 0x3FF);
              MiReleasePageFileInfo(v87, v88, 1LL);
            }
            v60 = v140;
            MiLockPageAtDpcInline(v140, v85, v86);
            MiCaptureDirtyBitToPfn(v60);
            _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
          v78 = v121;
          v75 = v129;
        }
        else
        {
          v120[0] = 17;
          v131 = 0LL;
        }
        if ( !v78 && (v8 & 0x104) != 0x104 && ((v8 & 8) == 0 || (v8 & 2) != 0 || v125) )
        {
          if ( v118 == 17 )
          {
            v89 = 0;
            v130 = 0;
          }
          else
          {
            v130 = 4;
            MiLockNestedPageAtDpcInline(v60, v76, v75);
            v89 = 4;
          }
          if ( (v8 & 0x40000) != 0 )
          {
            v89 |= 2u;
            v130 = v89;
          }
          MiCopyPage(v132, v129, v135, v89);
          if ( (v130 & 4) != 0 )
            _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (v8 & 0x20) == 0 && v118 != 17 )
            *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
          goto LABEL_316;
        }
        PteFromCopyList = (unsigned int *)MiGetPteFromCopyList(v135, v132, v75);
        v91 = v129;
        v135 = PteFromCopyList;
        if ( v121 )
        {
          v92 = MiReplacePageOfProtoPool(
                  (char *)BugCheckParameter2,
                  v129,
                  v132,
                  (_QWORD *)((__int64)((_QWORD)PteFromCopyList << 25) >> 16));
LABEL_302:
          v121 = v92;
          goto LABEL_303;
        }
        v148 = BugCheckParameter2;
        v151 = v132;
        v152 = &v158;
        v153 = v134;
        v149 = (__int64)((_QWORD)PteFromCopyList << 25) >> 16;
        v155 = 0LL;
        Process = v134->ApcState.Process;
        v94 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
        v150 = v129;
        DeepFreezeStartTime = 0LL;
        v154 = Process;
        v121 = 1;
        if ( v94 == v129 )
        {
          if ( (Process[2].DirectoryTableBase & 0x8000000) != 0 )
          {
            v121 = 0;
LABEL_303:
            v97 = v135;
            *(_QWORD *)v135 = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v97) )
              MiWritePteShadow(v135, 0LL);
            v98 = v135 + 2;
            *((_QWORD *)v135 + 1) = 0LL;
            if ( (unsigned int)MiPteInShadowRange(v98) )
              MiWritePteShadow(v135 + 2, 0LL);
            if ( !v121 )
            {
              if ( (v8 & 0x2000) != 0 )
                MiUnlockProtoPoolPage((__int64)v131, v120[0]);
              goto LABEL_256;
            }
            v121 = (v8 >> 13) & 1;
            if ( v121 )
            {
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              MiLockNestedPageAtDpcInline(v60, 0xC000000000000001uLL, v22);
            }
            else
            {
              v99 = MiLockPageInline(a1);
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
              *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
              _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              __writecr8(v99);
              v118 = 17;
            }
LABEL_316:
            v21 = BugCheckParameter1;
            v100 = v132;
            if ( (v8 & 2) != 0 && BugCheckParameter1 && *(_QWORD *)(BugCheckParameter1 + 864) == v129 )
              *(_QWORD *)(BugCheckParameter1 + 864) = v132;
            v22 = 0xFFFF000000000FFFuLL;
            v101 = (v100 & 0xFFFFFFFFFLL) << 12;
            v102 = v101 | v64 & 0xFFFF000000000FFFuLL;
            LODWORD(v136) = v8 >> 5;
            if ( (v8 & 0x20) != 0 )
            {
              v103 = v101 | v9 & 0xFFFF000000000FFFuLL | 0x20;
              MiLockNestedPageAtDpcInline(v140, v21, 0xFFFF000000000FFFuLL);
              v104 = _InterlockedCompareExchange64(v126, v103, v9);
              v60 = v140;
              _InterlockedAnd64((volatile signed __int64 *)(v140 + 24), 0x7FFFFFFFFFFFFFFFuLL);
              if ( v104 != v9 )
              {
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v118);
                *(_QWORD *)(v60 + 16) = 128LL;
                goto LABEL_186;
              }
              *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
            }
            else if ( (v8 & 0x8000) != 0 )
            {
              if ( (v8 & 0x100000) != 0 )
              {
                v108 = *(_QWORD *)(v21 + 1528);
                if ( !v108
                  || (PteAddress = MiGetPteAddress(v108), v110 = MI_GET_PAGE_FRAME_FROM_PTE(PteAddress), v110 != v132) )
                {
                  v124 = 2;
                  v60 = a1;
LABEL_186:
                  v128 = v60;
                  if ( v60 )
                  {
                    v65 = MiLockPageInline(v60);
                    *(_BYTE *)(v60 + 34) = *(_BYTE *)(v60 + 34) & 0xF8 | 5;
                    _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                    __writecr8(v65);
                  }
                  goto LABEL_188;
                }
              }
            }
            else
            {
              if ( (v8 & 0x80u) == 0 )
              {
                v105 = v121;
                if ( !v121 && (((unsigned __int8)v8 | (unsigned __int8)(v8 >> 5)) & 0x10) != 0 )
                  MiLockNestedPageAtDpcInline(v60, v21, 0xFFFF000000000FFFuLL);
                v113 = v126;
                *v126 = v102;
                if ( (unsigned int)MiPteInShadowRange(v113) )
                  MiWritePteShadow(v126, v102);
LABEL_325:
                if ( (v8 & 0xA0) != 0 )
                {
                  v107 = BugCheckParameter2;
                }
                else
                {
                  v106 = MiTbFlushType((__int64)v123);
                  v107 = BugCheckParameter2;
                  KeFlushSingleTb(BugCheckParameter2, v106, v125);
                }
                if ( v105 )
                {
                  _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  MiUnlockProtoPoolPage((__int64)v131, v120[0]);
                  v114 = 17;
                }
                else
                {
                  if ( (((unsigned __int8)v8 | (unsigned __int8)v136) & 0x10) != 0 )
                  {
                    v25 = v123;
                    if ( (v8 & 0x80u) != 0 )
                    {
                      v114 = v118;
                    }
                    else
                    {
                      if ( v123 )
                        v115 = MiTbFlushType((__int64)v123);
                      else
                        v115 = 0;
                      KeFlushSingleTb(v107, v115, v125);
                      _InterlockedAnd64((volatile signed __int64 *)(v60 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                      v114 = v118;
                    }
                    goto LABEL_352;
                  }
                  v114 = v118;
                }
                v25 = v123;
LABEL_352:
                if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
                {
                  v116 = 8LL;
                  if ( v114 != 17 )
                    v116 = 12LL;
                  MiClearPfnImageVerified(a1, v116);
                }
                if ( (v8 & 0x20000) != 0 )
                  KeReleaseInStackQueuedSpinLock(&LockHandle);
                if ( v114 == 17 )
                  v114 = MiLockPageInline(a1);
                *(_BYTE *)(a1 + 34) &= 0xC7u;
                *(_QWORD *)(a1 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
                *(_BYTE *)(a1 + 35) &= ~0x20u;
                *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
                *(_WORD *)(a1 + 32) = 0;
                _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                __writecr8(v114);
                v124 = 1;
LABEL_189:
                if ( v125 )
                {
                  if ( (v8 & 0x400) != 0 )
                  {
                    MiUnlockWorkingSetExclusive((__int64)v25, v119, v22);
                    if ( (v8 & 0x4000) != 0 )
                    {
                      v66 = *(volatile signed __int64 **)(v141 + 48);
                      if ( (_InterlockedExchangeAdd64(v66, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
                        ExfTryToWakePushLock(v66);
                      KeAbPostRelease((ULONG_PTR)v66);
                    }
                    KiLeaveGuardedRegionUnsafe((__int64)v134);
                    MiDetachFromOwningSession(v138, &v157);
                  }
                  else
                  {
                    if ( v25 )
                      MiUnlockWorkingSetExclusive((__int64)v25, v119, v22);
                    if ( (v8 & 0x2000) != 0 )
                      ExReleaseFastMutexUnsafe((PFAST_MUTEX)(qword_1403824C0 + 8));
                    if ( v25 )
                    {
                      v53 = v134;
LABEL_153:
                      KiLeaveGuardedRegionUnsafe((__int64)v53);
                    }
                  }
                  if ( (v8 & 0x80000) != 0 )
                  {
                    KiUnstackDetachProcess(&v157, 1LL);
                    MiAttachThreadDone((__int64)v25);
                  }
                  if ( v128 )
                    MiReleaseFreshPage(v128);
                  MiLockPageInline(a1);
                  v54 = v124;
                  if ( v124 == 1 )
                  {
                    if ( v146 )
                      *v146 = v132;
                    return v54;
                  }
                  if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
                  {
                    if ( v124 != 2 )
                      return v54;
                  }
                  else
                  {
                    v54 = 2;
                  }
                  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
                    return 0;
                  return v54;
                }
                goto LABEL_149;
              }
              v111 = v126;
              v112 = v126;
              *v126 = v102;
              if ( (unsigned int)MiPteInShadowRange(v112) )
                MiWritePteShadow(v111, v102);
            }
            v105 = v121;
            goto LABEL_325;
          }
          if ( _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1724), 1u) )
          {
            v121 = 0;
            goto LABEL_303;
          }
          v8 |= 0x8000u;
          if ( v154->DirectoryTableBase >> 12 != v91 )
          {
            HIDWORD(v155) = 1;
            v8 |= 0x100000u;
            DeepFreezeStartTime = v154[2].DeepFreezeStartTime;
          }
          MiUnlockWorkingSetExclusive((__int64)v123, v122, 1LL);
          KeSwapDirectoryTableBase(v154, HIDWORD(v155), v147);
          v122 = ExAcquireSpinLockExclusive(v123);
          _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter1 + 1724), 0xFFFFFFFD);
        }
        else
        {
          if ( v141 )
          {
            v137 = *(_QWORD *)(v141 + 48);
            v95 = KeAbPreAcquire(v137, 0LL, 1LL);
            v96 = v137;
            if ( _interlockedbittestandset64((volatile signed __int32 *)v137, 0LL) )
            {
              if ( v95 )
                KeAbPostReleaseEx(v96, v95);
              v141 = 0LL;
              v121 = 0;
              goto LABEL_303;
            }
            if ( v95 )
              *(_BYTE *)(v95 + 26) |= 1u;
            v8 |= 0x4000u;
          }
          MiReplacePageTablePage(v147, v91);
        }
        v92 = v121;
        if ( (int)v155 < 0 )
          v92 = 0;
        goto LABEL_302;
      }
LABEL_165:
      v25 = v123;
      goto LABEL_150;
    }
    return 0LL;
  }
  if ( (v11 & 0xFFFFFFFFFLL) == v14 )
  {
    if ( !*((_QWORD *)v135 + 2) )
      return 0LL;
    v8 = 8;
    goto LABEL_7;
  }
  v18 = 0xFFFFF6FB40000000uLL;
  v19 = (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v20 = 0;
  while ( 1 )
  {
    if ( (unsigned __int64)v13 >= v18 && (unsigned __int64)v13 <= v19 )
    {
      v15 = BugCheckParameter2;
      v23 = v20 == 0;
      v7 = a2;
      if ( v23 )
        v8 = 1;
      v8 |= 8u;
      goto LABEL_8;
    }
    v138 = MiGetPteAddress(v18);
    ++v20;
    v19 = MiGetPteAddress(v19);
    if ( v20 >= 3 )
      break;
    v18 = v138;
    v13 = v126;
  }
  v15 = BugCheckParameter2;
  if ( BugCheckParameter2 + 0x200000000000LL <= 0xFFFFFFFFFFFLL )
  {
    if ( !*((_QWORD *)v135 + 2) )
      return 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    v8 = 32;
    v134 = KeGetCurrentThread();
    BugCheckParameter1 = 0LL;
    v139 = 0LL;
    v125 = 1;
    v138 = 0LL;
    goto LABEL_23;
  }
  if ( BugCheckParameter2 + 0x70000000000LL <= 0x7FFFFFFFFFLL
    || BugCheckParameter2 + 0x98000000000LL <= 0x7FFFFFFFFFLL
    && (unsigned __int64)(((__int64)(BugCheckParameter2 << 25) >> 16) + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
  {
    v40 = MiAttachToOwningSession(a1, a2, &v157);
    v138 = v40;
    if ( !v40 )
      return 0LL;
    v123 = (PEX_SPIN_LOCK)(*(_QWORD *)(v40 + 1024) + 2968LL);
    v41 = v123;
    v134 = KeGetCurrentThread();
    --v134->SpecialApcDisable;
    v119 = ExAcquireSpinLockExclusive(v41);
    v8 = 1024;
    ExAcquireSpinLockSharedAtDpcLevel(&dword_1402FE9C8);
    if ( (unsigned int)MiSmallVaStillMapsFrame(v15, -1LL) )
    {
      if ( (v15 + 0x70000000000LL <= 0x7FFFFFFFFFLL
         || v15 + 0x98000000000LL <= 0x7FFFFFFFFFLL
         && (unsigned __int64)(((__int64)(v15 << 25) >> 16) + 0x70000000000LL) <= 0x7FFFFFFFFFLL)
        && (unsigned int)MiSmallVaStillMapsFrame(v15, v129) == 1 )
      {
        v8 = 3072;
        v160 = 20LL;
        v158 = 2;
        v159 = 0;
        v161 = 0LL;
        v162 = 0LL;
      }
      ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
      if ( (v8 & 0x800) != 0
        && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
        && (unsigned int)MI_IS_PFN_FILE_ONLY(a1) != 1 )
      {
        v43 = MiSessionWsMetaPage(a1);
        if ( v43 )
        {
          v44 = v8 | 0x108;
          if ( v43 == 2 )
          {
            v8 = v44 | 4;
            BugCheckParameter1 = 0LL;
            v139 = 0LL;
            v125 = 1;
            v141 = *(_QWORD *)(PsGetCurrentProcess() + 1024) + 7824LL;
            goto LABEL_23;
          }
          v8 = v44 | 2;
        }
        BugCheckParameter1 = 0LL;
        v139 = 0LL;
        v125 = 1;
LABEL_23:
        v24 = v126;
        goto LABEL_24;
      }
    }
    else
    {
      ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
    }
    MiUnlockWorkingSetExclusive((__int64)v41, v119, v42);
    KiLeaveGuardedRegionUnsafe((__int64)v134);
    MiDetachFromOwningSession(v138, &v157);
    MiLockPageInline(a1);
    return ~(*(_QWORD *)(a1 + 24) >> 61) & 2;
  }
  IsPageFileHash = MiVaIsPageFileHash(v131, BugCheckParameter2);
  v30 = IsPageFileHash;
  v137 = IsPageFileHash;
  if ( qword_1402FE8F0 && BugCheckParameter2 >= qword_1402FE8F0 )
  {
    if ( BugCheckParameter2 >= qword_1402FE8F0 + (qword_1402FE8D0 << 21) )
    {
      v30 = IsPageFileHash;
    }
    else
    {
      if ( (*(_BYTE *)(48
                     * ((*(_QWORD *)(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                     - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
      {
        v8 = 512;
        goto LABEL_58;
      }
      v30 = v137;
    }
  }
  if ( BugCheckParameter2 + 0x400000000000LL > 0xF7FFFFFFFFFLL )
  {
    if ( v30 )
    {
      v8 = 0x20000;
    }
    else if ( BugCheckParameter2 + 0x80000000000LL > 0x7FFFFFFFFFLL )
    {
      if ( PsNtosImageBase
        && (BugCheckParameter2 >= (unsigned __int64)PsNtosImageBase && BugCheckParameter2 < PsNtosImageEnd
         || BugCheckParameter2 >= (unsigned __int64)PsHalImageBase && BugCheckParameter2 < PsHalImageEnd) )
      {
        v8 = 64;
      }
      else if ( (unsigned int)MiSystemWsMetaPage(a1, &SpinLock, 0x400000000000LL, 0xF7FFFFFFFFFLL) )
      {
        v8 = 256;
      }
    }
    else
    {
      v8 = 64;
    }
  }
  else
  {
    v8 = 16;
  }
LABEL_58:
  v121 = v8 >> 8;
  if ( (((unsigned __int8)v8 | (unsigned __int8)((v8 | ((v8 | ((v8 | (v8 >> 8)) >> 1)) >> 2)) >> 2)) & 0x10) == 0 )
  {
    v38 = MiPageInRange(a1, 0xFFFFF6FAC0000000uLL, 0xFFFFF6FB3FFFFFF8uLL, 0LL);
    if ( !v38 )
      return 0LL;
    v7 = a2;
    v39 = v8 | 8;
    if ( v38 == 2 )
    {
      v8 = v39 | 4;
    }
    else
    {
      v8 = v39 | 2;
      if ( BugCheckParameter2 + 0xA8000000000LL <= 0x10804000 )
        v8 |= 0x1000u;
    }
    goto LABEL_8;
  }
  if ( (!*(_QWORD *)a1 || (*(_BYTE *)(a1 + 35) & 8) != 0) && (v8 & 0x20100) == 0 )
    return 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(a2);
  v31 = KeGetCurrentThread();
  v32 = SpinLock;
  BugCheckParameter1 = 0LL;
  v139 = 0LL;
  v125 = 1;
  v134 = v31;
  v130 = 0;
  v138 = 0LL;
  v33 = ((v8 | (v8 >> 5)) >> 4) & 1;
  if ( v33 )
  {
    v34 = &dword_1402FF980;
  }
  else
  {
    v34 = &dword_1402FFA80;
    if ( (((unsigned __int8)v8 | (unsigned __int8)(v8 >> 11)) & 0x40) == 0 )
      v34 = SpinLock;
  }
  v123 = v34;
  --v31->SpecialApcDisable;
  v119 = ExAcquireSpinLockExclusive(v34);
  ExAcquireSpinLockSharedAtDpcLevel(&dword_1402FE9C8);
  if ( !(unsigned int)MiSmallVaStillMapsFrame(BugCheckParameter2, -1LL) )
    goto LABEL_73;
  if ( !v33 )
  {
    if ( (v8 & 0x20000) != 0 )
    {
      v15 = BugCheckParameter2;
      if ( !MiVaIsPageFileHash(v131, BugCheckParameter2) )
        goto LABEL_73;
      goto LABEL_92;
    }
    if ( (v8 & 0x40) != 0 )
    {
      v15 = BugCheckParameter2;
      if ( BugCheckParameter2 + 0x80000000000LL <= 0x7FFFFFFFFFLL
        || PsNtosImageBase
        && (BugCheckParameter2 >= (unsigned __int64)PsNtosImageBase && BugCheckParameter2 < PsNtosImageEnd
         || BugCheckParameter2 >= (unsigned __int64)PsHalImageBase && BugCheckParameter2 < PsHalImageEnd) )
      {
        goto LABEL_92;
      }
    }
    else
    {
      v130 = MiSystemWsMetaPage(a1, &v145, v35, v36);
      if ( v130 && v145 == v32 )
      {
        v15 = BugCheckParameter2;
        goto LABEL_92;
      }
    }
LABEL_73:
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
LABEL_74:
    v124 = 2;
    goto LABEL_75;
  }
  v15 = BugCheckParameter2;
  if ( BugCheckParameter2 + 0x400000000000LL > 0xF7FFFFFFFFFLL
    && (!qword_1402FE8F0
     || BugCheckParameter2 < qword_1402FE8F0
     || BugCheckParameter2 >= qword_1402FE8F0 + (qword_1402FE8D0 << 21)
     || (*(_BYTE *)(48
                  * ((*(_QWORD *)(((BugCheckParameter2 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                  - 0x57FFFFFFFDALL) & 0xF0) != 0x70) )
  {
    goto LABEL_73;
  }
LABEL_92:
  if ( !(unsigned int)MiSmallVaStillMapsFrame(v15, v129) || (unsigned int)MI_IS_PFN_FILE_ONLY(a1) == 1 )
  {
    ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
    if ( v33 )
      goto LABEL_75;
    goto LABEL_74;
  }
  ExReleaseSpinLockSharedFromDpcLevel(&dword_1402FE9C8);
  if ( (v121 & 1) != 0 )
  {
    v24 = v126;
    v37 = v8 | 8;
    if ( v130 == 2 )
      v8 = v37 | 4;
    else
      v8 = v37 | 2;
    goto LABEL_24;
  }
  if ( (v8 & 0x20000) != 0 || (*(_BYTE *)(a1 + 35) & 8) == 0 && *(_QWORD *)a1 )
    goto LABEL_23;
LABEL_75:
  MiUnlockWorkingSetExclusive((__int64)v123, v119, v22);
  KiLeaveGuardedRegionUnsafe((__int64)v134);
  MiLockPageInline(a1);
  result = v124;
  if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
    return 0LL;
  return result;
}
