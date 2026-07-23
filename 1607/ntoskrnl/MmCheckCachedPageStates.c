/*
 * XREFs of MmCheckCachedPageStates @ 0x140033630
 * Callers:
 *     CcPinFileData @ 0x140031960 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x140032AD0 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x140033460 (CcMapAndRead.c)
 *     CcMapAndCopyInToCache @ 0x140034AE0 (CcMapAndCopyInToCache.c)
 *     MiFinishHardFault @ 0x14004D220 (MiFinishHardFault.c)
 *     CcMapDataForOverwrite @ 0x14006CF94 (CcMapDataForOverwrite.c)
 * Callees:
 *     KxWaitForLockOwnerShip @ 0x14001B920 (KxWaitForLockOwnerShip.c)
 *     MiReferenceControlAreaPfn @ 0x140023264 (MiReferenceControlAreaPfn.c)
 *     MiPfnReferenceCountIsZero @ 0x14002400C (MiPfnReferenceCountIsZero.c)
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     MiIsPfnInline @ 0x1400304A0 (MiIsPfnInline.c)
 *     MiMakeSystemCacheRangeValid @ 0x140031410 (MiMakeSystemCacheRangeValid.c)
 *     MiReadyStandbyPageForActive @ 0x140034430 (MiReadyStandbyPageForActive.c)
 *     MiMakeValidKernelPte @ 0x140034890 (MiMakeValidKernelPte.c)
 *     MiUnlinkStandbyBatch @ 0x140035470 (MiUnlinkStandbyBatch.c)
 *     MiGetPage @ 0x14003D5D0 (MiGetPage.c)
 *     MmAccessFault @ 0x14003E320 (MmAccessFault.c)
 *     MiUnlockProtoPoolPage @ 0x14004C060 (MiUnlockProtoPoolPage.c)
 *     MiRemoveLockedPageCharge @ 0x14004CD60 (MiRemoveLockedPageCharge.c)
 *     MiLockProtoPoolPage @ 0x14004E900 (MiLockProtoPoolPage.c)
 *     MiUnlinkPageFromList @ 0x1400655C0 (MiUnlinkPageFromList.c)
 *     KxReleaseQueuedSpinLock @ 0x1400690F0 (KxReleaseQueuedSpinLock.c)
 *     MiMarkPteDirty @ 0x14009CF08 (MiMarkPteDirty.c)
 *     MiReleaseFreshPage @ 0x1400AAB5C (MiReleaseFreshPage.c)
 *     MiInitializePageColorBase @ 0x1400E3F40 (MiInitializePageColorBase.c)
 *     MiInitializePfn @ 0x1400E5120 (MiInitializePfn.c)
 *     MiProtectionToCacheAttribute @ 0x1400E538C (MiProtectionToCacheAttribute.c)
 *     MiSubsectionUsingExtents @ 0x1400E5DB4 (MiSubsectionUsingExtents.c)
 *     MiPfnZeroingNeeded @ 0x140104F58 (MiPfnZeroingNeeded.c)
 *     MiZeroPhysicalPage @ 0x140108208 (MiZeroPhysicalPage.c)
 *     MiDiscardTransitionPte @ 0x140123E30 (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     KiAcquireQueuedSpinLockInstrumented @ 0x1401D380C (KiAcquireQueuedSpinLockInstrumented.c)
 *     MiCaptureSystemCachePte @ 0x1401E6BA0 (MiCaptureSystemCachePte.c)
 *     MiPteInShadowRange @ 0x1401EF1E4 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401EF484 (MiWritePteShadow.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401F237C (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE @ 0x1401F239C (MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE.c)
 *     MI_GET_PFN_FROM_PTE @ 0x1401F23C0 (MI_GET_PFN_FROM_PTE.c)
 *     MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE @ 0x1401F23E4 (MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401F23FC (MI_READ_PTE_LOCK_FREE.c)
 *     MiGetPrototypePteDirect @ 0x1401F24DC (MiGetPrototypePteDirect.c)
 *     MiInvalidPteConforms @ 0x1401F24F0 (MiInvalidPteConforms.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  unsigned int v4; // r14d
  unsigned __int8 v5; // di
  __int64 v6; // r15
  ULONG_PTR v7; // r12
  unsigned __int64 v8; // r13
  __int64 v9; // rsi
  unsigned __int64 v10; // r10
  __int64 v11; // rax
  unsigned __int64 v12; // r11
  unsigned __int64 v13; // r10
  unsigned __int64 v14; // rdx
  unsigned __int16 v15; // ax
  int *v16; // rax
  char v17; // bl
  unsigned __int8 v18; // al
  char v19; // r9
  unsigned __int8 v20; // r10
  __int64 v21; // rax
  char v22; // r10
  ULONG_PTR v23; // r14
  __int64 v24; // rax
  __int64 v25; // rax
  __int64 v26; // rax
  unsigned __int64 v27; // rax
  __int64 v28; // r9
  ULONG_PTR v29; // rdi
  __int64 v30; // rax
  bool v31; // zf
  char v32; // al
  unsigned __int64 v33; // r14
  __int64 v34; // rax
  char v35; // r8
  unsigned int v36; // eax
  __int64 v37; // r15
  unsigned int v38; // r12d
  _QWORD *v39; // rdx
  int v40; // r13d
  __int64 v41; // rax
  __int64 v42; // r13
  __int64 v43; // rdx
  int v44; // eax
  char v45; // r14
  _WORD *v46; // r8
  __int16 v47; // dx
  int *v48; // rcx
  __int64 Page; // rax
  ULONG_PTR v50; // r15
  __int64 v51; // r14
  unsigned int v52; // eax
  __int64 v53; // r12
  __int64 v54; // rax
  unsigned int v55; // edi
  __int64 ValidKernelPte; // rax
  __int64 v57; // rdx
  __int64 v58; // rcx
  unsigned __int8 CurrentIrql; // di
  __int64 v60; // rax
  __int64 v61; // r8
  struct _KTHREAD *CurrentThread; // rdi
  int v63; // eax
  unsigned int Flink; // ecx
  unsigned int v65; // r14d
  __int64 v66; // rax
  int v67; // eax
  int v68; // ecx
  unsigned __int64 i; // rax
  __int64 v70; // rcx
  __int64 v71; // rax
  _BYTE v73[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v74; // [rsp+34h] [rbp-CCh]
  char v75; // [rsp+38h] [rbp-C8h]
  __int64 v76; // [rsp+40h] [rbp-C0h] BYREF
  int v77; // [rsp+48h] [rbp-B8h]
  __int64 v78; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v79; // [rsp+58h] [rbp-A8h]
  int v80; // [rsp+60h] [rbp-A0h]
  ULONG_PTR PrototypePteDirect; // [rsp+68h] [rbp-98h]
  __int64 v82; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v83; // [rsp+78h] [rbp-88h]
  __int64 v84; // [rsp+80h] [rbp-80h] BYREF
  int v85; // [rsp+88h] [rbp-78h] BYREF
  int v86; // [rsp+8Ch] [rbp-74h] BYREF
  int v87; // [rsp+90h] [rbp-70h] BYREF
  __int64 v88; // [rsp+98h] [rbp-68h] BYREF
  int *v89; // [rsp+A0h] [rbp-60h]
  __int64 v90; // [rsp+A8h] [rbp-58h]
  __int64 v91; // [rsp+B0h] [rbp-50h]
  __int64 v92; // [rsp+B8h] [rbp-48h]
  __int64 v93; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v94; // [rsp+C8h] [rbp-38h] BYREF
  int *v95; // [rsp+D0h] [rbp-30h]
  __int64 v96; // [rsp+D8h] [rbp-28h]
  __int64 v97; // [rsp+E0h] [rbp-20h] BYREF
  char *v98; // [rsp+E8h] [rbp-18h]
  _WORD *v99; // [rsp+F0h] [rbp-10h] BYREF
  __int16 v100; // [rsp+F8h] [rbp-8h]
  unsigned __int16 v101; // [rsp+FAh] [rbp-6h]
  _QWORD v102[16]; // [rsp+100h] [rbp+0h] BYREF

  v98 = a4;
  v77 = a3;
  v75 = 1;
  v80 = 0;
  v4 = 0;
  v94 = 0LL;
  v5 = 17;
  v95 = 0LL;
  v6 = 0LL;
  v96 = 0LL;
  v74 = 0;
  v73[0] = 17;
  v7 = 0LL;
  v91 = 0LL;
  v78 = 0LL;
  v8 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v79 = v8;
  v83 = (((a1 + a2 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v93 = MI_READ_PTE_LOCK_FREE(((v8 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v9 = 48 * MI_GET_PAGE_FRAME_FROM_PTE(&v93) - 0x58000000000LL;
  v90 = v9;
  v97 = MI_READ_PTE_LOCK_FREE(((v10 >> 18) & 0x3FFFFFF8) - 0x904C0000000LL);
  v11 = MI_GET_PFN_FROM_PTE(&v97);
  v14 = *(_QWORD *)(*(_QWORD *)(v11 + 16) + 40 * ((v13 >> 18) & 7) + 24);
  if ( (v14 & 1) != 0 )
    v14 &= ~1uLL;
  v92 = *(_QWORD *)v14;
  v15 = *(_WORD *)(v92 + 60) & 0x3FF;
  if ( v15 == 1023 )
    v16 = MiSystemPartition;
  else
    v16 = *(int **)(qword_140327038 + 8LL * v15);
  v89 = v16;
  while ( v8 <= v12 )
  {
    v17 = 0;
    v18 = MI_READ_PTE_LOCK_FREE(v8);
    if ( (v18 & v20) != 0 || (v21 = MiCaptureSystemCachePte(v8), v76 = v21, (v21 & 1) != 0) )
    {
      if ( (v19 & 4) != 0 )
      {
        if ( v5 != 17 )
        {
          MiUnlockProtoPoolPage(v6, v5);
          v5 = 17;
          v73[0] = 17;
        }
        MiMarkPteDirty(v8);
      }
      goto LABEL_123;
    }
    v23 = v7;
    if ( (v21 & 8) != 0 )
      v17 = v22;
    PrototypePteDirect = MiGetPrototypePteDirect(v21);
    v7 = PrototypePteDirect;
    if ( v5 == 17 )
      goto LABEL_19;
    if ( ((PrototypePteDirect ^ v23) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiUnlockProtoPoolPage(v6, v5);
      v5 = 17;
      v73[0] = 17;
LABEL_19:
      if ( ((v7 ^ v23) & 0xFFFFFFFFFFFFF000uLL) != 0 && v74 )
      {
        MiMakeSystemCacheRangeValid(v8 - 8LL * v74, v102, v74, v9);
        v74 = 0;
      }
      v24 = MI_READ_PTE_LOCK_FREE(v7);
      v82 = v24;
      if ( (v24 & 1) == 0 && ((v24 & 0x400) != 0 || (v24 & 0x800) == 0) )
      {
        v6 = 0LL;
        v78 = 0LL;
LABEL_84:
        v42 = MiGetPrototypePteDirect(v24);
        v44 = MiSubsectionUsingExtents(v42, v43);
        v45 = v77;
        if ( !v44 && (v77 & 1) != 0 )
        {
          MiInitializePageColorBase(0LL, (*(_DWORD *)(v92 + 56) >> 20) & 0x3F, &v99);
          v46 = v99;
          v47 = v100;
          v48 = v89;
          ++*v99;
          Page = MiGetPage(v48, v101 | (unsigned int)(unsigned __int16)(*v46 & v47), 2LL);
          v50 = Page;
          if ( Page != -1 )
          {
            v51 = 48 * Page - 0x58000000000LL;
            v52 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v82);
            v53 = (unsigned int)MiProtectionToCacheAttribute(v52);
            if ( (unsigned int)MiPfnZeroingNeeded(v51, v53) )
            {
              if ( v5 != 17 )
              {
                MiUnlockProtoPoolPage(v78, v5);
                v5 = 17;
                v73[0] = 17;
              }
              MiZeroPhysicalPage(v50);
              *(_QWORD *)(v51 + 16) = 0LL;
            }
            v7 = PrototypePteDirect;
            if ( v5 != 17 )
              goto LABEL_99;
            v78 = MiLockProtoPoolPage(PrototypePteDirect, v73);
            if ( !v78 )
            {
              do
              {
                MmAccessFault(2uLL, v7);
                v78 = MiLockProtoPoolPage(v7, v73);
              }
              while ( !v78 );
              v9 = v90;
            }
            v54 = MI_READ_PTE_LOCK_FREE(v7);
            v82 = v54;
            if ( (v54 & 1) == 0 && ((v54 & 0x800) == 0 || (v54 & 0x400) != 0) )
            {
LABEL_99:
              MiReferenceControlAreaPfn(v92, v42, 1u);
              v55 = MI_GET_PROTECTION_FROM_SOFT_PROTOTYPE_PTE(&v82);
              MiInitializePfn(v51, v7, v55);
              v8 = v79;
              ValidKernelPte = MiMakeValidKernelPte(v50, v55, v79);
              v76 = ValidKernelPte;
              *(_QWORD *)v7 = ValidKernelPte;
              if ( (unsigned int)MiPteInShadowRange(v7, ValidKernelPte) )
                MiWritePteShadow(v58, v57);
              goto LABEL_101;
            }
            v6 = v78;
            MiUnlockProtoPoolPage(v78, v73[0]);
            MiReleaseFreshPage(v51);
            v5 = 17;
            v73[0] = 17;
LABEL_80:
            v8 = v79;
            v7 = 0LL;
            v4 = v74;
            goto LABEL_81;
          }
          v6 = v78;
        }
        if ( (v45 & 2) != 0 )
        {
          v8 = v79;
        }
        else
        {
          if ( v5 != 17 )
          {
            MiUnlockProtoPoolPage(v6, v5);
            v73[0] = 17;
          }
          CurrentThread = KeGetCurrentThread();
          v8 = v79;
          v63 = BYTE4(CurrentThread[1].Queue);
          Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
          BYTE4(CurrentThread[1].Queue) = 1;
          v65 = v63 + 4 * Flink;
          v66 = (__int64)(v83 - v8) >> 3;
          if ( (unsigned int)v66 > Flink )
          {
            if ( (unsigned int)v66 > 0xF )
              LODWORD(v66) = 15;
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v66;
          }
          v67 = MmAccessFault(0LL, (__int64)(v8 << 25) >> 16);
          if ( v67 < 0 )
          {
            v68 = v80;
            if ( v80 >= 0 )
              v68 = v67;
            v80 = v68;
          }
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v65 >> 2;
          BYTE4(CurrentThread[1].Queue) = v65 & 3;
          v5 = v73[0];
        }
        v75 = 0;
        goto LABEL_122;
      }
      v78 = MiLockProtoPoolPage(v7, v73);
      v6 = v78;
      if ( !v78 )
      {
        do
        {
          MmAccessFault(2uLL, v7);
          v25 = MiLockProtoPoolPage(v7, v73);
          v78 = v25;
        }
        while ( !v25 );
        v9 = v90;
        v6 = v25;
        v8 = v79;
      }
      v5 = v73[0];
    }
    if ( (*(_BYTE *)v8 & 1) != 0 )
      goto LABEL_122;
    v24 = MI_READ_PTE_LOCK_FREE(v7);
    v82 = v24;
    if ( (v24 & 1) == 0 && ((v24 & 0x400) != 0 || (v24 & 0x800) == 0) )
      goto LABEL_84;
    while ( 1 )
    {
      while ( 1 )
      {
        v26 = MI_READ_PTE_LOCK_FREE(v7);
        v88 = v26;
        if ( (v26 & 1) == 0 )
          break;
        v27 = MI_GET_PAGE_FRAME_FROM_PTE(&v88);
LABEL_40:
        if ( MiIsPfnInline(v27) )
        {
          v29 = 48 * v28 - 0x58000000000LL;
          v85 = 0;
          if ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) )
          {
            do
            {
              do
                KeYieldProcessorEx(&v85);
              while ( (*(_QWORD *)(v29 + 24) & 0x8000000000000000uLL) != 0 );
            }
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v29 + 24), 0x3FuLL) );
            v9 = v90;
          }
          v30 = MI_READ_PTE_LOCK_FREE(v7);
          if ( v30 == v88 )
            goto LABEL_48;
          _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v26 & 0x400) != 0 || (v26 & 0x800) == 0 )
        break;
      if ( (unsigned int)MiInvalidPteConforms(v26) )
      {
        v27 = MI_GET_PAGE_FRAME_FROM_TRANSITION_PTE(&v88);
        goto LABEL_40;
      }
    }
    v29 = 0LL;
LABEL_48:
    v24 = MI_READ_PTE_LOCK_FREE(v7);
    v82 = v24;
    if ( !v29 )
    {
      v5 = v73[0];
      goto LABEL_84;
    }
    if ( (v24 & 1) == 0 )
    {
      v32 = *(_BYTE *)(v29 + 34);
      if ( (v32 & 0x20) != 0 || (*(_BYTE *)(v29 + 35) & 0x40) != 0 )
        goto LABEL_51;
      v33 = ((__int64)(v83 - v8) >> 3) + 1;
      if ( (v32 & 7) != 2 || v33 <= 1 )
        goto LABEL_76;
      v34 = MiGetPrototypePteDirect(*(_QWORD *)(v29 + 16));
      if ( (__int64)(*(_QWORD *)(v34 + 8) + 8LL * *(unsigned int *)(v34 + 44) - v7) >> 3 < v33 )
        v33 = (__int64)(*(_QWORD *)(v34 + 8) + 8LL * *(unsigned int *)(v34 + 44) - v7) >> 3;
      v36 = 4096 - (v7 & 0xFFF);
      if ( v33 > (unsigned __int64)v36 >> 3 )
        v33 = (unsigned __int64)v36 >> 3;
      if ( v33 > 16 - v74 )
        v33 = 16 - v74;
      if ( v33 > 1 )
      {
        v37 = 0LL;
        v84 = 0LL;
        if ( (v35 & 8) != 0 )
          v38 = 5;
        else
          v38 = v35 & 7;
        v94 = 0LL;
        v95 = &v89[10 * v38 + 504];
        if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
        {
          KiAcquireQueuedSpinLockInstrumented(&v94, &v89[10 * v38 + 504]);
        }
        else
        {
          v39 = (_QWORD *)_InterlockedExchange64((volatile __int64 *)&v89[10 * v38 + 504], (__int64)&v94);
          if ( v39 )
            KxWaitForLockOwnerShip((__int64)&v94, v39);
          v37 = v84;
        }
        v40 = MiUnlinkPageFromList(v29);
        if ( v40 == 1 )
        {
          v41 = MiUnlinkStandbyBatch((unsigned int)&v84, (int)PrototypePteDirect + 8, v38, v79, v33 - 1, (__int64)&v84);
          v37 = v84;
          v91 = v41;
        }
        KxReleaseQueuedSpinLock(&v94);
        if ( v37 )
        {
          MiDiscardTransitionPte(v37);
          _InterlockedAnd64((volatile signed __int64 *)(v37 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v7 = PrototypePteDirect;
      }
      else
      {
LABEL_76:
        v40 = MiUnlinkPageFromList(v29);
      }
      if ( v40 )
      {
        v8 = v79;
        MiReadyStandbyPageForActive(v29, v79);
        v76 = MI_READ_PTE_LOCK_FREE(v7);
        _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_101;
      }
      MiDiscardTransitionPte(v29);
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v5 = v73[0];
      v6 = v78;
      goto LABEL_80;
    }
    v31 = (*(_BYTE *)(v29 + 35) & 0x40) == 0;
    v76 = v24;
    if ( v31 )
    {
      *(_QWORD *)(v29 + 24) ^= (*(_QWORD *)(v29 + 24) ^ (*(_QWORD *)(v29 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      goto LABEL_101;
    }
LABEL_51:
    _InterlockedAnd64((volatile signed __int64 *)(v29 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    v5 = v73[0];
LABEL_122:
    v4 = v74;
LABEL_123:
    for ( i = 0LL; ; i = v61 & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_140326AE8 & 1) << 8) )
    {
      v76 = i;
      v8 += 8LL;
      v79 = v8;
      if ( (v17 & 2) != 0 )
      {
        i &= ~1uLL;
        v76 = i;
      }
      if ( v4 || i )
      {
        v70 = v4++;
        v74 = v4;
        v102[v70] = i;
        if ( v4 == 16 )
        {
          if ( v5 != 17 )
          {
            MiUnlockProtoPoolPage(v6, v5);
            v5 = 17;
            v73[0] = 17;
          }
          MiMakeSystemCacheRangeValid(v8 - 128, v102, 0x10u, v9);
          v4 = 0;
          v74 = 0;
        }
      }
      if ( !v91 )
        break;
      v7 += 8LL;
      --v91;
      v76 = MI_READ_PTE_LOCK_FREE(v7);
      v71 = MiCaptureSystemCachePte(v8);
      v93 = v71;
      if ( (v71 & 1) != 0 )
        v17 = 2;
      else
        v17 = (v71 & 8) != 0;
LABEL_101:
      CurrentIrql = KeGetCurrentIrql();
      __writecr8(2uLL);
      v86 = 0;
      if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
      {
        do
        {
          do
            KeYieldProcessorEx(&v86);
          while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
        }
        while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
        v8 = v79;
      }
      *(_QWORD *)(v9 + 24) ^= (*(_QWORD *)(v9 + 24) ^ (*(_QWORD *)(v9 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
      _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      __writecr8(CurrentIrql);
      if ( (v17 & 1) != 0 )
      {
        v60 = MI_GET_PAGE_FRAME_FROM_PTE(&v76);
        v61 = MiMakeValidKernelPte(v60, 1LL, v8);
      }
      else
      {
        v61 = v76;
        if ( (v77 & 4) != 0 && (v76 & 0x42) == 0 && (v76 & 0x800) != 0 )
          v61 = v76 | 0x42;
      }
      v5 = v73[0];
      v6 = v78;
      v4 = v74;
    }
LABEL_81:
    v12 = v83;
  }
  if ( v5 != 17 )
  {
    v87 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v87);
      while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *(_BYTE *)(v6 + 34) &= ~0x20u;
    if ( (unsigned int)MiRemoveLockedPageCharge(v6) )
      MiPfnReferenceCountIsZero(v6, (v6 + 0x58000000000LL) / 48);
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v73[0]);
  }
  if ( v4 )
    MiMakeSystemCacheRangeValid(v8 - 8LL * v4, v102, v4, v9);
  if ( v98 )
    *v98 = v75;
  return (unsigned int)v80;
}
