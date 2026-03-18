/*
 * XREFs of MiValidateImagePages @ 0x140064AE0
 * Callers:
 *     MiRelocateImage @ 0x1403C5E30 (MiRelocateImage.c)
 *     MiUnloadSystemImage @ 0x1403CF92C (MiUnloadSystemImage.c)
 *     MiValidateSectionCreate @ 0x1404AEAF4 (MiValidateSectionCreate.c)
 *     MiSwitchBaseAddress @ 0x1404B1F88 (MiSwitchBaseAddress.c)
 * Callees:
 *     MiInsertAndUnlockStandbyPages @ 0x14000FE50 (MiInsertAndUnlockStandbyPages.c)
 *     MiDeleteLockedTransitionPte @ 0x140010C30 (MiDeleteLockedTransitionPte.c)
 *     MiPfnReferenceCountIsZero @ 0x1400115F0 (MiPfnReferenceCountIsZero.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiGetEffectivePagePriorityThread @ 0x140011A18 (MiGetEffectivePagePriorityThread.c)
 *     MiCreateDecayPfn @ 0x140011C44 (MiCreateDecayPfn.c)
 *     MiWaitForCollidedFaultComplete @ 0x14001F86C (MiWaitForCollidedFaultComplete.c)
 *     ExfAcquirePushLockSharedEx @ 0x140020AB0 (ExfAcquirePushLockSharedEx.c)
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     FsRtlIsTotalDeviceFailure @ 0x140030778 (FsRtlIsTotalDeviceFailure.c)
 *     ExfReleasePushLockShared @ 0x1400309E0 (ExfReleasePushLockShared.c)
 *     MiInsertPageInList @ 0x14003DC20 (MiInsertPageInList.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x14003F0B0 (MiInsertPageInFreeOrZeroedList.c)
 *     KeAbPostRelease @ 0x140042090 (KeAbPostRelease.c)
 *     KeAbPreAcquire @ 0x140042DA0 (KeAbPreAcquire.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiAreChargesNeededToLockPage @ 0x140066150 (MiAreChargesNeededToLockPage.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MI_IS_PFN_FILE_ONLY @ 0x140071340 (MI_IS_PFN_FILE_ONLY.c)
 *     MiStartingOffset @ 0x14007C940 (MiStartingOffset.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_IS_PFN_COMMIT_NOT_CHARGED @ 0x1400AA2E4 (MI_IS_PFN_COMMIT_NOT_CHARGED.c)
 *     MiObtainProtoReference @ 0x1400AB334 (MiObtainProtoReference.c)
 *     MiDecayPfnFullyInitialized @ 0x1400B253C (MiDecayPfnFullyInitialized.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     MI_GET_PAGING_FILE_OFFSET @ 0x1400BB740 (MI_GET_PAGING_FILE_OFFSET.c)
 *     MiChargePartitionResidentAvailable @ 0x1400E30F8 (MiChargePartitionResidentAvailable.c)
 *     MiReleasePageFileSpace @ 0x1400E5464 (MiReleasePageFileSpace.c)
 *     MI_IS_PFN_SYSTEM_CHARGED @ 0x1400EEC9C (MI_IS_PFN_SYSTEM_CHARGED.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiDriverPageIsDangling @ 0x1401CEE4C (MiDriverPageIsDangling.c)
 *     MiGetSharedProtos @ 0x1401E2F60 (MiGetSharedProtos.c)
 *     MiRelocateImagePfn @ 0x14041AB80 (MiRelocateImagePfn.c)
 *     MiPrefetchControlArea @ 0x1404AF248 (MiPrefetchControlArea.c)
 *     MiValidateImagePfn @ 0x1404DB440 (MiValidateImagePfn.c)
 *     MiPageHasRelocations @ 0x14062BAA8 (MiPageHasRelocations.c)
 */

__int64 __fastcall MiValidateImagePages(__int64 *a1, int a2, char a3, unsigned int a4)
{
  __int64 *v4; // r15
  __int64 v5; // rcx
  __int64 *v6; // rdi
  __int64 v7; // rdx
  int v8; // r13d
  bool v9; // zf
  unsigned int v10; // r14d
  __int64 v11; // rsi
  unsigned __int64 *v12; // rdi
  __int64 v13; // rbx
  unsigned __int64 v14; // r12
  __int64 v15; // rbx
  __int64 SharedProtos; // rax
  __int64 v17; // rdi
  __int64 v18; // rbx
  __int64 v19; // rax
  unsigned __int64 v20; // r9
  __int64 v21; // r9
  unsigned __int8 CurrentIrql; // r14
  __int64 v23; // rax
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int16 v26; // ax
  bool v27; // di
  unsigned __int16 v28; // cx
  int *v29; // rbx
  unsigned __int64 v30; // rdx
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v33; // ett
  unsigned __int64 v34; // rbx
  __int16 v35; // ax
  unsigned __int64 v36; // rax
  unsigned __int64 v37; // r9
  __int64 v38; // r9
  __int64 v39; // rdi
  __int64 v40; // rax
  int v41; // edx
  int v42; // r8d
  int EffectivePagePriorityThread; // eax
  unsigned __int64 v44; // rbx
  int v45; // edi
  NTSTATUS v46; // eax
  __int64 v47; // r8
  unsigned __int64 v48; // rbx
  __int64 v49; // r13
  unsigned int v50; // r15d
  char v51; // al
  _DWORD *v52; // r10
  __int64 v53; // r9
  char v54; // r14
  int v55; // r12d
  int v56; // eax
  char v57; // r11
  unsigned __int16 v58; // r9
  int *v59; // rbx
  struct _KPRCB *v60; // rdx
  signed __int32 v61; // eax
  signed __int32 v62; // ett
  __int16 v63; // r8
  char v64; // r9
  __int16 v65; // r8
  __int64 v66; // r10
  __int64 v67; // rax
  int v68; // edx
  int v69; // r14d
  unsigned __int64 v70; // r8
  unsigned __int64 v71; // r9
  unsigned __int16 v72; // r10
  int *v73; // rbx
  struct _KPRCB *v74; // r8
  unsigned __int64 v75; // r9
  __int64 v76; // rdx
  signed __int32 v77; // eax
  __int64 v78; // rbx
  unsigned __int64 v79; // rcx
  int v80; // eax
  unsigned __int8 v81; // r13
  __int16 v82; // dx
  __int16 v83; // dx
  __int64 v84; // r10
  __int64 v85; // rax
  int v86; // r15d
  unsigned __int64 v87; // rcx
  int v88; // r9d
  __int64 v89; // r11
  unsigned __int16 v90; // r10
  int *v91; // r14
  struct _KPRCB *v92; // r8
  unsigned __int64 v93; // r9
  __int64 v94; // rdx
  signed __int32 v95; // eax
  __int64 v96; // rax
  char v97; // al
  __int64 v98; // rax
  unsigned int v99; // edx
  unsigned __int64 v100; // rcx
  int v101; // eax
  __int64 v102; // rdi
  __int64 v103; // rbx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v106[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v107; // [rsp+44h] [rbp-BCh]
  __int64 v108; // [rsp+48h] [rbp-B8h]
  __int16 i; // [rsp+50h] [rbp-B0h]
  int v110; // [rsp+54h] [rbp-ACh]
  __int64 v111; // [rsp+58h] [rbp-A8h]
  int v112; // [rsp+60h] [rbp-A0h]
  int v113; // [rsp+64h] [rbp-9Ch]
  __int64 v114; // [rsp+68h] [rbp-98h]
  unsigned __int64 v115; // [rsp+70h] [rbp-90h] BYREF
  ULONG_PTR DecayPfn; // [rsp+78h] [rbp-88h]
  unsigned __int64 v117; // [rsp+80h] [rbp-80h]
  __int64 *v118; // [rsp+88h] [rbp-78h]
  int v119; // [rsp+90h] [rbp-70h] BYREF
  int v120; // [rsp+94h] [rbp-6Ch] BYREF
  int v121; // [rsp+98h] [rbp-68h] BYREF
  int v122; // [rsp+A0h] [rbp-60h] BYREF
  int v123; // [rsp+A4h] [rbp-5Ch] BYREF
  int v124; // [rsp+A8h] [rbp-58h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+B0h] [rbp-50h]
  __int64 v126; // [rsp+B8h] [rbp-48h] BYREF
  struct _KTHREAD *CurrentThread; // [rsp+C0h] [rbp-40h]
  unsigned __int64 v128; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v129; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v130; // [rsp+D8h] [rbp-28h]
  __int64 *v131; // [rsp+E0h] [rbp-20h]
  __int64 v132; // [rsp+E8h] [rbp-18h]
  _KPROCESS *Process; // [rsp+F0h] [rbp-10h]
  __int64 v134; // [rsp+F8h] [rbp-8h] BYREF
  __int64 v135; // [rsp+100h] [rbp+0h]
  char v138; // [rsp+170h] [rbp+70h]
  unsigned int v139; // [rsp+178h] [rbp+78h]

  v139 = a4;
  v138 = a3;
  v4 = a1;
  v5 = *a1;
  v135 = v5;
  v106[0] = 17;
  v6 = v4 + 15;
  v7 = v4[16];
  v8 = *(_BYTE *)(v5 + 14) & 1;
  Process = KeGetCurrentThread()->ApcState.Process;
  v9 = (v4[7] & 0x4000000) == 0;
  v10 = 0;
  v110 = v8;
  v11 = 0LL;
  v118 = v4 + 15;
  v114 = v7;
  v107 = 0;
  CurrentThread = 0LL;
  DecayPfn = 0LL;
  if ( !v9 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v12 = (unsigned __int64 *)(v5 + 40);
    v13 = KeAbPreAcquire(v5 + 40, 0LL, 0LL);
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)v12, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v12, v13, (ULONG_PTR)v12);
    a3 = v138;
    v6 = v4 + 15;
    a4 = v139;
    v7 = v114;
    if ( v13 )
      *(_BYTE *)(v13 + 26) |= 1u;
  }
LABEL_6:
  v14 = v6[1];
  v131 = (__int64 *)v6[2];
  v15 = (__int64)(v14 - v7) >> 3;
  v9 = (*((_BYTE *)v6 + 34) & 2) == 0;
  v117 = v14;
  v108 = v15;
  if ( !v9 )
  {
    if ( (a3 & 1) != 0 )
      goto LABEL_310;
    if ( (v4[7] & 0x4000000) != 0 )
    {
      if ( !v6[3] )
        goto LABEL_310;
      SharedProtos = MiGetSharedProtos(v4, a4, v6);
      if ( !SharedProtos )
        goto LABEL_309;
      v14 = *(_QWORD *)(SharedProtos + 32);
      v117 = v14;
    }
  }
  v17 = MiStartingOffset(v6, v14, v139);
  v111 = v17;
  v112 = 0;
  v130 = 0LL;
  v129 = v14 + 8LL * *((unsigned int *)v118 + 11);
  if ( v14 >= v129 )
    goto LABEL_307;
  while ( 2 )
  {
    if ( (v14 & 0xFFF) != 0 )
    {
      if ( v11 )
        goto LABEL_79;
    }
    else if ( v11 )
    {
      MiUnlockProtoPoolPage(v11, v106[0]);
    }
    if ( v8 == 1 )
    {
      v11 = MiLockProtoPoolPage(v14, v106);
      goto LABEL_78;
    }
    v18 = ((v14 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    while ( 1 )
    {
      while ( 1 )
      {
        do
        {
          v19 = MI_READ_PTE_LOCK_FREE(v18);
          v126 = v19;
          v20 = v19;
          if ( (v19 & 1) != 0 )
          {
            if ( (v19 & 0x200) != 0 )
              goto LABEL_301;
            v20 = MI_READ_PTE_LOCK_FREE(&v126);
          }
          else if ( (v19 & 0x400) != 0 || (v19 & 0x800) == 0 )
          {
            goto LABEL_301;
          }
        }
        while ( !MI_IS_PFN((v20 >> 12) & 0xFFFFFFFFFLL) );
        v11 = 48 * v21 - 0x58000000000LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v122 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v122);
            while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
          v8 = v110;
        }
        v106[0] = CurrentIrql;
        v23 = MI_READ_PTE_LOCK_FREE(v18);
        if ( v23 == v126 )
          break;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
      }
      if ( (v23 & 1) != 0 )
        break;
      if ( (*(_BYTE *)(v11 + 34) & 7u) < 6 )
        goto LABEL_300;
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      MmAccessFault(2uLL, v14, 0, 0LL);
    }
    v24 = *(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( v24 == 1 )
    {
LABEL_300:
      _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
LABEL_301:
      v106[0] = 17;
      v11 = 0LL;
LABEL_302:
      if ( v8 == 1 )
      {
        MmAccessFault(2uLL, v14, 0, 0LL);
        v10 = v107;
        LODWORD(v15) = v108;
        goto LABEL_306;
      }
      v10 = v107;
      v100 = (unsigned __int64)(4096 - (unsigned int)(v14 & 0xFFF)) >> 3;
      v17 += v100 << 12;
      v15 = (unsigned int)(v100 + v108);
      v14 += 8 * v100;
      goto LABEL_305;
    }
    v25 = *(_QWORD *)(v11 + 40);
    if ( (v25 & 0x10000000000000LL) != 0 )
      goto LABEL_66;
    v26 = *(_WORD *)(v11 + 32);
    if ( v26 )
    {
      if ( v26 != 1 )
      {
        if ( v26 != 2 || !v24 )
          goto LABEL_66;
LABEL_44:
        if ( (*(_BYTE *)(v11 + 34) & 8) == 0 )
          goto LABEL_66;
        goto LABEL_45;
      }
      if ( !v24 )
        goto LABEL_44;
    }
LABEL_45:
    v27 = 0;
    if ( (v25 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0 )
    {
      v27 = 1;
    }
    else
    {
      v30 = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
      if ( v30 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && v30 >= 0xFFFFF68000000000uLL )
      {
        v27 = ((*(unsigned __int8 *)(v11 + 35) >> 5) & 1) != 0;
      }
    }
    v28 = (HIDWORD(v25) >> 8) & 0x3FF;
    if ( v28 == 1023 )
      v29 = &MiSystemPartition;
    else
      v29 = *(int **)(qword_1402FEC28 + 8LL * v28);
    if ( v27 && !(unsigned int)MiChargeCommit((unsigned __int64)v29, 1uLL, 4uLL) )
      goto LABEL_67;
    if ( v29 == &MiSystemPartition )
    {
      CurrentPrcb = KeGetCurrentPrcb();
      CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
      while ( CachedResidentAvailable )
      {
        if ( CachedResidentAvailable == -1 )
          break;
        v33 = CachedResidentAvailable;
        CachedResidentAvailable = _InterlockedCompareExchange(
                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                    CachedResidentAvailable - 1,
                                    CachedResidentAvailable);
        if ( v33 == CachedResidentAvailable )
          goto LABEL_64;
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v29, 1LL, 0xFFFFFFFFLL) )
    {
      if ( v27 )
        MiReturnCommit(v29, 1LL);
      goto LABEL_67;
    }
LABEL_64:
    if ( v29 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1402FF600, 1uLL);
LABEL_66:
    ++*(_WORD *)(v11 + 32);
LABEL_67:
    v34 = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
    if ( (*(_BYTE *)(v11 + 34) & 0x20) != 0 )
    {
      do
      {
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( CurrentIrql != 17 )
          __writecr8(CurrentIrql);
        v35 = *(_WORD *)(v11 + 34);
        v121 = 0;
        for ( i = v35; (i & 0x20) != 0; i = *(_WORD *)(v11 + 34) )
          KeYieldProcessorEx(&v121);
        MiLockPageInline(v11);
      }
      while ( (*(_BYTE *)(v11 + 34) & 0x20) != 0 );
      v4 = a1;
      v8 = v110;
    }
    *(_BYTE *)(v11 + 34) |= 0x20u;
    if ( (*(_QWORD *)(v11 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v34) & 0x20) == 0 )
      MI_WRITE_VALID_PTE_VOLATILE(v34, 1LL);
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v10 = v107;
    LODWORD(v15) = v108;
    v17 = v111;
LABEL_78:
    if ( !v11 )
      goto LABEL_302;
LABEL_79:
    while ( 1 )
    {
      v36 = MI_READ_PTE_LOCK_FREE(v14);
      v128 = v36;
      if ( (v36 & 1) == 0 )
        break;
      v37 = MI_GET_PAGE_FRAME_FROM_PTE(&v128);
LABEL_84:
      if ( MI_IS_PFN(v37) )
      {
        v39 = 48 * v38 - 0x58000000000LL;
        v124 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v124);
            while ( (*(_QWORD *)(v39 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
          v4 = a1;
        }
        v40 = MI_READ_PTE_LOCK_FREE(v14);
        if ( v40 == v128 )
          goto LABEL_92;
        _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      }
    }
    if ( (v36 & 0x400) == 0 && (v36 & 0x800) != 0 )
    {
      v37 = (v36 >> 12) & 0xFFFFFFFFFLL;
      goto LABEL_84;
    }
    v39 = 0LL;
LABEL_92:
    v134 = v39;
    if ( !v39 )
    {
      if ( !v8 )
        goto LABEL_299;
      v115 = MI_READ_PTE_LOCK_FREE(v14);
      if ( (v115 & 0x400) != 0 )
        goto LABEL_299;
      if ( !(unsigned int)MI_GET_PAGING_FILE_OFFSET(&v115) )
        goto LABEL_299;
      MiUnlockProtoPoolPage(v11, v106[0]);
      v11 = 0LL;
      if ( (v138 & 2) != 0 && !(unsigned int)MiPageHasRelocations(v4, (unsigned int)v15) )
        goto LABEL_299;
      if ( (unsigned int)MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread()) <= 5 )
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
      else
        EffectivePagePriorityThread = 5;
      if ( v14 == v130 )
      {
        v44 = 4096LL;
        v45 = v112 + 1;
      }
      else
      {
        v45 = v42;
        v130 = v14;
        v44 = (__int64)(v129 - v14) >> 3 << 12;
      }
      v112 = v45;
      v46 = MiPrefetchControlArea((_DWORD)v4, v41, v44, EffectivePagePriorityThread, 2, v139);
      v107 = v46;
      v10 = v46;
      if ( v46 >= 0 )
        goto LABEL_134;
      if ( v46 != -1073741670 && v46 != -1073741663 && v46 != -1073741801 && v44 > 0x1000 )
        FsRtlIsTotalDeviceFailure(v46);
      KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      LODWORD(v15) = v108;
      v17 = v111;
LABEL_306:
      v8 = v110;
      if ( v14 < v129 )
        continue;
LABEL_307:
      if ( v11 )
      {
        MiUnlockProtoPoolPage(v11, v106[0]);
        v11 = 0LL;
      }
LABEL_309:
      a3 = v138;
      v7 = v114;
LABEL_310:
      v118 = v131;
      v6 = v131;
      if ( !v131 )
        goto LABEL_315;
      a4 = v139;
      goto LABEL_6;
    }
    break;
  }
  v115 = MI_READ_PTE_LOCK_FREE(v14);
  v48 = v115 & 1;
  if ( (v115 & 1) != 0 )
    v49 = MI_GET_PAGE_FRAME_FROM_PTE(&v115);
  else
    v49 = (v115 >> 12) & 0xFFFFFFFFFLL;
  BugCheckParameter2 = v49;
  if ( (v138 & 4) != 0 )
  {
    if ( (unsigned int)MI_IS_PFN_SYSTEM_CHARGED(v39) )
    {
      MiDriverPageIsDangling();
      *(_BYTE *)(v39 + 35) &= ~0x20u;
    }
LABEL_122:
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_298:
    LODWORD(v15) = v108;
LABEL_299:
    v14 += 8LL;
    v15 = (unsigned int)(v15 + 1);
    v17 = v111 + 4096;
LABEL_305:
    v117 = v14;
    v108 = v15;
    v111 = v17;
    goto LABEL_306;
  }
  if ( (v138 & 1) != 0 && ((*(_QWORD *)(v39 + 40) >> 54) & 7) == 3 || (*(_DWORD *)(v39 + 16) & 0x400LL) == 0 && !v110 )
    goto LABEL_122;
  if ( !v48 && (*(_BYTE *)(v39 + 34) & 0x20) != 0 )
  {
    if ( (v138 & 2) == 0 || (v4[7] & 2) != 0 )
    {
      v123 = 1;
      MiObtainProtoReference(v11, 1LL);
      MiWaitForCollidedFaultComplete(v39, v11, 0LL, 0LL, 17, v106[0], &v123);
      LODWORD(v15) = v108;
      v17 = v111;
      v11 = 0LL;
      v10 = 0;
      v107 = 0;
      goto LABEL_306;
    }
    LOBYTE(v47) = 17;
    MiDeleteLockedTransitionPte((_QWORD *)v14, v39, v47, 1);
    goto LABEL_298;
  }
  v50 = 8;
  v113 = 8;
  if ( !v48 )
  {
    v51 = *(_BYTE *)(v39 + 35);
    if ( (v51 & 8) != 0 )
    {
      v50 = v51 & 7;
      v113 = v50;
    }
    if ( !(unsigned int)MiUnlinkPageFromList(v39, 0) )
    {
      MiDiscardTransitionPte(v39);
      _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v4 = a1;
      if ( v110 == 1 )
      {
LABEL_134:
        LODWORD(v15) = v108;
        v17 = v111;
        goto LABEL_306;
      }
      goto LABEL_298;
    }
    *(_QWORD *)(v39 + 24) &= 0xC000000000000000uLL;
  }
  if ( !(unsigned int)MiAreChargesNeededToLockPage(v39) )
  {
    v55 = 1;
    goto LABEL_159;
  }
  v53 = *(_QWORD *)(v39 + 40);
  if ( (v53 & 0x200000000000000LL) != 0 && (*v52 & 0x400LL) != 0 )
  {
    v54 = 1;
    v55 = 1;
  }
  else
  {
    v56 = ((__int64 (*)(void))MI_IS_PFN_COMMIT_NOT_CHARGED)();
    v54 = v57;
    v55 = 1;
    if ( v56 )
      v54 = 1;
  }
  v58 = (HIDWORD(v53) >> 8) & 0x3FF;
  if ( v58 == 1023 )
    v59 = &MiSystemPartition;
  else
    v59 = *(int **)(qword_1402FEC28 + 8LL * v58);
  if ( !v54 || (unsigned int)MiChargeCommit((unsigned __int64)v59, 1uLL, 4uLL) )
  {
    if ( v59 == &MiSystemPartition )
    {
      v60 = KeGetCurrentPrcb();
      v61 = v60->CachedResidentAvailable;
      while ( v61 )
      {
        if ( v61 == -1 )
          break;
        v62 = v61;
        v61 = _InterlockedCompareExchange((volatile signed __int32 *)&v60->CachedResidentAvailable, v61 - 1, v61);
        if ( v62 == v61 )
          goto LABEL_155;
      }
    }
    if ( !(unsigned int)MiChargePartitionResidentAvailable(v59, 1LL, 0xFFFFFFFFLL) )
    {
      if ( v54 )
        MiReturnCommit(v59, 1LL);
      goto LABEL_160;
    }
LABEL_155:
    if ( v59 == &MiSystemPartition )
      _InterlockedExchangeAdd64(&qword_1402FF600, 1uLL);
LABEL_159:
    ++*(_WORD *)(v39 + 32);
  }
LABEL_160:
  _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  v119 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
  {
    do
      KeYieldProcessorEx(&v119);
    while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0 );
  }
  *(_BYTE *)(v11 + 34) &= ~0x20u;
  v63 = *(_WORD *)(v11 + 32);
  v64 = *(_BYTE *)(v11 + 34);
  if ( !v63 )
    KeBugCheckEx(
      0x4Eu,
      0x9AuLL,
      (v11 + 0x58000000000LL) / 48,
      *(_BYTE *)(v11 + 34) & 7,
      *(unsigned __int16 *)(v11 + 32));
  v9 = v63 == 1;
  v65 = v63 - 1;
  *(_WORD *)(v11 + 32) = v65;
  if ( v9 && (unsigned int)MI_IS_PFN_FILE_ONLY(v11) )
    goto LABEL_208;
  v66 = *(_QWORD *)(v11 + 40);
  if ( (v66 & 0x10000000000000LL) == 0 )
  {
    v67 = *(_QWORD *)(v11 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v65 )
    {
      v69 = 1;
      v68 = 0;
      goto LABEL_176;
    }
    if ( v65 != 1 )
    {
      if ( v65 == 2 && v67 )
      {
LABEL_173:
        if ( (v64 & 8) != 0 )
          goto LABEL_174;
      }
      goto LABEL_209;
    }
    if ( !v67 )
      goto LABEL_173;
LABEL_174:
    v68 = 0;
    v69 = 0;
LABEL_176:
    v70 = *(_QWORD *)(v11 + 8) | 0x8000000000000000uLL;
    v71 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
    if ( (v70 > v71 || v70 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v11 + 35) >> 5) & 1) != 0 )
    {
      *(_BYTE *)(v11 + 35) &= ~0x20u;
      goto LABEL_207;
    }
    if ( (v66 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v11 + 16) & 0x400LL) != 0 )
    {
      v68 = 1;
    }
    else if ( v70 <= v71 && v70 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(v11 + 35) >> 5) & 1) != 0 )
    {
      v68 = 1;
    }
    else if ( v69 == 1 && ((*(_QWORD *)(v11 + 24) >> 62) & 1LL) != 0 )
    {
      v68 = 1;
    }
    v72 = (HIDWORD(v66) >> 8) & 0x3FF;
    if ( v72 == 1023 )
      v73 = &MiSystemPartition;
    else
      v73 = *(int **)(qword_1402FEC28 + 8LL * v72);
    if ( v68 == 1 )
      MiReturnCommit(v73, 1LL);
    if ( v73 != &MiSystemPartition )
    {
      _InterlockedExchangeAdd64((volatile signed __int64 *)v73 + 744, 1uLL);
      goto LABEL_207;
    }
    v74 = KeGetCurrentPrcb();
    v75 = 1LL;
    v76 = (int)v74->CachedResidentAvailable;
    if ( (_DWORD)v76 != -1 )
    {
      if ( (unsigned __int64)(v76 + 1) <= 0x100 )
      {
        while ( 1 )
        {
          v77 = _InterlockedCompareExchange((volatile signed __int32 *)&v74->CachedResidentAvailable, v76 + 1, v76);
          v9 = (_DWORD)v76 == v77;
          LODWORD(v76) = v77;
          if ( v9 )
            break;
          if ( v77 == -1 || (unsigned __int64)(v77 + 1LL) > 0x100 )
            goto LABEL_201;
        }
LABEL_205:
        _InterlockedExchangeAdd64(&qword_1402FF640, 1uLL);
LABEL_207:
        if ( v69 )
LABEL_208:
          MiPfnReferenceCountIsZero(v11, (v11 + 0x58000000000LL) / 48);
        goto LABEL_209;
      }
LABEL_201:
      if ( (int)v76 > 192
        && (_DWORD)v76 == _InterlockedCompareExchange(
                            (volatile signed __int32 *)&v74->CachedResidentAvailable,
                            192,
                            v76) )
      {
        v75 = (int)v76 - 192 + 1LL;
      }
    }
    _InterlockedExchangeAdd64(&qword_140301480, v75);
    goto LABEL_205;
  }
LABEL_209:
  if ( v106[0] == 17 )
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v106[0]);
  }
  v78 = 0LL;
  v79 = *(_QWORD *)(v39 + 40);
  v11 = 0LL;
  if ( (v79 & 0x10000000000000LL) == 0 )
    v55 = 0;
  if ( (v138 & 2) == 0 )
  {
    v80 = MiValidateImagePfn(
            (_DWORD)a1,
            v111,
            (_DWORD)Process,
            v108,
            BugCheckParameter4,
            (*((unsigned __int16 *)v118 + 16) >> 1) & 0x1F,
            v49);
    goto LABEL_221;
  }
  if ( (MiFlags & 0x100000) == 0 || (*((_DWORD *)a1 + 23) & 0xC000000) == 0 || ((v79 >> 54) & 7) != 3 )
  {
    v80 = MiRelocateImagePfn((_DWORD)a1, a2, v108, v49, 0LL);
LABEL_221:
    v107 = v80;
    goto LABEL_222;
  }
  v107 = 0;
LABEL_222:
  if ( v50 != 8 && !DecayPfn && !v55 )
    DecayPfn = (ULONG_PTR)MiCreateDecayPfn(v50);
  v132 = 0LL;
  v81 = KeGetCurrentIrql();
  __writecr8(2uLL);
  v120 = 0;
  if ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) )
  {
    do
    {
      do
        KeYieldProcessorEx(&v120);
      while ( (*(_QWORD *)(v39 + 24) & 0x8000000000000000uLL) != 0 );
    }
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v39 + 24), 0x3FuLL) );
    v50 = v113;
  }
  v106[0] = v81;
  if ( (v138 & 2) != 0 )
  {
    v115 = MI_READ_PTE_LOCK_FREE(v39 + 16);
    if ( (v115 & 0x400) == 0 )
    {
      v78 = MiCaptureDirtyBitToPfn(v39);
      v132 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v39 + 40)) >> 8) & 0x3FF);
    }
  }
  v82 = *(_WORD *)(v39 + 32);
  if ( !v82 )
    KeBugCheckEx(
      0x4Eu,
      0x9AuLL,
      (v39 + 0x58000000000LL) / 48,
      *(_BYTE *)(v39 + 34) & 7,
      *(unsigned __int16 *)(v39 + 32));
  v9 = v82 == 1;
  v83 = v82 - 1;
  *(_WORD *)(v39 + 32) = v83;
  if ( v9 && (*(_QWORD *)(v39 + 40) & 0x10000000000000LL) != 0 )
  {
LABEL_277:
    if ( !v55 || v50 == 8 || (*(_BYTE *)(v39 + 34) & 0x10) != 0 || (*(_QWORD *)(v39 + 24) & 0x4000000000000000LL) != 0 )
    {
      v96 = *(_QWORD *)(v39 + 24);
      if ( (v96 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
        KeBugCheckEx(0x4Eu, 7uLL, BugCheckParameter2, *(_QWORD *)(v39 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
      if ( (v96 & 0x4000000000000000LL) != 0 )
      {
        v97 = *(_BYTE *)(v39 + 35);
        if ( (v97 & 0x10) != 0 )
          *(_BYTE *)(v39 + 35) = v97 & 0xEF;
        v98 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v39 + 40)) >> 8) & 0x3FF);
        MiReleasePageFileSpace(v98, *(_QWORD *)(v39 + 16), 1LL);
        MiInsertPageInFreeOrZeroedList(BugCheckParameter2, 2uLL);
      }
      else
      {
        v99 = 8;
        if ( (*(_BYTE *)(v39 + 34) & 0x10) == 0 )
          v99 = 4;
        MiInsertPageInList(v39, v99);
      }
      goto LABEL_290;
    }
    MiInsertAndUnlockStandbyPages(DecayPfn, &v134, 1u, v81);
    v106[0] = 17;
    goto LABEL_292;
  }
  v84 = *(_QWORD *)(v39 + 40);
  if ( (v84 & 0x10000000000000LL) != 0 )
    goto LABEL_290;
  v85 = *(_QWORD *)(v39 + 24) & 0x3FFFFFFFFFFFFFFFLL;
  if ( !v83 )
  {
    v86 = 1;
    goto LABEL_246;
  }
  if ( v83 != 1 )
  {
    if ( v83 == 2 && v85 )
    {
LABEL_243:
      if ( (*(_BYTE *)(v39 + 34) & 8) != 0 )
        goto LABEL_244;
    }
    goto LABEL_290;
  }
  if ( !v85 )
    goto LABEL_243;
LABEL_244:
  v86 = 0;
LABEL_246:
  v87 = *(_QWORD *)(v39 + 8) | 0x8000000000000000uLL;
  if ( (v87 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
     || v87 < 0xFFFFF68000000000uLL)
    && ((*(unsigned __int8 *)(v39 + 35) >> 5) & 1) != 0 )
  {
    *(_BYTE *)(v39 + 35) &= ~0x20u;
    goto LABEL_275;
  }
  if ( (v84 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v39 + 16) & 0x400LL) != 0 )
  {
    v88 = 1;
  }
  else if ( (unsigned int)MI_IS_PFN_COMMIT_NOT_CHARGED(v39, 1LL) )
  {
    v88 = 1;
  }
  else if ( v86 == 1 && v89 )
  {
    v88 = 1;
  }
  v90 = (HIDWORD(v84) >> 8) & 0x3FF;
  if ( v90 == 1023 )
    v91 = &MiSystemPartition;
  else
    v91 = *(int **)(qword_1402FEC28 + 8LL * v90);
  if ( v88 == 1 )
    MiReturnCommit(v91, 1LL);
  if ( v91 != &MiSystemPartition )
  {
    _InterlockedExchangeAdd64((volatile signed __int64 *)v91 + 744, 1uLL);
    goto LABEL_275;
  }
  v92 = KeGetCurrentPrcb();
  v93 = 1LL;
  v94 = (int)v92->CachedResidentAvailable;
  if ( (_DWORD)v94 == -1 )
  {
LABEL_272:
    _InterlockedExchangeAdd64(&qword_140301480, v93);
    goto LABEL_273;
  }
  if ( (unsigned __int64)(v94 + 1) > 0x100 )
  {
LABEL_269:
    if ( (int)v94 > 192
      && (_DWORD)v94 == _InterlockedCompareExchange((volatile signed __int32 *)&v92->CachedResidentAvailable, 192, v94) )
    {
      v93 = (int)v94 - 192 + 1LL;
    }
    goto LABEL_272;
  }
  while ( 1 )
  {
    v95 = _InterlockedCompareExchange((volatile signed __int32 *)&v92->CachedResidentAvailable, v94 + 1, v94);
    v9 = (_DWORD)v94 == v95;
    LODWORD(v94) = v95;
    if ( v9 )
      break;
    if ( v95 == -1 || (unsigned __int64)(v95 + 1LL) > 0x100 )
      goto LABEL_269;
  }
LABEL_273:
  _InterlockedExchangeAdd64(&qword_1402FF640, 1uLL);
LABEL_275:
  if ( v86 )
  {
    v50 = v113;
    goto LABEL_277;
  }
LABEL_290:
  if ( v81 != 17 )
    _InterlockedAnd64((volatile signed __int64 *)(v39 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_292:
  if ( v78 )
    MiReleasePageFileInfo(v132, v78, 1LL);
  if ( v106[0] != 17 )
  {
    __writecr8(v106[0]);
    v106[0] = 17;
  }
  v10 = v107;
  if ( v107 >= 0 )
  {
    v14 = v117;
    v4 = a1;
    goto LABEL_298;
  }
  v101 = 58;
  if ( v107 == -1073741670 )
    v101 = 36;
  dword_1402FE4B8 = v101;
LABEL_315:
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  v102 = (__int64)CurrentThread;
  if ( CurrentThread )
  {
    v103 = v135;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v135 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared((signed __int64 *)(v103 + 40));
    KeAbPostRelease(v103 + 40);
    KiLeaveGuardedRegionUnsafe(v102);
  }
  return v10;
}
