/*
 * XREFs of MmCheckCachedPageStates @ 0x1400A40D0
 * Callers:
 *     MiFinishHardFault @ 0x1400663D0 (MiFinishHardFault.c)
 *     CcMapAndCopyInToCache @ 0x140068870 (CcMapAndCopyInToCache.c)
 *     CcPinFileData @ 0x1400A2420 (CcPinFileData.c)
 *     CcFetchDataForRead @ 0x1400A3590 (CcFetchDataForRead.c)
 *     CcMapAndRead @ 0x1400A3F00 (CcMapAndRead.c)
 *     CcMapDataForOverwrite @ 0x1400E3728 (CcMapDataForOverwrite.c)
 * Callees:
 *     MiReleaseFreshPage @ 0x140007B08 (MiReleaseFreshPage.c)
 *     MiUnlinkPageFromList @ 0x14003E230 (MiUnlinkPageFromList.c)
 *     KxReleaseQueuedSpinLock @ 0x140040BF0 (KxReleaseQueuedSpinLock.c)
 *     MmAccessFault @ 0x14004BD30 (MmAccessFault.c)
 *     MiMakeValidKernelPte @ 0x14004D080 (MiMakeValidKernelPte.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiGetPage @ 0x1400549D0 (MiGetPage.c)
 *     MiRemoveLockedPageChargeAndDecRef @ 0x140065F30 (MiRemoveLockedPageChargeAndDecRef.c)
 *     MiLockProtoPoolPage @ 0x14006A190 (MiLockProtoPoolPage.c)
 *     MiUnlockProtoPoolPage @ 0x14006AD80 (MiUnlockProtoPoolPage.c)
 *     MI_INITIALIZE_COLOR_BASE @ 0x140070760 (MI_INITIALIZE_COLOR_BASE.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MiMarkPteDirty @ 0x1400A4E50 (MiMarkPteDirty.c)
 *     MiLockPageAtDpcInline @ 0x1400A5010 (MiLockPageAtDpcInline.c)
 *     MiMakeSystemCacheRangeValid @ 0x1400A5070 (MiMakeSystemCacheRangeValid.c)
 *     MiReadyStandbyPageForActive @ 0x1400A6DA0 (MiReadyStandbyPageForActive.c)
 *     MiSubsectionUsingExtents @ 0x1400A8E40 (MiSubsectionUsingExtents.c)
 *     MiUnlinkStandbyBatch @ 0x1400A9C40 (MiUnlinkStandbyBatch.c)
 *     MiPartitionIdToPointer @ 0x1400AA2C0 (MiPartitionIdToPointer.c)
 *     MiInitializePfn @ 0x1400AA390 (MiInitializePfn.c)
 *     MiReferenceControlAreaPfn @ 0x1400AB390 (MiReferenceControlAreaPfn.c)
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1400B1BD0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     MI_GET_PFN_PRIORITY @ 0x1400B8498 (MI_GET_PFN_PRIORITY.c)
 *     MiZeroPhysicalPage @ 0x1400FE170 (MiZeroPhysicalPage.c)
 *     MiDiscardTransitionPte @ 0x140117148 (MiDiscardTransitionPte.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 *     MI_CAPTURE_SYSTEM_CACHE_PTE @ 0x1401D5744 (MI_CAPTURE_SYSTEM_CACHE_PTE.c)
 *     MiPteInShadowRange @ 0x1401DE8F0 (MiPteInShadowRange.c)
 *     MiWritePteShadow @ 0x1401DEBC4 (MiWritePteShadow.c)
 */

__int64 __fastcall MmCheckCachedPageStates(unsigned __int64 a1, __int64 a2, int a3, char *a4)
{
  unsigned __int64 v4; // r12
  unsigned int v5; // ebx
  unsigned __int64 v6; // rdi
  unsigned __int8 v7; // r14
  __int64 v8; // r15
  __int64 v9; // r13
  __int64 v10; // rdx
  unsigned __int64 v11; // rsi
  int *v12; // r8
  char v13; // di
  unsigned __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rax
  unsigned __int64 v21; // rax
  unsigned __int64 v22; // rbx
  unsigned __int64 v23; // r9
  __int64 v24; // r9
  ULONG_PTR v25; // r14
  __int64 v26; // rax
  bool v27; // zf
  __int64 v28; // rdx
  unsigned __int16 v29; // ax
  char v30; // cl
  unsigned __int64 v31; // rbx
  unsigned int v32; // eax
  __int64 v33; // r12
  __int64 v34; // r8
  int v35; // r13d
  __int64 v36; // rax
  __int64 v37; // r12
  __int64 v38; // r10
  __int64 v39; // r10
  __int64 v40; // rax
  __int16 v41; // r9
  __int64 Page; // rax
  __int64 v43; // r9
  __int64 v44; // r13
  unsigned int v45; // ecx
  __int64 v46; // r8
  __int64 v47; // r14
  __int64 v48; // rax
  __int64 v49; // rbx
  __int64 v50; // r9
  unsigned __int64 v51; // rax
  unsigned __int64 v52; // rbx
  unsigned __int8 CurrentIrql; // bl
  __int64 v54; // rax
  __int64 v55; // r9
  unsigned __int64 ValidKernelPte; // rcx
  struct _KTHREAD *CurrentThread; // rbx
  int Teb_low; // eax
  unsigned int Flink; // ecx
  unsigned int v60; // r14d
  __int64 v61; // rax
  int v62; // eax
  int v63; // ecx
  char v64; // al
  __int64 v65; // rcx
  __int64 v66; // rax
  unsigned __int8 v68[4]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v69; // [rsp+34h] [rbp-CCh]
  char v70; // [rsp+38h] [rbp-C8h]
  __int64 v71; // [rsp+40h] [rbp-C0h] BYREF
  int v72; // [rsp+48h] [rbp-B8h]
  __int64 v73; // [rsp+50h] [rbp-B0h]
  unsigned __int64 v74; // [rsp+58h] [rbp-A8h]
  int v75; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v76; // [rsp+68h] [rbp-98h]
  __int64 v77; // [rsp+70h] [rbp-90h]
  unsigned __int64 v78; // [rsp+78h] [rbp-88h]
  int v79; // [rsp+80h] [rbp-80h] BYREF
  int v80; // [rsp+84h] [rbp-7Ch] BYREF
  __int64 v81; // [rsp+88h] [rbp-78h]
  __int64 v82; // [rsp+90h] [rbp-70h] BYREF
  __int64 v83; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v84; // [rsp+A0h] [rbp-60h] BYREF
  _WORD *v85; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v86; // [rsp+B0h] [rbp-50h]
  unsigned __int16 v87; // [rsp+B2h] [rbp-4Eh]
  __int64 v88; // [rsp+B8h] [rbp-48h]
  char *v89; // [rsp+C0h] [rbp-40h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+C8h] [rbp-38h] BYREF
  _QWORD v91[16]; // [rsp+E0h] [rbp-20h] BYREF

  v72 = a3;
  v89 = a4;
  memset(&LockHandle, 0, sizeof(LockHandle));
  v70 = 1;
  v4 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v75 = 0;
  v81 = 0LL;
  v5 = 0;
  v73 = 0LL;
  v6 = (((a2 + a1 - 1) >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  v69 = 0;
  v74 = v4;
  v7 = 17;
  v68[0] = 17;
  v76 = v6;
  v8 = 0LL;
  v9 = 0LL;
  v83 = MI_READ_PTE_LOCK_FREE(((v4 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL);
  v11 = 48 * (((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v83) >> 12) & 0xFFFFFFFFFLL) - 0x58000000000LL;
  v78 = v11;
  while ( v4 <= v6 )
  {
    v13 = 0;
    if ( (MI_READ_PTE_LOCK_FREE(v4) & 1) != 0 || (v15 = MI_CAPTURE_SYSTEM_CACHE_PTE(v4), v71 = v15, (v15 & 1) != 0) )
    {
      if ( (v72 & 4) != 0 )
      {
        if ( v7 != 17 )
        {
          MiUnlockProtoPoolPage(v9, v7);
          v7 = 17;
          v68[0] = 17;
        }
        MiMarkPteDirty(v4);
      }
      v14 = 0LL;
      v71 = 0LL;
      while ( 1 )
      {
        v4 += 8LL;
        v74 = v4;
        if ( (v13 & 2) != 0 )
        {
          v14 &= ~1uLL;
          v71 = v14;
        }
        if ( v5 || v14 )
        {
          v65 = v5++;
          v69 = v5;
          v91[v65] = v14;
          if ( v5 == 16 )
          {
            if ( v7 != 17 )
            {
              MiUnlockProtoPoolPage(v9, v7);
              v7 = 17;
              v68[0] = 17;
            }
            MiMakeSystemCacheRangeValid(v4 - 128, v91, 16LL, v11);
            v5 = 0;
            v69 = 0;
          }
        }
        if ( !v81 )
          break;
        v8 += 8LL;
        --v81;
        v71 = MI_READ_PTE_LOCK_FREE(v8);
        v66 = MI_CAPTURE_SYSTEM_CACHE_PTE(v4);
        v83 = v66;
        if ( (v66 & 1) != 0 )
          v13 = 2;
        else
          v13 = (v66 & 0x100) != 0;
LABEL_91:
        CurrentIrql = KeGetCurrentIrql();
        __writecr8(2uLL);
        v79 = 0;
        if ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) )
        {
          do
          {
            do
              KeYieldProcessorEx(&v79, v28, (__int64)v12);
            while ( (*(_QWORD *)(v11 + 24) & 0x8000000000000000uLL) != 0 );
          }
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v11 + 24), 0x3FuLL) );
          v4 = v74;
        }
        v10 = 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v11 + 24) ^= (*(_QWORD *)(v11 + 24) ^ (*(_QWORD *)(v11 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
        _InterlockedAnd64((volatile signed __int64 *)(v11 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        __writecr8(CurrentIrql);
        if ( (v13 & 1) != 0 )
        {
          v54 = MI_GET_PAGE_FRAME_FROM_PTE(&v71);
          ValidKernelPte = MiMakeValidKernelPte(v54, 1, v4, v55);
        }
        else
        {
          ValidKernelPte = v71;
          if ( (v72 & 4) != 0 && (v71 & 0x42) == 0 && (v71 & 0x800) != 0 )
            ValidKernelPte = v71 | 0x42;
        }
        v7 = v68[0];
        v9 = v73;
        v14 = ValidKernelPte & 0xFFFFFFFFFFFFFEFBuLL | ((unsigned __int64)(word_1402FE760 & 1) << 8);
LABEL_112:
        v71 = v14;
LABEL_113:
        v5 = v69;
      }
      goto LABEL_66;
    }
    v16 = v8;
    v13 = (v15 & 0x100) != 0;
    v8 = v15 >> 16;
    if ( v7 == 17 )
      goto LABEL_13;
    if ( ((v8 ^ v16) & 0xFFFFFFFFFFFFF000uLL) != 0 )
    {
      MiUnlockProtoPoolPage(v9, v7);
      v7 = 17;
      v68[0] = 17;
LABEL_13:
      if ( ((v8 ^ v16) & 0xFFFFFFFFFFFFF000uLL) != 0 && v69 )
      {
        MiMakeSystemCacheRangeValid(v4 - 8LL * v69, v91, v69, v11);
        v9 = 0LL;
        v69 = 0;
      }
      else
      {
        v9 = 0LL;
      }
      v17 = MI_READ_PTE_LOCK_FREE(v8);
      v18 = v17;
      if ( (v17 & 1) == 0 && ((v17 & 0x400) != 0 || (v17 & 0x800) == 0) )
      {
        v73 = 0LL;
        goto LABEL_70;
      }
      v73 = MiLockProtoPoolPage(v8, v68);
      v9 = v73;
      if ( !v73 )
      {
        do
        {
          MmAccessFault(2uLL, v8, 0, 0LL);
          v19 = MiLockProtoPoolPage(v8, v68);
          v73 = v19;
        }
        while ( !v19 );
        v11 = v78;
        v9 = v19;
        v4 = v74;
      }
      v7 = v68[0];
    }
    if ( (*(_BYTE *)v4 & 1) != 0 )
    {
      v14 = 0LL;
      v71 = 0LL;
      goto LABEL_113;
    }
    v20 = MI_READ_PTE_LOCK_FREE(v8);
    v18 = v20;
    if ( (v20 & 1) != 0 || (v20 & 0x400) == 0 && (v20 & 0x800) != 0 )
    {
      while ( 1 )
      {
        v21 = MI_READ_PTE_LOCK_FREE(v8);
        v84 = v21;
        v22 = v21;
        if ( (v21 & 1) == 0 )
          break;
        v23 = MI_GET_PAGE_FRAME_FROM_PTE(&v84);
LABEL_35:
        if ( MI_IS_PFN(v23) )
        {
          v25 = 48 * v24 - 0x58000000000LL;
          MiLockPageAtDpcInline(v25);
          if ( MI_READ_PTE_LOCK_FREE(v8) == v22 )
            goto LABEL_39;
          _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
      }
      if ( (v21 & 0x400) == 0 && (v21 & 0x800) != 0 )
      {
        v23 = (v21 >> 12) & 0xFFFFFFFFFLL;
        goto LABEL_35;
      }
      v25 = 0LL;
LABEL_39:
      v26 = MI_READ_PTE_LOCK_FREE(v8);
      v18 = v26;
      if ( !v25 )
      {
        v7 = v68[0];
        goto LABEL_70;
      }
      if ( (v26 & 1) != 0 )
      {
        v27 = (*(_BYTE *)(v25 + 35) & 0x40) == 0;
        v71 = v26;
        if ( !v27 )
          goto LABEL_42;
        v28 = 0x3FFFFFFFFFFFFFFFLL;
        *(_QWORD *)(v25 + 24) ^= (*(_QWORD *)(v25 + 24) ^ (*(_QWORD *)(v25 + 24) + 1LL)) & 0x3FFFFFFFFFFFFFFFLL;
LABEL_68:
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        goto LABEL_91;
      }
      v29 = ((unsigned int)HIDWORD(*(_QWORD *)(v25 + 40)) >> 8) & 0x3FF;
      if ( v29 == 1023 )
        v12 = MiSystemPartition;
      else
        v12 = *(int **)(qword_1402FEC28 + 8LL * v29);
      v30 = *(_BYTE *)(v25 + 34);
      if ( (v30 & 0x20) != 0 || (*(_BYTE *)(v25 + 35) & 0x40) != 0 )
      {
LABEL_42:
        _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v7 = v68[0];
LABEL_111:
        v14 = 0LL;
        goto LABEL_112;
      }
      v31 = ((__int64)(v76 - v4) >> 3) + 1;
      if ( (v30 & 7) != 2 || v31 <= 1 )
        goto LABEL_62;
      if ( (*(_QWORD *)((*(__int64 *)(v25 + 16) >> 16) + 8)
          + 8LL * *(unsigned int *)((*(__int64 *)(v25 + 16) >> 16) + 0x2C)
          - v8) >> 3 < v31 )
        v31 = (*(_QWORD *)((*(__int64 *)(v25 + 16) >> 16) + 8)
             + 8LL * *(unsigned int *)((*(__int64 *)(v25 + 16) >> 16) + 0x2C)
             - v8) >> 3;
      v32 = 4096 - (v8 & 0xFFF);
      if ( v31 > (unsigned __int64)v32 >> 3 )
        v31 = (unsigned __int64)v32 >> 3;
      if ( v31 > 16 - v69 )
        v31 = 16 - v69;
      if ( v31 > 1 )
      {
        v33 = 0LL;
        v82 = 0LL;
        LODWORD(v77) = MI_GET_PFN_PRIORITY(v25);
        KeAcquireInStackQueuedSpinLockAtDpcLevel(
          (PKSPIN_LOCK)(v34 + 8 * ((unsigned int)v77 + 4 * ((unsigned int)v77 + 59LL))),
          &LockHandle);
        v35 = MiUnlinkPageFromList(v25, 1);
        if ( v35 == 1 )
        {
          v36 = MiUnlinkStandbyBatch(v25, (int)v8 + 8, v77, v74, v31 - 1, (__int64)&v82);
          v33 = v82;
          v81 = v36;
        }
        KxReleaseQueuedSpinLock((volatile signed __int64 **)&LockHandle);
        if ( v33 )
        {
          MiDiscardTransitionPte(v33);
          _InterlockedAnd64((volatile signed __int64 *)(v33 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        }
        v4 = v74;
      }
      else
      {
LABEL_62:
        v35 = MiUnlinkPageFromList(v25, 0);
      }
      if ( v35 )
      {
        MiReadyStandbyPageForActive(v25, v4);
        v71 = MI_READ_PTE_LOCK_FREE(v8);
        goto LABEL_68;
      }
      MiDiscardTransitionPte(v25);
      _InterlockedAnd64((volatile signed __int64 *)(v25 + 24), 0x7FFFFFFFFFFFFFFFuLL);
      v7 = v68[0];
      v9 = v73;
      v8 = 0LL;
      v5 = v69;
LABEL_66:
      v6 = v76;
    }
    else
    {
LABEL_70:
      v37 = v18 >> 16;
      v88 = *(_QWORD *)(v18 >> 16);
      if ( (unsigned int)MiSubsectionUsingExtents(v18 >> 16, v10, v12)
        || (v72 & 1) == 0
        || (MI_INITIALIZE_COLOR_BASE(0LL, (*(_DWORD *)(v38 + 56) >> 20) & 0x3F, (__int64)&v85),
            ++*v85,
            v40 = MiPartitionIdToPointer(*(_WORD *)(v39 + 60) & 0x3FF),
            Page = MiGetPage(v40, v87 | (unsigned int)(unsigned __int16)(v41 & v86), 2u),
            v77 = Page,
            v43 = Page,
            Page == -1) )
      {
        if ( (v72 & 2) != 0 )
        {
          v4 = v74;
        }
        else
        {
          if ( v7 != 17 )
          {
            MiUnlockProtoPoolPage(v9, v7);
            v68[0] = 17;
          }
          CurrentThread = KeGetCurrentThread();
          v4 = v74;
          Teb_low = LOBYTE(CurrentThread[1].Teb);
          Flink = (unsigned int)CurrentThread[1].WaitListEntry.Flink;
          LOBYTE(CurrentThread[1].Teb) = 1;
          v60 = Teb_low + 4 * Flink;
          v61 = (__int64)(v76 - v4) >> 3;
          if ( (unsigned int)v61 > Flink )
          {
            if ( (unsigned int)v61 > 0xF )
              LODWORD(v61) = 15;
            LODWORD(CurrentThread[1].WaitListEntry.Flink) = v61;
          }
          v62 = MmAccessFault(0LL, (__int64)(v4 << 25) >> 16, 0, 0LL);
          if ( v62 < 0 )
          {
            v63 = v75;
            if ( v75 >= 0 )
              v63 = v62;
            v75 = v63;
          }
          v64 = v60 & 3;
          LODWORD(CurrentThread[1].WaitListEntry.Flink) = v60 >> 2;
          v7 = v68[0];
          LOBYTE(CurrentThread[1].Teb) = v64;
        }
        v70 = 0;
        goto LABEL_111;
      }
      v44 = 48 * Page - 0x58000000000LL;
      if ( *(_QWORD *)(v44 + 16) )
      {
        if ( v7 != 17 )
        {
          MiUnlockProtoPoolPage(v73, v7);
          v43 = v77;
          v7 = 17;
          v68[0] = 17;
        }
        v45 = (((unsigned __int64)v18 >> 5) & 0x1F) >> 3;
        if ( v45 == 3 && (((unsigned __int64)v18 >> 5) & 7) != 0 )
          v46 = 2LL;
        else
          v46 = v45 != 1;
        MiZeroPhysicalPage(v43, 1LL, v46);
        *(_QWORD *)(v44 + 16) = 0LL;
      }
      if ( v7 != 17 )
        goto LABEL_89;
      v73 = MiLockProtoPoolPage(v8, v68);
      v47 = v73;
      if ( !v73 )
      {
        do
        {
          MmAccessFault(2uLL, v8, 0, 0LL);
          v73 = MiLockProtoPoolPage(v8, v68);
          v47 = v73;
        }
        while ( !v73 );
        v11 = v78;
      }
      v48 = MI_READ_PTE_LOCK_FREE(v8);
      v18 = v48;
      if ( (v48 & 1) == 0 && ((v48 & 0x800) == 0 || (v48 & 0x400) != 0) )
      {
LABEL_89:
        MiReferenceControlAreaPfn(v88, v37, 1LL);
        v49 = ((unsigned __int64)v18 >> 5) & 0x1F;
        MiInitializePfn(v44, v8, (unsigned int)v49);
        v4 = v74;
        v51 = MiMakeValidKernelPte(v77, v49, v74, v50);
        v71 = v51;
        *(_QWORD *)v8 = v51;
        v52 = v51;
        if ( (unsigned int)MiPteInShadowRange(v8) )
          MiWritePteShadow(v8, v52);
        goto LABEL_91;
      }
      MiUnlockProtoPoolPage(v47, v68[0]);
      MiReleaseFreshPage(v44);
      v9 = v73;
      v4 = v74;
      v7 = 17;
      v5 = v69;
      v8 = 0LL;
      v6 = v76;
      v68[0] = 17;
    }
  }
  if ( v7 != 17 )
  {
    v80 = 0;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) )
    {
      do
      {
        do
          KeYieldProcessorEx(&v80, v10, (__int64)v12);
        while ( (*(_QWORD *)(v9 + 24) & 0x8000000000000000uLL) != 0 );
      }
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v9 + 24), 0x3FuLL) );
      v11 = v78;
    }
    *(_BYTE *)(v9 + 34) &= ~0x20u;
    MiRemoveLockedPageChargeAndDecRef(v9);
    _InterlockedAnd64((volatile signed __int64 *)(v9 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v68[0]);
  }
  if ( v5 )
    MiMakeSystemCacheRangeValid(v4 - 8LL * v5, v91, v5, v11);
  if ( v89 )
    *v89 = v70;
  return (unsigned int)v75;
}
