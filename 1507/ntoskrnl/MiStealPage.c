/*
 * XREFs of MiStealPage @ 0x140055CB0
 * Callers:
 *     MiClaimPhysicalRun @ 0x14005ACA0 (MiClaimPhysicalRun.c)
 * Callees:
 *     PsIsSystemProcess @ 0x140020228 (PsIsSystemProcess.c)
 *     ExpWaitForSpinLockSharedAndAcquire @ 0x140033D90 (ExpWaitForSpinLockSharedAndAcquire.c)
 *     MiReplacePageOfProtoPool @ 0x140037690 (MiReplacePageOfProtoPool.c)
 *     MiTbFlushType @ 0x14003C144 (MiTbFlushType.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KeFlushSingleTb @ 0x14003FB20 (KeFlushSingleTb.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400430C0 (KeAcquireInStackQueuedSpinLock.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140045FD0 (KeReleaseInStackQueuedSpinLock.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiCopyPage @ 0x140058ED0 (MiCopyPage.c)
 *     MiGetPteFromCopyList @ 0x140059330 (MiGetPteFromCopyList.c)
 *     MiGetPagePrivilege @ 0x1400597B0 (MiGetPagePrivilege.c)
 *     MiFinalizePageAttribute @ 0x140059C28 (MiFinalizePageAttribute.c)
 *     MiCopyPfnEntry @ 0x14005A620 (MiCopyPfnEntry.c)
 *     MiPageToNode @ 0x14005AA30 (MiPageToNode.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x14005AC60 (MI_IS_PFN_FILE_ONLY.c)
 *     KxWaitForLockChainValid @ 0x14006D660 (KxWaitForLockChainValid.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiRotatedToFrameBuffer @ 0x140080948 (MiRotatedToFrameBuffer.c)
 *     MiLocateAddress @ 0x1400898F0 (MiLocateAddress.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiFlushTbList @ 0x140091890 (MiFlushTbList.c)
 *     MiLocateWsle @ 0x140095350 (MiLocateWsle.c)
 *     MiLogPageAccess @ 0x140096F70 (MiLogPageAccess.c)
 *     KiUnstackDetachProcess @ 0x14009A720 (KiUnstackDetachProcess.c)
 *     KiStackAttachProcess @ 0x14009AB60 (KiStackAttachProcess.c)
 *     MiFreeWsleList @ 0x1400AE6D0 (MiFreeWsleList.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiGetPage @ 0x1400BD890 (MiGetPage.c)
 *     KeSwapDirectoryTableBase @ 0x1400D37D8 (KeSwapDirectoryTableBase.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiClearPfnImageVerified @ 0x1400E6680 (MiClearPfnImageVerified.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExpReleaseFastMutexContended @ 0x1400F3D1C (ExpReleaseFastMutexContended.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     MiAttachThreadDone @ 0x1400FB904 (MiAttachThreadDone.c)
 *     MiPrepareAttachThread @ 0x1400FB9A8 (MiPrepareAttachThread.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiAttachToOwningSession @ 0x1400FD2E0 (MiAttachToOwningSession.c)
 *     MiDetachFromOwningSession @ 0x1400FD440 (MiDetachFromOwningSession.c)
 *     MiGetTopLevelPfn @ 0x1400FD760 (MiGetTopLevelPfn.c)
 *     ExReleaseAutoExpandPushLockExclusive @ 0x14010E920 (ExReleaseAutoExpandPushLockExclusive.c)
 *     MiReplacePageTablePage @ 0x14010F190 (MiReplacePageTablePage.c)
 *     MiSmallVaStillMapsFrame @ 0x14010FD30 (MiSmallVaStillMapsFrame.c)
 *     MiSessionWsMetaPage @ 0x140120468 (MiSessionWsMetaPage.c)
 *     MiSystemWsMetaPage @ 0x1401204D0 (MiSystemWsMetaPage.c)
 *     MiPageInRange @ 0x1401205C0 (MiPageInRange.c)
 *     MiVaIsPageFileHash @ 0x140122F1C (MiVaIsPageFileHash.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KiReleaseQueuedSpinLockInstrumented @ 0x14017E064 (KiReleaseQueuedSpinLockInstrumented.c)
 *     KiTryToAcquireQueuedSpinLockInstrumented @ 0x140200CD0 (KiTryToAcquireQueuedSpinLockInstrumented.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeDemandZeroPte @ 0x140225C14 (MiMakeDemandZeroPte.c)
 *     ExTryAcquireAutoExpandPushLockExclusive @ 0x140263428 (ExTryAcquireAutoExpandPushLockExclusive.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpAcquireSpinLockSharedAtDpcLevelInstrumented @ 0x140264154 (ExpAcquireSpinLockSharedAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockSharedFromDpcLevelInstrumented @ 0x140264230 (ExpReleaseSpinLockSharedFromDpcLevelInstrumented.c)
 */

__int64 __fastcall MiStealPage(__int64 a1, unsigned __int8 a2, __int64 a3, int a4, _QWORD *a5)
{
  unsigned int v5; // ebx
  unsigned int v8; // esi
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r14
  __int64 v11; // r8
  __int64 v12; // r8
  int v13; // r9d
  __int16 *v14; // r10
  __int64 v15; // r11
  unsigned int v16; // r13d
  __int64 TopLevelPfn; // rax
  volatile signed __int64 *v19; // r8
  unsigned __int64 v20; // rcx
  unsigned __int64 v21; // rax
  unsigned int j; // edx
  __int64 IsPageFileHash; // rax
  __int64 v24; // rcx
  struct _KTHREAD *v25; // rcx
  unsigned int v26; // edi
  unsigned int v27; // r13d
  volatile signed __int32 *v28; // r8
  unsigned int v29; // eax
  signed __int32 m; // edx
  int v31; // ett
  __int64 v32; // r8
  __int64 v33; // r9
  unsigned int v34; // esi
  int v35; // esi
  volatile signed __int64 v36; // rax
  volatile signed __int32 *v37; // r13
  __int64 v38; // rdi
  unsigned __int64 Wsle; // r14
  struct _KTHREAD *v40; // rcx
  __int16 v41; // ax
  unsigned int v42; // edi
  int v43; // eax
  int v44; // esi
  __int64 v45; // rax
  struct _KTHREAD *v46; // rdi
  volatile signed __int32 *v47; // rsi
  unsigned __int8 v48; // r13
  unsigned int v49; // edi
  signed __int32 k; // edx
  int v51; // ett
  __int64 v52; // rcx
  __int16 v53; // ax
  int v54; // eax
  int v55; // esi
  ULONG_PTR v56; // r9
  __int64 v57; // rax
  __int64 v58; // rax
  volatile signed __int32 *v59; // r8
  unsigned int v60; // edi
  unsigned int v61; // eax
  signed __int32 i; // edx
  __int64 Address; // rax
  struct _KTHREAD *v64; // rcx
  __int16 v65; // ax
  unsigned int v66; // edi
  __int64 v67; // rdi
  int v68; // eax
  int v69; // edx
  __int64 v70; // rdi
  int v71; // edx
  __int64 Page; // rax
  unsigned int v73; // edi
  signed __int64 PteShadow; // rdi
  __int64 v75; // rcx
  __int64 v76; // r13
  unsigned __int8 v77; // r14
  unsigned int v78; // edi
  __int64 v79; // r8
  signed __int64 *v80; // r9
  int v81; // r13d
  __int64 v82; // r13
  __int64 v83; // rax
  int v84; // edx
  int v85; // r8d
  volatile signed __int64 *v86; // rcx
  volatile signed __int64 *v87; // rax
  unsigned __int64 v88; // rdx
  int v89; // eax
  unsigned int v90; // r13d
  __int64 v91; // rcx
  unsigned int v92; // eax
  __int64 v93; // r11
  __int64 v94; // rdx
  unsigned __int64 v95; // rax
  int v96; // r13d
  __int64 v97; // rax
  __int64 v98; // r10
  __int64 DemandZeroPte; // rax
  volatile signed __int64 *v100; // r11
  volatile signed __int64 *v101; // r9
  unsigned int v102; // r13d
  __int64 v103; // r13
  unsigned __int64 v104; // rax
  __int16 *v105; // rax
  __int64 v106; // r9
  __int64 v107; // rcx
  unsigned int v108; // r13d
  unsigned int v109; // eax
  signed __int8 v110; // cf
  unsigned int v111; // r13d
  __int64 v112; // r13
  __int64 v113; // rdx
  __int64 PteFromCopyList; // rax
  __int64 v115; // rdx
  int v116; // r13d
  _KPROCESS *Process; // rcx
  __int64 v118; // rax
  volatile signed __int32 *v119; // r8
  unsigned int v120; // r13d
  unsigned int v121; // eax
  signed __int32 n; // edx
  volatile signed __int32 *v123; // r13
  __int64 v124; // rax
  __int16 *v125; // rcx
  unsigned __int64 v126; // rax
  _QWORD *v127; // rcx
  unsigned int v128; // r13d
  ULONG_PTR v129; // rcx
  __int64 v130; // r9
  __int64 v131; // r10
  __int64 v132; // rax
  unsigned __int64 v133; // rdi
  unsigned int v134; // r13d
  unsigned int v135; // r13d
  unsigned __int64 v136; // rdi
  signed __int64 v137; // rax
  __int64 v138; // rax
  __int64 v139; // rdx
  unsigned __int64 v140; // rcx
  unsigned __int64 *v141; // rcx
  unsigned __int64 v142; // rax
  unsigned int v143; // r14d
  volatile signed __int64 *v144; // rcx
  volatile signed __int64 *v145; // rax
  int v146; // eax
  void *v147; // rdi
  int v148; // r14d
  unsigned __int8 v149; // di
  int v150; // eax
  __int64 v151; // rdx
  unsigned __int8 v152; // r14
  unsigned int v153; // edi
  volatile signed __int64 *v154; // rdi
  struct _KTHREAD *v155; // rcx
  __int16 v156; // ax
  __int64 v157; // rdi
  unsigned __int32 v158; // eax
  __int16 v159; // ax
  unsigned int v160; // ecx
  unsigned __int8 v161[8]; // [rsp+20h] [rbp-E0h] BYREF
  volatile signed __int32 *v162; // [rsp+28h] [rbp-D8h]
  __int64 v163; // [rsp+30h] [rbp-D0h]
  __int64 v164; // [rsp+38h] [rbp-C8h]
  int v165; // [rsp+40h] [rbp-C0h]
  void *Src; // [rsp+48h] [rbp-B8h]
  int v167; // [rsp+50h] [rbp-B0h]
  int v168; // [rsp+54h] [rbp-ACh]
  __int64 v169; // [rsp+58h] [rbp-A8h]
  volatile signed __int64 *v170; // [rsp+60h] [rbp-A0h]
  __int64 v171; // [rsp+68h] [rbp-98h]
  int v172; // [rsp+70h] [rbp-90h]
  __int64 v173; // [rsp+78h] [rbp-88h]
  ULONG_PTR BugCheckParameter1; // [rsp+80h] [rbp-80h]
  __int16 *v175; // [rsp+88h] [rbp-78h]
  struct _KTHREAD *CurrentThread; // [rsp+90h] [rbp-70h]
  __int64 v177; // [rsp+98h] [rbp-68h]
  __int64 v178; // [rsp+A0h] [rbp-60h]
  __int64 v179; // [rsp+A8h] [rbp-58h]
  __int64 v180; // [rsp+B0h] [rbp-50h] BYREF
  volatile signed __int64 *v181; // [rsp+B8h] [rbp-48h]
  __int64 v182; // [rsp+C0h] [rbp-40h]
  signed __int64 v183; // [rsp+C8h] [rbp-38h]
  __int64 CurrentIrql; // [rsp+D0h] [rbp-30h]
  __int64 v185; // [rsp+D8h] [rbp-28h]
  __int64 v186; // [rsp+E0h] [rbp-20h]
  unsigned __int64 v187; // [rsp+E8h] [rbp-18h]
  volatile signed __int32 *v188; // [rsp+F0h] [rbp-10h] BYREF
  volatile signed __int32 *v189; // [rsp+F8h] [rbp-8h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+100h] [rbp+0h] BYREF
  _QWORD *v191; // [rsp+118h] [rbp+18h]
  char v192[8]; // [rsp+120h] [rbp+20h] BYREF
  void *v193; // [rsp+128h] [rbp+28h]
  __int64 v194; // [rsp+130h] [rbp+30h]
  __int64 v195; // [rsp+138h] [rbp+38h]
  __int64 v196; // [rsp+140h] [rbp+40h]
  int *v197; // [rsp+148h] [rbp+48h]
  struct _KTHREAD *v198; // [rsp+150h] [rbp+50h]
  _KPROCESS *v199; // [rsp+158h] [rbp+58h]
  __int64 v200; // [rsp+160h] [rbp+60h]
  __int64 v201; // [rsp+168h] [rbp+68h]
  _BYTE v202[48]; // [rsp+170h] [rbp+70h] BYREF
  int v203; // [rsp+1A0h] [rbp+A0h] BYREF
  __int16 v204; // [rsp+1A4h] [rbp+A4h]
  __int64 v205; // [rsp+1A8h] [rbp+A8h]
  __int64 v206; // [rsp+1B0h] [rbp+B0h]
  __int64 v207; // [rsp+1B8h] [rbp+B8h]
  int v208; // [rsp+260h] [rbp+160h] BYREF
  unsigned __int64 v209; // [rsp+268h] [rbp+168h]
  void *retaddr; // [rsp+358h] [rbp+258h]

  v185 = a3;
  v5 = 0;
  v181 = 0LL;
  v182 = 0LL;
  v8 = 0;
  v9 = *(_QWORD *)(a1 + 8) | 0x8000000000000000uLL;
  v180 = 0LL;
  v170 = (volatile signed __int64 *)v9;
  v10 = 0LL;
  Src = (void *)((__int64)(v9 << 25) >> 16);
  v167 = a4;
  v191 = a5;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v172 = 0;
  v171 = 0LL;
  v177 = 0LL;
  v162 = 0LL;
  LOBYTE(CurrentIrql) = 17;
  LOBYTE(v186) = 17;
  v188 = 0LL;
  v169 = (a1 + 0x58000000000LL) / 48;
  v173 = -1LL;
  if ( a5 )
    *a5 = -1LL;
  v11 = *(_QWORD *)(a1 + 40);
  v203 = 1;
  v205 = 20LL;
  v204 = 0;
  v206 = 0LL;
  v207 = 0LL;
  v187 = 0LL;
  v14 = MiPartitionIdToPointer((HIDWORD(v11) >> 8) & 0x3FF);
  v175 = v14;
  v16 = 16;
  v179 = 0x7FFFFFFFF8LL;
  v178 = 0x98000000000LL;
  if ( Src <= MmHighestUserAddress )
    goto LABEL_7;
  if ( (v12 & 0xFFFFFFFFFLL) == v15 )
  {
    if ( !*(_QWORD *)(v185 + 16) )
      return 0LL;
    v8 = 8;
LABEL_7:
    TopLevelPfn = MiGetTopLevelPfn(a1, 0LL);
    if ( (*(_QWORD *)(TopLevelPfn + 40) & 0xFFFFFFFFFLL) == 0xFFFFFFFFFLL )
    {
      if ( TopLevelPfn != a1 )
        _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
      return 0LL;
    }
    v56 = *(_QWORD *)TopLevelPfn;
    BugCheckParameter1 = v56;
    v162 = (volatile signed __int32 *)(v56 + 1272);
    if ( TopLevelPfn != a1 )
      _InterlockedAnd64((volatile signed __int64 *)(TopLevelPfn + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v169 )
    {
      if ( PsIsSystemProcess((PEPROCESS)v56) )
        return 0LL;
      v56 = BugCheckParameter1;
    }
    if ( (_KPROCESS *)v56 == KeGetCurrentThread()->ApcState.Process )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_232:
      __writecr8(a2);
      v178 = 0LL;
      v165 = 0;
      v179 = 0LL;
      if ( (v8 & 0x80000) != 0 )
        KiStackAttachProcess(v56);
      CurrentThread = KeGetCurrentThread();
      --CurrentThread->SpecialApcDisable;
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v162);
      }
      else
      {
        v59 = v162;
        v60 = 0;
        if ( _interlockedbittestandset(v162, 0x1Fu) )
        {
          v61 = ExpWaitForSpinLockExclusiveAndAcquire(v162);
          v59 = v162;
          v60 = v61;
        }
        for ( i = *v59; (*v59 & 0xBFFFFFFF) != 0x80000000; i = *v59 )
        {
          if ( (i & 0x40000000) == 0 )
            _InterlockedCompareExchange(v59, i | 0x40000000, i);
          if ( (++v60 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v60);
            v59 = v162;
          }
        }
      }
      if ( (v8 & 8) != 0 )
      {
        if ( (v8 & 1) != 0 )
        {
          v67 = *(_QWORD *)(BugCheckParameter1 + 1032);
          v178 = v67;
          if ( v67 )
          {
            if ( !(unsigned __int8)ExTryAcquireAutoExpandPushLockExclusive(v67 + 8, 0LL) )
            {
              v178 = 0LL;
              goto LABEL_256;
            }
          }
        }
      }
      else
      {
        Address = MiLocateAddress(Src);
        if ( !Address )
          goto LABEL_256;
        if ( ((1 << (*(_BYTE *)(Address + 48) & 7)) & 0x15) == 0 )
        {
          if ( (*(_DWORD *)(Address + 48) & 7) == 6 )
          {
            v8 |= 0x10000u;
            goto LABEL_251;
          }
LABEL_256:
          v37 = v162;
          goto LABEL_257;
        }
      }
LABEL_251:
      if ( (unsigned int)MiSmallVaStillMapsFrame(Src, v169)
        && (unsigned int)MI_IS_PFN_FILE_ONLY(a1) != 1
        && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
        && ((v8 & 0x10000) == 0 || !(unsigned int)MiRotatedToFrameBuffer(v170)) )
      {
LABEL_108:
        v13 = v167;
        v15 = v169;
        v19 = v170;
        goto LABEL_109;
      }
      goto LABEL_256;
    }
    v181 = (volatile signed __int64 *)&SpinLock;
    v180 = 0LL;
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      if ( (unsigned int)KiTryToAcquireQueuedSpinLockInstrumented(&v180) )
      {
        v56 = BugCheckParameter1;
        goto LABEL_205;
      }
    }
    else
    {
      _m_prefetchw(&SpinLock);
      if ( !(_DWORD)SpinLock
        && !_InterlockedCompareExchange64((volatile signed __int64 *)&SpinLock, (signed __int64)&v180, 0LL) )
      {
LABEL_205:
        v8 |= 0x80000u;
        if ( !(unsigned int)MiPrepareAttachThread(v56, v162) )
        {
          _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
          {
            KiReleaseQueuedSpinLockInstrumented(&v180, retaddr);
            goto LABEL_216;
          }
          _m_prefetchw(&v180);
          v57 = v180;
          if ( !v180 )
          {
            if ( (__int64 *)_InterlockedCompareExchange64(v181, 0LL, (signed __int64)&v180) == &v180 )
              goto LABEL_216;
            v57 = KxWaitForLockChainValid(&v180);
          }
          v180 = 0LL;
          _InterlockedXor64((volatile signed __int64 *)(v57 + 8), 1uLL);
LABEL_216:
          if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v5);
            }
            while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
            return 0LL;
          }
          return 0LL;
        }
        _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          KiReleaseQueuedSpinLockInstrumented(&v180, retaddr);
          v56 = BugCheckParameter1;
          goto LABEL_232;
        }
        _m_prefetchw(&v180);
        v58 = v180;
        if ( !v180 )
        {
          if ( (__int64 *)_InterlockedCompareExchange64(v181, 0LL, (signed __int64)&v180) == &v180 )
          {
LABEL_230:
            v56 = BugCheckParameter1;
            goto LABEL_232;
          }
          v58 = KxWaitForLockChainValid(&v180);
        }
        v180 = 0LL;
        _InterlockedXor64((volatile signed __int64 *)(v58 + 8), 1uLL);
        goto LABEL_230;
      }
      _mm_pause();
    }
    return 0LL;
  }
  v19 = v170;
  v20 = 0xFFFFF6FB40000000uLL;
  v21 = (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  for ( j = 0; j < 3; ++j )
  {
    if ( (unsigned __int64)v170 >= v20 && (unsigned __int64)v170 <= v21 )
    {
      if ( !j )
        v8 = 1;
      v8 |= 8u;
      goto LABEL_7;
    }
    v20 = (v179 & (v20 >> 9)) - v178;
    v21 = (v179 & (v21 >> 9)) - v178;
  }
  if ( (unsigned __int64)Src + 0x200000000000LL > 0xFFFFFFFFFFFLL )
  {
    if ( (unsigned __int64)Src + 0x70000000000LL <= 0x7FFFFFFFFFLL
      || (unsigned __int64)Src + 0x98000000000LL <= 0x7FFFFFFFFFLL
      && (unsigned __int64)(((__int64)((_QWORD)Src << 25) >> 16) + 0x70000000000LL) <= 0x7FFFFFFFFFLL )
    {
      v45 = MiAttachToOwningSession(a1, a2, v202);
      v179 = v45;
      if ( !v45 )
        return 0LL;
      v46 = KeGetCurrentThread();
      v47 = (volatile signed __int32 *)(*(_QWORD *)(v45 + 1024) + 2968LL);
      CurrentThread = v46;
      v162 = v47;
      --v46->SpecialApcDisable;
      v48 = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v47);
      }
      else
      {
        v49 = 0;
        if ( _interlockedbittestandset(v47, 0x1Fu) )
          v49 = ExpWaitForSpinLockExclusiveAndAcquire(v47);
        for ( k = *v47; (*v47 & 0xBFFFFFFF) != 0x80000000; k = *v47 )
        {
          if ( (k & 0x40000000) == 0 )
            _InterlockedCompareExchange(v47, k | 0x40000000, k);
          if ( (++v49 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v49);
        }
        v46 = CurrentThread;
      }
      v8 = 1024;
      LOBYTE(v186) = v48;
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
      }
      else
      {
        _m_prefetchw(&dword_14034EE88);
        v51 = dword_14034EE88 & 0x7FFFFFFF;
        if ( v51 != _InterlockedCompareExchange(
                      &dword_14034EE88,
                      (dword_14034EE88 & 0x7FFFFFFF) + 1,
                      dword_14034EE88 & 0x7FFFFFFF) )
          ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
      }
      if ( (unsigned int)MiSmallVaStillMapsFrame(Src, -1LL) )
      {
        if ( ((unsigned __int64)Src + 0x70000000000LL <= 0x7FFFFFFFFFLL
           || (unsigned __int64)Src + 0x98000000000LL <= 0x7FFFFFFFFFLL
           && (unsigned __int64)(((__int64)((_QWORD)Src << 25) >> 16) + 0x70000000000LL) <= 0x7FFFFFFFFFLL)
          && (unsigned int)MiSmallVaStillMapsFrame(Src, v169) == 1 )
        {
          v205 = 20LL;
          v203 = 2;
          v8 = 3072;
          v204 = 0;
          v206 = 0LL;
          v207 = 0LL;
        }
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
        }
        else
        {
          _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
          _InterlockedDecrement(&dword_14034EE88);
        }
        if ( (v8 & 0x800) != 0
          && (*(_QWORD *)(a1 + 40) & 0x200000000000000LL) == 0
          && (unsigned int)MI_IS_PFN_FILE_ONLY(a1) != 1 )
        {
          v54 = MiSessionWsMetaPage(a1);
          if ( v54 )
          {
            v55 = v8 | 0x108;
            if ( v54 == 2 )
            {
              v8 = v55 | 4;
              BugCheckParameter1 = 0LL;
              v178 = 0LL;
              v165 = 1;
              v187 = KeGetCurrentThread()->ApcState.Process[1].ActiveProcessors.Bitmap[2] + 7824;
              goto LABEL_107;
            }
            v8 = v55 | 2;
          }
          BugCheckParameter1 = 0LL;
          v178 = 0LL;
          v165 = 1;
          goto LABEL_107;
        }
      }
      else if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
      }
      else
      {
        _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_14034EE88);
      }
      MiUnlockWorkingSetExclusive(v162, v48);
      v53 = v46->SpecialApcDisable + 1;
      v46->SpecialApcDisable = v53;
      if ( !v53 && ($CD287064E7C9F7953DE243E927CFCB99 *)v46->ApcState.ApcListHead[0].Flink != &v46->152 )
        KiCheckForKernelApcDelivery(v52);
      MiDetachFromOwningSession(v179, v202);
      __writecr8(2uLL);
      if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v5 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v5);
        }
        while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
      }
      return ~(*(_QWORD *)(a1 + 24) >> 61) & 2;
    }
    IsPageFileHash = MiVaIsPageFileHash(v14, Src);
    v24 = IsPageFileHash;
    v177 = IsPageFileHash;
    if ( qword_14034EDB0 && (unsigned __int64)Src >= qword_14034EDB0 )
    {
      if ( (unsigned __int64)Src >= qword_14034EDB0 + (qword_14034ED90 << 21) )
      {
        v24 = IsPageFileHash;
      }
      else
      {
        if ( (*(_BYTE *)(48
                       * ((*(_QWORD *)((((unsigned __int64)Src >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                       - 0x57FFFFFFFDALL) & 0xF0) == 0x70 )
        {
          v8 = 512;
          goto LABEL_45;
        }
        v24 = v177;
      }
    }
    if ( (unsigned __int64)Src + 0x400000000000LL > 0xF7FFFFFFFFFLL )
    {
      if ( v24 )
      {
        v8 = 0x20000;
      }
      else if ( (unsigned __int64)Src + 0x80000000000LL > 0x7FFFFFFFFFLL )
      {
        if ( PsNtosImageBase
          && (Src >= PsNtosImageBase && (unsigned __int64)Src < PsNtosImageEnd
           || Src >= PsHalImageBase && (unsigned __int64)Src < PsHalImageEnd) )
        {
          v8 = 64;
        }
        else if ( (unsigned int)MiSystemWsMetaPage(a1, &v188, Src, 0x400000000000LL) )
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
LABEL_45:
    LODWORD(v183) = v8 >> 8;
    if ( (((unsigned __int8)v8 | (unsigned __int8)((v8 | ((v8 | ((v8 | (v8 >> 8)) >> 1)) >> 2)) >> 2)) & 0x10) == 0 )
    {
      v43 = MiPageInRange(a1, 0xFFFFF6FAC0000000uLL, 0xFFFFF6FB3FFFFFF8uLL, 0LL);
      if ( !v43 )
        return 0LL;
      v44 = v8 | 8;
      if ( v43 == 2 )
      {
        v8 = v44 | 4;
      }
      else
      {
        v8 = v44 | 2;
        if ( (unsigned __int64)Src + 0xA8000000000LL <= 0x10804000 )
          v8 |= 0x1000u;
      }
      goto LABEL_7;
    }
    if ( (!*(_QWORD *)a1 || (*(_BYTE *)(a1 + 35) & 8) != 0) && (v8 & 0x20100) == 0 )
      return 0LL;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(a2);
    v25 = KeGetCurrentThread();
    v26 = 0;
    BugCheckParameter1 = 0LL;
    v178 = 0LL;
    v165 = 1;
    CurrentThread = v25;
    v179 = 0LL;
    v27 = ((v8 | (v8 >> 5)) >> 4) & 1;
    if ( v27 )
    {
      v28 = dword_14034FE40;
    }
    else
    {
      v28 = dword_14034FF40;
      if ( (((unsigned __int8)v8 | (unsigned __int8)(v8 >> 11)) & 0x40) == 0 )
        v28 = v188;
    }
    v162 = v28;
    --v25->SpecialApcDisable;
    v186 = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v28);
    }
    else
    {
      if ( _interlockedbittestandset(v28, 0x1Fu) )
      {
        v29 = ExpWaitForSpinLockExclusiveAndAcquire(v28);
        v28 = v162;
        v26 = v29;
      }
      for ( m = *v28; (*v28 & 0xBFFFFFFF) != 0x80000000; m = *v28 )
      {
        if ( (m & 0x40000000) == 0 )
          _InterlockedCompareExchange(v28, m | 0x40000000, m);
        if ( (++v26 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v26);
          v28 = v162;
        }
      }
      v26 = 0;
    }
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockSharedAtDpcLevelInstrumented(&dword_14034EE88);
    }
    else
    {
      _m_prefetchw(&dword_14034EE88);
      v31 = dword_14034EE88 & 0x7FFFFFFF;
      if ( v31 != _InterlockedCompareExchange(
                    &dword_14034EE88,
                    (dword_14034EE88 & 0x7FFFFFFF) + 1,
                    dword_14034EE88 & 0x7FFFFFFF) )
        ExpWaitForSpinLockSharedAndAcquire(&dword_14034EE88);
    }
    if ( !(unsigned int)MiSmallVaStillMapsFrame(Src, -1LL) )
      goto LABEL_71;
    if ( v27 )
    {
      if ( (unsigned __int64)Src + 0x400000000000LL > 0xF7FFFFFFFFFLL
        && (!qword_14034EDB0
         || (unsigned __int64)Src < qword_14034EDB0
         || (unsigned __int64)Src >= qword_14034EDB0 + (qword_14034ED90 << 21)
         || (*(_BYTE *)(48
                      * ((*(_QWORD *)((((unsigned __int64)Src >> 18) & 0x3FFFFFF8) - 0x904C0000000LL) >> 12) & 0xFFFFFFFFFLL)
                      - 0x57FFFFFFFDALL) & 0xF0) != 0x70) )
      {
        goto LABEL_71;
      }
    }
    else if ( (v8 & 0x20000) != 0 )
    {
      if ( !MiVaIsPageFileHash(v175, Src) )
        goto LABEL_71;
    }
    else if ( (v8 & 0x40) != 0 )
    {
      if ( (unsigned __int64)Src + 0x80000000000LL > 0x7FFFFFFFFFLL
        && (!PsNtosImageBase
         || (Src < PsNtosImageBase || (unsigned __int64)Src >= PsNtosImageEnd)
         && (Src < PsHalImageBase || (unsigned __int64)Src >= PsHalImageEnd)) )
      {
        goto LABEL_71;
      }
    }
    else
    {
      v26 = MiSystemWsMetaPage(a1, &v189, v32, v33);
      if ( !v26 || v189 != v188 )
      {
LABEL_71:
        if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
        {
          ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
        }
        else
        {
          _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
          _InterlockedDecrement(&dword_14034EE88);
        }
        v34 = 2;
        goto LABEL_129;
      }
    }
    if ( !(unsigned int)MiSmallVaStillMapsFrame(Src, v169) || (unsigned int)MI_IS_PFN_FILE_ONLY(a1) == 1 )
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
      }
      else
      {
        _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_14034EE88);
      }
      if ( !v27 )
      {
        v34 = 2;
        goto LABEL_129;
      }
    }
    else
    {
      if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      {
        ExpReleaseSpinLockSharedFromDpcLevelInstrumented(&dword_14034EE88, retaddr);
      }
      else
      {
        _InterlockedAnd(&dword_14034EE88, 0xBFFFFFFF);
        _InterlockedDecrement(&dword_14034EE88);
      }
      if ( (v183 & 1) != 0 )
      {
        v13 = v167;
        v35 = v8 | 8;
        v15 = v169;
        v16 = 16;
        v19 = v170;
        if ( v26 == 2 )
          v8 = v35 | 4;
        else
          v8 = v35 | 2;
        goto LABEL_109;
      }
      if ( (v8 & 0x20000) != 0 || (*(_BYTE *)(a1 + 35) & 8) == 0 && *(_QWORD *)a1 )
      {
LABEL_107:
        v16 = 16;
        goto LABEL_108;
      }
    }
    v34 = 0;
LABEL_129:
    MiUnlockWorkingSetExclusive(v162, (unsigned __int8)v186);
    v40 = CurrentThread;
    v41 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v41;
    if ( !v41 && ($CD287064E7C9F7953DE243E927CFCB99 *)v40->ApcState.ApcListHead[0].Flink != &v40->152 )
      KiCheckForKernelApcDelivery(v40);
    __writecr8(2uLL);
    v42 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v42 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v42);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
    return v34;
  }
  if ( !*(_QWORD *)(v185 + 16) )
    return 0LL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(a2);
  v8 = 32;
  CurrentThread = KeGetCurrentThread();
  BugCheckParameter1 = 0LL;
  v178 = 0LL;
  v165 = 1;
  v179 = 0LL;
LABEL_109:
  if ( !*(_QWORD *)(v185 + 16) )
  {
    if ( (*(_BYTE *)(a1 + 34) & 0x10) == 0 && (v8 & 0x20008) == 0 )
    {
      v36 = *v19;
      if ( (unsigned __int64)(v19 + 0x12090482600LL) <= 0x7F8 )
        LOBYTE(v36) = MiReadPteShadow(v19, *v19);
      v37 = v162;
      if ( (v36 & 0x42) == 0 && (*(_BYTE *)(a1 + 35) & 8) == 0 )
      {
        v38 = *((_QWORD *)v162 + 23);
        Wsle = MiLocateWsle((ULONG_PTR)Src);
        if ( Wsle >= *(_QWORD *)(v38 + 8) )
        {
          if ( dword_14034F248
            && (*(_BYTE *)v170 & 0x20) != 0
            && (*(_DWORD *)(Wsle * *(unsigned int *)(v38 + 64) + *(_QWORD *)(v38 + 496)) & 0xE00) != 0xE00LL )
          {
            MiLogPageAccess(v162, v170);
          }
          v209 = Wsle;
          v208 = 1;
          if ( !MiFreeWsleList(v162, &v208, 0LL) )
            v172 = 2;
        }
      }
      goto LABEL_556;
    }
LABEL_555:
    v37 = v162;
    goto LABEL_556;
  }
  if ( v13 == -1 )
  {
    v70 = (*(_QWORD *)(a1 + 40) >> 36) & 3LL;
    v71 = MiPageToNode(v15, 0LL, v19);
    v68 = v169;
    v16 = 0;
    v69 = ((_DWORD)v70 << byte_14034EB98) | (v71 << byte_14034EB89);
  }
  else
  {
    v68 = v15;
    v69 = v13 & ~dword_14034EBB8;
  }
  Page = MiGetPage(v175, dword_14034EBB8 & v68 | (unsigned int)v69, v16);
  v173 = Page;
  if ( Page == -1 )
    goto LABEL_555;
  v163 = 48 * Page - 0x58000000000LL;
  if ( v163 == a1 )
  {
    v37 = v162;
    v172 = 1;
    goto LABEL_556;
  }
  v164 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v73 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v73 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v73);
    }
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  if ( (MiFlags & 0x80000) != 0 && (unsigned int)MiGetPagePrivilege(a1, 1LL) == 1 )
    v8 |= 0x40000u;
  if ( ((v8 >> 5) & 1) != 0 )
  {
    if ( (unsigned __int64)Src + 0x200000000000LL > 0xFFFFFFFFFFFLL
      || (*(_BYTE *)(a1 + 34) & 7) != 6
      || (volatile signed __int64 *)(*(_QWORD *)(a1 + 8) | 0x8000000000000000uLL) != v170
      || !(unsigned int)MiSmallVaStillMapsFrame(Src, v169)
      || (*(_BYTE *)(a1 + 35) & 0x10) != 0 )
    {
      goto LABEL_300;
    }
    PteShadow = *v170;
    if ( (unsigned __int64)(v170 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v170, *v170);
    if ( (PteShadow & 0x200) != 0 || (PteShadow & 0x20) == 0 )
    {
LABEL_300:
      v75 = v163;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_301;
    }
  }
  else
  {
    PteShadow = 0LL;
  }
  if ( *(_WORD *)(a1 + 32) != 1
    || ((*(_BYTE *)(a1 + 35) & 8) != 0 || !*(_QWORD *)a1) && (v8 & 0x20026) == 0
    || (*(_BYTE *)(a1 + 34) & 7) != 6
    || v175 != MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF) )
  {
    goto LABEL_300;
  }
  if ( ((v8 >> 5) & 1) == 0 )
  {
    PteShadow = *v80;
    if ( (unsigned __int64)v80 + v79 <= 0x7F8 )
      PteShadow = MiReadPteShadow(v80, *v80);
  }
  v81 = v165;
  if ( (v8 & 0x100) == 0 && (*(_QWORD *)(a1 + 24) & 0x3FFFFFFFFFFFFFFFuLL) > 1 && v165 == 1 )
  {
    if ( (v8 & 0x10) == 0 )
      goto LABEL_300;
    v82 = qword_1403D14F0;
    v83 = KeAbPreAcquire(qword_1403D14F0 + 8, 0LL, 1LL, (__int64)v80);
    if ( !_interlockedbittestandreset((volatile signed __int32 *)(v82 + 8), 0) )
    {
      if ( v83 )
        KeAbPostReleaseEx(v82 + 8);
      goto LABEL_300;
    }
    if ( v83 )
      *(_BYTE *)(v83 + 26) |= 1u;
    v8 |= 0x2008u;
    *(_QWORD *)(v82 + 16) = KeGetCurrentThread();
    v81 = v165;
  }
  if ( (v8 & 0x20000) == 0 )
  {
    if ( (v8 & 0x20) != 0 )
    {
      v10 = PteShadow & 0xFFFFFFFFFFFFFFDFuLL;
      v183 = _InterlockedCompareExchange64(v170, PteShadow & 0xFFFFFFFFFFFFFFDFuLL, PteShadow);
      if ( PteShadow != v183 )
        goto LABEL_300;
      v84 = 0;
      v165 = 2;
      v85 = 2;
LABEL_345:
      KeFlushSingleTb((unsigned __int64)Src, v84, v85);
    }
    else if ( ((v8 & 8) == 0 || (v8 & 0x1000) != 0) && ((PteShadow & 0x42) != 0 || (v8 & 0x40000) != 0) )
    {
      v86 = v170;
      v87 = v170 + 0x12090482600LL;
      if ( (v8 & 0x1000) != 0 )
      {
        v88 = PteShadow & 0xFFFFFFFFFFFFFFBDuLL;
      }
      else
      {
        v8 |= 0x80u;
        v88 = PteShadow & 0xFFFFFFFFFFFFFBFEuLL | 0x400;
      }
      *v170 = v88;
      if ( (unsigned __int64)v87 <= 0x7F8 )
        MiWritePteShadow(v86, v88);
      if ( v162 )
        v89 = MiTbFlushType((__int64)v162);
      else
        v89 = 0;
      v85 = v81;
      v84 = v89;
      goto LABEL_345;
    }
  }
  v90 = 0;
  v91 = v163;
  v92 = *(unsigned __int8 *)(a1 + 34) >> 6;
  LODWORD(v183) = v92;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v163 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v90 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      {
        _mm_pause();
      }
      else
      {
        HvlNotifyLongSpinWait(v90);
        v91 = v163;
      }
    }
    while ( (*(_QWORD *)(v91 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v91 + 24), 0x3FuLL) );
    v92 = v183;
  }
  MiFinalizePageAttribute(v91, v92, 1LL);
  if ( (v8 & 0x20000) != 0 )
  {
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v177 + 192), &LockHandle);
    if ( v177 != MiVaIsPageFileHash(v175, Src) || !(unsigned int)MiSmallVaStillMapsFrame(Src, v169) )
    {
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v75 = v163;
      _InterlockedAnd64((volatile signed __int64 *)(v163 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_301:
      __writecr8((unsigned __int8)v164);
LABEL_302:
      v76 = v75;
      v171 = v75;
LABEL_303:
      if ( v76 )
      {
        v77 = KeGetCurrentIrql();
        __writecr8(2uLL);
        v78 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v76 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v78 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v78);
          }
          while ( (*(_QWORD *)(v76 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v76 + 24), 0x3FuLL) );
        }
        *(_BYTE *)(v76 + 34) = *(_BYTE *)(v76 + 34) & 0xF8 | 5;
        _InterlockedAnd64((volatile signed __int64 *)(v76 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(v77);
      }
      goto LABEL_555;
    }
  }
  MiCopyPfnEntry(v163, a1);
  v94 = v169;
  if ( (*(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL) == v169 )
    *(_QWORD *)(v93 + 40) ^= (v173 ^ *(_QWORD *)(v93 + 40)) & 0xFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(v93 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( (v8 & 0x20020) == 0 )
  {
    if ( (v8 & 0x2000) != 0 )
      goto LABEL_373;
    if ( ((v8 >> 3) & 1) == 0 && !v165 )
    {
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
      goto LABEL_373;
    }
    if ( (v8 & 0xA) == 0xA )
    {
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
      goto LABEL_373;
    }
    if ( (v8 & 0x1000) != 0 )
    {
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
      goto LABEL_373;
    }
    if ( ((v8 >> 3) & 1) != 0 && (v8 & 2) == 0 && !v165 || (v8 & 0x104) == 0x104 )
    {
LABEL_373:
      v95 = (unsigned __int8)v164;
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      LOBYTE(v164) = 17;
      __writecr8(v95);
    }
  }
  v96 = (v8 >> 13) & 1;
  v168 = v96;
  if ( v96 )
  {
    v97 = MiLockProtoPoolPage(Src, v161);
    v177 = v97;
    v98 = v97;
    if ( !v97 )
    {
LABEL_376:
      DemandZeroPte = MiMakeDemandZeroPte(4LL);
      v75 = v163;
      *(_QWORD *)(v163 + 16) = DemandZeroPte;
      goto LABEL_302;
    }
    if ( *(_WORD *)(v97 + 32) > 2u )
    {
      MiUnlockProtoPoolPage(v97, v161[0]);
      goto LABEL_376;
    }
    v100 = v170;
    v101 = v170 + 0x12090482600LL;
    v175 = (__int16 *)(v170 + 0x12090482600LL);
    PteShadow = *v170;
    if ( (unsigned __int64)(v170 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v170, *v170);
    if ( (PteShadow & 0x42) != 0 )
    {
      v102 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v98 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v102 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v102);
            v98 = v177;
          }
        }
        while ( (*(_QWORD *)(v98 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v98 + 24), 0x3FuLL) );
        v101 = (volatile signed __int64 *)v175;
        v100 = v170;
      }
      if ( *(_WORD *)(v98 + 32) > 2u )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v98 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        MiUnlockProtoPoolPage(v98, v161[0]);
        goto LABEL_376;
      }
      *v100 = PteShadow & 0xFFFFFFFFFFFFFFBDuLL;
      if ( (unsigned __int64)v101 <= 0x7F8 )
        MiWritePteShadow(v100, PteShadow & 0xFFFFFFFFFFFFFFBDuLL);
      KeFlushSingleTb((unsigned __int64)Src, 0, 1);
      v103 = v177;
      v104 = MiCaptureDirtyBitToPfn(v177);
      _InterlockedAnd64((volatile signed __int64 *)(v103 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      if ( v104 )
      {
        v105 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v103 + 40)) >> 8) & 0x3FF);
        MiReleasePageFileInfo(v105, v106, 1LL);
      }
      v107 = v163;
      v108 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v163 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v108 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v108);
            v107 = v163;
          }
        }
        while ( (*(_QWORD *)(v107 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v107 + 24), 0x3FuLL) );
      }
      MiCaptureDirtyBitToPfn(v107);
      v93 = v163;
      _InterlockedAnd64((volatile signed __int64 *)(v163 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v96 = v168;
      v94 = v169;
    }
    else
    {
      v93 = v163;
      v94 = v169;
    }
  }
  else
  {
    v161[0] = 17;
    v177 = 0LL;
  }
  if ( !v96 && (v8 & 0x104) != 0x104 && ((v8 & 8) == 0 || (v8 & 2) != 0 || v165) )
  {
    if ( (_BYTE)v164 == 17 )
    {
      v109 = 0;
      v167 = 0;
    }
    else
    {
      v110 = _interlockedbittestandset64((volatile signed __int32 *)(v93 + 24), 0x3FuLL);
      v109 = 4;
      v111 = 0;
      v167 = 4;
      if ( v110 )
      {
        do
        {
          if ( (++v111 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v111);
            v93 = v163;
          }
        }
        while ( (*(_QWORD *)(v93 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v93 + 24), 0x3FuLL) );
        v109 = v167;
      }
    }
    if ( (v8 & 0x40000) != 0 )
    {
      v109 |= 2u;
      v167 = v109;
    }
    v112 = v169;
    MiCopyPage(v173, v169, v185, v109);
    if ( (v167 & 4) != 0 )
      _InterlockedAnd64((volatile signed __int64 *)(v163 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v113 = v163;
    if ( (v8 & 0x20) == 0 && (_BYTE)v164 != 17 )
      *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
    goto LABEL_487;
  }
  PteFromCopyList = MiGetPteFromCopyList(v185, v173, v94);
  v115 = v169;
  v175 = (__int16 *)PteFromCopyList;
  if ( !v96 )
  {
    v193 = Src;
    v116 = 1;
    v196 = v173;
    v197 = &v203;
    v198 = CurrentThread;
    v194 = PteFromCopyList << 25 >> 16;
    v200 = 0LL;
    Process = CurrentThread->ApcState.Process;
    v118 = *(_QWORD *)(a1 + 40) & 0xFFFFFFFFFLL;
    v195 = v169;
    v201 = 0LL;
    v199 = Process;
    v168 = 1;
    if ( v118 == v169 )
    {
      if ( (BYTE3(Process[2].ProfileListHead.Blink) & 8) != 0 )
      {
        v116 = 0;
        goto LABEL_459;
      }
      if ( _interlockedbittestandset((volatile signed __int32 *)(BugCheckParameter1 + 1716), 1u) )
      {
        v116 = 0;
        goto LABEL_459;
      }
      v8 |= 0x8000u;
      if ( v199->DirectoryTableBase >> 12 != v115 )
      {
        HIDWORD(v200) = 1;
        v8 |= 0x100000u;
        v201 = *(_QWORD *)&v199[2].ProcessLock;
      }
      MiUnlockWorkingSetExclusive(v162, (unsigned __int8)CurrentIrql);
      KeSwapDirectoryTableBase(v199, HIDWORD(v200), v192);
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
      {
        ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v162);
      }
      else
      {
        v119 = v162;
        v120 = 0;
        if ( _interlockedbittestandset(v162, 0x1Fu) )
        {
          v121 = ExpWaitForSpinLockExclusiveAndAcquire(v119);
          v119 = v162;
          v120 = v121;
        }
        for ( n = *v119; (*v119 & 0xBFFFFFFF) != 0x80000000; n = *v119 )
        {
          if ( (n & 0x40000000) == 0 )
            _InterlockedCompareExchange(v119, n | 0x40000000, n);
          if ( (++v120 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v120);
            v119 = v162;
          }
        }
        v116 = v168;
      }
      CurrentIrql = (unsigned __int8)CurrentIrql;
      _InterlockedAnd((volatile signed __int32 *)(BugCheckParameter1 + 1716), 0xFFFFFFFD);
    }
    else
    {
      if ( v187 )
      {
        v123 = *(volatile signed __int32 **)(v187 + 48);
        v124 = KeAbPreAcquire((ULONG_PTR)v123, 0LL, 1LL, 1LL);
        if ( _interlockedbittestandset64(v123, 0LL) )
        {
          if ( v124 )
            KeAbPostReleaseEx((ULONG_PTR)v123);
          v187 = 0LL;
          v116 = 0;
          goto LABEL_459;
        }
        if ( v124 )
          *(_BYTE *)(v124 + 26) |= 1u;
        v116 = v168;
        v8 |= 0x4000u;
      }
      MiReplacePageTablePage(v192, v115);
    }
    if ( (int)v200 < 0 )
      v116 = 0;
    goto LABEL_459;
  }
  v116 = MiReplacePageOfProtoPool(Src, v169, v173, (_QWORD *)(PteFromCopyList << 25 >> 16));
LABEL_459:
  v125 = v175;
  v126 = (unsigned __int64)(v175 + 0x48241209800LL);
  *(_QWORD *)v175 = 0LL;
  if ( v126 <= 0x7F8 )
  {
    MiWritePteShadow(v125, 0LL);
    v125 = v175;
  }
  v127 = v125 + 4;
  *v127 = 0LL;
  if ( (unsigned __int64)(v127 + 0x12090482600LL) <= 0x7F8 )
    MiWritePteShadow(v127, 0LL);
  if ( !v116 )
  {
    if ( (v8 & 0x2000) != 0 )
      MiUnlockProtoPoolPage(v177, v161[0]);
    goto LABEL_376;
  }
  v128 = 0;
  v168 = (v8 >> 13) & 1;
  if ( v168 )
  {
    v113 = v163;
    *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v113 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v128 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v128);
          v113 = v163;
        }
      }
      while ( (*(_QWORD *)(v113 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v113 + 24), 0x3FuLL) );
    }
  }
  else
  {
    v175 = (__int16 *)KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v128 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v128);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
    *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
    *(_QWORD *)(a1 + 24) = *(_QWORD *)(a1 + 24) & 0xC000000000000000uLL | 1;
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8((unsigned __int8)v175);
    v113 = v163;
    LOBYTE(v164) = 17;
  }
  v112 = v169;
LABEL_487:
  v129 = BugCheckParameter1;
  v130 = v173;
  if ( (v8 & 2) != 0 && BugCheckParameter1 && *(_QWORD *)(BugCheckParameter1 + 864) == v112 )
    *(_QWORD *)(BugCheckParameter1 + 864) = v173;
  v131 = 0xFFFFFFFFFLL;
  v132 = (v130 & 0xFFFFFFFFFLL) << 12;
  v133 = v132 | PteShadow & 0xFFFF000000000FFFuLL;
  v134 = v8 >> 5;
  LODWORD(v183) = v8 >> 5;
  if ( (v8 & 0x20) != 0 )
  {
    v135 = 0;
    v136 = v132 | v10 & 0xFFFF000000000FFFuLL | 0x20;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v113 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v135 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v135);
          v113 = v163;
        }
      }
      while ( (*(_QWORD *)(v113 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v113 + 24), 0x3FuLL) );
    }
    v137 = _InterlockedCompareExchange64(v170, v136, v10);
    _InterlockedAnd64((volatile signed __int64 *)(v113 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v137 != v10 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8((unsigned __int8)v164);
      v138 = MiMakeDemandZeroPte(4LL);
      *(_QWORD *)(v139 + 16) = v138;
      v76 = v139;
      v171 = v139;
      goto LABEL_303;
    }
    LOBYTE(v134) = v183;
    *(_BYTE *)(a1 + 34) = *(_BYTE *)(a1 + 34) & 0xF8 | 5;
  }
  else if ( (v8 & 0x8000) != 0 )
  {
    if ( (v8 & 0x100000) != 0 )
    {
      v140 = *(_QWORD *)(v129 + 1520);
      if ( !v140 )
        goto LABEL_508;
      v141 = (unsigned __int64 *)(((v140 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
      v142 = *v141;
      if ( (unsigned __int64)(v141 + 0x12090482600LL) <= 0x7F8 )
        v142 = MiReadPteShadow(v141, *v141);
      if ( (v131 & (v142 >> 12)) != v130 )
      {
LABEL_508:
        v171 = a1;
        v172 = 2;
        v76 = a1;
        goto LABEL_303;
      }
    }
  }
  else
  {
    if ( (v8 & 0x80u) == 0 && !v168 && (((unsigned __int8)v8 | (unsigned __int8)v134) & 0x10) != 0 )
    {
      v143 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v113 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v143 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          {
            _mm_pause();
          }
          else
          {
            HvlNotifyLongSpinWait(v143);
            v113 = v163;
          }
        }
        while ( (*(_QWORD *)(v113 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v113 + 24), 0x3FuLL) );
      }
    }
    v144 = v170;
    v145 = v170 + 0x12090482600LL;
    *v170 = v133;
    if ( (unsigned __int64)v145 <= 0x7F8 )
      MiWritePteShadow(v144, v133);
  }
  if ( (v8 & 0xA0) != 0 )
  {
    v147 = Src;
    v148 = v165;
  }
  else
  {
    v146 = MiTbFlushType((__int64)v162);
    v147 = Src;
    v148 = v165;
    KeFlushSingleTb((unsigned __int64)Src, v146, v165);
  }
  if ( v168 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v163 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    MiUnlockProtoPoolPage(v177, v161[0]);
    v149 = 17;
    goto LABEL_534;
  }
  if ( (((unsigned __int8)v8 | (unsigned __int8)v134) & 0x10) != 0 )
  {
    v37 = v162;
    if ( (v8 & 0x80u) == 0 )
    {
      if ( v162 )
        v150 = MiTbFlushType((__int64)v162);
      else
        v150 = 0;
      KeFlushSingleTb((unsigned __int64)v147, v150, v148);
      _InterlockedAnd64((volatile signed __int64 *)(v163 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    }
    v149 = v164;
  }
  else
  {
    v149 = v164;
LABEL_534:
    v37 = v162;
  }
  if ( ((*(_QWORD *)(a1 + 40) >> 54) & 7) == 3 )
  {
    v151 = 8LL;
    if ( v149 != 17 )
      v151 = 12LL;
    MiClearPfnImageVerified(a1, v151);
  }
  if ( (v8 & 0x20000) != 0 )
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v149 == 17 )
  {
    v152 = KeGetCurrentIrql();
    __writecr8(2uLL);
    v153 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v153 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v153);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
    v149 = v152;
  }
  *(_BYTE *)(a1 + 34) &= 0xC7u;
  *(_QWORD *)(a1 + 40) &= 0xFC3FFFFFFFFFFFFFuLL;
  *(_BYTE *)(a1 + 35) &= ~0x20u;
  *(_QWORD *)(a1 + 24) &= 0xC000000000000000uLL;
  *(_WORD *)(a1 + 32) = 0;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  __writecr8(v149);
  v172 = 1;
LABEL_556:
  if ( !v165 )
  {
LABEL_257:
    MiFlushTbList(&v203);
    MiUnlockWorkingSetExclusive(v37, (unsigned __int8)CurrentIrql);
    if ( v178 )
      ExReleaseAutoExpandPushLockExclusive(v178 + 8, 0LL);
    v64 = CurrentThread;
    v65 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v65;
    if ( v65 )
      goto LABEL_262;
    goto LABEL_260;
  }
  if ( (v8 & 0x400) != 0 )
  {
    MiUnlockWorkingSetExclusive(v37, (unsigned __int8)v186);
    if ( (v8 & 0x4000) != 0 )
    {
      v154 = *(volatile signed __int64 **)(v187 + 48);
      if ( (_InterlockedExchangeAdd64(v154, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock(v154);
      KeAbPostRelease((ULONG_PTR)v154);
    }
    v155 = CurrentThread;
    v156 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v156;
    if ( !v156 && ($CD287064E7C9F7953DE243E927CFCB99 *)v155->ApcState.ApcListHead[0].Flink != &v155->152 )
      KiCheckForKernelApcDelivery(v155);
    MiDetachFromOwningSession(v179, v202);
    goto LABEL_262;
  }
  if ( v37 )
    MiUnlockWorkingSetExclusive(v37, (unsigned __int8)v186);
  if ( (v8 & 0x2000) != 0 )
  {
    v157 = qword_1403D14F0;
    *(_QWORD *)(qword_1403D14F0 + 16) = 0LL;
    v158 = _InterlockedCompareExchange((volatile signed __int32 *)(v157 + 8), 1, 0);
    if ( v158 )
      ExpReleaseFastMutexContended(v157 + 8, v158);
    KeAbPostRelease(v157 + 8);
  }
  if ( v37 )
  {
    v64 = CurrentThread;
    v159 = CurrentThread->SpecialApcDisable + 1;
    CurrentThread->SpecialApcDisable = v159;
    if ( !v159 )
    {
LABEL_260:
      if ( ($CD287064E7C9F7953DE243E927CFCB99 *)v64->ApcState.ApcListHead[0].Flink != &v64->152 )
        KiCheckForKernelApcDelivery(v64);
    }
  }
LABEL_262:
  if ( (v8 & 0x80000) != 0 )
  {
    KiUnstackDetachProcess(v202, 1LL);
    MiAttachThreadDone(v37);
  }
  if ( v171 )
    MiReleaseFreshPage(v171);
  __writecr8(2uLL);
  v66 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v66 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v66);
    }
    while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
  }
  v160 = v172;
  if ( v172 == 1 )
  {
    if ( v191 )
      *v191 = v173;
  }
  else
  {
    if ( (*(_BYTE *)(a1 + 34) & 7) == 6 )
    {
      if ( v172 != 2 )
        return v160;
    }
    else
    {
      v160 = 2;
    }
    if ( (*(_QWORD *)(a1 + 24) & 0x4000000000000000LL) != 0 )
      return 0;
  }
  return v160;
}
