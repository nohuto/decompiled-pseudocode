/*
 * XREFs of MiFinishHardFault @ 0x14004D220
 * Callers:
 *     MiWaitForInPageComplete @ 0x140024D30 (MiWaitForInPageComplete.c)
 * Callees:
 *     KiLeaveGuardedRegionUnsafe @ 0x1400136F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400158E0 (MiCaptureDirtyBitToPfn.c)
 *     MiReleasePageFileInfo @ 0x140019E00 (MiReleasePageFileInfo.c)
 *     MiRestoreTransitionPte @ 0x14001CD70 (MiRestoreTransitionPte.c)
 *     MiLockOwnedProtoPage @ 0x1400224F0 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x1400229F0 (MiLockPageInline.c)
 *     MiIsFaultPteIntact @ 0x1400257E0 (MiIsFaultPteIntact.c)
 *     MiChargeCommit @ 0x14002B1D0 (MiChargeCommit.c)
 *     MiUnlockWorkingSetExclusive @ 0x14002E4B0 (MiUnlockWorkingSetExclusive.c)
 *     MiGetSharedVm @ 0x14002E5B0 (MiGetSharedVm.c)
 *     MiLockPageAtDpcInline @ 0x14002E6B0 (MiLockPageAtDpcInline.c)
 *     ExAcquireSpinLockExclusive @ 0x14002E710 (ExAcquireSpinLockExclusive.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MmCheckCachedPageStates @ 0x140033630 (MmCheckCachedPageStates.c)
 *     MiReturnCommit @ 0x14004E080 (MiReturnCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x14004E2C0 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAreChargesNeededToLockPage @ 0x14004E880 (MiAreChargesNeededToLockPage.c)
 *     MiIsPfnCommitNotCharged @ 0x14004ECC0 (MiIsPfnCommitNotCharged.c)
 *     MiAddLockedPageCharge @ 0x14004ED08 (MiAddLockedPageCharge.c)
 *     MiReturnResidentAvailable @ 0x14004ED60 (MiReturnResidentAvailable.c)
 *     KeSetEvent @ 0x140055E50 (KeSetEvent.c)
 *     ObDereferenceObjectDeferDelete @ 0x14005D6F0 (ObDereferenceObjectDeferDelete.c)
 *     MiPartitionIdToPointer @ 0x140067C20 (MiPartitionIdToPointer.c)
 *     KeLeaveCriticalRegionThread @ 0x140069C20 (KeLeaveCriticalRegionThread.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14006FA70 (MiInsertAndUnlockStandbyPages.c)
 *     MiDecayPfnFullyInitialized @ 0x140096210 (MiDecayPfnFullyInitialized.c)
 *     MiCreateDecayPfn @ 0x140096EF0 (MiCreateDecayPfn.c)
 *     MiImagePageOk @ 0x14009CCE8 (MiImagePageOk.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiInvalidateCollidedIos @ 0x1400B0704 (MiInvalidateCollidedIos.c)
 *     MiFreeInPageSupportBlock @ 0x1400C4240 (MiFreeInPageSupportBlock.c)
 *     MiChargeForLockedPage @ 0x140101100 (MiChargeForLockedPage.c)
 *     MiIsPteInStore @ 0x1401228A0 (MiIsPteInStore.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x14015DA70 (KeBugCheckEx.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeTransitionPteValid @ 0x1401F25F0 (MiMakeTransitionPteValid.c)
 *     MiMakeImagePageOk @ 0x1401F6D64 (MiMakeImagePageOk.c)
 *     MiSwapHardFaultPage @ 0x1401FDE6C (MiSwapHardFaultPage.c)
 */

__int64 __fastcall MiFinishHardFault(unsigned int *P, _QWORD *a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v5; // r15
  unsigned int *v6; // r13
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // r8
  _DWORD *v11; // rsi
  _QWORD *v12; // r12
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // r14
  unsigned int v17; // edi
  LONG *SharedVm; // rbx
  char v19; // al
  __int64 v20; // rdx
  unsigned __int8 v21; // bl
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v24; // rcx
  int v25; // ebx
  unsigned __int8 v26; // cl
  __int64 DecayPfn; // rbp
  __int64 v28; // r8
  unsigned int v29; // r15d
  unsigned __int64 v30; // rbx
  __int64 v31; // r9
  __int64 v32; // rdi
  int v33; // esi
  __int16 v34; // ax
  unsigned __int8 v35; // cl
  char v36; // al
  int v37; // eax
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rcx
  _DWORD *v44; // rsi
  char v45; // al
  unsigned __int16 v46; // ax
  struct _KEVENT *v47; // rcx
  int v48; // eax
  __int64 v49; // rdx
  unsigned __int64 TransitionPteValid; // r9
  char v51; // al
  __int64 v52; // rcx
  __int64 v53; // r9
  __int16 v54; // cx
  __int16 v55; // cx
  __int64 v56; // r11
  __int64 v57; // rsi
  __int64 v58; // rax
  int v59; // ebp
  unsigned __int64 v60; // rcx
  int v61; // r10d
  int IsPfnCommitNotCharged; // eax
  unsigned __int16 v63; // r11
  int *v64; // rsi
  struct _KPRCB *CurrentPrcb; // r8
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v67; // eax
  __int64 v68; // rax
  __int64 v69; // r8
  ULONG_PTR v70; // r15
  unsigned __int8 v71; // r12
  unsigned __int8 v72; // di
  unsigned __int64 v73; // rbp
  unsigned __int64 v74; // r14
  __int64 *v75; // r15
  __int64 v76; // rax
  __int64 v77; // rsi
  unsigned __int64 v78; // rdi
  __int64 result; // rax
  bool v80; // zf
  char v81; // [rsp+30h] [rbp-188h]
  int ImagePageOk; // [rsp+34h] [rbp-184h]
  int v83; // [rsp+38h] [rbp-180h]
  unsigned __int8 v84; // [rsp+40h] [rbp-178h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-170h]
  unsigned __int64 v86; // [rsp+50h] [rbp-168h]
  unsigned __int8 CurrentIrql; // [rsp+58h] [rbp-160h]
  int v88; // [rsp+60h] [rbp-158h]
  int v89; // [rsp+64h] [rbp-154h]
  __int64 v90; // [rsp+68h] [rbp-150h]
  unsigned __int64 v92; // [rsp+78h] [rbp-140h]
  _QWORD *v93; // [rsp+80h] [rbp-138h]
  int v95; // [rsp+90h] [rbp-128h] BYREF
  int v96; // [rsp+94h] [rbp-124h] BYREF
  int v97; // [rsp+98h] [rbp-120h] BYREF
  unsigned __int64 v98; // [rsp+A0h] [rbp-118h]
  int v99[2]; // [rsp+A8h] [rbp-110h]
  struct _KEVENT *v100; // [rsp+B0h] [rbp-108h]
  _DWORD *v101; // [rsp+B8h] [rbp-100h]
  __int64 v102; // [rsp+C0h] [rbp-F8h]
  _QWORD *v103; // [rsp+C8h] [rbp-F0h]
  unsigned int *v104; // [rsp+D0h] [rbp-E8h]
  _QWORD v105[16]; // [rsp+E0h] [rbp-D8h] BYREF

  v5 = *((_QWORD *)P + 28);
  v6 = P;
  v102 = a5;
  v89 = 0;
  v88 = 0;
  v8 = (_DWORD *)*((_QWORD *)P + 31);
  v104 = P;
  v103 = a2;
  v9 = P + 64;
  if ( v8 )
    v9 = v8;
  v10 = *((_QWORD *)P + 19);
  *(_QWORD *)v99 = v5;
  v11 = v9 + 12;
  v12 = v9 + 12;
  v13 = (v9[8] + v9[11]) & 0xFFF;
  v14 = (unsigned int)v9[10] + 4095LL;
  v101 = v9;
  v93 = v9 + 12;
  v86 = (unsigned __int64)&v9[2 * (unsigned int)((unsigned __int64)(v13 + v14) >> 12) + 10];
  v15 = v6[46];
  if ( (_DWORD)v15 == -1 )
    v98 = -1LL;
  else
    v98 = (unsigned __int64)&v9[2 * v15 + 12];
  v16 = *((_QWORD *)v6 + 20);
  v90 = *((_QWORD *)v6 + 30);
  v92 = *((_QWORD *)v6 + 27);
  v81 = 17;
  v17 = (*((_BYTE *)v6 + 191) & 8) != 0 ? 0xC0000434 : 0;
  ImagePageOk = v17;
  if ( a3 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(1uLL);
    if ( *((char *)v6 + 191) >= 0 )
    {
      if ( (*(_BYTE *)(a3 + 184) & 7) != 0 )
        KiLeaveGuardedRegionUnsafe(v10);
      else
        KeLeaveCriticalRegionThread(v10);
    }
    SharedVm = MiGetSharedVm(a3);
    ExAcquireSpinLockExclusive(SharedVm);
    v19 = CurrentIrql;
    SharedVm[1] = 0;
  }
  else
  {
    v19 = 17;
    CurrentIrql = 17;
  }
  if ( v16 )
  {
    if ( v19 == 17 )
    {
      v21 = MiLockPageInline(v16);
      v81 = v21;
    }
    else
    {
      v21 = 17;
      MiLockPageAtDpcInline(v16);
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v16, v20, v22, v23)
      || (unsigned int)MiChargeForLockedPage(v24, 1LL) )
    {
      ++*(_WORD *)(v16 + 32);
    }
    MiLockOwnedProtoPage(v16, v21);
  }
  if ( (v6[47] & 1) != 0 )
  {
    v6[20] = -1073741670;
    *((_QWORD *)v6 + 11) = 0LL;
  }
  v25 = v6[20];
  v84 = 17;
  v83 = v25;
  if ( *((unsigned int **)v6 + 2) != v6 + 4 )
  {
    v88 = MiInvalidateCollidedIos(v6);
    if ( v88 != 1 )
    {
      v6[20] = -1073741801;
      *((_QWORD *)v6 + 11) = 0LL;
    }
  }
  if ( v16 )
  {
    v95 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v95);
        while ( (*(_QWORD *)(v16 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
      v11 = v12;
    }
    MiRemoveLockedPageChargeAndDecRef(v16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a3 && (*((_BYTE *)v6 + 189) & 4) == 0 )
  {
    if ( !MiIsFaultPteIntact(v92, v5, (_QWORD *)v6 + 21) )
      v17 = -1073740748;
    ImagePageOk = v17;
  }
  if ( v25 >= 0
    && ((*((_BYTE *)v6 + 189) & 4) != 0
     || *((_QWORD *)v6 + 31)
     || (_DWORD *)v86 != v11 && v98 > (unsigned __int64)(v101 + 14))
    && (v26 = *((_BYTE *)v6 + 190), (v26 & 7) != 0)
    && (*((_BYTE *)v6 + 191) & 4) != 0
    && (v26 & 0x80u) == 0 )
  {
    DecayPfn = MiCreateDecayPfn((v26 >> 4) & 7);
    v28 = 0LL;
  }
  else
  {
    v28 = 0LL;
    DecayPfn = 0LL;
  }
  BugCheckParameter2 = DecayPfn;
  v29 = 0;
  v100 = 0LL;
  v30 = 0LL;
  v31 = 0xFFFFFA8000000000uLL;
  if ( (unsigned __int64)v12 > v86 )
  {
    v70 = DecayPfn;
    goto LABEL_186;
  }
  while ( 1 )
  {
    v32 = 48LL * *v12 - 0x58000000000LL;
    if ( v32 == qword_1403276D0 )
      goto LABEL_62;
    if ( v29 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
      {
        MiInsertAndUnlockStandbyPages(DecayPfn, v105, v29, v84);
        v28 = 0LL;
        v29 = 0;
        --v12;
LABEL_61:
        v31 = 0xFFFFFA8000000000uLL;
LABEL_62:
        v35 = v84;
        goto LABEL_63;
      }
    }
    else
    {
      v84 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v96 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v96);
          while ( (*(_QWORD *)(v32 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v32 + 24), 0x3FuLL) );
        DecayPfn = BugCheckParameter2;
        v28 = 0LL;
      }
    }
    v33 = 0;
    if ( (*(_DWORD *)v102 & 1) != 0 )
    {
      v34 = *(_WORD *)(v102 + 2);
      if ( v34 )
        *(_WORD *)(v102 + 2) = v34 - 1;
    }
    if ( (*(_QWORD *)(v32 + 24) & 0x4000000000000000LL) != 0 )
    {
      v33 = 2;
LABEL_71:
      v38 = ImagePageOk;
      goto LABEL_72;
    }
    v36 = *(_BYTE *)(v32 + 35);
    if ( (v36 & 0x10) != 0 )
    {
      if ( v32 == v90 )
      {
        v37 = v83;
        if ( v83 >= 0 )
          v37 = -1073741761;
        v83 = v37;
      }
      goto LABEL_70;
    }
    if ( v83 < 0 )
    {
      *(_BYTE *)(v32 + 35) = v36 | 0x10;
LABEL_70:
      v33 = 1;
      goto LABEL_71;
    }
    if ( (unsigned __int64)v12 < v98 )
      goto LABEL_71;
    v38 = ImagePageOk;
    v33 = 1;
    if ( v32 == v90 )
      v38 = -1073740748;
    *(_BYTE *)(v32 + 35) = v36 | 0x10;
    ImagePageOk = v38;
LABEL_72:
    if ( v32 == v90 && !v33 && v38 != -1073740748 && a3 && (*((_BYTE *)v6 + 189) & 4) == 0 )
    {
      if ( !(unsigned int)MiImagePageOk(v92, v32, 0LL, v31) )
      {
        *((_BYTE *)v6 + 189) |= 0x10u;
        if ( v29 )
        {
          LOBYTE(v31) = 17;
          MiInsertAndUnlockStandbyPages(DecayPfn, v105, v29, v31);
          v29 = 0;
        }
        v39 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v32 + 8) | 0x8000000000000000uLL);
        ImagePageOk = MiMakeImagePageOk(v92, v99[0], v39, a3, v32, v16);
        if ( (*(_QWORD *)(v32 + 24) & 0x4000000000000000LL) != 0 )
          v33 = 2;
      }
      v28 = 0LL;
    }
    *(_BYTE *)(v32 + 34) &= ~0x20u;
    if ( v33 )
    {
      if ( v29 )
      {
        LOBYTE(v31) = 17;
        MiInsertAndUnlockStandbyPages(DecayPfn, v105, v29, v31);
        v29 = 0;
      }
      if ( v33 == 1 )
      {
        if ( ((*((_BYTE *)v6 + 189) & 8) == 0 || v88 == 1)
          && (*(_DWORD *)(v32 + 16) & 0x400LL) == 0
          && !(unsigned int)MiIsPfnCommitNotCharged(v32) )
        {
          v41 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v32 + 40)) >> 8) & 0x3FF, v40, v28, v31);
          MiChargeCommit(v41, 1uLL, 4);
        }
        MiRestoreTransitionPte(v32, 2LL, v28, v31);
        *(_QWORD *)(v32 + 24) |= 0x4000000000000000uLL;
        if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 )
          *(_QWORD *)(v32 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
      }
      MiRemoveLockedPageChargeAndDecRef(v32);
      _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v35 = v84;
      __writecr8(v84);
      v28 = 0LL;
      v31 = 0xFFFFFA8000000000uLL;
      goto LABEL_63;
    }
    v42 = v90;
    *(_QWORD *)v32 = 0LL;
    if ( v32 == v90 )
    {
      v43 = a4;
      v89 = 1;
      if ( a4 )
      {
        if ( v29 )
        {
          LOBYTE(v31) = 17;
          MiInsertAndUnlockStandbyPages(DecayPfn, v105, v29, v31);
          v43 = a4;
          v29 = 0;
        }
        v44 = *(_DWORD **)v99;
        MiSwapHardFaultPage(*(_QWORD *)v99, v32, v43, v31);
        v28 = 0LL;
        v42 = a4;
        v90 = a4;
        v32 = a4;
        a4 = 0LL;
      }
      else
      {
        v44 = *(_DWORD **)v99;
      }
      if ( v32 == v42 && ImagePageOk >= 0 && a3 && (*((_BYTE *)v6 + 189) & 4) == 0 )
      {
        if ( v29 )
        {
          LOBYTE(v31) = 17;
          MiInsertAndUnlockStandbyPages(DecayPfn, v105, v29, v31);
          v29 = 0;
        }
        MiAddLockedPageCharge(v32, 3LL, v28, v31);
        v45 = *(_BYTE *)(v32 + 34);
        *(_QWORD *)(v32 + 24) ^= (*(_QWORD *)(v32 + 24) ^ (*(_QWORD *)(v32 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v32 + 34) = v45 & 0xF8 | 6;
        MiRemoveLockedPageChargeAndDecRef(v32);
        v46 = ((unsigned int)HIDWORD(*(_QWORD *)(v32 + 40)) >> 8) & 0x3FF;
        if ( v46 == 1023 )
          v47 = (struct _KEVENT *)MiSystemPartition;
        else
          v47 = *(struct _KEVENT **)(qword_140327038 + 8LL * v46);
        v48 = *(_DWORD *)(v32 + 16);
        v100 = v47;
        if ( (v48 & 0x400) == 0 && (unsigned int)MiIsPteInStore(v47, *(_QWORD *)(v32 + 16)) )
          v30 = MiCaptureDirtyBitToPfn(v32);
        if ( (*(_QWORD *)(v32 + 40) & 0x200000000000000LL) != 0 )
        {
          TransitionPteValid = MiMakeTransitionPteValid(v44);
          if ( ((*v44 >> 5) & 0x1F) == 0x18 )
          {
            if ( (*(_DWORD *)(v32 + 16) & 0x400LL) == 0 )
              TransitionPteValid = ~qword_1403A9350 & (TransitionPteValid | 0x8000000000000000uLL);
            v51 = *(_BYTE *)(v32 + 34) >> 6;
            if ( v51 != 1 )
            {
              if ( v51 )
              {
                if ( v51 == 2 )
                  TransitionPteValid = TransitionPteValid & 0xFFFFFFFFFFFFFFE7uLL | 8;
              }
              else
              {
                TransitionPteValid |= 0x18uLL;
              }
            }
          }
          *(_QWORD *)v44 = TransitionPteValid;
          if ( (unsigned int)MiPteInShadowRange(v44, v49) )
            MiWritePteShadow(v52, v53);
          if ( v103 )
            *v103 = v53;
        }
        goto LABEL_132;
      }
    }
    if ( *((char *)v6 + 190) < 0 )
    {
      *v12 |= 0x8000000000000000uLL;
      goto LABEL_132;
    }
    v54 = *(_WORD *)(v32 + 32);
    if ( !v54 )
      KeBugCheckEx(
        0x4Eu,
        0x9AuLL,
        (v32 + 0x58000000000LL) / 48,
        *(_BYTE *)(v32 + 34) & 7,
        *(unsigned __int16 *)(v32 + 32));
    v80 = v54 == 1;
    v55 = v54 - 1;
    *(_WORD *)(v32 + 32) = v55;
    if ( v80 && (*(_QWORD *)(v32 + 40) & 0x10000000000000LL) != 0 )
    {
LABEL_178:
      if ( v29 == 16 )
      {
        LOBYTE(v31) = 17;
        MiInsertAndUnlockStandbyPages(BugCheckParameter2, v105, 16LL, v31);
        v28 = 0LL;
        v29 = 1;
        v105[0] = v32;
      }
      else
      {
        v68 = v29;
        v28 = 0LL;
        ++v29;
        v105[v68] = v32;
      }
      goto LABEL_61;
    }
    v56 = *(_QWORD *)(v32 + 40);
    v57 = (*(_QWORD *)(v32 + 24) >> 62) & 1LL;
    if ( (v56 & 0x10000000000000LL) != 0 )
      goto LABEL_132;
    v58 = *(_QWORD *)(v32 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !v55 )
    {
      v31 = 1LL;
      v59 = 1;
LABEL_149:
      v60 = *(_QWORD *)(v32 + 8) | 0x8000000000000000uLL;
      if ( (v60 > 0xFFFFF6BFFFFFFF78uLL || v60 < 0xFFFFF68000000000uLL)
        && ((*(unsigned __int8 *)(v32 + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(v32 + 35) &= ~0x20u;
        goto LABEL_177;
      }
      if ( (v56 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v32 + 16) & 0x400LL) != 0 )
      {
        v61 = 1;
      }
      else
      {
        IsPfnCommitNotCharged = MiIsPfnCommitNotCharged(v32);
        v31 = 1LL;
        if ( IsPfnCommitNotCharged )
        {
          v61 = 1;
        }
        else if ( v59 == 1 && (_DWORD)v57 )
        {
          v61 = 1;
        }
      }
      v63 = (HIDWORD(v56) >> 8) & 0x3FF;
      if ( v63 == 1023 )
        v64 = MiSystemPartition;
      else
        v64 = *(int **)(qword_140327038 + 8LL * v63);
      if ( v61 == 1 )
        MiReturnCommit(v64, 1LL);
      if ( v64 == MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v31 = 1LL;
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v67 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v80 = (_DWORD)CachedResidentAvailable == v67;
              LODWORD(CachedResidentAvailable) = v67;
              if ( v80 )
                break;
              if ( v67 == -1 || (unsigned __int64)(v67 + 1LL) > 0x100 )
                goto LABEL_172;
            }
LABEL_177:
            if ( v59 )
              goto LABEL_178;
            goto LABEL_132;
          }
LABEL_172:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v31 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        v31 = _InterlockedExchangeAdd64(&qword_140324F00, v31);
        goto LABEL_177;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)v64 + 816, 1uLL);
      goto LABEL_177;
    }
    if ( v55 == 1 )
    {
      if ( v58 )
        goto LABEL_147;
    }
    else if ( v55 != 2 || !v58 )
    {
      goto LABEL_132;
    }
    if ( (*(_BYTE *)(v32 + 34) & 8) != 0 )
    {
LABEL_147:
      v59 = 0;
      v31 = 1LL;
      goto LABEL_149;
    }
LABEL_132:
    v35 = v84;
    v31 = 0xFFFFFA8000000000uLL;
    _InterlockedAnd64((volatile signed __int64 *)(v32 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v28 = 0LL;
    if ( !v29 )
      __writecr8(v84);
LABEL_63:
    if ( (unsigned __int64)++v12 > v86 )
      break;
    DecayPfn = BugCheckParameter2;
  }
  if ( v29 )
  {
    v69 = v29;
    v70 = BugCheckParameter2;
    MiInsertAndUnlockStandbyPages(BugCheckParameter2, v105, v69, v35);
  }
  else
  {
    v70 = BugCheckParameter2;
  }
  v11 = v93;
LABEL_186:
  v71 = CurrentIrql;
  if ( v16 )
  {
    v72 = v81;
    if ( CurrentIrql != 17 )
      v72 = 17;
    v97 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v97);
        while ( (*(_QWORD *)(v16 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v16 + 24), 0x3FuLL) );
      v71 = CurrentIrql;
    }
    *(_BYTE *)(v16 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(v16);
    _InterlockedAnd64((volatile signed __int64 *)(v16 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v72 != 17 )
      __writecr8(v72);
  }
  if ( *((char *)v6 + 190) < 0 )
  {
    MmCheckCachedPageStates(v92 + (v6[24] & 0x3FFFF), (unsigned int)v101[10], 2, 0LL);
    v73 = 1LL;
    v74 = (v86 - (unsigned __int64)v11 + 8) >> 3;
    if ( (unsigned __int64)v11 > v86 )
      v74 = 0LL;
    if ( v74 )
    {
      v75 = v93;
      do
      {
        if ( *v75 < 0 )
        {
          v76 = *v75 & 0x7FFFFFFFFFFFFFFFLL;
          *v75 = v76;
          v77 = 48 * v76 - 0x58000000000LL;
          v78 = (unsigned __int8)MiLockPageInline(v77);
          MiRemoveLockedPageChargeAndDecRef(v77);
          _InterlockedAnd64((volatile signed __int64 *)(v77 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v78);
        }
        ++v75;
        ++v73;
      }
      while ( v73 <= v74 );
      v6 = v104;
      v70 = BugCheckParameter2;
      v71 = CurrentIrql;
    }
  }
  if ( v70 )
    MiDecayPfnFullyInitialized(v70);
  if ( v30 )
    MiReleasePageFileInfo(v100, v30, 0);
  if ( a3 && *((char *)v6 + 191) < 0 )
    MiUnlockWorkingSetExclusive(a3, v71);
  if ( (*((_BYTE *)v6 + 191) & 0x10) == 0 )
    ObDereferenceObjectDeferDelete(*((PVOID *)v6 + 24));
  if ( (int)v6[44] > 1 )
    KeSetEvent((PRKEVENT)(v6 + 14), 0, 0);
  MiFreeInPageSupportBlock(v6);
  if ( a4 )
  {
    MiReleaseFreshPage(a4);
    MiReturnResidentAvailable(1LL);
    MiReturnCommit(MiSystemPartition, 1LL);
  }
  result = (unsigned int)v83;
  if ( v83 >= 0 )
  {
    v80 = v89 == 0;
    result = (unsigned int)ImagePageOk;
    goto LABEL_221;
  }
  if ( (*(_DWORD *)v102 & 1) != 0 )
  {
    v80 = (*(_DWORD *)v102 & 2) == 0;
LABEL_221:
    if ( v80 )
      return 3221226548LL;
  }
  return result;
}
