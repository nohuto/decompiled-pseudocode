/*
 * XREFs of MiValidateImagePages @ 0x1400B57B0
 * Callers:
 *     MiUnloadSystemImage @ 0x140452B74 (MiUnloadSystemImage.c)
 *     MiSwitchBaseAddress @ 0x14046BCC4 (MiSwitchBaseAddress.c)
 *     MiRelocateImage @ 0x14046E680 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x14051B38C (MiValidateSectionCreate.c)
 * Callees:
 *     MiObtainProtoReference @ 0x140036AF4 (MiObtainProtoReference.c)
 *     MiGetEffectivePagePriorityThread @ 0x14003C720 (MiGetEffectivePagePriorityThread.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     MiStartingOffset @ 0x140055230 (MiStartingOffset.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1400553B0 (MiInsertAndUnlockStandbyPages.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiWaitForCollidedFaultComplete @ 0x14007BC04 (MiWaitForCollidedFaultComplete.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140082458 (FsRtlIsTotalDeviceFailure.c)
 *     MiDeleteLockedTransitionPte @ 0x140084B60 (MiDeleteLockedTransitionPte.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     MiLockProtoPoolPage @ 0x1400B4A50 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiAreChargesNeededToLockPage @ 0x1400B6C20 (MiAreChargesNeededToLockPage.c)
 *     MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF @ 0x1400B6C70 (MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MmAccessFault @ 0x1400BF8A0 (MmAccessFault.c)
 *     MI_IS_PFN @ 0x1400C56E0 (MI_IS_PFN.c)
 *     MiInsertPageInList @ 0x1400C6750 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x1400C6FD0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x1400C80C0 (MiInsertPageInFreeOrZeroedList.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiCreateDecayPfn @ 0x1400E0F20 (MiCreateDecayPfn.c)
 *     MiDecayPfnFullyInitialized @ 0x1400E10AC (MiDecayPfnFullyInitialized.c)
 *     MiPfnReferenceCountIsZero @ 0x1400E3118 (MiPfnReferenceCountIsZero.c)
 *     MiReleasePageFileSpace @ 0x1400E31B4 (MiReleasePageFileSpace.c)
 *     KeDelayExecutionThread @ 0x1400E73A0 (KeDelayExecutionThread.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     MiChargePartitionResidentAvailable @ 0x14011A304 (MiChargePartitionResidentAvailable.c)
 *     MiDiscardTransitionPte @ 0x14014AE5C (MiDiscardTransitionPte.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x14020E314 (MiDriverPageIsDangling.c)
 *     MiGetSharedProtos @ 0x14021C58C (MiGetSharedProtos.c)
 *     MiPteHasShadow @ 0x14022551C (MiPteHasShadow.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiInvalidPteConforms @ 0x140225BA4 (MiInvalidPteConforms.c)
 *     MiReverseSwizzleInvalidPte @ 0x140225FD8 (MiReverseSwizzleInvalidPte.c)
 *     MiWriteValidPteVolatile @ 0x140226110 (MiWriteValidPteVolatile.c)
 *     MiValidateImagePfn @ 0x1404B13C4 (MiValidateImagePfn.c)
 *     MiRelocateImagePfn @ 0x1404BE420 (MiRelocateImagePfn.c)
 *     MiPrefetchControlArea @ 0x14051B0F4 (MiPrefetchControlArea.c)
 *     MiPageHasRelocations @ 0x1406A99D8 (MiPageHasRelocations.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall MiValidateImagePages(__int64 *a1, int a2, char a3, __int64 a4)
{
  __int64 *v4; // rbx
  __int64 v5; // rdx
  char v6; // r14
  __int64 v7; // r8
  int v8; // esi
  bool v9; // zf
  unsigned int v10; // r12d
  __int64 v11; // r15
  volatile signed __int64 *v12; // rsi
  __int64 v13; // rdi
  unsigned __int64 v14; // r13
  __int64 SharedProtos; // rax
  __int64 CurrentPrcb; // rdx
  unsigned __int64 v17; // rcx
  unsigned __int64 v18; // r9
  unsigned int v19; // edi
  __int64 v20; // rax
  unsigned __int64 v21; // rsi
  unsigned __int64 v22; // rbx
  __int64 v23; // rax
  unsigned __int64 v24; // r9
  __int64 v25; // rdx
  __int64 v26; // rax
  __int64 v27; // r8
  __int64 v28; // r8
  unsigned __int8 CurrentIrql; // r14
  ULONG_PTR v30; // r10
  __int64 v31; // rax
  __int64 v32; // rcx
  bool v33; // di
  unsigned __int16 v34; // cx
  __int16 *v35; // rbx
  unsigned __int64 v36; // rdx
  signed __int32 v37; // eax
  signed __int32 v38; // ett
  _QWORD *v39; // rdi
  unsigned int v40; // ebx
  unsigned int v41; // ebx
  __int64 v42; // rax
  __int64 v43; // r10
  unsigned __int64 v44; // rsi
  ULONG_PTR v45; // rbx
  __int64 v46; // rax
  unsigned __int64 v47; // r9
  __int64 v48; // rdx
  __int64 v49; // rax
  __int64 v50; // r8
  __int64 v51; // r14
  __int64 v52; // r8
  __int64 v53; // rax
  __int64 v54; // r8
  __int64 v55; // rax
  __int64 v56; // r8
  __int64 v57; // rax
  int v58; // r10d
  int v59; // r11d
  int EffectivePagePriorityThread; // eax
  unsigned __int64 v61; // rbx
  NTSTATUS v62; // eax
  unsigned __int64 v63; // r12
  __int64 v64; // rax
  unsigned __int64 v65; // r8
  __int64 v66; // rax
  __int64 v67; // r12
  int v68; // eax
  int v69; // ebx
  unsigned int v70; // r13d
  char v71; // al
  _DWORD *v72; // r9
  __int64 v73; // rcx
  bool v74; // di
  unsigned __int16 v75; // cx
  __int16 *v76; // rbx
  unsigned __int64 v77; // rdx
  struct _KPRCB *v78; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v80; // ett
  unsigned int v81; // ebx
  unsigned int v82; // edi
  int v83; // eax
  __int16 *v84; // r15
  unsigned __int64 v85; // rbx
  unsigned __int8 v86; // r14
  __int64 v87; // rcx
  _QWORD *v88; // rdi
  __int64 PteShadow; // rax
  __int64 v90; // rsi
  __int64 v91; // rax
  char v92; // al
  __int16 *v93; // rax
  __int64 v94; // rdx
  int v95; // eax
  struct _KTHREAD *v96; // rdi
  __int64 v97; // rbx
  __int64 v98; // rcx
  __int16 v99; // ax
  int BugCheckParameter4; // [rsp+20h] [rbp-B9h]
  unsigned __int8 v102[4]; // [rsp+40h] [rbp-99h] BYREF
  int v103; // [rsp+44h] [rbp-95h]
  int v104; // [rsp+48h] [rbp-91h]
  __int16 i; // [rsp+4Ch] [rbp-8Dh]
  __int64 v106; // [rsp+50h] [rbp-89h]
  ULONG_PTR *v107; // [rsp+58h] [rbp-81h]
  __int64 v108; // [rsp+60h] [rbp-79h]
  unsigned int v109; // [rsp+68h] [rbp-71h]
  unsigned __int64 v110; // [rsp+70h] [rbp-69h] BYREF
  __int64 v111; // [rsp+78h] [rbp-61h]
  unsigned __int64 v112; // [rsp+80h] [rbp-59h]
  __int64 v113; // [rsp+88h] [rbp-51h]
  _QWORD *v114; // [rsp+90h] [rbp-49h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-41h]
  int v116; // [rsp+A0h] [rbp-39h] BYREF
  ULONG_PTR *v117; // [rsp+A8h] [rbp-31h]
  struct _KTHREAD *CurrentThread; // [rsp+B0h] [rbp-29h]
  ULONG_PTR *v119; // [rsp+B8h] [rbp-21h]
  ULONG_PTR v120; // [rsp+C0h] [rbp-19h] BYREF
  __int64 *v121; // [rsp+C8h] [rbp-11h]
  unsigned __int64 v122; // [rsp+D0h] [rbp-9h] BYREF
  _KPROCESS *Process; // [rsp+D8h] [rbp-1h]
  __int64 v124; // [rsp+E0h] [rbp+7h] BYREF
  __int64 v125; // [rsp+E8h] [rbp+Fh]
  __int64 *v126; // [rsp+140h] [rbp+67h]
  unsigned int v129; // [rsp+158h] [rbp+7Fh]

  v129 = a4;
  v126 = a1;
  v4 = a1 + 15;
  v5 = *a1;
  v6 = a3;
  v7 = a1[16];
  v125 = v5;
  v8 = *(_BYTE *)(v5 + 14) & 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v103 = v8;
  v9 = (a1[7] & 0x4000000) == 0;
  v10 = 0;
  v113 = v7;
  v11 = 0LL;
  v102[0] = 17;
  v104 = 0;
  v106 = 0LL;
  CurrentThread = 0LL;
  BugCheckParameter2 = 0LL;
  if ( !v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v12 = (volatile signed __int64 *)(v5 + 40);
    v13 = KeAbPreAcquire(v5 + 40, 0LL, 0LL, a4);
    if ( _InterlockedCompareExchange64(v12, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v12, v13, v12);
    a1 = v126;
    v8 = v103;
    LODWORD(a4) = v129;
    v7 = v113;
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
  }
  while ( 1 )
  {
    v14 = v4[1];
    v121 = (__int64 *)v4[2];
    v9 = (*((_BYTE *)v4 + 34) & 2) == 0;
    v107 = (ULONG_PTR *)v14;
    v108 = (__int64)(v14 - v7) >> 3;
    if ( v9 )
      break;
    if ( (v6 & 1) != 0 )
      goto LABEL_343;
    if ( (a1[7] & 0x4000000) == 0 )
      break;
    if ( !v4[3] )
      goto LABEL_343;
    SharedProtos = MiGetSharedProtos(a1, (unsigned int)a4, v4);
    if ( SharedProtos )
    {
      v14 = *(_QWORD *)(SharedProtos + 32);
      v107 = (ULONG_PTR *)v14;
      break;
    }
LABEL_342:
    v7 = v113;
LABEL_343:
    v4 = v121;
    if ( !v121 )
      goto LABEL_348;
    a1 = v126;
    LODWORD(a4) = v129;
  }
  v112 = MiStartingOffset(v4, v14, v129);
  v19 = 0;
  v20 = *((unsigned int *)v4 + 11);
  v109 = 0;
  v117 = 0LL;
  v119 = (ULONG_PTR *)(v14 + 8 * v20);
  if ( v14 >= (unsigned __int64)v119 )
  {
LABEL_340:
    if ( v11 )
    {
      MiUnlockProtoPoolPage(v11, v102[0]);
      v11 = 0LL;
      v106 = 0LL;
    }
    goto LABEL_342;
  }
  while ( 2 )
  {
    if ( (v14 & 0xFFF) != 0 )
    {
      if ( v11 )
        goto LABEL_119;
    }
    else if ( v11 )
    {
      MiUnlockProtoPoolPage(v11, v102[0]);
    }
    if ( v8 == 1 )
    {
      v11 = MiLockProtoPoolPage(v14, v102);
      v106 = v11;
      goto LABEL_118;
    }
    v21 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
LABEL_21:
      v22 = *(_QWORD *)v21;
      if ( v21 + 0x90482413000LL <= 0x7F8
        && (unsigned int)MiPteHasShadow(0x90482413000LL, CurrentPrcb)
        && (v22 & 1) != 0
        && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
      {
        CurrentPrcb = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
        if ( CurrentPrcb )
        {
          v23 = *(_QWORD *)(CurrentPrcb + 8 * ((v21 >> 3) & 0x1FF));
          if ( (v23 & 0x20) != 0 )
            v22 |= 0x20uLL;
          if ( (v23 & 0x42) != 0 )
            v22 |= 0x42uLL;
        }
      }
      v122 = v22;
      if ( (v22 & 1) != 0 )
        break;
      if ( (v22 & 0x400) != 0 || (v22 & 0x800) == 0 )
        goto LABEL_333;
      if ( (unsigned int)MiInvalidPteConforms(v22, CurrentPrcb) )
      {
        v24 = MiReverseSwizzleInvalidPte(v22, CurrentPrcb, v27, v18);
        goto LABEL_46;
      }
    }
    if ( (v22 & 0x200) != 0 )
      goto LABEL_333;
    v24 = v22;
    if ( (unsigned __int64)&STACK[0x904824130D0] <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, CurrentPrcb)
      && ((v22 & 0x20) == 0 || (v22 & 0x42) == 0) )
    {
      v25 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v25 )
      {
        v26 = *(_QWORD *)(v25 + 8 * (((unsigned __int64)&v122 >> 3) & 0x1FF));
        if ( (v26 & 0x20) != 0 )
          v24 |= 0x20uLL;
        if ( (v26 & 0x42) != 0 )
          v24 |= 0x42uLL;
      }
    }
LABEL_46:
    if ( !(unsigned int)MI_IS_PFN((v24 >> 12) & 0xFFFFFFFFFLL) )
      goto LABEL_21;
    v11 = 48 * v18 - 0x58000000000LL;
    v106 = v11;
    CurrentIrql = KeGetCurrentIrql();
    v30 = 2LL;
    __writecr8(2uLL);
    v18 = 0x8000000000000000uLL;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v19);
          v18 = 0x8000000000000000uLL;
        }
      }
      while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
      v30 = 2LL;
    }
    CurrentPrcb = *(_QWORD *)v21;
    v102[0] = CurrentIrql;
    if ( v21 + 0x90482413000LL <= 0x7F8
      && (unsigned int)MiPteHasShadow(0x90482413000LL, CurrentPrcb)
      && (CurrentPrcb & 1) != 0
      && ((CurrentPrcb & 0x20) == 0 || (CurrentPrcb & 0x42) == 0) )
    {
      v28 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
      if ( v28 )
      {
        v31 = *(_QWORD *)(v28 + 8 * ((v21 >> 3) & 0x1FF));
        if ( (v31 & 0x20) != 0 )
          CurrentPrcb |= 0x20uLL;
        if ( (v31 & 0x42) != 0 )
          CurrentPrcb |= 0x42uLL;
      }
    }
    if ( CurrentPrcb != v22 )
    {
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v19 = 0;
      goto LABEL_21;
    }
    if ( (CurrentPrcb & 1) == 0 )
    {
      if ( (*(_BYTE *)(v11 + 34) & 7u) < 6 )
        goto LABEL_332;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      MmAccessFault(v30, v14);
      v19 = 0;
      goto LABEL_21;
    }
    if ( (*(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL) == 1 )
    {
LABEL_332:
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      v19 = 0;
LABEL_333:
      v8 = v103;
      v11 = 0LL;
      v102[0] = 17;
      v106 = 0LL;
LABEL_334:
      if ( v8 == 1 )
      {
        MmAccessFault(2uLL, v14);
        goto LABEL_338;
      }
      v17 = (unsigned __int64)(4096 - (unsigned int)(v14 & 0xFFF)) >> 3;
      v112 += v17 << 12;
      LODWORD(v108) = v17 + v108;
      v14 += 8 * v17;
      goto LABEL_337;
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v11, CurrentPrcb, v28, v18) )
      goto LABEL_93;
    v32 = *(_QWORD *)(v11 + 40);
    v33 = 0;
    if ( (v32 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0 )
    {
      v33 = 1;
    }
    else
    {
      v36 = v18 | *(_QWORD *)(v11 + 8);
      if ( v36 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && v36 >= 0xFFFFF68000000000uLL )
      {
        v33 = ((*(unsigned __int8 *)(v11 + 35) >> 5) & 1) != 0;
      }
    }
    v34 = (HIDWORD(v32) >> 8) & 0x3FF;
    if ( v34 == 1023 )
      v35 = MiSystemPartition;
    else
      v35 = *(__int16 **)(qword_14034F0E8 + 8LL * v34);
    if ( !v33 || (unsigned int)MiChargeCommit((__int64)v35, 1uLL, 4) )
    {
      if ( v35 == MiSystemPartition )
      {
        CurrentPrcb = (__int64)KeGetCurrentPrcb();
        v37 = *(_DWORD *)(CurrentPrcb + 24516);
        while ( v37 )
        {
          if ( v37 == -1 )
            break;
          v38 = v37;
          v37 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24516), v37 - 1, v37);
          if ( v38 == v37 )
            goto LABEL_91;
        }
      }
      if ( !(unsigned int)MiChargePartitionResidentAvailable(v35, 1LL, 0xFFFFFFFFLL, v18) )
      {
        if ( v33 )
          MiReturnCommit(v35, 1LL);
        goto LABEL_94;
      }
LABEL_91:
      if ( v35 == MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_14034FAC0, 1uLL);
LABEL_93:
      ++*(_WORD *)(v11 + 32);
    }
LABEL_94:
    v39 = (_QWORD *)(*(_QWORD *)(v11 + 8) | 0x8000000000000000uLL);
    v9 = (*(_BYTE *)(v11 + 34) & 0x20) == 0;
    v114 = v39;
    if ( !v9 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql != 17 )
          __writecr8(CurrentIrql);
        v40 = 0;
        for ( i = *(_WORD *)(v11 + 34); (i & 0x20) != 0; i = *(_WORD *)(v11 + 34) )
        {
          if ( (++v40 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v40);
        }
        __writecr8(2uLL);
        v41 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
          {
            if ( (++v41 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v41);
          }
          while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0
               || _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
        }
      }
      while ( (*(_BYTE *)(v11 + 34) & 0x20) != 0 );
      v39 = v114;
      v10 = v104;
      v14 = (unsigned __int64)v107;
    }
    *(_BYTE *)(v11 + 34) |= 0x20u;
    v17 = 0x4000000000000000LL;
    if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 )
    {
      v42 = *v39;
      CurrentPrcb = (__int64)(v39 + 0x12090482600LL);
      if ( (unsigned __int64)(v39 + 0x12090482600LL) <= 0x7F8 )
        LOBYTE(v42) = MiReadPteShadow(v39, *v39);
      if ( (v42 & 0x20) == 0 )
        MiWriteValidPteVolatile(v39, 1LL);
    }
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v8 = v103;
    v19 = 0;
LABEL_118:
    if ( !v11 )
      goto LABEL_334;
LABEL_119:
    v43 = 0x90482413000LL;
    v44 = v14 + 0x90482413000LL;
    while ( 1 )
    {
      v45 = *(_QWORD *)v14;
      if ( v44 <= 0x7F8
        && (unsigned int)MiPteHasShadow(v17, CurrentPrcb)
        && (v45 & 1) != 0
        && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
      {
        v17 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
        CurrentPrcb = *(_QWORD *)(v17 + 1520);
        if ( CurrentPrcb )
        {
          v46 = *(_QWORD *)(CurrentPrcb + 8 * ((v14 >> 3) & 0x1FF));
          if ( (v46 & 0x20) != 0 )
            v45 |= 0x20uLL;
          if ( (v46 & 0x42) != 0 )
            v45 |= 0x42uLL;
        }
      }
      v120 = v45;
      if ( (v45 & 1) != 0 )
      {
        v47 = v45;
        if ( (unsigned __int64)&v120 + v43 <= 0x7F8
          && (unsigned int)MiPteHasShadow(v17, CurrentPrcb)
          && ((v45 & 0x20) == 0 || (v45 & 0x42) == 0) )
        {
          v48 = *(_QWORD *)&KeGetCurrentThread()->ApcState.Process[2].ProcessLock;
          if ( v48 )
          {
            v49 = *(_QWORD *)(v48 + 8 * (((unsigned __int64)&v120 >> 3) & 0x1FF));
            if ( (v49 & 0x20) != 0 )
              v47 |= 0x20uLL;
            if ( (v49 & 0x42) != 0 )
              v47 |= 0x42uLL;
          }
        }
        goto LABEL_144;
      }
      if ( (v45 & 0x400) != 0 || (v45 & 0x800) == 0 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(v45, CurrentPrcb) )
      {
        v47 = MiReverseSwizzleInvalidPte(v17, CurrentPrcb, v50, v18);
LABEL_144:
        if ( (unsigned int)MI_IS_PFN((v47 >> 12) & 0xFFFFFFFFFLL) )
        {
          v51 = 48 * v18 - 0x58000000000LL;
          v111 = v51;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) )
          {
            v17 = 0x8000000000000000uLL;
            do
            {
              if ( (++v19 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              {
                _mm_pause();
              }
              else
              {
                HvlNotifyLongSpinWait(v19);
                v17 = 0x8000000000000000uLL;
              }
            }
            while ( (*(_QWORD *)(v51 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v51 + 24), 0x3FuLL) );
            v43 = 0x90482413000LL;
          }
          CurrentPrcb = *(_QWORD *)v14;
          if ( v44 <= 0x7F8
            && (unsigned int)MiPteHasShadow(v17, CurrentPrcb)
            && (CurrentPrcb & 1) != 0
            && ((CurrentPrcb & 0x20) == 0 || (CurrentPrcb & 0x42) == 0) )
          {
            v17 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v52 = *(_QWORD *)(v17 + 1520);
            if ( v52 )
            {
              v53 = *(_QWORD *)(v52 + 8 * ((v14 >> 3) & 0x1FF));
              if ( (v53 & 0x20) != 0 )
                CurrentPrcb |= 0x20uLL;
              if ( (v53 & 0x42) != 0 )
                CurrentPrcb |= 0x42uLL;
            }
          }
          if ( CurrentPrcb == v45 )
          {
            v19 = 0;
            goto LABEL_168;
          }
          _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          v19 = 0;
        }
      }
    }
    v51 = 0LL;
    v111 = 0LL;
LABEL_168:
    v124 = v51;
    if ( !v51 )
    {
      if ( v103 )
      {
        CurrentPrcb = *(_QWORD *)v14;
        if ( v44 <= 0x7F8
          && (unsigned int)MiPteHasShadow(v17, CurrentPrcb)
          && (CurrentPrcb & 1) != 0
          && ((CurrentPrcb & 0x20) == 0 || (CurrentPrcb & 0x42) == 0) )
        {
          v17 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
          v54 = *(_QWORD *)(v17 + 1520);
          if ( v54 )
          {
            v55 = *(_QWORD *)(v54 + 8 * ((v14 >> 3) & 0x1FF));
            if ( (v55 & 0x20) != 0 )
              CurrentPrcb |= 0x20uLL;
            if ( (v55 & 0x42) != 0 )
              CurrentPrcb |= 0x42uLL;
          }
        }
        v110 = CurrentPrcb;
        if ( (CurrentPrcb & 0x400) == 0 )
        {
          if ( (unsigned __int64)&v110 + v43 <= 0x7F8
            && (unsigned int)MiPteHasShadow(v17, CurrentPrcb)
            && (CurrentPrcb & 1) != 0
            && ((CurrentPrcb & 0x20) == 0 || (CurrentPrcb & 0x42) == 0) )
          {
            v17 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
            v56 = *(_QWORD *)(v17 + 1520);
            if ( v56 )
            {
              v57 = *(_QWORD *)(v56 + 8 * (((unsigned __int64)&v110 >> 3) & 0x1FF));
              if ( (v57 & 0x20) != 0 )
                CurrentPrcb |= 0x20uLL;
              if ( (v57 & 0x42) != 0 )
                CurrentPrcb |= 0x42uLL;
            }
          }
          LOBYTE(CurrentPrcb) = (unsigned __int8)CurrentPrcb >> 2;
          if ( (CurrentPrcb & 1) != 0 )
          {
            MiUnlockProtoPoolPage(v11, v102[0]);
            v11 = 0LL;
            v106 = 0LL;
            if ( (a3 & 2) == 0 || (unsigned int)MiPageHasRelocations(v126, (unsigned int)v108) )
            {
              if ( (unsigned int)MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread()) <= 5 )
                EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
              else
                EffectivePagePriorityThread = 5;
              if ( (ULONG_PTR *)v14 == v117 )
              {
                v61 = 4096LL;
                v19 = v109 + 1;
              }
              else
              {
                v117 = (ULONG_PTR *)v14;
                v61 = (__int64)((__int64)v119 - v14) >> 3 << 12;
              }
              v109 = v19;
              v62 = MiPrefetchControlArea(v59, v58, v61, EffectivePagePriorityThread, 2, v129);
              v104 = v62;
              v10 = v62;
              if ( v62 < 0 )
              {
                if ( v62 != -1073741670 && v62 != -1073741663 && v62 != -1073741801 && v61 > 0x1000 )
                  FsRtlIsTotalDeviceFailure(v62);
                KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
                v8 = v103;
                v19 = 0;
LABEL_338:
                if ( v14 >= (unsigned __int64)v119 )
                {
                  v6 = a3;
                  goto LABEL_340;
                }
                continue;
              }
LABEL_249:
              v8 = v103;
              v19 = 0;
              goto LABEL_338;
            }
          }
        }
      }
LABEL_331:
      LODWORD(v108) = v108 + 1;
      v14 += 8LL;
      v112 += 4096LL;
      v11 = v106;
      v19 = 0;
      v8 = v103;
LABEL_337:
      v107 = (ULONG_PTR *)v14;
      goto LABEL_338;
    }
    break;
  }
  v63 = *(_QWORD *)v14;
  if ( v44 <= 0x7F8
    && (unsigned int)MiPteHasShadow(v17, CurrentPrcb)
    && (v63 & 1) != 0
    && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
  {
    v17 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
    CurrentPrcb = *(_QWORD *)(v17 + 1520);
    if ( CurrentPrcb )
    {
      v64 = *(_QWORD *)(CurrentPrcb + 8 * ((v14 >> 3) & 0x1FF));
      if ( (v64 & 0x20) != 0 )
        v63 |= 0x20uLL;
      if ( (v64 & 0x42) != 0 )
        v63 |= 0x42uLL;
    }
  }
  v110 = v63;
  v65 = v63 & 1;
  if ( (v63 & 1) != 0 )
  {
    if ( (unsigned __int64)&v110 + v43 <= 0x7F8
      && (unsigned int)MiPteHasShadow(v17, CurrentPrcb)
      && ((v63 & 0x20) == 0 || (v63 & 0x42) == 0) )
    {
      v17 = (unsigned __int64)KeGetCurrentThread()->ApcState.Process;
      CurrentPrcb = *(_QWORD *)(v17 + 1520);
      if ( CurrentPrcb )
      {
        v66 = *(_QWORD *)(CurrentPrcb + 8 * (((unsigned __int64)&v110 >> 3) & 0x1FF));
        if ( (v66 & 0x20) != 0 )
          v63 |= 0x20uLL;
        if ( (v66 & 0x42) != 0 )
          v63 |= 0x42uLL;
      }
    }
  }
  else
  {
    v63 = MiReverseSwizzleInvalidPte(v63, CurrentPrcb, v65, v18);
  }
  v67 = (v63 >> 12) & 0xFFFFFFFFFLL;
  if ( (a3 & 4) != 0 )
  {
    v17 = *(_QWORD *)(v51 + 8) | 0x8000000000000000uLL;
    CurrentPrcb = 0x98000000000LL;
    if ( (v17 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
       || v17 < 0xFFFFF68000000000uLL)
      && ((*(unsigned __int8 *)(v51 + 35) >> 5) & 1) != 0 )
    {
      MiDriverPageIsDangling(v51);
      *(_BYTE *)(v51 + 35) &= ~0x20u;
    }
    goto LABEL_233;
  }
  if ( (a3 & 1) != 0 && ((*(_QWORD *)(v51 + 40) >> 54) & 7) == 3
    || (v68 = *(_DWORD *)(v51 + 16), v18 = v51 + 16, v69 = v103, v114 = (_QWORD *)(v51 + 16), (v68 & 0x400) == 0)
    && !v103 )
  {
LABEL_233:
    _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 = v104;
    goto LABEL_331;
  }
  if ( !v65 && (*(_BYTE *)(v51 + 34) & 0x20) != 0 )
  {
    if ( (a3 & 2) == 0 || (v126[7] & 2) != 0 )
    {
      v116 = 1;
      MiObtainProtoReference(v11, 1);
      MiWaitForCollidedFaultComplete(v51, v11, 0LL, 0LL, 17, v102[0], &v116);
      v8 = v103;
      v11 = 0LL;
      v106 = 0LL;
      v10 = 0;
      v104 = 0;
      goto LABEL_338;
    }
    MiDeleteLockedTransitionPte((ULONG_PTR *)v14, v51, 0x11u, 1LL);
    v10 = v104;
    goto LABEL_331;
  }
  v70 = 8;
  if ( !v65 )
  {
    v71 = *(_BYTE *)(v51 + 35);
    if ( (v71 & 8) != 0 )
      v70 = v71 & 7;
    if ( !(unsigned int)MiUnlinkPageFromList(v51) )
    {
      MiDiscardTransitionPte(v51);
      _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v10 = v104;
      v14 = (unsigned __int64)v107;
      if ( v69 == 1 )
        goto LABEL_249;
      goto LABEL_331;
    }
    v18 = (unsigned __int64)v114;
    *(_QWORD *)(v51 + 24) &= 0xC000000000000000uLL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v51, CurrentPrcb, v65, v18) )
    goto LABEL_273;
  v73 = *(_QWORD *)(v51 + 40);
  v74 = 0;
  if ( (v73 & 0x200000000000000LL) != 0 && (*v72 & 0x400LL) != 0 )
  {
    v74 = 1;
  }
  else
  {
    v77 = *(_QWORD *)(v51 + 8) | 0x8000000000000000uLL;
    if ( v77 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
      && v77 >= 0xFFFFF68000000000uLL )
    {
      v74 = ((*(unsigned __int8 *)(v51 + 35) >> 5) & 1) != 0;
    }
  }
  v75 = (HIDWORD(v73) >> 8) & 0x3FF;
  if ( v75 == 1023 )
    v76 = MiSystemPartition;
  else
    v76 = *(__int16 **)(qword_14034F0E8 + 8LL * v75);
  if ( !v74 || (unsigned int)MiChargeCommit((__int64)v76, 1uLL, 4) )
  {
    if ( v76 == MiSystemPartition )
    {
      v78 = KeGetCurrentPrcb();
      CachedResidentAvailable = v78->CachedResidentAvailable;
      while ( CachedResidentAvailable )
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v80 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&v78->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v80 == CachedResidentAvailable )
          goto LABEL_271;
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v76, 1LL, 0xFFFFFFFFLL, v72) )
    {
      if ( v74 )
        MiReturnCommit(v76, 1LL);
      goto LABEL_274;
    }
LABEL_271:
    if ( v76 == MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_14034FAC0, 1uLL);
LABEL_273:
    ++*(_WORD *)(v51 + 32);
  }
LABEL_274:
  _InterlockedAnd64((volatile signed __int64 *)(v51 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v81 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v81 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        _mm_pause();
      else
        HvlNotifyLongSpinWait(v81);
    }
    while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
  }
  *(_BYTE *)(v11 + 34) &= ~0x20u;
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v11) )
    MiPfnReferenceCountIsZero(v11, (v11 + 0x58000000000LL) / 48);
  if ( v102[0] == 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v102[0]);
  }
  v82 = 0;
  v106 = 0LL;
  if ( (a3 & 2) == 0 )
  {
    v83 = MiValidateImagePfn((_DWORD)v126, v112, (_DWORD)Process, v108, BugCheckParameter4, v67);
    goto LABEL_293;
  }
  if ( (MiFlags & 0x100000) == 0
    || (*((_DWORD *)v126 + 23) & 0xC000000) == 0
    || ((*(_QWORD *)(v51 + 40) >> 54) & 7) != 3 )
  {
    v83 = MiRelocateImagePfn((_DWORD)v126, a2, v108, v67, 0LL);
LABEL_293:
    v104 = v83;
    goto LABEL_294;
  }
  v104 = 0;
LABEL_294:
  if ( v70 != 8 && !BugCheckParameter2 )
    BugCheckParameter2 = MiCreateDecayPfn(v70);
  v84 = 0LL;
  v85 = 0LL;
  v86 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v87 = v111;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v111 + 24), 0x3FuLL) )
  {
    do
    {
      if ( (++v82 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
      {
        _mm_pause();
      }
      else
      {
        HvlNotifyLongSpinWait(v82);
        v87 = v111;
      }
    }
    while ( (*(_QWORD *)(v87 + 24) & 0x8000000000000000uLL) != 0
         || _interlockedbittestandset64((volatile signed __int32 *)(v87 + 24), 0x3FuLL) );
  }
  v88 = v114;
  v102[0] = v86;
  if ( (a3 & 2) != 0 )
  {
    PteShadow = *v114;
    if ( (unsigned __int64)(v114 + 0x12090482600LL) <= 0x7F8 )
      PteShadow = MiReadPteShadow(v114, *v114);
    v90 = v111;
    v110 = PteShadow;
    if ( (PteShadow & 0x400) == 0 )
    {
      v85 = MiCaptureDirtyBitToPfn(v111);
      v84 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v90 + 40)) >> 8) & 0x3FF);
    }
  }
  else
  {
    v90 = v111;
  }
  if ( (unsigned int)MI_REMOVE_LOCKED_PAGE_CHARGE_RETURN_DECREF(v90) )
  {
    if ( v70 != 8 && (*(_BYTE *)(v90 + 34) & 0x10) == 0 && (*(_QWORD *)(v90 + 24) & 0x4000000000000000LL) == 0 )
    {
      MiInsertAndUnlockStandbyPages(BugCheckParameter2, &v124, 1u, v86);
      v102[0] = 17;
      goto LABEL_325;
    }
    v91 = *(_QWORD *)(v90 + 24);
    if ( (v91 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
      KeBugCheckEx(0x4Eu, 7uLL, v67, *(_QWORD *)(v90 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
    if ( (v91 & 0x4000000000000000LL) != 0 )
    {
      v92 = *(_BYTE *)(v90 + 35);
      if ( (v92 & 0x10) != 0 )
        *(_BYTE *)(v90 + 35) = v92 & 0xEF;
      v93 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v90 + 40)) >> 8) & 0x3FF);
      MiReleasePageFileSpace(v93, *v88, 1LL);
      MiInsertPageInFreeOrZeroedList(v67);
    }
    else
    {
      v94 = 8LL;
      if ( (*(_BYTE *)(v90 + 34) & 0x10) == 0 )
        v94 = 4LL;
      MiInsertPageInList(v90, v94);
    }
  }
  if ( v86 != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v90 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_325:
  if ( v85 )
    MiReleasePageFileInfo(v84, v85, 1LL);
  if ( v102[0] != 17 )
  {
    __writecr8(v102[0]);
    v102[0] = 17;
  }
  v10 = v104;
  if ( v104 >= 0 )
  {
    v14 = (unsigned __int64)v107;
    goto LABEL_331;
  }
  v95 = 58;
  if ( v104 == -1073741670 )
    v95 = 36;
  dword_14034E980 = v95;
LABEL_348:
  if ( BugCheckParameter2 )
    MiDecayPfnFullyInitialized(BugCheckParameter2);
  v96 = CurrentThread;
  if ( CurrentThread )
  {
    v97 = v125;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v125 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v97 + 40);
    KeAbPostRelease(v97 + 40);
    v99 = v96->SpecialApcDisable + 1;
    v96->SpecialApcDisable = v99;
    if ( !v99 && ($CD287064E7C9F7953DE243E927CFCB99 *)v96->ApcState.ApcListHead[0].Flink != &v96->152 )
      KiCheckForKernelApcDelivery(v98);
  }
  return v10;
}
