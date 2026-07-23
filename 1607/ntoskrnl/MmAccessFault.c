/*
 * XREFs of MmAccessFault @ 0x14003E320
 * Callers:
 *     MiSetReadOnlyOnSectionView @ 0x14000C9C0 (MiSetReadOnlyOnSectionView.c)
 *     MiLockCode @ 0x140015170 (MiLockCode.c)
 *     MiMakeSystemAddressValid @ 0x14001592C (MiMakeSystemAddressValid.c)
 *     MiCommitExistingVad @ 0x14002A7A0 (MiCommitExistingVad.c)
 *     MiProbeLeafFrame @ 0x14002F940 (MiProbeLeafFrame.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MmCopyToCachedPage @ 0x140037480 (MmCopyToCachedPage.c)
 *     MiSetProtectionOnSection @ 0x140043770 (MiSetProtectionOnSection.c)
 *     MiDecommitPages @ 0x1400448D0 (MiDecommitPages.c)
 *     MiWalkEntireImage @ 0x14004C0F0 (MiWalkEntireImage.c)
 *     MiCheckProtoPtePageState @ 0x14004E530 (MiCheckProtoPtePageState.c)
 *     MiDeleteSubsectionPages @ 0x1400617F0 (MiDeleteSubsectionPages.c)
 *     MiMakeDriverPagesPrivate @ 0x140087988 (MiMakeDriverPagesPrivate.c)
 *     MiInPageSingleKernelStack @ 0x140094924 (MiInPageSingleKernelStack.c)
 *     MiReleaseOutSwapReservations @ 0x1400B4EE4 (MiReleaseOutSwapReservations.c)
 *     MiMakeProtoAddressValid @ 0x1400B573C (MiMakeProtoAddressValid.c)
 *     MiWalkVaRange @ 0x1400B9514 (MiWalkVaRange.c)
 *     MiPrefetchVirtualMemory @ 0x1400BDB30 (MiPrefetchVirtualMemory.c)
 *     MiPfPutPagesInTransition @ 0x1400E2FA0 (MiPfPutPagesInTransition.c)
 *     MiProtectPool @ 0x1400E8270 (MiProtectPool.c)
 *     MiMakeImageReadOnly @ 0x1400FA474 (MiMakeImageReadOnly.c)
 *     MiSectionCreated @ 0x1400FB048 (MiSectionCreated.c)
 *     MiInitializeImageProtos @ 0x1400FB5BC (MiInitializeImageProtos.c)
 *     MiRemoveMappedPtes @ 0x1400FE0A0 (MiRemoveMappedPtes.c)
 *     MiMakeSystemAddressValidSystemWs @ 0x140109FC8 (MiMakeSystemAddressValidSystemWs.c)
 *     MiInsertViewOfPhysicalSection @ 0x140146DB8 (MiInsertViewOfPhysicalSection.c)
 *     KiPageFault @ 0x14016C840 (KiPageFault.c)
 *     MiPurgeImageSection @ 0x1401EA6D4 (MiPurgeImageSection.c)
 *     MiBuildFileOnlyProtos @ 0x1401ECFD8 (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x1401ED424 (MiEliminateStaleExtents.c)
 *     MiDeletePerSessionProtos @ 0x1401F4CF8 (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x1401F4FAC (MiInitializeProtoPfn.c)
 *     ExpSvmServicePageFault @ 0x14022F430 (ExpSvmServicePageFault.c)
 *     MmVirtualAccessFault @ 0x14065C018 (MmVirtualAccessFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLock @ 0x1400122D0 (KeReleaseInStackQueuedSpinLock.c)
 *     MiLocateVadEvent @ 0x1400150E4 (MiLocateVadEvent.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x14001B8C0 (KeAcquireInStackQueuedSpinLock.c)
 *     MiSystemFault @ 0x14001BB70 (MiSystemFault.c)
 *     MiGetAnyMultiplexedVm @ 0x14001CBDC (MiGetAnyMultiplexedVm.c)
 *     MiCheckVirtualAddress @ 0x14001E978 (MiCheckVirtualAddress.c)
 *     MiLocateAddress @ 0x14001EC10 (MiLocateAddress.c)
 *     MiDecrementSubsections @ 0x1400222F4 (MiDecrementSubsections.c)
 *     MiIssueHardFault @ 0x1400244B0 (MiIssueHardFault.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x140026AF0 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     MiCheckControlArea @ 0x140027A60 (MiCheckControlArea.c)
 *     KeResetEvent @ 0x14002E1B0 (KeResetEvent.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14002E560 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14002EA80 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUpdatePageTableUseCount @ 0x140036FD0 (MiUpdatePageTableUseCount.c)
 *     MiResolveDemandZeroFault @ 0x14003A610 (MiResolveDemandZeroFault.c)
 *     MiResolvePrivateZeroFault @ 0x14003ADC0 (MiResolvePrivateZeroFault.c)
 *     MiResolvePageTablePage @ 0x14003F890 (MiResolvePageTablePage.c)
 *     MiDispatchFault @ 0x14003FF40 (MiDispatchFault.c)
 *     MiResolveSharedZeroFault @ 0x140041B80 (MiResolveSharedZeroFault.c)
 *     MiGetProtoPteAddress @ 0x140041FE0 (MiGetProtoPteAddress.c)
 *     MiCheckVadSequential @ 0x140042260 (MiCheckVadSequential.c)
 *     KeWaitForSingleObject @ 0x14005C400 (KeWaitForSingleObject.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiPageAvailable @ 0x140089B28 (MiPageAvailable.c)
 *     FsRtlIsTotalDeviceFailure @ 0x14008E8B4 (FsRtlIsTotalDeviceFailure.c)
 *     MiProcessWsInSwapFault @ 0x140094D30 (MiProcessWsInSwapFault.c)
 *     MiProtoFault @ 0x1400A2790 (MiProtoFault.c)
 *     MiRetainSubsection @ 0x1400A2ABC (MiRetainSubsection.c)
 *     MiAllowGuardFault @ 0x1400A3950 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x1400A39A4 (KeInvalidAccessAllowed.c)
 *     MiDeprioritizeVad @ 0x1400AB4C8 (MiDeprioritizeVad.c)
 *     MiDereferenceControlArea @ 0x1400B32FC (MiDereferenceControlArea.c)
 *     MiLockTransitionLeafPage @ 0x1400B6E48 (MiLockTransitionLeafPage.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400BB9C0 (MI_PROTO_FORMAT_COMBINED.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiCopyOnWriteEx @ 0x1400E05D0 (MiCopyOnWriteEx.c)
 *     MiValidFault @ 0x1400E40F0 (MiValidFault.c)
 *     MiCheckBadSystemProcessAccess @ 0x14010ABB8 (MiCheckBadSystemProcessAccess.c)
 *     MiWaitForRotateToComplete @ 0x14010F2A0 (MiWaitForRotateToComplete.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401BAD4C (HvlNotifyLongSpinWait.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1401DF850 (MiIsVadEligibleForCommitRelease.c)
 *     MiPrefetchJumpVad @ 0x1401E85C4 (MiPrefetchJumpVad.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MiLargePageFault @ 0x1401EF658 (MiLargePageFault.c)
 *     MiRaisedIrqlFault @ 0x1401EF8EC (MiRaisedIrqlFault.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiIsPrototypePteVadLookup @ 0x1401F2534 (MiIsPrototypePteVadLookup.c)
 *     MiMakeDemandZeroPte @ 0x1401F2560 (MiMakeDemandZeroPte.c)
 *     MiMakePrototypePteVadLookup @ 0x1401F2594 (MiMakePrototypePteVadLookup.c)
 *     MiPreUnlockWorkingSetExclusive @ 0x1401F2898 (MiPreUnlockWorkingSetExclusive.c)
 *     MiWaitForFreePage @ 0x1401F4008 (MiWaitForFreePage.c)
 *     MiReturnSubsectionCharges @ 0x1401F513C (MiReturnSubsectionCharges.c)
 *     EtwTracePageFault @ 0x140225D14 (EtwTracePageFault.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x14022DB5C (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented @ 0x14022DCC8 (ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1404B0850 (MiCheckForUserStackOverflow.c)
 *     MiAllocateFileExtents @ 0x14065A430 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MmAccessFault(ULONG_PTR BugCheckParameter2, signed __int64 a2, unsigned __int8 a3, ULONG_PTR a4)
{
  ULONG_PTR v4; // r15
  ULONG_PTR v6; // r13
  ULONG_PTR v7; // rdi
  int v9; // esi
  __int64 v10; // rcx
  int v11; // r8d
  ULONG_PTR *v12; // rdx
  unsigned __int64 v13; // rcx
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v15; // r9
  unsigned __int64 PrototypePteDirect; // r12
  _KPROCESS *Process; // r11
  unsigned int v18; // eax
  unsigned int FileExtents; // ebx
  char v20; // r14
  int v21; // r9d
  __int64 v22; // rdi
  char v23; // al
  LONG *p_Blink; // r14
  bool v25; // cc
  unsigned __int16 v26; // ax
  int *v27; // rax
  unsigned __int16 v28; // ax
  int *v29; // rbx
  unsigned __int64 v30; // r8
  _QWORD *v31; // rcx
  unsigned __int64 v32; // rdx
  LARGE_INTEGER *v33; // rdi
  LONG *v34; // rbx
  __int64 CurrentIrql; // rcx
  unsigned int v36; // edi
  signed __int32 v37; // edx
  bool v38; // zf
  signed __int32 v39; // eax
  unsigned __int8 v40; // r10
  void *v41; // r11
  char v42; // al
  void *Address; // rax
  char v44; // al
  _QWORD *v45; // r14
  __int64 v46; // rdx
  __int64 v47; // r8
  unsigned int valid; // eax
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  LONG *v52; // rcx
  __int64 v53; // rsi
  __int64 DemandZeroPte; // rax
  unsigned __int64 v55; // r9
  unsigned __int64 v56; // r11
  unsigned __int64 v57; // r10
  int v58; // edi
  _KPROCESS *v59; // r8
  unsigned __int64 v60; // r14
  unsigned __int64 v61; // rdx
  unsigned int *v62; // rbx
  __int64 v63; // rax
  unsigned __int64 v64; // rdi
  __int64 v65; // rax
  unsigned int v66; // esi
  int v67; // r8d
  __int64 *VadEvent; // rax
  __int64 ProtoPteAddress; // rax
  unsigned __int64 v70; // r8
  __int64 v71; // rdx
  __int64 v72; // r8
  __int64 v73; // r9
  __int64 v74; // rcx
  __int64 PrototypePteVadLookup; // rax
  ULONG_PTR v76; // rcx
  __int64 v77; // rdx
  __int64 v78; // rcx
  int v79; // r14d
  __int64 v80; // r9
  __int64 v81; // r9
  __int64 v82; // r10
  char v83; // r10
  char *AnyMultiplexedVm; // rsi
  _BYTE *v85; // rax
  __int64 v86; // rax
  __int64 v87; // r9
  __int64 v88; // rdi
  __int64 v89; // rdx
  __int64 v90; // rax
  unsigned __int64 v91; // rdx
  __int64 v92; // r9
  unsigned __int64 v93; // rbx
  __int64 v94; // rcx
  __int64 v95; // r9
  unsigned __int64 v96; // rbx
  __int64 v97; // rcx
  __int64 v98; // rax
  int v99; // r8d
  char v100; // r14
  _QWORD *v101; // rsi
  __int64 v102; // rax
  ULONG_PTR v103; // r14
  __int64 v104; // rdi
  unsigned int v105; // eax
  struct _KTHREAD *v106; // rsi
  unsigned __int16 v107; // ax
  int *v108; // rdx
  bool v109; // cf
  int v110; // eax
  __int64 v111; // rdi
  __int64 v112; // rsi
  KIRQL v113; // al
  __int64 v114; // r8
  __int64 v115; // r9
  int v116; // ecx
  KIRQL v117; // r12
  __int64 v118; // rdx
  __int64 v119; // r8
  __int64 v120; // r9
  __int64 v121; // rax
  __int64 v122; // rcx
  int Timeout; // [rsp+28h] [rbp-E0h]
  int v124; // [rsp+30h] [rbp-D8h]
  int v125; // [rsp+30h] [rbp-D8h]
  unsigned __int8 v126; // [rsp+58h] [rbp-B0h]
  unsigned __int8 v127; // [rsp+59h] [rbp-AFh] BYREF
  char *v128; // [rsp+60h] [rbp-A8h]
  int v129; // [rsp+68h] [rbp-A0h]
  int v130; // [rsp+6Ch] [rbp-9Ch]
  ULONG_PTR BugCheckParameter2a; // [rsp+70h] [rbp-98h]
  PVOID P; // [rsp+78h] [rbp-90h] BYREF
  unsigned int v133; // [rsp+80h] [rbp-88h]
  _KPROCESS *v134; // [rsp+88h] [rbp-80h]
  __int64 v135; // [rsp+90h] [rbp-78h]
  _KPROCESS *v136; // [rsp+98h] [rbp-70h]
  ULONG_PTR v137; // [rsp+A0h] [rbp-68h] BYREF
  int v138[2]; // [rsp+A8h] [rbp-60h]
  struct _KTHREAD *i; // [rsp+B0h] [rbp-58h]
  ULONG_PTR BugCheckParameter3; // [rsp+B8h] [rbp-50h]
  unsigned __int64 v141; // [rsp+C0h] [rbp-48h]
  __int64 v142; // [rsp+C8h] [rbp-40h]
  PVOID v143; // [rsp+D0h] [rbp-38h] BYREF
  ULONG_PTR v144; // [rsp+D8h] [rbp-30h]
  __int64 v145; // [rsp+E0h] [rbp-28h] BYREF
  ULONG_PTR v146; // [rsp+E8h] [rbp-20h]
  __int16 v147; // [rsp+F0h] [rbp-18h]
  int v148; // [rsp+F8h] [rbp-10h] BYREF
  ULONG_PTR v149; // [rsp+100h] [rbp-8h]
  ULONG_PTR v150; // [rsp+108h] [rbp+0h]
  unsigned __int64 v151; // [rsp+110h] [rbp+8h]
  int v152; // [rsp+118h] [rbp+10h]
  int v153; // [rsp+11Ch] [rbp+14h]
  char v154; // [rsp+120h] [rbp+18h]
  int v155; // [rsp+124h] [rbp+1Ch]
  unsigned __int16 *v156; // [rsp+128h] [rbp+20h]
  unsigned __int64 v157; // [rsp+130h] [rbp+28h]
  unsigned int *v158; // [rsp+138h] [rbp+30h]
  int v159; // [rsp+148h] [rbp+40h] BYREF
  char v160[8]; // [rsp+150h] [rbp+48h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+158h] [rbp+50h] BYREF
  _QWORD v162[3]; // [rsp+170h] [rbp+68h] BYREF
  ULONG_PTR v163; // [rsp+188h] [rbp+80h] BYREF
  unsigned __int64 v164; // [rsp+190h] [rbp+88h]
  unsigned __int64 v165; // [rsp+198h] [rbp+90h]
  __int64 v166; // [rsp+1A0h] [rbp+98h]
  void *retaddr; // [rsp+200h] [rbp+F8h]

  v126 = a3;
  BugCheckParameter2a = BugCheckParameter2;
  v4 = a4;
  v6 = a2;
  v7 = BugCheckParameter2;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, a2, BugCheckParameter2, a4);
  if ( (unsigned __int64)((a2 >> 47) + 1) > 1 )
  {
    if ( a3 != 1 && ((a4 & 1) == 0 || *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    {
      if ( (a4 & 1) == 0 )
        goto LABEL_9;
      if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
      {
        if ( (a4 & 1) != 0 )
          goto LABEL_343;
LABEL_9:
        if ( (unsigned __int8)KeInvalidAccessAllowed(a4) != 1 )
LABEL_343:
          KeBugCheckEx(0x50u, v6, v7, a4, 4uLL);
      }
    }
    return 3221225477LL;
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( a3 != 1 )
      KeBugCheckEx(0x50u, a2, BugCheckParameter2, a4, 0x65uLL);
    return 3221225477LL;
  }
  v9 = 3;
  v10 = ((unsigned __int64)a2 >> 9) & 0x7FFFFFFFF8LL;
  v11 = 3;
  v12 = &v163;
  BugCheckParameter3 = v10 - 0x98000000000LL;
  v163 = v10 - 0x98000000000LL;
  do
  {
    v13 = *v12--;
    *v12 = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v11;
  }
  while ( v11 );
  if ( KeGetCurrentIrql() > 1u )
    return MiRaisedIrqlFault(v7, v6, a4);
  CurrentThread = KeGetCurrentThread();
  v15 = v6;
  LOBYTE(v130) = 0;
  PrototypePteDirect = 0LL;
  v137 = 0LL;
  Process = CurrentThread->ApcState.Process;
  v136 = Process;
  v144 = 0LL;
  v133 = 4096;
  for ( i = CurrentThread; v15 >= 0xFFFFF68000000000uLL; v15 = (__int64)(v15 << 25) >> 16 )
  {
    if ( v15 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  *(_QWORD *)v138 = 2LL;
  if ( v6 >= 0xFFFF800000000000uLL )
  {
    if ( a3 == 1 )
      return 3221225477LL;
    if ( v6 >= 0xFFFFF68000000000uLL && v6 <= 0xFFFFF6FFFFFFFFFFuLL && v15 >= qword_140327FD0 && v15 <= qword_140326D38 )
    {
      v7 |= 2uLL;
      BugCheckParameter2a = v7;
    }
    v145 = 0LL;
    v146 = 0LL;
    v147 = 17;
    v18 = MiSystemFault(v7, v6, v4, v15, v162, (__int64)&v145);
    FileExtents = v18;
    v20 = HIBYTE(v147);
    PrototypePteDirect = v146;
    v128 = (char *)v145;
    v127 = v147;
    v130 = HIBYTE(v147);
    if ( v18 != 192 )
    {
      if ( v18 != -1073741802 )
        goto LABEL_316;
      v21 = 0;
      P = 0LL;
      goto LABEL_232;
    }
    Process = v136;
  }
  v22 = (__int64)&Process[1].IdealNode[12];
  v23 = (__int64)Process[2].Header.WaitListHead.Flink & 7;
  v128 = (char *)&Process[1].IdealNode[12];
  p_Blink = &dword_140327CC0;
  if ( v23 != 2 )
    p_Blink = (LONG *)&Process[2].Header.WaitListHead.Blink;
  v25 = LODWORD(Process[2].Affinity.Bitmap[4]) <= 0x10;
  P = 0LL;
  if ( v25
    || Process == PsInitialSystemProcess
    || ((v26 = WORD2(Process[1].InstrumentationCallback), v26 != 1023)
      ? (v27 = *(int **)(qword_140327038 + 8LL * v26))
      : (v27 = MiSystemPartition),
        v27[266] && *((_KPROCESS **)v27 + 148) == Process) )
  {
    if ( !dword_1403276A8 )
      goto LABEL_61;
    goto LABEL_60;
  }
  v28 = WORD2(Process[1].InstrumentationCallback);
  if ( v28 == 1023 )
    v29 = MiSystemPartition;
  else
    v29 = *(int **)(qword_140327038 + 8LL * v28);
  v30 = *((_QWORD *)v29 + 904);
  if ( (unsigned __int16)KeNumberNodes <= 1u )
    goto LABEL_48;
  v31 = (_QWORD *)(*((_QWORD *)v29 + 6) + 2184LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]);
  v32 = 16 * (v31[4] + v31[5] + 32LL * (v31[2] + v31[3] + ((*v31 + v31[1]) << 9))) + v31[251] + v31[252];
  if ( v32 >= 0x420 )
    goto LABEL_57;
  if ( v30 >= v32 >> 4 )
LABEL_48:
    v32 = *((_QWORD *)v29 + 808);
  if ( v32 >= 0x420 || v30 < 0x4000 && v30 < v32 >> 4 )
  {
LABEL_57:
    if ( !dword_1403276A8 )
      goto LABEL_61;
LABEL_60:
    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
    goto LABEL_61;
  }
  LODWORD(Process[2].Affinity.Bitmap[4]) = 0;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v29 + 544, &LockHandle);
  if ( *((_QWORD *)v29 + 808) < 0x420uLL )
  {
    v33 = (LARGE_INTEGER *)&MiHalfSecond;
    if ( v136->BasePriority >= 9 )
      v33 = (LARGE_INTEGER *)&Mi30Milliseconds;
    KeResetEvent((PRKEVENT)(v29 + 1106));
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    KeWaitForSingleObject(v29 + 1106, WrFreePage, 0, 0, v33);
    v22 = (__int64)v128;
  }
  else
  {
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
LABEL_61:
  v34 = &dword_140327CC0;
  if ( (*(_BYTE *)(v22 + 184) & 7) != 2 )
    v34 = (LONG *)(v22 + 192);
  CurrentIrql = KeGetCurrentIrql();
  v135 = CurrentIrql;
  __writecr8(*(unsigned __int64 *)v138);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v34, (unsigned __int8)CurrentIrql);
  }
  else
  {
    v36 = 0;
    if ( _interlockedbittestandset(v34, 0x1Fu) )
      v36 = ExpWaitForSpinLockExclusiveAndAcquire(v34, CurrentIrql);
    v37 = *v34;
    while ( (v37 & 0xBFFFFFFF) != 0x80000000 )
    {
      if ( (v37 & 0x40000000) == 0 )
      {
        v39 = _InterlockedCompareExchange(v34, v37 | 0x40000000, v37);
        v38 = v37 == v39;
        v37 = v39;
        if ( !v38 )
          continue;
      }
      if ( (++v36 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v36);
      v37 = *v34;
    }
    v22 = (__int64)v128;
  }
  v40 = v135;
  v41 = 0LL;
  v34[1] = 0;
  v42 = *(_BYTE *)(v22 + 187) & 0xC0;
  v127 = v40;
  if ( v42 == -64 && *((_QWORD *)p_Blink + 4) && v6 < 0xFFFF800000000000uLL )
  {
    Address = (void *)MiLocateAddress(v6);
    P = Address;
    if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
    {
LABEL_88:
      FileExtents = -1073741819;
      goto LABEL_98;
    }
    P = v41;
  }
  if ( (void *)v136[1].Affinity.Bitmap[9] != v41 )
  {
    if ( (unsigned int)MiWaitForRotateToComplete(v6, v40) == 1 )
    {
      FileExtents = 0;
      goto LABEL_98;
    }
    v40 = v135;
  }
  if ( v6 - 0x7FFFFFFF0000LL <= 0xFFFF00000000FFFFuLL )
    goto LABEL_88;
  LODWORD(v7) = BugCheckParameter2a;
  LOBYTE(v124) = v126;
  LOBYTE(Timeout) = v40;
  FileExtents = MiResolvePageTablePage(BugCheckParameter2a, v6, v162, v4, Timeout, v124);
  if ( FileExtents != -1073741802 )
  {
LABEL_97:
    v22 = (__int64)v128;
    goto LABEL_98;
  }
  v164 = ((v6 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL;
  v165 = ((v164 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v166 = ((v165 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  while ( 1 )
  {
    v44 = MI_READ_PTE_LOCK_FREE(*(&v164 + (unsigned int)--v9));
    if ( (v44 & 1) == 0 )
      goto LABEL_94;
    if ( v44 < 0 )
      break;
    if ( !v9 )
      goto LABEL_94;
  }
  if ( v9 != -1 )
  {
    valid = MiLargePageFault(BugCheckParameter2a, v6, v4, v126, (__int64)v128);
    goto LABEL_96;
  }
LABEL_94:
  v45 = (_QWORD *)v163;
  v142 = MI_READ_PTE_LOCK_FREE(v163);
  if ( (v142 & 1) != 0 )
  {
    valid = MiValidFault(BugCheckParameter2a, v6, v135, v126);
LABEL_96:
    FileExtents = valid;
    goto LABEL_97;
  }
  LODWORD(v53) = 4;
  DemandZeroPte = MiMakeDemandZeroPte(4LL, v46, v47, v142);
  if ( v55 == DemandZeroPte )
  {
    v22 = (__int64)v128;
    FileExtents = MiResolveDemandZeroFault(
                    v6,
                    (unsigned __int64)v45,
                    0LL,
                    (__int64)v128,
                    v4,
                    BugCheckParameter2a & 2,
                    v135);
LABEL_98:
    if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
      MiProcessWsInSwapFault(v162);
    MiPreUnlockWorkingSetExclusive(v22, v127);
    v52 = &dword_140327CC0;
    if ( (*(_BYTE *)(v22 + 184) & 7) != 2 )
      v52 = (LONG *)(v22 + 192);
    if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
      ExpReleaseSpinLockExclusiveFromDpcLevelInstrumented(v52, retaddr);
    else
      *v52 = 0;
    __writecr8(v127);
    goto LABEL_293;
  }
  v57 = 0LL;
  v129 = 0;
  if ( v55 )
  {
    v53 = (v55 >> 5) & 0x1F;
    if ( (v55 & 0x400) != 0 )
    {
      if ( !(unsigned int)MiIsPrototypePteVadLookup(v55) )
      {
        PrototypePteDirect = MiGetPrototypePteDirect(v80);
        if ( (v81 & 8) != 0 )
        {
          LODWORD(v53) = 1;
          goto LABEL_216;
        }
        if ( !(unsigned __int8)MI_PROTO_FORMAT_COMBINED(v81) && v136[1].Affinity.Bitmap[12] == v82 )
        {
          v21 = v82;
          goto LABEL_231;
        }
        v129 = 1;
LABEL_230:
        v21 = v129;
LABEL_231:
        v20 = v130;
LABEL_232:
        v83 = v126;
        goto LABEL_233;
      }
      PrototypePteDirect = MiCheckVirtualAddress(v6, &v159, (__int64 *)&P);
      if ( !PrototypePteDirect )
      {
        FileExtents = -1073741819;
        goto LABEL_97;
      }
      P = 0LL;
      v56 = 0xFFFFF68000000000uLL;
    }
LABEL_215:
    if ( (_DWORD)v53 != 256 )
    {
LABEL_216:
      if ( v126 == 1 && ((unsigned __int64)v45 > v56 + 0x3FFFFFFF78LL || (unsigned __int64)v45 < v56) )
      {
        FileExtents = -1073741819;
        goto LABEL_264;
      }
      v86 = MI_READ_PTE_LOCK_FREE(v45);
      v141 = v86;
      v88 = v86;
      if ( (v86 & 1) != 0 )
      {
        if ( v87 && (v86 & 0x800) == 0 && (v86 & 0x200) == 0 )
        {
          FileExtents = -1073741819;
          goto LABEL_264;
        }
      }
      else
      {
        if ( MiReadWrite[v53 & 7] - (v87 != 0) < 10 )
        {
          FileExtents = -1073741819;
LABEL_264:
          v22 = (__int64)v128;
          MiUnlockWorkingSetExclusive((__int64)v128, (unsigned __int8)v135);
          if ( FileExtents == -2147483647 )
            FileExtents = MiCheckForUserStackOverflow(v6);
          goto LABEL_293;
        }
        if ( (v53 & 0xFFFFFFF8) == 0x10 && ((v4 & 1) == 0 || *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
        {
          if ( (unsigned int)MiAllowGuardFault(v4) )
          {
            if ( (v88 & 0x800) == 0 || (v88 & 0x400) != 0 )
            {
              v96 = v88 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v53 & 0xF));
              v141 = v96;
              *v45 = v96;
              if ( (unsigned int)MiPteInShadowRange(v45, v89) )
                MiWritePteShadow(v97, v96);
            }
            else
            {
              MiLockTransitionLeafPage((ULONG_PTR)v45);
              v90 = MI_READ_PTE_LOCK_FREE(v45);
              if ( v92 )
              {
                v91 = *(_QWORD *)(v92 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v53 & 0xF));
                *(_QWORD *)(v92 + 16) = v91;
              }
              v93 = v90 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v53 & 0xF));
              v141 = v93;
              *v45 = v93;
              if ( (unsigned int)MiPteInShadowRange(v45, v91) )
                MiWritePteShadow(v94, v93);
              if ( v95 )
                _InterlockedAnd64((volatile signed __int64 *)(v95 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            }
            FileExtents = -2147483647;
          }
          else
          {
            FileExtents = -1073741819;
          }
          goto LABEL_264;
        }
      }
      LODWORD(v7) = BugCheckParameter2a;
      v21 = v129;
      v20 = v130;
LABEL_233:
      AnyMultiplexedVm = v128;
      FileExtents = MiDispatchFault(
                      v7,
                      v6,
                      PrototypePteDirect,
                      v21,
                      (__int64)v128,
                      v127,
                      v4,
                      (__int64)P,
                      v83,
                      (__int64)&v143);
      if ( FileExtents != -1073741802 )
      {
        v100 = v126;
        goto LABEL_283;
      }
      if ( (v4 & 1) == 0 || (v85 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL), *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
      {
        if ( (v4 & 1) == 0 )
        {
LABEL_271:
          if ( (AnyMultiplexedVm[184] & 7) != 3 )
          {
            LOBYTE(v125) = v20;
            FileExtents = MiProtoFault(AnyMultiplexedVm, &v127, v6, PrototypePteDirect, P, v125, &v137);
            if ( FileExtents != -1073741802 )
            {
              v22 = (__int64)AnyMultiplexedVm;
LABEL_293:
              v103 = v137;
LABEL_294:
              v106 = i;
              if ( v144 )
                MiDeprioritizeVad(P);
              if ( (*(_BYTE *)(v22 + 184) & 7) != 0 )
              {
                v107 = *(_WORD *)(v22 + 164);
                if ( v107 == 1023 )
                  v108 = MiSystemPartition;
                else
                  v108 = *(int **)(qword_140327038 + 8LL * v107);
                if ( (*(_DWORD *)(v22 + 4) & 0xFFF) == 0 )
                {
                  v109 = *((_QWORD *)v108 + 808) < 0x420uLL;
                  goto LABEL_307;
                }
              }
              else if ( v106->Priority >= 16 )
              {
                v110 = *((_DWORD *)&v106[1].SwapListEntry + 3);
                if ( (v110 & 0xC) == 0
                  && (v110 & 2) == 0
                  && (__int64)(*(_QWORD *)(v22 + 112) - *(_QWORD *)(v22 + 104)) > 100 )
                {
                  v109 = *(_QWORD *)(MiPartitionIdToPointer(WORD2(v136[1].InstrumentationCallback), v49, v50, v51) + 6464) < 0x420uLL;
LABEL_307:
                  if ( v109 )
                    KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
                }
              }
              if ( v103 )
              {
                v111 = *(_QWORD *)v103;
                v112 = 0LL;
                v113 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)v103 + 72LL));
                v116 = *(_DWORD *)(v111 + 56);
                v117 = v113;
                if ( (v116 & 0x20) == 0 && *(_QWORD *)(v111 + 64) && (v116 & 0x400) == 0 )
                  v112 = MiDecrementSubsections(v103, v103, 1u);
                --*(_QWORD *)(v111 + 40);
                MiCheckControlArea(v111, v117, v114, v115);
                if ( v112 )
                  MiReturnSubsectionCharges(v112);
              }
LABEL_316:
              if ( FileExtents )
              {
                if ( FileExtents != -1073740748 )
                {
                  if ( (FileExtents & 0x80000000) == 0
                    || FileExtents != -1073741670
                    && FileExtents != -1073741663
                    && FileExtents != -1073741801
                    && (v133 <= 0x1000 || FsRtlIsTotalDeviceFailure(FileExtents)) )
                  {
                    if ( (PerfGlobalGroupMask & 0x1000) != 0 )
                    {
                      if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 1
                        || (v4 & 1) != 0
                        && (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 2
                         || (v4 & 1) != 0
                         && (*(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 4
                          || (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 3)) )
                      {
                        v4 = 0LL;
                      }
                      EtwTracePageFault(FileExtents, v6, v126, v4);
                    }
                    return FileExtents;
                  }
                  if ( ((__int64)i[1].Queue & 4) != 0 || (*((_DWORD *)&i[1].SwapListEntry + 3) & 0xC) != 0 )
                    return 3221225495LL;
                  KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
                  v121 = MiPartitionIdToPointer(WORD2(v136[1].InstrumentationCallback), v118, v119, v120);
                  if ( !(unsigned int)MiPageAvailable(v121, 0LL) )
                    MiWaitForFreePage(v122);
                }
                return 0;
              }
              return FileExtents;
            }
            AnyMultiplexedVm = MiGetAnyMultiplexedVm(v138[0]);
            v128 = AnyMultiplexedVm;
          }
          v6 = PrototypePteDirect;
          v98 = MI_READ_PTE_LOCK_FREE(((PrototypePteDirect >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
          v142 = v98;
          if ( (v98 & 1) != 0 )
          {
            if ( (v98 & 0x200) != 0 )
              MiCopyOnWriteEx(PrototypePteDirect, 0);
            FileExtents = 0;
            goto LABEL_97;
          }
          v99 = 0;
          if ( (v98 & 0x400) != 0 )
            v99 = MiGetPrototypePteDirect(v98);
          v100 = v126;
          FileExtents = MiDispatchFault(
                          v7,
                          PrototypePteDirect,
                          v99,
                          0,
                          (__int64)AnyMultiplexedVm,
                          v127,
                          v4,
                          0LL,
                          v126,
                          (__int64)&v143);
          LOBYTE(v7) = v7 | 2;
LABEL_283:
          v101 = v143;
          if ( v143 )
          {
            v102 = *((_QWORD *)v143 + 31);
            v133 = *((_DWORD *)v143 + 74);
            if ( v102 )
              v133 = *(_DWORD *)(v102 + 40);
            if ( v100 == 1 )
              *((_BYTE *)v143 + 191) |= 2u;
            if ( (*((_BYTE *)v101 + 188) & 2) != 0 )
            {
              v103 = v101[25];
              v104 = *(_QWORD *)v103;
              MiRetainSubsection(v103);
              ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v104 + 72));
              ++*(_QWORD *)(v104 + 40);
              ++*(_QWORD *)(v104 + 48);
              ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v104 + 72));
              MiUnlockWorkingSetExclusive((__int64)v128, v127);
              FileExtents = MiAllocateFileExtents(v103, v138[0]);
              MiFreeInPageSupportBlock(v101);
              MiDereferenceControlArea(v104);
              v22 = (__int64)v128;
              goto LABEL_294;
            }
            v105 = (unsigned __int8)v7;
            v22 = (__int64)v128;
            FileExtents = MiIssueHardFault((__int64)v128, v127, v6, (__int64)v101, v4, (v105 >> 1) & 1, v100);
            goto LABEL_98;
          }
          goto LABEL_97;
        }
        v85 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
        if ( *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) != 2 )
        {
          if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
            v4 = 0LL;
          goto LABEL_271;
        }
      }
      v85[1] = 1;
      if ( *v85 == 1 )
        v20 = 1;
      v4 = 0LL;
      goto LABEL_271;
    }
    goto LABEL_230;
  }
  v58 = 0;
  v59 = KeGetCurrentThread()->ApcState.Process;
  v38 = ((__int64)v59[2].Header.WaitListHead.Flink & 7) == 0;
  v134 = v59;
  if ( v38 )
    v58 = 32;
  v148 = v58;
  if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 4 )
  {
    v58 |= 0x40u;
    v148 = v58;
  }
  if ( (v4 & 1) == 0 )
    goto LABEL_123;
  switch ( *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) )
  {
    case 2:
      v58 |= 1u;
LABEL_122:
      v148 = v58;
      break;
    case 1:
      v58 |= 2u;
      goto LABEL_122;
    case 5:
      v58 |= 8u;
      goto LABEL_122;
  }
LABEL_123:
  if ( (v58 & 0xB) != 0 )
  {
    v60 = v4 & 0xFFFFFFFFFFFFFFFEuLL;
    if ( (v58 & 2) != 0 && (*(_DWORD *)(v60 + 80) & 0x4000) != 0 )
    {
      v58 |= 4u;
      v148 = v58;
    }
  }
  else
  {
    v60 = 0LL;
  }
  v157 = v60;
  v156 = &v59[1].IdealNode[12];
  if ( v6 < 0xFFFF800000000000uLL )
  {
    v61 = 0xFFFFF6FFFFFFFFFFuLL;
  }
  else
  {
    if ( (v58 & 2) != 0 )
    {
      FileExtents = 0;
      goto LABEL_97;
    }
    v61 = 0xFFFFF6FFFFFFFFFFuLL;
    if ( v6 >= v56 && v6 <= 0xFFFFF6FFFFFFFFFFuLL && v4 )
      KeBugCheckEx(0x50u, v6, BugCheckParameter2a, BugCheckParameter3, 6uLL);
  }
  v62 = 0LL;
  if ( v6 > 0x7FFFFFFEFFFFLL )
  {
    if ( v6 < v56 || v6 > 0xFFFFF6FFFFFFFFFFuLL )
      goto LABEL_145;
    PrototypePteDirect = 0LL;
    goto LABEL_195;
  }
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
  {
    v63 = v6 & 0x7FFFFFFFF000LL;
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      PrototypePteDirect = qword_1403269C8;
      LOBYTE(v58) = v148;
      LODWORD(v53) = 1;
      goto LABEL_195;
    }
    if ( v63 == qword_1403269D8 && v63 )
    {
      PrototypePteDirect = qword_1403269D0;
      LOBYTE(v58) = v148;
      LODWORD(v53) = 1;
      goto LABEL_195;
    }
  }
  v61 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
  v62 = *(unsigned int **)(v61 + 1584);
  if ( !v62 )
    goto LABEL_144;
  v64 = v6 >> 12;
  if ( v6 >> 12 < (v62[6] | ((unsigned __int64)*((unsigned __int8 *)v62 + 32) << 32))
    || v64 > (v62[7] | ((unsigned __int64)*((unsigned __int8 *)v62 + 33) << 32)) )
  {
    v62 = *(unsigned int **)(v61 + 1568);
    while ( v62 )
    {
      if ( v64 > (v62[7] | ((unsigned __int64)*((unsigned __int8 *)v62 + 33) << 32)) )
      {
        v62 = (unsigned int *)*((_QWORD *)v62 + 1);
      }
      else
      {
        if ( v64 >= (v62[6] | ((unsigned __int64)*((unsigned __int8 *)v62 + 32) << 32)) )
        {
          *(_QWORD *)(v61 + 1584) = v62;
          goto LABEL_159;
        }
        v62 = *(unsigned int **)v62;
      }
    }
LABEL_144:
    v62 = 0LL;
    LOBYTE(v58) = v148;
    goto LABEL_145;
  }
LABEL_159:
  if ( (KeGetCurrentThread()->ApcState.Process[2].ActiveProcessors.Bitmap[0] & 0x100000000LL) == 0 )
  {
    v65 = v6 & 0x7FFFFFFFF000LL;
    if ( (v6 & 0xFFFFFFFFFFFFF000uLL) == 0x7FFE0000 )
    {
      PrototypePteDirect = qword_1403269C8;
      LODWORD(v53) = 1;
      goto LABEL_190;
    }
    if ( v65 == qword_1403269D8 && v65 )
    {
      PrototypePteDirect = qword_1403269D0;
      LODWORD(v53) = 1;
      goto LABEL_190;
    }
  }
  v66 = v62[12];
  v67 = v66 & 7;
  if ( v67 == 2 && (v62[16] & 0x10000000) != 0 )
  {
    VadEvent = MiLocateVadEvent((__int64)v62, 32);
    if ( VadEvent )
    {
      if ( (struct _KTHREAD *)VadEvent[2] != KeGetCurrentThread() )
        goto LABEL_169;
    }
  }
  if ( (v66 & 0x80000) != 0 )
  {
    LODWORD(v53) = 24;
    PrototypePteDirect = v57;
  }
  else if ( v67 == 1 )
  {
    LODWORD(v53) = 24;
    PrototypePteDirect = v57;
  }
  else if ( (v66 & 0x8000) != 0 )
  {
    if ( v67 == 3 || v67 == 5 || (v62[13] & 0x80000000) == 0 )
    {
LABEL_169:
      LODWORD(v53) = 24;
      PrototypePteDirect = v57;
      goto LABEL_190;
    }
    PrototypePteDirect = v57;
    LODWORD(v53) = (unsigned __int8)v66 >> 3;
  }
  else if ( (*((_BYTE *)v62 + 67) & 1) != 0 )
  {
    LODWORD(v53) = 24;
    PrototypePteDirect = v57;
  }
  else
  {
    LODWORD(v53) = (unsigned __int8)v66 >> 3;
    if ( (_DWORD)v53 == 7 && v67 == 2 )
      LODWORD(v53) = 256;
    ProtoPteAddress = MiGetProtoPteAddress(v62, v6 >> 12, 0LL, v160);
    v70 = *((_QWORD *)v62 + 15);
    PrototypePteDirect = ProtoPteAddress;
    v61 = 24LL;
    if ( !ProtoPteAddress )
      LODWORD(v53) = 24;
    if ( (v70 & 0x8000000000000000uLL) != 0
      && v64 - (v62[6] | ((unsigned __int64)*((unsigned __int8 *)v62 + 32) << 32)) > (unsigned __int64)(*(_QWORD *)v70 - 1LL) >> 12 )
    {
      LODWORD(v53) = 24;
    }
    LODWORD(v57) = 0;
  }
LABEL_190:
  LOBYTE(v58) = v148;
  if ( (_DWORD)v53 == 24 )
  {
LABEL_145:
    MiCheckBadSystemProcessAccess(v6);
    if ( (v58 & 2) != 0 && v62 )
      MiPrefetchJumpVad(v60, v62, v6);
    FileExtents = -1073741819;
    goto LABEL_97;
  }
LABEL_195:
  if ( (v53 & 0xFFFFFFF8) != 0x10 )
  {
    v154 = v135;
    v149 = v6;
    v150 = v6;
    v152 = v53;
    v155 = BugCheckParameter2a >> 57;
    v151 = PrototypePteDirect;
    v158 = v62;
    v153 = v57;
    if ( !PrototypePteDirect )
    {
      valid = MiResolvePrivateZeroFault(&v148);
      goto LABEL_96;
    }
    v79 = v57;
    if ( (v58 & 2) == 0 )
    {
      if ( v62 )
      {
        if ( (*((_QWORD *)v62 + 15) & 0x8000000000000000uLL) == 0 )
        {
          v79 = MiCheckVadSequential(&v148, v61);
          if ( v79 == -1073741280 )
            _InterlockedIncrement((volatile signed __int32 *)v62 + 9);
        }
      }
    }
    P = v62;
    MiResolveSharedZeroFault(&v148, v61);
    LODWORD(v7) = BugCheckParameter2a;
    v38 = v79 == -1073741280;
    v45 = (_QWORD *)v163;
    v56 = 0xFFFFF68000000000uLL;
    if ( v38 )
      v144 = v6;
    goto LABEL_215;
  }
  if ( (v58 & 2) != 0 )
  {
    FileExtents = v57;
    goto LABEL_97;
  }
  if ( !(unsigned int)MiAllowGuardFault(v4) )
  {
    FileExtents = -1073741819;
    goto LABEL_97;
  }
  MiUpdatePageTableUseCount(v6);
  v74 = (unsigned int)v53 & 0xFFFFFFEF;
  if ( PrototypePteDirect )
    PrototypePteVadLookup = MiMakePrototypePteVadLookup(v74);
  else
    PrototypePteVadLookup = MiMakeDemandZeroPte(v74, v71, v72, v73);
  v76 = BugCheckParameter3;
  *(_QWORD *)BugCheckParameter3 = PrototypePteVadLookup;
  if ( (unsigned int)MiPteInShadowRange(v76, PrototypePteVadLookup) )
    MiWritePteShadow(v78, v77);
  MiUnlockWorkingSetExclusive((__int64)&v134[1].IdealNode[12], v135);
  return MiCheckForUserStackOverflow(v6);
}
