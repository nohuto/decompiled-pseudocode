/*
 * XREFs of MiFinishHardFault @ 0x1400663D0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140039E00 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     ExAcquireSpinLockExclusive @ 0x14000A2E0 (ExAcquireSpinLockExclusive.c)
 *     MiInsertAndUnlockStandbyPages @ 0x14000FE50 (MiInsertAndUnlockStandbyPages.c)
 *     MiLockOwnedProtoPage @ 0x1400111C0 (MiLockOwnedProtoPage.c)
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MiCreateDecayPfn @ 0x140011C44 (MiCreateDecayPfn.c)
 *     MiIsFaultPteIntact @ 0x14001D2B8 (MiIsFaultPteIntact.c)
 *     KeLeaveCriticalRegionThread @ 0x140042380 (KeLeaveCriticalRegionThread.c)
 *     KiLeaveGuardedRegionUnsafe @ 0x1400430F0 (KiLeaveGuardedRegionUnsafe.c)
 *     MiUnlockWorkingSetExclusive @ 0x14004CB90 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiAreChargesNeededToLockPage @ 0x140066150 (MiAreChargesNeededToLockPage.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     MiReturnResidentAvailable @ 0x1400687F0 (MiReturnResidentAvailable.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14007DFD0 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     KeSetEvent @ 0x1400875D0 (KeSetEvent.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MI_SHOULD_PTE_BE_GLOBAL @ 0x1400AA020 (MI_SHOULD_PTE_BE_GLOBAL.c)
 *     MiAddLockedPageCharge @ 0x1400AA108 (MiAddLockedPageCharge.c)
 *     MiChargeForLockedPage @ 0x1400AA160 (MiChargeForLockedPage.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MI_IS_PFN_COMMIT_NOT_CHARGED @ 0x1400AA2E4 (MI_IS_PFN_COMMIT_NOT_CHARGED.c)
 *     MiDecayPfnFullyInitialized @ 0x1400B253C (MiDecayPfnFullyInitialized.c)
 *     MiReleasePageFileInfo @ 0x1400B4C70 (MiReleasePageFileInfo.c)
 *     MiRestoreTransitionPte @ 0x1400B4ED0 (MiRestoreTransitionPte.c)
 *     MiCaptureDirtyBitToPfn @ 0x1400B8278 (MiCaptureDirtyBitToPfn.c)
 *     MiImagePageOk @ 0x1400E2EAC (MiImagePageOk.c)
 *     MiInvalidateCollidedIos @ 0x1400F16AC (MiInvalidateCollidedIos.c)
 *     MiFreeInPageSupportBlock @ 0x1400FDE30 (MiFreeInPageSupportBlock.c)
 *     MI_IS_PTE_IN_STORE_EX @ 0x140123ABC (MI_IS_PTE_IN_STORE_EX.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     KeBugCheckEx @ 0x140153DC0 (KeBugCheckEx.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MiMakeImagePageOk @ 0x1401D52A4 (MiMakeImagePageOk.c)
 *     MiSwapHardFaultPage @ 0x1401D54F0 (MiSwapHardFaultPage.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MiFinishHardFault(_QWORD *P, unsigned __int64 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned __int64 *v5; // r13
  char *v6; // r15
  _DWORD *v8; // rax
  _DWORD *v9; // rdx
  __int64 v10; // r8
  _QWORD *v11; // rsi
  _QWORD *v12; // rbx
  __int64 v13; // rax
  __int64 v14; // rbp
  signed int ImagePageOk; // r14d
  unsigned __int8 CurrentIrql; // di
  unsigned __int8 v17; // bl
  __int64 v18; // rcx
  __int64 v19; // r8
  int v20; // edi
  unsigned __int8 v21; // cl
  PSLIST_ENTRY DecayPfn; // rcx
  __int64 v23; // r8
  unsigned int v24; // r12d
  __int64 v25; // rdi
  __int64 v26; // rdx
  __int64 v27; // r9
  __int64 v28; // rsi
  int v29; // ebx
  __int16 v30; // ax
  unsigned __int8 v31; // cl
  char v32; // al
  int v33; // eax
  __int64 v34; // rax
  __int64 v35; // rax
  unsigned __int64 v36; // rax
  __int64 v37; // rbx
  char v38; // al
  __int64 v39; // rax
  int v40; // ecx
  __int64 v41; // rbp
  __int64 v42; // r14
  unsigned __int64 v43; // rbx
  char v44; // al
  __int16 v45; // cx
  __int16 v46; // cx
  __int64 v47; // r10
  __int64 v48; // rax
  int v49; // ebp
  unsigned __int64 v50; // rcx
  int v51; // r9d
  __int64 v52; // r11
  unsigned __int16 v53; // r10
  int *v54; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v56; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v58; // eax
  __int64 v59; // rax
  unsigned int v60; // r8d
  ULONG_PTR v61; // r12
  unsigned __int8 v62; // r13
  unsigned __int8 v63; // bl
  unsigned __int64 v64; // rbp
  unsigned __int64 v65; // r14
  __int64 *v66; // r15
  __int64 v67; // rax
  __int64 v68; // rsi
  unsigned __int64 v69; // rbx
  __int64 result; // rax
  bool v71; // zf
  char v72; // [rsp+30h] [rbp-188h]
  _QWORD *v73; // [rsp+38h] [rbp-180h]
  unsigned int v74; // [rsp+40h] [rbp-178h]
  ULONG_PTR BugCheckParameter2; // [rsp+48h] [rbp-170h]
  int v76; // [rsp+50h] [rbp-168h]
  unsigned __int8 v77; // [rsp+58h] [rbp-160h]
  __int64 v78; // [rsp+60h] [rbp-158h]
  int v79; // [rsp+68h] [rbp-150h]
  int v80; // [rsp+6Ch] [rbp-14Ch]
  __int64 v81; // [rsp+70h] [rbp-148h]
  __int64 v82; // [rsp+78h] [rbp-140h]
  unsigned __int64 v83; // [rsp+80h] [rbp-138h]
  char v85; // [rsp+90h] [rbp-128h]
  _QWORD *v86; // [rsp+98h] [rbp-120h]
  unsigned __int64 v87; // [rsp+A0h] [rbp-118h]
  int v88; // [rsp+A8h] [rbp-110h] BYREF
  __int64 v89; // [rsp+B0h] [rbp-108h]
  _DWORD *v90; // [rsp+B8h] [rbp-100h]
  __int64 v91; // [rsp+C0h] [rbp-F8h]
  __int64 v92; // [rsp+C8h] [rbp-F0h]
  unsigned __int64 *v93; // [rsp+D0h] [rbp-E8h]
  char *v94; // [rsp+D8h] [rbp-E0h]
  _QWORD v95[16]; // [rsp+E0h] [rbp-D8h] BYREF

  v5 = (unsigned __int64 *)P[28];
  v6 = (char *)P;
  v92 = a5;
  v79 = 0;
  v80 = 0;
  v8 = (_DWORD *)P[31];
  v94 = (char *)P;
  v93 = a2;
  v9 = P + 32;
  if ( v8 )
    v9 = v8;
  v10 = P[19];
  v89 = a4;
  v90 = v9;
  v11 = v9 + 12;
  v12 = v9 + 12;
  v86 = v9 + 12;
  v73 = v9 + 12;
  v83 = (unsigned __int64)&v9[2
                            * (unsigned int)(((unsigned int)v9[10]
                                            + 4095LL
                                            + (unsigned __int64)((v9[8] + v9[11]) & 0xFFF)) >> 12)
                            + 10];
  v13 = *((unsigned int *)P + 46);
  if ( (_DWORD)v13 == -1 )
    v87 = -1LL;
  else
    v87 = (unsigned __int64)&v9[2 * v13 + 12];
  v14 = P[20];
  v78 = P[30];
  v82 = P[27];
  v81 = v14;
  v72 = 17;
  ImagePageOk = (*((_BYTE *)P + 191) & 8) != 0 ? 0xC0000434 : 0;
  v74 = ImagePageOk;
  if ( !a3 )
  {
    CurrentIrql = 17;
    v85 = 17;
    goto LABEL_13;
  }
  CurrentIrql = KeGetCurrentIrql();
  v85 = CurrentIrql;
  __writecr8(1uLL);
  if ( *((char *)P + 191) < 0 )
    goto LABEL_11;
  if ( (*(_BYTE *)(a3 + 216) & 7) != 0 )
  {
    KiLeaveGuardedRegionUnsafe(v10);
LABEL_11:
    ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a3);
    goto LABEL_13;
  }
  KeLeaveCriticalRegionThread(v10);
  ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)a3);
LABEL_13:
  if ( v14 )
  {
    if ( CurrentIrql == 17 )
    {
      v17 = MiLockPageInline(v14);
      v72 = v17;
    }
    else
    {
      v17 = 17;
      MiLockPageAtDpcInline(v14);
    }
    if ( !(unsigned int)MiAreChargesNeededToLockPage(v14) || (unsigned int)MiChargeForLockedPage(v18, 1LL) )
      ++*(_WORD *)(v14 + 32);
    MiLockOwnedProtoPage(v14, v17, v19);
    v12 = v11;
  }
  if ( (v6[188] & 1) != 0 )
  {
    *((_DWORD *)v6 + 20) = -1073741670;
    *((_QWORD *)v6 + 11) = 0LL;
  }
  v20 = *((_DWORD *)v6 + 20);
  v77 = 17;
  v76 = v20;
  if ( *((char **)v6 + 2) != v6 + 16 )
  {
    v80 = MiInvalidateCollidedIos(v6);
    if ( v80 != 1 )
    {
      *((_DWORD *)v6 + 20) = -1073741801;
      *((_QWORD *)v6 + 11) = 0LL;
    }
  }
  if ( v14 )
  {
    MiLockPageAtDpcInline(v14);
    MiRemoveLockedPageChargeAndDecRef(v14);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  if ( a3 && (v6[189] & 4) == 0 )
  {
    if ( !(unsigned int)MiIsFaultPteIntact(v82, (__int64)v5, (_QWORD *)v6 + 21) )
      ImagePageOk = -1073740748;
    v74 = ImagePageOk;
  }
  if ( v20 >= 0
    && ((v6[189] & 4) != 0 || *((_QWORD *)v6 + 31) || (_QWORD *)v83 != v11 && v87 > (unsigned __int64)(v90 + 14))
    && (v21 = v6[190], (v21 & 7) != 0)
    && (v6[191] & 4) != 0
    && (v21 & 0x80u) == 0 )
  {
    DecayPfn = MiCreateDecayPfn((v21 >> 4) & 7);
    v23 = 0LL;
  }
  else
  {
    v23 = 0LL;
    DecayPfn = 0LL;
  }
  v24 = 0;
  BugCheckParameter2 = (ULONG_PTR)DecayPfn;
  v25 = 0LL;
  v91 = 0LL;
  v26 = 2LL;
  if ( (unsigned __int64)v12 > v83 )
    goto LABEL_191;
  v27 = 0x4000000000000000LL;
  while ( 1 )
  {
    v28 = 48LL * *v12 - 0x58000000000LL;
    if ( v28 == qword_1402FF240 )
      goto LABEL_59;
    if ( v24 )
    {
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
      {
        MiInsertAndUnlockStandbyPages((__int64)DecayPfn, v95, v24, v77);
        v23 = 0LL;
        v24 = 0;
        --v12;
LABEL_58:
        v26 = 2LL;
        v27 = 0x4000000000000000LL;
LABEL_59:
        v31 = v77;
        goto LABEL_60;
      }
    }
    else
    {
      v77 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v88 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v88);
          while ( (*(_QWORD *)(v28 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v28 + 24), 0x3FuLL) );
        v14 = v81;
        v27 = 0x4000000000000000LL;
        v26 = 2LL;
      }
    }
    v29 = 0;
    if ( (*(_DWORD *)v92 & 1) != 0 )
    {
      v30 = *(_WORD *)(v92 + 2);
      if ( v30 )
        *(_WORD *)(v92 + 2) = v30 - 1;
    }
    if ( (*(_QWORD *)(v28 + 24) & 0x4000000000000000LL) != 0 )
    {
      v29 = 2;
      goto LABEL_68;
    }
    v32 = *(_BYTE *)(v28 + 35);
    if ( (v32 & 0x10) != 0 )
    {
      if ( v28 == v78 )
      {
        v33 = v76;
        if ( v76 >= 0 )
          v33 = -1073741761;
        v76 = v33;
      }
      goto LABEL_67;
    }
    if ( v76 < 0 )
    {
      *(_BYTE *)(v28 + 35) = v32 | 0x10;
LABEL_67:
      v29 = 1;
      goto LABEL_68;
    }
    if ( (unsigned __int64)v73 >= v87 )
    {
      v29 = 1;
      if ( v28 == v78 )
        ImagePageOk = -1073740748;
      *(_BYTE *)(v28 + 35) = v32 | 0x10;
      v74 = ImagePageOk;
    }
LABEL_68:
    v34 = v78;
    if ( v28 == v78 && !v29 && ImagePageOk != -1073740748 && a3 && (v6[189] & 4) == 0 )
    {
      if ( !(unsigned int)MiImagePageOk(v82, v28) )
      {
        v6[189] |= 0x10u;
        if ( v24 )
        {
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v95, v24, 0x11u);
          v24 = 0;
        }
        v35 = MI_READ_PTE_LOCK_FREE(*(_QWORD *)(v28 + 8) | 0x8000000000000000uLL);
        ImagePageOk = MiMakeImagePageOk(v82, v5, v35, a3, v28, v14);
        v74 = ImagePageOk;
        if ( (*(_QWORD *)(v28 + 24) & 0x4000000000000000LL) != 0 )
          v29 = 2;
      }
      v34 = v78;
    }
    *(_BYTE *)(v28 + 34) &= ~0x20u;
    if ( v29 )
    {
      if ( v24 )
      {
        MiInsertAndUnlockStandbyPages(BugCheckParameter2, v95, v24, 0x11u);
        v24 = 0;
      }
      if ( v29 == 1 )
      {
        if ( ((v6[189] & 8) == 0 || v80 == 1)
          && (*(_DWORD *)(v28 + 16) & 0x400LL) == 0
          && !(unsigned int)MI_IS_PFN_COMMIT_NOT_CHARGED(v28, v26) )
        {
          v36 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v28 + 40)) >> 8) & 0x3FF);
          MiChargeCommit(v36, 1uLL, 4uLL);
        }
        MiRestoreTransitionPte(v28, 2LL);
        *(_QWORD *)(v28 + 24) |= 0x4000000000000000uLL;
        if ( (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 )
          *(_QWORD *)(v28 + 16) &= 0xFFFFFFFFFFFFCFFFuLL;
      }
      MiRemoveLockedPageChargeAndDecRef(v28);
      _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v31 = v77;
      __writecr8(v77);
      v12 = v73;
      v23 = 0LL;
      v27 = 0x4000000000000000LL;
      v26 = 2LL;
      goto LABEL_60;
    }
    *(_QWORD *)v28 = 0LL;
    if ( v28 == v34 )
    {
      v37 = v89;
      v79 = 1;
      if ( v89 )
      {
        if ( v24 )
        {
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v95, v24, 0x11u);
          v24 = 0;
        }
        MiSwapHardFaultPage(v5, v28, v37, v27);
        v78 = v37;
        v89 = 0LL;
        v34 = v37;
        v28 = v37;
      }
      if ( v28 == v34 && ImagePageOk >= 0 && a3 && (v6[189] & 4) == 0 )
      {
        if ( v24 )
        {
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v95, v24, 0x11u);
          v24 = 0;
        }
        MiAddLockedPageCharge(v28, 3LL);
        v38 = *(_BYTE *)(v28 + 34) & 0xFE;
        *(_QWORD *)(v28 + 24) ^= (*(_QWORD *)(v28 + 24) ^ (*(_QWORD *)(v28 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        *(_BYTE *)(v28 + 34) = v38 | 6;
        MiRemoveLockedPageChargeAndDecRef(v28);
        v39 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v28 + 40)) >> 8) & 0x3FF);
        v40 = *(_DWORD *)(v28 + 16);
        v91 = v39;
        if ( (v40 & 0x400) == 0 && (unsigned int)MI_IS_PTE_IN_STORE_EX(v39, *(_QWORD *)(v28 + 16)) )
          v25 = MiCaptureDirtyBitToPfn(v28);
        if ( (*(_QWORD *)(v28 + 40) & 0x200000000000000LL) != 0 )
        {
          v41 = qword_140381310;
          v42 = (*v5 >> 5) & 0x1F;
          v43 = MmProtectToPteMask[v42] ^ (*v5 ^ MmProtectToPteMask[v42]) & 0xFFFFFFFFF000LL | 0x21;
          if ( (unsigned __int64)(v5 + 0x12098000000LL) <= 0x3FFFFFFF )
            v43 &= ~qword_140381310 & 0x7FFFFFFFFFFFFFFFLL;
          if ( (unsigned __int64)v5 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL)
                                     - 0x98000000000LL
            && (unsigned __int64)v5 >= 0xFFFFF68000000000uLL
            || (unsigned __int64)v5 >= 0xFFFFF6FB40000000uLL
            && (unsigned __int64)v5 <= (((unsigned __int64)MmHighestUserAddress >> 18) & 0x3FFFFFF8) - 0x904C0000000LL
            || (unsigned __int64)v5 >= 0xFFFFF6FB7DA00000uLL
            && (unsigned __int64)v5 <= (((unsigned __int64)MmHighestUserAddress >> 27) & 0x1FFFF8) - 0x90482600000LL
            || (unsigned __int64)v5 >= 0xFFFFF6FB7DBED000uLL
            && (unsigned __int64)v5 <= 8 * (((unsigned __int64)MmHighestUserAddress >> 39) & 0x1FF) - 0x90482413000LL )
          {
            v43 |= 4uLL;
          }
          if ( (unsigned int)MI_SHOULD_PTE_BE_GLOBAL(v5) )
            v43 |= 0x100uLL;
          if ( (_DWORD)v42 == 24 )
          {
            if ( (*(_DWORD *)(v28 + 16) & 0x400LL) == 0 )
              v43 = ~v41 & (v43 | 0x8000000000000000uLL);
            v44 = *(_BYTE *)(v28 + 34) >> 6;
            if ( v44 != 1 )
            {
              if ( v44 )
              {
                if ( v44 == 2 )
                  v43 = v43 & 0xFFFFFFFFFFFFFFE7uLL | 8;
              }
              else
              {
                v43 |= 0x18uLL;
              }
            }
          }
          *v5 = v43;
          if ( (unsigned int)MiPteInShadowRange(v5) )
            MiWritePteShadow(v5, v43);
          v14 = v81;
          if ( v93 )
            *v93 = v43;
        }
        goto LABEL_137;
      }
    }
    if ( v6[190] >= 0 )
    {
      v45 = *(_WORD *)(v28 + 32);
      if ( !v45 )
        KeBugCheckEx(
          0x4Eu,
          0x9AuLL,
          (v28 + 0x58000000000LL) / 48,
          *(_BYTE *)(v28 + 34) & 7,
          *(unsigned __int16 *)(v28 + 32));
      v71 = v45 == 1;
      v46 = v45 - 1;
      *(_WORD *)(v28 + 32) = v46;
      if ( v71 && (*(_QWORD *)(v28 + 40) & 0x10000000000000LL) != 0 )
      {
LABEL_185:
        if ( v24 == 16 )
        {
          MiInsertAndUnlockStandbyPages(BugCheckParameter2, v95, 0x10u, 0x11u);
          v12 = v73;
          v23 = 0LL;
          v24 = 1;
          v95[0] = v28;
        }
        else
        {
          v12 = v73;
          v23 = 0LL;
          v59 = v24++;
          v95[v59] = v28;
        }
        goto LABEL_58;
      }
      v47 = *(_QWORD *)(v28 + 40);
      if ( (v47 & 0x10000000000000LL) != 0 )
        goto LABEL_137;
      v48 = *(_QWORD *)(v28 + 24) & 0x3FFFFFFFFFFFFFFFLL;
      if ( v46 )
      {
        if ( v46 != 1 )
        {
          if ( v46 == 2 && v48 )
          {
LABEL_152:
            if ( (*(_BYTE *)(v28 + 34) & 8) != 0 )
              goto LABEL_153;
          }
LABEL_137:
          v12 = v73;
          goto LABEL_138;
        }
        if ( !v48 )
          goto LABEL_152;
LABEL_153:
        v49 = 0;
      }
      else
      {
        v49 = 1;
      }
      v50 = *(_QWORD *)(v28 + 8) | 0x8000000000000000uLL;
      if ( (v50 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
         || v50 < 0xFFFFF68000000000uLL)
        && ((*(unsigned __int8 *)(v28 + 35) >> 5) & 1) != 0 )
      {
        *(_BYTE *)(v28 + 35) &= ~0x20u;
        goto LABEL_184;
      }
      if ( (v47 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v28 + 16) & 0x400LL) != 0 )
      {
        v51 = 1;
      }
      else if ( (unsigned int)MI_IS_PFN_COMMIT_NOT_CHARGED(v28, 0x8000000000000000uLL) )
      {
        v51 = 1;
      }
      else if ( v49 == 1 && v52 )
      {
        v51 = 1;
      }
      v53 = (HIDWORD(v47) >> 8) & 0x3FF;
      if ( v53 == 1023 )
        v54 = &MiSystemPartition;
      else
        v54 = *(int **)(qword_1402FEC28 + 8LL * v53);
      if ( v51 == 1 )
        MiReturnCommit(v54, 1LL);
      if ( v54 == &MiSystemPartition )
      {
        CurrentPrcb = KeGetCurrentPrcb();
        v56 = 1LL;
        CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
        if ( (_DWORD)CachedResidentAvailable != -1 )
        {
          if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
          {
            while ( 1 )
            {
              v58 = _InterlockedCompareExchange(
                      (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                      CachedResidentAvailable + 1,
                      CachedResidentAvailable);
              v71 = (_DWORD)CachedResidentAvailable == v58;
              LODWORD(CachedResidentAvailable) = v58;
              if ( v71 )
                break;
              if ( v58 == -1 || (unsigned __int64)(v58 + 1LL) > 0x100 )
                goto LABEL_178;
            }
LABEL_182:
            _InterlockedExchangeAdd64(&qword_1402FF640, 1uLL);
LABEL_184:
            v71 = v49 == 0;
            v14 = v81;
            if ( !v71 )
              goto LABEL_185;
            goto LABEL_137;
          }
LABEL_178:
          if ( (int)CachedResidentAvailable > 192
            && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                    (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                    192,
                                                    CachedResidentAvailable) )
          {
            v56 = (int)CachedResidentAvailable - 192 + 1LL;
          }
        }
        _InterlockedExchangeAdd64(&qword_140301480, v56);
        goto LABEL_182;
      }
      _InterlockedExchangeAdd64((volatile signed __int64 *)v54 + 744, 1uLL);
      goto LABEL_184;
    }
    v12 = v73;
    *v73 |= 0x8000000000000000uLL;
LABEL_138:
    v31 = v77;
    v26 = 2LL;
    v27 = 0x4000000000000000LL;
    _InterlockedAnd64((volatile signed __int64 *)(v28 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v23 = 0LL;
    if ( !v24 )
      __writecr8(v77);
LABEL_60:
    v73 = ++v12;
    if ( (unsigned __int64)v12 > v83 )
      break;
    ImagePageOk = v74;
    DecayPfn = (PSLIST_ENTRY)BugCheckParameter2;
  }
  if ( v24 )
  {
    v60 = v24;
    v61 = BugCheckParameter2;
    MiInsertAndUnlockStandbyPages(BugCheckParameter2, v95, v60, v31);
    v11 = v86;
    goto LABEL_192;
  }
  v11 = v86;
LABEL_191:
  v61 = BugCheckParameter2;
LABEL_192:
  v62 = v85;
  if ( v14 )
  {
    v63 = v72;
    if ( v85 != 17 )
      v63 = 17;
    MiLockPageAtDpcInline(v14);
    *(_BYTE *)(v14 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(v14);
    _InterlockedAnd64((volatile signed __int64 *)(v14 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    if ( v63 != 17 )
      __writecr8(v63);
  }
  if ( v6[190] < 0 )
  {
    MmCheckCachedPageStates(v82 + (*((_DWORD *)v6 + 24) & 0x3FFFF), (unsigned int)v90[10], 2LL);
    v64 = 1LL;
    v65 = (v83 - (unsigned __int64)v11 + 8) >> 3;
    if ( (unsigned __int64)v11 > v83 )
      v65 = 0LL;
    if ( v65 )
    {
      v66 = v86;
      do
      {
        if ( *v66 < 0 )
        {
          v67 = *v66 & 0x7FFFFFFFFFFFFFFFLL;
          *v66 = v67;
          v68 = 48 * v67 - 0x58000000000LL;
          v69 = (unsigned __int8)MiLockPageInline(v68);
          MiRemoveLockedPageChargeAndDecRef(v68);
          _InterlockedAnd64((volatile signed __int64 *)(v68 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v69);
        }
        ++v66;
        ++v64;
      }
      while ( v64 <= v65 );
      v6 = v94;
      v61 = BugCheckParameter2;
      v62 = v85;
    }
  }
  if ( v61 )
    MiDecayPfnFullyInitialized(v61);
  if ( v25 )
    MiReleasePageFileInfo(v91, v25, 0LL);
  if ( a3 && v6[191] < 0 )
    MiUnlockWorkingSetExclusive(a3, v62, v23);
  if ( (v6[191] & 0x10) == 0 )
    ObDereferenceObjectDeferDeleteWithTag(*((PVOID *)v6 + 24), 0x746C6644u);
  if ( *((int *)v6 + 44) > 1 )
    KeSetEvent((PRKEVENT)(v6 + 56), 0, 0);
  MiFreeInPageSupportBlock(v6);
  if ( v89 )
  {
    MiReleaseFreshPage(v89);
    MiReturnResidentAvailable(1LL);
    _InterlockedExchangeAdd64(&qword_1402FF4D0, 1uLL);
    MiReturnCommit(&MiSystemPartition, 1LL);
  }
  result = (unsigned int)v76;
  if ( v76 >= 0 )
  {
    v71 = v79 == 0;
    result = v74;
    goto LABEL_223;
  }
  if ( (*(_DWORD *)v92 & 1) != 0 )
  {
    v71 = (*(_DWORD *)v92 & 2) == 0;
LABEL_223:
    if ( v71 )
      return 3221226548LL;
  }
  return result;
}
