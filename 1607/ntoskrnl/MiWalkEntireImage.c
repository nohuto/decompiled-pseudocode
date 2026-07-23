/*
 * XREFs of MiWalkEntireImage @ 0x14004C0F0
 * Callers:
 *     MiUnloadSystemImage @ 0x1404821BC (MiUnloadSystemImage.c)
 *     MiSwitchBaseAddress @ 0x1404BC564 (MiSwitchBaseAddress.c)
 *     MiRelocateImage @ 0x140507390 (MiRelocateImage.c)
 *     MiValidateSectionCreate @ 0x140509DEC (MiValidateSectionCreate.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiReleasePageFileSpace @ 0x140021DB8 (MiReleasePageFileSpace.c)
 *     MiObtainProtoReference @ 0x1400231D8 (MiObtainProtoReference.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     MiGetEffectivePagePriorityThread @ 0x140026934 (MiGetEffectivePagePriorityThread.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiStartingOffset @ 0x1400318C0 (MiStartingOffset.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14004CD60 (MiRemoveLockedPageCharge.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiCheckProtoPtePageState @ 0x14004E530 (MiCheckProtoPtePageState.c)
 *     MiAreChargesNeededToLockPage @ 0x14004E880 (MiAreChargesNeededToLockPage.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiIsPfnCommitNotCharged @ 0x14004ECC0 (MiIsPfnCommitNotCharged.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     MiInsertPageInFreeOrZeroedList @ 0x140066D40 (MiInsertPageInFreeOrZeroedList.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     MiInsertPageInList @ 0x140069150 (MiInsertPageInList.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14006FA70 (MiInsertAndUnlockStandbyPages.c)
 *     MiDecayPfnFullyInitialized @ 0x140096210 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140096EF0 (MiCreateDecayPfn.c)
 *     MiDeleteTransitionPte @ 0x1400B6F88 (MiDeleteTransitionPte.c)
 *     MiGetPagingFileOffset @ 0x1400B7610 (MiGetPagingFileOffset.c)
 *     MiWaitForCollidedFaultComplete @ 0x1400C4044 (MiWaitForCollidedFaultComplete.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiChargePartitionResidentAvailable @ 0x140101224 (MiChargePartitionResidentAvailable.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     MiIsPfnSystemCharged @ 0x14012E64C (MiIsPfnSystemCharged.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiDriverPageIsDangling @ 0x1401E5D18 (MiDriverPageIsDangling.c)
 *     MiSplitDirectMapPage @ 0x1401ED884 (MiSplitDirectMapPage.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 *     MiGetSharedProtos @ 0x1401F4EB4 (MiGetSharedProtos.c)
 *     MiRelocateImagePfn @ 0x140446650 (MiRelocateImagePfn.c)
 *     MiValidateImagePfn @ 0x1405098BC (MiValidateImagePfn.c)
 *     MiPrefetchControlArea @ 0x14050A6B4 (MiPrefetchControlArea.c)
 *     MiGetNextDirectFixupProto @ 0x14066181C (MiGetNextDirectFixupProto.c)
 *     MiPageHasRelocations @ 0x140661834 (MiPageHasRelocations.c)
 */

__int64 __fastcall MiWalkEntireImage(__int64 *a1, __int64 a2, char a3, __int64 a4)
{
  __int64 v4; // rdx
  char v5; // r11
  unsigned int v6; // r10d
  __int64 *v7; // r13
  int v8; // eax
  __int64 v9; // rax
  unsigned int v10; // r10d
  __int64 NextDirectFixupProto; // rax
  unsigned __int64 v12; // r14
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 *v15; // rbx
  bool v16; // zf
  unsigned int v17; // esi
  __int64 v18; // rcx
  __int64 v19; // r15
  volatile signed __int64 *v20; // rdi
  __int64 v21; // rbx
  unsigned __int64 v22; // rdi
  __int64 v23; // r12
  __int64 SharedProtos; // rax
  unsigned __int64 v25; // rbx
  unsigned __int64 v26; // rax
  __int64 v27; // rcx
  __int64 v28; // rax
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  ULONG_PTR v31; // r10
  unsigned __int64 v32; // rax
  __int64 v33; // r9
  int v34; // r10d
  ULONG_PTR v35; // rbx
  __int64 v36; // rax
  int v37; // edx
  int EffectivePagePriorityThread; // eax
  unsigned int v39; // r8d
  ULONG_PTR v40; // rax
  __int64 v41; // rdx
  __int64 v42; // r8
  __int64 v43; // r9
  __int64 v44; // r14
  unsigned int v45; // r13d
  char v46; // al
  __int64 v47; // rcx
  __int64 v48; // r10
  char v49; // si
  int IsPfnCommitNotCharged; // eax
  char v51; // r11
  unsigned __int16 v52; // r10
  int *v53; // rdi
  struct _KPRCB *CurrentPrcb; // rdx
  signed __int32 CachedResidentAvailable; // eax
  signed __int32 v56; // ett
  unsigned __int64 v57; // rcx
  int v58; // r15d
  ULONG_PTR v59; // rax
  int v60; // eax
  struct _KEVENT *v61; // r12
  unsigned __int64 v62; // rbx
  unsigned __int8 CurrentIrql; // r14
  __int64 v64; // rsi
  __int64 v65; // rdi
  __int64 v66; // rdx
  __int64 v67; // r8
  __int64 v68; // r9
  __int64 v69; // rdx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rax
  char v73; // al
  struct _KEVENT *v74; // rax
  __int64 v75; // rdx
  __int64 v76; // rax
  __int64 v77; // rdx
  __int64 v78; // r14
  __int64 v79; // rax
  int v80; // eax
  __int64 v81; // rdi
  __int64 v82; // rbx
  int BugCheckParameter4; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v85[4]; // [rsp+40h] [rbp-C0h] BYREF
  int v86; // [rsp+44h] [rbp-BCh]
  int v87; // [rsp+48h] [rbp-B8h]
  unsigned __int64 v88; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v89; // [rsp+58h] [rbp-A8h]
  __int64 v90; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v91; // [rsp+68h] [rbp-98h]
  __int64 v92; // [rsp+70h] [rbp-90h]
  __int64 v93; // [rsp+78h] [rbp-88h]
  __int64 v94; // [rsp+80h] [rbp-80h] BYREF
  __int64 v95; // [rsp+88h] [rbp-78h] BYREF
  __int64 v96; // [rsp+90h] [rbp-70h]
  __int64 *v97; // [rsp+98h] [rbp-68h]
  ULONG_PTR BugCheckParameter2; // [rsp+A0h] [rbp-60h]
  ULONG_PTR DecayPfn; // [rsp+A8h] [rbp-58h]
  int v100; // [rsp+B0h] [rbp-50h] BYREF
  int v101; // [rsp+B4h] [rbp-4Ch] BYREF
  int v102; // [rsp+B8h] [rbp-48h] BYREF
  int v103; // [rsp+BCh] [rbp-44h]
  int v104; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v105; // [rsp+C8h] [rbp-38h] BYREF
  unsigned __int64 v106; // [rsp+D0h] [rbp-30h]
  unsigned __int64 v107; // [rsp+D8h] [rbp-28h]
  struct _KTHREAD *CurrentThread; // [rsp+E0h] [rbp-20h]
  __int64 v109; // [rsp+E8h] [rbp-18h]
  __int64 *v110; // [rsp+F0h] [rbp-10h]
  _KPROCESS *Process; // [rsp+F8h] [rbp-8h]
  _BYTE v112[80]; // [rsp+100h] [rbp+0h] BYREF
  unsigned int v116; // [rsp+178h] [rbp+78h]

  v116 = a4;
  v4 = *a1;
  v5 = a3;
  v6 = *((_DWORD *)a1 + 14);
  v7 = a1;
  v109 = *a1;
  v8 = 1;
  if ( (v6 & 0x40000000) == 0 || (a3 & 8) != 0 )
    v8 = (v6 >> 11) & 1;
  v87 = v8;
  v103 = a3 & 8;
  if ( (a3 & 8) != 0 )
  {
    v9 = MiPartitionIdToPointer(*((_WORD *)a1 + 30) & 0x3FF, v4, 1023LL, a4);
    MiInitializePageColorBase(v9 + 6784, (v10 >> 20) & 0x3F, v112);
    NextDirectFixupProto = MiGetNextDirectFixupProto(v7, 0LL);
    v12 = *(_QWORD *)(NextDirectFixupProto + 8) | 0x8000000000000000uLL;
    v88 = v12;
    v14 = MiGetNextDirectFixupProto(v13, NextDirectFixupProto);
    v4 = v109;
    v96 = v14;
  }
  else
  {
    v12 = 0LL;
    v88 = 0LL;
    v96 = 0LL;
  }
  v15 = v7 + 16;
  v16 = (v7[7] & 0x4000000) == 0;
  v17 = 0;
  v18 = v7[17];
  v19 = 0LL;
  v97 = v7 + 16;
  Process = KeGetCurrentThread()->ApcState.Process;
  v92 = v18;
  v85[0] = 17;
  v86 = 0;
  v90 = 0LL;
  CurrentThread = 0LL;
  DecayPfn = 0LL;
  if ( !v16 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->SpecialApcDisable;
    v20 = (volatile signed __int64 *)(v4 + 40);
    v21 = KeAbPreAcquire(v4 + 40, 0LL, 0);
    if ( _InterlockedCompareExchange64(v20, 17LL, 0LL) )
      ExfAcquirePushLockSharedEx(v20, v21, v20);
    v5 = a3;
    v18 = v92;
    if ( v21 )
      *(_BYTE *)(v21 + 26) |= 1u;
    v15 = v7 + 16;
  }
  do
  {
    v22 = v15[1];
    v110 = (__int64 *)v15[2];
    v23 = (__int64)(v22 - v18) >> 3;
    v16 = (*((_BYTE *)v15 + 34) & 2) == 0;
    v91 = v22;
    v93 = v23;
    if ( !v16 )
    {
      if ( (v5 & 1) != 0 )
        goto LABEL_79;
      if ( (v7[7] & 0x4000000) != 0 )
      {
        if ( !v15[3] )
          goto LABEL_79;
        SharedProtos = MiGetSharedProtos(v7, v116, v15);
        if ( !SharedProtos )
          goto LABEL_78;
        v22 = *(_QWORD *)(SharedProtos + 32);
        v91 = v22;
      }
    }
    v89 = MiStartingOffset(v15, v22, v116);
    v25 = v89;
    v26 = v22 + 8LL * *((unsigned int *)v97 + 11);
    v106 = v26;
    if ( v12 )
    {
      if ( v12 >= v26 )
        goto LABEL_78;
      v91 = v12;
      v27 = v12 - v22;
      v22 = v12;
      v27 >>= 3;
      v23 = (unsigned int)(v27 + v23);
      v25 = (v27 << 12) + v89;
      v93 = v23;
      v89 = v25;
    }
    v107 = 0LL;
    if ( v22 >= v26 )
      goto LABEL_76;
    do
    {
      if ( (v22 & 0xFFF) != 0 )
      {
        if ( v19 )
          goto LABEL_35;
      }
      else if ( v19 )
      {
        MiUnlockProtoPoolPage(v19, v85[0]);
      }
      if ( v87 == 1 )
        v28 = MiLockProtoPoolPage(v22, v85);
      else
        v28 = MiCheckProtoPtePageState(v22);
      v90 = v28;
      v19 = v28;
      if ( !v28 )
      {
        if ( v87 == 1 )
        {
          MmAccessFault(2uLL, v22, 0, 0LL);
          continue;
        }
        v29 = (unsigned __int64)(4096 - (unsigned int)(v22 & 0xFFF)) >> 3;
        v25 += v29 << 12;
        v23 = (unsigned int)(v29 + v23);
        v22 += 8 * v29;
        goto LABEL_73;
      }
      while ( 1 )
      {
LABEL_35:
        while ( 1 )
        {
          v30 = MI_READ_PTE_LOCK_FREE(v22);
          v105 = v30;
          if ( (v30 & 1) == 0 )
            break;
          v32 = MI_GET_PAGE_FRAME_FROM_PTE(&v105);
LABEL_41:
          if ( MiIsPfnInline(v32) )
          {
            v35 = 48 * v33 - 0x58000000000LL;
            v100 = v34;
            if ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) )
            {
              do
              {
                do
                  KeYieldProcessorEx(&v100);
                while ( (*(_QWORD *)(v35 + 24) & 0x8000000000000000uLL) != 0 );
              }
              while ( _interlockedbittestandset64((volatile signed __int32 *)(v35 + 24), 0x3FuLL) );
              v17 = v86;
            }
            v36 = MI_READ_PTE_LOCK_FREE(v22);
            if ( v36 == v105 )
              goto LABEL_49;
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          }
        }
        if ( (v30 & 0x400) != 0 || (v30 & 0x800) == 0 )
          break;
        if ( (unsigned int)MiInvalidPteConforms(v30) )
        {
          v32 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v105);
          goto LABEL_41;
        }
      }
      v35 = v31;
LABEL_49:
      v95 = v35;
      if ( v35 )
      {
        v94 = MI_READ_PTE_LOCK_FREE(v22);
        if ( (v94 & 1) != 0 )
          v40 = MI_GET_PAGE_FRAME_FROM_PTE(&v94);
        else
          v40 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v94);
        v44 = v40;
        BugCheckParameter2 = v40;
        if ( (a3 & 4) != 0 )
        {
          if ( (unsigned int)MiIsPfnSystemCharged(v35) )
          {
            MiDriverPageIsDangling();
            *(_BYTE *)(v35 + 35) &= ~0x20u;
          }
LABEL_70:
          _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
LABEL_71:
          v12 = v88;
LABEL_72:
          v22 += 8LL;
          v19 = v90;
          v23 = (unsigned int)(v23 + 1);
          v25 = v89 + 4096;
LABEL_73:
          v91 = v22;
          goto LABEL_74;
        }
        if ( (a3 & 1) != 0 && ((*(_QWORD *)(v35 + 40) >> 54) & 7) == 3 || (*(_DWORD *)(v35 + 16) & 0x400LL) == 0 && !v87 )
          goto LABEL_70;
        if ( !v43 && (*(_BYTE *)(v35 + 34) & 0x20) != 0 )
        {
          if ( (a3 & 2) == 0 || (v7[7] & 2) != 0 )
          {
            v101 = 1;
            MiObtainProtoReference(v19, 1LL, v42, 0LL);
            MiWaitForCollidedFaultComplete(v35, v19, 0, 0, 17, v85[0], (__int64)&v101);
            v25 = v89;
            v12 = v88;
            v19 = 0LL;
            v90 = 0LL;
            v17 = 0;
            v86 = 0;
            continue;
          }
          MiDeleteTransitionPte(v22, v35);
          goto LABEL_71;
        }
        v45 = 8;
        if ( !v43 )
        {
          v46 = *(_BYTE *)(v35 + 35);
          if ( (v46 & 8) != 0 )
            v45 = v46 & 7;
          if ( !(unsigned int)MiUnlinkPageFromList(v35) )
          {
            MiDiscardTransitionPte(v35);
            _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
            v7 = a1;
            if ( v87 == 1 )
            {
              v25 = v89;
              v12 = v88;
              continue;
            }
            goto LABEL_71;
          }
          *(_QWORD *)(v35 + 24) &= 0xC000000000000000uLL;
        }
        if ( !(unsigned int)MiAreChargesNeededToLockPage(v35, v41, v42, v43) )
          goto LABEL_117;
        v48 = *(_QWORD *)(v35 + 40);
        if ( (v48 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v35 + 16) & 0x400LL) != 0 )
        {
          v49 = 1;
        }
        else
        {
          IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v47);
          v49 = v51;
          if ( IsPfnCommitNotCharged )
            v49 = 1;
        }
        v52 = (HIDWORD(v48) >> 8) & 0x3FF;
        if ( v52 == 1023 )
          v53 = MiSystemPartition;
        else
          v53 = *(int **)(qword_140327038 + 8LL * v52);
        if ( !v49 || (unsigned int)MiChargeCommit((__int64)v53, 1uLL, 4) )
        {
          if ( v53 == MiSystemPartition )
          {
            CurrentPrcb = KeGetCurrentPrcb();
            CachedResidentAvailable = CurrentPrcb->CachedResidentAvailable;
            while ( CachedResidentAvailable )
            {
              if ( CachedResidentAvailable == -1 )
                break;
              v56 = CachedResidentAvailable;
              CachedResidentAvailable = _InterlockedCompareExchange(
                                          (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                          CachedResidentAvailable - 1,
                                          CachedResidentAvailable);
              if ( v56 == CachedResidentAvailable )
                goto LABEL_117;
            }
          }
          if ( !(unsigned int)MiChargePartitionResidentAvailable(v53, 1LL, 0xFFFFFFFFLL) )
          {
            if ( v49 )
              MiReturnCommit(v53, 1LL);
            goto LABEL_118;
          }
LABEL_117:
          ++*(_WORD *)(v35 + 32);
        }
LABEL_118:
        _InterlockedAnd64((volatile signed __int64 *)(v35 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v102 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v102);
          while ( (*(_QWORD *)(v19 + 24) & 0x8000000000000000uLL) != 0 );
        }
        *(_BYTE *)(v19 + 34) &= ~0x20u;
        if ( (unsigned int)MiRemoveLockedPageCharge(v19) )
          MiPfnReferenceCountIsZero(v19, (v19 + 0x58000000000LL) / 48);
        if ( v85[0] == 17 )
        {
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        else
        {
          _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v85[0]);
        }
        v57 = *(_QWORD *)(v35 + 40);
        v16 = (*(_QWORD *)(v35 + 24) & 0x4000000000000000LL) == 0;
        v90 = 0LL;
        if ( v16 )
        {
          if ( (v57 & 0x10000000000000LL) != 0 )
            goto LABEL_133;
LABEL_128:
          v58 = 0;
        }
        else
        {
          if ( (v57 & 0x10000000000000LL) == 0 )
            goto LABEL_128;
LABEL_133:
          v58 = 1;
        }
        if ( !v103 )
        {
          if ( (a3 & 2) != 0 )
          {
            if ( (MiFlags & 0x80000) != 0 && (*((_DWORD *)a1 + 23) & 0xC000000) != 0 && ((v57 >> 54) & 7) == 3 )
            {
              v86 = 0;
              goto LABEL_142;
            }
            BugCheckParameter4 = 0;
            v60 = MiRelocateImagePfn(a1, a2, (unsigned int)v23, v44);
          }
          else
          {
            v60 = MiValidateImagePfn(
                    (_DWORD)a1,
                    v89,
                    (_DWORD)Process,
                    v23,
                    BugCheckParameter4,
                    (*((unsigned __int16 *)v97 + 16) >> 1) & 0x1F,
                    v44);
          }
          v86 = v60;
          goto LABEL_142;
        }
        if ( (unsigned int)MiPageHasRelocations(a1, (unsigned int)v23) )
        {
          v59 = MiSplitDirectMapPage(v97, v112, v44);
          BugCheckParameter2 = v59;
          *(_QWORD *)v35 = v96;
          v95 = 48 * v59 - 0x58000000000LL;
        }
LABEL_142:
        if ( v45 != 8 && !DecayPfn && !v58 )
          DecayPfn = MiCreateDecayPfn(v45);
        v61 = 0LL;
        v62 = 0LL;
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v104 = 0;
        v64 = v95;
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v64 + 24), 0x3FuLL) )
        {
          do
            KeYieldProcessorEx(&v104);
          while ( (*(_QWORD *)(v64 + 24) & 0x8000000000000000uLL) != 0 );
        }
        v65 = v95;
        v85[0] = CurrentIrql;
        if ( (a3 & 2) != 0 )
        {
          v94 = MI_READ_PTE_LOCK_FREE(v95 + 16);
          if ( (v94 & 0x400) == 0 )
          {
            v62 = MiCaptureDirtyBitToPfn(v65);
            v61 = (struct _KEVENT *)MiPartitionIdToPointer(
                                      ((unsigned int)HIDWORD(*(_QWORD *)(v65 + 40)) >> 8) & 0x3FF,
                                      v66,
                                      v67,
                                      v68);
          }
        }
        if ( (unsigned int)MiRemoveLockedPageCharge(v65) )
        {
          if ( v58
            && v45 != 8
            && (*(_BYTE *)(v65 + 34) & 0x10) == 0
            && (*(_QWORD *)(v64 + 24) & 0x4000000000000000LL) == 0 )
          {
            MiInsertAndUnlockStandbyPages(DecayPfn, &v95, 1LL, CurrentIrql);
            v85[0] = 17;
LABEL_168:
            if ( v62 )
              MiReleasePageFileInfo(v61, v62, 1);
            if ( v85[0] != 17 )
            {
              __writecr8(v85[0]);
              v85[0] = 17;
            }
            v17 = v86;
            if ( v86 < 0 )
            {
              v80 = 58;
              if ( v86 == -1073741670 )
                v80 = 36;
              dword_1403267C0 = v80;
              goto LABEL_181;
            }
            v12 = v88;
            if ( v88 )
            {
              if ( !v96 )
                goto LABEL_181;
              v7 = a1;
              v76 = MiGetNextDirectFixupProto(a1, v96);
              v78 = *(_QWORD *)(v77 + 8);
              v19 = v90;
              v96 = v76;
              v12 = v78 | 0x8000000000000000uLL;
              v88 = v12;
              if ( v12 >= v106 )
                goto LABEL_78;
              v22 = v12;
              v79 = (__int64)(v12 - v91) >> 3;
              v23 = (unsigned int)(v79 + v93);
              v91 = v12;
              v25 = (v79 << 12) + v89;
LABEL_74:
              v93 = v23;
              v89 = v25;
              continue;
            }
            v22 = v91;
            LODWORD(v23) = v93;
            v7 = a1;
            goto LABEL_72;
          }
          v72 = *(_QWORD *)(v64 + 24);
          if ( (v72 & 0x3FFFFFFFFFFFFFFFLL) != 0 )
            KeBugCheckEx(0x4Eu, 7uLL, BugCheckParameter2, *(_QWORD *)(v65 + 24) & 0x3FFFFFFFFFFFFFFFLL, 0LL);
          if ( (v72 & 0x4000000000000000LL) != 0 )
          {
            v73 = *(_BYTE *)(v65 + 35);
            if ( (v73 & 0x10) != 0 )
              *(_BYTE *)(v65 + 35) = v73 & 0xEF;
            v74 = (struct _KEVENT *)MiPartitionIdToPointer(
                                      ((unsigned int)HIDWORD(*(_QWORD *)(v65 + 40)) >> 8) & 0x3FF,
                                      v69,
                                      v70,
                                      v71);
            MiReleasePageFileSpace(v74, *(_QWORD *)(v65 + 16), 1LL);
            MiInsertPageInFreeOrZeroedList(BugCheckParameter2);
          }
          else
          {
            v75 = 8LL;
            if ( (*(_BYTE *)(v65 + 34) & 0x10) == 0 )
              v75 = 4LL;
            MiInsertPageInList(v65, v75);
          }
        }
        if ( CurrentIrql != 17 )
          _InterlockedAnd64((volatile signed __int64 *)(v64 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_168;
      }
      if ( !v87 )
        goto LABEL_72;
      v94 = MI_READ_PTE_LOCK_FREE(v22);
      if ( (v94 & 0x400) != 0 )
        goto LABEL_72;
      if ( !(unsigned int)MiGetPagingFileOffset(&v94) )
        goto LABEL_72;
      MiUnlockProtoPoolPage(v19, v85[0]);
      v90 = 0LL;
      if ( (a3 & 2) != 0 && !(unsigned int)MiPageHasRelocations(v7, (unsigned int)v23) )
        goto LABEL_72;
      if ( (unsigned int)MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread()) <= 5 )
        EffectivePagePriorityThread = MiGetEffectivePagePriorityThread((__int64)KeGetCurrentThread());
      else
        EffectivePagePriorityThread = 5;
      if ( v22 == v107 )
      {
        v39 = 4096;
      }
      else
      {
        v107 = v22;
        v39 = (unsigned int)((__int64)(v106 - v22) >> 3) << 12;
      }
      if ( (int)MiPrefetchControlArea((_DWORD)v7, v37, v39, EffectivePagePriorityThread, 2, v116) < 0 )
        KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&MiShortTime);
      v25 = v89;
      v17 = 0;
      v86 = 0;
      v19 = 0LL;
    }
    while ( v22 < v106 );
LABEL_76:
    if ( v19 )
    {
      MiUnlockProtoPoolPage(v19, v85[0]);
      v19 = 0LL;
      v90 = 0LL;
    }
LABEL_78:
    v5 = a3;
    v18 = v92;
LABEL_79:
    v97 = v110;
    v15 = v110;
  }
  while ( v110 );
LABEL_181:
  if ( DecayPfn )
    MiDecayPfnFullyInitialized(DecayPfn);
  v81 = (__int64)CurrentThread;
  if ( CurrentThread )
  {
    v82 = v109;
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)(v109 + 40), 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(v82 + 40);
    KeAbPostRelease(v82 + 40);
    KiLeaveGuardedRegionUnsafe(v81);
  }
  return v17;
}
