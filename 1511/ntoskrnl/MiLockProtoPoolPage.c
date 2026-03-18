/*
 * XREFs of MiLockProtoPoolPage @ 0x14006A190
 * Callers:
 *     MiReplaceLockedPage @ 0x140007BB8 (MiReplaceLockedPage.c)
 *     MiDeleteSegmentPages @ 0x14000BB90 (MiDeleteSegmentPages.c)
 *     MiDeleteMergedPte @ 0x14000E9A8 (MiDeleteMergedPte.c)
 *     MiInitializeImageProtos @ 0x14000EC10 (MiInitializeImageProtos.c)
 *     MiWalkVaRange @ 0x14001C524 (MiWalkVaRange.c)
 *     MiSectionCreated @ 0x140038BD8 (MiSectionCreated.c)
 *     MiDispatchFault @ 0x14004EB20 (MiDispatchFault.c)
 *     MiValidateImagePages @ 0x140064AE0 (MiValidateImagePages.c)
 *     MmCopyToCachedPage @ 0x140069110 (MmCopyToCachedPage.c)
 *     MiMigratePfn @ 0x140073740 (MiMigratePfn.c)
 *     MiZeroCfgSystemWideBitmapWorker @ 0x1400A0890 (MiZeroCfgSystemWideBitmapWorker.c)
 *     MmCheckCachedPageStates @ 0x1400A40D0 (MmCheckCachedPageStates.c)
 *     MiAllocateInPageSupport @ 0x1400AAD60 (MiAllocateInPageSupport.c)
 *     MiStealPage @ 0x1400ABC50 (MiStealPage.c)
 *     MiRemoveMappedPtes @ 0x1400B6D00 (MiRemoveMappedPtes.c)
 *     MiLockCode @ 0x1400B7B30 (MiLockCode.c)
 *     MiMakeImageReadOnly @ 0x1400E7680 (MiMakeImageReadOnly.c)
 *     MiPfPutPagesInTransition @ 0x1400FCDE0 (MiPfPutPagesInTransition.c)
 *     MiGetPageFileSectionForReservation @ 0x14010880C (MiGetPageFileSectionForReservation.c)
 *     MiConvertStandbyToProto @ 0x140127A94 (MiConvertStandbyToProto.c)
 *     MiConvertPrivateToProto @ 0x14012A57C (MiConvertPrivateToProto.c)
 *     MiResolveProtoCombine @ 0x14012AE34 (MiResolveProtoCombine.c)
 *     MiTranslatePageForCopy @ 0x1401D4068 (MiTranslatePageForCopy.c)
 *     MiPurgeImageSection @ 0x1401D8B68 (MiPurgeImageSection.c)
 *     MiDeletePerSessionProtos @ 0x1401E2DAC (MiDeletePerSessionProtos.c)
 *     MiInitializeProtoPfn @ 0x1401E3058 (MiInitializeProtoPfn.c)
 *     MiBuildFileOnlyProtos @ 0x1401E325C (MiBuildFileOnlyProtos.c)
 *     MiEliminateStaleExtents @ 0x1401E3504 (MiEliminateStaleExtents.c)
 * Callees:
 *     MiLockPageInline @ 0x1400116F0 (MiLockPageInline.c)
 *     MI_IS_PFN @ 0x140051760 (MI_IS_PFN.c)
 *     MiChargeCommit @ 0x140063610 (MiChargeCommit.c)
 *     MiReturnCommit @ 0x140067350 (MiReturnCommit.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     MI_WRITE_VALID_PTE_VOLATILE @ 0x1400B8CFC (MI_WRITE_VALID_PTE_VOLATILE.c)
 *     MiChargePartitionResidentAvailable @ 0x1400E30F8 (MiChargePartitionResidentAvailable.c)
 *     HvlNotifyLongSpinWait @ 0x1401AE950 (HvlNotifyLongSpinWait.c)
 *     MI_GET_PAGE_FRAME_FROM_PTE @ 0x1401CE7A4 (MI_GET_PAGE_FRAME_FROM_PTE.c)
 *     MI_READ_PTE_LOCK_FREE @ 0x1401CE7E8 (MI_READ_PTE_LOCK_FREE.c)
 */

__int64 __fastcall MiLockProtoPoolPage(unsigned __int64 a1, unsigned __int8 *a2)
{
  __int64 v3; // rbp
  __int64 v4; // rax
  unsigned __int64 v5; // rdi
  __int64 v6; // rbx
  unsigned __int8 CurrentIrql; // si
  __int64 v8; // rax
  __int64 v9; // r8
  __int64 v10; // rcx
  __int64 CurrentPrcb; // rdx
  __int64 v12; // rax
  bool v13; // si
  unsigned __int16 v14; // cx
  int *v15; // rdi
  unsigned __int64 v16; // rdx
  signed __int32 v17; // eax
  signed __int32 v18; // ett
  unsigned __int8 v19; // bp
  unsigned __int64 v20; // r14
  unsigned int v21; // edi
  unsigned __int64 v22; // rcx
  unsigned __int64 v23; // rbp
  unsigned int v24; // edi
  unsigned __int64 v26; // rax
  int v27; // [rsp+20h] [rbp-48h] BYREF
  __int64 v28; // [rsp+28h] [rbp-40h] BYREF
  int v29; // [rsp+88h] [rbp+20h] BYREF

  v3 = ((a1 >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL;
  do
  {
    v4 = MI_READ_PTE_LOCK_FREE(v3);
    v28 = v4;
    if ( (v4 & 1) == 0 || (v4 & 0x200) != 0 )
      return 0LL;
    v5 = ((unsigned __int64)MI_READ_PTE_LOCK_FREE(&v28) >> 12) & 0xFFFFFFFFFLL;
  }
  while ( !MI_IS_PFN(v5) );
  v6 = 48 * v5 - 0x58000000000LL;
  if ( a2 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    v29 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v29);
      while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
    }
    *a2 = CurrentIrql;
  }
  else
  {
    v27 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 24), 0x3FuLL) )
    {
      do
        KeYieldProcessorEx(&v27);
      while ( (*(_QWORD *)(v6 + 24) & 0x8000000000000000uLL) != 0 );
    }
  }
  v8 = MI_READ_PTE_LOCK_FREE(v3);
  v28 = v8;
  if ( (v8 & 1) != 0 && (v8 & 0x200) == 0 && v5 == MI_GET_PAGE_FRAME_FROM_PTE(&v28) )
  {
    v10 = *(_QWORD *)(v6 + 40);
    CurrentPrcb = 0x10000000000000LL;
    if ( (v10 & 0x10000000000000LL) != 0 )
      goto LABEL_45;
    CurrentPrcb = *(unsigned __int16 *)(v6 + 32);
    v9 = 0x3FFFFFFFFFFFFFFFLL;
    v12 = *(_QWORD *)(v6 + 24) & 0x3FFFFFFFFFFFFFFFLL;
    if ( !(_WORD)CurrentPrcb )
      goto LABEL_24;
    if ( (_WORD)CurrentPrcb != 1 )
    {
      if ( (_WORD)CurrentPrcb == 2 && v12 )
      {
LABEL_23:
        if ( (*(_BYTE *)(v6 + 34) & 8) != 0 )
          goto LABEL_24;
      }
      goto LABEL_45;
    }
    if ( !v12 )
      goto LABEL_23;
LABEL_24:
    v13 = 0;
    if ( (v10 & 0x200000000000000LL) != 0 && (*(_DWORD *)(v6 + 16) & 0x400LL) != 0 )
    {
      v13 = 1;
    }
    else
    {
      v16 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
      if ( v16 <= (((unsigned __int64)MmHighestUserAddress >> 9) & 0x7FFFFFFFF8LL) - 0x98000000000LL
        && v16 >= 0xFFFFF68000000000uLL )
      {
        v13 = ((*(unsigned __int8 *)(v6 + 35) >> 5) & 1) != 0;
      }
    }
    v14 = (HIDWORD(v10) >> 8) & 0x3FF;
    if ( v14 == 1023 )
      v15 = &MiSystemPartition;
    else
      v15 = *(int **)(qword_1402FEC28 + 8LL * v14);
    if ( !v13 || (unsigned int)MiChargeCommit((unsigned __int64)v15, 1uLL, 4uLL) )
    {
      v9 = 0xFFFFFFFFLL;
      if ( v15 == &MiSystemPartition )
      {
        CurrentPrcb = (__int64)KeGetCurrentPrcb();
        v17 = *(_DWORD *)(CurrentPrcb + 24516);
        while ( v17 )
        {
          if ( v17 == -1 )
            break;
          v18 = v17;
          v17 = _InterlockedCompareExchange((volatile signed __int32 *)(CurrentPrcb + 24516), v17 - 1, v17);
          if ( v18 == v17 )
            goto LABEL_43;
        }
      }
      if ( !(unsigned int)MiChargePartitionResidentAvailable(v15, 1LL, 0xFFFFFFFFLL) )
      {
        if ( v13 )
          MiReturnCommit((__int64)v15, 1uLL);
        goto LABEL_46;
      }
LABEL_43:
      if ( v15 == &MiSystemPartition )
        _InterlockedExchangeAdd64(&qword_1402FF600, 1uLL);
LABEL_45:
      ++*(_WORD *)(v6 + 32);
    }
LABEL_46:
    if ( a2 )
    {
      v19 = *a2;
      v20 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
      while ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        if ( v19 != 17 )
          __writecr8(v19);
        v21 = 0;
        while ( (*(_WORD *)(v6 + 34) & 0x20) != 0 )
        {
          if ( (++v21 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v21, CurrentPrcb, v9);
        }
        MiLockPageInline(v6);
      }
      *(_BYTE *)(v6 + 34) |= 0x20u;
      if ( (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v20) & 0x20) == 0 )
      {
        v22 = v20;
        goto LABEL_71;
      }
    }
    else
    {
      v23 = *(_QWORD *)(v6 + 8) | 0x8000000000000000uLL;
      while ( (*(_BYTE *)(v6 + 34) & 0x20) != 0 )
      {
        _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
        v24 = 0;
        while ( (*(_WORD *)(v6 + 34) & 0x20) != 0 )
        {
          if ( (++v24 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v24, CurrentPrcb, v9);
        }
        MiLockPageInline(v6);
      }
      *(_BYTE *)(v6 + 34) |= 0x20u;
      if ( (*(_QWORD *)(v6 + 24) & 0x4000000000000000LL) == 0 && (MI_READ_PTE_LOCK_FREE(v23) & 0x20) == 0 )
      {
        v22 = v23;
LABEL_71:
        MI_WRITE_VALID_PTE_VOLATILE(v22, 1LL);
      }
    }
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    return v6;
  }
  if ( a2 )
  {
    v26 = *a2;
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
    __writecr8(v26);
  }
  else
  {
    _InterlockedAnd64((volatile signed __int64 *)(v6 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  }
  return 0LL;
}
