/*
 * XREFs of MiFinishHardFault @ 0x1400B6EE0
 * Callers:
 *     MiWaitForInPageComplete @ 0x140087120 (MiWaitForInPageComplete.c)
 * Callees:
 *     MiFreeInPageSupportBlock @ 0x140033DF0 (MiFreeInPageSupportBlock.c)
 *     MiReturnResidentAvailable @ 0x1400380DC (MiReturnResidentAvailable.c)
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     KeSetEvent @ 0x14004C230 (KeSetEvent.c)
 *     MmCheckCachedPageStates @ 0x1400509D0 (MmCheckCachedPageStates.c)
 *     MiInsertAndUnlockStandbyPages @ 0x1400553B0 (MiInsertAndUnlockStandbyPages.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiImagePageOk @ 0x1400790FC (MiImagePageOk.c)
 *     MiIsFaultPteIntact @ 0x14007BFC0 (MiIsFaultPteIntact.c)
 *     ExpWaitForSpinLockExclusiveAndAcquire @ 0x14007EC50 (ExpWaitForSpinLockExclusiveAndAcquire.c)
 *     MiUnlockWorkingSetExclusive @ 0x14008ABC0 (MiUnlockWorkingSetExclusive.c)
 *     MiChargeCommit @ 0x14008F4A0 (MiChargeCommit.c)
 *     ObDereferenceObjectDeferDeleteWithTag @ 0x14009C420 (ObDereferenceObjectDeferDeleteWithTag.c)
 *     MiAddLockedPageCharge @ 0x1400B50C0 (MiAddLockedPageCharge.c)
 *     MiUnlockProtoPoolPage @ 0x1400B5110 (MiUnlockProtoPoolPage.c)
 *     MiReturnCommit @ 0x1400B7E40 (MiReturnCommit.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     MiCreateDecayPfn @ 0x1400E0F20 (MiCreateDecayPfn.c)
 *     MiDecayPfnFullyInitialized @ 0x1400E10AC (MiDecayPfnFullyInitialized.c)
 *     MiRelockProtoPoolPage @ 0x1400E2960 (MiRelockProtoPoolPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x1400E2D48 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiRestoreTransitionPte @ 0x1400E5CA0 (MiRestoreTransitionPte.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     MiReleaseFreshPage @ 0x1400FCD50 (MiReleaseFreshPage.c)
 *     MiInvalidateCollidedIos @ 0x14012CBCC (MiInvalidateCollidedIos.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 *     MiMakeImagePageOk @ 0x14021712C (MiMakeImagePageOk.c)
 *     MiSwapHardFaultPage @ 0x140217428 (MiSwapHardFaultPage.c)
 *     MiReadPteShadow @ 0x140225564 (MiReadPteShadow.c)
 *     MiWritePteShadow @ 0x140225904 (MiWritePteShadow.c)
 *     MiMakeTransitionPteValid @ 0x140225E1C (MiMakeTransitionPteValid.c)
 *     ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented @ 0x140264044 (ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented.c)
 */

__int64 __fastcall MiFinishHardFault(
        _QWORD *P,
        unsigned __int64 *a2,
        volatile signed __int32 *a3,
        __int64 a4,
        __int64 a5)
{
  __int64 CurrentIrql; // rbx
  __int64 *v6; // rdi
  _DWORD *v7; // rsi
  _QWORD *v8; // r13
  _DWORD *v9; // rax
  __int64 i; // rdx
  volatile signed __int32 *v11; // r9
  __int64 v12; // r8
  _QWORD *v13; // r12
  __int64 v14; // rcx
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rbp
  __int64 v18; // r14
  __int64 v19; // r15
  int v20; // eax
  __int16 v21; // ax
  __int16 v22; // ax
  unsigned int v23; // ebx
  unsigned int v24; // eax
  char *v25; // rdx
  __int64 v26; // rbx
  unsigned int v27; // ebx
  int IsFaultPteIntact; // eax
  int v29; // ecx
  unsigned __int8 v30; // cl
  __int64 DecayPfn; // rcx
  __int64 v32; // r9
  unsigned int v33; // r14d
  unsigned __int64 v34; // rdi
  __int64 v35; // r8
  __int64 v36; // rsi
  unsigned int v37; // ebx
  int v38; // ebx
  __int16 v39; // ax
  int v40; // eax
  char v41; // al
  int v42; // eax
  int v43; // ecx
  _QWORD *v44; // r8
  __int64 v45; // rax
  unsigned __int64 v46; // rcx
  __int16 *v47; // rax
  __int64 v48; // rbx
  char v49; // al
  __int16 *v50; // rax
  __int64 v51; // rdx
  __int64 v52; // r8
  __int64 v53; // r9
  __int64 v54; // rcx
  unsigned __int64 TransitionPteValid; // rbx
  _DWORD *v56; // r11
  char v57; // al
  __int16 v58; // ax
  __int64 v59; // r10
  __int16 v60; // ax
  __int64 v61; // rcx
  int v62; // ebp
  unsigned __int64 v63; // rdx
  unsigned __int64 v64; // r9
  __int64 v65; // rcx
  int v66; // r8d
  unsigned __int16 v67; // cx
  __int16 *v68; // rbx
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int64 v70; // r9
  __int64 CachedResidentAvailable; // rdx
  signed __int32 v72; // eax
  __int64 v73; // rax
  unsigned int v74; // r8d
  ULONG_PTR v75; // r14
  unsigned __int8 v76; // al
  unsigned __int64 v77; // r12
  __int64 *v78; // r15
  __int64 v79; // rax
  __int64 v80; // rsi
  unsigned __int8 v81; // bp
  unsigned int v82; // ebx
  __int64 result; // rax
  bool v84; // zf
  char v85; // [rsp+30h] [rbp-188h] BYREF
  signed int ImagePageOk; // [rsp+34h] [rbp-184h]
  int v87; // [rsp+38h] [rbp-180h]
  ULONG_PTR BugCheckParameter2; // [rsp+40h] [rbp-178h]
  int v89[2]; // [rsp+48h] [rbp-170h]
  __int64 v90; // [rsp+58h] [rbp-160h]
  int v91; // [rsp+60h] [rbp-158h]
  __int64 v92; // [rsp+68h] [rbp-150h]
  int v93; // [rsp+70h] [rbp-148h]
  unsigned __int64 v94; // [rsp+78h] [rbp-140h]
  unsigned __int64 v95; // [rsp+80h] [rbp-138h]
  int v96[2]; // [rsp+88h] [rbp-130h]
  int v97[2]; // [rsp+90h] [rbp-128h]
  __int64 v98; // [rsp+98h] [rbp-120h]
  unsigned __int64 v99; // [rsp+A0h] [rbp-118h]
  __int64 v100; // [rsp+A8h] [rbp-110h]
  _DWORD *v101; // [rsp+B0h] [rbp-108h]
  __int16 *v102; // [rsp+B8h] [rbp-100h]
  __int64 v103; // [rsp+C0h] [rbp-F8h]
  unsigned __int64 *v104; // [rsp+C8h] [rbp-F0h]
  _QWORD *v105; // [rsp+D0h] [rbp-E8h]
  _QWORD v106[16]; // [rsp+E0h] [rbp-D8h] BYREF

  v6 = (__int64 *)P[28];
  v7 = P + 32;
  v8 = P;
  v100 = a5;
  v9 = (_DWORD *)P[31];
  v105 = P;
  v104 = a2;
  i = 0LL;
  v98 = a4;
  v11 = a3;
  *(_QWORD *)v89 = a3;
  v12 = P[19];
  if ( v9 )
    v7 = v9;
  v91 = 0;
  v93 = 0;
  *(_QWORD *)v97 = v6;
  v13 = v7 + 12;
  v14 = (v7[8] + v7[11]) & 0xFFF;
  v15 = (unsigned int)v7[10] + 4095LL;
  v101 = v7;
  v94 = (unsigned __int64)&v7[2 * (unsigned int)((unsigned __int64)(v14 + v15) >> 12) + 10];
  v16 = *((unsigned int *)v8 + 46);
  if ( (_DWORD)v16 == -1 )
    v95 = -1LL;
  else
    v95 = (unsigned __int64)&v7[2 * v16 + 12];
  v17 = v8[30];
  v18 = v8[27];
  v19 = v8[20];
  v20 = -((*((_BYTE *)v8 + 191) & 8) != 0);
  v103 = v17;
  *(_QWORD *)v96 = v18;
  ImagePageOk = v20 & 0xC0000434;
  v85 = 17;
  if ( v11 )
  {
    CurrentIrql = KeGetCurrentIrql();
    v92 = CurrentIrql;
    __writecr8(1uLL);
    if ( *((char *)v8 + 191) < 0 )
      goto LABEL_16;
    if ( (v11[54] & 7) != 0 )
    {
      v22 = *(_WORD *)(v12 + 486) + 1;
      *(_WORD *)(v12 + 486) = v22;
      if ( !v22 && *(_QWORD *)(v12 + 152) != v12 + 152 )
        goto LABEL_15;
    }
    else
    {
      v21 = *(_WORD *)(v12 + 484) + 1;
      *(_WORD *)(v12 + 484) = v21;
      if ( !v21 && *(_QWORD *)(v12 + 152) != v12 + 152 && !*(_WORD *)(v12 + 486) )
      {
LABEL_15:
        KiCheckForKernelApcDelivery(v14);
        v11 = *(volatile signed __int32 **)v89;
      }
    }
LABEL_16:
    __writecr8(2uLL);
    if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
    {
      ExpAcquireSpinLockExclusiveAtDpcLevelInstrumented(v11);
    }
    else
    {
      v23 = 0;
      if ( _interlockedbittestandset(v11, 0x1Fu) )
      {
        v24 = ExpWaitForSpinLockExclusiveAndAcquire(v11);
        v11 = *(volatile signed __int32 **)v89;
        v23 = v24;
      }
      for ( i = *(unsigned int *)v11; (*v11 & 0xBFFFFFFF) != 0x80000000; i = *(unsigned int *)v11 )
      {
        if ( (i & 0x40000000) == 0 )
          _InterlockedCompareExchange(v11, i | 0x40000000, i);
        if ( (++v23 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
        {
          _mm_pause();
        }
        else
        {
          HvlNotifyLongSpinWait(v23);
          v11 = *(volatile signed __int32 **)v89;
        }
      }
      LOBYTE(CurrentIrql) = v92;
    }
    goto LABEL_30;
  }
  LOBYTE(CurrentIrql) = 17;
  v92 = CurrentIrql;
LABEL_30:
  if ( v19 )
  {
    v84 = (_BYTE)CurrentIrql == 17;
    v25 = &v85;
    v26 = 0LL;
    if ( !v84 )
      v25 = 0LL;
    MiRelockProtoPoolPage(v19, v25);
  }
  else
  {
    v26 = 0LL;
  }
  if ( (*((_BYTE *)v8 + 188) & 1) != 0 )
  {
    *((_DWORD *)v8 + 20) = -1073741670;
    v8[11] = 0LL;
  }
  LOBYTE(v26) = 17;
  v87 = *((_DWORD *)v8 + 20);
  v90 = v26;
  if ( (_QWORD *)v8[2] != v8 + 2 )
  {
    v93 = MiInvalidateCollidedIos(v8, i, v12, v11);
    if ( v93 != 1 )
    {
      *((_DWORD *)v8 + 20) = -1073741801;
      v8[11] = 0LL;
    }
  }
  if ( v19 )
  {
    v27 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v27 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v27);
      }
      while ( (*(_QWORD *)(v19 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(v19 + 24), 0x3FuLL) );
    }
    MiRemoveLockedPageChargeAndDecRef(v19);
    _InterlockedAnd64((volatile signed __int64 *)(v19 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    LOBYTE(v26) = v90;
  }
  if ( *(_QWORD *)v89 && (*((_BYTE *)v8 + 189) & 4) == 0 )
  {
    IsFaultPteIntact = MiIsFaultPteIntact(v18, v6, v8 + 21);
    v29 = ImagePageOk;
    if ( !IsFaultPteIntact )
      v29 = -1073740748;
    ImagePageOk = v29;
  }
  if ( v87 >= 0
    && ((*((_BYTE *)v8 + 189) & 4) != 0 || v8[31] || (_DWORD *)v94 != v7 + 12 && v95 > (unsigned __int64)(v7 + 14))
    && (v30 = *((_BYTE *)v8 + 190), (v30 & 7) != 0)
    && (*((_BYTE *)v8 + 191) & 4) != 0
    && (v30 & 0x80u) == 0 )
  {
    DecayPfn = MiCreateDecayPfn((v30 >> 4) & 7);
    v32 = 0LL;
  }
  else
  {
    v32 = 0LL;
    DecayPfn = 0LL;
  }
  v33 = 0;
  BugCheckParameter2 = DecayPfn;
  v34 = 0LL;
  v99 = 0LL;
  v102 = 0LL;
  if ( (unsigned __int64)v13 > v94 )
    goto LABEL_210;
  v35 = 3221225535LL;
  while ( 1 )
  {
    v36 = 48LL * *v13 - 0x58000000000LL;
    if ( v36 == qword_14034F700 )
      goto LABEL_158;
    if ( !v33 )
    {
      v90 = KeGetCurrentIrql();
      __writecr8(2uLL);
      v37 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
      {
        do
        {
          if ( (++v37 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v37);
        }
        while ( (*(_QWORD *)(v36 + 24) & 0x8000000000000000uLL) != 0
             || _interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) );
        v35 = 3221225535LL;
        v32 = 0LL;
      }
LABEL_76:
      v38 = 0;
      if ( (*(_DWORD *)v100 & 1) != 0 )
      {
        v39 = *(_WORD *)(v100 + 2);
        if ( v39 )
          *(_WORD *)(v100 + 2) = v39 - 1;
      }
      if ( (*(_QWORD *)(v36 + 24) & 0x4000000000000000LL) != 0 )
      {
        v40 = 2;
      }
      else
      {
        v41 = *(_BYTE *)(v36 + 35);
        if ( (v41 & 0x10) != 0 )
        {
          if ( v36 == v17 )
          {
            v42 = v87;
            if ( v87 >= 0 )
              v42 = -1073741761;
            v87 = v42;
          }
        }
        else
        {
          if ( v87 >= 0 )
          {
            if ( (unsigned __int64)v13 >= v95 )
            {
              v43 = ImagePageOk;
              if ( v36 == v17 )
                v43 = -1073740748;
              *(_BYTE *)(v36 + 35) = v41 | 0x10;
              v38 = 1;
              ImagePageOk = v43;
LABEL_91:
              if ( v36 == v17 && !v38 && v43 != -1073740748 && *(_QWORD *)v89 && (*((_BYTE *)v8 + 189) & 4) == 0 )
              {
                if ( !MiImagePageOk(*(unsigned __int64 *)v96, v36) )
                {
                  *((_BYTE *)v8 + 189) |= 0x10u;
                  if ( v33 )
                  {
                    MiInsertAndUnlockStandbyPages(BugCheckParameter2, v106, v33, 0x11u);
                    v33 = 0;
                  }
                  v44 = (_QWORD *)(*(_QWORD *)(v36 + 8) | 0x8000000000000000uLL);
                  v45 = *v44;
                  if ( (unsigned __int64)(v44 + 0x12090482600LL) <= 0x7F8 )
                    LODWORD(v45) = MiReadPteShadow(*(_QWORD *)(v36 + 8) | 0x8000000000000000uLL, *v44);
                  ImagePageOk = MiMakeImagePageOk(v96[0], v97[0], v45, v89[0], v36, v19);
                  if ( (*(_QWORD *)(v36 + 24) & 0x4000000000000000LL) != 0 )
                    v38 = 2;
                }
                v32 = 0LL;
              }
              *(_BYTE *)(v36 + 34) &= ~0x20u;
              if ( v38 )
              {
                if ( v33 )
                {
                  MiInsertAndUnlockStandbyPages(BugCheckParameter2, v106, v33, 0x11u);
                  v33 = 0;
                }
                if ( v38 == 1 )
                {
                  if ( ((*((_BYTE *)v8 + 189) & 8) == 0 || v93 == 1) && (*(_DWORD *)(v36 + 16) & 0x400LL) == 0 )
                  {
                    v46 = *(_QWORD *)(v36 + 8) | 0x8000000000000000uLL;
                    if ( v46 > (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
                      || v46 < 0xFFFFF68000000000uLL
                      || ((*(unsigned __int8 *)(v36 + 35) >> 5) & 1) == 0 )
                    {
                      v47 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v36 + 40)) >> 8) & 0x3FF);
                      MiChargeCommit((__int64)v47, 1uLL, 4);
                    }
                  }
                  MiRestoreTransitionPte(v36, 2LL);
                  *(_QWORD *)(v36 + 24) |= 0x4000000000000000uLL;
                  if ( (*(_DWORD *)(v36 + 16) & 0x400LL) == 0 )
                    *(_QWORD *)(v36 + 16) &= 0xFFFFFFFFFFFFFFF9uLL;
                }
                MiRemoveLockedPageChargeAndDecRef(v36);
                _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                LOBYTE(v26) = v90;
                goto LABEL_155;
              }
              *(_QWORD *)v36 = 0LL;
              if ( v36 == v17 )
              {
                v48 = v98;
                v91 = 1;
                if ( v98 )
                {
                  if ( v33 )
                  {
                    MiInsertAndUnlockStandbyPages(BugCheckParameter2, v106, v33, 0x11u);
                    v33 = 0;
                  }
                  MiSwapHardFaultPage(*(_QWORD *)v97, v36, v48, v32);
                  v103 = v48;
                  v98 = 0LL;
                  v17 = v48;
                  v36 = v48;
                }
                if ( v36 == v17 && ImagePageOk >= 0 && *(_QWORD *)v89 && (*((_BYTE *)v8 + 189) & 4) == 0 )
                {
                  if ( v33 )
                  {
                    MiInsertAndUnlockStandbyPages(BugCheckParameter2, v106, v33, 0x11u);
                    v33 = 0;
                  }
                  MiAddLockedPageCharge(v36, 3LL, v35);
                  v49 = *(_BYTE *)(v36 + 34) & 0xFE;
                  *(_QWORD *)(v36 + 24) ^= (*(_QWORD *)(v36 + 24) ^ (*(_QWORD *)(v36 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
                  *(_BYTE *)(v36 + 34) = v49 | 6;
                  MiRemoveLockedPageChargeAndDecRef(v36);
                  v50 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(v36 + 40)) >> 8) & 0x3FF);
                  v54 = *(_QWORD *)(v36 + 16);
                  v102 = v50;
                  if ( (v54 & 0x400) == 0 )
                  {
                    v51 = (unsigned __int8)v54;
                    LOBYTE(v51) = (unsigned __int8)v54 >> 2;
                    if ( (v54 & 4) != 0 && (unsigned __int16)v54 >> 12 == *((_DWORD *)v50 + 261) )
                    {
                      v34 = MiCaptureDirtyBitToPfn(v36);
                      v99 = v34;
                    }
                  }
                  if ( (*(_QWORD *)(v36 + 40) & 0x200000000000000LL) != 0 )
                  {
                    TransitionPteValid = MiMakeTransitionPteValid(*(_QWORD *)v97, v51, v52, v53);
                    if ( ((*v56 >> 5) & 0x1F) == 0x18 )
                    {
                      if ( (*(_DWORD *)(v36 + 16) & 0x400LL) == 0 )
                        TransitionPteValid = ~qword_1403D0220 & (TransitionPteValid | 0x8000000000000000uLL);
                      v57 = *(_BYTE *)(v36 + 34) >> 6;
                      if ( v57 != 1 )
                      {
                        if ( v57 )
                        {
                          if ( v57 == 2 )
                          {
                            if ( byte_14034EBA8 == 1 )
                              TransitionPteValid = TransitionPteValid & 0xFFFFFFFFFFFFFFE7uLL | 8;
                            else
                              TransitionPteValid = TransitionPteValid & 0xFFFFFFFFFFFFFFE7uLL | 0x10;
                          }
                        }
                        else
                        {
                          TransitionPteValid |= 0x18uLL;
                        }
                      }
                    }
                    *(_QWORD *)v56 = TransitionPteValid;
                    if ( (unsigned __int64)(v56 + 0x24120904C00LL) <= 0x7F8 )
                      MiWritePteShadow(v56, TransitionPteValid);
                    if ( v104 )
                      *v104 = TransitionPteValid;
                  }
                  goto LABEL_154;
                }
              }
              if ( *((char *)v8 + 190) < 0 )
              {
                *v13 |= 0x8000000000000000uLL;
                goto LABEL_154;
              }
              v58 = *(_WORD *)(v36 + 32);
              if ( !v58 )
                KeBugCheckEx(
                  0x4Eu,
                  0x9AuLL,
                  (v36 + 0x58000000000LL) / 48,
                  *(_BYTE *)(v36 + 34) & 7,
                  *(unsigned __int16 *)(v36 + 32));
              v59 = *(_QWORD *)(v36 + 24);
              v60 = v58 - 1;
              *(_WORD *)(v36 + 32) = v60;
              v61 = v59 & 0x3FFFFFFFFFFFFFFFLL;
              if ( !v60 )
              {
                v62 = 1;
LABEL_172:
                v63 = *(_QWORD *)(v36 + 8) | 0x8000000000000000uLL;
                v64 = (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
                if ( (v63 > v64 || v63 < 0xFFFFF68000000000uLL) && ((*(unsigned __int8 *)(v36 + 35) >> 5) & 1) != 0 )
                {
                  *(_BYTE *)(v36 + 35) &= ~0x20u;
                  goto LABEL_203;
                }
                v65 = *(_QWORD *)(v36 + 40);
                v66 = 0;
                if ( (v65 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v36 + 16) & 0x400LL) != 0 )
                {
                  v66 = 1;
                }
                else if ( v63 <= v64 && v63 >= 0xFFFFF68000000000uLL && ((*(unsigned __int8 *)(v36 + 35) >> 5) & 1) != 0 )
                {
                  v66 = 1;
                }
                else if ( v62 == 1 && (v59 & 0x4000000000000000LL) != 0 )
                {
                  v66 = 1;
                }
                v67 = (HIDWORD(v65) >> 8) & 0x3FF;
                if ( v67 == 1023 )
                  v68 = MiSystemPartition;
                else
                  v68 = *(__int16 **)(qword_14034F0E8 + 8LL * v67);
                if ( v66 == 1 )
                  MiReturnCommit(v68, 1LL);
                if ( v68 != MiSystemPartition )
                {
                  _InterlockedExchangeAdd64((volatile signed __int64 *)v68 + 696, 1uLL);
LABEL_203:
                  if ( v62 )
                  {
                    if ( v33 == 16 )
                    {
                      MiInsertAndUnlockStandbyPages(BugCheckParameter2, v106, 0x10u, 0x11u);
                      LOBYTE(v26) = v90;
                      v32 = 0LL;
                      v33 = 1;
                      v106[0] = v36;
                    }
                    else
                    {
                      LOBYTE(v26) = v90;
                      v32 = 0LL;
                      v73 = v33++;
                      v106[v73] = v36;
                    }
                    goto LABEL_157;
                  }
LABEL_154:
                  LOBYTE(v26) = v90;
                  _InterlockedAnd64((volatile signed __int64 *)(v36 + 24), 0x7FFFFFFFFFFFFFFFuLL);
                  if ( v33 )
                  {
LABEL_156:
                    v32 = 0LL;
                    goto LABEL_157;
                  }
LABEL_155:
                  __writecr8((unsigned __int8)v26);
                  goto LABEL_156;
                }
                CurrentPrcb = KeGetCurrentPrcb();
                v70 = 1LL;
                CachedResidentAvailable = (int)CurrentPrcb->CachedResidentAvailable;
                if ( (_DWORD)CachedResidentAvailable != -1 )
                {
                  if ( (unsigned __int64)(CachedResidentAvailable + 1) <= 0x100 )
                  {
                    do
                    {
                      v72 = _InterlockedCompareExchange(
                              (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                              CachedResidentAvailable + 1,
                              CachedResidentAvailable);
                      v84 = (_DWORD)CachedResidentAvailable == v72;
                      LODWORD(CachedResidentAvailable) = v72;
                      if ( v84 )
                        goto LABEL_201;
                    }
                    while ( v72 != -1 && (unsigned __int64)(v72 + 1LL) <= 0x100 );
                  }
                  if ( (int)CachedResidentAvailable > 192
                    && (_DWORD)CachedResidentAvailable == _InterlockedCompareExchange(
                                                            (volatile signed __int32 *)&CurrentPrcb->CachedResidentAvailable,
                                                            192,
                                                            CachedResidentAvailable) )
                  {
                    v70 = (int)CachedResidentAvailable - 192 + 1LL;
                  }
                }
                _InterlockedExchangeAdd64(&qword_1403552C0, v70);
LABEL_201:
                _InterlockedExchangeAdd64(&qword_14034FB00, 1uLL);
                goto LABEL_203;
              }
              if ( v60 == 1 )
              {
                if ( v61 )
                {
LABEL_170:
                  v62 = 0;
                  goto LABEL_172;
                }
              }
              else if ( v60 != 2 || !v61 )
              {
                goto LABEL_154;
              }
              if ( (*(_BYTE *)(v36 + 34) & 8) == 0 )
                goto LABEL_154;
              goto LABEL_170;
            }
LABEL_90:
            v43 = ImagePageOk;
            goto LABEL_91;
          }
          *(_BYTE *)(v36 + 35) = v41 | 0x10;
        }
        v40 = 1;
      }
      v38 = v40;
      goto LABEL_90;
    }
    if ( !_interlockedbittestandset64((volatile signed __int32 *)(v36 + 24), 0x3FuLL) )
      goto LABEL_76;
    MiInsertAndUnlockStandbyPages(DecayPfn, v106, v33, v26);
    v32 = 0LL;
    v33 = 0;
    --v13;
LABEL_157:
    v35 = 3221225535LL;
LABEL_158:
    if ( (unsigned __int64)++v13 > v94 )
      break;
    v17 = v103;
    DecayPfn = BugCheckParameter2;
  }
  if ( v33 )
  {
    v74 = v33;
    v75 = BugCheckParameter2;
    MiInsertAndUnlockStandbyPages(BugCheckParameter2, v106, v74, v26);
    v7 = v101;
    goto LABEL_211;
  }
  v7 = v101;
LABEL_210:
  v75 = BugCheckParameter2;
LABEL_211:
  if ( v19 )
  {
    v76 = v85;
    if ( (_BYTE)v92 != 17 )
      v76 = 17;
    MiUnlockProtoPoolPage(v19, v76);
  }
  if ( *((char *)v8 + 190) < 0 )
  {
    MmCheckCachedPageStates(*(_QWORD *)v96 + (v8[12] & 0x3FFFF), (unsigned int)v7[10], 2u, 0LL);
    v77 = v94;
    v78 = (__int64 *)(v7 + 12);
    if ( (unsigned __int64)(v7 + 12) <= v94 )
    {
      do
      {
        if ( *v78 < 0 )
        {
          v79 = *v78 & 0x7FFFFFFFFFFFFFFFLL;
          *v78 = v79;
          v80 = 48 * v79 - 0x58000000000LL;
          v81 = KeGetCurrentIrql();
          __writecr8(2uLL);
          v82 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v80 + 24), 0x3FuLL) )
          {
            do
            {
              if ( (++v82 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
                _mm_pause();
              else
                HvlNotifyLongSpinWait(v82);
            }
            while ( (*(_QWORD *)(v80 + 24) & 0x8000000000000000uLL) != 0
                 || _interlockedbittestandset64((volatile signed __int32 *)(v80 + 24), 0x3FuLL) );
          }
          MiRemoveLockedPageChargeAndDecRef(v80);
          _InterlockedAnd64((volatile signed __int64 *)(v80 + 24), 0x7FFFFFFFFFFFFFFFuLL);
          __writecr8(v81);
        }
        ++v78;
      }
      while ( (unsigned __int64)v78 <= v77 );
      v34 = v99;
      v8 = v105;
      v75 = BugCheckParameter2;
    }
  }
  if ( v75 )
    MiDecayPfnFullyInitialized(v75);
  if ( v34 )
    MiReleasePageFileInfo(v102, v34, 0LL);
  if ( *(_QWORD *)v89 && *((char *)v8 + 191) < 0 )
    MiUnlockWorkingSetExclusive(*(__int64 *)v89, v92);
  if ( (*((_BYTE *)v8 + 191) & 0x10) == 0 )
    ObDereferenceObjectDeferDeleteWithTag((PVOID)v8[24], 0x746C6644u);
  if ( *((int *)v8 + 44) > 1 )
    KeSetEvent((PRKEVENT)(v8 + 7), 0, 0);
  MiFreeInPageSupportBlock((char *)v8);
  if ( v98 )
  {
    MiReleaseFreshPage(v98);
    MiReturnResidentAvailable(1uLL);
    _InterlockedExchangeAdd64(&qword_14034F950, 1uLL);
    MiReturnCommit(MiSystemPartition, 1LL);
  }
  result = (unsigned int)v87;
  if ( v87 >= 0 )
  {
    v84 = v91 == 0;
    result = (unsigned int)ImagePageOk;
    goto LABEL_245;
  }
  if ( (*(_DWORD *)v100 & 1) != 0 )
  {
    v84 = (*(_DWORD *)v100 & 2) == 0;
LABEL_245:
    if ( v84 )
      return 3221226548LL;
  }
  return result;
}
