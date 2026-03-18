/*
 * XREFs of MmAccessFault @ 0x14004BD30
 * Callers:
 *     MiReleaseOutSwapReservations @ 0x140001E44 (MiReleaseOutSwapReservations.c)
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiCheckProtoPtePageState @ 0x14001103C (MiCheckProtoPtePageState.c)
 *     MiPrefetchVirtualMemory @ 0x140011F20 (MiPrefetchVirtualMemory.c)
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiSectionCreated @ 0x140038BD8 (MiSectionCreated.c)
 *     MiSetProtectionOnSection @ 0x14005BC70 (MiSetProtectionOnSection.c)
 *     MiCommitExistingVad @ 0x1400629D0 (MiCommitExistingVad.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiProtectPool @ 0x140078150 (MiProtectPool.c)
 *     MiLockPagedAddress @ 0x14009A36C (MiLockPagedAddress.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiProbeLeafFrame @ 0x1400A7660 (MiProbeLeafFrame.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiMakeSystemAddressValid @ 0x1400B82F0 (MiMakeSystemAddressValid.c)
 *     MiMakeDriverPagesPrivate @ 0x1400BDAC8 (MiMakeDriverPagesPrivate.c)
 *     MiInPageSingleKernelStack @ 0x1400DE754 (MiInPageSingleKernelStack.c)
 *     MiMakeProtoAddressValid @ 0x1400E20DC (MiMakeProtoAddressValid.c)
 *     MiMakeImageReadOnly @ 0x1400E7680 (MiMakeImageReadOnly.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     KiPageFault @ 0x140162040 (KiPageFault.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 *     MiDeletePerSessionProtos @ 0x1401E2DAC (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x1401E3058 (MiInitializeProtoPfn.c)
 *     MiBuildFileOnlyProtos @ 0x1401E325C (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x1401E3504 (MiEliminateStaleExtents.c)
 *     ExpSvmServicePageFault @ 0x140215530 (ExpSvmServicePageFault.c)
 *     MmVirtualAccessFault @ 0x140626764 (MmVirtualAccessFault.c)
 * Callees:
 *     MiProcessWsInSwapFault @ 0x140001300 (MiProcessWsInSwapFault.c)
 *     MiSystemFault @ 0x1400097D0 (MiSystemFault.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14000A380 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiLockTransitionLeafPage @ 0x14001068C (MiLockTransitionLeafPage.c)
 *     MiCheckVirtualAddress @ 0x14001D4E0 (MiCheckVirtualAddress.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140030778 (FsRtlIsTotalDeviceFailure.c)
 *     MiLocateAddress @ 0x140038340 (MiLocateAddress.c)
 *     MiIssueHardFault @ 0x140039650 (MiIssueHardFault.c)
 *     ExAcquireSpinLockExclusiveAtDpcLevel @ 0x14003AA70 (ExAcquireSpinLockExclusiveAtDpcLevel.c)
 *     KeReleaseInStackQueuedSpinLock @ 0x140040F30 (KeReleaseInStackQueuedSpinLock.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     ExReleaseSpinLockExclusiveFromDpcLevel @ 0x14004CC40 (ExReleaseSpinLockExclusiveFromDpcLevel.c)
 *     MiResolvePageTablePage @ 0x14004CC60 (MiResolvePageTablePage.c)
 *     MiZeroFault @ 0x14004D290 (MiZeroFault.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiResolveDemandZeroFault @ 0x140052430 (MiResolveDemandZeroFault.c)
 *     MiCheckControlArea @ 0x14006D900 (MiCheckControlArea.c)
 *     MiCopyOnWriteEx @ 0x14006EE60 (MiCopyOnWriteEx.c)
 *     MiValidFault @ 0x140070910 (MiValidFault.c)
 *     KeWaitForSingleObject @ 0x140081870 (KeWaitForSingleObject.c)
 *     KeResetEvent @ 0x14008E310 (KeResetEvent.c)
 *     MiDecrementSubsections @ 0x1400A8B80 (MiDecrementSubsections.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     KeAcquireInStackQueuedSpinLock @ 0x1400B1C10 (KeAcquireInStackQueuedSpinLock.c)
 *     MiAllowGuardFault @ 0x1400E5F90 (MiAllowGuardFault.c)
 *     KeInvalidAccessAllowed @ 0x1400E5FF0 (KeInvalidAccessAllowed.c)
 *     MI_PROTO_FORMAT_COMBINED @ 0x1400E61AC (MI_PROTO_FORMAT_COMBINED.c)
 *     MiProtoFault @ 0x1400EA824 (MiProtoFault.c)
 *     MiRetainSubsection @ 0x1400EAAA4 (MiRetainSubsection.c)
 *     MiDeprioritizeVad @ 0x1400ED6E0 (MiDeprioritizeVad.c)
 *     MiDereferenceControlArea @ 0x1400EF460 (MiDereferenceControlArea.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 *     MiWaitForRotateToComplete @ 0x1401036B0 (MiWaitForRotateToComplete.c)
 *     MiRaisedIrqlFault @ 0x140116C70 (MiRaisedIrqlFault.c)
 *     MiPageAvailable @ 0x14012FC84 (MiPageAvailable.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiIsVadEligibleForCommitRelease @ 0x1401CF8BC (MiIsVadEligibleForCommitRelease.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 *     MiLargePageFault @ 0x1401DED84 (MiLargePageFault.c)
 *     MiReturnSubsectionCharges @ 0x1401E3170 (MiReturnSubsectionCharges.c)
 *     MiWaitForFreePage @ 0x1401E4C20 (MiWaitForFreePage.c)
 *     EtwTracePageFault @ 0x14020E030 (EtwTracePageFault.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x1402140C0 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 *     MiCheckForUserStackOverflow @ 0x1404A7F9C (MiCheckForUserStackOverflow.c)
 *     MiAllocateFileExtents @ 0x14062C488 (MiAllocateFileExtents.c)
 */

__int64 __fastcall MmAccessFault(
        ULONG_PTR BugCheckParameter2,
        signed __int64 BugCheckParameter1,
        char a3,
        ULONG_PTR a4)
{
  ULONG_PTR v4; // rsi
  unsigned __int8 v5; // r15
  unsigned __int64 v6; // r13
  ULONG_PTR *p_BugCheckParameter2a; // rcx
  unsigned __int64 v10; // r8
  ULONG_PTR v11; // rax
  int v12; // edx
  unsigned __int64 v13; // rax
  int CurrentIrql; // eax
  ULONG_PTR v15; // rdi
  struct _KTHREAD *CurrentThread; // rax
  unsigned __int64 v17; // r9
  _KPROCESS *Process; // r14
  unsigned int valid; // ebx
  PEX_SPIN_LOCK v20; // r12
  bool v21; // cc
  unsigned __int16 SignalState; // ax
  int *v23; // rbx
  _QWORD *v24; // rcx
  unsigned __int64 v25; // rdx
  LARGE_INTEGER *v26; // rdi
  ULONG_PTR *v27; // r14
  unsigned int v28; // ebx
  __int64 v29; // rdx
  bool v30; // zf
  unsigned __int32 v31; // eax
  char v32; // al
  void *Address; // rax
  _QWORD *v34; // r15
  unsigned __int64 v35; // rax
  __int64 v36; // r14
  ULONG_PTR v37; // rbx
  ULONG_PTR v38; // r15
  struct _KTHREAD *v39; // rdi
  __int64 v40; // rdi
  __int64 v41; // r14
  KIRQL v42; // al
  int v43; // ecx
  KIRQL v44; // r12
  __int64 v45; // rax
  __int64 v46; // rcx
  char v47; // r14
  int v48; // r15d
  _BYTE *v49; // rax
  char v50; // cl
  __int64 v51; // rax
  __int64 v52; // rdi
  __int64 v53; // rdi
  __int64 v54; // rax
  unsigned __int64 v55; // rbx
  unsigned __int64 v56; // rbx
  ULONG_PTR v57; // rdi
  __int64 v58; // rax
  __int64 v59; // r8
  __int64 v60; // rax
  __int64 v61; // rdi
  ULONG_PTR v62; // r9
  int Timeout; // [rsp+20h] [rbp-E0h]
  int v64; // [rsp+28h] [rbp-D8h]
  int v65; // [rsp+28h] [rbp-D8h]
  unsigned __int8 v67; // [rsp+51h] [rbp-AFh] BYREF
  _WORD v68[7]; // [rsp+52h] [rbp-AEh] BYREF
  PVOID P; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v70; // [rsp+68h] [rbp-98h]
  int v71; // [rsp+70h] [rbp-90h]
  int v72; // [rsp+74h] [rbp-8Ch] BYREF
  int v73; // [rsp+78h] [rbp-88h]
  ULONG_PTR v74; // [rsp+80h] [rbp-80h] BYREF
  unsigned int v75; // [rsp+88h] [rbp-78h]
  ULONG_PTR v76; // [rsp+90h] [rbp-70h]
  ULONG_PTR v77; // [rsp+98h] [rbp-68h] BYREF
  struct _KTHREAD *i; // [rsp+A0h] [rbp-60h]
  PVOID v79; // [rsp+A8h] [rbp-58h] BYREF
  PEX_SPIN_LOCK SpinLock; // [rsp+B0h] [rbp-50h] BYREF
  ULONG_PTR v81; // [rsp+B8h] [rbp-48h]
  __int16 v82; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v83; // [rsp+C8h] [rbp-38h]
  unsigned __int64 v84; // [rsp+D0h] [rbp-30h]
  int v85; // [rsp+D8h] [rbp-28h] BYREF
  _BOOL8 v86; // [rsp+E0h] [rbp-20h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+E8h] [rbp-18h] BYREF
  ULONG_PTR v88[3]; // [rsp+100h] [rbp+0h] BYREF
  ULONG_PTR BugCheckParameter2a; // [rsp+118h] [rbp+18h] BYREF

  v76 = BugCheckParameter2;
  v4 = a4;
  v5 = a3;
  v6 = BugCheckParameter1;
  if ( (BugCheckParameter2 & 9) == 9 )
    KeBugCheckEx(0x1Au, 0x61941uLL, BugCheckParameter1, BugCheckParameter2, a4);
  if ( BugCheckParameter1 >> 47 != -1 && BugCheckParameter1 >> 47 != 0 )
  {
    if ( a3 != 1 && ((a4 & 1) == 0 || *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 1) )
    {
      if ( (a4 & 1) == 0 )
        goto LABEL_9;
      if ( *(_BYTE *)(a4 & 0xFFFFFFFFFFFFFFFEuLL) != 3 )
      {
        if ( (a4 & 1) != 0 )
          goto LABEL_210;
LABEL_9:
        if ( (unsigned __int8)KeInvalidAccessAllowed(a4) != 1 )
LABEL_210:
          KeBugCheckEx(0x50u, v6, BugCheckParameter2, a4, 4uLL);
      }
    }
    return 3221225477LL;
  }
  if ( (BugCheckParameter2 & 0x8000) != 0 )
  {
    if ( a3 != 1 )
      KeBugCheckEx(0x50u, BugCheckParameter1, BugCheckParameter2, a4, 0x65uLL);
    return 3221225477LL;
  }
  p_BugCheckParameter2a = &BugCheckParameter2a;
  v10 = 0x98000000000LL;
  v11 = (((unsigned __int64)BugCheckParameter1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v12 = 3;
  BugCheckParameter2a = v11;
  do
  {
    v13 = *p_BugCheckParameter2a--;
    *p_BugCheckParameter2a = ((v13 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    --v12;
  }
  while ( v12 );
  CurrentIrql = KeGetCurrentIrql();
  v15 = v76;
  if ( (unsigned __int8)CurrentIrql > 1u )
    return MiRaisedIrqlFault(v76, v6, a4, v88);
  LOBYTE(CurrentIrql) = 0;
  v77 = 0LL;
  v71 = CurrentIrql;
  CurrentThread = KeGetCurrentThread();
  v17 = v6;
  v74 = 0LL;
  v83 = 0LL;
  v75 = 4096;
  Process = CurrentThread->ApcState.Process;
  *(_QWORD *)&v68[3] = Process;
  for ( i = CurrentThread; v17 >= 0xFFFFF68000000000uLL; v17 = (__int64)(v17 << 25) >> 16 )
  {
    if ( v17 > 0xFFFFF6FFFFFFFFFFuLL )
      break;
  }
  if ( v6 < 0xFFFF800000000000uLL )
    goto LABEL_30;
  if ( v5 == 1 )
    return 3221225477LL;
  if ( v6 + 0x98000000000LL <= 0x7FFFFFFFFFLL && v17 + 0xA8000000000LL <= 0xFFFFFFFFFFLL )
  {
    v15 = v76 | 2;
    v76 |= 2uLL;
  }
  SpinLock = 0LL;
  v82 = 17;
  v81 = 0LL;
  valid = MiSystemFault(v15, v6, v4, v17, v88, (__int64)&SpinLock);
  v20 = SpinLock;
  v70 = (unsigned __int8)v82;
  v67 = v82;
  v71 = HIBYTE(v82);
  v74 = v81;
  if ( valid == 192 )
  {
LABEL_30:
    v21 = LODWORD(Process[2].Affinity.Bitmap[2]) <= 0x10;
    v20 = (PEX_SPIN_LOCK)&Process[1].IdealNode[12];
    P = 0LL;
    if ( !v21 && Process != PsInitialSystemProcess )
    {
      SignalState = Process[2].Header.SignalState;
      if ( SignalState == 1023 )
        v23 = &MiSystemPartition;
      else
        v23 = *(int **)(qword_1402FEC28 + 8LL * SignalState);
      v10 = *((_QWORD *)v23 + 752);
      if ( (unsigned __int16)KeNumberNodes <= 1u )
        goto LABEL_38;
      v24 = (_QWORD *)(*((_QWORD *)v23 + 5) + 1336LL * KeGetCurrentPrcb()->ParentNode->Affinity.Reserved[0]);
      v25 = v24[146] + v24[147] + ((*v24 + v24[1]) << 9);
      if ( v25 >= 0x420 )
        goto LABEL_47;
      if ( v10 >= v25 >> 4 )
LABEL_38:
        v25 = *((_QWORD *)v23 + 736);
      if ( v25 < 0x420 && (v10 >= 0x4000 || v10 >= v25 >> 4) )
      {
        LODWORD(Process[2].Affinity.Bitmap[2]) = 0;
        KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)v23 + 528, &LockHandle);
        if ( *((_QWORD *)v23 + 736) < 0x420uLL )
        {
          v26 = (LARGE_INTEGER *)&MiHalfSecond;
          if ( Process->BasePriority >= 9 )
            v26 = (LARGE_INTEGER *)&Mi30Milliseconds;
          KeResetEvent((PRKEVENT)v23 + 179);
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          KeWaitForSingleObject(v23 + 1074, WrFreePage, 0, 0, v26);
          v15 = v76;
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
        }
        goto LABEL_49;
      }
    }
LABEL_47:
    if ( dword_1402FF218 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&Mi10Milliseconds);
LABEL_49:
    v27 = (ULONG_PTR *)KeGetCurrentIrql();
    v70 = (unsigned __int64)v27;
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v20, (unsigned __int8)v27);
    }
    else
    {
      v28 = 0;
      if ( _interlockedbittestandset(v20, 0x1Fu) )
        v28 = ExpWaitForSpinLockExclusiveAndAcquire(v20, (unsigned __int8)v27, v10);
      v29 = *(unsigned int *)v20;
      if ( (*v20 & 0xBFFFFFFF) != 0x80000000 )
      {
        do
        {
          if ( (v29 & 0x40000000) == 0 )
          {
            v31 = _InterlockedCompareExchange(v20, v29 | 0x40000000, v29);
            v30 = (_DWORD)v29 == v31;
            v29 = v31;
            if ( !v30 )
              continue;
          }
          if ( (++v28 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v28, v29, v10);
          v29 = *(unsigned int *)v20;
        }
        while ( (v29 & 0xBFFFFFFF) != 0x80000000 );
      }
    }
    v32 = *((_BYTE *)v20 + 219) & 0xC0;
    v67 = (unsigned __int8)v27;
    if ( v32 == -64 && *((_QWORD *)v20 + 30) && v6 < 0xFFFF800000000000uLL )
    {
      Address = (void *)MiLocateAddress(v6);
      P = Address;
      if ( !Address || (unsigned int)MiIsVadEligibleForCommitRelease(Address) )
      {
LABEL_73:
        valid = -1073741819;
        goto LABEL_97;
      }
      valid = 0;
      P = 0LL;
    }
    else
    {
      valid = 0;
    }
    if ( *(_QWORD *)(*(_QWORD *)&v68[3] + 888LL)
      && (unsigned int)MiWaitForRotateToComplete(v6, (unsigned __int8)v27) == 1 )
    {
      goto LABEL_97;
    }
    if ( v6 > (unsigned __int64)MmHighestUserAddress && v6 < 0xFFFF800000000000uLL )
      goto LABEL_73;
    LOBYTE(v64) = v5;
    LOBYTE(Timeout) = (_BYTE)v27;
    valid = MiResolvePageTablePage(v15, v6, v88, v4, Timeout, v64);
    if ( valid != -1073741802 )
      goto LABEL_97;
    if ( (MI_READ_PTE_LOCK_FREE(v88[2]) & 0x80u) != 0LL )
    {
      valid = MiLargePageFault(v15, v6, v4, v5, (__int64)v20);
      goto LABEL_97;
    }
    v34 = (_QWORD *)BugCheckParameter2a;
    v35 = MI_READ_PTE_LOCK_FREE(BugCheckParameter2a);
    v84 = v35;
    if ( (v35 & 1) != 0 )
    {
      valid = MiValidFault(v15, v6, (char)v27, a3);
      goto LABEL_97;
    }
    if ( v35 == 128 )
    {
      valid = MiResolveDemandZeroFault(v15 & 2, v6, v4, (_DWORD)v34, (__int64)v20, (char)v27, 0);
      goto LABEL_97;
    }
    v73 = 0;
    if ( v35 )
    {
      v36 = (v35 >> 5) & 0x1F;
      v72 = (v35 >> 5) & 0x1F;
      if ( (v35 & 0x400) != 0 )
      {
        if ( HIDWORD(v35) != 0xFFFFFFFF )
        {
          v74 = (__int64)v35 >> 16;
          if ( (v35 & 0x100) == 0 )
          {
            if ( (unsigned __int8)MI_PROTO_FORMAT_COMBINED(v35) || *(_QWORD *)(*(_QWORD *)&v68[3] + 912LL) )
              v73 = 1;
            goto LABEL_137;
          }
          LODWORD(v36) = 1;
          v72 = 1;
LABEL_88:
          v37 = v15 & 2;
          if ( a3 == 1
            && ((unsigned __int64)v34 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL)
                                      - 0x98000000000LL
             || (unsigned __int64)v34 < 0xFFFFF68000000000uLL) )
          {
            valid = -1073741819;
          }
          else
          {
            v51 = MI_READ_PTE_LOCK_FREE(v34);
            v52 = v51;
            if ( (v51 & 1) != 0 )
            {
              if ( !v37 || (v51 & 0xA00) != 0 )
                goto LABEL_137;
              valid = -1073741819;
            }
            else
            {
              v86 = v37 != 0;
              if ( MiReadWrite[v36 & 7] - v86 >= 10 )
              {
                if ( (v36 & 0xFFFFFFF8) != 0x10 || (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
                  goto LABEL_137;
                if ( (unsigned int)MiAllowGuardFault(v4) )
                {
                  if ( (v52 & 0x800) == 0 || (v52 & 0x400) != 0 )
                  {
                    v56 = v52 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v36 & 0xF));
                    *v34 = v56;
                    if ( (unsigned int)MiPteInShadowRange(v34) )
                      MiWritePteShadow(v34, v56);
                  }
                  else
                  {
                    v53 = MiLockTransitionLeafPage((ULONG_PTR)v34, 0LL);
                    v54 = MI_READ_PTE_LOCK_FREE(v34);
                    if ( v53 )
                      *(_QWORD *)(v53 + 16) = *(_QWORD *)(v53 + 16) & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v36 & 0xF));
                    v55 = v54 & 0xFFFFFFFFFFFFFC1FuLL | (32 * (v36 & 0xF));
                    *v34 = v55;
                    if ( (unsigned int)MiPteInShadowRange(v34) )
                      MiWritePteShadow(v34, v55);
                    if ( v53 )
                      _InterlockedAnd64((volatile signed __int64 *)(v53 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  }
                  valid = -2147483647;
                }
                else
                {
                  valid = -1073741819;
                }
              }
              else
              {
                valid = -1073741819;
              }
            }
          }
          MiUnlockWorkingSetExclusive(v20, (unsigned __int8)v70);
          if ( valid == -2147483647 )
            valid = MiCheckForUserStackOverflow(v6);
          goto LABEL_101;
        }
        v74 = MiCheckVirtualAddress(v6, &v85, (unsigned __int64 *)&P);
        if ( !v74 )
        {
          valid = -1073741819;
LABEL_96:
          LOBYTE(v27) = v70;
          goto LABEL_97;
        }
        LOBYTE(v15) = v76;
        P = 0LL;
      }
    }
    else
    {
      valid = MiZeroFault(v15, (__int64)v68, (__int64)&v72, (__int64)&v74, (__int64)&P);
      if ( LOBYTE(v68[0]) )
      {
        if ( LOBYTE(v68[0]) != 1 )
          return valid;
        goto LABEL_97;
      }
      LODWORD(v36) = v72;
      if ( valid == -1073741280 )
        v83 = v6;
    }
    if ( (_DWORD)v36 == 256 )
      goto LABEL_137;
    goto LABEL_88;
  }
  if ( valid != -1073741802 )
    goto LABEL_118;
  v73 = 0;
  P = 0LL;
LABEL_137:
  v47 = v70;
  v48 = v76;
  valid = MiDispatchFault(v76, v6, v74, v73, (__int64)v20, v70, v4, (__int64)P, (__int64)&v79);
  if ( valid != -1073741802 )
    goto LABEL_183;
  if ( (v4 & 1) != 0 )
  {
    v49 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 1 )
      goto LABEL_142;
  }
  if ( (v4 & 1) != 0 )
  {
    v49 = (_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL);
    if ( *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 2 )
    {
LABEL_142:
      v50 = v71;
      v4 = 0LL;
      v49[1] = 1;
      if ( *v49 == 1 )
        v50 = 1;
      goto LABEL_173;
    }
    if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 5 )
      v4 = 0LL;
  }
  v50 = v71;
LABEL_173:
  if ( v20 != &dword_1402FF980 )
  {
    LOBYTE(v65) = v50;
    valid = MiProtoFault(v20, &v67, v6, v74, P, v65, &v77);
    if ( valid != -1073741802 )
    {
LABEL_101:
      v38 = v77;
      goto LABEL_102;
    }
    v47 = v67;
    v20 = &dword_1402FF980;
    v70 = v67;
  }
  v57 = v74;
  v6 = v74;
  v58 = MI_READ_PTE_LOCK_FREE(((v74 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  if ( (v58 & 1) != 0 )
  {
    if ( (v58 & 0x200) != 0 )
      MiCopyOnWriteEx(v57, 0);
    valid = 0;
    goto LABEL_96;
  }
  LODWORD(v59) = 0;
  if ( (v58 & 0x400) != 0 )
    v59 = v58 >> 16;
  valid = MiDispatchFault(v48, v6, v59, 0, (__int64)v20, v47, v4, 0LL, (__int64)&v79);
  LOBYTE(v48) = v48 | 2;
LABEL_183:
  v27 = (ULONG_PTR *)v79;
  if ( !v79 )
    goto LABEL_96;
  v60 = *((_QWORD *)v79 + 31);
  v75 = *((_DWORD *)v79 + 74);
  if ( v60 )
    v75 = *(_DWORD *)(v60 + 40);
  if ( a3 == 1 )
    *((_BYTE *)v79 + 191) |= 2u;
  if ( (*((_BYTE *)v27 + 188) & 2) == 0 )
  {
    v62 = (ULONG_PTR)v27;
    LOBYTE(v27) = v70;
    valid = MiIssueHardFault(v20, v70, v6, v62, v4, ((unsigned __int8)v48 >> 1) & 1);
LABEL_97:
    if ( (v4 & 1) != 0 && *(_BYTE *)(v4 & 0xFFFFFFFFFFFFFFFEuLL) == 3 )
      MiProcessWsInSwapFault(v88);
    MiUnlockWorkingSetExclusive(v20, (unsigned __int8)v27);
    goto LABEL_101;
  }
  v38 = v27[25];
  v61 = *(_QWORD *)v38;
  MiRetainSubsection(v38);
  ExAcquireSpinLockExclusiveAtDpcLevel((PEX_SPIN_LOCK)(v61 + 72));
  ++*(_QWORD *)(v61 + 40);
  ++*(_QWORD *)(v61 + 48);
  ExReleaseSpinLockExclusiveFromDpcLevel((PEX_SPIN_LOCK)(v61 + 72));
  MiUnlockWorkingSetExclusive(v20, (unsigned __int8)v70);
  valid = MiAllocateFileExtents(v38, 2);
  MiFreeInPageSupportBlock(v27);
  MiDereferenceControlArea(v61);
LABEL_102:
  v39 = i;
  if ( v83 )
    MiDeprioritizeVad(P);
  if ( (v20[54] & 7) != 0 )
  {
    if ( (v20[49] & 0xFFF) == 0 && (unsigned __int64)qword_140301440 < 0x420 )
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
  }
  else if ( v39->Priority >= 16 )
  {
    Process = *(_KPROCESS **)&v68[3];
    if ( ((__int64)v39[1].Queue & 4) == 0
      && (__int64)(*((_QWORD *)v20 + 13) - *((_QWORD *)v20 + 12)) > 100
      && *(_QWORD *)(MiPartitionIdToPointer(*(unsigned __int16 *)(*(_QWORD *)&v68[3] + 1460LL)) + 5888) < 0x420uLL )
    {
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
    }
    goto LABEL_109;
  }
  Process = *(_KPROCESS **)&v68[3];
LABEL_109:
  if ( v38 )
  {
    v40 = *(_QWORD *)v38;
    v41 = 0LL;
    v42 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(*(_QWORD *)v38 + 72LL));
    v43 = *(_DWORD *)(v40 + 56);
    v44 = v42;
    if ( (v43 & 0x20) == 0 && *(_QWORD *)(v40 + 64) && (v43 & 0x400) == 0 )
      v41 = MiDecrementSubsections(v38, v38, 1LL);
    --*(_QWORD *)(v40 + 40);
    MiCheckControlArea(v40, v44);
    if ( v41 )
      MiReturnSubsectionCharges(v41);
    Process = *(_KPROCESS **)&v68[3];
  }
  v5 = a3;
LABEL_118:
  if ( valid )
  {
    if ( valid != -1073740748 )
    {
      if ( (valid & 0x80000000) == 0
        || valid != -1073741670
        && valid != -1073741663
        && valid != -1073741801
        && (v75 <= 0x1000 || FsRtlIsTotalDeviceFailure(valid)) )
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
          EtwTracePageFault(valid, v6, v5, v4);
        }
        return valid;
      }
      if ( (BYTE4(i[1].Queue) & 4) != 0 || ((__int64)i[1].Queue & 4) != 0 )
        return 3221225495LL;
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v45 = MiPartitionIdToPointer(LOWORD(Process[2].Header.SignalState));
      if ( !(unsigned int)MiPageAvailable(v45, 0LL) )
        MiWaitForFreePage(v46);
    }
    return 0;
  }
  return valid;
}
